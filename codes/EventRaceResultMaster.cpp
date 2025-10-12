void EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37A85 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
    byte_4C37A85 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    218,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceResultEntity_o *EventRaceResultMaster__GetEntity(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37A83 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
    byte_4C37A83 = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_339B2F0 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
}


int32_t EventRaceResultMaster__GetNowTerm(EventRaceResultMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x8
  UserEventRaceMaster_o *v8; // x20
  EventRaceResultMaster___c_c *v9; // x8
  System_Collections_Generic_List_object__o *v10; // x21
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v12; // x23
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t m_CachedPtr_high; // w22
  int32_t v17; // w23
  DataManager_o *v18; // x25
  bool v19; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C37A86 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_EventRaceResultEntity__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_EventRaceResultEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventRaceResultEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventRaceResultEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventRaceResultEntity__get_Item__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__);
    sub_1C32C20(&EventRaceResultMaster___c_TypeInfo);
    byte_4C37A86 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v8 = (UserEventRaceMaster_o *)MasterData_object;
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_EventRaceResultEntity___);
  v9 = EventRaceResultMaster___c_TypeInfo;
  v10 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v9 = EventRaceResultMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v9->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventRaceResultMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventRaceResultEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v12, Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, 0);
    static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRaceResultEntity__o *)_9__3_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v14, v15);
  }
  if ( !v10 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_58303104(
    v10,
    _9__3_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventRaceResultEntity__Sort__);
  if ( v10->fields._size >= 1 )
  {
    m_CachedPtr_high = 0;
    v17 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v10,
                                    v17,
                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventRaceResultEntity__get_Item__);
      if ( !Instance )
        break;
      v18 = Instance;
      if ( LODWORD(Instance->fields.m_CachedPtr) == eventId && m_CachedPtr_high != HIDWORD(Instance->fields.m_CachedPtr) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v8 )
          break;
        v19 = UserEventRaceMaster__TryGetEntity(
                v8,
                &entity,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                eventId,
                HIDWORD(v18->fields.m_CachedPtr),
                0);
        if ( !m_CachedPtr_high || v19 )
          m_CachedPtr_high = HIDWORD(v18->fields.m_CachedPtr);
      }
      if ( ++v17 >= v10->fields._size )
        return m_CachedPtr_high;
    }
LABEL_30:
    sub_1C32E7C(Instance);
  }
  return 0;
}


System_Int32_array *EventRaceResultMaster__GetRankDatas(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int64_array **goalTime,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v10; // x23
  System_Collections_Generic_List_long__o *v11; // x25
  int32_t v12; // w26
  Il2CppObject *Item; // x28
  System_Collections_ObjectModel_Collection_T__o *monitor; // x8
  int64_t v15; // x27
  int size; // w8
  int32_t v17; // w29
  int32_t v18; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v20; // x10
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  System_Int64_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Int64_array **v28; // [xsp+0h] [xbp-70h]

  if ( (byte_4C37A89 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Insert__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Insert__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37A89 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    v28 = goalTime;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
      if ( !Item )
        break;
      if ( LODWORD(Item[1].klass) == eventId && HIDWORD(Item[1].klass) == termId )
      {
        monitor = (System_Collections_ObjectModel_Collection_T__o *)Item[2].monitor;
        if ( (__int64)monitor < (__int64)list )
        {
          v15 = (char *)monitor - (char *)Item[2].klass;
          if ( v15 >= 1 )
          {
            if ( !v10 )
              break;
            size = v10->fields._size;
            if ( size < 1 )
            {
LABEL_21:
              v18 = (int32_t)Item[1].monitor;
              items = v10->fields._items;
              v20 = Method_System_Collections_Generic_List_int__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v10,
                  v18,
                  *(const MethodInfo_377B798 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
              }
              else
              {
                v10->fields._size = size + 1;
                items->m_Items[size] = v18;
              }
              if ( !v11 )
                break;
              v21 = v11->fields._items;
              v22 = Method_System_Collections_Generic_List_long__Add__;
              ++v11->fields._version;
              if ( !v21 )
                break;
              v23 = v11->fields._size;
              if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v11,
                  v15,
                  *(const MethodInfo_37807F0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v11->fields._size = v23 + 1;
                v21->m_Items[v23] = v15;
              }
            }
            else
            {
              v17 = 0;
              while ( 1 )
              {
                if ( !v11 )
                  goto LABEL_35;
                list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_long___get_Item(
                                                                           v11,
                                                                           v17,
                                                                           (const MethodInfo_3780500 *)Method_System_Collections_Generic_List_long__get_Item__);
                if ( (__int64)list > v15 )
                  break;
                size = v10->fields._size;
                if ( size <= ++v17 )
                {
                  goalTime = v28;
                  goto LABEL_21;
                }
              }
              System_Collections_Generic_List_int___Insert(
                v10,
                v17,
                (int32_t)Item[1].monitor,
                (const MethodInfo_377C51C *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v11,
                v17,
                v15,
                (const MethodInfo_3781574 *)Method_System_Collections_Generic_List_long__Insert__);
              goalTime = v28;
            }
          }
        }
      }
      if ( ++v12 == Count )
        goto LABEL_32;
    }
LABEL_35:
    sub_1C32E7C(list);
  }
LABEL_32:
  if ( !v11 )
    goto LABEL_35;
  v24 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)goalTime, (int32_t)v24, v25, v26);
  if ( !v10 )
    goto LABEL_35;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t EventRaceResultMaster__GetRankedGroupId(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        int64_t *goalTime,
        const MethodInfo *method)
{
  System_Int32_array *RankDatas; // x0
  int32_t v9; // w9
  int64_t v10; // x8
  int32_t max_length; // w8
  System_Int64_array *goalTimea; // [xsp+8h] [xbp-18h] BYREF

  goalTimea = 0;
  RankDatas = EventRaceResultMaster__GetRankDatas(this, eventId, termId, &goalTimea, (const MethodInfo *)goalTime);
  if ( !goalTimea )
    goto LABEL_11;
  v9 = *(_DWORD *)((char *)&off_18 + (_QWORD)goalTimea);
  if ( v9 >= rank )
  {
    if ( rank - 1 >= (unsigned int)v9 )
      goto LABEL_12;
    v10 = goalTimea->m_Items[rank - 1];
  }
  else
  {
    v10 = 0;
  }
  *goalTime = v10;
  if ( !RankDatas )
LABEL_11:
    sub_1C32E7C(RankDatas);
  max_length = RankDatas->max_length;
  if ( max_length < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)max_length )
LABEL_12:
    sub_1C32E84(RankDatas);
  return RankDatas->m_Items[rank - 1];
}


int64_t EventRaceResultMaster__GetTargetGoalTime(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t term,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x0
  void *list; // x0
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24

  if ( (byte_4C37A87 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
    byte_4C37A87 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C32E7C(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v12 = Count;
  v13 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v13,
             (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    if ( !list )
      goto LABEL_14;
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term && *((_DWORD *)list + 6) == groupId )
      return *((_QWORD *)list + 5);
    if ( v12 == ++v13 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool EventRaceResultMaster__TryGetEntity(
        EventRaceResultMaster_o *this,
        EventRaceResultEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37A84 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
    byte_4C37A84 = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
}


int64_t EventRaceResultMaster__getRaceStartedAt(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23

  if ( (byte_4C37A88 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    byte_4C37A88 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C32E7C(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_13;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    if ( !list )
      goto LABEL_13;
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == termId )
      return *((_QWORD *)list + 4);
    if ( v9 == ++v10 )
      return 0;
  }
}


void EventRaceResultMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37A8A & 1) == 0 )
  {
    sub_1C32C20(&EventRaceResultMaster___c_TypeInfo);
    byte_4C37A8A = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventRaceResultMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRaceResultMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceResultMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventRaceResultMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventRaceResultMaster___c___ctor(EventRaceResultMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventRaceResultMaster___c___GetNowTerm_b__3_0(
        EventRaceResultMaster___c_o *this,
        EventRaceResultEntity_o *a,
        EventRaceResultEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  return a->fields.termId - b->fields.termId;
}