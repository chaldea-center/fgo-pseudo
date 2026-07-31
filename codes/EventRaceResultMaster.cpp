void EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938866 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
    byte_5938866 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    220,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
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

  if ( (byte_5938864 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
    byte_5938864 = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
}


int32_t EventRaceResultMaster__GetNowTerm(EventRaceResultMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x8
  UserEventRaceMaster_o *v9; // x20
  EventRaceResultMaster___c_c *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v14; // x23
  struct EventRaceResultMaster___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t m_CachedPtr_high; // w22
  int32_t v23; // w23
  DataManager_o *v24; // x25
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5938867 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventRaceResultEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_EventRaceResultEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceResultEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceResultEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceResultEntity__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__);
    sub_21FFC50(&EventRaceResultMaster___c_TypeInfo);
    byte_5938867 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v9 = (UserEventRaceMaster_o *)MasterData_object;
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_EventRaceResultEntity___);
  v10 = EventRaceResultMaster___c_TypeInfo;
  v11 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !*(&EventRaceResultMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo, v6);
    v10 = EventRaceResultMaster___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v6);
      static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventRaceResultEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v14, Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, 0);
    v15 = EventRaceResultMaster___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Comparison_EventRaceResultEntity__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__3_0, (int32_t)_9__3_0, v16, v17, v18, v19, v20, v21);
  }
  if ( !v11 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_71636404(
    v11,
    _9__3_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventRaceResultEntity__Sort__);
  if ( v11->fields._size >= 1 )
  {
    m_CachedPtr_high = 0;
    v23 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v11,
                                    v23,
                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventRaceResultEntity__get_Item__);
      if ( !Instance )
        break;
      v24 = Instance;
      if ( LODWORD(Instance->fields.m_CachedPtr) == eventId && m_CachedPtr_high != HIDWORD(Instance->fields.m_CachedPtr) )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v9 )
          break;
        if ( UserEventRaceMaster__TryGetEntity(
               v9,
               &entity,
               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
               eventId,
               HIDWORD(v24->fields.m_CachedPtr),
               0)
          || !m_CachedPtr_high )
        {
          m_CachedPtr_high = HIDWORD(v24->fields.m_CachedPtr);
        }
      }
      if ( ++v23 >= v11->fields._size )
        return m_CachedPtr_high;
    }
LABEL_30:
    sub_21FFECC(Instance, v6);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *EventRaceResultMaster__GetRankDatas(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int64_array **goalTime,
        const MethodInfo *method)
{
  int32_t v6; // w21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v10; // x23
  System_Collections_Generic_List_long__o *v11; // x25
  int32_t v12; // w26
  __int64 v13; // x1
  Il2CppObject *Item; // x28
  System_Collections_ObjectModel_Collection_T__o *monitor; // x8
  int64_t v16; // x27
  int size; // w8
  int32_t v18; // w29
  struct System_Int32_array *items; // x9
  _QWORD *v20; // x10
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  System_Int64_array *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Int64_array **v32; // [xsp+0h] [xbp-70h]

  v6 = eventId;
  if ( (byte_593886A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Insert__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Insert__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593886A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
  v10 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    v32 = goalTime;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
      list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
      if ( !Item )
        break;
      if ( LODWORD(Item[1].klass) == v6 && HIDWORD(Item[1].klass) == termId )
      {
        monitor = (System_Collections_ObjectModel_Collection_T__o *)Item[2].monitor;
        if ( (__int64)monitor < (__int64)list )
        {
          v16 = (char *)monitor - (char *)Item[2].klass;
          if ( v16 >= 1 )
          {
            if ( !v10 )
              break;
            size = v10->fields._size;
            if ( size < 1 )
            {
LABEL_21:
              items = v10->fields._items;
              *(_QWORD *)&eventId = LODWORD(Item[1].monitor);
              v20 = Method_System_Collections_Generic_List_int__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v10,
                  eventId,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
              }
              else
              {
                v10->fields._size = size + 1;
                items->m_Items[size] = eventId;
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
                  v16,
                  *(const MethodInfo_4438164 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v11->fields._size = v23 + 1;
                v21->m_Items[v23] = v16;
              }
            }
            else
            {
              v18 = 0;
              while ( 1 )
              {
                if ( !v11 )
                  goto LABEL_35;
                list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_long___get_Item(
                                                                           v11,
                                                                           v18,
                                                                           (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
                if ( (__int64)list > v16 )
                  break;
                size = v10->fields._size;
                if ( size <= ++v18 )
                {
                  goalTime = v32;
                  goto LABEL_21;
                }
              }
              System_Collections_Generic_List_int___Insert(
                v10,
                v18,
                (int32_t)Item[1].monitor,
                (const MethodInfo_4433EA4 *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v11,
                v18,
                v16,
                (const MethodInfo_4438ED0 *)Method_System_Collections_Generic_List_long__Insert__);
              goalTime = v32;
            }
          }
        }
      }
      if ( ++v12 == Count )
        goto LABEL_32;
    }
LABEL_35:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
LABEL_32:
  if ( !v11 )
    goto LABEL_35;
  v24 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)goalTime, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  if ( !v10 )
    goto LABEL_35;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x1
  int32_t v10; // w9
  int64_t v11; // x8
  int32_t max_length; // w8
  System_Int64_array *goalTimea; // [xsp+8h] [xbp-18h] BYREF

  goalTimea = 0;
  RankDatas = EventRaceResultMaster__GetRankDatas(this, eventId, termId, &goalTimea, (const MethodInfo *)goalTime);
  if ( !goalTimea )
    goto LABEL_11;
  v10 = *(_DWORD *)((char *)off_18 + (_QWORD)goalTimea);
  if ( v10 >= rank )
  {
    if ( rank - 1 >= (unsigned int)v10 )
      goto LABEL_12;
    v11 = goalTimea->m_Items[rank - 1];
  }
  else
  {
    v11 = 0;
  }
  *goalTime = v11;
  if ( !RankDatas )
LABEL_11:
    sub_21FFECC(RankDatas, v9);
  max_length = RankDatas->max_length;
  if ( max_length < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)max_length )
LABEL_12:
    sub_21FFED4(RankDatas);
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
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24

  if ( (byte_5938868 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
    byte_5938868 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_14:
    sub_21FFECC(list, v10);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v14,
             (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    if ( !list )
      goto LABEL_14;
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term && *((_DWORD *)list + 6) == groupId )
      return *((_QWORD *)list + 5);
    if ( v13 == ++v14 )
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

  if ( (byte_5938865 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
    byte_5938865 = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5938869 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    byte_5938869 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_13:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
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
             (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593886B & 1) == 0 )
  {
    sub_21FFC50(&EventRaceResultMaster___c_TypeInfo);
    byte_593886B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventRaceResultMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRaceResultMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceResultMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventRaceResultMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, a);
  return a->fields.termId - b->fields.termId;
}