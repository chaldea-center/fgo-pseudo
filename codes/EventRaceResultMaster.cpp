void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44B31 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__, method);
    byte_4B44B31 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    218,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceResultEntity_o *__fastcall EventRaceResultMaster__GetEntity(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44B2F & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B44B2F = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_32E68F4 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceResultMaster__GetNowTerm(
        EventRaceResultMaster_o *this,
        int32_t eventId,
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x8
  UserEventRaceMaster_o *v18; // x20
  EventRaceResultMaster___c_c *v19; // x8
  System_Collections_Generic_List_object__o *v20; // x21
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v22; // x23
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w22
  int32_t v27; // w23
  DataManager_o *v28; // x25
  bool v29; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B44B32 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_EventRaceResultEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_EventRaceResultEntity___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRaceResultEntity__Sort__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRaceResultEntity__get_Count__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRaceResultEntity__get_Item__, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BDB878(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, v12);
    sub_1BDB878(&EventRaceResultMaster___c_TypeInfo, v13);
    byte_4B44B32 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v18 = (UserEventRaceMaster_o *)MasterData_object;
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_EventRaceResultEntity___);
  v19 = EventRaceResultMaster___c_TypeInfo;
  v20 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v19 = EventRaceResultMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v19->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = EventRaceResultMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_EventRaceResultEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v22, Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, 0LL);
    static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRaceResultEntity__o *)_9__3_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v24, v25);
  }
  if ( !v20 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_57505928(
    v20,
    _9__3_0,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_EventRaceResultEntity__Sort__);
  if ( v20->fields._size >= 1 )
  {
    v26 = 0;
    v27 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v20,
                                    v27,
                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventRaceResultEntity__get_Item__);
      if ( !Instance )
        break;
      v28 = Instance;
      if ( Instance->fields.m_CachedPtr == eventId
        && v26 != *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B3ED56 )
        {
          sub_1BDB878(&NetworkManager_TypeInfo, v15);
          byte_4B3ED56 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v18 )
          break;
        v29 = UserEventRaceMaster__TryGetEntity(
                v18,
                &entity,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                eventId,
                *((_DWORD *)&v28->fields.UnityEngine_Behaviour_Fields + 1),
                0LL);
        if ( !v26 || v29 )
          v26 = *((_DWORD *)&v28->fields.UnityEngine_Behaviour_Fields + 1);
      }
      if ( ++v27 >= v20->fields._size )
        return v26;
    }
LABEL_30:
    sub_1BDBAD4(Instance, v15);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventRaceResultMaster__GetRankDatas(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int64_array **goalTime,
        const MethodInfo *method)
{
  int32_t v6; // w21
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v24; // x23
  System_Collections_Generic_List_long__o *v25; // x25
  int32_t v26; // w26
  Il2CppObject *Item; // x28
  _BYTE *monitor; // x8
  int64_t v29; // x27
  int size; // w8
  int32_t v31; // w29
  struct System_Int32_array *items; // x9
  _QWORD *v33; // x10
  struct System_Int64_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Int64_array **v41; // [xsp+0h] [xbp-70h]

  v6 = eventId;
  if ( (byte_4B44B35 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Insert__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Insert__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Item__, v18);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v20);
    sub_1BDB878(&NetworkManager_TypeInfo, v21);
    byte_4B44B35 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
  v24 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v26 = 0;
    v41 = goalTime;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v26,
               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
      if ( !Item )
        break;
      if ( LODWORD(Item[1].klass) == v6 && HIDWORD(Item[1].klass) == termId )
      {
        monitor = Item[2].monitor;
        if ( (__int64)monitor < (__int64)list )
        {
          v29 = monitor - (_BYTE *)Item[2].klass;
          if ( v29 >= 1 )
          {
            if ( !v24 )
              break;
            size = v24->fields._size;
            if ( size < 1 )
            {
LABEL_21:
              *(_QWORD *)&eventId = LODWORD(Item[1].monitor);
              items = v24->fields._items;
              v33 = Method_System_Collections_Generic_List_int__Add__;
              ++v24->fields._version;
              if ( !items )
                break;
              if ( size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v24,
                  eventId,
                  *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v24->fields._size = size + 1;
                items->m_Items[size + 1] = eventId;
              }
              if ( !v25 )
                break;
              v34 = v25->fields._items;
              v35 = Method_System_Collections_Generic_List_long__Add__;
              ++v25->fields._version;
              if ( !v34 )
                break;
              v36 = v25->fields._size;
              if ( (unsigned int)v36 >= v34->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v25,
                  v29,
                  *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v25->fields._size = v36 + 1;
                v34->m_Items[v36] = v29;
              }
            }
            else
            {
              v31 = 0;
              while ( 1 )
              {
                if ( !v25 )
                  goto LABEL_35;
                list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_long___get_Item(
                                                                           v25,
                                                                           v31,
                                                                           (const MethodInfo_36BDB08 *)Method_System_Collections_Generic_List_long__get_Item__);
                if ( (__int64)list > v29 )
                  break;
                size = v24->fields._size;
                if ( size <= ++v31 )
                {
                  goalTime = v41;
                  goto LABEL_21;
                }
              }
              System_Collections_Generic_List_int___Insert(
                v24,
                v31,
                (int32_t)Item[1].monitor,
                (const MethodInfo_36B9B24 *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v25,
                v31,
                v29,
                (const MethodInfo_36BEB7C *)Method_System_Collections_Generic_List_long__Insert__);
              goalTime = v41;
            }
          }
        }
      }
      if ( ++v26 == Count )
        goto LABEL_32;
    }
LABEL_35:
    sub_1BDBAD4(list, *(_QWORD *)&eventId);
  }
LABEL_32:
  if ( !v25 )
    goto LABEL_35;
  v37 = System_Collections_Generic_List_long___ToArray(
          v25,
          (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v37;
  sub_1BDB81C((CGThumbnailListItem_o *)goalTime, (int32_t)v37, v38, v39);
  if ( !v24 )
    goto LABEL_35;
  return System_Collections_Generic_List_int___ToArray(
           v24,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventRaceResultMaster__GetRankedGroupId(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        int64_t *goalTime,
        const MethodInfo *method)
{
  System_Int32_array *RankDatas; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // w9
  int64_t v12; // x8
  int32_t v13; // w8
  System_Int64_array *goalTimea; // [xsp+8h] [xbp-18h] BYREF

  goalTimea = 0LL;
  RankDatas = EventRaceResultMaster__GetRankDatas(this, eventId, termId, &goalTimea, (const MethodInfo *)goalTime);
  if ( !goalTimea )
    goto LABEL_11;
  max_length = goalTimea->max_length;
  if ( (int)max_length >= rank )
  {
    if ( rank - 1 >= max_length )
      goto LABEL_12;
    v12 = goalTimea->m_Items[rank - 1];
  }
  else
  {
    v12 = 0LL;
  }
  *goalTime = v12;
  if ( !RankDatas )
LABEL_11:
    sub_1BDBAD4(RankDatas, v9);
  v13 = RankDatas->max_length;
  if ( v13 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v13 )
LABEL_12:
    sub_1BDBADC(RankDatas, v9, v10);
  return RankDatas->m_Items[rank];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__GetTargetGoalTime(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t term,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x0
  __int64 v13; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24

  if ( (byte_4B44B33 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo, v11);
    byte_4B44B33 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_14:
    sub_1BDBAD4(list, v13);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v17,
             (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    if ( !list )
      goto LABEL_14;
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term && *((_DWORD *)list + 6) == groupId )
      return *((_QWORD *)list + 5);
    if ( v16 == ++v17 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaceResultMaster__TryGetEntity(
        EventRaceResultMaster_o *this,
        EventRaceResultEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44B30 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__, entity);
    byte_4B44B30 = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__getRaceStartedAt(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23

  if ( (byte_4B44B34 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__, v7);
    byte_4B44B34 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_13:
    sub_1BDBAD4(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_13;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v11,
             (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventRaceResultEntity__get_Item__);
    if ( !list )
      goto LABEL_13;
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == termId )
      return *((_QWORD *)list + 4);
    if ( v10 == ++v11 )
      return 0LL;
  }
}


void __fastcall EventRaceResultMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44B36 & 1) == 0 )
  {
    sub_1BDB878(&EventRaceResultMaster___c_TypeInfo, v1);
    byte_4B44B36 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventRaceResultMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRaceResultMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceResultMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EventRaceResultMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventRaceResultMaster___c___ctor(EventRaceResultMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRaceResultMaster___c___GetNowTerm_b__3_0(
        EventRaceResultMaster___c_o *this,
        EventRaceResultEntity_o *a,
        EventRaceResultEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BDBAD4(this, a);
  return a->fields.termId - b->fields.termId;
}