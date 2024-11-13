void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B161C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, method, v2);
    byte_4B161C9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    67,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  EventEntity_array *EntityList_39868780; // x19
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  unsigned int v14; // w22
  EventEntity_o *v15; // x8
  int32_t id; // w21

  if ( (byte_4B161D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B161D5 = 1;
  }
  EntityList_39868780 = EventMaster__GetEntityList_39868780(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_39868780 )
    goto LABEL_15;
  max_length = EntityList_39868780->max_length;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1BCAA44(Instance, v11);
      v15 = EntityList_39868780->m_Items[v14];
      if ( !v15 )
        break;
      if ( !v13 )
        break;
      id = v15->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v13,
                   id,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance[1].monitor) & 0x10) != 0 )
        return id;
      max_length = EntityList_39868780->max_length;
      if ( (int)++v14 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1BCAA3C(Instance, v11);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x19
  const MethodInfo *v12; // x4
  int64_t EntityList_39868780; // x0
  __int64 v14; // x1
  int v15; // w8
  int64_t v16; // x20
  unsigned int v17; // w22
  Il2CppObject *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B161E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_EventEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B161E0 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_39868780 = (int64_t)EventMaster__GetEntityList_39868780(this, 23, 0, 1, v12);
  if ( !EntityList_39868780 )
    goto LABEL_18;
  v15 = *(_DWORD *)(EntityList_39868780 + 24);
  v16 = EntityList_39868780;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= v15 )
        sub_1BCAA44(EntityList_39868780, v14);
      v18 = *(Il2CppObject **)(v16 + 8LL * (int)v17 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
      EntityList_39868780 = NetworkManager__getTime(0LL);
      if ( !v18 )
        break;
      if ( EntityList_39868780 >= (__int64)v18[5].monitor )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v26 = Method_System_Collections_Generic_List_EventEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v18,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v18;
          sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v18, v19, v20, v21, v22, v23, v24);
        }
      }
      v15 = *(_DWORD *)(v16 + 24);
      if ( (int)++v17 >= v15 )
        return (System_Collections_Generic_List_EventEntity__o *)v11;
    }
LABEL_18:
    sub_1BCAA3C(EntityList_39868780, v14);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v11;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return EventMaster__GetEntityList_39868780(this, eventType, 1, isFinishedAt, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventEntity____o *__fastcall EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x21
  EventEntity_array *EntityList_39868780; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  __int64 v15; // x8
  unsigned __int64 v16; // x23
  bool v17; // w22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  int64_t v27; // x1
  Il2CppClass **v28; // x0

  if ( (byte_4B161CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity____Add__, eventTypes, isFinishedAt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_EventEntity____TypeInfo, v9, v10);
    byte_4B161CB = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity____TypeInfo,
                                                       eventTypes,
                                                       isFinishedAt,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_14;
  v15 = *(_QWORD *)&eventTypes->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = isFinishedAt;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1BCAA44(EntityList_39868780, v13);
      EntityList_39868780 = EventMaster__GetEntityList_39868780(this, eventTypes->m_Items[v16 + 1], 1, v17, v14);
      if ( !v11 )
        break;
      items = v11->fields._items;
      v25 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      v27 = (int64_t)EntityList_39868780;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          &EntityList_39868780->obj,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v27;
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), v27, v18, v19, v20, v21, v22, v23);
      }
      LODWORD(v15) = eventTypes->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        return (System_Collections_Generic_List_EventEntity____o *)v11;
    }
LABEL_14:
    sub_1BCAA3C(EntityList_39868780, v13);
  }
  return (System_Collections_Generic_List_EventEntity____o *)v11;
}


EventEntity_array *__fastcall EventMaster__GetEnableExistEventRewardEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t Instance; // x0
  __int64 v27; // x1
  EventRewardSceneMaster_o *v28; // x21
  int v29; // w22
  int32_t v30; // w23
  const MethodInfo *v31; // x2
  int64_t v32; // x24
  __int64 methodPtr_low; // x10
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4B161DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v6, v7);
    sub_1BCA7E0(&EventEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    byte_4B161DE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__getTime(0LL);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v22,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v28 = (EventRewardSceneMaster_o *)Instance;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
               (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v29 = Instance;
    v30 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v30,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v32 = Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventEntity_TypeInfo )
      {
        break;
      }
      Instance = EventEntity__IsOpen((EventEntity_o *)Instance, 1, v31);
      if ( (Instance & 1) != 0 )
      {
        if ( !v28 )
          break;
        Instance = (int64_t)EventRewardSceneMaster__GetEntityList(v28, *(_DWORD *)(v32 + 16), 0LL);
        if ( Instance )
        {
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( !v25 )
              break;
            items = v25->fields._items;
            v41 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v25->fields._version;
            if ( !items )
              break;
            size = v25->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)v32,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &items->obj.klass + size;
              v25->fields._size = size + 1;
              v43[4] = (Il2CppClass *)v32;
              sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), v32, v34, v35, v36, v37, v38, v39);
            }
          }
        }
      }
      if ( v29 == ++v30 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1BCAA3C(Instance, v27);
  }
LABEL_23:
  if ( !v25 )
    goto LABEL_25;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v25,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventMaster__GetEntityList_39868780(this, 24, 1, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEnabledEntityListFromIds(
        EventMaster_o *this,
        int32_t eventType,
        System_Collections_Generic_List_int__o *ids,
        int64_t checkTime,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v23; // x23
  __int64 v24; // x1
  void *list; // x0
  int v26; // w24
  int32_t v27; // w25
  EventEntity_o *v28; // x26
  __int64 methodPtr_low; // x10
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4B161CC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventType,
      ids);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&EventEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_EventEntity__TypeInfo, v21, v22);
    byte_4B161CC = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       *(_QWORD *)&eventType,
                                                       ids,
                                                       checkTime);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v26 = (int)list;
    v27 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_26;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v27,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = (EventEntity_o *)list;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
        {
          if ( !ids )
            goto LABEL_26;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v28->fields.type == eventType) )
          {
            if ( checkTime )
            {
              list = (void *)EventEntity__IsOpen_39841720(v28, checkTime, 1, v31);
              if ( ((unsigned __int8)list & 1) == 0 )
                continue;
            }
            else
            {
              list = (void *)EventEntity__IsOpen(v28, 1, v30);
              if ( ((unsigned __int8)list & 1) == 0 )
                continue;
            }
            if ( !v23 )
              goto LABEL_26;
            items = v23->fields._items;
            v39 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_26;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v23,
                (Il2CppObject *)v28,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              v23->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v28;
              sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v28, v32, v33, v34, v35, v36, v37);
            }
          }
        }
      }
    }
    while ( v26 != ++v27 );
  }
  if ( !v23 )
LABEL_26:
    sub_1BCAA3C(list, v24);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v23,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventMaster__GetEntityList_39868780(this, eventType, 0, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_39868780(
        EventMaster_o *this,
        int32_t eventType,
        bool isOpenGet,
        bool isFinishedAt,
        const MethodInfo *method)
{
  _BOOL4 v6; // w19
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
  System_Collections_Generic_List_object__o *v21; // x22
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v24; // w23
  int32_t v25; // w24
  bool v26; // w25
  const MethodInfo *v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *v33; // x26
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  v6 = isOpenGet;
  if ( (byte_4B161CD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventType,
      isOpenGet);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&EventEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventEntity__TypeInfo, v19, v20);
    byte_4B161CD = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       *(_QWORD *)&eventType,
                                                       isOpenGet,
                                                       isFinishedAt);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = (int)list;
    v25 = 0;
    v26 = isFinishedAt;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v25,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v33 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(list[1].klass) == eventType) )
        {
          if ( !v6
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsOpen(
                                                                           (EventEntity_o *)list,
                                                                           v26,
                                                                           v27),
                (((unsigned int)list | !v6) & 1) != 0) )
          {
            if ( !v21 )
              break;
            items = v21->fields._items;
            v36 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              break;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                v33,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v33;
              sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v33, (int64_t)v27, v28, v29, v30, v31, v32);
            }
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCAA3C(list, v22);
  }
LABEL_21:
  if ( !v21 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v21,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B161E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6, v7);
    byte_4B161E3 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_1BCAA3C(Master_object, v9);
  }
  return -1LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B161DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B161DA = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1BCAA3C(v7, v8);
    v9 = entity + 2;
  }
  else
  {
    v9 = (Il2CppObject *)&StringLiteral_1/*""*/;
  }
  return (System_String_o *)v9->klass;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventShortName(
        EventMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B161DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B161DB = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1BCAA3C(v7, v8);
    p_monitor = (System_String_o **)&entity[2].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_monitor;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventStartedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4B161E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6, v7);
    byte_4B161E2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
  {
    return (int64_t)Entity[5].monitor;
  }
  else
  {
    return -1LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_HashSet_int__o *__fastcall EventMaster__GetEventValUpEventIdHash(
        EventMaster_o *this,
        bool isFinish,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  EventEntity_array *FilterEnableEntityList; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_HashSet_int__o *v27; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x21
  __int64 v30; // x22
  EventEntity_o *v31; // x26

  if ( (byte_4B161D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish, nowTime);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18, v19);
    byte_4B161D8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[6].monitor, v22);
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v30 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v30 >= max_length )
          sub_1BCAA44(Instance, v21);
        v31 = FilterEnableEntityList->m_Items[v30];
        if ( !v31 )
          break;
        if ( !v29 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v29,
                     v31->fields.id,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( ((__int64)Instance[1].monitor & 0x10) != 0 )
        {
          if ( !v27 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v27,
                                       v31->fields.id,
                                       (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v30 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_1BCAA3C(Instance, v21);
    }
LABEL_17:
    if ( !v27 )
      goto LABEL_19;
  }
  return v27;
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetFilterEnableEntityList(
        EventMaster_o *this,
        bool isFinishedAt,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 Time; // x22
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
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  void *Instance; // x0
  const MethodInfo *v40; // x1
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x19
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_List_object__o *v48; // x20
  EventFilterMaster_o *v49; // x23
  __int64 v50; // x2
  const MethodInfo *v51; // x3
  int32_t Count; // w24
  int32_t v53; // w25
  bool v54; // w26
  EventEntity_o *Item; // x0
  int64_t v56; // x27
  __int64 methodPtr_low; // x10
  int32_t type; // w8
  const MethodInfo *v59; // x4
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  EventFilterEntity_o *v66; // x23
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  System_Collections_Generic_List_object__o *v76; // x0
  System_Comparison_T__o *v77; // x21
  Il2CppObject *v78; // x22
  struct EventMaster___c_StaticFields *static_fields; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x2
  __int64 v87; // x3
  System_Comparison_T__o *v88; // x21
  Il2CppObject *v89; // x22
  struct EventMaster___c_StaticFields *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_Object_array *v97; // x21
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-70h]
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  Time = nowTime;
  if ( (byte_4B161CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isFinishedAt, nowTime);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFilterMaster___, v11, v12);
    sub_1BCA7E0(&EventEntity___TypeInfo, v13, v14);
    sub_1BCA7E0(&EventEntity_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Sort__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity___ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_EventEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v33, v34);
    sub_1BCA7E0(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v35, v36);
    sub_1BCA7E0(&EventMaster___c_TypeInfo, v37, v38);
    byte_4B161CE = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v41,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v48 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v45,
                                                       v46,
                                                       v47);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_58;
  v49 = (EventFilterMaster_o *)MasterData_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Time <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
    Time = NetworkManager__getTime(0LL);
  }
  if ( Count >= 1 )
  {
    v53 = 0;
    v54 = isFinishedAt;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_58;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                v53,
                                (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v56 = (int64_t)Item;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( type == 22 || type == 12 )
          {
            Instance = (void *)EventEntity__IsOpen_39841720(Item, Time, v54, v51);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v49 )
                goto LABEL_58;
              Instance = (void *)EventFilterMaster__TryGetEntity_39853044(v49, &entity, *(_DWORD *)(v56 + 16), 0, v59);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v44 )
                  goto LABEL_58;
                version = v44->fields._version;
                items = v44->fields._items;
                goto LABEL_36;
              }
              Instance = entity;
              if ( !entity )
                goto LABEL_58;
              Instance = (void *)EventFilterEntity__IsOpen(entity, v40);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v66 = entity;
                if ( !entity )
                  goto LABEL_58;
                Instance = (void *)System_String__IsNullOrEmpty(entity->fields.buttonText, 0LL);
                if ( ((unsigned __int8)Instance & 1) == 0
                  && v66->fields.openQuestId >= 1
                  && v66->fields.closeQuestId > 0 )
                {
                  if ( !v48 )
                    goto LABEL_58;
                  v67 = v48->fields._items;
                  v49 = (EventFilterMaster_o *)MasterData_object;
                  v68 = Method_System_Collections_Generic_List_EventEntity__Add__;
                  ++v48->fields._version;
                  if ( !v67 )
                    goto LABEL_58;
                  size = v48->fields._size;
                  if ( (unsigned int)size >= v67->max_length )
                  {
                    v75 = v68[4];
                    v76 = v48;
                    goto LABEL_41;
                  }
                  v70 = &v67->obj.klass + size;
                  v48->fields._size = size + 1;
LABEL_39:
                  v70[4] = (Il2CppClass *)v56;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 4), v56, v60, v61, v62, v63, v64, v65);
                  continue;
                }
                if ( !v44 )
                  goto LABEL_58;
                version = v44->fields._version;
                items = v44->fields._items;
                v49 = (EventFilterMaster_o *)MasterData_object;
LABEL_36:
                v73 = Method_System_Collections_Generic_List_EventEntity__Add__;
                v44->fields._version = version + 1;
                if ( !items )
                  goto LABEL_58;
                v74 = v44->fields._size;
                if ( (unsigned int)v74 >= items->max_length )
                {
                  v75 = v73[4];
                  v76 = v44;
LABEL_41:
                  System_Collections_Generic_List_object___AddWithResize(
                    v76,
                    (Il2CppObject *)v56,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75 + 192) + 112LL));
                  continue;
                }
                v70 = &items->obj.klass + v74;
                v44->fields._size = v74 + 1;
                goto LABEL_39;
              }
            }
          }
        }
      }
    }
    while ( Count != ++v53 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v40);
    Instance = EventMaster___c_TypeInfo;
  }
  v77 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v77 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v40);
      Instance = EventMaster___c_TypeInfo;
    }
    v78 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v77 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventEntity__TypeInfo, v40, v50, v51);
    System_Comparison_object____ctor(v77, v78, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventEntity__o *)v77;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v77, v80, v81, v82, v83, v84, v85);
  }
  if ( !v44 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_56244000(
    v44,
    v77,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v40);
    Instance = EventMaster___c_TypeInfo;
  }
  v88 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v88 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v40);
      Instance = EventMaster___c_TypeInfo;
    }
    v89 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v88 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventEntity__TypeInfo, v40, v86, v87);
    System_Comparison_object____ctor(v88, v89, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0LL);
    v90 = EventMaster___c_TypeInfo->static_fields;
    v90->__9__7_1 = (struct System_Comparison_EventEntity__o *)v88;
    sub_1BCA784((PartyOrganizationUtility_o *)&v90->__9__7_1, (int64_t)v88, v91, v92, v93, v94, v95, v96);
  }
  if ( !v48 )
LABEL_58:
    sub_1BCAA3C(Instance, v40);
  System_Collections_Generic_List_object___Sort_56244000(
    v48,
    v88,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v97 = (System_Object_array *)sub_1BCA888(
                                 EventEntity___TypeInfo,
                                 (unsigned int)(v48->fields._size + v44->fields._size));
  System_Collections_Generic_List_object___CopyTo_56238604(
    v44,
    v97,
    0,
    (const MethodInfo_35A220C *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_56238604(
    v48,
    v97,
    v44->fields._size,
    (const MethodInfo_35A220C *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v97;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_39868780; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11

  EntityList_39868780 = EventMaster__GetEntityList_39868780(this, 24, 1, 1, v2);
  if ( !EntityList_39868780 )
    return -1LL;
  max_length = EntityList_39868780->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_39868780->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(result, v4);
    v9 = m_Items[v6];
    if ( !v9 )
      sub_1BCAA3C(result, v4);
    finishedAt = v9->fields.finishedAt;
    ++v6;
    if ( result < finishedAt )
      result = finishedAt;
  }
  while ( (int)v6 < max_length );
  return result;
}


EventEntity_array *__fastcall EventMaster__GetOpenedEventEntityList(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_object__o *v43; // x19
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_List_object__o *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_List_object__o *v51; // x21
  void *Instance; // x0
  __int64 v53; // x1
  Il2CppObject *MasterData_object; // x24
  ShopMaster_o *v55; // x25
  int32_t Count; // w0
  const MethodInfo *v57; // x2
  __int64 v58; // x3
  int32_t v59; // w26
  int32_t v60; // w27
  EventEntity_o *v61; // x28
  __int64 methodPtr_low; // x10
  const MethodInfo *v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  System_Collections_Generic_List_object__o *v77; // x0
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  System_Comparison_T__o *v81; // x22
  Il2CppObject *v82; // x23
  struct EventMaster___c_StaticFields *static_fields; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x2
  __int64 v91; // x3
  System_Comparison_T__o *v92; // x22
  Il2CppObject *v93; // x23
  struct EventMaster___c_StaticFields *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x2
  __int64 v102; // x3
  System_Comparison_T__o *v103; // x22
  Il2CppObject *v104; // x23
  struct EventMaster___c_StaticFields *v105; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  System_Collections_Generic_List_object__o *v115; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B161DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&System_Comparison_EventEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&EventEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Sort__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_EventEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v32, v33);
    sub_1BCA7E0(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v34, v35);
    sub_1BCA7E0(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v36, v37);
    sub_1BCA7E0(&EventMaster___c_TypeInfo, v38, v39);
    byte_4B161DC = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  nowTime = NetworkManager__getTime(0LL);
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v40,
                                                       v41,
                                                       v42);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v47 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v44,
                                                       v45,
                                                       v46);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v51 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v48,
                                                       v49,
                                                       v50);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_63;
  v55 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v59 = Count;
    v60 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_63;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v60,
                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_63;
      v61 = (EventEntity_o *)Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventEntity_TypeInfo
        || !v55 )
      {
        goto LABEL_63;
      }
      Instance = (void *)ShopMaster__IsEnableEventShop(v55, *((_DWORD *)Instance + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_object )
          goto LABEL_63;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             &entity,
                             v61->fields.id,
                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_20;
        if ( !entity )
          goto LABEL_63;
        if ( (BYTE4(entity[1].monitor) & 0x40) == 0 )
        {
LABEL_20:
          Instance = (void *)EventEntity__IsOpen(v61, 0, v57);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v43 )
              goto LABEL_63;
            items = v43->fields._items;
            v70 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v43->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v43->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v76 = v70[4];
              v77 = v43;
LABEL_38:
              System_Collections_Generic_List_object___AddWithResize(
                v77,
                (Il2CppObject *)v61,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76 + 192) + 112LL));
              continue;
            }
            v72 = &items->obj.klass + size;
            v43->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v61, nowTime, v63);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v47 )
                goto LABEL_63;
              v73 = v47->fields._items;
              v74 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v47->fields._version;
              if ( !v73 )
                goto LABEL_63;
              v75 = v47->fields._size;
              if ( (unsigned int)v75 >= v73->max_length )
              {
                v76 = v74[4];
                v77 = v47;
                goto LABEL_38;
              }
              v72 = &v73->obj.klass + v75;
              v47->fields._size = v75 + 1;
            }
            else
            {
              if ( !v51 )
                goto LABEL_63;
              v78 = v51->fields._items;
              v79 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v51->fields._version;
              if ( !v78 )
                goto LABEL_63;
              v80 = v51->fields._size;
              if ( (unsigned int)v80 >= v78->max_length )
              {
                v76 = v79[4];
                v77 = v51;
                goto LABEL_38;
              }
              v72 = &v78->obj.klass + v80;
              v51->fields._size = v80 + 1;
            }
          }
          v72[4] = (Il2CppClass *)v61;
          sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 4), (int64_t)v61, (int64_t)v63, v64, v65, v66, v67, v68);
        }
      }
    }
    while ( v59 != ++v60 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v53);
    Instance = EventMaster___c_TypeInfo;
  }
  v81 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v81 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v53);
      Instance = EventMaster___c_TypeInfo;
    }
    v82 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v81 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventEntity__TypeInfo, v53, v57, v58);
    System_Comparison_object____ctor(v81, v82, Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventEntity__o *)v81;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__22_0, (int64_t)v81, v84, v85, v86, v87, v88, v89);
  }
  if ( !v43 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_56244000(
    v43,
    v81,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v53);
    Instance = EventMaster___c_TypeInfo;
  }
  v92 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v92 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v53);
      Instance = EventMaster___c_TypeInfo;
    }
    v93 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v92 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventEntity__TypeInfo, v53, v90, v91);
    System_Comparison_object____ctor(v92, v93, Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, 0LL);
    v94 = EventMaster___c_TypeInfo->static_fields;
    v94->__9__22_1 = (struct System_Comparison_EventEntity__o *)v92;
    sub_1BCA784((PartyOrganizationUtility_o *)&v94->__9__22_1, (int64_t)v92, v95, v96, v97, v98, v99, v100);
  }
  if ( !v47 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_56244000(
    v47,
    v92,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v53);
    Instance = EventMaster___c_TypeInfo;
  }
  v103 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v103 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v53);
      Instance = EventMaster___c_TypeInfo;
    }
    v104 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v103 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventEntity__TypeInfo, v53, v101, v102);
    System_Comparison_object____ctor(v103, v104, Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, 0LL);
    v105 = EventMaster___c_TypeInfo->static_fields;
    v105->__9__22_2 = (struct System_Comparison_EventEntity__o *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)&v105->__9__22_2, (int64_t)v103, v106, v107, v108, v109, v110, v111);
  }
  if ( !v51
    || (System_Collections_Generic_List_object___Sort_56244000(
          v51,
          v103,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v115 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_EventEntity__TypeInfo,
                                                              v112,
                                                              v113,
                                                              v114),
        System_Collections_Generic_List_object____ctor(
          v115,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v115) )
  {
LABEL_63:
    sub_1BCAA3C(Instance, v53);
  }
  System_Collections_Generic_List_object___AddRange(
    v115,
    (System_Collections_Generic_IEnumerable_T__o *)v43,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v115,
    (System_Collections_Generic_IEnumerable_T__o *)v47,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v115,
    (System_Collections_Generic_IEnumerable_T__o *)v51,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v115,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B161CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B161CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( ((__int64)Entity[1].monitor & 0xC001) != 0 )
      LODWORD(Entity) = HIDWORD(Entity[2].monitor);
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


int32_t __fastcall EventMaster__GetRaidEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  EventEntity_array *EntityList_39868780; // x19
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  unsigned int v14; // w22
  EventEntity_o *v15; // x8
  int32_t id; // w21

  if ( (byte_4B161D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B161D4 = 1;
  }
  EntityList_39868780 = EventMaster__GetEntityList_39868780(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_39868780 )
    goto LABEL_15;
  max_length = EntityList_39868780->max_length;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1BCAA44(Instance, v11);
      v15 = EntityList_39868780->m_Items[v14];
      if ( !v15 )
        break;
      if ( !v13 )
        break;
      id = v15->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v13,
                   id,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( ((__int64)Instance[1].monitor & 0x40) != 0 )
        return id;
      max_length = EntityList_39868780->max_length;
      if ( (int)++v14 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1BCAA3C(Instance, v11);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B161D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B161D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( ((__int64)Entity[1].monitor & 0x40) != 0 )
      LODWORD(Entity) = HIDWORD(Entity[2].monitor);
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetSortedEntityList(
        EventMaster_o *this,
        GameEventType_TYPE_array *types,
        const MethodInfo *method)
{
  __int64 v3; // x3
  GameEventType_TYPE_array *v4; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  void *EntityList_39868780; // x0
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x2
  __int64 v23; // x3
  const MethodInfo *v24; // x4
  __int64 v25; // x8
  unsigned __int64 v26; // x22
  System_Comparison_T__o *v27; // x20
  Il2CppObject *v28; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  v4 = types;
  if ( (byte_4B161D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventEntity__TypeInfo, types, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity__Sort__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_EventEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&GameEventType_TYPE___TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v16, v17);
    sub_1BCA7E0(&EventMaster___c_TypeInfo, v18, v19);
    byte_4B161D3 = 1;
  }
  if ( !v4 )
  {
    EntityList_39868780 = (void *)sub_1BCA888(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_39868780 )
      goto LABEL_20;
    v4 = (GameEventType_TYPE_array *)EntityList_39868780;
    if ( !*((_DWORD *)EntityList_39868780 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_39868780 + 8) = 12;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       types,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v25 = *(_QWORD *)&v4->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( v26 < (unsigned int)v25 )
    {
      EntityList_39868780 = EventMaster__GetEntityList_39868780(this, v4->m_Items[v26 + 1], 0, 1, v24);
      if ( !v21 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v21,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_39868780,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v25) = v4->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_12;
    }
LABEL_21:
    sub_1BCAA44(EntityList_39868780, types);
  }
LABEL_12:
  EntityList_39868780 = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, types);
    EntityList_39868780 = EventMaster___c_TypeInfo;
  }
  v27 = *(System_Comparison_T__o **)(*((_QWORD *)EntityList_39868780 + 23) + 24LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)EntityList_39868780 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_39868780, types);
      EntityList_39868780 = EventMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)EntityList_39868780 + 23);
    v27 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventEntity__TypeInfo, types, v22, v23);
    System_Comparison_object____ctor(v27, v28, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventEntity__o *)v27;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)v27, v30, v31, v32, v33, v34, v35);
  }
  if ( !v21 )
LABEL_20:
    sub_1BCAA3C(EntityList_39868780, types);
  System_Collections_Generic_List_object___Sort_56244000(
    v21,
    v27,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v21;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventEntity_array *EntityList_39868780; // x19
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v17; // x21
  int max_length; // w8
  bool v19; // w24
  QuestMaster_o *v20; // x22
  int v21; // w25
  EventEntity_o *v22; // x8
  int32_t id; // w23

  if ( (byte_4B161D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B161D6 = 1;
  }
  EntityList_39868780 = EventMaster__GetEntityList_39868780(this, 12, 1, 0, v3);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v17 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_39868780 )
    goto LABEL_19;
  max_length = EntityList_39868780->max_length;
  v19 = max_length > 0;
  if ( max_length >= 1 )
  {
    v20 = (QuestMaster_o *)Instance;
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        sub_1BCAA44(Instance, v15);
      v22 = EntityList_39868780->m_Items[v21];
      if ( !v22 )
        break;
      if ( !MasterData_object )
        break;
      id = v22->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance->fields.m_CancellationTokenSource) & 0x10) != 0 )
      {
        if ( !v17 )
          break;
        Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId((QuestGroupMaster_o *)v17, id, 1, 0LL);
        if ( !v20 )
          break;
        Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                      v20,
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v19;
      }
      max_length = EntityList_39868780->max_length;
      v19 = ++v21 < max_length;
      if ( v21 >= max_length )
        return v19;
    }
LABEL_19:
    sub_1BCAA3C(Instance, v15);
  }
  return v19;
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4B161D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime, method);
    byte_4B161D7 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_1BCAA3C(0LL, v7);
  return EventEntity__IsOpen_39841720((EventEntity_o *)Entity, checkTime, 0, v8);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventEntity_array *EntityList_39868780; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int max_length; // w8
  bool v14; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  int v16; // w23
  EventEntity_o *v17; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B161D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, flag, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B161D9 = 1;
  }
  entity = 0LL;
  EntityList_39868780 = EventMaster__GetEntityList_39868780(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_39868780 )
    goto LABEL_15;
  max_length = EntityList_39868780->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1BCAA44(Instance, v12);
      v17 = EntityList_39868780->m_Items[v16];
      if ( !v17 || !v15 )
        break;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v15,
                                   &entity,
                                   v17->fields.id,
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_19;
      if ( !entity )
        break;
      if ( ((int64_t)entity[1].monitor & flag) == 0 )
      {
LABEL_19:
        max_length = EntityList_39868780->max_length;
        v14 = ++v16 < max_length;
        if ( v16 < max_length )
          continue;
      }
      return v14;
    }
LABEL_15:
    sub_1BCAA3C(Instance, v12);
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMaster__IsEnableEvent(
        EventMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  EventEntity_o *Entity; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4B161E1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&eventType);
    byte_4B161E1 = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  return Entity && (!eventType || Entity->fields.type == eventType) && EventEntity__IsEventPeriod(Entity, nowTime, v10);
}


bool __fastcall EventMaster__IsEnableEventShop(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x22
  int32_t Count; // w0
  int32_t v24; // w23
  int32_t v25; // w24
  bool v26; // w29
  EventEntity_o *v27; // x25
  __int64 methodPtr_low; // x10
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B161DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&EventEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B161DD = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    v26 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v25,
                                    (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v27 = (EventEntity_o *)Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEntity_TypeInfo
        || !MasterData_object )
      {
        break;
      }
      Instance = (DataManager_o *)ShopMaster__IsEnableEventShop(
                                    (ShopMaster_o *)MasterData_object,
                                    Instance->fields.m_CachedPtr,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_30;
      if ( !v22 )
        break;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    v22,
                                    &entity,
                                    v27->fields.id,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( (BYTE4(entity[1].monitor) & 0x40) != 0 )
          goto LABEL_30;
      }
      if ( !EventEntity__IsOpen(v27, 0, v29) && !EventEntity__IsExchangePeriod(v27, Time, v30)
        || EventEntity__IsClosePurchaseShop(v27, v20) )
      {
LABEL_30:
        v26 = ++v25 < v24;
        if ( v24 != v25 )
          continue;
      }
      return v26;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v20);
  }
  return 0;
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventEntity_array *EntityList_39868780; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int max_length; // w8
  bool v14; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  int v16; // w24
  EventEntity_o *v17; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B161DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B161DF = 1;
  }
  entity = 0LL;
  EntityList_39868780 = EventMaster__GetEntityList_39868780(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_39868780) )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v12);
  }
  max_length = EntityList_39868780->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1BCAA44(Instance, v12);
      v17 = EntityList_39868780->m_Items[v16];
      if ( !v17 || !v15 )
        goto LABEL_17;
      id = v17->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v15,
                                   &entity,
                                   id,
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( (BYTE2(entity[1].monitor) & 0x10) != 0 )
          break;
      }
      max_length = EntityList_39868780->max_length;
      v14 = ++v16 < max_length;
      if ( v16 >= max_length )
        return v14;
    }
    *eventId = id;
  }
  return v14;
}


bool __fastcall EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_39868780; // x0

  EntityList_39868780 = EventMaster__GetEntityList_39868780(this, 24, 1, 1, v2);
  if ( EntityList_39868780 )
    LOBYTE(EntityList_39868780) = EntityList_39868780->max_length != 0;
  return (char)EntityList_39868780;
}


bool __fastcall EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


System_Int32_array *__fastcall EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v20; // w21
  int32_t v21; // w22
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10

  if ( (byte_4B161CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&EventEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    byte_4B161CA = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v20 = (int)list;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo )
        {
          if ( !v17 )
            break;
          items_low = LODWORD(list->fields.items);
          items = v17->fields._items;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v17,
              items_low,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = size + 1;
            items->m_Items[size + 1] = items_low;
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1BCAA3C(list, items_low);
  }
LABEL_16:
  if ( !v17 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMaster__getMyRoomBgImgId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w20
  int32_t myroomBgId; // w21
  int32_t v12; // w22
  EventEntity_o *Item; // x0
  const MethodInfo *v14; // x2
  EventEntity_o *v15; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4B161D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&EventEntity_TypeInfo, v6, v7);
    byte_4B161D1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    myroomBgId = 0;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v12,
                                (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo
          && Item->fields.myroomBgId >= 1
          && EventEntity__IsOpen(Item, 0, v14) )
        {
          myroomBgId = v15->fields.myroomBgId;
        }
      }
      if ( v10 == ++v12 )
        return myroomBgId;
    }
LABEL_17:
    sub_1BCAA3C(list, method);
  }
  return 0;
}


int32_t __fastcall EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  EventEntity_o *v24; // x0
  const MethodInfo *v25; // x2
  EventEntity_o *v26; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B161D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&EventEntity_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    byte_4B161D2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1BCAA3C(list, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v13);
  myroomBgmId = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_17;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_17:
      v23 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                             Enumerator,
                             *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( v24 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEntity_TypeInfo )
      {
        sub_1BCACFC(v24);
        goto LABEL_33;
      }
      if ( v24->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v24, 0, v25) )
        myroomBgmId = v26->fields.myroomBgmId;
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B161E4 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMaster___c_TypeInfo, v1, v2);
    byte_4B161E4 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventMaster___c___ctor(EventMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetOpenedEventEntityList_b__22_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t endedAt; // x8
  int64_t v5; // x9
  int32_t result; // w0

  if ( !a || !b )
    sub_1BCAA3C(this, a);
  endedAt = a->fields.endedAt;
  v5 = b->fields.endedAt;
  result = endedAt - v5;
  if ( endedAt == v5 )
    return a->fields.id - b->fields.id;
  return result;
}


int32_t __fastcall EventMaster___c___GetOpenedEventEntityList_b__22_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCAA3C(this, 0LL);
  return EventEntity__cmpShopClosedAt(a, b, (const MethodInfo *)b);
}


int32_t __fastcall EventMaster___c___GetOpenedEventEntityList_b__22_2(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t startedAt; // x8
  int64_t v5; // x9
  int32_t result; // w0

  if ( !a || !b )
    sub_1BCAA3C(this, a);
  startedAt = a->fields.startedAt;
  v5 = b->fields.startedAt;
  result = v5 - startedAt;
  if ( v5 == startedAt )
    return a->fields.id - b->fields.id;
  return result;
}


int32_t __fastcall EventMaster___c___GetSortedEntityList_b__12_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t v4; // x8

  if ( !b || !a )
    sub_1BCAA3C(this, a);
  v4 = b->fields.startedAt - a->fields.startedAt;
  if ( v4 < 0 )
    return -1;
  if ( v4 )
    return 1;
  if ( b->fields.endedAt - a->fields.endedAt < 0 )
    return -1;
  else
    return b->fields.endedAt != a->fields.endedAt;
}