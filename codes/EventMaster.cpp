void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC3EB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, method);
    byte_49FC3EB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    67,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_38827872; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_49FC3F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FC3F7 = 1;
  }
  EntityList_38827872 = EventMaster__GetEntityList_38827872(this, 12, 1, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_38827872 )
    goto LABEL_15;
  max_length = EntityList_38827872->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B6432C(Instance, v8);
      v12 = EntityList_38827872->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance[1].monitor) & 0x10) != 0 )
        return id;
      max_length = EntityList_38827872->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1B64324(Instance);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  const MethodInfo *v8; // x4
  int64_t EntityList_38827872; // x0
  __int64 v10; // x1
  int v11; // w8
  int64_t v12; // x20
  unsigned int v13; // w22
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49FC402 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_EventEntity__TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    byte_49FC402 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventEntity__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_38827872 = (int64_t)EventMaster__GetEntityList_38827872(this, 23, 0, 1, v8);
  if ( !EntityList_38827872 )
    goto LABEL_18;
  v11 = *(_DWORD *)(EntityList_38827872 + 24);
  v12 = EntityList_38827872;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
        sub_1B6432C(EntityList_38827872, v10);
      v14 = *(Il2CppObject **)(v12 + 8LL * (int)v13 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityList_38827872 = NetworkManager__getTime(0LL);
      if ( !v14 )
        break;
      if ( EntityList_38827872 >= (__int64)v14[5].monitor )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_EventEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v14,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v14;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
        }
      }
      v11 = *(_DWORD *)(v12 + 24);
      if ( (int)++v13 >= v11 )
        return (System_Collections_Generic_List_EventEntity__o *)v7;
    }
LABEL_18:
    sub_1B64324(EntityList_38827872);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v7;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return EventMaster__GetEntityList_38827872(this, eventType, 1, isFinishedAt, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventEntity____o *__fastcall EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  EventEntity_array *EntityList_38827872; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  bool v15; // w22
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  EventEntity_array *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_49FC3ED & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity____Add__, eventTypes);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_EventEntity____TypeInfo, v8);
    byte_49FC3ED = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventEntity____TypeInfo,
                                                      eventTypes,
                                                      isFinishedAt);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
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
        sub_1B6432C(EntityList_38827872, v11);
      EntityList_38827872 = EventMaster__GetEntityList_38827872(this, eventTypes->m_Items[v14 + 1], 1, v15, v12);
      if ( !v9 )
        break;
      items = v9->fields._items;
      v19 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      v21 = EntityList_38827872;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          &EntityList_38827872->obj,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
      }
      LODWORD(v13) = eventTypes->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        return (System_Collections_Generic_List_EventEntity____o *)v9;
    }
LABEL_14:
    sub_1B64324(EntityList_38827872);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x20
  DataManager_o *Instance; // x0
  EventRewardSceneMaster_o *v16; // x21
  int v17; // w22
  int32_t v18; // w23
  const MethodInfo *v19; // x2
  DataManager_o *v20; // x24
  __int64 methodPtr_low; // x10
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_49FC400 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v4);
    sub_1B640C8(&EventEntity_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_EventEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FC400 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v16 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v17 = (int)Instance;
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v18,
                                    (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v20 = Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, v19);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v16 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v16, v20->fields.m_CachedPtr, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.m_CancellationTokenSource )
          {
            if ( !v14 )
              break;
            items = v14->fields._items;
            v25 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v20,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v20;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v20, v22, v23);
            }
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B64324(Instance);
  }
LABEL_23:
  if ( !v14 )
    goto LABEL_25;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v14,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventMaster__GetEntityList_38827872(this, 24, 1, 1, v2);
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
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x23
  void *list; // x0
  int v18; // w24
  int32_t v19; // w25
  EventEntity_o *v20; // x26
  __int64 methodPtr_low; // x10
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_49FC3EE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&EventEntity_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_EventEntity__TypeInfo, v15);
    byte_49FC3EE = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       *(_QWORD *)&eventType,
                                                       ids);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    v19 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_26;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = (EventEntity_o *)list;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
        {
          if ( !ids )
            goto LABEL_26;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v20->fields.type == eventType) )
          {
            if ( checkTime )
            {
              list = (void *)EventEntity__IsOpen_38800820(v20, checkTime, 1, v23);
              if ( ((unsigned __int8)list & 1) == 0 )
                continue;
            }
            else
            {
              list = (void *)EventEntity__IsOpen(v20, 1, v22);
              if ( ((unsigned __int8)list & 1) == 0 )
                continue;
            }
            if ( !v16 )
              goto LABEL_26;
            items = v16->fields._items;
            v27 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              goto LABEL_26;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)v20,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v20;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v20, v24, v25);
            }
          }
        }
      }
    }
    while ( v18 != ++v19 );
  }
  if ( !v16 )
LABEL_26:
    sub_1B64324(list);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v16,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventMaster__GetEntityList_38827872(this, eventType, 0, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_38827872(
        EventMaster_o *this,
        int32_t eventType,
        bool isOpenGet,
        bool isFinishedAt,
        const MethodInfo *method)
{
  _BOOL4 v6; // w19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v17; // w23
  int32_t v18; // w24
  bool v19; // w25
  const MethodInfo *v20; // x2
  int32_t v21; // w3
  Il2CppObject *v22; // x26
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  v6 = isOpenGet;
  if ( (byte_49FC3EF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&EventEntity_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_49FC3EF = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       *(_QWORD *)&eventType,
                                                       isOpenGet);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = (int)list;
    v18 = 0;
    v19 = isFinishedAt;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v22 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(list[1].klass) == eventType) )
        {
          if ( !v6
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsOpen(
                                                                           (EventEntity_o *)list,
                                                                           v19,
                                                                           v20),
                (((unsigned int)list | !v6) & 1) != 0) )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v25 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v22,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v22;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v22, (int32_t)v20, v21);
            }
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B64324(list);
  }
LABEL_21:
  if ( !v15 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v15,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC405 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    byte_49FC405 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_1B64324(Master_object);
  }
  return -1LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  Il2CppObject *v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC3FC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FC3FC = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1B64324(v6);
    v7 = entity + 2;
  }
  else
  {
    v7 = (Il2CppObject *)&StringLiteral_1/*""*/;
  }
  return (System_String_o *)v7->klass;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventShortName(
        EventMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC3FD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FC3FD = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1B64324(v6);
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

  if ( (byte_49FC404 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    byte_49FC404 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
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
  const MethodInfo *v14; // x3
  EventEntity_array *FilterEnableEntityList; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_HashSet_int__o *v18; // x20
  __int64 v19; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  __int64 v22; // x22
  EventEntity_o *v23; // x26

  if ( (byte_49FC3FA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_49FC3FA = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[6].monitor, v14);
  v18 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_HashSet_int____ctor(
    v18,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v22 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v22 >= max_length )
          sub_1B6432C(Instance, v19);
        v23 = FilterEnableEntityList->m_Items[v22];
        if ( !v23 )
          break;
        if ( !v21 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v21,
                     v23->fields.id,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( ((__int64)Instance[1].monitor & 0x10) != 0 )
        {
          if ( !v18 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v18,
                                       v23->fields.id,
                                       (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v22 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_1B64324(Instance);
    }
LABEL_17:
    if ( !v18 )
      goto LABEL_19;
  }
  return v18;
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
  __int64 v22; // x1
  void *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x20
  EventFilterMaster_o *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t Count; // w24
  int32_t v34; // w25
  bool v35; // w26
  EventEntity_o *Item; // x0
  const MethodInfo *v37; // x3
  EventEntity_o *v38; // x27
  __int64 methodPtr_low; // x10
  int32_t type; // w8
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  EventFilterEntity_o *v45; // x23
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  System_Collections_Generic_List_object__o *v55; // x0
  System_Comparison_T__o *v56; // x21
  Il2CppObject *v57; // x22
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x1
  __int64 v62; // x2
  System_Comparison_T__o *v63; // x21
  Il2CppObject *v64; // x22
  struct EventMaster___c_StaticFields *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_Object_array *v68; // x21
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-70h]
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FC3F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isFinishedAt);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_EventEntity__TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFilterMaster___, v9);
    sub_1B640C8(&EventEntity___TypeInfo, v10);
    sub_1B640C8(&EventEntity_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__Sort__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v16);
    sub_1B640C8(&System_Collections_Generic_List_EventEntity__TypeInfo, v17);
    sub_1B640C8(&NetworkManager_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v20);
    sub_1B640C8(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v21);
    sub_1B640C8(&EventMaster___c_TypeInfo, v22);
    byte_49FC3F0 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_58;
  v30 = (EventFilterMaster_o *)MasterData_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  if ( Count >= 1 )
  {
    v34 = 0;
    v35 = isFinishedAt;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_58;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                v34,
                                (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v38 = Item;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( type == 22 || type == 12 )
          {
            Instance = (void *)EventEntity__IsOpen_38800820(Item, nowTime, v35, v37);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v30 )
                goto LABEL_58;
              Instance = (void *)EventFilterMaster__TryGetEntity_38812140(v30, &entity, v38->fields.id, 0, v41);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v26 )
                  goto LABEL_58;
                version = v26->fields._version;
                items = v26->fields._items;
                goto LABEL_36;
              }
              Instance = entity;
              if ( !entity )
                goto LABEL_58;
              Instance = (void *)EventFilterEntity__IsOpen(entity, v42);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v45 = entity;
                if ( !entity )
                  goto LABEL_58;
                Instance = (void *)System_String__IsNullOrEmpty(entity->fields.buttonText, 0LL);
                if ( ((unsigned __int8)Instance & 1) == 0
                  && v45->fields.openQuestId >= 1
                  && v45->fields.closeQuestId > 0 )
                {
                  if ( !v29 )
                    goto LABEL_58;
                  v46 = v29->fields._items;
                  v30 = (EventFilterMaster_o *)MasterData_object;
                  v47 = Method_System_Collections_Generic_List_EventEntity__Add__;
                  ++v29->fields._version;
                  if ( !v46 )
                    goto LABEL_58;
                  size = v29->fields._size;
                  if ( (unsigned int)size >= v46->max_length )
                  {
                    v54 = v47[4];
                    v55 = v29;
                    goto LABEL_41;
                  }
                  v49 = &v46->obj.klass + size;
                  v29->fields._size = size + 1;
LABEL_39:
                  v49[4] = (Il2CppClass *)v38;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v38, v43, v44);
                  continue;
                }
                if ( !v26 )
                  goto LABEL_58;
                version = v26->fields._version;
                items = v26->fields._items;
                v30 = (EventFilterMaster_o *)MasterData_object;
LABEL_36:
                v52 = Method_System_Collections_Generic_List_EventEntity__Add__;
                v26->fields._version = version + 1;
                if ( !items )
                  goto LABEL_58;
                v53 = v26->fields._size;
                if ( (unsigned int)v53 >= items->max_length )
                {
                  v54 = v52[4];
                  v55 = v26;
LABEL_41:
                  System_Collections_Generic_List_object___AddWithResize(
                    v55,
                    (Il2CppObject *)v38,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54 + 192) + 112LL));
                  continue;
                }
                v49 = &items->obj.klass + v53;
                v26->fields._size = v53 + 1;
                goto LABEL_39;
              }
            }
          }
        }
      }
    }
    while ( Count != ++v34 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v56 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v56 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v57 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v56 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventEntity__TypeInfo, v31, v32);
    System_Comparison_object____ctor(v56, v57, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventEntity__o *)v56;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v56, v59, v60);
  }
  if ( !v26 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_55243320(
    v26,
    v56,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v63 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v63 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v63 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventEntity__TypeInfo, v61, v62);
    System_Comparison_object____ctor(v63, v64, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0LL);
    v65 = EventMaster___c_TypeInfo->static_fields;
    v65->__9__7_1 = (struct System_Comparison_EventEntity__o *)v63;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v65->__9__7_1, (int32_t)v63, v66, v67);
  }
  if ( !v29 )
LABEL_58:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    v29,
    v63,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v68 = (System_Object_array *)sub_1B64170(
                                 EventEntity___TypeInfo,
                                 (unsigned int)(v29->fields._size + v26->fields._size));
  System_Collections_Generic_List_object___CopyTo_55237764(
    v26,
    v68,
    0,
    (const MethodInfo_34ADC84 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_55237764(
    v29,
    v68,
    v26->fields._size,
    (const MethodInfo_34ADC84 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v68;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_38827872; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11

  EntityList_38827872 = EventMaster__GetEntityList_38827872(this, 24, 1, 1, v2);
  if ( !EntityList_38827872 )
    return -1LL;
  max_length = EntityList_38827872->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_38827872->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B6432C(result, v4);
    v9 = m_Items[v6];
    if ( !v9 )
      sub_1B64324(result);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x21
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x24
  ShopMaster_o *v32; // x25
  int32_t Count; // w0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  int32_t v36; // w26
  int32_t v37; // w27
  EventEntity_o *v38; // x28
  __int64 methodPtr_low; // x10
  const MethodInfo *v40; // x2
  int32_t v41; // w3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_object__o *v50; // x0
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  System_Comparison_T__o *v54; // x22
  Il2CppObject *v55; // x23
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x1
  __int64 v60; // x2
  System_Comparison_T__o *v61; // x22
  Il2CppObject *v62; // x23
  struct EventMaster___c_StaticFields *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x1
  __int64 v67; // x2
  System_Comparison_T__o *v68; // x22
  Il2CppObject *v69; // x23
  struct EventMaster___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  __int64 v73; // x1
  __int64 v74; // x2
  System_Collections_Generic_List_object__o *v75; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FC3FE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&System_Comparison_EventEntity__TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&EventEntity_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v17);
    sub_1B640C8(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v18);
    sub_1B640C8(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v19);
    sub_1B640C8(&EventMaster___c_TypeInfo, v20);
    byte_49FC3FE = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  nowTime = NetworkManager__getTime(0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_63;
  v32 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v36 = Count;
    v37 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_63;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v37,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_63;
      v38 = (EventEntity_o *)Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventEntity_TypeInfo
        || !v32 )
      {
        goto LABEL_63;
      }
      Instance = (void *)ShopMaster__IsEnableEventShop(v32, *((_DWORD *)Instance + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_object )
          goto LABEL_63;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             &entity,
                             v38->fields.id,
                             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_20;
        if ( !entity )
          goto LABEL_63;
        if ( (BYTE4(entity[1].monitor) & 0x40) == 0 )
        {
LABEL_20:
          Instance = (void *)EventEntity__IsOpen(v38, 0, v35);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_63;
            items = v23->fields._items;
            v43 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v49 = v43[4];
              v50 = v23;
LABEL_38:
              System_Collections_Generic_List_object___AddWithResize(
                v50,
                (Il2CppObject *)v38,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49 + 192) + 112LL));
              continue;
            }
            v45 = &items->obj.klass + size;
            v23->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v38, nowTime, v40);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v26 )
                goto LABEL_63;
              v46 = v26->fields._items;
              v47 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v26->fields._version;
              if ( !v46 )
                goto LABEL_63;
              v48 = v26->fields._size;
              if ( (unsigned int)v48 >= v46->max_length )
              {
                v49 = v47[4];
                v50 = v26;
                goto LABEL_38;
              }
              v45 = &v46->obj.klass + v48;
              v26->fields._size = v48 + 1;
            }
            else
            {
              if ( !v29 )
                goto LABEL_63;
              v51 = v29->fields._items;
              v52 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v29->fields._version;
              if ( !v51 )
                goto LABEL_63;
              v53 = v29->fields._size;
              if ( (unsigned int)v53 >= v51->max_length )
              {
                v49 = v52[4];
                v50 = v29;
                goto LABEL_38;
              }
              v45 = &v51->obj.klass + v53;
              v29->fields._size = v53 + 1;
            }
          }
          v45[4] = (Il2CppClass *)v38;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v38, (int32_t)v40, v41);
        }
      }
    }
    while ( v36 != ++v37 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v54 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v54 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v55 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v54 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventEntity__TypeInfo, v34, v35);
    System_Comparison_object____ctor(v54, v55, Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventEntity__o *)v54;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)v54, v57, v58);
  }
  if ( !v23 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_55243320(
    v23,
    v54,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v61 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v61 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v62 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v61 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventEntity__TypeInfo, v59, v60);
    System_Comparison_object____ctor(v61, v62, Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, 0LL);
    v63 = EventMaster___c_TypeInfo->static_fields;
    v63->__9__22_1 = (struct System_Comparison_EventEntity__o *)v61;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v63->__9__22_1, (int32_t)v61, v64, v65);
  }
  if ( !v26 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_55243320(
    v26,
    v61,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v68 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v68 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v69 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v68 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventEntity__TypeInfo, v66, v67);
    System_Comparison_object____ctor(v68, v69, Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, 0LL);
    v70 = EventMaster___c_TypeInfo->static_fields;
    v70->__9__22_2 = (struct System_Comparison_EventEntity__o *)v68;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->__9__22_2, (int32_t)v68, v71, v72);
  }
  if ( !v29
    || (System_Collections_Generic_List_object___Sort_55243320(
          v29,
          v68,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v75 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_EventEntity__TypeInfo,
                                                             v73,
                                                             v74),
        System_Collections_Generic_List_object____ctor(
          v75,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v75) )
  {
LABEL_63:
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___AddRange(
    v75,
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v75,
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v75,
    (System_Collections_Generic_IEnumerable_T__o *)v29,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v75,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_49FC3F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FC3F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_38827872; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_49FC3F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FC3F6 = 1;
  }
  EntityList_38827872 = EventMaster__GetEntityList_38827872(this, 12, 1, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_38827872 )
    goto LABEL_15;
  max_length = EntityList_38827872->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B6432C(Instance, v8);
      v12 = EntityList_38827872->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( ((__int64)Instance[1].monitor & 0x40) != 0 )
        return id;
      max_length = EntityList_38827872->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1B64324(Instance);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_49FC3F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FC3F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  void *EntityList_38827872; // x0
  System_Collections_Generic_List_object__o *v13; // x19
  __int64 v14; // x2
  const MethodInfo *v15; // x4
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  v3 = types;
  if ( (byte_49FC3F5 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventEntity__TypeInfo, types);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__Sort__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_EventEntity__TypeInfo, v8);
    sub_1B640C8(&GameEventType_TYPE___TypeInfo, v9);
    sub_1B640C8(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v10);
    sub_1B640C8(&EventMaster___c_TypeInfo, v11);
    byte_49FC3F5 = 1;
  }
  if ( !v3 )
  {
    EntityList_38827872 = (void *)sub_1B64170(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_38827872 )
      goto LABEL_20;
    v3 = (GameEventType_TYPE_array *)EntityList_38827872;
    if ( !*((_DWORD *)EntityList_38827872 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_38827872 + 8) = 12;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventEntity__TypeInfo,
                                                       types,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v16 = *(_QWORD *)&v3->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( v17 < (unsigned int)v16 )
    {
      EntityList_38827872 = EventMaster__GetEntityList_38827872(this, v3->m_Items[v17 + 1], 0, 1, v15);
      if ( !v13 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v13,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_38827872,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v16) = v3->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_12;
    }
LABEL_21:
    sub_1B6432C(EntityList_38827872, types);
  }
LABEL_12:
  EntityList_38827872 = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_38827872 = EventMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)EntityList_38827872 + 23) + 24LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)EntityList_38827872 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_38827872);
      EntityList_38827872 = EventMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)EntityList_38827872 + 23);
    v18 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventEntity__TypeInfo, types, v14);
    System_Comparison_object____ctor(v18, v19, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventEntity__o *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)v18, v21, v22);
  }
  if ( !v13 )
LABEL_20:
    sub_1B64324(EntityList_38827872);
  System_Collections_Generic_List_object___Sort_55243320(
    v13,
    v18,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v13;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_38827872; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v11; // x21
  __int64 v12; // x1
  int max_length; // w8
  bool v14; // w24
  QuestMaster_o *v15; // x22
  int v16; // w25
  EventEntity_o *v17; // x8
  int32_t id; // w23

  if ( (byte_49FC3F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FC3F8 = 1;
  }
  EntityList_38827872 = EventMaster__GetEntityList_38827872(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v11 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_38827872 )
    goto LABEL_19;
  max_length = EntityList_38827872->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (QuestMaster_o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1B6432C(Instance, v12);
      v17 = EntityList_38827872->m_Items[v16];
      if ( !v17 )
        break;
      if ( !MasterData_object )
        break;
      id = v17->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance->fields.m_CancellationTokenSource) & 0x10) != 0 )
      {
        if ( !v11 )
          break;
        Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId((QuestGroupMaster_o *)v11, id, 1, 0LL);
        if ( !v15 )
          break;
        Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                      v15,
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v14;
      }
      max_length = EntityList_38827872->max_length;
      v14 = ++v16 < max_length;
      if ( v16 >= max_length )
        return v14;
    }
LABEL_19:
    sub_1B64324(Instance);
  }
  return v14;
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  const MethodInfo *v7; // x3

  if ( (byte_49FC3F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime);
    byte_49FC3F9 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_1B64324(0LL);
  return EventEntity__IsOpen_38800820((EventEntity_o *)Entity, checkTime, 0, v7);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_38827872; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w23
  EventEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FC3FB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, flag);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FC3FB = 1;
  }
  entity = 0LL;
  EntityList_38827872 = EventMaster__GetEntityList_38827872(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_38827872 )
    goto LABEL_15;
  max_length = EntityList_38827872->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B6432C(Instance, v10);
      v15 = EntityList_38827872->m_Items[v14];
      if ( !v15 || !v13 )
        break;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   v15->fields.id,
                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_19;
      if ( !entity )
        break;
      if ( ((int64_t)entity[1].monitor & flag) == 0 )
      {
LABEL_19:
        max_length = EntityList_38827872->max_length;
        v12 = ++v14 < max_length;
        if ( v14 < max_length )
          continue;
      }
      return v12;
    }
LABEL_15:
    sub_1B64324(Instance);
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

  if ( (byte_49FC403 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, *(_QWORD *)&eventId);
    byte_49FC403 = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
  __int64 v9; // x1
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  bool v17; // w29
  EventEntity_o *v18; // x25
  __int64 methodPtr_low; // x10
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FC3FF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&EventEntity_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FC3FF = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                    (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v18 = (EventEntity_o *)Instance;
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
      if ( !v13 )
        break;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    v13,
                                    &entity,
                                    v18->fields.id,
                                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( (BYTE4(entity[1].monitor) & 0x40) != 0 )
          goto LABEL_30;
      }
      if ( !EventEntity__IsOpen(v18, 0, v20) && !EventEntity__IsExchangePeriod(v18, Time, v22)
        || EventEntity__IsClosePurchaseShop(v18, v21) )
      {
LABEL_30:
        v17 = ++v16 < v15;
        if ( v15 != v16 )
          continue;
      }
      return v17;
    }
LABEL_27:
    sub_1B64324(Instance);
  }
  return 0;
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_38827872; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w24
  EventEntity_o *v15; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FC401 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FC401 = 1;
  }
  entity = 0LL;
  EntityList_38827872 = EventMaster__GetEntityList_38827872(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_38827872) )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  max_length = EntityList_38827872->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B6432C(Instance, v10);
      v15 = EntityList_38827872->m_Items[v14];
      if ( !v15 || !v13 )
        goto LABEL_17;
      id = v15->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   id,
                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( (BYTE2(entity[1].monitor) & 0x10) != 0 )
          break;
      }
      max_length = EntityList_38827872->max_length;
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
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_38827872; // x0

  EntityList_38827872 = EventMaster__GetEntityList_38827872(this, 24, 1, 1, v2);
  if ( EntityList_38827872 )
    LOBYTE(EntityList_38827872) = EntityList_38827872->max_length != 0;
  return (char)EntityList_38827872;
}


bool __fastcall EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


System_Int32_array *__fastcall EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  void *list; // x0
  int v12; // w21
  int32_t v13; // w22
  __int64 methodPtr_low; // x10
  int32_t v15; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_49FC3EC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&EventEntity_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_49FC3EC = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
        {
          if ( !v10 )
            break;
          v15 = *((_DWORD *)list + 4);
          items = v10->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              v15,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = size + 1;
            items->m_Items[size + 1] = v15;
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B64324(list);
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMaster__getMyRoomBgImgId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w20
  int32_t myroomBgId; // w21
  int32_t v9; // w22
  EventEntity_o *Item; // x0
  const MethodInfo *v11; // x2
  EventEntity_o *v12; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_49FC3F3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&EventEntity_TypeInfo, v4);
    byte_49FC3F3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    myroomBgId = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v9,
                                (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo
          && Item->fields.myroomBgId >= 1
          && EventEntity__IsOpen(Item, 0, v11) )
        {
          myroomBgId = v12->fields.myroomBgId;
        }
      }
      if ( v7 == ++v9 )
        return myroomBgId;
    }
LABEL_17:
    sub_1B64324(list);
  }
  return 0;
}


int32_t __fastcall EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_49FC3F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&EventEntity_TypeInfo, v3);
    sub_1B640C8(&System_IDisposable_TypeInfo, v4);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v6);
    byte_49FC3F4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1B64324(list);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v17 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                             Enumerator,
                             *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( v18 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEntity_TypeInfo )
      {
        sub_1B645E4(v18);
        goto LABEL_33;
      }
      if ( v18->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v18, 0, v19) )
        myroomBgmId = v20->fields.myroomBgmId;
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC406 & 1) == 0 )
  {
    sub_1B640C8(&EventMaster___c_TypeInfo, v1);
    byte_49FC406 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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