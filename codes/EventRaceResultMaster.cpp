void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B220 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
    byte_4A5B220 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    212,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
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

  if ( (byte_4A5B21E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
    byte_4A5B21E = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
}


int32_t __fastcall EventRaceResultMaster__GetNowTerm(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  UserEventRaceMaster_o *v9; // x20
  EventRaceResultMaster___c_c *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v13; // x23
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w22
  int32_t v18; // w23
  int64_t v19; // x24
  __int64 methodPtr_low; // x10
  bool v21; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5B221 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_DataEntityBase___);
    sub_1B885B0(&EventRaceResultEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__);
    sub_1B885B0(&EventRaceResultMaster___c_TypeInfo);
    byte_4A5B221 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v9 = (UserEventRaceMaster_o *)MasterData_object;
  Instance = (int64_t)System_Linq_Enumerable__ToList_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)list,
                        (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_DataEntityBase___);
  v10 = EventRaceResultMaster___c_TypeInfo;
  v11 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v10 = EventRaceResultMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v10->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventRaceResultMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_DataEntityBase__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v13, Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, 0LL);
    static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_DataEntityBase__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v15, v16);
  }
  if ( !v11 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_55571192(
    v11,
    _9__3_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
  if ( v11->fields._size >= 1 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v11,
                            v18,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v19 = Instance;
      methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventRaceResultEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 16) == eventId && v17 != *(_DWORD *)(Instance + 20) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v9 )
          break;
        v21 = UserEventRaceMaster__TryGetEntity(v9, &entity, Instance, eventId, *(_DWORD *)(v19 + 20), 0LL);
        if ( !v17 || v21 )
          v17 = *(_DWORD *)(v19 + 20);
      }
      if ( ++v18 >= v11->fields._size )
        return v17;
    }
LABEL_28:
    sub_1B8880C(Instance, v6);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v10; // x23
  System_Collections_Generic_List_long__o *v11; // x25
  int32_t v12; // w26
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v15; // x20
  __int64 monitor; // x8
  int64_t v17; // x27
  int size; // w8
  int32_t v19; // w28
  struct System_Int32_array *items; // x9
  _QWORD *v21; // x10
  struct System_Int64_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  System_Int64_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Int64_array **v29; // [xsp+0h] [xbp-70h]

  v6 = eventId;
  if ( (byte_4A5B224 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventRaceResultEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Insert__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Insert__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B224 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    v29 = goalTime;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v15 = (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRaceResultEntity_TypeInfo
            ? Item
            : 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
      if ( !v15 )
        break;
      if ( LODWORD(v15[1].klass) == v6 && HIDWORD(v15[1].klass) == termId )
      {
        monitor = (__int64)v15[2].monitor;
        if ( monitor < (__int64)list )
        {
          v17 = monitor - (unsigned __int64)v15[2].klass;
          if ( v17 >= 1 )
          {
            if ( !v10 )
              break;
            size = v10->fields._size;
            if ( size < 1 )
            {
LABEL_27:
              *(_QWORD *)&eventId = LODWORD(v15[1].monitor);
              items = v10->fields._items;
              v21 = Method_System_Collections_Generic_List_int__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              if ( size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v10,
                  eventId,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v10->fields._size = size + 1;
                items->m_Items[size + 1] = eventId;
              }
              if ( !v11 )
                break;
              v22 = v11->fields._items;
              v23 = Method_System_Collections_Generic_List_long__Add__;
              ++v11->fields._version;
              if ( !v22 )
                break;
              v24 = v11->fields._size;
              if ( (unsigned int)v24 >= v22->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v11,
                  v17,
                  *(const MethodInfo_34E5868 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v11->fields._size = v24 + 1;
                v22->m_Items[v24] = v17;
              }
            }
            else
            {
              v19 = 0;
              while ( 1 )
              {
                if ( !v11 )
                  goto LABEL_41;
                list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_long___get_Item(
                                                                           v11,
                                                                           v19,
                                                                           (const MethodInfo_34E5578 *)Method_System_Collections_Generic_List_long__get_Item__);
                if ( (__int64)list > v17 )
                  break;
                size = v10->fields._size;
                if ( size <= ++v19 )
                {
                  goalTime = v29;
                  goto LABEL_27;
                }
              }
              System_Collections_Generic_List_int___Insert(
                v10,
                v19,
                (int32_t)v15[1].monitor,
                (const MethodInfo_34E1594 *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v11,
                v19,
                v17,
                (const MethodInfo_34E65EC *)Method_System_Collections_Generic_List_long__Insert__);
              goalTime = v29;
            }
          }
        }
      }
      if ( ++v12 == Count )
        goto LABEL_38;
    }
LABEL_41:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
LABEL_38:
  if ( !v11 )
    goto LABEL_41;
  v25 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)goalTime, (int32_t)v25, v26, v27);
  if ( !v10 )
    goto LABEL_41;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  il2cpp_array_size_t max_length; // w9
  int64_t v11; // x8
  int32_t v12; // w8
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
    v11 = goalTimea->m_Items[rank - 1];
  }
  else
  {
    v11 = 0LL;
  }
  *goalTime = v11;
  if ( !RankDatas )
LABEL_11:
    sub_1B8880C(RankDatas, v9);
  v12 = RankDatas->max_length;
  if ( v12 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v12 )
LABEL_12:
    sub_1B88814(RankDatas, v9);
  return RankDatas->m_Items[rank];
}


int64_t __fastcall EventRaceResultMaster__GetTargetGoalTime(
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B222 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventRaceResultEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
    byte_4A5B222 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B8880C(list, v10);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v14,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term && *((_DWORD *)list + 6) == groupId )
      return *((_QWORD *)list + 5);
    if ( v13 == ++v14 )
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

  if ( (byte_4A5B21F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
    byte_4A5B21F = 1;
  }
  PK = (Il2CppObject *)EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__getRaceStartedAt(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B223 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventRaceResultEntity_TypeInfo);
    byte_4A5B223 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == termId )
      return *((_QWORD *)list + 4);
    if ( v9 == ++v10 )
      return 0LL;
  }
}


void __fastcall EventRaceResultMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B225 & 1) == 0 )
  {
    sub_1B885B0(&EventRaceResultMaster___c_TypeInfo);
    byte_4A5B225 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventRaceResultMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventRaceResultMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceResultMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventRaceResultMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventRaceResultMaster___c___ctor(EventRaceResultMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRaceResultMaster___c___GetNowTerm_b__3_0(
        EventRaceResultMaster___c_o *this,
        DataEntityBase_o *a,
        DataEntityBase_o *b,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9

  if ( (byte_4A5B226 & 1) == 0 )
  {
    this = (EventRaceResultMaster___c_o *)sub_1B885B0(&EventRaceResultEntity_TypeInfo);
    byte_4A5B226 = 1;
  }
  if ( !a
    || (methodPtr_low = LOBYTE(EventRaceResultEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(a->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRaceResultEntity_c *)a->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceResultEntity_TypeInfo
    || !b
    || LOBYTE(b->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRaceResultEntity_c *)b->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceResultEntity_TypeInfo )
  {
    sub_1B8880C(this, a);
  }
  return HIDWORD(a[1].klass) - HIDWORD(b[1].klass);
}