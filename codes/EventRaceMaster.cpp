void __fastcall EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B212 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
    byte_4A5B212 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    211,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *__fastcall EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B210 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
    byte_4A5B210 = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
}


float __fastcall EventRaceMaster__GetGoalRate(
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
  il2cpp_array_size_t v14; // w22
  struct System_Int64_array *goalPoints; // x8
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B217 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B217 = 1;
  }
  entity = 0LL;
  v11 = 0.0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_13;
    GroupIdx = EventRaceEntity__GetGroupIdx(entity, groupId, v10);
    if ( (GroupIdx & 0x80000000) != 0 )
      return v11;
    v14 = GroupIdx;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0LL
      || (Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                        (TotalEventRaceMaster_o *)Instance,
                                        eventId,
                                        termId,
                                        groupId,
                                        0LL),
          !entity)
      || (goalPoints = entity->fields.goalPoints) == 0LL )
    {
LABEL_13:
      sub_1B8880C(Instance, v9);
    }
    if ( v14 >= goalPoints->max_length )
      sub_1B88814(Instance, v9);
    return (float)(__int64)Instance / (float)goalPoints->m_Items[v14];
  }
  return v11;
}


int32_t __fastcall EventRaceMaster__GetGoaledTeamCount(
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

  if ( (byte_4A5B215 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B215 = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    if ( !entity )
      goto LABEL_19;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_19;
    if ( (int)*(_QWORD *)&groupIds->max_length >= 1 )
    {
      v13 = (EventRaceResultMaster_o *)Instance;
      v14 = 0;
      v15 = 0LL;
      v16 = (unsigned int)*(_QWORD *)&groupIds->max_length - 1LL;
      while ( v13 )
      {
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     v13,
                                     &v18,
                                     eventId,
                                     termId,
                                     groupIds->m_Items[v15 + 1],
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
        if ( ++v15 >= (unsigned __int64)groupIds->max_length )
          sub_1B88814(Instance, v10);
      }
LABEL_19:
      sub_1B8880C(Instance, v10);
    }
  }
  return 0;
}


int32_t __fastcall EventRaceMaster__GetGroupIndex(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *groupIds; // x8
  int max_length; // w9
  int32_t result; // w0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  v6 = EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method);
  if ( !v6 )
    return -1;
  if ( !entity )
    sub_1B8880C(v6, v7);
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    return -1;
  max_length = groupIds->max_length;
  if ( max_length < 1 )
    return -1;
  result = 0;
  while ( groupIds->m_Items[result + 1] != groupId )
  {
    if ( max_length == ++result )
      return -1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_array *__fastcall EventRaceMaster__GetRaceEntityList(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = eventId;
  if ( (byte_4A5B213 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventRaceEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    byte_4A5B213 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      methodPtr_low = LOBYTE(EventRaceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRaceEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == v3 )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v15[4] = *(Il2CppClass **)&eventId;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), eventId, v9, v10);
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (EventRaceEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceMaster__GetTermIndex(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x21
  Il2CppObject *v19; // x22
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int v23; // w22
  int32_t v24; // w21

  v5 = eventId;
  if ( (byte_4A5B219 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventRaceEntity__TypeInfo);
    sub_1B885B0(&EventRaceEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    sub_1B885B0(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__);
    sub_1B885B0(&EventRaceMaster___c_TypeInfo);
    byte_4A5B219 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      methodPtr_low = LOBYTE(EventRaceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v5 )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v15 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v17[4] = *(Il2CppClass **)&eventId;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), eventId, v11, v12);
        }
      }
      if ( Count == ++v10 )
        goto LABEL_17;
    }
LABEL_31:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
LABEL_17:
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
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRaceEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventRaceMaster___c__GetTermIndex_b__11_0__, 0LL);
    static_fields = EventRaceMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)v18, v21, v22);
  }
  if ( !v9 )
    goto LABEL_31;
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  v23 = v9->fields._size;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v9,
               v24,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      if ( *((_DWORD *)list + 5) == termId )
        return v24;
      if ( v23 == ++v24 )
        return -1;
    }
    goto LABEL_31;
  }
  return -1;
}


bool __fastcall EventRaceMaster__IsEveryTeamGoaled(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int64_t Instance; // x0
  __int64 v9; // x1
  struct System_Int32_array *groupIds; // x23
  EventRaceResultMaster_o *v11; // x21
  __int64 v12; // x25
  const MethodInfo *v13; // x5
  int64_t v14; // x22
  unsigned __int64 v15; // x24
  EventRaceResultEntity_o *v17; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5B214 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B214 = 1;
  }
  entity = 0LL;
  v17 = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_20;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_20;
  v11 = (EventRaceResultMaster_o *)Instance;
  v12 = *(_QWORD *)&groupIds->max_length;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( (int)v12 >= 1 )
  {
    v14 = Instance;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= groupIds->max_length )
        sub_1B88814(Instance, v9);
      if ( !v11 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v11, &v17, eventId, termId, groupIds->m_Items[v15 + 1], v13);
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
    sub_1B8880C(Instance, v9);
  }
  return 1;
}


bool __fastcall EventRaceMaster__IsReachedPointRateInTerm(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t rate,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *groupIds; // x23
  float v12; // s0
  TotalEventRaceMaster_o *v13; // x21
  unsigned __int64 v14; // x24
  __int64 v15; // x22
  float v16; // s8
  struct System_Int64_array *goalPoints; // x8
  float v18; // s0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5B216 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B216 = 1;
  }
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (groupIds = entity->fields.groupIds) == 0LL )
  {
LABEL_19:
    sub_1B8880C(Instance, v10);
  }
  if ( (int)*(_QWORD *)&groupIds->max_length < 1 )
    return 0;
  v12 = (float)rate;
  v13 = (TotalEventRaceMaster_o *)Instance;
  v14 = 0LL;
  v15 = (unsigned int)*(_QWORD *)&groupIds->max_length - 1LL;
  v16 = v12 / 1000.0;
  while ( 1 )
  {
    if ( !v13 )
      goto LABEL_19;
    Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                  v13,
                                  eventId,
                                  termId,
                                  groupIds->m_Items[v14 + 1],
                                  0LL);
    if ( !entity )
      goto LABEL_19;
    goalPoints = entity->fields.goalPoints;
    if ( !goalPoints )
      goto LABEL_19;
    if ( v14 >= goalPoints->max_length )
      goto LABEL_16;
    v18 = (float)(__int64)Instance / (float)goalPoints->m_Items[v14];
    if ( v15 == v14 || v16 < v18 )
      return v16 < v18;
    if ( ++v14 >= groupIds->max_length )
LABEL_16:
      sub_1B88814(Instance, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaceMaster__TryGetEntity(
        EventRaceMaster_o *this,
        EventRaceEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B211 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
    byte_4A5B211 = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *__fastcall EventRaceMaster__getGroupIdData(
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
  __int64 v17; // x9
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
  const MethodInfo_3574990 *v36; // x2
  EventRaceMaster___c_c *v37; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v39; // x23
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  EventRaceMaster___c_c *v43; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v45; // x23
  struct EventRaceMaster___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  EventRaceMaster_GroupRankData_o v50; // [xsp+20h] [xbp-D0h] BYREF
  EventRaceResultEntity_o *v51; // [xsp+38h] [xbp-B8h] BYREF
  EventRaceMaster_GroupRankData_o v52; // [xsp+40h] [xbp-B0h]
  EventRaceMaster_GroupRankData_o v53; // [xsp+60h] [xbp-90h] BYREF
  EventRaceEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4A5B218 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__);
    sub_1B885B0(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__);
    sub_1B885B0(&EventRaceMaster___c_TypeInfo);
    byte_4A5B218 = 1;
  }
  entity = 0LL;
  v51 = 0LL;
  memset(&v50, 0, sizeof(v50));
  v7 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1B887FC(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v7,
    (const MethodInfo_3574090 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v8) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v12 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1B887FC(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v12,
      (const MethodInfo_3574090 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v13 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1B887FC(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v13,
      (const MethodInfo_3574090 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v15 = entity;
    if ( !entity )
      goto LABEL_29;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_29;
    v17 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      v19 = (unsigned int)v17;
      while ( 1 )
      {
        v20 = v15->fields.groupIds;
        if ( !v20 )
          goto LABEL_29;
        if ( v18 >= v20->max_length )
          sub_1B88814(Instance, v10);
        v21 = v20->m_Items[v18 + 1];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v21, v14);
        if ( !MasterData_object )
          goto LABEL_29;
        v24 = GoalRate;
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     (EventRaceResultMaster_o *)MasterData_object,
                                     &v51,
                                     eventId,
                                     termId,
                                     v21,
                                     v22);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v51 )
            goto LABEL_29;
          EventRaceMaster_GroupRankData___ctor(&v50, v21, v24, v51->fields.endedAt, v25);
          if ( v50.fields.isGoal )
          {
            if ( !v12 )
              goto LABEL_29;
            v29 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v52 = v50;
            items = v12->fields._items;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v32 = *(_OWORD *)&v52.fields.groupId;
              goalTime = v52.fields.goalTime;
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
            v52 = v50;
            items = v13->fields._items;
            ++v13->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v32 = *(_OWORD *)&v52.fields.groupId;
              goalTime = v52.fields.goalTime;
              v34 = *(_QWORD *)(v26[4] + 192LL);
              v35 = v13;
LABEL_26:
              v36 = *(const MethodInfo_3574990 **)(v34 + 112);
              *(_OWORD *)&v53.fields.groupId = v32;
              v53.fields.goalTime = goalTime;
              System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddWithResize(v35, &v53, v36);
              goto LABEL_27;
            }
            v13->fields._size = size + 1;
          }
          v30 = *(_OWORD *)&v52.fields.groupId;
          v31 = (char *)items + 24 * size;
          *((_QWORD *)v31 + 6) = v52.fields.goalTime;
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
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1B887FC(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v39,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          0LL);
        static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = _9__10_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v41, v42);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_56059892(
        v12,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_35767F4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v13 )
      goto LABEL_29;
    if ( v13->fields._size >= 2 )
    {
      v43 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v43 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_1 = v43->static_fields->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = EventRaceMaster___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v43->static_fields->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1B887FC(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v45,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          0LL);
        v46 = EventRaceMaster___c_TypeInfo->static_fields;
        v46->__9__10_1 = _9__10_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v46->__9__10_1, (int32_t)_9__10_1, v47, v48);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_56059892(
        v13,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_35767F4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v7 )
LABEL_29:
      sub_1B8880C(Instance, v10);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_3574C14 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)v13,
      (const MethodInfo_3574C14 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
  }
  return v7;
}


void __fastcall EventRaceMaster_GroupRankData___ctor(
        EventRaceMaster_GroupRankData_o *this,
        int32_t groupId,
        float rate,
        int64_t goalTime,
        const MethodInfo *method)
{
  if ( (byte_4A5B21A & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B21A = 1;
  }
  this->fields.groupId = groupId;
  this->fields.rate = rate;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.isGoal = NetworkManager__getTime(0LL) > goalTime;
  this->fields.goalTime = goalTime;
}


void __fastcall EventRaceMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B21B & 1) == 0 )
  {
    sub_1B885B0(&EventRaceMaster___c_TypeInfo);
    byte_4A5B21B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventRaceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventRaceMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventRaceMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall EventRaceMaster___c___ctor(EventRaceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRaceMaster___c___GetTermIndex_b__11_0(
        EventRaceMaster___c_o *this,
        EventRaceEntity_o *a,
        EventRaceEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.termId - b->fields.termId;
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_62516348((int64_t)&a->fields.goalTime, b->fields.goalTime, 0LL);
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_62594480(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}