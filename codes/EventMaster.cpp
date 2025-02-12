void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB46AB & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, method);
    byte_4BB46AB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_3236300 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_40300968; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_4BB46B7 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB46B7 = 1;
  }
  EntityList_40300968 = EventMaster__GetEntityList_40300968(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_40300968 )
    goto LABEL_15;
  max_length = EntityList_40300968->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C13F88(Instance, v8);
      v12 = EntityList_40300968->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_3238624 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( (BYTE1(Instance[1].monitor) & 0x10) != 0 )
        return id;
      max_length = EntityList_40300968->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1C13F80(Instance, v8);
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
  int64_t EntityList_40300968; // x0
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

  if ( (byte_4BB46C2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_EventEntity__TypeInfo, v4);
    sub_1C13D24(&NetworkManager_TypeInfo, v5);
    byte_4BB46C2 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_40300968 = (int64_t)EventMaster__GetEntityList_40300968(this, 23, 0, 1, 0, v7);
  if ( !EntityList_40300968 )
    goto LABEL_18;
  v10 = *(_DWORD *)(EntityList_40300968 + 24);
  v11 = EntityList_40300968;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1C13F88(EntityList_40300968, v9);
      v13 = *(Il2CppObject **)(v11 + 8LL * (int)v12 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      EntityList_40300968 = NetworkManager__getTime(0LL);
      if ( !v13 )
        break;
      if ( EntityList_40300968 >= (__int64)v13[5].monitor )
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
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
        }
      }
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_EventEntity__o *)v6;
    }
LABEL_18:
    sub_1C13F80(EntityList_40300968, v9);
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

  return EventMaster__GetEntityList_40300968(this, eventType, 1, isFinishedAt, isEventTutorialPeriodExtension, v5);
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
  EventEntity_array *EntityList_40300968; // x0
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

  if ( (byte_4BB46AD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity____Add__, eventTypes);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v7);
    sub_1C13D24(&System_Collections_Generic_List_EventEntity____TypeInfo, v8);
    byte_4BB46AD = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
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
        sub_1C13F88(EntityList_40300968, v11);
      EntityList_40300968 = EventMaster__GetEntityList_40300968(this, eventTypes->m_Items[v14 + 1], 1, v15, 0, v12);
      if ( !v9 )
        break;
      items = v9->fields._items;
      v23 = Method_System_Collections_Generic_List_EventEntity____Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      v25 = (int64_t)EntityList_40300968;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          &EntityList_40300968->obj,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v25;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 4), v25, v16, v17, v18, v19, v20, v21);
      }
      LODWORD(v13) = eventTypes->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        return (System_Collections_Generic_List_EventEntity____o *)v9;
    }
LABEL_14:
    sub_1C13F80(EntityList_40300968, v11);
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
  int64_t Instance; // x0
  __int64 v13; // x1
  EventRewardSceneMaster_o *v14; // x21
  int v15; // w22
  int32_t v16; // w23
  const MethodInfo *v17; // x2
  int64_t v18; // x24
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

  if ( (byte_4BB46C0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity___ctor__, v7);
    sub_1C13D24(&System_Collections_Generic_List_EventEntity__TypeInfo, v8);
    sub_1C13D24(&NetworkManager_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BB46C0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v14 = (EventRewardSceneMaster_o *)Instance;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
               (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v15 = Instance;
    v16 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v16,
                            (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( !Instance )
        break;
      v18 = Instance;
      Instance = EventEntity__IsOpen((EventEntity_o *)Instance, 1, v17);
      if ( (Instance & 1) != 0 )
      {
        if ( !v14 )
          break;
        Instance = (int64_t)EventRewardSceneMaster__GetEntityList(v14, *(_DWORD *)(v18 + 16), 0LL);
        if ( Instance )
        {
          if ( *(_QWORD *)(Instance + 24) )
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
                (Il2CppObject *)v18,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v18;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 4), v18, v19, v20, v21, v22, v23, v24);
            }
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C13F80(Instance, v13);
  }
LABEL_21:
  if ( !v11 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return EventMaster__GetEntityList_40300968(this, 24, 1, 1, 0, v2);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4BB46AE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, *(_QWORD *)&eventType);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_4BB46AE = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        if ( !ids )
          goto LABEL_24;
        v20 = (EventEntity_o *)list;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         ids,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_36116A4 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v20->fields.type == eventType) )
        {
          if ( checkTime )
          {
            list = (void *)EventEntity__IsOpen_40274348(v20, checkTime, 1, v22);
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
          v30 = Method_System_Collections_Generic_List_EventEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)v20,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v20;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v20, v23, v24, v25, v26, v27, v28);
          }
        }
      }
    }
    while ( v18 != ++v19 );
  }
  if ( !v15 )
LABEL_24:
    sub_1C13F80(list, v16);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v15,
                                (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return EventMaster__GetEntityList_40300968(this, eventType, 0, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_40300968(
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x27
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  v7 = isOpenGet;
  if ( (byte_4BB46AF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, *(_QWORD *)&eventType);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_4BB46AF = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( list )
      {
        v26 = (Il2CppObject *)list;
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
                                                                           (EventEntity_o *)v26,
                                                                           isFinishedAt,
                                                                           v20),
                ((unsigned __int8)list & 1) != 0) )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v28 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v26,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v26;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v26, (int64_t)v20, v21, v22, v23, v24, v25);
            }
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C13F80(list, v16);
  }
LABEL_20:
  if ( !v15 )
    goto LABEL_22;
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v15,
                                (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB46C5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    byte_4BB46C5 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    eventId,
                                    (const MethodInfo_3238670 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[6].monitor;
LABEL_11:
    sub_1C13F80(Master_object, v7);
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

  if ( (byte_4BB46BC & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB46BC = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_3238670 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1C13F80(v6, v7);
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

  if ( (byte_4BB46BD & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB46BD = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_3238670 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_1C13F80(v6, v7);
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

  if ( (byte_4BB46C4 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    byte_4BB46C4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_object
    && (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   eventId,
                   (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
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

  if ( (byte_4BB46BA & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int___ctor__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1C13D24(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4BB46BA = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, (int64_t)Instance[6].monitor, v15);
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !FilterEnableEntityList )
    goto LABEL_19;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
          sub_1C13F88(Instance, v14);
        v21 = FilterEnableEntityList->m_Items[v20];
        if ( !v21 )
          break;
        if ( !v19 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v19,
                     v21->fields.id,
                     (const MethodInfo_3238624 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( ((__int64)Instance[1].monitor & 0x10) != 0 )
        {
          if ( !v17 )
            break;
          Instance = (Il2CppObject *)System_Collections_Generic_HashSet_int___Add(
                                       v17,
                                       v21->fields.id,
                                       (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_1C13F80(Instance, v14);
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
  int64_t v32; // x27
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  EventFilterEntity_o *v41; // x28
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_object__o *v50; // x0
  System_Comparison_T__o *v51; // x21
  Il2CppObject *v52; // x22
  struct EventMaster___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Comparison_T__o *v60; // x21
  Il2CppObject *v61; // x22
  struct EventMaster___c_StaticFields *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Object_array *v69; // x21
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BB46B0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, isFinishedAt);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v7);
    sub_1C13D24(&System_Comparison_EventEntity__TypeInfo, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventFilterMaster___, v9);
    sub_1C13D24(&EventEntity___TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__Sort__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v15);
    sub_1C13D24(&System_Collections_Generic_List_EventEntity__TypeInfo, v16);
    sub_1C13D24(&NetworkManager_TypeInfo, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C13D24(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v19);
    sub_1C13D24(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v20);
    sub_1C13D24(&EventMaster___c_TypeInfo, v21);
    byte_4BB46B0 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_54;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
      if ( Item )
      {
        type = Item->fields.type;
        v32 = (int64_t)Item;
        if ( type == 22 || type == 12 )
        {
          Instance = (void *)EventEntity__IsOpen_40274348(Item, nowTime, isFinishedAt, v30);
          if ( ((unsigned __int8)Instance & 1) != 0
            || (Instance = (void *)EventEntity__IsSkillRelease((EventEntity_o *)v32, isFinishedAt, v33),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !MasterData_object )
              goto LABEL_54;
            Instance = (void *)EventFilterMaster__TryGetEntity_40285688(
                                 (EventFilterMaster_o *)MasterData_object,
                                 &entity,
                                 *(_DWORD *)(v32 + 16),
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
            v41 = entity;
            if ( !entity )
              goto LABEL_54;
            Instance = (void *)System_String__IsNullOrEmpty(entity->fields.buttonText, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 || v41->fields.openQuestId < 1 || v41->fields.closeQuestId <= 0 )
            {
LABEL_57:
              if ( !v25 )
                goto LABEL_54;
              items = v25->fields._items;
              v47 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v25->fields._version;
              if ( !items )
                goto LABEL_54;
              size = v25->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v49 = v47[4];
                v50 = v25;
LABEL_35:
                System_Collections_Generic_List_object___AddWithResize(
                  v50,
                  (Il2CppObject *)v32,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v49 + 192) + 112LL));
                continue;
              }
              v45 = &items->obj.klass + size;
              v25->fields._size = size + 1;
            }
            else
            {
              if ( !v26 )
                goto LABEL_54;
              v42 = v26->fields._items;
              v43 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v26->fields._version;
              if ( !v42 )
                goto LABEL_54;
              v44 = v26->fields._size;
              if ( (unsigned int)v44 >= v42->max_length )
              {
                v49 = v43[4];
                v50 = v26;
                goto LABEL_35;
              }
              v45 = &v42->obj.klass + v44;
              v26->fields._size = v44 + 1;
            }
            v45[4] = (Il2CppClass *)v32;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v45 + 4), v32, v35, v36, v37, v38, v39, v40);
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
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v51, v52, Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventEntity__o *)v51;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v25 )
    goto LABEL_54;
  System_Collections_Generic_List_object___Sort_56814736(
    v25,
    v51,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v60 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v60 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v61 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v60 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v60, v61, Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, 0LL);
    v62 = EventMaster___c_TypeInfo->static_fields;
    v62->__9__7_1 = (struct System_Comparison_EventEntity__o *)v60;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v62->__9__7_1, (int64_t)v60, v63, v64, v65, v66, v67, v68);
  }
  if ( !v26 )
LABEL_54:
    sub_1C13F80(Instance, v23);
  System_Collections_Generic_List_object___Sort_56814736(
    v26,
    v60,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v69 = (System_Object_array *)sub_1C13DCC(
                                 EventEntity___TypeInfo,
                                 (unsigned int)(v26->fields._size + v25->fields._size));
  System_Collections_Generic_List_object___CopyTo_56809340(
    v25,
    v69,
    0,
    (const MethodInfo_362D77C *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_object___CopyTo_56809340(
    v26,
    v69,
    v25->fields._size,
    (const MethodInfo_362D77C *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v69;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventEntity_array *EntityList_40300968; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11

  EntityList_40300968 = EventMaster__GetEntityList_40300968(this, 24, 1, 1, 0, v2);
  if ( !EntityList_40300968 )
    return -1LL;
  max_length = EntityList_40300968->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_40300968->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1C13F88(result, v4);
    v9 = m_Items[v6];
    if ( !v9 )
      sub_1C13F80(result, v4);
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
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  System_Collections_Generic_List_object__o *v49; // x0
  System_Comparison_T__o *v50; // x22
  Il2CppObject *v51; // x23
  struct EventMaster___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Comparison_T__o *v59; // x22
  Il2CppObject *v60; // x23
  struct EventMaster___c_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Comparison_T__o *v68; // x22
  Il2CppObject *v69; // x23
  struct EventMaster___c_StaticFields *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_List_object__o *v77; // x22
  int64_t nowTime; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BB46BE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    sub_1C13D24(&System_Comparison_EventEntity__TypeInfo, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__Sort__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity___ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_EventEntity__TypeInfo, v13);
    sub_1C13D24(&NetworkManager_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C13D24(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v16);
    sub_1C13D24(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v17);
    sub_1C13D24(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v18);
    sub_1C13D24(&EventMaster___c_TypeInfo, v19);
    byte_4BB46BE = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  nowTime = NetworkManager__getTime(0LL);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_61;
  v26 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                   (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
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
                             (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
            v39 = Method_System_Collections_Generic_List_EventEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              goto LABEL_61;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v48 = v39[4];
              v49 = v20;
LABEL_36:
              System_Collections_Generic_List_object___AddWithResize(
                v49,
                (Il2CppObject *)v30,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v48 + 192) + 112LL));
              continue;
            }
            v41 = &items->obj.klass + size;
            v20->fields._size = size + 1;
          }
          else
          {
            Instance = (void *)EventEntity__IsExchangePeriod(v30, nowTime, v32);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v21 )
                goto LABEL_61;
              v42 = v21->fields._items;
              v43 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v21->fields._version;
              if ( !v42 )
                goto LABEL_61;
              v44 = v21->fields._size;
              if ( (unsigned int)v44 >= v42->max_length )
              {
                v48 = v43[4];
                v49 = v21;
                goto LABEL_36;
              }
              v41 = &v42->obj.klass + v44;
              v21->fields._size = v44 + 1;
            }
            else
            {
              if ( !v22 )
                goto LABEL_61;
              v45 = v22->fields._items;
              v46 = Method_System_Collections_Generic_List_EventEntity__Add__;
              ++v22->fields._version;
              if ( !v45 )
                goto LABEL_61;
              v47 = v22->fields._size;
              if ( (unsigned int)v47 >= v45->max_length )
              {
                v48 = v46[4];
                v49 = v22;
                goto LABEL_36;
              }
              v41 = &v45->obj.klass + v47;
              v22->fields._size = v47 + 1;
            }
          }
          v41[4] = (Il2CppClass *)v30;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v30, (int64_t)v32, v33, v34, v35, v36, v37);
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
  v50 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v50 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v50 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v50, v51, Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventEntity__o *)v50;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__22_0, (int64_t)v50, v53, v54, v55, v56, v57, v58);
  }
  if ( !v20 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_56814736(
    v20,
    v50,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v59 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v59 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMaster___c_TypeInfo;
    }
    v60 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v59 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v59, v60, Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, 0LL);
    v61 = EventMaster___c_TypeInfo->static_fields;
    v61->__9__22_1 = (struct System_Comparison_EventEntity__o *)v59;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v61->__9__22_1, (int64_t)v59, v62, v63, v64, v65, v66, v67);
  }
  if ( !v21 )
    goto LABEL_61;
  System_Collections_Generic_List_object___Sort_56814736(
    v21,
    v59,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
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
    v68 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v68, v69, Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, 0LL);
    v70 = EventMaster___c_TypeInfo->static_fields;
    v70->__9__22_2 = (struct System_Comparison_EventEntity__o *)v68;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v70->__9__22_2, (int64_t)v68, v71, v72, v73, v74, v75, v76);
  }
  if ( !v22
    || (System_Collections_Generic_List_object___Sort_56814736(
          v22,
          v68,
          (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventEntity__Sort__),
        v77 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v77,
          (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__),
        !v77) )
  {
LABEL_61:
    sub_1C13F80(Instance, v24);
  }
  System_Collections_Generic_List_object___AddRange(
    v77,
    (System_Collections_Generic_IEnumerable_T__o *)v20,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v77,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v77,
    (System_Collections_Generic_IEnumerable_T__o *)v22,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v77,
                                (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4BB46B1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB46B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  EventEntity_array *EntityList_40300968; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21

  if ( (byte_4BB46B6 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB46B6 = 1;
  }
  EntityList_40300968 = EventMaster__GetEntityList_40300968(this, 12, 1, 0, 0, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_40300968 )
    goto LABEL_15;
  max_length = EntityList_40300968->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C13F88(Instance, v8);
      v12 = EntityList_40300968->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   id,
                   (const MethodInfo_3238624 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      if ( ((__int64)Instance[1].monitor & 0x40) != 0 )
        return id;
      max_length = EntityList_40300968->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1C13F80(Instance, v8);
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

  if ( (byte_4BB46B2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB46B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  void *EntityList_40300968; // x0
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
  if ( (byte_4BB46B5 & 1) == 0 )
  {
    sub_1C13D24(&System_Comparison_EventEntity__TypeInfo, types);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity__Sort__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventEntity___ctor__, v7);
    sub_1C13D24(&System_Collections_Generic_List_EventEntity__TypeInfo, v8);
    sub_1C13D24(&GameEventType_TYPE___TypeInfo, v9);
    sub_1C13D24(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v10);
    sub_1C13D24(&EventMaster___c_TypeInfo, v11);
    byte_4BB46B5 = 1;
  }
  if ( !v3 )
  {
    EntityList_40300968 = (void *)sub_1C13DCC(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_40300968 )
      goto LABEL_20;
    v3 = (GameEventType_TYPE_array *)EntityList_40300968;
    if ( !*((_DWORD *)EntityList_40300968 + 6) )
      goto LABEL_21;
    *((_DWORD *)EntityList_40300968 + 8) = 12;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v16 = *(_QWORD *)&v3->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( v17 < (unsigned int)v16 )
    {
      EntityList_40300968 = EventMaster__GetEntityList_40300968(this, v3->m_Items[v17 + 1], 0, 1, 0, v15);
      if ( !v14 )
        goto LABEL_20;
      System_Collections_Generic_List_object___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_40300968,
        (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v16) = v3->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_12;
    }
LABEL_21:
    sub_1C13F88(EntityList_40300968, v13);
  }
LABEL_12:
  EntityList_40300968 = EventMaster___c_TypeInfo;
  if ( !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_40300968 = EventMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)EntityList_40300968 + 23) + 24LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)EntityList_40300968 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_40300968);
      EntityList_40300968 = EventMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)EntityList_40300968 + 23);
    v18 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventMaster___c__GetSortedEntityList_b__12_0__, 0LL);
    static_fields = EventMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventEntity__o *)v18;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)v18, v21, v22, v23, v24, v25, v26);
  }
  if ( !v14 )
LABEL_20:
    sub_1C13F80(EntityList_40300968, v13);
  System_Collections_Generic_List_object___Sort_56814736(
    v14,
    v18,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v14;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_40300968; // x19
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

  if ( (byte_4BB46B8 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB46B8 = 1;
  }
  EntityList_40300968 = EventMaster__GetEntityList_40300968(this, 12, 1, 0, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v12 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !EntityList_40300968 )
    goto LABEL_19;
  max_length = EntityList_40300968->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (QuestMaster_o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C13F88(Instance, v10);
      v17 = EntityList_40300968->m_Items[v16];
      if ( !v17 )
        break;
      if ( !MasterData_object )
        break;
      id = v17->fields.id;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    id,
                                    (const MethodInfo_3238624 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
      max_length = EntityList_40300968->max_length;
      v14 = ++v16 < max_length;
      if ( v16 >= max_length )
        return v14;
    }
LABEL_19:
    sub_1C13F80(Instance, v10);
  }
  return v14;
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  Il2CppObject *Entity; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BB46B9 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime);
    byte_4BB46B9 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             BPEnableEventId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_1C13F80(0LL, v7);
  return EventEntity__IsOpen_40274348((EventEntity_o *)Entity, checkTime, 0, v8);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_40300968; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w23
  EventEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB46BB & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, flag);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB46BB = 1;
  }
  entity = 0LL;
  EntityList_40300968 = EventMaster__GetEntityList_40300968(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_40300968 )
    goto LABEL_15;
  max_length = EntityList_40300968->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C13F88(Instance, v10);
      v15 = EntityList_40300968->m_Items[v14];
      if ( !v15 || !v13 )
        break;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   v15->fields.id,
                                   (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_19;
      if ( !entity )
        break;
      if ( ((int64_t)entity[1].monitor & flag) == 0 )
      {
LABEL_19:
        max_length = EntityList_40300968->max_length;
        v12 = ++v14 < max_length;
        if ( v14 < max_length )
          continue;
      }
      return v12;
    }
LABEL_15:
    sub_1C13F80(Instance, v10);
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

  if ( (byte_4BB46C3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, *(_QWORD *)&eventId);
    byte_4BB46C3 = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              eventId,
                              (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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

  if ( (byte_4BB46BF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1C13D24(&NetworkManager_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BB46BF = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ShopMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                    (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
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
                                    (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
    sub_1C13F80(Instance, v11);
  }
  return 0;
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_40300968; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w24
  EventEntity_o *v15; // x8
  int32_t id; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB46C1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB46C1 = 1;
  }
  entity = 0LL;
  EntityList_40300968 = EventMaster__GetEntityList_40300968(this, 12, 1, 0, 0, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_40300968) )
  {
LABEL_17:
    sub_1C13F80(Instance, v10);
  }
  max_length = EntityList_40300968->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C13F88(Instance, v10);
      v15 = EntityList_40300968->m_Items[v14];
      if ( !v15 || !v13 )
        goto LABEL_17;
      id = v15->fields.id;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   id,
                                   (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( (BYTE2(entity[1].monitor) & 0x10) != 0 )
          break;
      }
      max_length = EntityList_40300968->max_length;
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
  EventEntity_array *EntityList_40300968; // x0

  EntityList_40300968 = EventMaster__GetEntityList_40300968(this, 24, 1, 1, 0, v2);
  if ( EntityList_40300968 )
    LOBYTE(EntityList_40300968) = EntityList_40300968->max_length != 0;
  return (char)EntityList_40300968;
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

  if ( (byte_4BB46AC & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4BB46AC = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
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
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1C13F80(list, items_low);
  }
LABEL_14:
  if ( !v8 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4BB46B3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__, v3);
    byte_4BB46B3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Count__);
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
                                (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__get_Item__);
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
    sub_1C13F80(list, method);
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

  if ( (byte_4BB46B4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__, method);
    sub_1C13D24(&System_IDisposable_TypeInfo, v3);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, v4);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v5);
    byte_4BB46B4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v7);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v17 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0LL);
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
    v24 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
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

  if ( (byte_4BB46C6 & 1) == 0 )
  {
    sub_1C13D24(&EventMaster___c_TypeInfo, v1);
    byte_4BB46C6 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMaster___c_TypeInfo->static_fields->__9 = (struct EventMaster___c_o *)v2;
  sub_1C13CC8(
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
    sub_1C13F80(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C13F80(this, a);
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
    sub_1C13F80(this, a);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, a);
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
    sub_1C13F80(this, a);
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