void EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC73D4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
    byte_4CC73D4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42287300; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  unsigned int v9; // w22
  EventEntity_o *v10; // x8
  int32_t id; // w21

  if ( (byte_4CC73E0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73E0 = 1;
  }
  EntityList_42287300 = EventMaster__GetEntityList_42287300(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_42287300 )
    goto LABEL_15;
  max_length = EntityList_42287300->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C71610(Instance);
      v10 = EntityList_42287300->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v8 )
        break;
      id = v10->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v8,
                   id,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance[1].monitor) & 0x10) != 0 )
        return id;
      max_length = EntityList_42287300->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1C71608(Instance, v6);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x5
  int64_t EntityList_42287300; // x0
  __int64 v6; // x1
  int v7; // w8
  int64_t v8; // x20
  unsigned int v9; // w22
  Il2CppObject *v10; // x21
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

  if ( (byte_4CC73EB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC73EB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_42287300 = (int64_t)EventMaster__GetEntityList_42287300(this, 23, 0, 1, 0, v4);
  if ( !EntityList_42287300 )
    goto LABEL_18;
  v7 = *(_DWORD *)(EntityList_42287300 + 24);
  v8 = EntityList_42287300;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C71610(EntityList_42287300);
      v10 = *(Il2CppObject **)(v8 + 8LL * (int)v9 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityList_42287300 = NetworkManager__getTime(0);
      if ( !v10 )
        break;
      if ( EntityList_42287300 >= (__int64)v10[5].monitor )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        v18 = Method_System_Collections_Generic_List_EventEntity__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v10,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v10;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
        }
      }
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return (System_Collections_Generic_List_EventEntity__o *)v3;
    }
LABEL_18:
    sub_1C71608(EntityList_42287300, v6);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v3;
}


EventEntity_array *EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        bool isEventTutorialPeriodExtension,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  return EventMaster__GetEntityList_42287300(this, eventType, 1, isFinishedAt, isEventTutorialPeriodExtension, v5);
}


System_Collections_Generic_List_EventEntity____o *EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  EventEntity_array *EntityList_42287300; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x23
  bool v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  EventEntity_array *v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_4CC73D6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity____Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity_____ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventEntity____TypeInfo);
    byte_4CC73D6 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_14;
  max_length = eventTypes->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    v13 = isFinishedAt;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C71610(EntityList_42287300);
      EntityList_42287300 = EventMaster__GetEntityList_42287300(this, eventTypes->m_Items[v12], 1, v13, 0, v10);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v21 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v23 = EntityList_42287300;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          &EntityList_42287300->obj,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v23;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
      }
      LODWORD(max_length) = eventTypes->max_length;
      if ( (__int64)++v12 >= (int)max_length )
        return (System_Collections_Generic_List_EventEntity____o *)v7;
    }
LABEL_14:
    sub_1C71608(EntityList_42287300, v9);
  }
  return (System_Collections_Generic_List_EventEntity____o *)v7;
}


EventEntity_array *EventMaster__GetEnableExistEventRewardEntityList(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  EventRewardSceneMaster_o *v6; // x21
  int v7; // w22
  int32_t v8; // w23
  const MethodInfo *v9; // x2
  DataManager_o *v10; // x24
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

  if ( (byte_4CC73E9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73E9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v6 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v7 = (int)Instance;
    v8 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v8,
                                    (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance )
        break;
      v10 = Instance;
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, v9);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v6 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v6, v10->fields.m_CachedPtr, 0);
        if ( Instance )
        {
          if ( Instance->fields.m_CancellationTokenSource )
          {
            if ( !v3 )
              break;
            items = v3->fields._items;
            v18 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                (Il2CppObject *)v10,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v10;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
            }
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C71608(Instance, v5);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *EventMaster__GetEnableMyRoomMultipleViewEntityList(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return EventMaster__GetEntityList_42287300(this, 24, 1, 1, 0, v2);
}


EventEntity_array *EventMaster__GetEnabledEntityListFromIds(
        EventMaster_o *this,
        int32_t eventType,
        System_Collections_Generic_List_int__o *ids,
        int64_t checkTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  __int64 v10; // x1
  void *list; // x0
  int v12; // w24
  int32_t v13; // w25
  EventEntity_o *v14; // x26
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CC73D7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_4CC73D7 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        if ( !ids )
          goto LABEL_24;
        v14 = (EventEntity_o *)list;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         ids,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_37F4BF0 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v14->fields.type == eventType) )
        {
          if ( checkTime )
          {
            list = (void *)EventEntity__IsOpen_42255264(v14, checkTime, 1, v16);
            if ( ((unsigned __int8)list & 1) == 0 )
              continue;
          }
          else
          {
            list = (void *)EventEntity__IsOpen(v14, 1, v15);
            if ( ((unsigned __int8)list & 1) == 0 )
              continue;
          }
          if ( !v9 )
            goto LABEL_24;
          items = v9->fields._items;
          v24 = Method_System_Collections_Generic_List_EventEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v14,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v14;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v14, v17, v18, v19, v20, v21, v22);
          }
        }
      }
    }
    while ( v12 != ++v13 );
  }
  if ( !v9 )
LABEL_24:
    sub_1C71608(list, v10);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v9,
                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *EventMaster__GetEntityList(EventMaster_o *this, int32_t eventType, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return EventMaster__GetEntityList_42287300(this, eventType, 0, 1, 0, v3);
}


EventEntity_array *EventMaster__GetEntityList_42287300(
        EventMaster_o *this,
        int32_t eventType,
        bool isOpenGet,
        bool isFinishedAt,
        bool isEventTutorialPeriodExtension,
        const MethodInfo *method)
{
  _BOOL4 v7; // w21
  System_Collections_Generic_List_object__o *v10; // x24
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w25
  int32_t v14; // w26
  const MethodInfo *v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *v21; // x27
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  v7 = isOpenGet;
  if ( (byte_4CC73D8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_4CC73D8 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        v21 = (Il2CppObject *)list;
        if ( eventType < 1 || LODWORD(list[1].klass) == eventType )
        {
          if ( !v7
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsOpen(
                                                                           (EventEntity_o *)list,
                                                                           isFinishedAt,
                                                                           v15),
                (((unsigned int)list | !v7) & 1) != 0)
            || isEventTutorialPeriodExtension
            && (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsTutorialRelease(
                                                                           (EventEntity_o *)v21,
                                                                           isFinishedAt,
                                                                           v15),
                ((unsigned __int8)list & 1) != 0) )
          {
            if ( !v10 )
              break;
            items = v10->fields._items;
            v23 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v21,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v21;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v21, (int32_t)v15, v16, v17, v18, v19, v20);
            }
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C71608(list, v11);
  }
LABEL_20:
  if ( !v10 )
    goto LABEL_22;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v10,
                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int64_t EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC73EE & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4CC73EE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_1C71608(Master_object, v5);
  }
  return -1;
}


System_String_o *EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o **v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC73E5 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC73E5 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C71608(v5, v6);
    v7 = (System_String_o **)&entity[2];
  }
  else
  {
    v7 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v7;
}


System_String_o *EventMaster__GetEventShortName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC73E6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC73E6 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C71608(v5, v6);
    p_monitor = (System_String_o **)&entity[2].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_monitor;
}


int64_t EventMaster__GetEventStartedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4CC73ED & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4CC73ED = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0 )
  {
    return (int64_t)Entity[5].monitor;
  }
  else
  {
    return -1;
  }
}


System_Collections_Generic_HashSet_int__o *EventMaster__GetEventValUpEventIdHash(
        EventMaster_o *this,
        bool isFinish,
        int64_t nowTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  EventEntity_array *FilterEnableEntityList; // x19
  System_Collections_Generic_HashSet_int__o *v10; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  __int64 v13; // x22
  EventEntity_o *v14; // x26

  if ( (byte_4CC73E3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC73E3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[7].klass, v8);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1C71610(Instance);
        v14 = FilterEnableEntityList->m_Items[v13];
        if ( !v14 )
          break;
        if ( !v12 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     v14->fields.id,
                     (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( ((__int64)Instance[1].monitor & 0x10) != 0 )
        {
          if ( !v10 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v10,
                                       v14->fields.id,
                                       (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_1C71608(Instance, v7);
    }
LABEL_17:
    if ( !v10 )
      goto LABEL_19;
  }
  return v10;
}


EventEntity_array *EventMaster__GetFilterEnableEntityList(
        EventMaster_o *this,
        bool isFinishedAt,
        int64_t nowTime,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v10; // x19
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t Count; // w25
  int32_t v13; // w26
  EventEntity_o *Item; // x0
  const MethodInfo *v15; // x3
  int32_t type; // w8
  EventEntity_o *v17; // x27
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  EventFilterEntity_o *v26; // x28
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_object__o *v35; // x0
  System_Comparison_T__o *v36; // x21
  Il2CppObject *v37; // x22
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Comparison_T__o *v45; // x21
  Il2CppObject *v46; // x22
  struct EventMaster___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_Object_array *v54; // x21
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC73D9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C713B0(&System_Comparison_EventEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1C713B0(&EventEntity___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__CopyTo__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__);
    sub_1C713B0(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__);
    sub_1C713B0(&EventMaster___c_TypeInfo);
    byte_4CC73D9 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_54;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  if ( Count >= 1 )
  {
    v13 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_54;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                v13,
                                (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( Item )
      {
        type = Item->fields.type;
        v17 = Item;
        if ( type == 22 || type == 12 )
        {
          Instance = (void *)EventEntity__IsOpen_42255264(Item, nowTime, isFinishedAt, v15);
          if ( ((unsigned __int8)Instance & 1) != 0
            || (Instance = (void *)EventEntity__IsSkillRelease(v17, isFinishedAt, v18),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !MasterData_object )
              goto LABEL_54;
            Instance = (void *)EventFilterMaster__TryGetEntity_42272088(
                                 (EventFilterMaster_o *)MasterData_object,
                                 &entity,
                                 v17->fields.id,
                                 0,
                                 v19);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_57;
            Instance = entity;
            if ( !entity )
              goto LABEL_54;
            Instance = (void *)EventFilterEntity__IsOpen(entity, v8);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              continue;
            v26 = entity;
            if ( !entity )
              goto LABEL_54;
            Instance = (void *)System_String__IsNullOrEmpty(entity->fields.buttonText, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 || v26->fields.openQuestId < 1 || v26->fields.closeQuestId <= 0 )
            {
LABEL_57:
              if ( !v10 )
                goto LABEL_54;
              items = v10->fields._items;
              v32 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                goto LABEL_54;
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                v34 = v32[4];
                v35 = v10;
LABEL_35:
                System_Collections_Generic_List_object___AddWithResize(
                  v35,
                  (Il2CppObject *)v17,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v34 + 192) + 112LL));
                continue;
              }
              v30 = &items->obj.klass + size;
              v10->fields._size = size + 1;
            }
            else
            {
              if ( !v11 )
                goto LABEL_54;
              v27 = v11->fields._items;
              v28 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v11->fields._version;
              if ( !v27 )
                goto LABEL_54;
              v29 = v11->fields._size;
              if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
              {
                v34 = v28[4];
                v35 = v11;
                goto LABEL_35;
              }
              v30 = &v27->obj.klass + v29;
              v11->fields._size = v29 + 1;
            }
            v30[4] = (Il2CppClass *)v17;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v17, v20, v21, v22, v23, v24, v25);
          }
        }
      }
    }
    while ( Count != ++v13 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v36 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v36 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v36, v37, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventEntity__o *)v36;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)v36, v39, v40, v41, v42, v43, v44);
  }
  if ( !v10 )
    goto LABEL_54;
  System_Collections_Generic_List_object___Sort_58794460(
    v10,
    v36,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v45 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v45, v46, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0);
    v47 = EventMaster___c_TypeInfo->static_fields;
    v47->__9__7_1 = (struct System_Comparison_EventEntity__o *)v45;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v47->__9__7_1, (int32_t)v45, v48, v49, v50, v51, v52, v53);
  }
  if ( !v11 )
LABEL_54:
    sub_1C71608(Instance, v8);
  System_Collections_Generic_List_object___Sort_58794460(
    v11,
    v45,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v54 = (System_Object_array *)sub_1C71458(
                                 EventEntity___TypeInfo,
                                 (unsigned int)(v11->fields._size + v10->fields._size));
  System_Collections_Generic_List_object___CopyTo_58789064(
    v10,
    v54,
    0,
    (const MethodInfo_3810CC8 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_58789064(
    v11,
    v54,
    v10->fields._size,
    (const MethodInfo_3810CC8 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v54;
}


int64_t EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42287300; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11

  EntityList_42287300 = EventMaster__GetEntityList_42287300(this, 24, 1, 1, 0, v2);
  if ( !EntityList_42287300 )
    return -1;
  max_length = EntityList_42287300->max_length;
  if ( max_length < 1 )
    return -1;
  v6 = 0;
  m_Items = EntityList_42287300->m_Items;
  result = -1;
  do
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1C71610(result);
    v9 = m_Items[v6];
    if ( !v9 )
      sub_1C71608(result, v4);
    finishedAt = v9->fields.finishedAt;
    ++v6;
    if ( result < finishedAt )
      result = finishedAt;
  }
  while ( (int)v6 < max_length );
  return result;
}


System_String_o *EventMaster__GetFirstPlayableBannerEffectName(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42287300; // x0
  EventMaster___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__bool__o *_9__33_0; // x20
  Il2CppObject *v8; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  EventMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__object__o *_9__33_1; // x20
  Il2CppObject *v20; // x21
  struct EventMaster___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_TSource__o *v29; // x0
  EventMaster___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_object__bool__o *_9__33_2; // x20
  Il2CppObject *v33; // x21
  struct EventMaster___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_String_o *result; // x0

  if ( (byte_4CC73EF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_SelectMany_EventEntity__EventEntity_ScriptData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_EventEntity_ScriptData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_EventEntity___);
    sub_1C713B0(&System_Func_EventEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    sub_1C713B0(&System_Func_EventEntity__IEnumerable_EventEntity_ScriptData___TypeInfo);
    sub_1C713B0(&Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_0__);
    sub_1C713B0(&Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_1__);
    sub_1C713B0(&Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_2__);
    sub_1C713B0(&EventMaster___c_TypeInfo);
    byte_4CC73EF = 1;
  }
  EntityList_42287300 = EventMaster__GetEntityList_42287300(this, 0, 1, 1, 0, v2);
  v5 = EventMaster___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList_42287300;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v5 = EventMaster___c_TypeInfo;
  }
  _9__33_0 = (System_Func_object__bool__o *)v5->static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventMaster___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__33_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EventEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__33_0,
      v8,
      Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_0__,
      0);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_EventEntity__bool__o *)_9__33_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__33_0,
      (int32_t)_9__33_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_EventEntity___);
  v17 = EventMaster___c_TypeInfo;
  v18 = v16;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v17 = EventMaster___c_TypeInfo;
  }
  _9__33_1 = (System_Func_object__object__o *)v17->static_fields->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = EventMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__33_1 = (System_Func_object__object__o *)sub_1C715FC(System_Func_EventEntity__IEnumerable_EventEntity_ScriptData___TypeInfo);
    System_Func_object__object____ctor(
      _9__33_1,
      v20,
      Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_1__,
      0);
    v21 = EventMaster___c_TypeInfo->static_fields;
    v21->__9__33_1 = (struct System_Func_EventEntity__IEnumerable_EventEntity_ScriptData___o *)_9__33_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v21->__9__33_1, (int32_t)_9__33_1, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v18,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__33_1,
                                                               (const MethodInfo_31846A4 *)Method_System_Linq_Enumerable_SelectMany_EventEntity__EventEntity_ScriptData___);
  v29 = System_Linq_Enumerable__ToList_object_(
          v28,
          (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_EventEntity_ScriptData___);
  v30 = EventMaster___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v30 = EventMaster___c_TypeInfo;
  }
  _9__33_2 = (System_Func_object__bool__o *)v30->static_fields->__9__33_2;
  if ( !_9__33_2 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = EventMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__33_2 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EventEntity_ScriptData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__33_2,
      v33,
      Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_2__,
      0);
    v34 = EventMaster___c_TypeInfo->static_fields;
    v34->__9__33_2 = (struct System_Func_EventEntity_ScriptData__bool__o *)_9__33_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v34->__9__33_2, (int32_t)_9__33_2, v35, v36, v37, v38, v39, v40);
  }
  result = (System_String_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                v31,
                                (System_Func_TSource__bool__o *)_9__33_2,
                                (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
  if ( result )
    return (System_String_o *)result[5].klass;
  return result;
}


EventEntity_array *EventMaster__GetOpenedEventEntityList(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x21
  void *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x24
  ShopMaster_o *v9; // x25
  int32_t Count; // w0
  int32_t v11; // w26
  int32_t v12; // w27
  EventEntity_o *v13; // x28
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_object__o *v32; // x0
  System_Comparison_T__o *v33; // x22
  Il2CppObject *v34; // x23
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Comparison_T__o *v42; // x22
  Il2CppObject *v43; // x23
  struct EventMaster___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Comparison_T__o *v51; // x22
  Il2CppObject *v52; // x23
  struct EventMaster___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_Collections_Generic_List_object__o *v60; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC73E7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C713B0(&System_Comparison_EventEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__);
    sub_1C713B0(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__);
    sub_1C713B0(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__);
    sub_1C713B0(&EventMaster___c_TypeInfo);
    byte_4CC73E7 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  nowTime = NetworkManager__getTime(0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_61;
  v9 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_61;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v12,
                   (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance || !v9 )
        goto LABEL_61;
      v13 = (EventEntity_o *)Instance;
      Instance = (void *)ShopMaster__IsEnableEventShop(v9, *((_DWORD *)Instance + 4), 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_object )
          goto LABEL_61;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             &entity,
                             v13->fields.id,
                             (const MethodInfo_3408ECC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_18;
        if ( !entity )
          goto LABEL_61;
        if ( (BYTE4(entity[1].monitor) & 0x40) == 0 )
        {
LABEL_18:
          Instance = (void *)EventEntity__IsOpen(v13, 0, v14);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v3 )
              goto LABEL_61;
            items = v3->fields._items;
            v22 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v3->fields._version;
            if ( !items )
              goto LABEL_61;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v31 = v22[4];
              v32 = v3;
LABEL_36:
              System_Collections_Generic_List_object___AddWithResize(
                v32,
                (Il2CppObject *)v13,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v31 + 192) + 112LL));
              continue;
            }
            v24 = &items->obj.klass + size;
            v3->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v13, nowTime, v15);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v4 )
                goto LABEL_61;
              v25 = v4->fields._items;
              v26 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v4->fields._version;
              if ( !v25 )
                goto LABEL_61;
              v27 = v4->fields._size;
              if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
              {
                v31 = v26[4];
                v32 = v4;
                goto LABEL_36;
              }
              v24 = &v25->obj.klass + v27;
              v4->fields._size = v27 + 1;
            }
            else
            {
              if ( !v5 )
                goto LABEL_61;
              v28 = v5->fields._items;
              v29 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v5->fields._version;
              if ( !v28 )
                goto LABEL_61;
              v30 = v5->fields._size;
              if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
              {
                v31 = v29[4];
                v32 = v5;
                goto LABEL_36;
              }
              v24 = &v28->obj.klass + v30;
              v5->fields._size = v30 + 1;
            }
          }
          v24[4] = (Il2CppClass *)v13;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v13, (int32_t)v15, v16, v17, v18, v19, v20);
        }
      }
    }
    while ( v11 != ++v12 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v33 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v33, v34, Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, 0);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventEntity__o *)v33;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__22_0, (int32_t)v33, v36, v37, v38, v39, v40, v41);
  }
  if ( !v3 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_58794460(
    v3,
    v33,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v42 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v42 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v42 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v42, v43, Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, 0);
    v44 = EventMaster___c_TypeInfo->static_fields;
    v44->__9__22_1 = (struct System_Comparison_EventEntity__o *)v42;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v44->__9__22_1, (int32_t)v42, v45, v46, v47, v48, v49, v50);
  }
  if ( !v4 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_58794460(
    v4,
    v42,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v51, v52, Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, 0);
    v53 = EventMaster___c_TypeInfo->static_fields;
    v53->__9__22_2 = (struct System_Comparison_EventEntity__o *)v51;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v53->__9__22_2, (int32_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v5
    || (System_Collections_Generic_List_object___Sort_58794460(
          v5,
          v51,
          (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v60 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v60,
          (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v60) )
  {
LABEL_61:
    sub_1C71608(Instance, v7);
  }
  System_Collections_Generic_List_object___AddRange(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)v3,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)v4,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v60,
                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int32_t EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4CC73DA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_1C71608(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( ((__int64)Entity[1].monitor & 0xC001) != 0 )
      LODWORD(Entity) = HIDWORD(Entity[2].monitor);
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


int32_t EventMaster__GetRaidEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42287300; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  unsigned int v9; // w22
  EventEntity_o *v10; // x8
  int32_t id; // w21

  if ( (byte_4CC73DF & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73DF = 1;
  }
  EntityList_42287300 = EventMaster__GetEntityList_42287300(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_42287300 )
    goto LABEL_15;
  max_length = EntityList_42287300->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C71610(Instance);
      v10 = EntityList_42287300->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v8 )
        break;
      id = v10->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v8,
                   id,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( ((__int64)Instance[1].monitor & 0x40) != 0 )
        return id;
      max_length = EntityList_42287300->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1C71608(Instance, v6);
  }
  return 0;
}


int32_t EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4CC73DB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_1C71608(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( ((__int64)Entity[1].monitor & 0x40) != 0 )
      LODWORD(Entity) = HIDWORD(Entity[2].monitor);
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


System_Collections_Generic_List_EventEntity__o *EventMaster__GetSortedEntityList(
        EventMaster_o *this,
        GameEventType_TYPE_array *types,
        const MethodInfo *method)
{
  void *EntityList_42287300; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  const MethodInfo *v8; // x5
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  System_Comparison_T__o *v11; // x20
  Il2CppObject *v12; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CC73DE & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_EventEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C713B0(&GameEventType_TYPE___TypeInfo);
    sub_1C713B0(&Method_EventMaster___c__GetSortedEntityList_b__12_0__);
    sub_1C713B0(&EventMaster___c_TypeInfo);
    byte_4CC73DE = 1;
  }
  if ( !types )
  {
    EntityList_42287300 = (void *)sub_1C71458(GameEventType_TYPE___TypeInfo, 1);
    if ( !EntityList_42287300 )
      goto LABEL_20;
    types = (GameEventType_TYPE_array *)EntityList_42287300;
    if ( !*((_DWORD *)EntityList_42287300 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_42287300 + 8) = 12;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  max_length = types->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( v10 < (unsigned int)max_length )
    {
      EntityList_42287300 = EventMaster__GetEntityList_42287300(this, types->m_Items[v10], 0, 1, 0, v8);
      if ( !v7 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v7,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_42287300,
        (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(max_length) = types->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_12;
    }
LABEL_21:
    sub_1C71610(EntityList_42287300);
  }
LABEL_12:
  EntityList_42287300 = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_42287300 = EventMaster___c_TypeInfo;
  }
  v11 = *(System_Comparison_T__o **)(*((_QWORD *)EntityList_42287300 + 23) + 24LL);
  if ( !v11 )
  {
    if ( !*((_DWORD *)EntityList_42287300 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_42287300);
      EntityList_42287300 = EventMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)**((_QWORD **)EntityList_42287300 + 23);
    v11 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v11, v12, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventEntity__o *)v11;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0, (int32_t)v11, v14, v15, v16, v17, v18, v19);
  }
  if ( !v7 )
LABEL_20:
    sub_1C71608(EntityList_42287300, v6);
  System_Collections_Generic_List_object___Sort_58794460(
    v7,
    v11,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v7;
}


bool EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42287300; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v8; // x21
  int max_length; // w8
  bool v10; // w24
  QuestMaster_o *v11; // x22
  int v12; // w25
  EventEntity_o *v13; // x8
  int32_t id; // w23

  if ( (byte_4CC73E1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73E1 = 1;
  }
  EntityList_42287300 = EventMaster__GetEntityList_42287300(this, 12, 1, 0, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_42287300 )
    goto LABEL_19;
  max_length = EntityList_42287300->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (QuestMaster_o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C71610(Instance);
      v13 = EntityList_42287300->m_Items[v12];
      if ( !v13 )
        break;
      if ( !MasterData_object )
        break;
      id = v13->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance->fields.m_CancellationTokenSource) & 0x10) != 0 )
      {
        if ( !v8 )
          break;
        Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId((QuestGroupMaster_o *)v8, id, 1, 0);
        if ( !v11 )
          break;
        Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                      v11,
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v10;
      }
      max_length = EntityList_42287300->max_length;
      v10 = ++v12 < max_length;
      if ( v12 >= max_length )
        return v10;
    }
LABEL_19:
    sub_1C71608(Instance, v6);
  }
  return v10;
}


bool EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CC73E2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4CC73E2 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_1C71608(0, v7);
  return EventEntity__IsOpen_42255264((EventEntity_o *)Entity, checkTime, 0, v8);
}


bool EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventEntity_array *EntityList_42287300; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  bool v10; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  int v12; // w23
  EventEntity_o *v13; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC73E4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73E4 = 1;
  }
  entity = 0;
  EntityList_42287300 = EventMaster__GetEntityList_42287300(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_42287300 )
    goto LABEL_15;
  max_length = EntityList_42287300->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C71610(Instance);
      v13 = EntityList_42287300->m_Items[v12];
      if ( !v13 || !v11 )
        break;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v11,
                                   &entity,
                                   v13->fields.id,
                                   (const MethodInfo_3408ECC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_19;
      if ( !entity )
        break;
      if ( ((int64_t)entity[1].monitor & flag) == 0 )
      {
LABEL_19:
        max_length = EntityList_42287300->max_length;
        v10 = ++v12 < max_length;
        if ( v12 < max_length )
          continue;
      }
      return v10;
    }
LABEL_15:
    sub_1C71608(Instance, v8);
  }
  return v10;
}


bool EventMaster__IsEnableEvent(
        EventMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  EventEntity_o *Entity; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4CC73EC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4CC73EC = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  return Entity && (!eventType || Entity->fields.type == eventType) && EventEntity__IsEventPeriod(Entity, nowTime, v10);
}


bool EventMaster__IsEnableEventShop(EventMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  void *Instance; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x22
  int32_t Count; // w0
  int32_t v9; // w23
  int32_t v10; // w24
  bool v11; // w28
  EventEntity_o *v12; // x25
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC73E8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73E8 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v10,
                   (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance || !MasterData_object )
        break;
      v12 = (EventEntity_o *)Instance;
      Instance = (void *)ShopMaster__IsEnableEventShop((ShopMaster_o *)MasterData_object, *((_DWORD *)Instance + 4), 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      if ( !v7 )
        break;
      Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                           v7,
                           &entity,
                           v12->fields.id,
                           (const MethodInfo_3408ECC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( (BYTE4(entity[1].monitor) & 0x40) != 0 )
          goto LABEL_28;
      }
      if ( !EventEntity__IsOpen(v12, 0, v13) && !EventEntity__IsExchangePeriod(v12, Time, v14)
        || EventEntity__IsClosePurchaseShop(v12, v5) )
      {
LABEL_28:
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_25:
    sub_1C71608(Instance, v5);
  }
  return 0;
}


bool EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventEntity_array *EntityList_42287300; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  bool v10; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  int v12; // w24
  EventEntity_o *v13; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC73EA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC73EA = 1;
  }
  entity = 0;
  EntityList_42287300 = EventMaster__GetEntityList_42287300(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_42287300) )
  {
LABEL_17:
    sub_1C71608(Instance, v8);
  }
  max_length = EntityList_42287300->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C71610(Instance);
      v13 = EntityList_42287300->m_Items[v12];
      if ( !v13 || !v11 )
        goto LABEL_17;
      id = v13->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v11,
                                   &entity,
                                   id,
                                   (const MethodInfo_3408ECC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( (BYTE2(entity[1].monitor) & 0x10) != 0 )
          break;
      }
      max_length = EntityList_42287300->max_length;
      v10 = ++v12 < max_length;
      if ( v12 >= max_length )
        return v10;
    }
    *eventId = id;
  }
  return v10;
}


bool EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42287300; // x0

  EntityList_42287300 = EventMaster__GetEntityList_42287300(this, 24, 1, 1, 0, v2);
  if ( EntityList_42287300 )
    LOBYTE(EntityList_42287300) = LODWORD(EntityList_42287300->max_length) != 0;
  return (char)EntityList_42287300;
}


bool EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


bool EventMaster__TryGetEntityByBannerEffectName(
        EventMaster_o *this,
        EventEntity_o **entity,
        System_String_o *bannerEffectName,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_object__o *v17; // x21
  Il2CppObject *object; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4CC73F0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C713B0(&Method_ObservableCollectionExtensions_Find_EventEntity___);
    sub_1C713B0(&System_Predicate_EventEntity__TypeInfo);
    sub_1C713B0(&Method_EventMaster___c__DisplayClass34_0__TryGetEntityByBannerEffectName_b__0__);
    sub_1C713B0(&EventMaster___c__DisplayClass34_0_TypeInfo);
    byte_4CC73F0 = 1;
  }
  v7 = sub_1C715FC(EventMaster___c__DisplayClass34_0_TypeInfo);
  EventMaster___c__DisplayClass34_0___ctor((EventMaster___c__DisplayClass34_0_o *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_QWORD *)(v7 + 16) = bannerEffectName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)bannerEffectName, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v17 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_EventEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_EventMaster___c__DisplayClass34_0__TryGetEntityByBannerEffectName_b__0__,
    0);
  object = ObservableCollectionExtensions__Find_object_(
             list,
             (System_Predicate_T__o *)v17,
             (const MethodInfo_31D88EC *)Method_ObservableCollectionExtensions_Find_EventEntity___);
  *entity = (EventEntity_o *)object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)entity, (int32_t)object, v19, v20, v21, v22, v23, v24);
  return *entity != 0;
}


System_Int32_array *EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_4CC73D5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC73D5 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        if ( !v3 )
          break;
        items_low = LODWORD(list->fields.items);
        items = v3->fields._items;
        v9 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            items_low,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = items_low;
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_14;
    }
LABEL_16:
    sub_1C71608(list, items_low);
  }
LABEL_14:
  if ( !v3 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t EventMaster__getMyRoomBgImgId(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t myroomBgId; // w21
  int32_t v7; // w22
  EventEntity_o *Item; // x0
  const MethodInfo *v9; // x2
  EventEntity_o *v10; // x23

  if ( (byte_4CC73DC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    byte_4CC73DC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    myroomBgId = 0;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v7,
                                (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( Item )
      {
        v10 = Item;
        if ( Item->fields.myroomBgId >= 1 && EventEntity__IsOpen(Item, 0, v9) )
          myroomBgId = v10->fields.myroomBgId;
      }
      if ( v5 == ++v7 )
        return myroomBgId;
    }
LABEL_15:
    sub_1C71608(list, method);
  }
  return 0;
}


int32_t EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  EventEntity_o *v15; // x0
  const MethodInfo *v16; // x2
  EventEntity_o *v17; // x21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_4CC73DD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC73DD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v4);
  myroomBgmId = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_17:
      v14 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v15 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                             Enumerator,
                             *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( v15 && v15->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v15, 0, v16) )
      myroomBgmId = v17->fields.myroomBgmId;
  }
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_27;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_27:
    v21 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return myroomBgmId;
}


void EventMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC73F1 & 1) == 0 )
  {
    sub_1C713B0(&EventMaster___c_TypeInfo);
    byte_4CC73F1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMaster___c___ctor(EventMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMaster___c___GetFilterEnableEntityList_b__7_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.id - b->fields.id;
}


int32_t EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.id - b->fields.id;
}


bool EventMaster___c___GetFirstPlayableBannerEffectName_b__33_0(
        EventMaster___c_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.script, 0);
}


System_Collections_Generic_IEnumerable_EventEntity_ScriptData__o *EventMaster___c___GetFirstPlayableBannerEffectName_b__33_1(
        EventMaster___c_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return (System_Collections_Generic_IEnumerable_EventEntity_ScriptData__o *)entity->fields.script;
}


bool EventMaster___c___GetFirstPlayableBannerEffectName_b__33_2(
        EventMaster___c_o *this,
        EventEntity_ScriptData_o *scriptData,
        const MethodInfo *method)
{
  System_String_o *bannerEffectName; // x20
  int32_t bannerEffectCommonReleaseId; // w19

  if ( (byte_4CC73F2 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    this = (EventMaster___c_o *)sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC73F2 = 1;
  }
  if ( !scriptData )
    sub_1C71608(this, scriptData);
  bannerEffectName = scriptData->fields.bannerEffectName;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(bannerEffectName, 0) )
    return 0;
  bannerEffectCommonReleaseId = scriptData->fields.bannerEffectCommonReleaseId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommonRelease(bannerEffectCommonReleaseId, 0);
}


int32_t EventMaster___c___GetOpenedEventEntityList_b__22_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t endedAt; // x8
  int64_t v5; // x9
  int32_t result; // w0

  if ( !a || !b )
    sub_1C71608(this, a);
  endedAt = a->fields.endedAt;
  v5 = b->fields.endedAt;
  result = endedAt - v5;
  if ( endedAt == v5 )
    return a->fields.id - b->fields.id;
  return result;
}


int32_t EventMaster___c___GetOpenedEventEntityList_b__22_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C71608(this, 0);
  return EventEntity__cmpShopClosedAt(a, b, 0);
}


int32_t EventMaster___c___GetOpenedEventEntityList_b__22_2(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t startedAt; // x8
  int64_t v5; // x9
  int32_t result; // w0

  if ( !a || !b )
    sub_1C71608(this, a);
  startedAt = a->fields.startedAt;
  v5 = b->fields.startedAt;
  result = v5 - startedAt;
  if ( v5 == startedAt )
    return a->fields.id - b->fields.id;
  return result;
}


int32_t EventMaster___c___GetSortedEntityList_b__12_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t v4; // x8

  if ( !b || !a )
    sub_1C71608(this, a);
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


void EventMaster___c__DisplayClass34_0___ctor(EventMaster___c__DisplayClass34_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventMaster___c__DisplayClass34_0___TryGetEntityByBannerEffectName_b__0(
        EventMaster___c__DisplayClass34_0_o *this,
        EventEntity_o *n,
        const MethodInfo *method)
{
  EventEntity_ScriptData_o *scriptData; // [xsp+8h] [xbp-8h] BYREF

  scriptData = 0;
  if ( !n )
    sub_1C71608(this, 0);
  return EventEntity__TryGetScriptDataByBannerEffectName(n, &scriptData, this->fields.bannerEffectName, 0);
}