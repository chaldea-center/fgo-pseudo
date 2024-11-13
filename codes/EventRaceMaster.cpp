void __fastcall EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B162A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__, method, v2);
    byte_4B162A1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    211,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *__fastcall EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1629F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&termId);
    byte_4B1629F = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  float v13; // s8
  DataManager_o *Instance; // x0
  int32_t GroupIdx; // w0
  il2cpp_array_size_t v16; // w22
  struct System_Int64_array *goalPoints; // x8
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B162A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId, *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B162A6 = 1;
  }
  entity = 0LL;
  v13 = 0.0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_13;
    GroupIdx = EventRaceEntity__GetGroupIdx(entity, groupId, v12);
    if ( (GroupIdx & 0x80000000) != 0 )
      return v13;
    v16 = GroupIdx;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0LL
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
      sub_1BCAA3C(Instance, v11);
    }
    if ( v16 >= goalPoints->max_length )
      sub_1BCAA44(Instance, v11);
    return (float)(__int64)Instance / (float)goalPoints->m_Items[v16];
  }
  return v13;
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
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  struct System_Int32_array *groupIds; // x24
  EventRaceResultMaster_o *v15; // x22
  int32_t v16; // w23
  __int64 v17; // x25
  __int64 v18; // x26
  EventRaceResultEntity_o *v20; // [xsp+0h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B162A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId, *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B162A4 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    if ( !entity )
      goto LABEL_19;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_19;
    if ( (int)*(_QWORD *)&groupIds->max_length >= 1 )
    {
      v15 = (EventRaceResultMaster_o *)Instance;
      v16 = 0;
      v17 = 0LL;
      v18 = (unsigned int)*(_QWORD *)&groupIds->max_length - 1LL;
      while ( v15 )
      {
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     v15,
                                     &v20,
                                     eventId,
                                     termId,
                                     groupIds->m_Items[v17 + 1],
                                     v13);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v20 )
            break;
          if ( v20->fields.endedAt < nowTime )
            ++v16;
        }
        if ( v18 == v17 )
          return v16;
        if ( ++v17 >= (unsigned __int64)groupIds->max_length )
          sub_1BCAA44(Instance, v12);
      }
LABEL_19:
      sub_1BCAA3C(Instance, v12);
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
    sub_1BCAA3C(v6, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  v3 = eventId;
  if ( (byte_4B162A2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&EventRaceEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v15, v16);
    byte_4B162A2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRaceEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( !v22 )
          break;
        items = v22->fields._items;
        v32 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          break;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v34[4] = *(Il2CppClass **)&eventId;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), *(int64_t *)&eventId, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( Count == ++v23 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
LABEL_17:
  if ( !v22 )
    goto LABEL_19;
  return (EventRaceEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  void *list; // x0
  int32_t Count; // w23
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x20
  int64_t v35; // x2
  __int64 v36; // x3
  int32_t v37; // w24
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Comparison_T__o *v47; // x21
  Il2CppObject *v48; // x22
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int v56; // w22
  int32_t v57; // w21

  v5 = eventId;
  if ( (byte_4B162A8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventRaceEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&EventRaceEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__, v25, v26);
    sub_1BCA7E0(&EventRaceMaster___c_TypeInfo, v27, v28);
    byte_4B162A8 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRaceEntity__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v37,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( !v34 )
          break;
        items = v34->fields._items;
        v44 = Method_System_Collections_Generic_List_EventRaceEntity__Add__;
        ++v34->fields._version;
        if ( !items )
          break;
        size = v34->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v46[4] = *(Il2CppClass **)&eventId;
          sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), *(int64_t *)&eventId, v35, v36, v38, v39, v40, v41);
        }
      }
      if ( Count == ++v37 )
        goto LABEL_17;
    }
LABEL_31:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
LABEL_17:
  list = EventRaceMaster___c_TypeInfo;
  if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo, *(_QWORD *)&eventId);
    list = EventRaceMaster___c_TypeInfo;
  }
  v47 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 24LL);
  if ( !v47 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&eventId);
      list = EventRaceMaster___c_TypeInfo;
    }
    v48 = (Il2CppObject *)**((_QWORD **)list + 23);
    v47 = (System_Comparison_T__o *)sub_1BCAA2C(
                                      System_Comparison_EventRaceEntity__TypeInfo,
                                      *(_QWORD *)&eventId,
                                      v35,
                                      v36);
    System_Comparison_object____ctor(v47, v48, Method_EventRaceMaster___c__GetTermIndex_b__11_0__, 0LL);
    static_fields = EventRaceMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)v47;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__11_0, (int64_t)v47, v50, v51, v52, v53, v54, v55);
  }
  if ( !v34 )
    goto LABEL_31;
  System_Collections_Generic_List_object___Sort_56244000(
    v34,
    v47,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  v56 = v34->fields._size;
  if ( v56 >= 1 )
  {
    v57 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v34,
               v57,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
      if ( !list )
        break;
      if ( *((_DWORD *)list + 5) == termId )
        return v57;
      if ( v56 == ++v57 )
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t Instance; // x0
  __int64 v13; // x1
  struct System_Int32_array *groupIds; // x23
  EventRaceResultMaster_o *v15; // x21
  __int64 v16; // x25
  const MethodInfo *v17; // x5
  int64_t v18; // x22
  unsigned __int64 v19; // x24
  EventRaceResultEntity_o *v21; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B162A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId, *(_QWORD *)&termId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B162A3 = 1;
  }
  entity = 0LL;
  v21 = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_20;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_20;
  v15 = (EventRaceResultMaster_o *)Instance;
  v16 = *(_QWORD *)&groupIds->max_length;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = NetworkManager__getTime(0LL);
  if ( (int)v16 >= 1 )
  {
    v18 = Instance;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= groupIds->max_length )
        sub_1BCAA44(Instance, v13);
      if ( !v15 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v15, &v21, eventId, termId, groupIds->m_Items[v19 + 1], v17);
      if ( (Instance & 1) == 0 )
        return 0;
      if ( !v21 )
        break;
      if ( v21->fields.endedAt > v18 )
        return 0;
      if ( (unsigned int)v16 == ++v19 )
        return 1;
    }
LABEL_20:
    sub_1BCAA3C(Instance, v13);
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
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct System_Int32_array *groupIds; // x23
  float v14; // s0
  TotalEventRaceMaster_o *v15; // x21
  unsigned __int64 v16; // x24
  __int64 v17; // x22
  float v18; // s8
  struct System_Int64_array *goalPoints; // x8
  float v20; // s0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B162A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId, *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B162A5 = 1;
  }
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (groupIds = entity->fields.groupIds) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(Instance, v12);
  }
  if ( (int)*(_QWORD *)&groupIds->max_length < 1 )
    return 0;
  v14 = (float)rate;
  v15 = (TotalEventRaceMaster_o *)Instance;
  v16 = 0LL;
  v17 = (unsigned int)*(_QWORD *)&groupIds->max_length - 1LL;
  v18 = v14 / 1000.0;
  while ( 1 )
  {
    if ( !v15 )
      goto LABEL_19;
    Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                  v15,
                                  eventId,
                                  termId,
                                  groupIds->m_Items[v16 + 1],
                                  0LL);
    if ( !entity )
      goto LABEL_19;
    goalPoints = entity->fields.goalPoints;
    if ( !goalPoints )
      goto LABEL_19;
    if ( v16 >= goalPoints->max_length )
      goto LABEL_16;
    v20 = (float)(__int64)Instance / (float)goalPoints->m_Items[v16];
    if ( v17 == v16 || v18 < v20 )
      return v18 < v20;
    if ( ++v16 >= groupIds->max_length )
LABEL_16:
      sub_1BCAA44(Instance, v12);
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

  if ( (byte_4B162A0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B162A0 = 1;
  }
  PK = (Il2CppObject *)EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *__fastcall EventRaceMaster__getGroupIdData(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v29; // x19
  const MethodInfo *v30; // x4
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x25
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v41; // x21
  __int64 v42; // x2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x4
  EventRaceEntity_o *v45; // x8
  struct System_Int32_array *groupIds; // x9
  __int64 v47; // x9
  unsigned __int64 v48; // x27
  __int64 v49; // x28
  struct System_Int32_array *v50; // x8
  int32_t v51; // w26
  const MethodInfo *v52; // x5
  float GoalRate; // s0
  float v54; // s8
  _QWORD *v55; // x10
  struct EventRaceMaster_GroupRankData_array *items; // x8
  __int64 size; // x9
  _QWORD *v58; // x10
  __int128 v59; // q0
  char *v60; // x8
  __int128 v61; // q0
  int64_t goalTime; // x9
  __int64 v63; // x8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v64; // x0
  const MethodInfo_3618DB8 *v65; // x2
  EventRaceMaster___c_c *v66; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v68; // x23
  struct EventRaceMaster___c_StaticFields *static_fields; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  EventRaceMaster___c_c *v76; // x0
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v78; // x23
  struct EventRaceMaster___c_StaticFields *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  EventRaceMaster_GroupRankData_o v87; // [xsp+20h] [xbp-D0h] BYREF
  EventRaceResultEntity_o *v88; // [xsp+38h] [xbp-B8h] BYREF
  EventRaceMaster_GroupRankData_o v89; // [xsp+40h] [xbp-B0h]
  EventRaceMaster_GroupRankData_o v90; // [xsp+60h] [xbp-90h] BYREF
  EventRaceEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B162A7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__, v23, v24);
    sub_1BCA7E0(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__, v25, v26);
    sub_1BCA7E0(&EventRaceMaster___c_TypeInfo, v27, v28);
    byte_4B162A7 = 1;
  }
  entity = 0LL;
  v88 = 0LL;
  memset(&v87, 0, sizeof(v87));
  v29 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1BCAA2C(
                                                                              System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo,
                                                                              *(_QWORD *)&eventId,
                                                                              *(_QWORD *)&termId,
                                                                              method);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v29,
    (const MethodInfo_36184B8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v30) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v37 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1BCAA2C(
                                                                                System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo,
                                                                                v34,
                                                                                v35,
                                                                                v36);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v37,
      (const MethodInfo_36184B8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v41 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_1BCAA2C(
                                                                                System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo,
                                                                                v38,
                                                                                v39,
                                                                                v40);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v41,
      (const MethodInfo_36184B8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v45 = entity;
    if ( !entity )
      goto LABEL_29;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_29;
    v47 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v47 >= 1 )
    {
      v48 = 0LL;
      v49 = (unsigned int)v47;
      while ( 1 )
      {
        v50 = v45->fields.groupIds;
        if ( !v50 )
          goto LABEL_29;
        if ( v48 >= v50->max_length )
          sub_1BCAA44(Instance, v32);
        v51 = v50->m_Items[v48 + 1];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v51, v44);
        if ( !MasterData_object )
          goto LABEL_29;
        v54 = GoalRate;
        Instance = (Il2CppObject *)EventRaceResultMaster__TryGetEntity(
                                     (EventRaceResultMaster_o *)MasterData_object,
                                     &v88,
                                     eventId,
                                     termId,
                                     v51,
                                     v52);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v88 )
            goto LABEL_29;
          EventRaceMaster_GroupRankData___ctor(&v87, v51, v54, v88->fields.endedAt, v43);
          if ( v87.fields.isGoal )
          {
            if ( !v37 )
              goto LABEL_29;
            v58 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v89 = v87;
            items = v37->fields._items;
            ++v37->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v37->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v61 = *(_OWORD *)&v89.fields.groupId;
              goalTime = v89.fields.goalTime;
              v63 = *(_QWORD *)(v58[4] + 192LL);
              v64 = v37;
              goto LABEL_26;
            }
            v37->fields._size = size + 1;
          }
          else
          {
            if ( !v41 )
              goto LABEL_29;
            v55 = Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v89 = v87;
            items = v41->fields._items;
            ++v41->fields._version;
            if ( !items )
              goto LABEL_29;
            size = v41->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v61 = *(_OWORD *)&v89.fields.groupId;
              goalTime = v89.fields.goalTime;
              v63 = *(_QWORD *)(v55[4] + 192LL);
              v64 = v41;
LABEL_26:
              v65 = *(const MethodInfo_3618DB8 **)(v63 + 112);
              *(_OWORD *)&v90.fields.groupId = v61;
              v90.fields.goalTime = goalTime;
              System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddWithResize(v64, &v90, v65);
              goto LABEL_27;
            }
            v41->fields._size = size + 1;
          }
          v59 = *(_OWORD *)&v89.fields.groupId;
          v60 = (char *)items + 24 * size;
          *((_QWORD *)v60 + 6) = v89.fields.goalTime;
          *((_OWORD *)v60 + 2) = v59;
        }
LABEL_27:
        if ( v49 == ++v48 )
          break;
        v45 = entity;
        if ( !entity )
          goto LABEL_29;
      }
    }
    if ( !v37 )
      goto LABEL_29;
    if ( v37->fields._size >= 2 )
    {
      v66 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo, v32);
        v66 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_0 = v66->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v66->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v66, v32);
          v66 = EventRaceMaster___c_TypeInfo;
        }
        v68 = (Il2CppObject *)v66->static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1BCAA2C(
                                                                           System_Comparison_EventRaceMaster_GroupRankData__TypeInfo,
                                                                           v32,
                                                                           v42,
                                                                           v43);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v68,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          0LL);
        static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = _9__10_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
          (int64_t)_9__10_0,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_56732700(
        v37,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_361AC1C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v41 )
      goto LABEL_29;
    if ( v41->fields._size >= 2 )
    {
      v76 = EventRaceMaster___c_TypeInfo;
      if ( !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo, v32);
        v76 = EventRaceMaster___c_TypeInfo;
      }
      _9__10_1 = v76->static_fields->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76, v32);
          v76 = EventRaceMaster___c_TypeInfo;
        }
        v78 = (Il2CppObject *)v76->static_fields->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_1BCAA2C(
                                                                           System_Comparison_EventRaceMaster_GroupRankData__TypeInfo,
                                                                           v32,
                                                                           v42,
                                                                           v43);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v78,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          0LL);
        v79 = EventRaceMaster___c_TypeInfo->static_fields;
        v79->__9__10_1 = _9__10_1;
        sub_1BCA784((PartyOrganizationUtility_o *)&v79->__9__10_1, (int64_t)_9__10_1, v80, v81, v82, v83, v84, v85);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_56732700(
        v41,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_361AC1C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v29 )
LABEL_29:
      sub_1BCAA3C(Instance, v32);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v29,
      (System_Collections_Generic_IEnumerable_T__o *)v37,
      (const MethodInfo_361903C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v29,
      (System_Collections_Generic_IEnumerable_T__o *)v41,
      (const MethodInfo_361903C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
  }
  return v29;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceMaster_GroupRankData___ctor(
        EventRaceMaster_GroupRankData_o *this,
        int32_t groupId,
        float rate,
        int64_t goalTime,
        const MethodInfo *method)
{
  if ( (byte_4B162A9 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&groupId, goalTime);
    byte_4B162A9 = 1;
  }
  this->fields.groupId = groupId;
  this->fields.rate = rate;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&groupId);
  this->fields.isGoal = NetworkManager__getTime(0LL) > goalTime;
  this->fields.goalTime = goalTime;
}


void __fastcall EventRaceMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B162AA & 1) == 0 )
  {
    sub_1BCA7E0(&EventRaceMaster___c_TypeInfo, v1, v2);
    byte_4B162AA = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventRaceMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventRaceMaster___c_TypeInfo->static_fields->__9 = (struct EventRaceMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRaceMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.termId - b->fields.termId;
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_63210864((int64_t)&a->fields.goalTime, b->fields.goalTime, 0LL);
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_63288996(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}