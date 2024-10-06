void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FE45 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, method);
    byte_4A6FE45 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    67,
    (const MethodInfo_312C568 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_39201736; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_4A6FE51 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A6FE51 = 1;
  }
  EntityList_39201736 = EventMaster__GetEntityList_39201736(this, 12, 1, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_39201736 )
    goto LABEL_15;
  max_length = EntityList_39201736->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B90274(Instance, v8);
      v12 = EntityList_39201736->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance[1].monitor) & 0x10) != 0 )
        return id;
      max_length = EntityList_39201736->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1B9026C(Instance, v8);
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
  const MethodInfo *v7; // x4
  int64_t EntityList_39201736; // x0
  __int64 v9; // x1
  int v10; // w8
  int64_t v11; // x20
  unsigned int v12; // w22
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A6FE5C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__Add__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity___ctor__, v3);
    sub_1B90010(&System_Collections_Generic_List_EventEntity__TypeInfo, v4);
    sub_1B90010(&NetworkManager_TypeInfo, v5);
    byte_4A6FE5C = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_39201736 = (int64_t)EventMaster__GetEntityList_39201736(this, 23, 0, 1, v7);
  if ( !EntityList_39201736 )
    goto LABEL_18;
  v10 = *(_DWORD *)(EntityList_39201736 + 24);
  v11 = EntityList_39201736;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1B90274(EntityList_39201736, v9);
      v13 = *(Il2CppObject **)(v11 + 8LL * (int)v12 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityList_39201736 = NetworkManager__getTime(0LL);
      if ( !v13 )
        break;
      if ( EntityList_39201736 >= (__int64)v13[5].monitor )
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
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v13;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
        }
      }
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_EventEntity__o *)v6;
    }
LABEL_18:
    sub_1B9026C(EntityList_39201736, v9);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v6;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return EventMaster__GetEntityList_39201736(this, eventType, 1, isFinishedAt, v4);
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
  EventEntity_array *EntityList_39201736; // x0
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

  if ( (byte_4A6FE47 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity____Add__, eventTypes);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v7);
    sub_1B90010(&System_Collections_Generic_List_EventEntity____TypeInfo, v8);
    byte_4A6FE47 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
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
        sub_1B90274(EntityList_39201736, v11);
      EntityList_39201736 = EventMaster__GetEntityList_39201736(this, eventTypes->m_Items[v14 + 1], 1, v15, v12);
      if ( !v9 )
        break;
      items = v9->fields._items;
      v19 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      v21 = EntityList_39201736;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          &EntityList_39201736->obj,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v21;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
      }
      LODWORD(v13) = eventTypes->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        return (System_Collections_Generic_List_EventEntity____o *)v9;
    }
LABEL_14:
    sub_1B9026C(EntityList_39201736, v11);
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
  System_Collections_Generic_List_object__o *v12; // x20
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  EventRewardSceneMaster_o *v15; // x21
  int v16; // w22
  int32_t v17; // w23
  const MethodInfo *v18; // x2
  DataManager_o *v19; // x24
  __int64 methodPtr_low; // x10
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4A6FE5A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v4);
    sub_1B90010(&EventEntity_TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_EventEntity__TypeInfo, v9);
    sub_1B90010(&NetworkManager_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A6FE5A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v15 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v16 = (int)Instance;
    v17 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v17,
                                    (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v19 = Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, v18);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v15 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v15, v19->fields.m_CachedPtr, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.m_CancellationTokenSource )
          {
            if ( !v12 )
              break;
            items = v12->fields._items;
            v24 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v19,
                *(const MethodInfo_35109C0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v19;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
            }
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B9026C(Instance, v14);
  }
LABEL_23:
  if ( !v12 )
    goto LABEL_25;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v12,
                                (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventMaster__GetEntityList_39201736(this, 24, 1, 1, v2);
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
  __int64 v17; // x1
  void *list; // x0
  int v19; // w24
  int32_t v20; // w25
  EventEntity_o *v21; // x26
  __int64 methodPtr_low; // x10
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4A6FE48 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B90010(&EventEntity_TypeInfo, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Remove__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_1B90010(&System_Collections_Generic_List_EventEntity__TypeInfo, v15);
    byte_4A6FE48 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v19 = (int)list;
    v20 = 0;
    do
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_26;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = (EventEntity_o *)list;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
        {
          if ( !ids )
            goto LABEL_26;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_34F4E98 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v21->fields.type == eventType) )
          {
            if ( checkTime )
            {
              list = (void *)EventEntity__IsOpen_39174676(v21, checkTime, 1, v24);
              if ( ((unsigned __int8)list & 1) == 0 )
                continue;
            }
            else
            {
              list = (void *)EventEntity__IsOpen(v21, 1, v23);
              if ( ((unsigned __int8)list & 1) == 0 )
                continue;
            }
            if ( !v16 )
              goto LABEL_26;
            items = v16->fields._items;
            v28 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              goto LABEL_26;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)v21,
                *(const MethodInfo_35109C0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v21;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v21, v25, v26);
            }
          }
        }
      }
    }
    while ( v19 != ++v20 );
  }
  if ( !v16 )
LABEL_26:
    sub_1B9026C(list, v17);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v16,
                                (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventMaster__GetEntityList_39201736(this, eventType, 0, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_39201736(
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
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v18; // w23
  int32_t v19; // w24
  bool v20; // w25
  const MethodInfo *v21; // x2
  int32_t v22; // w3
  Il2CppObject *v23; // x26
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  v6 = isOpenGet;
  if ( (byte_4A6FE49 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B90010(&EventEntity_TypeInfo, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_1B90010(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_4A6FE49 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    v19 = 0;
    v20 = isFinishedAt;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v19,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(list[1].klass) == eventType) )
        {
          if ( !v6
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsOpen(
                                                                           (EventEntity_o *)list,
                                                                           v20,
                                                                           v21),
                (((unsigned int)list | !v6) & 1) != 0) )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v26 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v23,
                *(const MethodInfo_35109C0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v23;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v23, (int32_t)v21, v22);
            }
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B9026C(list, v16);
  }
LABEL_21:
  if ( !v15 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v15,
                                (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A6FE5F & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    byte_4A6FE5F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_312C5FC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_1B9026C(Master_object, v7);
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

  if ( (byte_4A6FE56 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1B90010(&StringLiteral_1/*""*/, v5);
    byte_4A6FE56 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_312C5FC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1B9026C(v6, v7);
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

  if ( (byte_4A6FE57 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1B90010(&StringLiteral_1/*""*/, v5);
    byte_4A6FE57 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_312C5FC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1B9026C(v6, v7);
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

  if ( (byte_4A6FE5E & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    byte_4A6FE5E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
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

  if ( (byte_4A6FE54 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int___ctor__, v8);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1B90010(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4A6FE54 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[6].monitor, v15);
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B9025C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_33C53C4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
          sub_1B90274(Instance, v14);
        v21 = FilterEnableEntityList->m_Items[v20];
        if ( !v21 )
          break;
        if ( !v19 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v19,
                     v21->fields.id,
                     (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( ((__int64)Instance[1].monitor & 0x10) != 0 )
        {
          if ( !v17 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v17,
                                       v21->fields.id,
                                       (const MethodInfo_33C65C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_1B9026C(Instance, v14);
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
  __int64 v22; // x1
  void *Instance; // x0
  const MethodInfo *v24; // x1
  System_Collections_Generic_List_object__o *v25; // x19
  System_Collections_Generic_List_object__o *v26; // x20
  EventFilterMaster_o *v27; // x23
  int32_t Count; // w24
  int32_t v29; // w25
  bool v30; // w26
  EventEntity_o *Item; // x0
  const MethodInfo *v32; // x3
  EventEntity_o *v33; // x27
  __int64 methodPtr_low; // x10
  int32_t type; // w8
  const MethodInfo *v36; // x4
  int32_t v37; // w2
  int32_t v38; // w3
  EventFilterEntity_o *v39; // x23
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  System_Collections_Generic_List_object__o *v49; // x0
  System_Comparison_T__o *v50; // x21
  Il2CppObject *v51; // x22
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Comparison_T__o *v55; // x21
  Il2CppObject *v56; // x22
  struct EventMaster___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Object_array *v60; // x21
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-70h]
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6FE4A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isFinishedAt);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B90010(&System_Comparison_EventEntity__TypeInfo, v8);
    sub_1B90010(&Method_DataManager_GetMasterData_EventFilterMaster___, v9);
    sub_1B90010(&EventEntity___TypeInfo, v10);
    sub_1B90010(&EventEntity_TypeInfo, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__Add__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__Sort__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity___ctor__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v16);
    sub_1B90010(&System_Collections_Generic_List_EventEntity__TypeInfo, v17);
    sub_1B90010(&NetworkManager_TypeInfo, v18);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B90010(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v20);
    sub_1B90010(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v21);
    sub_1B90010(&EventMaster___c_TypeInfo, v22);
    byte_4A6FE4A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_58;
  v27 = (EventFilterMaster_o *)MasterData_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  if ( Count >= 1 )
  {
    v29 = 0;
    v30 = isFinishedAt;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_58;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                v29,
                                (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v33 = Item;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( type == 22 || type == 12 )
          {
            Instance = (void *)EventEntity__IsOpen_39174676(Item, nowTime, v30, v32);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v27 )
                goto LABEL_58;
              Instance = (void *)EventFilterMaster__TryGetEntity_39186000(v27, &entity, v33->fields.id, 0, v36);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v25 )
                  goto LABEL_58;
                version = v25->fields._version;
                items = v25->fields._items;
                goto LABEL_36;
              }
              Instance = entity;
              if ( !entity )
                goto LABEL_58;
              Instance = (void *)EventFilterEntity__IsOpen(entity, v24);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v39 = entity;
                if ( !entity )
                  goto LABEL_58;
                Instance = (void *)System_String__IsNullOrEmpty(entity->fields.buttonText, 0LL);
                if ( ((unsigned __int8)Instance & 1) == 0
                  && v39->fields.openQuestId >= 1
                  && v39->fields.closeQuestId > 0 )
                {
                  if ( !v26 )
                    goto LABEL_58;
                  v40 = v26->fields._items;
                  v27 = (EventFilterMaster_o *)MasterData_object;
                  v41 = Method_System_Collections_Generic_List_EventEntity__Add__;
                  ++v26->fields._version;
                  if ( !v40 )
                    goto LABEL_58;
                  size = v26->fields._size;
                  if ( (unsigned int)size >= v40->max_length )
                  {
                    v48 = v41[4];
                    v49 = v26;
                    goto LABEL_41;
                  }
                  v43 = &v40->obj.klass + size;
                  v26->fields._size = size + 1;
LABEL_39:
                  v43[4] = (Il2CppClass *)v33;
                  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v33, v37, v38);
                  continue;
                }
                if ( !v25 )
                  goto LABEL_58;
                version = v25->fields._version;
                items = v25->fields._items;
                v27 = (EventFilterMaster_o *)MasterData_object;
LABEL_36:
                v46 = Method_System_Collections_Generic_List_EventEntity__Add__;
                v25->fields._version = version + 1;
                if ( !items )
                  goto LABEL_58;
                v47 = v25->fields._size;
                if ( (unsigned int)v47 >= items->max_length )
                {
                  v48 = v46[4];
                  v49 = v25;
LABEL_41:
                  System_Collections_Generic_List_object___AddWithResize(
                    v49,
                    (Il2CppObject *)v33,
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v48 + 192) + 112LL));
                  continue;
                }
                v43 = &items->obj.klass + v47;
                v25->fields._size = v47 + 1;
                goto LABEL_39;
              }
            }
          }
        }
      }
    }
    while ( Count != ++v29 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v50 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v50 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v50 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v50, v51, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventEntity__o *)v50;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v50, v53, v54);
  }
  if ( !v25 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_55649412(
    v25,
    v50,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v55 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v55 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v56 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v55 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v55, v56, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0LL);
    v57 = EventMaster___c_TypeInfo->static_fields;
    v57->__9__7_1 = (struct System_Comparison_EventEntity__o *)v55;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v57->__9__7_1, (int32_t)v55, v58, v59);
  }
  if ( !v26 )
LABEL_58:
    sub_1B9026C(Instance, v24);
  System_Collections_Generic_List_object___Sort_55649412(
    v26,
    v55,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v60 = (System_Object_array *)sub_1B900B8(
                                 EventEntity___TypeInfo,
                                 (unsigned int)(v26->fields._size + v25->fields._size));
  System_Collections_Generic_List_object___CopyTo_55644016(
    v25,
    v60,
    0,
    (const MethodInfo_3510F70 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_55644016(
    v26,
    v60,
    v25->fields._size,
    (const MethodInfo_3510F70 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v60;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_39201736; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11

  EntityList_39201736 = EventMaster__GetEntityList_39201736(this, 24, 1, 1, v2);
  if ( !EntityList_39201736 )
    return -1LL;
  max_length = EntityList_39201736->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_39201736->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B90274(result, v4);
    v9 = m_Items[v6];
    if ( !v9 )
      sub_1B9026C(result, v4);
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
  System_Collections_Generic_List_object__o *v21; // x19
  System_Collections_Generic_List_object__o *v22; // x20
  System_Collections_Generic_List_object__o *v23; // x21
  void *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x24
  ShopMaster_o *v27; // x25
  int32_t Count; // w0
  int32_t v29; // w26
  int32_t v30; // w27
  EventEntity_o *v31; // x28
  __int64 methodPtr_low; // x10
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_object__o *v44; // x0
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  System_Comparison_T__o *v48; // x22
  Il2CppObject *v49; // x23
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Comparison_T__o *v53; // x22
  Il2CppObject *v54; // x23
  struct EventMaster___c_StaticFields *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_Comparison_T__o *v58; // x22
  Il2CppObject *v59; // x23
  struct EventMaster___c_StaticFields *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_Collections_Generic_List_object__o *v63; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6FE58 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&System_Comparison_EventEntity__TypeInfo, v4);
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1B90010(&EventEntity_TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__Sort__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_1B90010(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    sub_1B90010(&NetworkManager_TypeInfo, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B90010(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v17);
    sub_1B90010(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v18);
    sub_1B90010(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v19);
    sub_1B90010(&EventMaster___c_TypeInfo, v20);
    byte_4A6FE58 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  nowTime = NetworkManager__getTime(0LL);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_63;
  v27 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_63;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v30,
                   (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_63;
      v31 = (EventEntity_o *)Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventEntity_TypeInfo
        || !v27 )
      {
        goto LABEL_63;
      }
      Instance = (void *)ShopMaster__IsEnableEventShop(v27, *((_DWORD *)Instance + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_object )
          goto LABEL_63;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             &entity,
                             v31->fields.id,
                             (const MethodInfo_312C5FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_20;
        if ( !entity )
          goto LABEL_63;
        if ( (BYTE4(entity[1].monitor) & 0x40) == 0 )
        {
LABEL_20:
          Instance = (void *)EventEntity__IsOpen(v31, 0, v33);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_63;
            items = v21->fields._items;
            v37 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v43 = v37[4];
              v44 = v21;
LABEL_38:
              System_Collections_Generic_List_object___AddWithResize(
                v44,
                (Il2CppObject *)v31,
                *(const MethodInfo_35109C0 **)(*(_QWORD *)(v43 + 192) + 112LL));
              continue;
            }
            v39 = &items->obj.klass + size;
            v21->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v31, nowTime, v34);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_63;
              v40 = v22->fields._items;
              v41 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v22->fields._version;
              if ( !v40 )
                goto LABEL_63;
              v42 = v22->fields._size;
              if ( (unsigned int)v42 >= v40->max_length )
              {
                v43 = v41[4];
                v44 = v22;
                goto LABEL_38;
              }
              v39 = &v40->obj.klass + v42;
              v22->fields._size = v42 + 1;
            }
            else
            {
              if ( !v23 )
                goto LABEL_63;
              v45 = v23->fields._items;
              v46 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v23->fields._version;
              if ( !v45 )
                goto LABEL_63;
              v47 = v23->fields._size;
              if ( (unsigned int)v47 >= v45->max_length )
              {
                v43 = v46[4];
                v44 = v23;
                goto LABEL_38;
              }
              v39 = &v45->obj.klass + v47;
              v23->fields._size = v47 + 1;
            }
          }
          v39[4] = (Il2CppClass *)v31;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v31, (int32_t)v34, v35);
        }
      }
    }
    while ( v29 != ++v30 );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v48 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v48 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v49 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v48 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v48, v49, Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventEntity__o *)v48;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)v48, v51, v52);
  }
  if ( !v21 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_55649412(
    v21,
    v48,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v53 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v53 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v54 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v53 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v53, v54, Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, 0LL);
    v55 = EventMaster___c_TypeInfo->static_fields;
    v55->__9__22_1 = (struct System_Comparison_EventEntity__o *)v53;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v55->__9__22_1, (int32_t)v53, v56, v57);
  }
  if ( !v22 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_55649412(
    v22,
    v53,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v58 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v58 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v59 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v58 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v58, v59, Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, 0LL);
    v60 = EventMaster___c_TypeInfo->static_fields;
    v60->__9__22_2 = (struct System_Comparison_EventEntity__o *)v58;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v60->__9__22_2, (int32_t)v58, v61, v62);
  }
  if ( !v23
    || (System_Collections_Generic_List_object___Sort_55649412(
          v23,
          v58,
          (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v63 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v63,
          (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v63) )
  {
LABEL_63:
    sub_1B9026C(Instance, v25);
  }
  System_Collections_Generic_List_object___AddRange(
    v63,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v63,
    (System_Collections_Generic_IEnumerable_T__o *)v22,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v63,
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v63,
                                (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A6FE4B & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A6FE4B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1B9026C(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  EventEntity_array *EntityList_39201736; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_4A6FE50 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A6FE50 = 1;
  }
  EntityList_39201736 = EventMaster__GetEntityList_39201736(this, 12, 1, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_39201736 )
    goto LABEL_15;
  max_length = EntityList_39201736->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B90274(Instance, v8);
      v12 = EntityList_39201736->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( ((__int64)Instance[1].monitor & 0x40) != 0 )
        return id;
      max_length = EntityList_39201736->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1B9026C(Instance, v8);
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

  if ( (byte_4A6FE4C & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A6FE4C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1B9026C(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  void *EntityList_39201736; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  const MethodInfo *v15; // x4
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  v3 = types;
  if ( (byte_4A6FE4F & 1) == 0 )
  {
    sub_1B90010(&System_Comparison_EventEntity__TypeInfo, types);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity__Sort__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_EventEntity___ctor__, v7);
    sub_1B90010(&System_Collections_Generic_List_EventEntity__TypeInfo, v8);
    sub_1B90010(&GameEventType_TYPE___TypeInfo, v9);
    sub_1B90010(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v10);
    sub_1B90010(&EventMaster___c_TypeInfo, v11);
    byte_4A6FE4F = 1;
  }
  if ( !v3 )
  {
    EntityList_39201736 = (void *)sub_1B900B8(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_39201736 )
      goto LABEL_20;
    v3 = (GameEventType_TYPE_array *)EntityList_39201736;
    if ( !*((_DWORD *)EntityList_39201736 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_39201736 + 8) = 12;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v16 = *(_QWORD *)&v3->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( v17 < (unsigned int)v16 )
    {
      EntityList_39201736 = EventMaster__GetEntityList_39201736(this, v3->m_Items[v17 + 1], 0, 1, v15);
      if ( !v14 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_39201736,
        (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v16) = v3->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_12;
    }
LABEL_21:
    sub_1B90274(EntityList_39201736, v13);
  }
LABEL_12:
  EntityList_39201736 = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_39201736 = EventMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)EntityList_39201736 + 23) + 24LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)EntityList_39201736 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_39201736);
      EntityList_39201736 = EventMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)EntityList_39201736 + 23);
    v18 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventEntity__o *)v18;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)v18, v21, v22);
  }
  if ( !v14 )
LABEL_20:
    sub_1B9026C(EntityList_39201736, v13);
  System_Collections_Generic_List_object___Sort_55649412(
    v14,
    v18,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v14;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_39201736; // x19
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

  if ( (byte_4A6FE52 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B90010(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1B90010(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A6FE52 = 1;
  }
  EntityList_39201736 = EventMaster__GetEntityList_39201736(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v12 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_39201736 )
    goto LABEL_19;
  max_length = EntityList_39201736->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (QuestMaster_o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1B90274(Instance, v10);
      v17 = EntityList_39201736->m_Items[v16];
      if ( !v17 )
        break;
      if ( !MasterData_object )
        break;
      id = v17->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
      max_length = EntityList_39201736->max_length;
      v14 = ++v16 < max_length;
      if ( v16 >= max_length )
        return v14;
    }
LABEL_19:
    sub_1B9026C(Instance, v10);
  }
  return v14;
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4A6FE53 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime);
    byte_4A6FE53 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_1B9026C(0LL, v7);
  return EventEntity__IsOpen_39174676((EventEntity_o *)Entity, checkTime, 0, v8);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_39201736; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w23
  EventEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A6FE55 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, flag);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A6FE55 = 1;
  }
  entity = 0LL;
  EntityList_39201736 = EventMaster__GetEntityList_39201736(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_39201736 )
    goto LABEL_15;
  max_length = EntityList_39201736->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B90274(Instance, v10);
      v15 = EntityList_39201736->m_Items[v14];
      if ( !v15 || !v13 )
        break;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   v15->fields.id,
                                   (const MethodInfo_312C5FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_19;
      if ( !entity )
        break;
      if ( ((int64_t)entity[1].monitor & flag) == 0 )
      {
LABEL_19:
        max_length = EntityList_39201736->max_length;
        v12 = ++v14 < max_length;
        if ( v14 < max_length )
          continue;
      }
      return v12;
    }
LABEL_15:
    sub_1B9026C(Instance, v10);
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

  if ( (byte_4A6FE5D & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, *(_QWORD *)&eventId);
    byte_4A6FE5D = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
  const MethodInfo *v12; // x1
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  bool v18; // w29
  EventEntity_o *v19; // x25
  __int64 methodPtr_low; // x10
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6FE59 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1B90010(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B90010(&EventEntity_TypeInfo, v7);
    sub_1B90010(&NetworkManager_TypeInfo, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A6FE59 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    v18 = 1;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v17,
                                    (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v19 = (EventEntity_o *)Instance;
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
      if ( !v14 )
        break;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    v14,
                                    &entity,
                                    v19->fields.id,
                                    (const MethodInfo_312C5FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( (BYTE4(entity[1].monitor) & 0x40) != 0 )
          goto LABEL_30;
      }
      if ( !EventEntity__IsOpen(v19, 0, v21) && !EventEntity__IsExchangePeriod(v19, Time, v22)
        || EventEntity__IsClosePurchaseShop(v19, v12) )
      {
LABEL_30:
        v18 = ++v17 < v16;
        if ( v16 != v17 )
          continue;
      }
      return v18;
    }
LABEL_27:
    sub_1B9026C(Instance, v12);
  }
  return 0;
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_39201736; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w24
  EventEntity_o *v15; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A6FE5B & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A6FE5B = 1;
  }
  entity = 0LL;
  EntityList_39201736 = EventMaster__GetEntityList_39201736(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_39201736) )
  {
LABEL_17:
    sub_1B9026C(Instance, v10);
  }
  max_length = EntityList_39201736->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B90274(Instance, v10);
      v15 = EntityList_39201736->m_Items[v14];
      if ( !v15 || !v13 )
        goto LABEL_17;
      id = v15->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   id,
                                   (const MethodInfo_312C5FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( (BYTE2(entity[1].monitor) & 0x10) != 0 )
          break;
      }
      max_length = EntityList_39201736->max_length;
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
  EventEntity_array *EntityList_39201736; // x0

  EntityList_39201736 = EventMaster__GetEntityList_39201736(this, 24, 1, 1, v2);
  if ( EntityList_39201736 )
    LOBYTE(EntityList_39201736) = EntityList_39201736->max_length != 0;
  return (char)EntityList_39201736;
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
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v12; // w21
  int32_t v13; // w22
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4A6FE46 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&EventEntity_TypeInfo, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4A6FE46 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo )
        {
          if ( !v9 )
            break;
          items_low = LODWORD(list->fields.items);
          items = v9->fields._items;
          v16 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              items_low,
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size + 1] = items_low;
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B9026C(list, items_low);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4A6FE4D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&EventEntity_TypeInfo, v4);
    byte_4A6FE4D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1B9026C(list, method);
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
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  EventEntity_o *v19; // x0
  const MethodInfo *v20; // x2
  EventEntity_o *v21; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4A6FE4E & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B90010(&EventEntity_TypeInfo, v3);
    sub_1B90010(&System_IDisposable_TypeInfo, v4);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v6);
    byte_4A6FE4E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1B9026C(list, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v8);
  myroomBgmId = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                             Enumerator,
                             *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( v19 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEntity_TypeInfo )
      {
        sub_1B9052C(v19);
        goto LABEL_33;
      }
      if ( v19->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v19, 0, v20) )
        myroomBgmId = v21->fields.myroomBgmId;
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6FE60 & 1) == 0 )
  {
    sub_1B90010(&EventMaster___c_TypeInfo, v1);
    byte_4A6FE60 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(EventMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)EventMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B9026C(this, a);
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
    sub_1B9026C(this, a);
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
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, a);
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
    sub_1B9026C(this, a);
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