void EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938858 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
    byte_5938858 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    219,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938856 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
    byte_5938856 = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
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

  if ( (byte_593885D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593885D = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0
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
      sub_21FFECC(Instance, v9);
    }
    if ( v14 >= *(_DWORD *)(v15 + 24) )
      sub_21FFED4(Instance);
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
  unsigned __int64 v14; // x25
  int32_t v15; // w23
  __int64 max_length; // x26
  EventRaceResultEntity_o *v18; // [xsp+0h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_593885B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593885B = 1;
  }
  v18 = 0;
  entity = 0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
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
      max_length = (unsigned int)groupIds->max_length;
      while ( 1 )
      {
        if ( v14 >= LODWORD(groupIds->max_length) )
          sub_21FFED4(Instance);
        if ( !v13 )
          break;
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     v13,
                                     &v18,
                                     eventId,
                                     termId,
                                     groupIds->m_Items[v14],
                                     v11);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v18 )
            break;
          if ( v18->fields.endedAt < nowTime )
            ++v15;
        }
        if ( max_length == ++v14 )
          return v15;
      }
LABEL_19:
      sub_21FFECC(Instance, v10);
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
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x9
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  v6 = EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method);
  if ( !v6 )
    goto LABEL_8;
  if ( !entity )
    sub_21FFECC(v6, v7);
  v8 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 24), (int)v9 >= 1) )
  {
    v10 = 0;
    v11 = v8 + 32;
    while ( *(_DWORD *)(v11 + 4 * v10) != groupId )
    {
      if ( (_DWORD)v9 == (_DWORD)++v10 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v10) = -1;
  }
  return v10;
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = eventId;
  if ( (byte_5938859 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    byte_5938859 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v18[4] = *(Il2CppClass **)&eventId;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), eventId, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (EventRaceEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__11_0; // x21
  Il2CppObject *v23; // x22
  struct EventRaceMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int v31; // w22
  int32_t v32; // w21

  v5 = eventId;
  if ( (byte_593885F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
    sub_21FFC50(&System_Comparison_EventRaceEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    sub_21FFC50(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__);
    sub_21FFC50(&EventRaceMaster___c_TypeInfo);
    byte_593885F = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventRaceEntity__get_Item__);
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v20[4] = *(Il2CppClass **)&eventId;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), eventId, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( Count == ++v10 )
        goto LABEL_15;
    }
LABEL_29:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  list = EventRaceMaster___c_TypeInfo;
  if ( !*(&EventRaceMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo, *(_QWORD *)&eventId);
    list = EventRaceMaster___c_TypeInfo;
  }
  static_fields = (struct EventRaceMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__11_0 = (System_Comparison_T__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&eventId);
      static_fields = EventRaceMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventRaceEntity__TypeInfo);
    System_Comparison_object____ctor(_9__11_0, v23, Method_EventRaceMaster___c__GetTermIndex_b__11_0__, 0);
    v24 = EventRaceMaster___c_TypeInfo->static_fields;
    v24->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)_9__11_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__11_0, (int32_t)_9__11_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v9 )
    goto LABEL_29;
  System_Collections_Generic_List_object___Sort_71636404(
    v9,
    _9__11_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  v31 = v9->fields._size;
  if ( v31 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v9,
               v32,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      if ( *((_DWORD *)list + 5) == termId )
        return v32;
      if ( v31 == ++v32 )
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

  if ( (byte_593885A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593885A = 1;
  }
  entity = 0;
  v17 = 0;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_20;
  v10 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  if ( !v10 )
    goto LABEL_20;
  v11 = (EventRaceResultMaster_o *)Instance;
  v12 = *(_QWORD *)(v10 + 24);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  Instance = NetworkManager__getTime(0);
  if ( (int)v12 >= 1 )
  {
    v14 = Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= *(unsigned int *)(v10 + 24) )
        sub_21FFED4(Instance);
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
    sub_21FFECC(Instance, v9);
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
  __int64 Instance; // x0
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

  if ( (byte_593885C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593885C = 1;
  }
  entity = 0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    if ( !entity )
      goto LABEL_21;
    v11 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
    if ( !v11 )
      goto LABEL_21;
    if ( (int)*(_QWORD *)(v11 + 24) >= 1 )
    {
      v12 = (float)rate;
      v13 = (TotalEventRaceMaster_o *)Instance;
      v14 = 0;
      v15 = (unsigned int)*(_QWORD *)(v11 + 24) - 1LL;
      v16 = v12 / 1000.0;
      while ( 1 )
      {
        if ( v14 >= *(unsigned int *)(v11 + 24) )
LABEL_22:
          sub_21FFED4(Instance);
        if ( !v13 )
          break;
        Instance = TotalEventRaceMaster__GetTotalPoint(v13, eventId, termId, *(_DWORD *)(v11 + 32 + 4 * v14), 0);
        if ( !entity )
          break;
        v17 = *(__int64 *)((char *)&qword_28 + (_QWORD)entity);
        if ( !v17 )
          break;
        if ( v14 >= *(unsigned int *)(v17 + 24) )
          goto LABEL_22;
        v18 = (float)Instance / (float)*(__int64 *)(v17 + 8 * v14 + 32);
        Instance = v16 < v18;
        if ( v16 < v18 || v15 == v14++ )
          return Instance;
      }
LABEL_21:
      sub_21FFECC(Instance, v10);
    }
  }
  LOBYTE(Instance) = 0;
  return Instance;
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

  if ( (byte_5938857 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
    byte_5938857 = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
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
  struct System_Int32_array *groupIds; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x27
  __int64 v18; // x29
  struct System_Int32_array *v19; // x8
  int32_t v20; // w26
  const MethodInfo *v21; // x5
  float GoalRate; // s0
  float v23; // s8
  const MethodInfo *v24; // x3
  struct EventRaceMaster_GroupRankData_array *v25; // x8
  _QWORD *v26; // x9
  int32_t v27; // w10
  __int128 v28; // q0
  char *v29; // x8
  int32_t v30; // w9
  int64_t v31; // x10
  struct EventRaceMaster_GroupRankData_array *items; // x8
  _QWORD *v33; // x9
  int32_t size; // w10
  int32_t v35; // w9
  __int64 v36; // x8
  __int128 v37; // q0
  int64_t goalTime; // x9
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v39; // x0
  const MethodInfo_44E59BC *v40; // x2
  EventRaceMaster___c_c *v41; // x0
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v44; // x23
  struct EventRaceMaster___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  EventRaceMaster___c_c *v52; // x0
  struct EventRaceMaster___c_StaticFields *v53; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v55; // x23
  struct EventRaceMaster___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  EventRaceMaster_GroupRankData_o v64; // [xsp+0h] [xbp-B0h] BYREF
  EventRaceResultEntity_o *v65; // [xsp+18h] [xbp-98h] BYREF
  EventRaceMaster_GroupRankData_o v66; // [xsp+20h] [xbp-90h] BYREF
  EventRaceEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_593885E & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__);
    sub_21FFC50(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__);
    sub_21FFC50(&EventRaceMaster___c_TypeInfo);
    byte_593885E = 1;
  }
  entity = 0;
  v65 = 0;
  memset(&v64, 0, sizeof(v64));
  v7 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_21FFEBC(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v7,
    (const MethodInfo_44E50B4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v8) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v12 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_21FFEBC(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v12,
      (const MethodInfo_44E50B4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v13 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_21FFEBC(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v13,
      (const MethodInfo_44E50B4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    if ( !entity )
      goto LABEL_50;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_50;
    max_length = groupIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v17 = 0;
      v18 = (unsigned int)max_length;
      do
      {
        if ( !entity )
          goto LABEL_50;
        v19 = entity->fields.groupIds;
        if ( !v19 )
          goto LABEL_50;
        if ( v17 >= LODWORD(v19->max_length) )
          sub_21FFED4(Instance);
        v20 = v19->m_Items[v17];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v20, v14);
        if ( !MasterData_object )
          goto LABEL_50;
        v23 = GoalRate;
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     (EventRaceResultMaster_o *)MasterData_object,
                                     &v65,
                                     eventId,
                                     termId,
                                     v20,
                                     v21);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v65 )
            goto LABEL_50;
          EventRaceMaster_GroupRankData___ctor(&v64, v20, v23, v65->fields.endedAt, v24);
          if ( v64.fields.isGoal )
          {
            if ( !v12 )
              goto LABEL_50;
            items = v12->fields._items;
            v33 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_50;
            size = v12->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v36 = v33[4];
              v37 = *(_OWORD *)&v64.fields.groupId;
              goalTime = v64.fields.goalTime;
              v39 = v12;
              goto LABEL_27;
            }
            v28 = *(_OWORD *)&v64.fields.groupId;
            v29 = (char *)items + 24 * size;
            v35 = size + 1;
            v31 = v64.fields.goalTime;
            v12->fields._size = v35;
          }
          else
          {
            if ( !v13 )
              goto LABEL_50;
            v25 = v13->fields._items;
            v26 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            ++v13->fields._version;
            if ( !v25 )
              goto LABEL_50;
            v27 = v13->fields._size;
            if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
            {
              v36 = v26[4];
              v37 = *(_OWORD *)&v64.fields.groupId;
              goalTime = v64.fields.goalTime;
              v39 = v13;
LABEL_27:
              v40 = *(const MethodInfo_44E59BC **)(*(_QWORD *)(v36 + 192) + 112LL);
              *(_OWORD *)&v66.fields.groupId = v37;
              v66.fields.goalTime = goalTime;
              System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddWithResize(v39, &v66, v40);
              continue;
            }
            v28 = *(_OWORD *)&v64.fields.groupId;
            v29 = (char *)v25 + 24 * v27;
            v30 = v27 + 1;
            v31 = v64.fields.goalTime;
            v13->fields._size = v30;
          }
          *((_OWORD *)v29 + 2) = v28;
          *((_QWORD *)v29 + 6) = v31;
        }
      }
      while ( v18 != ++v17 );
    }
    if ( !v12 )
      goto LABEL_50;
    if ( v12->fields._size >= 2 )
    {
      v41 = EventRaceMaster___c_TypeInfo;
      if ( !*(&EventRaceMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo, v10);
        v41 = EventRaceMaster___c_TypeInfo;
      }
      static_fields = v41->static_fields;
      _9__10_0 = static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !*(&v41->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v41, v10);
          static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v44 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_21FFEBC(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v44,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          0);
        v45 = EventRaceMaster___c_TypeInfo->static_fields;
        v45->__9__10_0 = _9__10_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v45->__9__10_0,
          (int32_t)_9__10_0,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_72251080(
        v12,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_44E76C8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v13 )
      goto LABEL_50;
    if ( v13->fields._size >= 2 )
    {
      v52 = EventRaceMaster___c_TypeInfo;
      if ( !*(&EventRaceMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo, v10);
        v52 = EventRaceMaster___c_TypeInfo;
      }
      v53 = v52->static_fields;
      _9__10_1 = v53->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( !*(&v52->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v52, v10);
          v53 = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v55 = (Il2CppObject *)v53->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_21FFEBC(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v55,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          0);
        v56 = EventRaceMaster___c_TypeInfo->static_fields;
        v56->__9__10_1 = _9__10_1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v56->__9__10_1,
          (int32_t)_9__10_1,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_72251080(
        v13,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_44E76C8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v7 )
LABEL_50:
      sub_21FFECC(Instance, v10);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_44E5C18 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v13,
      (const MethodInfo_44E5C18 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
void EventRaceMaster_GroupRankData___ctor(
        EventRaceMaster_GroupRankData_o *this,
        int32_t groupId,
        float rate,
        int64_t goalTime,
        const MethodInfo *method)
{
  NetworkManager_c *v9; // x0
  int64_t Time; // x0

  if ( (byte_5938860 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938860 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  this->fields.groupId = groupId;
  this->fields.rate = rate;
  if ( !*(&v9->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v9, *(_QWORD *)&groupId);
  Time = NetworkManager__getTime(0);
  this->fields.goalTime = goalTime;
  this->fields.isGoal = Time > goalTime;
}


void EventRaceMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938861 & 1) == 0 )
  {
    sub_21FFC50(&EventRaceMaster___c_TypeInfo);
    byte_5938861 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventRaceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRaceMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventRaceMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return a->fields.termId - b->fields.termId;
}


int32_t EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_76929328((int64_t)&a->fields.goalTime, b->fields.goalTime, 0);
}


int32_t EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_77012320(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}