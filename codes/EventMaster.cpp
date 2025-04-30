void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E472 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, method);
    byte_4A4E472 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_40123944; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_4A4E47E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A4E47E = 1;
  }
  EntityList_40123944 = EventMaster__GetEntityList_40123944(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_40123944 )
    goto LABEL_15;
  max_length = EntityList_40123944->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B8661C(Instance, v8);
      v12 = EntityList_40123944->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance[1].monitor) & 0x10) != 0 )
        return id;
      max_length = EntityList_40123944->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1B86614(Instance, v8);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  const MethodInfo *v7; // x5
  int64_t EntityList_40123944; // x0
  __int64 v9; // x1
  int v10; // w8
  int64_t v11; // x20
  unsigned int v12; // w22
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A4E489 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__Add__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_EventEntity__TypeInfo, v4);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    byte_4A4E489 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_40123944 = (int64_t)EventMaster__GetEntityList_40123944(this, 23, 0, 1, 0, v7);
  if ( !EntityList_40123944 )
    goto LABEL_18;
  v10 = *(_DWORD *)(EntityList_40123944 + 24);
  v11 = EntityList_40123944;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1B8661C(EntityList_40123944, v9);
      v13 = *(Il2CppObject **)(v11 + 8LL * (int)v12 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityList_40123944 = NetworkManager__getTime(0LL);
      if ( !v13 )
        break;
      if ( EntityList_40123944 >= (__int64)v13[5].monitor )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v17 = Method_System_Collections_Generic_List_EventEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v13,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v13;
          sub_1B8635C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
        }
      }
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_EventEntity__o *)v6;
    }
LABEL_18:
    sub_1B86614(EntityList_40123944, v9);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v6;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        bool isEventTutorialPeriodExtension,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  return EventMaster__GetEntityList_40123944(this, eventType, 1, isFinishedAt, isEventTutorialPeriodExtension, v5);
}


System_Collections_Generic_List_EventEntity____o *__fastcall EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  EventEntity_array *EntityList_40123944; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  bool v15; // w22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  EventEntity_array *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4A4E474 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity____Add__, eventTypes);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_EventEntity____TypeInfo, v8);
    byte_4A4E474 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_14;
  v13 = *(_QWORD *)&eventTypes->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    v15 = isFinishedAt;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B8661C(EntityList_40123944, v11);
      EntityList_40123944 = EventMaster__GetEntityList_40123944(this, eventTypes->m_Items[v14 + 1], 1, v15, 0, v12);
      if ( !v9 )
        break;
      items = v9->fields._items;
      v19 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      v21 = EntityList_40123944;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          &EntityList_40123944->obj,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v21;
        sub_1B8635C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
      }
      LODWORD(v13) = eventTypes->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        return (System_Collections_Generic_List_EventEntity____o *)v9;
    }
LABEL_14:
    sub_1B86614(EntityList_40123944, v11);
  }
  return (System_Collections_Generic_List_EventEntity____o *)v9;
}


EventEntity_array *__fastcall EventMaster__GetEnableExistEventRewardEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  EventRewardSceneMaster_o *v14; // x21
  int v15; // w22
  int32_t v16; // w23
  const MethodInfo *v17; // x2
  DataManager_o *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A4E487 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_EventEntity__TypeInfo, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A4E487 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v14 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v15 = (int)Instance;
    v16 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v16,
                                    (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance )
        break;
      v18 = Instance;
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, v17);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v14, v18->fields.m_CachedPtr, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.m_CancellationTokenSource )
          {
            if ( !v11 )
              break;
            items = v11->fields._items;
            v22 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)v18,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v18;
              sub_1B8635C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v18, v19, v20);
            }
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B86614(Instance, v13);
  }
LABEL_21:
  if ( !v11 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return EventMaster__GetEntityList_40123944(this, 24, 1, 1, 0, v2);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x23
  __int64 v16; // x1
  void *list; // x0
  int v18; // w24
  int32_t v19; // w25
  EventEntity_o *v20; // x26
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4A4E475 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, *(_QWORD *)&eventType);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_1B863B8(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_4A4E475 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    v19 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        if ( !ids )
          goto LABEL_24;
        v20 = (EventEntity_o *)list;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         ids,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_35E0E30 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v20->fields.type == eventType) )
        {
          if ( checkTime )
          {
            list = (void *)EventEntity__IsOpen_40097264(v20, checkTime, 1, v22);
            if ( ((unsigned __int8)list & 1) == 0 )
              continue;
          }
          else
          {
            list = (void *)EventEntity__IsOpen(v20, 1, v21);
            if ( ((unsigned __int8)list & 1) == 0 )
              continue;
          }
          if ( !v15 )
            goto LABEL_24;
          items = v15->fields._items;
          v26 = Method_System_Collections_Generic_List_EventEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)v20,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v20;
            sub_1B8635C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v20, v23, v24);
          }
        }
      }
    }
    while ( v18 != ++v19 );
  }
  if ( !v15 )
LABEL_24:
    sub_1B86614(list, v16);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v15,
                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return EventMaster__GetEntityList_40123944(this, eventType, 0, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_40123944(
        EventMaster_o *this,
        int32_t eventType,
        bool isOpenGet,
        bool isFinishedAt,
        bool isEventTutorialPeriodExtension,
        const MethodInfo *method)
{
  _BOOL4 v7; // w21
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x24
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v18; // w25
  int32_t v19; // w26
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x27
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  v7 = isOpenGet;
  if ( (byte_4A4E476 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, *(_QWORD *)&eventType);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_1B863B8(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_4A4E476 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v19,
                                                                 (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        v22 = (Il2CppObject *)list;
        if ( eventType < 1 || LODWORD(list[1].klass) == eventType )
        {
          if ( !v7
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsOpen(
                                                                           (EventEntity_o *)list,
                                                                           isFinishedAt,
                                                                           v20),
                (((unsigned int)list | !v7) & 1) != 0)
            || isEventTutorialPeriodExtension
            && (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsTutorialRelease(
                                                                           (EventEntity_o *)v22,
                                                                           isFinishedAt,
                                                                           v20),
                ((unsigned __int8)list & 1) != 0) )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v24 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v22,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v22;
              sub_1B8635C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v22, (int32_t)v20, v21);
            }
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B86614(list, v16);
  }
LABEL_20:
  if ( !v15 )
    goto LABEL_22;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v15,
                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4E48C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    byte_4A4E48C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_32142CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_1B86614(Master_object, v7);
  }
  return -1LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4E483 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4E483 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_32142CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1B86614(v6, v7);
    v8 = entity + 2;
  }
  else
  {
    v8 = (Il2CppObject *)&StringLiteral_1/*""*/;
  }
  return (System_String_o *)v8->klass;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventShortName(
        EventMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4E484 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4E484 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_32142CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1B86614(v6, v7);
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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4A4E48B & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    byte_4A4E48B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  EventEntity_array *FilterEnableEntityList; // x19
  System_Collections_Generic_HashSet_int__o *v17; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x22
  EventEntity_o *v21; // x26

  if ( (byte_4A4E481 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int___ctor__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1B863B8(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4A4E481 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[6].monitor, v15);
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B86604(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_34B7810 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
          sub_1B8661C(Instance, v14);
        v21 = FilterEnableEntityList->m_Items[v20];
        if ( !v21 )
          break;
        if ( !v19 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v19,
                     v21->fields.id,
                     (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( ((__int64)Instance[1].monitor & 0x10) != 0 )
        {
          if ( !v17 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v17,
                                       v21->fields.id,
                                       (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_1B86614(Instance, v14);
    }
LABEL_17:
    if ( !v17 )
      goto LABEL_19;
  }
  return v17;
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetFilterEnableEntityList(
        EventMaster_o *this,
        bool isFinishedAt,
        int64_t nowTime,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  void *Instance; // x0
  const MethodInfo *v23; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v25; // x19
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t Count; // w25
  int32_t v28; // w26
  EventEntity_o *Item; // x0
  const MethodInfo *v30; // x3
  int32_t type; // w8
  EventEntity_o *v32; // x27
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x4
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  EventFilterEntity_o *v37; // x28
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  __int64 v45; // x8
  System_Collections_Generic_List_object__o *v46; // x0
  System_Comparison_T__o *v47; // x21
  Il2CppObject *v48; // x22
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Comparison_T__o *v52; // x21
  Il2CppObject *v53; // x22
  struct EventMaster___c_StaticFields *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Object_array *v57; // x21
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A4E477 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, isFinishedAt);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v7);
    sub_1B863B8(&System_Comparison_EventEntity__TypeInfo, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventFilterMaster___, v9);
    sub_1B863B8(&EventEntity___TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__Sort__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v15);
    sub_1B863B8(&System_Collections_Generic_List_EventEntity__TypeInfo, v16);
    sub_1B863B8(&NetworkManager_TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B863B8(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v19);
    sub_1B863B8(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v20);
    sub_1B863B8(&EventMaster___c_TypeInfo, v21);
    byte_4A4E477 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_54;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  if ( Count >= 1 )
  {
    v28 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_54;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                v28,
                                (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( Item )
      {
        type = Item->fields.type;
        v32 = Item;
        if ( type == 22 || type == 12 )
        {
          Instance = (void *)EventEntity__IsOpen_40097264(Item, nowTime, isFinishedAt, v30);
          if ( ((unsigned __int8)Instance & 1) != 0
            || (Instance = (void *)EventEntity__IsSkillRelease(v32, isFinishedAt, v33),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !MasterData_object )
              goto LABEL_54;
            Instance = (void *)EventFilterMaster__TryGetEntity_40108716(
                                 (EventFilterMaster_o *)MasterData_object,
                                 &entity,
                                 v32->fields.id,
                                 0,
                                 v34);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_57;
            Instance = entity;
            if ( !entity )
              goto LABEL_54;
            Instance = (void *)EventFilterEntity__IsOpen(entity, v23);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              continue;
            v37 = entity;
            if ( !entity )
              goto LABEL_54;
            Instance = (void *)System_String__IsNullOrEmpty(entity->fields.buttonText, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 || v37->fields.openQuestId < 1 || v37->fields.closeQuestId <= 0 )
            {
LABEL_57:
              if ( !v25 )
                goto LABEL_54;
              items = v25->fields._items;
              v43 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v25->fields._version;
              if ( !items )
                goto LABEL_54;
              size = v25->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v45 = v43[4];
                v46 = v25;
LABEL_35:
                System_Collections_Generic_List_object___AddWithResize(
                  v46,
                  (Il2CppObject *)v32,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v45 + 192) + 112LL));
                continue;
              }
              v41 = &items->obj.klass + size;
              v25->fields._size = size + 1;
            }
            else
            {
              if ( !v26 )
                goto LABEL_54;
              v38 = v26->fields._items;
              v39 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v26->fields._version;
              if ( !v38 )
                goto LABEL_54;
              v40 = v26->fields._size;
              if ( (unsigned int)v40 >= v38->max_length )
              {
                v45 = v39[4];
                v46 = v26;
                goto LABEL_35;
              }
              v41 = &v38->obj.klass + v40;
              v26->fields._size = v40 + 1;
            }
            v41[4] = (Il2CppClass *)v32;
            sub_1B8635C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v32, v35, v36);
          }
        }
      }
    }
    while ( Count != ++v28 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v47 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v47 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v48 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v47 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v47, v48, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventEntity__o *)v47;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)v47, v50, v51);
  }
  if ( !v25 )
    goto LABEL_54;
  System_Collections_Generic_List_object___Sort_56615964(
    v25,
    v47,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v52 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v52 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v52 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v52, v53, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0LL);
    v54 = EventMaster___c_TypeInfo->static_fields;
    v54->__9__7_1 = (struct System_Comparison_EventEntity__o *)v52;
    sub_1B8635C((CGThumbnailListItem_o *)&v54->__9__7_1, (int32_t)v52, v55, v56);
  }
  if ( !v26 )
LABEL_54:
    sub_1B86614(Instance, v23);
  System_Collections_Generic_List_object___Sort_56615964(
    v26,
    v52,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v57 = (System_Object_array *)sub_1B86460(
                                 EventEntity___TypeInfo,
                                 (unsigned int)(v26->fields._size + v25->fields._size));
  System_Collections_Generic_List_object___CopyTo_56610568(
    v25,
    v57,
    0,
    (const MethodInfo_35FCF08 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_56610568(
    v26,
    v57,
    v25->fields._size,
    (const MethodInfo_35FCF08 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v57;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_40123944; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11

  EntityList_40123944 = EventMaster__GetEntityList_40123944(this, 24, 1, 1, 0, v2);
  if ( !EntityList_40123944 )
    return -1LL;
  max_length = EntityList_40123944->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_40123944->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B8661C(result, v4);
    v9 = m_Items[v6];
    if ( !v9 )
      sub_1B86614(result, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x19
  System_Collections_Generic_List_object__o *v21; // x20
  System_Collections_Generic_List_object__o *v22; // x21
  void *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x24
  ShopMaster_o *v26; // x25
  int32_t Count; // w0
  int32_t v28; // w26
  int32_t v29; // w27
  EventEntity_o *v30; // x28
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  System_Collections_Generic_List_object__o *v45; // x0
  System_Comparison_T__o *v46; // x22
  Il2CppObject *v47; // x23
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Comparison_T__o *v51; // x22
  Il2CppObject *v52; // x23
  struct EventMaster___c_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Comparison_T__o *v56; // x22
  Il2CppObject *v57; // x23
  struct EventMaster___c_StaticFields *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_List_object__o *v61; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A4E485 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    sub_1B863B8(&System_Comparison_EventEntity__TypeInfo, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__Sort__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v12);
    sub_1B863B8(&System_Collections_Generic_List_EventEntity__TypeInfo, v13);
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v16);
    sub_1B863B8(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v17);
    sub_1B863B8(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v18);
    sub_1B863B8(&EventMaster___c_TypeInfo, v19);
    byte_4A4E485 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  nowTime = NetworkManager__getTime(0LL);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_61;
  v26 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v28 = Count;
    v29 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_61;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v29,
                   (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance || !v26 )
        goto LABEL_61;
      v30 = (EventEntity_o *)Instance;
      Instance = (void *)ShopMaster__IsEnableEventShop(v26, *((_DWORD *)Instance + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_object )
          goto LABEL_61;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             &entity,
                             v30->fields.id,
                             (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_18;
        if ( !entity )
          goto LABEL_61;
        if ( (BYTE4(entity[1].monitor) & 0x40) == 0 )
        {
LABEL_18:
          Instance = (void *)EventEntity__IsOpen(v30, 0, v31);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_61;
            items = v20->fields._items;
            v35 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              goto LABEL_61;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v44 = v35[4];
              v45 = v20;
LABEL_36:
              System_Collections_Generic_List_object___AddWithResize(
                v45,
                (Il2CppObject *)v30,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v44 + 192) + 112LL));
              continue;
            }
            v37 = &items->obj.klass + size;
            v20->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v30, nowTime, v32);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v21 )
                goto LABEL_61;
              v38 = v21->fields._items;
              v39 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v21->fields._version;
              if ( !v38 )
                goto LABEL_61;
              v40 = v21->fields._size;
              if ( (unsigned int)v40 >= v38->max_length )
              {
                v44 = v39[4];
                v45 = v21;
                goto LABEL_36;
              }
              v37 = &v38->obj.klass + v40;
              v21->fields._size = v40 + 1;
            }
            else
            {
              if ( !v22 )
                goto LABEL_61;
              v41 = v22->fields._items;
              v42 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v22->fields._version;
              if ( !v41 )
                goto LABEL_61;
              v43 = v22->fields._size;
              if ( (unsigned int)v43 >= v41->max_length )
              {
                v44 = v42[4];
                v45 = v22;
                goto LABEL_36;
              }
              v37 = &v41->obj.klass + v43;
              v22->fields._size = v43 + 1;
            }
          }
          v37[4] = (Il2CppClass *)v30;
          sub_1B8635C((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v30, (int32_t)v32, v33);
        }
      }
    }
    while ( v28 != ++v29 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v46 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v46 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v47 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v46 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v46, v47, Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventEntity__o *)v46;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)v46, v49, v50);
  }
  if ( !v20 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_56615964(
    v20,
    v46,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v51, v52, Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, 0LL);
    v53 = EventMaster___c_TypeInfo->static_fields;
    v53->__9__22_1 = (struct System_Comparison_EventEntity__o *)v51;
    sub_1B8635C((CGThumbnailListItem_o *)&v53->__9__22_1, (int32_t)v51, v54, v55);
  }
  if ( !v21 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_56615964(
    v21,
    v51,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v56 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v56 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v57 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v56 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v56, v57, Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, 0LL);
    v58 = EventMaster___c_TypeInfo->static_fields;
    v58->__9__22_2 = (struct System_Comparison_EventEntity__o *)v56;
    sub_1B8635C((CGThumbnailListItem_o *)&v58->__9__22_2, (int32_t)v56, v59, v60);
  }
  if ( !v22
    || (System_Collections_Generic_List_object___Sort_56615964(
          v22,
          v56,
          (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v61 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v61,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v61) )
  {
LABEL_61:
    sub_1B86614(Instance, v24);
  }
  System_Collections_Generic_List_object___AddRange(
    v61,
    (System_Collections_Generic_IEnumerable_T__o *)v20,
    (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v61,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v61,
    (System_Collections_Generic_IEnumerable_T__o *)v22,
    (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v61,
                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A4E478 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A4E478 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  const MethodInfo *v2; // x5
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_40123944; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_4A4E47D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A4E47D = 1;
  }
  EntityList_40123944 = EventMaster__GetEntityList_40123944(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_40123944 )
    goto LABEL_15;
  max_length = EntityList_40123944->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B8661C(Instance, v8);
      v12 = EntityList_40123944->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( ((__int64)Instance[1].monitor & 0x40) != 0 )
        return id;
      max_length = EntityList_40123944->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1B86614(Instance, v8);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A4E479 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A4E479 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  GameEventType_TYPE_array *v3; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *EntityList_40123944; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  v3 = types;
  if ( (byte_4A4E47C & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_EventEntity__TypeInfo, types);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity__Sort__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_EventEntity__TypeInfo, v8);
    sub_1B863B8(&GameEventType_TYPE___TypeInfo, v9);
    sub_1B863B8(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v10);
    sub_1B863B8(&EventMaster___c_TypeInfo, v11);
    byte_4A4E47C = 1;
  }
  if ( !v3 )
  {
    EntityList_40123944 = (void *)sub_1B86460(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_40123944 )
      goto LABEL_20;
    v3 = (GameEventType_TYPE_array *)EntityList_40123944;
    if ( !*((_DWORD *)EntityList_40123944 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_40123944 + 8) = 12;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v16 = *(_QWORD *)&v3->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( v17 < (unsigned int)v16 )
    {
      EntityList_40123944 = EventMaster__GetEntityList_40123944(this, v3->m_Items[v17 + 1], 0, 1, 0, v15);
      if ( !v14 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_40123944,
        (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v16) = v3->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_12;
    }
LABEL_21:
    sub_1B8661C(EntityList_40123944, v13);
  }
LABEL_12:
  EntityList_40123944 = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_40123944 = EventMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)EntityList_40123944 + 23) + 24LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)EntityList_40123944 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_40123944);
      EntityList_40123944 = EventMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)EntityList_40123944 + 23);
    v18 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventEntity__o *)v18;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)v18, v21, v22);
  }
  if ( !v14 )
LABEL_20:
    sub_1B86614(EntityList_40123944, v13);
  System_Collections_Generic_List_object___Sort_56615964(
    v14,
    v18,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v14;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_40123944; // x19
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v12; // x21
  int max_length; // w8
  bool v14; // w24
  QuestMaster_o *v15; // x22
  int v16; // w25
  EventEntity_o *v17; // x8
  int32_t id; // w23

  if ( (byte_4A4E47F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4E47F = 1;
  }
  EntityList_40123944 = EventMaster__GetEntityList_40123944(this, 12, 1, 0, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v12 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_40123944 )
    goto LABEL_19;
  max_length = EntityList_40123944->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (QuestMaster_o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1B8661C(Instance, v10);
      v17 = EntityList_40123944->m_Items[v16];
      if ( !v17 )
        break;
      if ( !MasterData_object )
        break;
      id = v17->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance->fields.m_CancellationTokenSource) & 0x10) != 0 )
      {
        if ( !v12 )
          break;
        Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId((QuestGroupMaster_o *)v12, id, 1, 0LL);
        if ( !v15 )
          break;
        Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                      v15,
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v14;
      }
      max_length = EntityList_40123944->max_length;
      v14 = ++v16 < max_length;
      if ( v16 >= max_length )
        return v14;
    }
LABEL_19:
    sub_1B86614(Instance, v10);
  }
  return v14;
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4A4E480 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime);
    byte_4A4E480 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_1B86614(0LL, v7);
  return EventEntity__IsOpen_40097264((EventEntity_o *)Entity, checkTime, 0, v8);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_40123944; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w23
  EventEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4E482 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, flag);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4E482 = 1;
  }
  entity = 0LL;
  EntityList_40123944 = EventMaster__GetEntityList_40123944(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_40123944 )
    goto LABEL_15;
  max_length = EntityList_40123944->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B8661C(Instance, v10);
      v15 = EntityList_40123944->m_Items[v14];
      if ( !v15 || !v13 )
        break;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   v15->fields.id,
                                   (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_19;
      if ( !entity )
        break;
      if ( ((int64_t)entity[1].monitor & flag) == 0 )
      {
LABEL_19:
        max_length = EntityList_40123944->max_length;
        v12 = ++v14 < max_length;
        if ( v14 < max_length )
          continue;
      }
      return v12;
    }
LABEL_15:
    sub_1B86614(Instance, v10);
  }
  return v12;
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

  if ( (byte_4A4E48A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, *(_QWORD *)&eventId);
    byte_4A4E48A = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  return Entity && (!eventType || Entity->fields.type == eventType) && EventEntity__IsEventPeriod(Entity, nowTime, v10);
}


bool __fastcall EventMaster__IsEnableEventShop(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  bool v17; // w28
  EventEntity_o *v18; // x25
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A4E486 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A4E486 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    v17 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v16,
                                    (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance || !MasterData_object )
        break;
      v18 = (EventEntity_o *)Instance;
      Instance = (DataManager_o *)ShopMaster__IsEnableEventShop(
                                    (ShopMaster_o *)MasterData_object,
                                    Instance->fields.m_CachedPtr,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      if ( !v13 )
        break;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    v13,
                                    &entity,
                                    v18->fields.id,
                                    (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( (BYTE4(entity[1].monitor) & 0x40) != 0 )
          goto LABEL_28;
      }
      if ( !EventEntity__IsOpen(v18, 0, v19) && !EventEntity__IsExchangePeriod(v18, Time, v20)
        || EventEntity__IsClosePurchaseShop(v18, v11) )
      {
LABEL_28:
        v17 = ++v16 < v15;
        if ( v15 != v16 )
          continue;
      }
      return v17;
    }
LABEL_25:
    sub_1B86614(Instance, v11);
  }
  return 0;
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_40123944; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w24
  EventEntity_o *v15; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4E488 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4E488 = 1;
  }
  entity = 0LL;
  EntityList_40123944 = EventMaster__GetEntityList_40123944(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_40123944) )
  {
LABEL_17:
    sub_1B86614(Instance, v10);
  }
  max_length = EntityList_40123944->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B8661C(Instance, v10);
      v15 = EntityList_40123944->m_Items[v14];
      if ( !v15 || !v13 )
        goto LABEL_17;
      id = v15->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   id,
                                   (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( (BYTE2(entity[1].monitor) & 0x10) != 0 )
          break;
      }
      max_length = EntityList_40123944->max_length;
      v12 = ++v14 < max_length;
      if ( v14 >= max_length )
        return v12;
    }
    *eventId = id;
  }
  return v12;
}


bool __fastcall EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_40123944; // x0

  EntityList_40123944 = EventMaster__GetEntityList_40123944(this, 24, 1, 1, 0, v2);
  if ( EntityList_40123944 )
    LOBYTE(EntityList_40123944) = EntityList_40123944->max_length != 0;
  return (char)EntityList_40123944;
}


bool __fastcall EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


System_Int32_array *__fastcall EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v11; // w21
  int32_t v12; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4A4E473 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4A4E473 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = (int)list;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        if ( !v8 )
          break;
        items_low = LODWORD(list->fields.items);
        items = v8->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            items_low,
            *(const MethodInfo_35DF934 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size + 1] = items_low;
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_14;
    }
LABEL_16:
    sub_1B86614(list, items_low);
  }
LABEL_14:
  if ( !v8 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMaster__getMyRoomBgImgId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v6; // w20
  int32_t myroomBgId; // w21
  int32_t v8; // w22
  EventEntity_o *Item; // x0
  const MethodInfo *v10; // x2
  EventEntity_o *v11; // x23

  if ( (byte_4A4E47A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    byte_4A4E47A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( Count >= 1 )
  {
    v6 = Count;
    myroomBgId = 0;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v8,
                                (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( Item )
      {
        v11 = Item;
        if ( Item->fields.myroomBgId >= 1 && EventEntity__IsOpen(Item, 0, v10) )
          myroomBgId = v11->fields.myroomBgId;
      }
      if ( v6 == ++v8 )
        return myroomBgId;
    }
LABEL_15:
    sub_1B86614(list, method);
  }
  return 0;
}


int32_t __fastcall EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  EventEntity_o *v18; // x0
  const MethodInfo *v19; // x2
  EventEntity_o *v20; // x21
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4A4E47B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__, method);
    sub_1B863B8(&System_IDisposable_TypeInfo, v3);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, v4);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v5);
    byte_4A4E47B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B86614(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v7);
  myroomBgmId = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_17:
      v17 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0LL);
    }
    v18 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                             Enumerator,
                             *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( v18 && v18->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v18, 0, v19) )
      myroomBgmId = v20->fields.myroomBgmId;
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_27;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_27:
    v24 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4E48D & 1) == 0 )
  {
    sub_1B863B8(&EventMaster___c_TypeInfo, v1);
    byte_4A4E48D = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(EventMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)EventMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
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
    sub_1B86614(this, a);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, a);
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
    sub_1B86614(this, a);
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