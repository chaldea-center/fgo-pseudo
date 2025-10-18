void EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42F94 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
    byte_4C42F94 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42004420; // x19
  Il2CppObject *Instance; // x0
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  unsigned int v8; // w22
  EventEntity_o *v9; // x8
  int32_t id; // w21

  if ( (byte_4C42FA0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42FA0 = 1;
  }
  EntityList_42004420 = EventMaster__GetEntityList_42004420(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_42004420 )
    goto LABEL_15;
  max_length = EntityList_42004420->max_length;
  if ( max_length >= 1 )
  {
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(Instance);
      v9 = EntityList_42004420->m_Items[v8];
      if ( !v9 )
        break;
      if ( !v7 )
        break;
      id = v9->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v7,
                   id,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance[1].monitor) & 0x10) != 0 )
        return id;
      max_length = EntityList_42004420->max_length;
      if ( (int)++v8 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1C372B4(Instance);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x5
  int64_t EntityList_42004420; // x0
  int v6; // w8
  int64_t v7; // x20
  unsigned int v8; // w22
  Il2CppObject *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C42FAB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42FAB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_42004420 = (int64_t)EventMaster__GetEntityList_42004420(this, 23, 0, 1, 0, v4);
  if ( !EntityList_42004420 )
    goto LABEL_18;
  v6 = *(_DWORD *)(EntityList_42004420 + 24);
  v7 = EntityList_42004420;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1C372BC(EntityList_42004420);
      v9 = *(Il2CppObject **)(v7 + 8LL * (int)v8 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityList_42004420 = NetworkManager__getTime(0);
      if ( !v9 )
        break;
      if ( EntityList_42004420 >= (__int64)v9[5].monitor )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        v13 = Method_System_Collections_Generic_List_EventEntity__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v9;
          sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
        }
      }
      v6 = *(_DWORD *)(v7 + 24);
      if ( (int)++v8 >= v6 )
        return (System_Collections_Generic_List_EventEntity__o *)v3;
    }
LABEL_18:
    sub_1C372B4(EntityList_42004420);
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

  return EventMaster__GetEntityList_42004420(this, eventType, 1, isFinishedAt, isEventTutorialPeriodExtension, v5);
}


System_Collections_Generic_List_EventEntity____o *EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  EventEntity_array *EntityList_42004420; // x0
  const MethodInfo *v9; // x5
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x23
  bool v12; // w22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  EventEntity_array *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4C42F96 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity____Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity_____ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventEntity____TypeInfo);
    byte_4C42F96 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_14;
  max_length = eventTypes->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    v12 = isFinishedAt;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C372BC(EntityList_42004420);
      EntityList_42004420 = EventMaster__GetEntityList_42004420(this, eventTypes->m_Items[v11], 1, v12, 0, v9);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v16 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v18 = EntityList_42004420;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          &EntityList_42004420->obj,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v18;
        sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
      }
      LODWORD(max_length) = eventTypes->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        return (System_Collections_Generic_List_EventEntity____o *)v7;
    }
LABEL_14:
    sub_1C372B4(EntityList_42004420);
  }
  return (System_Collections_Generic_List_EventEntity____o *)v7;
}


EventEntity_array *EventMaster__GetEnableExistEventRewardEntityList(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  DataManager_o *Instance; // x0
  EventRewardSceneMaster_o *v5; // x21
  int v6; // w22
  int32_t v7; // w23
  const MethodInfo *v8; // x2
  DataManager_o *v9; // x24
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C42FA9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42FA9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v5 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v6 = (int)Instance;
    v7 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v7,
                                    (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance )
        break;
      v9 = Instance;
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, v8);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v5 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v5, v9->fields.m_CachedPtr, 0);
        if ( Instance )
        {
          if ( Instance->fields.m_CancellationTokenSource )
          {
            if ( !v3 )
              break;
            items = v3->fields._items;
            v13 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                (Il2CppObject *)v9,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v15 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v15[4] = (Il2CppClass *)v9;
              sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
            }
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C372B4(Instance);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *EventMaster__GetEnableMyRoomMultipleViewEntityList(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return EventMaster__GetEntityList_42004420(this, 24, 1, 1, 0, v2);
}


EventEntity_array *EventMaster__GetEnabledEntityListFromIds(
        EventMaster_o *this,
        int32_t eventType,
        System_Collections_Generic_List_int__o *ids,
        int64_t checkTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  void *list; // x0
  int v11; // w24
  int32_t v12; // w25
  EventEntity_o *v13; // x26
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C42F97 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_4C42F97 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = (int)list;
    v12 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        if ( !ids )
          goto LABEL_24;
        v13 = (EventEntity_o *)list;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         ids,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v13->fields.type == eventType) )
        {
          if ( checkTime )
          {
            list = (void *)EventEntity__IsOpen_41972384(v13, checkTime, 1, v15);
            if ( ((unsigned __int8)list & 1) == 0 )
              continue;
          }
          else
          {
            list = (void *)EventEntity__IsOpen(v13, 1, v14);
            if ( ((unsigned __int8)list & 1) == 0 )
              continue;
          }
          if ( !v9 )
            goto LABEL_24;
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_EventEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v13,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v13;
            sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
          }
        }
      }
    }
    while ( v11 != ++v12 );
  }
  if ( !v9 )
LABEL_24:
    sub_1C372B4(list);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v9,
                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *EventMaster__GetEntityList(EventMaster_o *this, int32_t eventType, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return EventMaster__GetEntityList_42004420(this, eventType, 0, 1, 0, v3);
}


EventEntity_array *EventMaster__GetEntityList_42004420(
        EventMaster_o *this,
        int32_t eventType,
        bool isOpenGet,
        bool isFinishedAt,
        bool isEventTutorialPeriodExtension,
        const MethodInfo *method)
{
  _BOOL4 v7; // w21
  System_Collections_Generic_List_object__o *v10; // x24
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v12; // w25
  int32_t v13; // w26
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x27
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v7 = isOpenGet;
  if ( (byte_4C42F98 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_4C42F98 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        v16 = (Il2CppObject *)list;
        if ( eventType < 1 || LODWORD(list[1].klass) == eventType )
        {
          if ( !v7
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsOpen(
                                                                           (EventEntity_o *)list,
                                                                           isFinishedAt,
                                                                           v14),
                (((unsigned int)list | !v7) & 1) != 0)
            || isEventTutorialPeriodExtension
            && (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsTutorialRelease(
                                                                           (EventEntity_o *)v16,
                                                                           isFinishedAt,
                                                                           v14),
                ((unsigned __int8)list & 1) != 0) )
          {
            if ( !v10 )
              break;
            items = v10->fields._items;
            v18 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v16,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v16;
              sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v16, (int32_t)v14, v15);
            }
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C372B4(list);
  }
LABEL_20:
  if ( !v10 )
    goto LABEL_22;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v10,
                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int64_t EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42FAE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4C42FAE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_1C372B4(Master_object);
  }
  return -1;
}


System_String_o *EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  System_String_o **v6; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42FA5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42FA5 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C372B4(v5);
    v6 = (System_String_o **)&entity[2];
  }
  else
  {
    v6 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v6;
}


System_String_o *EventMaster__GetEventShortName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42FA6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42FA6 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C372B4(v5);
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

  if ( (byte_4C42FAD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4C42FAD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0 )
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
  const MethodInfo *v7; // x3
  EventEntity_array *FilterEnableEntityList; // x19
  System_Collections_Generic_HashSet_int__o *v9; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  __int64 v12; // x22
  EventEntity_o *v13; // x26

  if ( (byte_4C42FA3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C42FA3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[7].klass, v7);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v12 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1C372BC(Instance);
        v13 = FilterEnableEntityList->m_Items[v12];
        if ( !v13 )
          break;
        if ( !v11 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     v13->fields.id,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( ((__int64)Instance[1].monitor & 0x10) != 0 )
        {
          if ( !v9 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v9,
                                       v13->fields.id,
                                       (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v12 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_1C372B4(Instance);
    }
LABEL_17:
    if ( !v9 )
      goto LABEL_19;
  }
  return v9;
}


EventEntity_array *EventMaster__GetFilterEnableEntityList(
        EventMaster_o *this,
        bool isFinishedAt,
        int64_t nowTime,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v9; // x19
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t Count; // w25
  int32_t v12; // w26
  EventEntity_o *Item; // x0
  const MethodInfo *v14; // x3
  int32_t type; // w8
  EventEntity_o *v16; // x27
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  EventFilterEntity_o *v22; // x28
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_object__o *v31; // x0
  System_Comparison_T__o *v32; // x21
  Il2CppObject *v33; // x22
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Comparison_T__o *v37; // x21
  Il2CppObject *v38; // x22
  struct EventMaster___c_StaticFields *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Object_array *v42; // x21
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C42F99 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1C37058(&EventEntity___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__CopyTo__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__);
    sub_1C37058(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__);
    sub_1C37058(&EventMaster___c_TypeInfo);
    byte_4C42F99 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_54;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  if ( Count >= 1 )
  {
    v12 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_54;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                v12,
                                (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( Item )
      {
        type = Item->fields.type;
        v16 = Item;
        if ( type == 22 || type == 12 )
        {
          Instance = (void *)EventEntity__IsOpen_41972384(Item, nowTime, isFinishedAt, v14);
          if ( ((unsigned __int8)Instance & 1) != 0
            || (Instance = (void *)EventEntity__IsSkillRelease(v16, isFinishedAt, v17),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !MasterData_object )
              goto LABEL_54;
            Instance = (void *)EventFilterMaster__TryGetEntity_41989208(
                                 (EventFilterMaster_o *)MasterData_object,
                                 &entity,
                                 v16->fields.id,
                                 0,
                                 v18);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_57;
            Instance = entity;
            if ( !entity )
              goto LABEL_54;
            Instance = (void *)EventFilterEntity__IsOpen(entity, v19);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              continue;
            v22 = entity;
            if ( !entity )
              goto LABEL_54;
            Instance = (void *)System_String__IsNullOrEmpty(entity->fields.buttonText, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 || v22->fields.openQuestId < 1 || v22->fields.closeQuestId <= 0 )
            {
LABEL_57:
              if ( !v9 )
                goto LABEL_54;
              items = v9->fields._items;
              v28 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v9->fields._version;
              if ( !items )
                goto LABEL_54;
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                v30 = v28[4];
                v31 = v9;
LABEL_35:
                System_Collections_Generic_List_object___AddWithResize(
                  v31,
                  (Il2CppObject *)v16,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30 + 192) + 112LL));
                continue;
              }
              v26 = &items->obj.klass + size;
              v9->fields._size = size + 1;
            }
            else
            {
              if ( !v10 )
                goto LABEL_54;
              v23 = v10->fields._items;
              v24 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v10->fields._version;
              if ( !v23 )
                goto LABEL_54;
              v25 = v10->fields._size;
              if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
              {
                v30 = v24[4];
                v31 = v10;
                goto LABEL_35;
              }
              v26 = &v23->obj.klass + v25;
              v10->fields._size = v25 + 1;
            }
            v26[4] = (Il2CppClass *)v16;
            sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v16, v20, v21);
          }
        }
      }
    }
    while ( Count != ++v12 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v32 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v32, v33, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventEntity__o *)v32;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)v32, v35, v36);
  }
  if ( !v9 )
    goto LABEL_54;
  System_Collections_Generic_List_object___Sort_58346216(
    v9,
    v32,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v37 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v37 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v37 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v37, v38, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0);
    v39 = EventMaster___c_TypeInfo->static_fields;
    v39->__9__7_1 = (struct System_Comparison_EventEntity__o *)v37;
    sub_1C36FFC((CGThumbnailListItem_o *)&v39->__9__7_1, (int32_t)v37, v40, v41);
  }
  if ( !v10 )
LABEL_54:
    sub_1C372B4(Instance);
  System_Collections_Generic_List_object___Sort_58346216(
    v10,
    v37,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v42 = (System_Object_array *)sub_1C37100(EventEntity___TypeInfo, (unsigned int)(v10->fields._size + v9->fields._size));
  System_Collections_Generic_List_object___CopyTo_58340820(
    v9,
    v42,
    0,
    (const MethodInfo_37A35D4 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_58340820(
    v10,
    v42,
    v9->fields._size,
    (const MethodInfo_37A35D4 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v42;
}


int64_t EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42004420; // x0
  int max_length; // w8
  __int64 v5; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v8; // x11
  int64_t finishedAt; // x11

  EntityList_42004420 = EventMaster__GetEntityList_42004420(this, 24, 1, 1, 0, v2);
  if ( !EntityList_42004420 )
    return -1;
  max_length = EntityList_42004420->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  m_Items = EntityList_42004420->m_Items;
  result = -1;
  do
  {
    if ( (unsigned int)v5 >= max_length )
      sub_1C372BC(result);
    v8 = m_Items[v5];
    if ( !v8 )
      sub_1C372B4(result);
    finishedAt = v8->fields.finishedAt;
    ++v5;
    if ( result < finishedAt )
      result = finishedAt;
  }
  while ( (int)v5 < max_length );
  return result;
}


System_String_o *EventMaster__GetFirstPlayableBannerEffectName(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42004420; // x0
  EventMaster___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__bool__o *_9__33_0; // x20
  Il2CppObject *v8; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  EventMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  System_Func_object__object__o *_9__33_1; // x20
  Il2CppObject *v16; // x21
  struct EventMaster___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_TSource__o *v21; // x0
  EventMaster___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__bool__o *_9__33_2; // x20
  Il2CppObject *v25; // x21
  struct EventMaster___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *result; // x0

  if ( (byte_4C42FAF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_EventEntity__EventEntity_ScriptData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_EventEntity_ScriptData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_EventEntity___);
    sub_1C37058(&System_Func_EventEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    sub_1C37058(&System_Func_EventEntity__IEnumerable_EventEntity_ScriptData___TypeInfo);
    sub_1C37058(&Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_0__);
    sub_1C37058(&Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_1__);
    sub_1C37058(&Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_2__);
    sub_1C37058(&EventMaster___c_TypeInfo);
    byte_4C42FAF = 1;
  }
  EntityList_42004420 = EventMaster__GetEntityList_42004420(this, 0, 1, 1, 0, v2);
  v5 = EventMaster___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList_42004420;
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
    _9__33_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__33_0,
      v8,
      Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_0__,
      0);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_EventEntity__bool__o *)_9__33_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_EventEntity___);
  v13 = EventMaster___c_TypeInfo;
  v14 = v12;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v13 = EventMaster___c_TypeInfo;
  }
  _9__33_1 = (System_Func_object__object__o *)v13->static_fields->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = EventMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__33_1 = (System_Func_object__object__o *)sub_1C372A4(System_Func_EventEntity__IEnumerable_EventEntity_ScriptData___TypeInfo);
    System_Func_object__object____ctor(
      _9__33_1,
      v16,
      Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_1__,
      0);
    v17 = EventMaster___c_TypeInfo->static_fields;
    v17->__9__33_1 = (struct System_Func_EventEntity__IEnumerable_EventEntity_ScriptData___o *)_9__33_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v17->__9__33_1, (int32_t)_9__33_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v14,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__33_1,
                                                               (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_EventEntity__EventEntity_ScriptData___);
  v21 = System_Linq_Enumerable__ToList_object_(
          v20,
          (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_EventEntity_ScriptData___);
  v22 = EventMaster___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v22 = EventMaster___c_TypeInfo;
  }
  _9__33_2 = (System_Func_object__bool__o *)v22->static_fields->__9__33_2;
  if ( !_9__33_2 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = EventMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__33_2 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventEntity_ScriptData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__33_2,
      v25,
      Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__33_2__,
      0);
    v26 = EventMaster___c_TypeInfo->static_fields;
    v26->__9__33_2 = (struct System_Func_EventEntity_ScriptData__bool__o *)_9__33_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v26->__9__33_2, (int32_t)_9__33_2, v27, v28);
  }
  result = (System_String_o *)System_Linq_Enumerable__FirstOrDefault_object__51451648(
                                v23,
                                (System_Func_TSource__bool__o *)_9__33_2,
                                (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
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
  Il2CppObject *MasterData_object; // x24
  ShopMaster_o *v8; // x25
  int32_t Count; // w0
  int32_t v10; // w26
  int32_t v11; // w27
  EventEntity_o *v12; // x28
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_object__o *v27; // x0
  System_Comparison_T__o *v28; // x22
  Il2CppObject *v29; // x23
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Comparison_T__o *v33; // x22
  Il2CppObject *v34; // x23
  struct EventMaster___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Comparison_T__o *v38; // x22
  Il2CppObject *v39; // x23
  struct EventMaster___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_List_object__o *v43; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C42FA7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__);
    sub_1C37058(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__);
    sub_1C37058(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__);
    sub_1C37058(&EventMaster___c_TypeInfo);
    byte_4C42FA7 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  nowTime = NetworkManager__getTime(0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_61;
  v8 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_61;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v11,
                   (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance || !v8 )
        goto LABEL_61;
      v12 = (EventEntity_o *)Instance;
      Instance = (void *)ShopMaster__IsEnableEventShop(v8, *((_DWORD *)Instance + 4), 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_object )
          goto LABEL_61;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             &entity,
                             v12->fields.id,
                             (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_18;
        if ( !entity )
          goto LABEL_61;
        if ( (BYTE4(entity[1].monitor) & 0x40) == 0 )
        {
LABEL_18:
          Instance = (void *)EventEntity__IsOpen(v12, 0, v13);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v3 )
              goto LABEL_61;
            items = v3->fields._items;
            v17 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v3->fields._version;
            if ( !items )
              goto LABEL_61;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v26 = v17[4];
              v27 = v3;
LABEL_36:
              System_Collections_Generic_List_object___AddWithResize(
                v27,
                (Il2CppObject *)v12,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v26 + 192) + 112LL));
              continue;
            }
            v19 = &items->obj.klass + size;
            v3->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v12, nowTime, v14);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v4 )
                goto LABEL_61;
              v20 = v4->fields._items;
              v21 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v4->fields._version;
              if ( !v20 )
                goto LABEL_61;
              v22 = v4->fields._size;
              if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
              {
                v26 = v21[4];
                v27 = v4;
                goto LABEL_36;
              }
              v19 = &v20->obj.klass + v22;
              v4->fields._size = v22 + 1;
            }
            else
            {
              if ( !v5 )
                goto LABEL_61;
              v23 = v5->fields._items;
              v24 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v5->fields._version;
              if ( !v23 )
                goto LABEL_61;
              v25 = v5->fields._size;
              if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
              {
                v26 = v24[4];
                v27 = v5;
                goto LABEL_36;
              }
              v19 = &v23->obj.klass + v25;
              v5->fields._size = v25 + 1;
            }
          }
          v19[4] = (Il2CppClass *)v12;
          sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v12, (int32_t)v14, v15);
        }
      }
    }
    while ( v10 != ++v11 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v28 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, 0);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventEntity__o *)v28;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)v28, v31, v32);
  }
  if ( !v3 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_58346216(
    v3,
    v28,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v33 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v33, v34, Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, 0);
    v35 = EventMaster___c_TypeInfo->static_fields;
    v35->__9__22_1 = (struct System_Comparison_EventEntity__o *)v33;
    sub_1C36FFC((CGThumbnailListItem_o *)&v35->__9__22_1, (int32_t)v33, v36, v37);
  }
  if ( !v4 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_58346216(
    v4,
    v33,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v38 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v38 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v38 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v38, v39, Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, 0);
    v40 = EventMaster___c_TypeInfo->static_fields;
    v40->__9__22_2 = (struct System_Comparison_EventEntity__o *)v38;
    sub_1C36FFC((CGThumbnailListItem_o *)&v40->__9__22_2, (int32_t)v38, v41, v42);
  }
  if ( !v5
    || (System_Collections_Generic_List_object___Sort_58346216(
          v5,
          v38,
          (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v43 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v43,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v43) )
  {
LABEL_61:
    sub_1C372B4(Instance);
  }
  System_Collections_Generic_List_object___AddRange(
    v43,
    (System_Collections_Generic_IEnumerable_T__o *)v3,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v43,
    (System_Collections_Generic_IEnumerable_T__o *)v4,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v43,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v43,
                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int32_t EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4C42F9A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42F9A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  EventEntity_array *EntityList_42004420; // x19
  Il2CppObject *Instance; // x0
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  unsigned int v8; // w22
  EventEntity_o *v9; // x8
  int32_t id; // w21

  if ( (byte_4C42F9F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42F9F = 1;
  }
  EntityList_42004420 = EventMaster__GetEntityList_42004420(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_42004420 )
    goto LABEL_15;
  max_length = EntityList_42004420->max_length;
  if ( max_length >= 1 )
  {
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(Instance);
      v9 = EntityList_42004420->m_Items[v8];
      if ( !v9 )
        break;
      if ( !v7 )
        break;
      id = v9->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v7,
                   id,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( ((__int64)Instance[1].monitor & 0x40) != 0 )
        return id;
      max_length = EntityList_42004420->max_length;
      if ( (int)++v8 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1C372B4(Instance);
  }
  return 0;
}


int32_t EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4C42F9B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42F9B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  void *EntityList_42004420; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  const MethodInfo *v7; // x5
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  System_Comparison_T__o *v10; // x20
  Il2CppObject *v11; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C42F9E & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C37058(&GameEventType_TYPE___TypeInfo);
    sub_1C37058(&Method_EventMaster___c__GetSortedEntityList_b__12_0__);
    sub_1C37058(&EventMaster___c_TypeInfo);
    byte_4C42F9E = 1;
  }
  if ( !types )
  {
    EntityList_42004420 = (void *)sub_1C37100(GameEventType_TYPE___TypeInfo, 1);
    if ( !EntityList_42004420 )
      goto LABEL_20;
    types = (GameEventType_TYPE_array *)EntityList_42004420;
    if ( !*((_DWORD *)EntityList_42004420 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_42004420 + 8) = 12;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  max_length = types->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < (unsigned int)max_length )
    {
      EntityList_42004420 = EventMaster__GetEntityList_42004420(this, types->m_Items[v9], 0, 1, 0, v7);
      if ( !v6 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v6,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_42004420,
        (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(max_length) = types->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_12;
    }
LABEL_21:
    sub_1C372BC(EntityList_42004420);
  }
LABEL_12:
  EntityList_42004420 = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_42004420 = EventMaster___c_TypeInfo;
  }
  v10 = *(System_Comparison_T__o **)(*((_QWORD *)EntityList_42004420 + 23) + 24LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)EntityList_42004420 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_42004420);
      EntityList_42004420 = EventMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)EntityList_42004420 + 23);
    v10 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v10, v11, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventEntity__o *)v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)v10, v13, v14);
  }
  if ( !v6 )
LABEL_20:
    sub_1C372B4(EntityList_42004420);
  System_Collections_Generic_List_object___Sort_58346216(
    v6,
    v10,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v6;
}


bool EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42004420; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v7; // x21
  int max_length; // w8
  bool v9; // w24
  QuestMaster_o *v10; // x22
  int v11; // w25
  EventEntity_o *v12; // x8
  int32_t id; // w23

  if ( (byte_4C42FA1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42FA1 = 1;
  }
  EntityList_42004420 = EventMaster__GetEntityList_42004420(this, 12, 1, 0, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_42004420 )
    goto LABEL_19;
  max_length = EntityList_42004420->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = (QuestMaster_o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C372BC(Instance);
      v12 = EntityList_42004420->m_Items[v11];
      if ( !v12 )
        break;
      if ( !MasterData_object )
        break;
      id = v12->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance->fields.m_CancellationTokenSource) & 0x10) != 0 )
      {
        if ( !v7 )
          break;
        Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId((QuestGroupMaster_o *)v7, id, 1, 0);
        if ( !v10 )
          break;
        Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                      v10,
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v9;
      }
      max_length = EntityList_42004420->max_length;
      v9 = ++v11 < max_length;
      if ( v11 >= max_length )
        return v9;
    }
LABEL_19:
    sub_1C372B4(Instance);
  }
  return v9;
}


bool EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4C42FA2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4C42FA2 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_1C372B4(0);
  return EventEntity__IsOpen_41972384((EventEntity_o *)Entity, checkTime, 0, v7);
}


bool EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventEntity_array *EntityList_42004420; // x20
  Il2CppObject *Instance; // x0
  int max_length; // w8
  bool v9; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  int v11; // w23
  EventEntity_o *v12; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C42FA4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42FA4 = 1;
  }
  entity = 0;
  EntityList_42004420 = EventMaster__GetEntityList_42004420(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_42004420 )
    goto LABEL_15;
  max_length = EntityList_42004420->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C372BC(Instance);
      v12 = EntityList_42004420->m_Items[v11];
      if ( !v12 || !v10 )
        break;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v10,
                                   &entity,
                                   v12->fields.id,
                                   (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_19;
      if ( !entity )
        break;
      if ( ((int64_t)entity[1].monitor & flag) == 0 )
      {
LABEL_19:
        max_length = EntityList_42004420->max_length;
        v9 = ++v11 < max_length;
        if ( v11 < max_length )
          continue;
      }
      return v9;
    }
LABEL_15:
    sub_1C372B4(Instance);
  }
  return v9;
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

  if ( (byte_4C42FAC & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4C42FAC = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  return Entity && (!eventType || Entity->fields.type == eventType) && EventEntity__IsEventPeriod(Entity, nowTime, v10);
}


bool EventMaster__IsEnableEventShop(EventMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x22
  int32_t Count; // w0
  int32_t v8; // w23
  int32_t v9; // w24
  bool v10; // w28
  EventEntity_o *v11; // x25
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C42FA8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42FA8 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v9,
                   (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance || !MasterData_object )
        break;
      v11 = (EventEntity_o *)Instance;
      Instance = (void *)ShopMaster__IsEnableEventShop((ShopMaster_o *)MasterData_object, *((_DWORD *)Instance + 4), 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      if ( !v6 )
        break;
      Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                           v6,
                           &entity,
                           v11->fields.id,
                           (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( (BYTE4(entity[1].monitor) & 0x40) != 0 )
          goto LABEL_28;
      }
      if ( !EventEntity__IsOpen(v11, 0, v12) && !EventEntity__IsExchangePeriod(v11, Time, v14)
        || EventEntity__IsClosePurchaseShop(v11, v13) )
      {
LABEL_28:
        v10 = ++v9 < v8;
        if ( v8 != v9 )
          continue;
      }
      return v10;
    }
LABEL_25:
    sub_1C372B4(Instance);
  }
  return 0;
}


bool EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventEntity_array *EntityList_42004420; // x20
  Il2CppObject *Instance; // x0
  int max_length; // w8
  bool v9; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  int v11; // w24
  EventEntity_o *v12; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C42FAA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42FAA = 1;
  }
  entity = 0;
  EntityList_42004420 = EventMaster__GetEntityList_42004420(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_42004420) )
  {
LABEL_17:
    sub_1C372B4(Instance);
  }
  max_length = EntityList_42004420->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C372BC(Instance);
      v12 = EntityList_42004420->m_Items[v11];
      if ( !v12 || !v10 )
        goto LABEL_17;
      id = v12->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v10,
                                   &entity,
                                   id,
                                   (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( (BYTE2(entity[1].monitor) & 0x10) != 0 )
          break;
      }
      max_length = EntityList_42004420->max_length;
      v9 = ++v11 < max_length;
      if ( v11 >= max_length )
        return v9;
    }
    *eventId = id;
  }
  return v9;
}


bool EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_42004420; // x0

  EntityList_42004420 = EventMaster__GetEntityList_42004420(this, 24, 1, 1, 0, v2);
  if ( EntityList_42004420 )
    LOBYTE(EntityList_42004420) = LODWORD(EntityList_42004420->max_length) != 0;
  return (char)EntityList_42004420;
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_object__o *v12; // x21
  Il2CppObject *object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C42FB0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C37058(&Method_ObservableCollectionExtensions_Find_EventEntity___);
    sub_1C37058(&System_Predicate_EventEntity__TypeInfo);
    sub_1C37058(&Method_EventMaster___c__DisplayClass34_0__TryGetEntityByBannerEffectName_b__0__);
    sub_1C37058(&EventMaster___c__DisplayClass34_0_TypeInfo);
    byte_4C42FB0 = 1;
  }
  v7 = sub_1C372A4(EventMaster___c__DisplayClass34_0_TypeInfo);
  EventMaster___c__DisplayClass34_0___ctor((EventMaster___c__DisplayClass34_0_o *)v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 16) = bannerEffectName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)bannerEffectName, v9, v10);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v12 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_EventMaster___c__DisplayClass34_0__TryGetEntityByBannerEffectName_b__0__,
    0);
  object = ObservableCollectionExtensions__Find_object_(
             list,
             (System_Predicate_T__o *)v12,
             (const MethodInfo_3174BF4 *)Method_ObservableCollectionExtensions_Find_EventEntity___);
  *entity = (EventEntity_o *)object;
  sub_1C36FFC((CGThumbnailListItem_o *)entity, (int32_t)object, v14, v15);
  return *entity != 0;
}


System_Int32_array *EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  void *list; // x0
  int v5; // w21
  int32_t v6; // w22
  int32_t v7; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_4C42F95 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C42F95 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v5 = (int)list;
    v6 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v6,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        if ( !v3 )
          break;
        v7 = *((_DWORD *)list + 4);
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
            v7,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
      }
      if ( v5 == ++v6 )
        goto LABEL_14;
    }
LABEL_16:
    sub_1C372B4(list);
  }
LABEL_14:
  if ( !v3 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C42F9C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    byte_4C42F9C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
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
    sub_1C372B4(list);
  }
  return 0;
}


int32_t EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  EventEntity_o *v14; // x0
  const MethodInfo *v15; // x2
  EventEntity_o *v16; // x21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0

  if ( (byte_4C42F9D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C42F9D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  myroomBgmId = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v14 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                             Enumerator,
                             *(_QWORD *)(v13 + 8));
    v16 = v14;
    if ( v14 && v14->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v14, 0, v15) )
      myroomBgmId = v16->fields.myroomBgmId;
  }
  v17 = Enumerator->klass;
  v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_27;
    }
    v20 = (__int64)&v17->vtable[*v19];
  }
  else
  {
LABEL_27:
    v20 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(Enumerator, *(_QWORD *)(v20 + 8));
  return myroomBgmId;
}


void EventMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42FB1 & 1) == 0 )
  {
    sub_1C37058(&EventMaster___c_TypeInfo);
    byte_4C42FB1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return a->fields.id - b->fields.id;
}


int32_t EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.id - b->fields.id;
}


bool EventMaster___c___GetFirstPlayableBannerEffectName_b__33_0(
        EventMaster___c_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.script, 0);
}


System_Collections_Generic_IEnumerable_EventEntity_ScriptData__o *EventMaster___c___GetFirstPlayableBannerEffectName_b__33_1(
        EventMaster___c_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return (System_Collections_Generic_IEnumerable_EventEntity_ScriptData__o *)entity->fields.script;
}


bool EventMaster___c___GetFirstPlayableBannerEffectName_b__33_2(
        EventMaster___c_o *this,
        EventEntity_ScriptData_o *scriptData,
        const MethodInfo *method)
{
  System_String_o *bannerEffectName; // x20
  int32_t bannerEffectCommonReleaseId; // w19

  if ( (byte_4C42FB2 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    this = (EventMaster___c_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C42FB2 = 1;
  }
  if ( !scriptData )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return EventEntity__TryGetScriptDataByBannerEffectName(n, &scriptData, this->fields.bannerEffectName, 0);
}