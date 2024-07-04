void __fastcall EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E28BC & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__, method);
    byte_48E28BC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    210,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *__fastcall EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_48E28BA & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_48E28BA = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall EventRaceMaster__GetGoalRate(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  float v12; // s8
  DataManager_o *Instance; // x0
  int32_t GroupIdx; // w0
  il2cpp_array_size_t v15; // w22
  struct System_Int64_array *goalPoints; // x8
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E28C1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_48E28C1 = 1;
  }
  entity = 0LL;
  v12 = 0.0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_13;
    GroupIdx = EventRaceEntity__GetGroupIdx(entity, groupId, v11);
    if ( (GroupIdx & 0x80000000) != 0 )
      return v12;
    v15 = GroupIdx;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0LL
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
      sub_1B00F28(Instance, v10);
    }
    if ( v15 >= goalPoints->max_length )
      sub_1B00F30(Instance, v10);
    return (float)(__int64)Instance / (float)goalPoints->m_Items[v15];
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceMaster__GetGoaledTeamCount(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  struct System_Int32_array *groupIds; // x24
  EventRaceResultMaster_o *v14; // x22
  int32_t v15; // w23
  __int64 v16; // x25
  __int64 v17; // x26
  EventRaceResultEntity_o *v19; // [xsp+0h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_48E28BF & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_48E28BF = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    if ( !entity )
      goto LABEL_19;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_19;
    if ( (int)*(_QWORD *)&groupIds->max_length >= 1 )
    {
      v14 = (EventRaceResultMaster_o *)Instance;
      v15 = 0;
      v16 = 0LL;
      v17 = (unsigned int)*(_QWORD *)&groupIds->max_length - 1LL;
      while ( v14 )
      {
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     v14,
                                     &v19,
                                     eventId,
                                     termId,
                                     groupIds->m_Items[v16 + 1],
                                     v12);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v19 )
            break;
          if ( v19->fields.endedAt < nowTime )
            ++v15;
        }
        if ( v17 == v16 )
          return v15;
        if ( ++v16 >= (unsigned __int64)groupIds->max_length )
          sub_1B00F30(Instance, v11);
      }
LABEL_19:
      sub_1B00F28(Instance, v11);
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
    sub_1B00F28(v6, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v3 = eventId;
  if ( (byte_48E28BD & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&EventRaceEntity_TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v10);
    byte_48E28BD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( !v13 )
          break;
        items = v13->fields._items;
        v19 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          break;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)list,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v21[4] = *(Il2CppClass **)&eventId;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), eventId, v15, v16);
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B00F28(list, *(_QWORD *)&eventId);
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return (EventRaceEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceMaster__GetTermIndex(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int32_t v5; // w21
  __int64 v7; // x1
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
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w24
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x21
  Il2CppObject *v30; // x22
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w22
  int32_t v35; // w21

  v5 = eventId;
  if ( (byte_48E28C3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&System_Comparison_EventRaceEntity__TypeInfo, v8);
    sub_1B00CCC(&EventRaceEntity_TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__, v14);
    sub_1B00CCC(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v15);
    sub_1B00CCC(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__, v16);
    sub_1B00CCC(&EventRaceMaster___c_TypeInfo, v17);
    byte_48E28C3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v21,
               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( !v20 )
          break;
        items = v20->fields._items;
        v26 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)list,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v28[4] = *(Il2CppClass **)&eventId;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v28 + 4), eventId, v22, v23);
        }
      }
      if ( Count == ++v21 )
        goto LABEL_17;
    }
LABEL_31:
    sub_1B00F28(list, *(_QWORD *)&eventId);
  }
LABEL_17:
  list = EventRaceMaster___c_TypeInfo;
  if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
    list = EventRaceMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRaceMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_EventRaceEntity__TypeInfo);
    System_Comparison_object____ctor(v29, v30, Method_EventRaceMaster___c__GetTermIndex_b__11_0__, 0LL);
    static_fields = EventRaceMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)v29;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)v29, v32, v33);
  }
  if ( !v20 )
    goto LABEL_31;
  System_Collections_Generic_List_object___Sort_54277268(
    v20,
    v29,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  v34 = v20->fields._size;
  if ( v34 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v20,
               v35,
               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      if ( *((_DWORD *)list + 5) == termId )
        return v35;
      if ( v34 == ++v35 )
        return -1;
    }
    goto LABEL_31;
  }
  return -1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaceMaster__IsEveryTeamGoaled(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Instance; // x0
  __int64 v11; // x1
  struct System_Int32_array *groupIds; // x23
  EventRaceResultMaster_o *v13; // x21
  __int64 v14; // x25
  const MethodInfo *v15; // x5
  int64_t v16; // x22
  unsigned __int64 v17; // x24
  EventRaceResultEntity_o *v19; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_48E28BE & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_48E28BE = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_20;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_20;
  v13 = (EventRaceResultMaster_o *)Instance;
  v14 = *(_QWORD *)&groupIds->max_length;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( (int)v14 >= 1 )
  {
    v16 = Instance;
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= groupIds->max_length )
        sub_1B00F30(Instance, v11);
      if ( !v13 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v13, &v19, eventId, termId, groupIds->m_Items[v17 + 1], v15);
      if ( (Instance & 1) == 0 )
        return 0;
      if ( !v19 )
        break;
      if ( v19->fields.endedAt > v16 )
        return 0;
      if ( (unsigned int)v14 == ++v17 )
        return 1;
    }
LABEL_20:
    sub_1B00F28(Instance, v11);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaceMaster__IsReachedPointRateInTerm(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t rate,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct System_Int32_array *groupIds; // x23
  float v13; // s0
  TotalEventRaceMaster_o *v14; // x21
  unsigned __int64 v15; // x24
  __int64 v16; // x22
  float v17; // s8
  struct System_Int64_array *goalPoints; // x8
  float v19; // s0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E28C0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_48E28C0 = 1;
  }
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (groupIds = entity->fields.groupIds) == 0LL )
  {
LABEL_19:
    sub_1B00F28(Instance, v11);
  }
  if ( (int)*(_QWORD *)&groupIds->max_length < 1 )
    return 0;
  v13 = (float)rate;
  v14 = (TotalEventRaceMaster_o *)Instance;
  v15 = 0LL;
  v16 = (unsigned int)*(_QWORD *)&groupIds->max_length - 1LL;
  v17 = v13 / 1000.0;
  while ( 1 )
  {
    if ( !v14 )
      goto LABEL_19;
    Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                  v14,
                                  eventId,
                                  termId,
                                  groupIds->m_Items[v15 + 1],
                                  0LL);
    if ( !entity )
      goto LABEL_19;
    goalPoints = entity->fields.goalPoints;
    if ( !goalPoints )
      goto LABEL_19;
    if ( v15 >= goalPoints->max_length )
      goto LABEL_16;
    v19 = (float)(__int64)Instance / (float)goalPoints->m_Items[v15];
    if ( v16 == v15 || v17 < v19 )
      return v17 < v19;
    if ( ++v15 >= groupIds->max_length )
LABEL_16:
      sub_1B00F30(Instance, v11);
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

  if ( (byte_48E28BB & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__, entity);
    byte_48E28BB = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *__fastcall EventRaceMaster__getGroupIdData(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  __int64 v7; // x1
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
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v18; // x19
  const MethodInfo *v19; // x4
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x25
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v23; // x20
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v24; // x21
  const MethodInfo *v25; // x4
  EventRaceEntity_o *v26; // x8
  struct System_Int32_array *groupIds; // x9
  __int64 v28; // x9
  unsigned __int64 v29; // x27
  __int64 v30; // x28
  struct System_Int32_array *v31; // x8
  int32_t v32; // w26
  const MethodInfo *v33; // x5
  float GoalRate; // s0
  float v35; // s8
  const MethodInfo *v36; // x3
  _QWORD *v37; // x10
  struct EventRaceMaster_GroupRankData_array *items; // x8
  __int64 size; // x9
  _QWORD *v40; // x10
  __int128 v41; // q0
  char *v42; // x8
  __int128 v43; // q0
  int64_t goalTime; // x9
  __int64 v45; // x8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v46; // x0
  const MethodInfo_3438B2C *v47; // x2
  EventRaceMaster___c_c *v48; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v50; // x23
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  EventRaceMaster___c_c *v54; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v56; // x23
  struct EventRaceMaster___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  EventRaceMaster_GroupRankData_o v61; // [xsp+20h] [xbp-D0h] BYREF
  EventRaceResultEntity_o *v62; // [xsp+38h] [xbp-B8h] BYREF
  EventRaceMaster_GroupRankData_o v63; // [xsp+40h] [xbp-B0h]
  EventRaceMaster_GroupRankData_o v64; // [xsp+60h] [xbp-90h] BYREF
  EventRaceEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_48E28C2 & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B00CCC(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__, v15);
    sub_1B00CCC(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__, v16);
    sub_1B00CCC(&EventRaceMaster___c_TypeInfo, v17);
    byte_48E28C2 = 1;
  }
  entity = 0LL;
  v62 = 0LL;
  memset(&v61, 0, sizeof(v61));
  v18 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1B00F18(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v18,
    (const MethodInfo_343822C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v19) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v23 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1B00F18(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v23,
      (const MethodInfo_343822C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v24 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1B00F18(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v24,
      (const MethodInfo_343822C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v26 = entity;
    if ( !entity )
      goto LABEL_29;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_29;
    v28 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v28 >= 1 )
    {
      v29 = 0LL;
      v30 = (unsigned int)v28;
      while ( 1 )
      {
        v31 = v26->fields.groupIds;
        if ( !v31 )
          goto LABEL_29;
        if ( v29 >= v31->max_length )
          sub_1B00F30(Instance, v21);
        v32 = v31->m_Items[v29 + 1];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v32, v25);
        if ( !MasterData_object )
          goto LABEL_29;
        v35 = GoalRate;
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     (EventRaceResultMaster_o *)MasterData_object,
                                     &v62,
                                     eventId,
                                     termId,
                                     v32,
                                     v33);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v62 )
            goto LABEL_29;
          EventRaceMaster_GroupRankData___ctor(&v61, v32, v35, v62->fields.endedAt, v36);
          if ( v61.fields.isGoal )
          {
            if ( !v23 )
              goto LABEL_29;
            v40 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v63 = v61;
            items = v23->fields._items;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v43 = *(_OWORD *)&v63.fields.groupId;
              goalTime = v63.fields.goalTime;
              v45 = *(_QWORD *)(v40[4] + 192LL);
              v46 = v23;
              goto LABEL_26;
            }
            v23->fields._size = size + 1;
          }
          else
          {
            if ( !v24 )
              goto LABEL_29;
            v37 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v63 = v61;
            items = v24->fields._items;
            ++v24->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v43 = *(_OWORD *)&v63.fields.groupId;
              goalTime = v63.fields.goalTime;
              v45 = *(_QWORD *)(v37[4] + 192LL);
              v46 = v24;
LABEL_26:
              v47 = *(const MethodInfo_3438B2C **)(v45 + 112);
              *(_OWORD *)&v64.fields.groupId = v43;
              v64.fields.goalTime = goalTime;
              System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddWithResize(v46, &v64, v47);
              goto LABEL_27;
            }
            v24->fields._size = size + 1;
          }
          v41 = *(_OWORD *)&v63.fields.groupId;
          v42 = (char *)items + 24 * size;
          *((_QWORD *)v42 + 6) = v63.fields.goalTime;
          *((_OWORD *)v42 + 2) = v41;
        }
LABEL_27:
        if ( v30 == ++v29 )
          break;
        v26 = entity;
        if ( !entity )
          goto LABEL_29;
      }
    }
    if ( !v23 )
      goto LABEL_29;
    if ( v23->fields._size >= 2 )
    {
      v48 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v48 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_0 = v48->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v48->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v48);
          v48 = EventRaceMaster___c_TypeInfo;
        }
        v50 = (Il2CppObject *)v48->static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1B00F18(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v50,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          0LL);
        static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = _9__10_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v52, v53);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_54765968(
        v23,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_343A990 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v24 )
      goto LABEL_29;
    if ( v24->fields._size >= 2 )
    {
      v54 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v54 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_1 = v54->static_fields->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54);
          v54 = EventRaceMaster___c_TypeInfo;
        }
        v56 = (Il2CppObject *)v54->static_fields->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1B00F18(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v56,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          0LL);
        v57 = EventRaceMaster___c_TypeInfo->static_fields;
        v57->__9__10_1 = _9__10_1;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v57->__9__10_1, (int32_t)_9__10_1, v58, v59);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_54765968(
        v24,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_343A990 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v18 )
LABEL_29:
      sub_1B00F28(Instance, v21);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_3438DB0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)v24,
      (const MethodInfo_3438DB0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
  }
  return v18;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceMaster_GroupRankData___ctor(
        EventRaceMaster_GroupRankData_o *this,
        int32_t groupId,
        float rate,
        int64_t goalTime,
        const MethodInfo *method)
{
  if ( (byte_48E28C4 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, *(_QWORD *)&groupId);
    byte_48E28C4 = 1;
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E28C5 & 1) == 0 )
  {
    sub_1B00CCC(&EventRaceMaster___c_TypeInfo, v1);
    byte_48E28C5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(EventRaceMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRaceMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceMaster___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)EventRaceMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B00F28(this, a);
  return a->fields.termId - b->fields.termId;
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_61134924((int64_t)&a->fields.goalTime, b->fields.goalTime, 0LL);
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_61212756(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}