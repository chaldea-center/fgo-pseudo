void EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597084E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
    byte_597084E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_49016448; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x22
  EventEntity_o *v10; // x8
  int32_t id; // w21

  if ( (byte_597085A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597085A = 1;
  }
  EntityList_49016448 = EventMaster__GetEntityList_49016448(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_49016448 )
    goto LABEL_15;
  max_length = EntityList_49016448->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_2213CE4(Instance);
      v10 = EntityList_49016448->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v8 )
        break;
      id = v10->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v8,
                   id,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (Il2CppObject *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_49016448->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_15:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x5
  int64_t EntityList_49016448; // x0
  __int64 v6; // x1
  int v7; // w8
  int64_t v8; // x20
  unsigned int v9; // w24
  Il2CppObject *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5970863 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970863 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_49016448 = (int64_t)EventMaster__GetEntityList_49016448(this, 23, 0, 1, 0, v4);
  if ( !EntityList_49016448 )
    goto LABEL_18;
  v7 = *(_DWORD *)(EntityList_49016448 + 24);
  v8 = EntityList_49016448;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_2213CE4(EntityList_49016448);
      v10 = *(Il2CppObject **)(v8 + 8LL * (int)v9 + 32);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
      EntityList_49016448 = NetworkManager__getTime(0);
      if ( !v10 )
        break;
      if ( EntityList_49016448 >= (__int64)v10[5].monitor )
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v10;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
        }
      }
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return (System_Collections_Generic_List_EventEntity__o *)v3;
    }
LABEL_18:
    sub_2213CDC(EntityList_49016448, v6);
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

  return EventMaster__GetEntityList_49016448(this, eventType, 1, isFinishedAt, isEventTutorialPeriodExtension, v5);
}


System_Collections_Generic_List_EventEntity____o *EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  EventEntity_array *EntityList_49016448; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  EventEntity_array *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_5970850 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventEntity____TypeInfo);
    byte_5970850 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_14;
  max_length = eventTypes->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_2213CE4(EntityList_49016448);
      EntityList_49016448 = EventMaster__GetEntityList_49016448(this, eventTypes->m_Items[v12], 1, isFinishedAt, 0, v10);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v20 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v22 = EntityList_49016448;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          &EntityList_49016448->obj,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v22;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
      }
      LODWORD(max_length) = eventTypes->max_length;
      if ( (__int64)++v12 >= (int)max_length )
        return (System_Collections_Generic_List_EventEntity____o *)v7;
    }
LABEL_14:
    sub_2213CDC(EntityList_49016448, v9);
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
  DataManager_o *v9; // x24
  const MethodInfo *v10; // x2
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5970861 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970861 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__getTime(0);
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v6 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                    (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance )
        break;
      v9 = Instance;
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v6 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v6, v9->fields.m_CachedPtr, v10);
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
                (Il2CppObject *)v9,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v9;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v9, v11, v12, v13, v14, v15, v16);
            }
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_21;
    }
LABEL_23:
    sub_2213CDC(Instance, v5);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *EventMaster__GetEnableMyRoomMultipleViewEntityList(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return EventMaster__GetEntityList_49016448(this, 24, 1, 1, 0, v2);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_5970851 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_5970851 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        if ( !ids )
          goto LABEL_24;
        v14 = (EventEntity_o *)list;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         ids,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v14->fields.type == eventType) )
        {
          if ( checkTime )
          {
            list = (void *)EventEntity__IsOpen_48975960(v14, checkTime, 1, 0);
            if ( ((unsigned __int8)list & 1) == 0 )
              continue;
          }
          else
          {
            list = (void *)EventEntity__IsOpen(v14, 1, 0);
            if ( ((unsigned __int8)list & 1) == 0 )
              continue;
          }
          if ( !v9 )
            goto LABEL_24;
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_EventEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v14,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
          }
        }
      }
    }
    while ( v12 != ++v13 );
  }
  if ( !v9 )
LABEL_24:
    sub_2213CDC(list, v10);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v9,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *EventMaster__GetEntityList(EventMaster_o *this, int32_t eventType, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return EventMaster__GetEntityList_49016448(this, eventType, 0, 1, 0, v3);
}


EventEntity_array *EventMaster__GetEntityList_49016448(
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *v21; // x27
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  v7 = isOpenGet;
  if ( (byte_5970852 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_5970852 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        v21 = (Il2CppObject *)list;
        if ( eventType < 1 || LODWORD(list[1].klass) == eventType )
        {
          if ( !v7
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsOpen(
                                                                           (EventEntity_o *)list,
                                                                           isFinishedAt,
                                                                           0),
                (((unsigned int)list | !v7) & 1) != 0)
            || isEventTutorialPeriodExtension
            && (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsTutorialRelease(
                                                                           (EventEntity_o *)v21,
                                                                           isFinishedAt,
                                                                           0),
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v21;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v21, v15, v16, v17, v18, v19, v20);
            }
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_20;
    }
LABEL_22:
    sub_2213CDC(list, v11);
  }
LABEL_20:
  if ( !v10 )
    goto LABEL_22;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v10,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970866 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_5970866 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_2213CDC(Master_object, v6);
  }
  return -1;
}


System_String_o *EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o **v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597085E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597085E = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_2213CDC(v5, v6);
    v7 = (System_String_o **)&entity[2];
  }
  else
  {
    v7 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v7;
}


// local variable allocation has failed, the output may be wrong!
int64_t EventMaster__GetEventStartedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_5970865 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_5970865 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0 )
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

  if ( (byte_597085D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_597085D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[8].monitor, v8);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_2213CE4(Instance);
        v14 = FilterEnableEntityList->m_Items[v13];
        if ( !v14 )
          break;
        if ( !v12 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     v14->fields.id,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v10 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v10,
                                       v14->fields.id,
                                       (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_2213CDC(Instance, v7);
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
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v10; // x19
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t Count; // w25
  int32_t v13; // w26
  EventEntity_o *Item; // x0
  int32_t type; // w8
  EventEntity_o *v16; // x27
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_object__o *v31; // x0
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v34; // x22
  struct EventMaster___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct EventMaster___c_StaticFields *v42; // x8
  System_Comparison_T__o *_9__7_1; // x21
  Il2CppObject *v44; // x22
  struct EventMaster___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Object_array *v52; // x21
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5970853 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_2213A60(&EventEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__CopyTo__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__);
    sub_2213A60(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__);
    sub_2213A60(&EventMaster___c_TypeInfo);
    byte_5970853 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_52;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( nowTime <= 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
    nowTime = NetworkManager__getTime(0);
  }
  if ( Count >= 1 )
  {
    v13 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_52;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                v13,
                                (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( Item )
      {
        type = Item->fields.type;
        v16 = Item;
        if ( type == 22 || type == 12 )
        {
          Instance = (void *)EventEntity__IsOpen_48975960(Item, nowTime, isFinishedAt, 0);
          if ( ((unsigned __int8)Instance & 1) != 0
            || (Instance = (void *)EventEntity__IsSkillRelease(v16, isFinishedAt, 0),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !MasterData_object )
              goto LABEL_52;
            Instance = (void *)EventFilterMaster__TryGetEntity_48991628(
                                 (EventFilterMaster_o *)MasterData_object,
                                 &entity,
                                 v16->fields.id,
                                 0,
                                 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_55;
            Instance = entity;
            if ( !entity )
              goto LABEL_52;
            if ( !EventFilterEntity__IsOpen(entity, 0) )
              continue;
            Instance = entity;
            if ( !entity )
              goto LABEL_52;
            Instance = (void *)EventFilterEntity__IsQuestOpenEvent(entity, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_52;
              items = v11->fields._items;
              v24 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v11->fields._version;
              if ( !items )
                goto LABEL_52;
              size = v11->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                v30 = v24[4];
                v31 = v11;
                goto LABEL_33;
              }
              v26 = &items->obj.klass + size;
              v11->fields._size = size + 1;
            }
            else
            {
LABEL_55:
              if ( !v10 )
                goto LABEL_52;
              v27 = v10->fields._items;
              v28 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v10->fields._version;
              if ( !v27 )
                goto LABEL_52;
              v29 = v10->fields._size;
              if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
              {
                v30 = v28[4];
                v31 = v10;
LABEL_33:
                System_Collections_Generic_List_object___AddWithResize(
                  v31,
                  (Il2CppObject *)v16,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30 + 192) + 112LL));
                continue;
              }
              v26 = &v27->obj.klass + v29;
              v10->fields._size = v29 + 1;
            }
            v26[4] = (Il2CppClass *)v16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
          }
        }
      }
    }
    while ( Count != ++v13 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !*(&EventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v8);
    Instance = EventMaster___c_TypeInfo;
  }
  static_fields = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__7_0 = (System_Comparison_T__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v34, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0);
    v35 = EventMaster___c_TypeInfo->static_fields;
    v35->__9__7_0 = (struct System_Comparison_EventEntity__o *)_9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->__9__7_0, (int32_t)_9__7_0, v36, v37, v38, v39, v40, v41);
  }
  if ( !v10 )
    goto LABEL_52;
  System_Collections_Generic_List_object___Sort_71849708(
    v10,
    _9__7_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !*(&EventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v8);
    Instance = EventMaster___c_TypeInfo;
  }
  v42 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__7_1 = (System_Comparison_T__o *)v42->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      v42 = EventMaster___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)v42->__9;
    _9__7_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_1, v44, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0);
    v45 = EventMaster___c_TypeInfo->static_fields;
    v45->__9__7_1 = (struct System_Comparison_EventEntity__o *)_9__7_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v45->__9__7_1, (int32_t)_9__7_1, v46, v47, v48, v49, v50, v51);
  }
  if ( !v11 )
LABEL_52:
    sub_2213CDC(Instance, v8);
  System_Collections_Generic_List_object___Sort_71849708(
    v11,
    _9__7_1,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v52 = (System_Object_array *)sub_2213B20(
                                 EventEntity___TypeInfo,
                                 (unsigned int)(v11->fields._size + v10->fields._size));
  System_Collections_Generic_List_object___CopyTo_71844392(
    v10,
    v52,
    0,
    (const MethodInfo_4484228 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_71844392(
    v11,
    v52,
    v10->fields._size,
    (const MethodInfo_4484228 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v52;
}


int64_t EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_49016448; // x0
  __int64 v4; // x1
  int max_length; // w8
  EventEntity_o **m_Items; // x9
  int64_t result; // x0
  int64_t finishedAt; // x10

  EntityList_49016448 = EventMaster__GetEntityList_49016448(this, 24, 1, 1, 0, v2);
  if ( !EntityList_49016448 )
    return -1;
  max_length = EntityList_49016448->max_length;
  if ( max_length < 1 )
    return -1;
  m_Items = EntityList_49016448->m_Items;
  result = -1;
  do
  {
    if ( !*m_Items )
      sub_2213CDC(result, v4);
    finishedAt = (*m_Items++)->fields.finishedAt;
    if ( result <= finishedAt )
      result = finishedAt;
    --max_length;
  }
  while ( max_length );
  return result;
}


System_String_o *EventMaster__GetFirstPlayableBannerEffectName(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_49016448; // x0
  __int64 v5; // x1
  EventMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct EventMaster___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__30_0; // x20
  Il2CppObject *v10; // x21
  struct EventMaster___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  EventMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  struct EventMaster___c_StaticFields *v22; // x9
  System_Func_object__object__o *_9__30_1; // x20
  Il2CppObject *v24; // x21
  struct EventMaster___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_TSource__o *v33; // x0
  __int64 v34; // x1
  EventMaster___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  struct EventMaster___c_StaticFields *v37; // x9
  System_Func_object__bool__o *_9__30_2; // x20
  Il2CppObject *v39; // x21
  struct EventMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *result; // x0

  if ( (byte_5970867 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_EventEntity__EventEntity_ScriptData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventEntity_ScriptData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventEntity___);
    sub_2213A60(&System_Func_EventEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    sub_2213A60(&System_Func_EventEntity__IEnumerable_EventEntity_ScriptData___TypeInfo);
    sub_2213A60(&Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__30_0__);
    sub_2213A60(&Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__30_1__);
    sub_2213A60(&Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__30_2__);
    sub_2213A60(&EventMaster___c_TypeInfo);
    byte_5970867 = 1;
  }
  EntityList_49016448 = EventMaster__GetEntityList_49016448(this, 0, 1, 1, 0, v2);
  v6 = EventMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList_49016448;
  if ( !*(&EventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v5);
    v6 = EventMaster___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__30_0 = (System_Func_object__bool__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__30_0,
      v10,
      Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__30_0__,
      0);
    v11 = EventMaster___c_TypeInfo->static_fields;
    v11->__9__30_0 = (struct System_Func_EventEntity__bool__o *)_9__30_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__30_0, (int32_t)_9__30_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__30_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventEntity___);
  v20 = EventMaster___c_TypeInfo;
  v21 = v18;
  if ( !*(&EventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v19);
    v20 = EventMaster___c_TypeInfo;
  }
  v22 = v20->static_fields;
  _9__30_1 = (System_Func_object__object__o *)v22->__9__30_1;
  if ( !_9__30_1 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      v22 = EventMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__30_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventEntity__IEnumerable_EventEntity_ScriptData___TypeInfo);
    System_Func_object__object____ctor(
      _9__30_1,
      v24,
      Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__30_1__,
      0);
    v25 = EventMaster___c_TypeInfo->static_fields;
    v25->__9__30_1 = (struct System_Func_EventEntity__IEnumerable_EventEntity_ScriptData___o *)_9__30_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__30_1, (int32_t)_9__30_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v21,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__30_1,
                                                               (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_EventEntity__EventEntity_ScriptData___);
  v33 = System_Linq_Enumerable__ToList_object_(
          v32,
          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventEntity_ScriptData___);
  v35 = EventMaster___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
  if ( !*(&EventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v34);
    v35 = EventMaster___c_TypeInfo;
  }
  v37 = v35->static_fields;
  _9__30_2 = (System_Func_object__bool__o *)v37->__9__30_2;
  if ( !_9__30_2 )
  {
    if ( !*(&v35->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v35, v34);
      v37 = EventMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__30_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventEntity_ScriptData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__30_2,
      v39,
      Method_EventMaster___c__GetFirstPlayableBannerEffectName_b__30_2__,
      0);
    v40 = EventMaster___c_TypeInfo->static_fields;
    v40->__9__30_2 = (struct System_Func_EventEntity_ScriptData__bool__o *)_9__30_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->__9__30_2, (int32_t)_9__30_2, v41, v42, v43, v44, v45, v46);
  }
  result = (System_String_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                v36,
                                (System_Func_TSource__bool__o *)_9__30_2,
                                (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
  if ( result )
    return (System_String_o *)result[5].klass;
  return result;
}


EventEntity_array *EventMaster__GetOpenedEventEntityList(EventMaster_o *this, const MethodInfo *method)
{
  int v3; // w8
  System_Collections_Generic_List_object__o *v4; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x21
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x24
  ShopMaster_o *v10; // x25
  int32_t Count; // w0
  int32_t v12; // w26
  int32_t v13; // w27
  EventEntity_o *v14; // x28
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
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
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__19_0; // x22
  Il2CppObject *v35; // x23
  struct EventMaster___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct EventMaster___c_StaticFields *v43; // x8
  System_Comparison_T__o *_9__19_1; // x22
  Il2CppObject *v45; // x23
  struct EventMaster___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct EventMaster___c_StaticFields *v53; // x8
  System_Comparison_T__o *_9__19_2; // x22
  Il2CppObject *v55; // x23
  struct EventMaster___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_List_object__o *v63; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_597085F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventMaster___c__GetOpenedEventEntityList_b__19_0__);
    sub_2213A60(&Method_EventMaster___c__GetOpenedEventEntityList_b__19_1__);
    sub_2213A60(&Method_EventMaster___c__GetOpenedEventEntityList_b__19_2__);
    sub_2213A60(&EventMaster___c_TypeInfo);
    byte_597085F = 1;
  }
  v3 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  nowTime = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_61;
  v10 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_61;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v13,
                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance || !v10 )
        goto LABEL_61;
      v14 = (EventEntity_o *)Instance;
      Instance = (void *)ShopMaster__IsEnableEventShop(v10, *((_DWORD *)Instance + 4), 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_object )
          goto LABEL_61;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                v14->fields.id,
                (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          goto LABEL_18;
        Instance = entity;
        if ( !entity )
          goto LABEL_61;
        if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0) )
        {
LABEL_18:
          Instance = (void *)EventEntity__IsOpen(v14, 0, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v4 )
              goto LABEL_61;
            items = v4->fields._items;
            v22 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_61;
            size = v4->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v31 = v22[4];
              v32 = v4;
LABEL_36:
              System_Collections_Generic_List_object___AddWithResize(
                v32,
                (Il2CppObject *)v14,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31 + 192) + 112LL));
              continue;
            }
            v24 = &items->obj.klass + size;
            v4->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v14, nowTime, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v5 )
                goto LABEL_61;
              v25 = v5->fields._items;
              v26 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v5->fields._version;
              if ( !v25 )
                goto LABEL_61;
              v27 = v5->fields._size;
              if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
              {
                v31 = v26[4];
                v32 = v5;
                goto LABEL_36;
              }
              v24 = &v25->obj.klass + v27;
              v5->fields._size = v27 + 1;
            }
            else
            {
              if ( !v6 )
                goto LABEL_61;
              v28 = v6->fields._items;
              v29 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v6->fields._version;
              if ( !v28 )
                goto LABEL_61;
              v30 = v6->fields._size;
              if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
              {
                v31 = v29[4];
                v32 = v6;
                goto LABEL_36;
              }
              v24 = &v28->obj.klass + v30;
              v6->fields._size = v30 + 1;
            }
          }
          v24[4] = (Il2CppClass *)v14;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    while ( v12 != ++v13 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !*(&EventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v8);
    Instance = EventMaster___c_TypeInfo;
  }
  static_fields = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__19_0 = (System_Comparison_T__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(_9__19_0, v35, Method_EventMaster___c__GetOpenedEventEntityList_b__19_0__, 0);
    v36 = EventMaster___c_TypeInfo->static_fields;
    v36->__9__19_0 = (struct System_Comparison_EventEntity__o *)_9__19_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->__9__19_0, (int32_t)_9__19_0, v37, v38, v39, v40, v41, v42);
  }
  if ( !v4 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_71849708(
    v4,
    _9__19_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !*(&EventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v8);
    Instance = EventMaster___c_TypeInfo;
  }
  v43 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__19_1 = (System_Comparison_T__o *)v43->__9__19_1;
  if ( !_9__19_1 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      v43 = EventMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__19_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(_9__19_1, v45, Method_EventMaster___c__GetOpenedEventEntityList_b__19_1__, 0);
    v46 = EventMaster___c_TypeInfo->static_fields;
    v46->__9__19_1 = (struct System_Comparison_EventEntity__o *)_9__19_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v46->__9__19_1, (int32_t)_9__19_1, v47, v48, v49, v50, v51, v52);
  }
  if ( !v5 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__19_1,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !*(&EventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v8);
    Instance = EventMaster___c_TypeInfo;
  }
  v53 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__19_2 = (System_Comparison_T__o *)v53->__9__19_2;
  if ( !_9__19_2 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      v53 = EventMaster___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__19_2 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(_9__19_2, v55, Method_EventMaster___c__GetOpenedEventEntityList_b__19_2__, 0);
    v56 = EventMaster___c_TypeInfo->static_fields;
    v56->__9__19_2 = (struct System_Comparison_EventEntity__o *)_9__19_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v56->__9__19_2, (int32_t)_9__19_2, v57, v58, v59, v60, v61, v62);
  }
  if ( !v6
    || (System_Collections_Generic_List_object___Sort_71849708(
          v6,
          _9__19_2,
          (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v63 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v63,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v63) )
  {
LABEL_61:
    sub_2213CDC(Instance, v8);
  }
  System_Collections_Generic_List_object___AddRange(
    v63,
    (System_Collections_Generic_IEnumerable_T__o *)v4,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v63,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v63,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v63,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int32_t EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v7; // x19

  if ( (byte_5970854 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970854 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v7 = Entity;
    if ( EventDetailEntity__IsEventPoint((EventDetailEntity_o *)Entity, 0) )
      LODWORD(Entity) = HIDWORD(v7[2].monitor);
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


int32_t EventMaster__GetRaidEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_49016448; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x22
  EventEntity_o *v10; // x8
  int32_t id; // w21

  if ( (byte_5970859 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970859 = 1;
  }
  EntityList_49016448 = EventMaster__GetEntityList_49016448(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_49016448 )
    goto LABEL_15;
  max_length = EntityList_49016448->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_2213CE4(Instance);
      v10 = EntityList_49016448->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v8 )
        break;
      id = v10->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v8,
                   id,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (Il2CppObject *)EventDetailEntity__IsRaid((EventDetailEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_49016448->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_15:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


int32_t EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v7; // x19

  if ( (byte_5970855 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970855 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v7 = Entity;
    if ( EventDetailEntity__IsRaid((EventDetailEntity_o *)Entity, 0) )
      LODWORD(Entity) = HIDWORD(v7[2].monitor);
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
  void *EntityList_49016448; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  const MethodInfo *v8; // x5
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__12_0; // x20
  Il2CppObject *v13; // x21
  struct EventMaster___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5970858 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_2213A60(&GameEventType_TYPE___TypeInfo);
    sub_2213A60(&Method_EventMaster___c__GetSortedEntityList_b__12_0__);
    sub_2213A60(&EventMaster___c_TypeInfo);
    byte_5970858 = 1;
  }
  if ( !types )
  {
    EntityList_49016448 = (void *)sub_2213B20(GameEventType_TYPE___TypeInfo, 1);
    if ( !EntityList_49016448 )
      goto LABEL_20;
    types = (GameEventType_TYPE_array *)EntityList_49016448;
    if ( !*((_DWORD *)EntityList_49016448 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_49016448 + 8) = 12;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  max_length = types->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( v10 < (unsigned int)max_length )
    {
      EntityList_49016448 = EventMaster__GetEntityList_49016448(this, types->m_Items[v10], 0, 1, 0, v8);
      if ( !v7 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v7,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_49016448,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(max_length) = types->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_12;
    }
LABEL_21:
    sub_2213CE4(EntityList_49016448);
  }
LABEL_12:
  EntityList_49016448 = EventMaster___c_TypeInfo;
  if ( !*(&EventMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo, v6);
    EntityList_49016448 = EventMaster___c_TypeInfo;
  }
  static_fields = (struct EventMaster___c_StaticFields *)*((_QWORD *)EntityList_49016448 + 23);
  _9__12_0 = (System_Comparison_T__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*((_DWORD *)EntityList_49016448 + 57) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_49016448, v6);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v13, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0);
    v14 = EventMaster___c_TypeInfo->static_fields;
    v14->__9__12_0 = (struct System_Comparison_EventEntity__o *)_9__12_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__12_0, (int32_t)_9__12_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !v7 )
LABEL_20:
    sub_2213CDC(EntityList_49016448, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    v7,
    _9__12_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v7;
}


bool EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_49016448; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v8; // x21
  int max_length; // w8
  bool v10; // w24
  QuestMaster_o *v11; // x22
  int v12; // w26
  EventEntity_o *v13; // x8
  int32_t id; // w23

  if ( (byte_597085B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597085B = 1;
  }
  EntityList_49016448 = EventMaster__GetEntityList_49016448(this, 12, 1, 0, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_49016448 )
    goto LABEL_19;
  max_length = EntityList_49016448->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (QuestMaster_o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v13 = EntityList_49016448->m_Items[v12];
      if ( !v13 )
        break;
      if ( !MasterData_object )
        break;
      id = v13->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
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
      max_length = EntityList_49016448->max_length;
      v10 = ++v12 < max_length;
      if ( v12 >= max_length )
        return v10;
    }
LABEL_19:
    sub_2213CDC(Instance, v6);
  }
  return v10;
}


bool EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  __int64 v7; // x1

  if ( (byte_597085C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_597085C = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_2213CDC(0, v7);
  return EventEntity__IsOpen_48975960((EventEntity_o *)Entity, checkTime, 0, 0);
}


bool EventMaster__IsEnableEvent(
        EventMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  EventEntity_o *Entity; // x0

  if ( (byte_5970864 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_5970864 = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  return Entity && (!eventType || Entity->fields.type == eventType) && EventEntity__IsEventPeriod(Entity, nowTime, 0);
}


bool EventMaster__IsEnableEventShop(EventMaster_o *this, const MethodInfo *method)
{
  int v3; // w8
  int64_t Time; // x20
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  bool v12; // w28
  EventEntity_o *v13; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5970860 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970860 = 1;
  }
  v3 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v11,
                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance || !MasterData_object )
        break;
      v13 = (EventEntity_o *)Instance;
      Instance = (void *)ShopMaster__IsEnableEventShop((ShopMaster_o *)MasterData_object, *((_DWORD *)Instance + 4), 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      if ( !v8 )
        break;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v8,
             &entity,
             v13->fields.id,
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( !entity )
          break;
        if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0) )
          goto LABEL_28;
      }
      if ( !EventEntity__IsOpen(v13, 0, 0) && !EventEntity__IsExchangePeriod(v13, Time, 0)
        || EventEntity__IsClosePurchaseShop(v13, 0) )
      {
LABEL_28:
        v12 = ++v11 < v10;
        if ( v10 != v11 )
          continue;
      }
      return v12;
    }
LABEL_25:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


bool EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventEntity_array *EntityList_49016448; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  bool v10; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  int v12; // w25
  EventEntity_o *v13; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5970862 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970862 = 1;
  }
  entity = 0;
  EntityList_49016448 = EventMaster__GetEntityList_49016448(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_49016448) )
  {
LABEL_17:
    sub_2213CDC(Instance, v8);
  }
  max_length = EntityList_49016448->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v13 = EntityList_49016448->m_Items[v12];
      if ( !v13 || !v11 )
        goto LABEL_17;
      id = v13->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v11,
                                   &entity,
                                   id,
                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = entity;
        if ( !entity )
          goto LABEL_17;
        Instance = (Il2CppObject *)EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x100000, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EntityList_49016448->max_length;
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
  EventEntity_array *EntityList_49016448; // x0

  EntityList_49016448 = EventMaster__GetEntityList_49016448(this, 24, 1, 1, 0, v2);
  if ( EntityList_49016448 )
    LOBYTE(EntityList_49016448) = LODWORD(EntityList_49016448->max_length) != 0;
  return (char)EntityList_49016448;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_object__o *v17; // x21
  Il2CppObject *object; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5970868 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_2213A60(&Method_ObservableCollectionExtensions_Find_EventEntity___);
    sub_2213A60(&System_Predicate_EventEntity__TypeInfo);
    sub_2213A60(&Method_EventMaster___c__DisplayClass31_0__TryGetEntityByBannerEffectName_b__0__);
    sub_2213A60(&EventMaster___c__DisplayClass31_0_TypeInfo);
    byte_5970868 = 1;
  }
  v7 = sub_2213CCC(EventMaster___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = bannerEffectName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)bannerEffectName, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_EventMaster___c__DisplayClass31_0__TryGetEntityByBannerEffectName_b__0__,
    0);
  object = ObservableCollectionExtensions__Find_object_(
             list,
             (System_Predicate_T__o *)v17,
             (const MethodInfo_38F40E4 *)Method_ObservableCollectionExtensions_Find_EventEntity___);
  *entity = (EventEntity_o *)object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, (int32_t)object, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_597084F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597084F = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        items_low = LODWORD(list->fields.items);
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
    sub_2213CDC(list, items_low);
  }
LABEL_14:
  if ( !v3 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t EventMaster__getMyRoomBgImgId(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t myroomBgId; // w21
  int32_t v7; // w22
  EventEntity_o *Item; // x0
  EventEntity_o *v9; // x23

  if ( (byte_5970856 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
    byte_5970856 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( Item )
      {
        v9 = Item;
        if ( Item->fields.myroomBgId >= 1 && EventEntity__IsOpen(Item, 0, 0) )
          myroomBgId = v9->fields.myroomBgId;
      }
      if ( v5 == ++v7 )
        return myroomBgId;
    }
LABEL_15:
    sub_2213CDC(list, method);
  }
  return 0;
}


int32_t EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *v6; // x20
  int32_t myroomBgmId; // w19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  EventEntity_o *v18; // x0
  EventEntity_o *v19; // x21
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__o *v25; // [xsp+18h] [xbp-38h]

  if ( (byte_5970857 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970857 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  v25 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v5);
  v6 = Enumerator;
  myroomBgmId = 0;
  while ( 1 )
  {
    klass = v6->klass;
    v9 = *(unsigned __int16 *)&v6->klass->_2.rank;
    if ( *(_WORD *)&v6->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_224BC3C(v6, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            v6,
            *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    if ( !v25 )
      sub_2213CDC(v12, v13);
    v14 = v25->klass;
    v15 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_18:
      v17 = sub_224BC3C(v25, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v18 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                             v25,
                             *(_QWORD *)(v17 + 8));
    v19 = v18;
    if ( v18 && v18->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v18, 0, 0) )
    {
      v6 = v25;
      myroomBgmId = v19->fields.myroomBgmId;
    }
    else
    {
      v6 = v25;
    }
  }
  if ( v25 )
  {
    v20 = v25->klass;
    v21 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_33;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_33:
      v23 = sub_224BC3C(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(v25, *(_QWORD *)(v23 + 8));
  }
  return myroomBgmId;
}


void EventMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970869 & 1) == 0 )
  {
    sub_2213A60(&EventMaster___c_TypeInfo);
    byte_5970869 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}


int32_t EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}


bool EventMaster___c___GetFirstPlayableBannerEffectName_b__30_0(
        EventMaster___c_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.script, 0);
}


System_Collections_Generic_IEnumerable_EventEntity_ScriptData__o *EventMaster___c___GetFirstPlayableBannerEffectName_b__30_1(
        EventMaster___c_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return (System_Collections_Generic_IEnumerable_EventEntity_ScriptData__o *)entity->fields.script;
}


bool EventMaster___c___GetFirstPlayableBannerEffectName_b__30_2(
        EventMaster___c_o *this,
        EventEntity_ScriptData_o *scriptData,
        const MethodInfo *method)
{
  System_String_o *bannerEffectName; // x20
  __int64 v5; // x1
  int32_t bannerEffectCommonReleaseId; // w19

  if ( (byte_597086A & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    this = (EventMaster___c_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_597086A = 1;
  }
  if ( !scriptData )
    sub_2213CDC(this, scriptData);
  bannerEffectName = scriptData->fields.bannerEffectName;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, scriptData);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(bannerEffectName, 0) )
    return 0;
  bannerEffectCommonReleaseId = scriptData->fields.bannerEffectCommonReleaseId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v5);
  return CondType__IsCommonRelease(bannerEffectCommonReleaseId, 0, 0);
}


int32_t EventMaster___c___GetOpenedEventEntityList_b__19_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t endedAt; // x8
  int64_t v5; // x9

  if ( !a || !b )
    sub_2213CDC(this, a);
  endedAt = a->fields.endedAt;
  v5 = b->fields.endedAt;
  if ( endedAt == v5 )
    return a->fields.id - b->fields.id;
  else
    return endedAt - v5;
}


int32_t EventMaster___c___GetOpenedEventEntityList_b__19_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_2213CDC(this, 0);
  return EventEntity__cmpShopClosedAt(a, b, 0);
}


int32_t EventMaster___c___GetOpenedEventEntityList_b__19_2(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t startedAt; // x8
  int64_t v5; // x9

  if ( !a || !b )
    sub_2213CDC(this, a);
  startedAt = a->fields.startedAt;
  v5 = b->fields.startedAt;
  if ( v5 == startedAt )
    return a->fields.id - b->fields.id;
  else
    return v5 - startedAt;
}


int32_t EventMaster___c___GetSortedEntityList_b__12_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t startedAt; // x8
  int64_t v5; // x9
  int64_t endedAt; // x8
  int64_t v7; // x9

  if ( !b || !a )
    sub_2213CDC(this, a);
  startedAt = b->fields.startedAt;
  v5 = a->fields.startedAt;
  if ( startedAt - v5 < 0 )
    return -1;
  if ( startedAt == v5 )
  {
    endedAt = b->fields.endedAt;
    v7 = a->fields.endedAt;
    if ( endedAt - v7 >= 0 )
      return endedAt != v7;
    return -1;
  }
  return 1;
}


void EventMaster___c__DisplayClass31_0___ctor(EventMaster___c__DisplayClass31_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventMaster___c__DisplayClass31_0___TryGetEntityByBannerEffectName_b__0(
        EventMaster___c__DisplayClass31_0_o *this,
        EventEntity_o *n,
        const MethodInfo *method)
{
  EventEntity_ScriptData_o *scriptData; // [xsp+8h] [xbp-8h] BYREF

  if ( !n )
    sub_2213CDC(this, 0);
  return EventEntity__TryGetScriptDataByBannerEffectName(n, &scriptData, this->fields.bannerEffectName, 0);
}