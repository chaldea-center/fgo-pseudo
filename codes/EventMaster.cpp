void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66B92 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, method);
    byte_4B66B92 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_40073012; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_4B66B9E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B66B9E = 1;
  }
  EntityList_40073012 = EventMaster__GetEntityList_40073012(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_40073012 )
    goto LABEL_15;
  max_length = EntityList_40073012->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1BE4D30(Instance, v8);
      v12 = EntityList_40073012->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance[1].monitor) & 0x10) != 0 )
        return id;
      max_length = EntityList_40073012->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1BE4D28(Instance, v8);
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
  int64_t EntityList_40073012; // x0
  __int64 v9; // x1
  int v10; // w8
  int64_t v11; // x20
  unsigned int v12; // w22
  Il2CppObject *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B66BA9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_List_EventEntity__TypeInfo, v4);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v5);
    byte_4B66BA9 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_40073012 = (int64_t)EventMaster__GetEntityList_40073012(this, 23, 0, 1, 0, v7);
  if ( !EntityList_40073012 )
    goto LABEL_18;
  v10 = *(_DWORD *)(EntityList_40073012 + 24);
  v11 = EntityList_40073012;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1BE4D30(EntityList_40073012, v9);
      v13 = *(Il2CppObject **)(v11 + 8LL * (int)v12 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityList_40073012 = NetworkManager__getTime(0LL);
      if ( !v13 )
        break;
      if ( EntityList_40073012 >= (__int64)v13[5].monitor )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v21 = Method_System_Collections_Generic_List_EventEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v13,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
        }
      }
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_EventEntity__o *)v6;
    }
LABEL_18:
    sub_1BE4D28(EntityList_40073012, v9);
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

  return EventMaster__GetEntityList_40073012(this, eventType, 1, isFinishedAt, isEventTutorialPeriodExtension, v5);
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
  EventEntity_array *EntityList_40073012; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  bool v15; // w22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int64_t v25; // x1
  Il2CppClass **v26; // x0

  if ( (byte_4B66B94 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity____Add__, eventTypes);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_EventEntity____TypeInfo, v8);
    byte_4B66B94 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
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
        sub_1BE4D30(EntityList_40073012, v11);
      EntityList_40073012 = EventMaster__GetEntityList_40073012(this, eventTypes->m_Items[v14 + 1], 1, v15, 0, v12);
      if ( !v9 )
        break;
      items = v9->fields._items;
      v23 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      v25 = (int64_t)EntityList_40073012;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          &EntityList_40073012->obj,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v25;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v25, v16, v17, v18, v19, v20, v21);
      }
      LODWORD(v13) = eventTypes->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        return (System_Collections_Generic_List_EventEntity____o *)v9;
    }
LABEL_14:
    sub_1BE4D28(EntityList_40073012, v11);
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
  int64_t Instance; // x0
  __int64 v14; // x1
  EventRewardSceneMaster_o *v15; // x21
  int v16; // w22
  int32_t v17; // w23
  const MethodInfo *v18; // x2
  int64_t v19; // x24
  __int64 methodPtr_low; // x10
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B66BA7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v4);
    sub_1BE4ACC(&EventEntity_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_EventEntity__TypeInfo, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B66BA7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v15 = (EventRewardSceneMaster_o *)Instance;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
               (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v16 = Instance;
    v17 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v17,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v19 = Instance;
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventEntity_TypeInfo )
      {
        break;
      }
      Instance = EventEntity__IsOpen((EventEntity_o *)Instance, 1, v18);
      if ( (Instance & 1) != 0 )
      {
        if ( !v15 )
          break;
        Instance = (int64_t)EventRewardSceneMaster__GetEntityList(v15, *(_DWORD *)(v19 + 16), 0LL);
        if ( Instance )
        {
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( !v12 )
              break;
            items = v12->fields._items;
            v28 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v19,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v19;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 4), v19, v21, v22, v23, v24, v25, v26);
            }
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1BE4D28(Instance, v14);
  }
LABEL_23:
  if ( !v12 )
    goto LABEL_25;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v12,
                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return EventMaster__GetEntityList_40073012(this, 24, 1, 1, 0, v2);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4B66B95 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&EventEntity_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Remove__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_EventEntity__TypeInfo, v15);
    byte_4B66B95 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                           (const MethodInfo_35D06FC *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v21->fields.type == eventType) )
          {
            if ( checkTime )
            {
              list = (void *)EventEntity__IsOpen_40045264(v21, checkTime, 1, v24);
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
            v32 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              goto LABEL_26;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)v21,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v21;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v21, v25, v26, v27, v28, v29, v30);
            }
          }
        }
      }
    }
    while ( v19 != ++v20 );
  }
  if ( !v16 )
LABEL_26:
    sub_1BE4D28(list, v17);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v16,
                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return EventMaster__GetEntityList_40073012(this, eventType, 0, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_40073012(
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
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x24
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v19; // w25
  int32_t v20; // w26
  const MethodInfo *v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x27
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  v7 = isOpenGet;
  if ( (byte_4B66B96 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10);
    sub_1BE4ACC(&EventEntity_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_EventEntity__TypeInfo, v15);
    byte_4B66B96 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v19 = (int)list;
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v20,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v27 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(list[1].klass) == eventType) )
        {
          if ( !v7
            || (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsOpen(
                                                                           (EventEntity_o *)list,
                                                                           isFinishedAt,
                                                                           v21),
                (((unsigned int)list | !v7) & 1) != 0)
            || isEventTutorialPeriodExtension
            && (list = (System_Collections_ObjectModel_Collection_T__o *)EventEntity__IsTutorialRelease(
                                                                           (EventEntity_o *)v27,
                                                                           isFinishedAt,
                                                                           v21),
                ((unsigned __int8)list & 1) != 0) )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v30 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v27,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v27;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v27, (int64_t)v21, v22, v23, v24, v25, v26);
            }
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1BE4D28(list, v17);
  }
LABEL_24:
  if ( !v16 )
    goto LABEL_26;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v16,
                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B66BAC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    byte_4B66BAC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_1BE4D28(Master_object, v7);
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

  if ( (byte_4B66BA3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v5);
    byte_4B66BA3 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1BE4D28(v6, v7);
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

  if ( (byte_4B66BA4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v5);
    byte_4B66BA4 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1BE4D28(v6, v7);
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

  if ( (byte_4B66BAB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    byte_4B66BAB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
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

  if ( (byte_4B66BA1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4B66BA1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[6].monitor, v15);
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
          sub_1BE4D30(Instance, v14);
        v21 = FilterEnableEntityList->m_Items[v20];
        if ( !v21 )
          break;
        if ( !v19 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v19,
                     v21->fields.id,
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( ((__int64)Instance[1].monitor & 0x10) != 0 )
        {
          if ( !v17 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v17,
                                       v21->fields.id,
                                       (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_1BE4D28(Instance, v14);
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
  void *Instance; // x0
  const MethodInfo *v23; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v25; // x19
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t Count; // w25
  int32_t v28; // w26
  EventEntity_o *Item; // x0
  const MethodInfo *v30; // x3
  EventEntity_o *v31; // x27
  __int64 methodPtr_low; // x10
  int32_t type; // w8
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  EventFilterEntity_o *v42; // x28
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  __int64 v50; // x8
  System_Collections_Generic_List_object__o *v51; // x0
  System_Comparison_T__o *v52; // x21
  Il2CppObject *v53; // x22
  struct EventMaster___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Comparison_T__o *v61; // x21
  Il2CppObject *v62; // x22
  struct EventMaster___c_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Object_array *v70; // x21
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B66B97 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isFinishedAt);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&System_Comparison_EventEntity__TypeInfo, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventFilterMaster___, v8);
    sub_1BE4ACC(&EventEntity___TypeInfo, v9);
    sub_1BE4ACC(&EventEntity_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__Sort__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_EventEntity__TypeInfo, v16);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v19);
    sub_1BE4ACC(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v20);
    sub_1BE4ACC(&EventMaster___c_TypeInfo, v21);
    byte_4B66B97 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_56;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  if ( Count >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_56;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                v28,
                                (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v31 = Item;
        methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( type == 22 || type == 12 )
          {
            Instance = (void *)EventEntity__IsOpen_40045264(Item, nowTime, isFinishedAt, v30);
            if ( ((unsigned __int8)Instance & 1) != 0
              || (Instance = (void *)EventEntity__IsSkillRelease(v31, isFinishedAt, v34),
                  ((unsigned __int8)Instance & 1) != 0) )
            {
              if ( !MasterData_object )
                goto LABEL_56;
              Instance = (void *)EventFilterMaster__TryGetEntity_40057224(
                                   (EventFilterMaster_o *)MasterData_object,
                                   &entity,
                                   v31->fields.id,
                                   0,
                                   v35);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_33;
              Instance = entity;
              if ( !entity )
                goto LABEL_56;
              Instance = (void *)EventFilterEntity__IsOpen(entity, v23);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                break;
            }
          }
        }
      }
LABEL_15:
      if ( Count == ++v28 )
        goto LABEL_41;
    }
    v42 = entity;
    if ( !entity )
      goto LABEL_56;
    Instance = (void *)System_String__IsNullOrEmpty(entity->fields.buttonText, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 || v42->fields.openQuestId < 1 || v42->fields.closeQuestId <= 0 )
    {
LABEL_33:
      if ( !v25 )
        goto LABEL_56;
      items = v25->fields._items;
      v48 = Method_System_Collections_Generic_List_EventEntity__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_56;
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v50 = v48[4];
        v51 = v25;
LABEL_39:
        System_Collections_Generic_List_object___AddWithResize(
          v51,
          (Il2CppObject *)v31,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v50 + 192) + 112LL));
        goto LABEL_15;
      }
      v46 = &items->obj.klass + size;
      v25->fields._size = size + 1;
    }
    else
    {
      if ( !v26 )
        goto LABEL_56;
      v43 = v26->fields._items;
      v44 = Method_System_Collections_Generic_List_EventEntity__Add__;
      ++v26->fields._version;
      if ( !v43 )
        goto LABEL_56;
      v45 = v26->fields._size;
      if ( (unsigned int)v45 >= v43->max_length )
      {
        v50 = v44[4];
        v51 = v26;
        goto LABEL_39;
      }
      v46 = &v43->obj.klass + v45;
      v26->fields._size = v45 + 1;
    }
    v46[4] = (Il2CppClass *)v31;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v31, v36, v37, v38, v39, v40, v41);
    goto LABEL_15;
  }
LABEL_41:
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v52 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v52 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v52 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v52, v53, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventEntity__o *)v52;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v52, v55, v56, v57, v58, v59, v60);
  }
  if ( !v25 )
    goto LABEL_56;
  System_Collections_Generic_List_object___Sort_56548584(
    v25,
    v52,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v61 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v61 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v62 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v61 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v61, v62, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0LL);
    v63 = EventMaster___c_TypeInfo->static_fields;
    v63->__9__7_1 = (struct System_Comparison_EventEntity__o *)v61;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v63->__9__7_1, (int64_t)v61, v64, v65, v66, v67, v68, v69);
  }
  if ( !v26 )
LABEL_56:
    sub_1BE4D28(Instance, v23);
  System_Collections_Generic_List_object___Sort_56548584(
    v26,
    v61,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v70 = (System_Object_array *)sub_1BE4B74(
                                 EventEntity___TypeInfo,
                                 (unsigned int)(v26->fields._size + v25->fields._size));
  System_Collections_Generic_List_object___CopyTo_56543188(
    v25,
    v70,
    0,
    (const MethodInfo_35EC7D4 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_56543188(
    v26,
    v70,
    v25->fields._size,
    (const MethodInfo_35EC7D4 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v70;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_40073012; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11

  EntityList_40073012 = EventMaster__GetEntityList_40073012(this, 24, 1, 1, 0, v2);
  if ( !EntityList_40073012 )
    return -1LL;
  max_length = EntityList_40073012->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_40073012->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1BE4D30(result, v4);
    v9 = m_Items[v6];
    if ( !v9 )
      sub_1BE4D28(result, v4);
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
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  System_Collections_Generic_List_object__o *v48; // x0
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  System_Comparison_T__o *v52; // x22
  Il2CppObject *v53; // x23
  struct EventMaster___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Comparison_T__o *v61; // x22
  Il2CppObject *v62; // x23
  struct EventMaster___c_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Comparison_T__o *v70; // x22
  Il2CppObject *v71; // x23
  struct EventMaster___c_StaticFields *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_List_object__o *v79; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B66BA5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&System_Comparison_EventEntity__TypeInfo, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1BE4ACC(&EventEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v17);
    sub_1BE4ACC(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v18);
    sub_1BE4ACC(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v19);
    sub_1BE4ACC(&EventMaster___c_TypeInfo, v20);
    byte_4B66BA5 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  nowTime = NetworkManager__getTime(0LL);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_63;
  v27 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                   (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                             (const MethodInfo_31FD818 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
            v41 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v47 = v41[4];
              v48 = v21;
LABEL_38:
              System_Collections_Generic_List_object___AddWithResize(
                v48,
                (Il2CppObject *)v31,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v47 + 192) + 112LL));
              continue;
            }
            v43 = &items->obj.klass + size;
            v21->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v31, nowTime, v34);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_63;
              v44 = v22->fields._items;
              v45 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v22->fields._version;
              if ( !v44 )
                goto LABEL_63;
              v46 = v22->fields._size;
              if ( (unsigned int)v46 >= v44->max_length )
              {
                v47 = v45[4];
                v48 = v22;
                goto LABEL_38;
              }
              v43 = &v44->obj.klass + v46;
              v22->fields._size = v46 + 1;
            }
            else
            {
              if ( !v23 )
                goto LABEL_63;
              v49 = v23->fields._items;
              v50 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v23->fields._version;
              if ( !v49 )
                goto LABEL_63;
              v51 = v23->fields._size;
              if ( (unsigned int)v51 >= v49->max_length )
              {
                v47 = v50[4];
                v48 = v23;
                goto LABEL_38;
              }
              v43 = &v49->obj.klass + v51;
              v23->fields._size = v51 + 1;
            }
          }
          v43[4] = (Il2CppClass *)v31;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v31, (int64_t)v34, v35, v36, v37, v38, v39);
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
  v52 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v52 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v52 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v52, v53, Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventEntity__o *)v52;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__22_0, (int64_t)v52, v55, v56, v57, v58, v59, v60);
  }
  if ( !v21 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_56548584(
    v21,
    v52,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
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
    v61 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v61, v62, Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, 0LL);
    v63 = EventMaster___c_TypeInfo->static_fields;
    v63->__9__22_1 = (struct System_Comparison_EventEntity__o *)v61;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v63->__9__22_1, (int64_t)v61, v64, v65, v66, v67, v68, v69);
  }
  if ( !v22 )
    goto LABEL_63;
  System_Collections_Generic_List_object___Sort_56548584(
    v22,
    v61,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v70 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v70 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v71 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v70 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v70, v71, Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, 0LL);
    v72 = EventMaster___c_TypeInfo->static_fields;
    v72->__9__22_2 = (struct System_Comparison_EventEntity__o *)v70;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v72->__9__22_2, (int64_t)v70, v73, v74, v75, v76, v77, v78);
  }
  if ( !v23
    || (System_Collections_Generic_List_object___Sort_56548584(
          v23,
          v70,
          (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v79 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v79,
          (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v79) )
  {
LABEL_63:
    sub_1BE4D28(Instance, v25);
  }
  System_Collections_Generic_List_object___AddRange(
    v79,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v79,
    (System_Collections_Generic_IEnumerable_T__o *)v22,
    (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v79,
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v79,
                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B66B98 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B66B98 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  EventEntity_array *EntityList_40073012; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_4B66B9D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B66B9D = 1;
  }
  EntityList_40073012 = EventMaster__GetEntityList_40073012(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_40073012 )
    goto LABEL_15;
  max_length = EntityList_40073012->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1BE4D30(Instance, v8);
      v12 = EntityList_40073012->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( ((__int64)Instance[1].monitor & 0x40) != 0 )
        return id;
      max_length = EntityList_40073012->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1BE4D28(Instance, v8);
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

  if ( (byte_4B66B99 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B66B99 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  void *EntityList_40073012; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventMaster___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  v3 = types;
  if ( (byte_4B66B9C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_EventEntity__TypeInfo, types);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity__Sort__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_EventEntity__TypeInfo, v8);
    sub_1BE4ACC(&GameEventType_TYPE___TypeInfo, v9);
    sub_1BE4ACC(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v10);
    sub_1BE4ACC(&EventMaster___c_TypeInfo, v11);
    byte_4B66B9C = 1;
  }
  if ( !v3 )
  {
    EntityList_40073012 = (void *)sub_1BE4B74(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_40073012 )
      goto LABEL_20;
    v3 = (GameEventType_TYPE_array *)EntityList_40073012;
    if ( !*((_DWORD *)EntityList_40073012 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_40073012 + 8) = 12;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v16 = *(_QWORD *)&v3->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( v17 < (unsigned int)v16 )
    {
      EntityList_40073012 = EventMaster__GetEntityList_40073012(this, v3->m_Items[v17 + 1], 0, 1, 0, v15);
      if ( !v14 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_40073012,
        (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v16) = v3->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_12;
    }
LABEL_21:
    sub_1BE4D30(EntityList_40073012, v13);
  }
LABEL_12:
  EntityList_40073012 = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_40073012 = EventMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)EntityList_40073012 + 23) + 24LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)EntityList_40073012 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_40073012);
      EntityList_40073012 = EventMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)EntityList_40073012 + 23);
    v18 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventEntity__o *)v18;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)v18, v21, v22, v23, v24, v25, v26);
  }
  if ( !v14 )
LABEL_20:
    sub_1BE4D28(EntityList_40073012, v13);
  System_Collections_Generic_List_object___Sort_56548584(
    v14,
    v18,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v14;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_40073012; // x19
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

  if ( (byte_4B66B9F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B66B9F = 1;
  }
  EntityList_40073012 = EventMaster__GetEntityList_40073012(this, 12, 1, 0, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v12 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_40073012 )
    goto LABEL_19;
  max_length = EntityList_40073012->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (QuestMaster_o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1BE4D30(Instance, v10);
      v17 = EntityList_40073012->m_Items[v16];
      if ( !v17 )
        break;
      if ( !MasterData_object )
        break;
      id = v17->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
      max_length = EntityList_40073012->max_length;
      v14 = ++v16 < max_length;
      if ( v16 >= max_length )
        return v14;
    }
LABEL_19:
    sub_1BE4D28(Instance, v10);
  }
  return v14;
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4B66BA0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime);
    byte_4B66BA0 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_1BE4D28(0LL, v7);
  return EventEntity__IsOpen_40045264((EventEntity_o *)Entity, checkTime, 0, v8);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_40073012; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w23
  EventEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B66BA2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, flag);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B66BA2 = 1;
  }
  entity = 0LL;
  EntityList_40073012 = EventMaster__GetEntityList_40073012(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_40073012 )
    goto LABEL_15;
  max_length = EntityList_40073012->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1BE4D30(Instance, v10);
      v15 = EntityList_40073012->m_Items[v14];
      if ( !v15 || !v13 )
        break;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   v15->fields.id,
                                   (const MethodInfo_31FD818 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_19;
      if ( !entity )
        break;
      if ( ((int64_t)entity[1].monitor & flag) == 0 )
      {
LABEL_19:
        max_length = EntityList_40073012->max_length;
        v12 = ++v14 < max_length;
        if ( v14 < max_length )
          continue;
      }
      return v12;
    }
LABEL_15:
    sub_1BE4D28(Instance, v10);
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

  if ( (byte_4B66BAA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, *(_QWORD *)&eventId);
    byte_4B66BAA = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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

  if ( (byte_4B66BA6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1BE4ACC(&EventEntity_TypeInfo, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B66BA6 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                    (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                                    (const MethodInfo_31FD818 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
    sub_1BE4D28(Instance, v12);
  }
  return 0;
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_40073012; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w24
  EventEntity_o *v15; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B66BA8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B66BA8 = 1;
  }
  entity = 0LL;
  EntityList_40073012 = EventMaster__GetEntityList_40073012(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_40073012) )
  {
LABEL_17:
    sub_1BE4D28(Instance, v10);
  }
  max_length = EntityList_40073012->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1BE4D30(Instance, v10);
      v15 = EntityList_40073012->m_Items[v14];
      if ( !v15 || !v13 )
        goto LABEL_17;
      id = v15->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   id,
                                   (const MethodInfo_31FD818 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( (BYTE2(entity[1].monitor) & 0x10) != 0 )
          break;
      }
      max_length = EntityList_40073012->max_length;
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
  EventEntity_array *EntityList_40073012; // x0

  EntityList_40073012 = EventMaster__GetEntityList_40073012(this, 24, 1, 1, 0, v2);
  if ( EntityList_40073012 )
    LOBYTE(EntityList_40073012) = EntityList_40073012->max_length != 0;
  return (char)EntityList_40073012;
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

  if ( (byte_4B66B93 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&EventEntity_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4B66B93 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
    sub_1BE4D28(list, items_low);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B66B9A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&EventEntity_TypeInfo, v4);
    byte_4B66B9A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1BE4D28(list, method);
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

  if ( (byte_4B66B9B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BE4ACC(&EventEntity_TypeInfo, v3);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v4);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v6);
    byte_4B66B9B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1BE4D28(list, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v8);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v18 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        sub_1BE4FE8(v19);
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
    v26 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66BAD & 1) == 0 )
  {
    sub_1BE4ACC(&EventMaster___c_TypeInfo, v1);
    byte_4B66BAD = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BE4D28(this, a);
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
    sub_1BE4D28(this, a);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, a);
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
    sub_1BE4D28(this, a);
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