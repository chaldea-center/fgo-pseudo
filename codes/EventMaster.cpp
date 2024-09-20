void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B13A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
    byte_4A5B13A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    67,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_39148640; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  unsigned int v9; // w22
  EventEntity_o *v10; // x8
  int32_t id; // w21

  if ( (byte_4A5B146 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B146 = 1;
  }
  EntityList_39148640 = EventMaster__GetEntityList_39148640(this, 12, 1, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_39148640 )
    goto LABEL_15;
  max_length = EntityList_39148640->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B88814(Instance, v6);
      v10 = EntityList_39148640->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v8 )
        break;
      id = v10->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v8,
                   id,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance[1].monitor) & 0x10) != 0 )
        return id;
      max_length = EntityList_39148640->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1B8880C(Instance, v6);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x4
  int64_t EntityList_39148640; // x0
  __int64 v6; // x1
  int v7; // w8
  int64_t v8; // x20
  unsigned int v9; // w22
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B151 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B151 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_39148640 = (int64_t)EventMaster__GetEntityList_39148640(this, 23, 0, 1, v4);
  if ( !EntityList_39148640 )
    goto LABEL_18;
  v7 = *(_DWORD *)(EntityList_39148640 + 24);
  v8 = EntityList_39148640;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1B88814(EntityList_39148640, v6);
      v10 = *(Il2CppObject **)(v8 + 8LL * (int)v9 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityList_39148640 = NetworkManager__getTime(0LL);
      if ( !v10 )
        break;
      if ( EntityList_39148640 >= (__int64)v10[5].monitor )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_EventEntity__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v10,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v10, v11, v12);
        }
      }
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return (System_Collections_Generic_List_EventEntity__o *)v3;
    }
LABEL_18:
    sub_1B8880C(EntityList_39148640, v6);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v3;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return EventMaster__GetEntityList_39148640(this, eventType, 1, isFinishedAt, v4);
}


System_Collections_Generic_List_EventEntity____o *__fastcall EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  EventEntity_array *EntityList_39148640; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  bool v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  EventEntity_array *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4A5B13C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventEntity____TypeInfo);
    byte_4A5B13C = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_14;
  v11 = *(_QWORD *)&eventTypes->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v13 = isFinishedAt;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1B88814(EntityList_39148640, v9);
      EntityList_39148640 = EventMaster__GetEntityList_39148640(this, eventTypes->m_Items[v12 + 1], 1, v13, v10);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v17 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v19 = EntityList_39148640;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          &EntityList_39148640->obj,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
      }
      LODWORD(v11) = eventTypes->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        return (System_Collections_Generic_List_EventEntity____o *)v7;
    }
LABEL_14:
    sub_1B8880C(EntityList_39148640, v9);
  }
  return (System_Collections_Generic_List_EventEntity____o *)v7;
}


EventEntity_array *__fastcall EventMaster__GetEnableExistEventRewardEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  EventRewardSceneMaster_o *v6; // x21
  int v7; // w22
  int32_t v8; // w23
  const MethodInfo *v9; // x2
  DataManager_o *v10; // x24
  __int64 methodPtr_low; // x10
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5B14F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_1B885B0(&EventEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B14F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v6 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v10 = Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, v9);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v6 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v6, v10->fields.m_CachedPtr, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.m_CancellationTokenSource )
          {
            if ( !v3 )
              break;
            items = v3->fields._items;
            v15 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                (Il2CppObject *)v10,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v17[4] = (Il2CppClass *)v10;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
            }
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B8880C(Instance, v5);
  }
LABEL_23:
  if ( !v3 )
    goto LABEL_25;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventMaster__GetEntityList_39148640(this, 24, 1, 1, v2);
}


EventEntity_array *__fastcall EventMaster__GetEnabledEntityListFromIds(
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
  __int64 methodPtr_low; // x10
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4A5B13D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_4A5B13D = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_26;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = (EventEntity_o *)list;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
        {
          if ( !ids )
            goto LABEL_26;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v14->fields.type == eventType) )
          {
            if ( checkTime )
            {
              list = (void *)EventEntity__IsOpen_39121580(v14, checkTime, 1, v17);
              if ( ((unsigned __int8)list & 1) == 0 )
                continue;
            }
            else
            {
              list = (void *)EventEntity__IsOpen(v14, 1, v16);
              if ( ((unsigned __int8)list & 1) == 0 )
                continue;
            }
            if ( !v9 )
              goto LABEL_26;
            items = v9->fields._items;
            v21 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_26;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v14,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v14;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v14, v18, v19);
            }
          }
        }
      }
    }
    while ( v12 != ++v13 );
  }
  if ( !v9 )
LABEL_26:
    sub_1B8880C(list, v10);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v9,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventMaster__GetEntityList_39148640(this, eventType, 0, 1, v3);
}


EventEntity_array *__fastcall EventMaster__GetEntityList_39148640(
        EventMaster_o *this,
        int32_t eventType,
        bool isOpenGet,
        bool isFinishedAt,
        const MethodInfo *method)
{
  _BOOL4 v6; // w19
  System_Collections_Generic_List_object__o *v9; // x22
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v12; // w23
  int32_t v13; // w24
  bool v14; // w25
  const MethodInfo *v15; // x2
  int32_t v16; // w3
  Il2CppObject *v17; // x26
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  v6 = isOpenGet;
  if ( (byte_4A5B13E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_4A5B13E = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    v14 = isFinishedAt;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(list[1].klass) == eventType) )
        {
          if ( !v6
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsOpen(
                                                                           (EventEntity_o *)list,
                                                                           v14,
                                                                           v15),
                (((unsigned int)list | !v6) & 1) != 0) )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v20 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v17,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v17;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v17, (int32_t)v15, v16);
            }
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(list, v10);
  }
LABEL_21:
  if ( !v9 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v9,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B154 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4A5B154 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_1B8880C(Master_object, v5);
  }
  return -1LL;
}


System_String_o *__fastcall EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B14B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B14B = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1B8880C(v5, v6);
    v7 = entity + 2;
  }
  else
  {
    v7 = (Il2CppObject *)&StringLiteral_1/*""*/;
  }
  return (System_String_o *)v7->klass;
}


System_String_o *__fastcall EventMaster__GetEventShortName(
        EventMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B14C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B14C = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1B8880C(v5, v6);
    p_monitor = (System_String_o **)&entity[2].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_monitor;
}


int64_t __fastcall EventMaster__GetEventStartedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4A5B153 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4A5B153 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
  {
    return (int64_t)Entity[5].monitor;
  }
  else
  {
    return -1LL;
  }
}


System_Collections_Generic_HashSet_int__o *__fastcall EventMaster__GetEventValUpEventIdHash(
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

  if ( (byte_4A5B149 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5B149 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[6].monitor, v8);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v13 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1B88814(Instance, v7);
        v14 = FilterEnableEntityList->m_Items[v13];
        if ( !v14 )
          break;
        if ( !v12 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     v14->fields.id,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( ((__int64)Instance[1].monitor & 0x10) != 0 )
        {
          if ( !v10 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v10,
                                       v14->fields.id,
                                       (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_1B8880C(Instance, v7);
    }
LABEL_17:
    if ( !v10 )
      goto LABEL_19;
  }
  return v10;
}


EventEntity_array *__fastcall EventMaster__GetFilterEnableEntityList(
        EventMaster_o *this,
        bool isFinishedAt,
        int64_t nowTime,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  System_Collections_Generic_List_object__o *v10; // x20
  EventFilterMaster_o *v11; // x23
  int32_t Count; // w24
  int32_t v13; // w25
  bool v14; // w26
  EventEntity_o *Item; // x0
  const MethodInfo *v16; // x3
  EventEntity_o *v17; // x27
  __int64 methodPtr_low; // x10
  int32_t type; // w8
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  EventFilterEntity_o *v23; // x23
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_object__o *v33; // x0
  System_Comparison_T__o *v34; // x21
  Il2CppObject *v35; // x22
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Comparison_T__o *v39; // x21
  Il2CppObject *v40; // x22
  struct EventMaster___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Object_array *v44; // x21
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-70h]
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B13F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1B885B0(&EventEntity___TypeInfo);
    sub_1B885B0(&EventEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__CopyTo__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__);
    sub_1B885B0(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__);
    sub_1B885B0(&EventMaster___c_TypeInfo);
    byte_4A5B13F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_58;
  v11 = (EventFilterMaster_o *)MasterData_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  if ( Count >= 1 )
  {
    v13 = 0;
    v14 = isFinishedAt;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_58;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                v13,
                                (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = Item;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( type == 22 || type == 12 )
          {
            Instance = (void *)EventEntity__IsOpen_39121580(Item, nowTime, v14, v16);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_58;
              Instance = (void *)EventFilterMaster__TryGetEntity_39132904(v11, &entity, v17->fields.id, 0, v20);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v9 )
                  goto LABEL_58;
                version = v9->fields._version;
                items = v9->fields._items;
                goto LABEL_36;
              }
              Instance = entity;
              if ( !entity )
                goto LABEL_58;
              Instance = (void *)EventFilterEntity__IsOpen(entity, v8);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v23 = entity;
                if ( !entity )
                  goto LABEL_58;
                Instance = (void *)System_String__IsNullOrEmpty(entity->fields.buttonText, 0LL);
                if ( ((unsigned __int8)Instance & 1) == 0
                  && v23->fields.openQuestId >= 1
                  && v23->fields.closeQuestId > 0 )
                {
                  if ( !v10 )
                    goto LABEL_58;
                  v24 = v10->fields._items;
                  v11 = (EventFilterMaster_o *)MasterData_object;
                  v25 = Method_System_Collections_Generic_List_EventEntity__Add__;
                  ++v10->fields._version;
                  if ( !v24 )
                    goto LABEL_58;
                  size = v10->fields._size;
                  if ( (unsigned int)size >= v24->max_length )
                  {
                    v32 = v25[4];
                    v33 = v10;
                    goto LABEL_41;
                  }
                  v27 = &v24->obj.klass + size;
                  v10->fields._size = size + 1;
LABEL_39:
                  v27[4] = (Il2CppClass *)v17;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v17, v21, v22);
                  continue;
                }
                if ( !v9 )
                  goto LABEL_58;
                version = v9->fields._version;
                items = v9->fields._items;
                v11 = (EventFilterMaster_o *)MasterData_object;
LABEL_36:
                v30 = Method_System_Collections_Generic_List_EventEntity__Add__;
                v9->fields._version = version + 1;
                if ( !items )
                  goto LABEL_58;
                v31 = v9->fields._size;
                if ( (unsigned int)v31 >= items->max_length )
                {
                  v32 = v30[4];
                  v33 = v9;
LABEL_41:
                  System_Collections_Generic_List_object___AddWithResize(
                    v33,
                    (Il2CppObject *)v17,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32 + 192) + 112LL));
                  continue;
                }
                v27 = &items->obj.klass + v31;
                v9->fields._size = v31 + 1;
                goto LABEL_39;
              }
            }
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
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v34 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventEntity__o *)v34;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v34, v37, v38);
  }
  if ( !v9 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    v34,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v39 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v39 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v40 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v39 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v39, v40, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0LL);
    v41 = EventMaster___c_TypeInfo->static_fields;
    v41->__9__7_1 = (struct System_Comparison_EventEntity__o *)v39;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->__9__7_1, (int32_t)v39, v42, v43);
  }
  if ( !v10 )
LABEL_58:
    sub_1B8880C(Instance, v8);
  System_Collections_Generic_List_object___Sort_55571192(
    v10,
    v39,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v44 = (System_Object_array *)sub_1B88658(EventEntity___TypeInfo, (unsigned int)(v10->fields._size + v9->fields._size));
  System_Collections_Generic_List_object___CopyTo_55565796(
    v9,
    v44,
    0,
    (const MethodInfo_34FDDE4 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_55565796(
    v10,
    v44,
    v9->fields._size,
    (const MethodInfo_34FDDE4 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v44;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_39148640; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11

  EntityList_39148640 = EventMaster__GetEntityList_39148640(this, 24, 1, 1, v2);
  if ( !EntityList_39148640 )
    return -1LL;
  max_length = EntityList_39148640->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_39148640->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(result, v4);
    v9 = m_Items[v6];
    if ( !v9 )
      sub_1B8880C(result, v4);
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
  __int64 methodPtr_low; // x10
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  System_Collections_Generic_List_object__o *v26; // x0
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  System_Comparison_T__o *v30; // x22
  Il2CppObject *v31; // x23
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Comparison_T__o *v35; // x22
  Il2CppObject *v36; // x23
  struct EventMaster___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Comparison_T__o *v40; // x22
  Il2CppObject *v41; // x23
  struct EventMaster___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_List_object__o *v45; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B14D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&EventEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__);
    sub_1B885B0(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__);
    sub_1B885B0(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__);
    sub_1B885B0(&EventMaster___c_TypeInfo);
    byte_4A5B14D = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  nowTime = NetworkManager__getTime(0LL);
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_63;
  v9 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_63;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v12,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_63;
      v13 = (EventEntity_o *)Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventEntity_TypeInfo
        || !v9 )
      {
        goto LABEL_63;
      }
      Instance = (void *)ShopMaster__IsEnableEventShop(v9, *((_DWORD *)Instance + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_object )
          goto LABEL_63;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             &entity,
                             v13->fields.id,
                             (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_20;
        if ( !entity )
          goto LABEL_63;
        if ( (BYTE4(entity[1].monitor) & 0x40) == 0 )
        {
LABEL_20:
          Instance = (void *)EventEntity__IsOpen(v13, 0, v15);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v3 )
              goto LABEL_63;
            items = v3->fields._items;
            v19 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v3->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v3->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v25 = v19[4];
              v26 = v3;
LABEL_38:
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                (Il2CppObject *)v13,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25 + 192) + 112LL));
              continue;
            }
            v21 = &items->obj.klass + size;
            v3->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v13, nowTime, v16);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v4 )
                goto LABEL_63;
              v22 = v4->fields._items;
              v23 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v4->fields._version;
              if ( !v22 )
                goto LABEL_63;
              v24 = v4->fields._size;
              if ( (unsigned int)v24 >= v22->max_length )
              {
                v25 = v23[4];
                v26 = v4;
                goto LABEL_38;
              }
              v21 = &v22->obj.klass + v24;
              v4->fields._size = v24 + 1;
            }
            else
            {
              if ( !v5 )
                goto LABEL_63;
              v27 = v5->fields._items;
              v28 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v5->fields._version;
              if ( !v27 )
                goto LABEL_63;
              v29 = v5->fields._size;
              if ( (unsigned int)v29 >= v27->max_length )
              {
                v25 = v28[4];
                v26 = v5;
                goto LABEL_38;
              }
              v21 = &v27->obj.klass + v29;
              v5->fields._size = v29 + 1;
            }
          }
          v21[4] = (Il2CppClass *)v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, (int32_t)v16, v17);
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
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v30 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventEntity__o *)v30;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)v30, v33, v34);
  }
  if ( !v3 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_55571192(
    v3,
    v30,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v35 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v35, v36, Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, 0LL);
    v37 = EventMaster___c_TypeInfo->static_fields;
    v37->__9__22_1 = (struct System_Comparison_EventEntity__o *)v35;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->__9__22_1, (int32_t)v35, v38, v39);
  }
  if ( !v4 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_55571192(
    v4,
    v35,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v40 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v40 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v40 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v40, v41, Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, 0LL);
    v42 = EventMaster___c_TypeInfo->static_fields;
    v42->__9__22_2 = (struct System_Comparison_EventEntity__o *)v40;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v42->__9__22_2, (int32_t)v40, v43, v44);
  }
  if ( !v5
    || (System_Collections_Generic_List_object___Sort_55571192(
          v5,
          v40,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v45 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v45,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v45) )
  {
LABEL_63:
    sub_1B8880C(Instance, v7);
  }
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)v3,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)v4,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v45,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5B140 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B140 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_39148640; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  unsigned int v9; // w22
  EventEntity_o *v10; // x8
  int32_t id; // w21

  if ( (byte_4A5B145 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B145 = 1;
  }
  EntityList_39148640 = EventMaster__GetEntityList_39148640(this, 12, 1, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_39148640 )
    goto LABEL_15;
  max_length = EntityList_39148640->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B88814(Instance, v6);
      v10 = EntityList_39148640->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v8 )
        break;
      id = v10->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v8,
                   id,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( ((__int64)Instance[1].monitor & 0x40) != 0 )
        return id;
      max_length = EntityList_39148640->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1B8880C(Instance, v6);
  }
  return 0;
}


int32_t __fastcall EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5B141 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B141 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  void *EntityList_39148640; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  const MethodInfo *v8; // x4
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  System_Comparison_T__o *v11; // x20
  Il2CppObject *v12; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5B144 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1B885B0(&GameEventType_TYPE___TypeInfo);
    sub_1B885B0(&Method_EventMaster___c__GetSortedEntityList_b__12_0__);
    sub_1B885B0(&EventMaster___c_TypeInfo);
    byte_4A5B144 = 1;
  }
  if ( !types )
  {
    EntityList_39148640 = (void *)sub_1B88658(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_39148640 )
      goto LABEL_20;
    types = (GameEventType_TYPE_array *)EntityList_39148640;
    if ( !*((_DWORD *)EntityList_39148640 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_39148640 + 8) = 12;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v9 = *(_QWORD *)&types->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( v10 < (unsigned int)v9 )
    {
      EntityList_39148640 = EventMaster__GetEntityList_39148640(this, types->m_Items[v10 + 1], 0, 1, v8);
      if ( !v7 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v7,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_39148640,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v9) = types->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_12;
    }
LABEL_21:
    sub_1B88814(EntityList_39148640, v6);
  }
LABEL_12:
  EntityList_39148640 = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_39148640 = EventMaster___c_TypeInfo;
  }
  v11 = *(System_Comparison_T__o **)(*((_QWORD *)EntityList_39148640 + 23) + 24LL);
  if ( !v11 )
  {
    if ( !*((_DWORD *)EntityList_39148640 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_39148640);
      EntityList_39148640 = EventMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)**((_QWORD **)EntityList_39148640 + 23);
    v11 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v11, v12, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventEntity__o *)v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)v11, v14, v15);
  }
  if ( !v7 )
LABEL_20:
    sub_1B8880C(EntityList_39148640, v6);
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v11,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v7;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_39148640; // x19
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

  if ( (byte_4A5B147 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B147 = 1;
  }
  EntityList_39148640 = EventMaster__GetEntityList_39148640(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_39148640 )
    goto LABEL_19;
  max_length = EntityList_39148640->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (QuestMaster_o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1B88814(Instance, v6);
      v13 = EntityList_39148640->m_Items[v12];
      if ( !v13 )
        break;
      if ( !MasterData_object )
        break;
      id = v13->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance->fields.m_CancellationTokenSource) & 0x10) != 0 )
      {
        if ( !v8 )
          break;
        Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId((QuestGroupMaster_o *)v8, id, 1, 0LL);
        if ( !v11 )
          break;
        Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                      v11,
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v10;
      }
      max_length = EntityList_39148640->max_length;
      v10 = ++v12 < max_length;
      if ( v12 >= max_length )
        return v10;
    }
LABEL_19:
    sub_1B8880C(Instance, v6);
  }
  return v10;
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4A5B148 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4A5B148 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_1B8880C(0LL, v7);
  return EventEntity__IsOpen_39121580((EventEntity_o *)Entity, checkTime, 0, v8);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  EventEntity_array *EntityList_39148640; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  bool v10; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  int v12; // w23
  EventEntity_o *v13; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B14A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B14A = 1;
  }
  entity = 0LL;
  EntityList_39148640 = EventMaster__GetEntityList_39148640(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_39148640 )
    goto LABEL_15;
  max_length = EntityList_39148640->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1B88814(Instance, v8);
      v13 = EntityList_39148640->m_Items[v12];
      if ( !v13 || !v11 )
        break;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v11,
                                   &entity,
                                   v13->fields.id,
                                   (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_19;
      if ( !entity )
        break;
      if ( ((int64_t)entity[1].monitor & flag) == 0 )
      {
LABEL_19:
        max_length = EntityList_39148640->max_length;
        v10 = ++v12 < max_length;
        if ( v12 < max_length )
          continue;
      }
      return v10;
    }
LABEL_15:
    sub_1B8880C(Instance, v8);
  }
  return v10;
}


bool __fastcall EventMaster__IsEnableEvent(
        EventMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  EventEntity_o *Entity; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4A5B152 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4A5B152 = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  return Entity && (!eventType || Entity->fields.type == eventType) && EventEntity__IsEventPeriod(Entity, nowTime, v10);
}


bool __fastcall EventMaster__IsEnableEventShop(EventMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x22
  int32_t Count; // w0
  int32_t v9; // w23
  int32_t v10; // w24
  bool v11; // w29
  EventEntity_o *v12; // x25
  __int64 methodPtr_low; // x10
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B14E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&EventEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B14E = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v10,
                                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v12 = (EventEntity_o *)Instance;
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
      if ( !v7 )
        break;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    v7,
                                    &entity,
                                    v12->fields.id,
                                    (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( (BYTE4(entity[1].monitor) & 0x40) != 0 )
          goto LABEL_30;
      }
      if ( !EventEntity__IsOpen(v12, 0, v14) && !EventEntity__IsExchangePeriod(v12, Time, v15)
        || EventEntity__IsClosePurchaseShop(v12, v5) )
      {
LABEL_30:
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_27:
    sub_1B8880C(Instance, v5);
  }
  return 0;
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  EventEntity_array *EntityList_39148640; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  bool v10; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  int v12; // w24
  EventEntity_o *v13; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5B150 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B150 = 1;
  }
  entity = 0LL;
  EntityList_39148640 = EventMaster__GetEntityList_39148640(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_39148640) )
  {
LABEL_17:
    sub_1B8880C(Instance, v8);
  }
  max_length = EntityList_39148640->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1B88814(Instance, v8);
      v13 = EntityList_39148640->m_Items[v12];
      if ( !v13 || !v11 )
        goto LABEL_17;
      id = v13->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v11,
                                   &entity,
                                   id,
                                   (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( (BYTE2(entity[1].monitor) & 0x10) != 0 )
          break;
      }
      max_length = EntityList_39148640->max_length;
      v10 = ++v12 < max_length;
      if ( v12 >= max_length )
        return v10;
    }
    *eventId = id;
  }
  return v10;
}


bool __fastcall EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_39148640; // x0

  EntityList_39148640 = EventMaster__GetEntityList_39148640(this, 24, 1, 1, v2);
  if ( EntityList_39148640 )
    LOBYTE(EntityList_39148640) = EntityList_39148640->max_length != 0;
  return (char)EntityList_39148640;
}


bool __fastcall EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


System_Int32_array *__fastcall EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4A5B13B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5B13B = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo )
        {
          if ( !v3 )
            break;
          items_low = LODWORD(list->fields.items);
          items = v3->fields._items;
          v10 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              items_low,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size + 1] = items_low;
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B8880C(list, items_low);
  }
LABEL_16:
  if ( !v3 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMaster__getMyRoomBgImgId(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t myroomBgId; // w21
  int32_t v7; // w22
  EventEntity_o *Item; // x0
  const MethodInfo *v9; // x2
  EventEntity_o *v10; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B142 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventEntity_TypeInfo);
    byte_4A5B142 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = Item;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo
          && Item->fields.myroomBgId >= 1
          && EventEntity__IsOpen(Item, 0, v9) )
        {
          myroomBgId = v10->fields.myroomBgId;
        }
      }
      if ( v5 == ++v7 )
        return myroomBgId;
    }
LABEL_17:
    sub_1B8880C(list, method);
  }
  return 0;
}


int32_t __fastcall EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  EventEntity_o *v15; // x0
  const MethodInfo *v16; // x2
  EventEntity_o *v17; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4A5B143 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B143 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1B8880C(list, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v4);
  myroomBgmId = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_17:
      v14 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                             Enumerator,
                             *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( v15 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v15->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventEntity_c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEntity_TypeInfo )
      {
        sub_1B88ACC(v15);
        goto LABEL_33;
      }
      if ( v15->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v15, 0, v16) )
        myroomBgmId = v17->fields.myroomBgmId;
    }
  }
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_29;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_29:
    v22 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B155 & 1) == 0 )
  {
    sub_1B885B0(&EventMaster___c_TypeInfo);
    byte_4A5B155 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
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