void EventFatigueRecoveryMaster___ctor(EventFatigueRecoveryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7393 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
    byte_4CC7393 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    305,
    (const MethodInfo_340B614 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *EventFatigueRecoveryMaster__GetEntity(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7391 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
    byte_4CC7391 = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventFatigueRecoveryEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_340D938 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
}


EventFatigueRecoveryEntity_o *EventFatigueRecoveryMaster__GetEntityDefinitely(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  EventFatigueRecoveryEntity_o *v7; // x22
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v11; // w23

  if ( (byte_4CC7394 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
    sub_1C713B0(&EventFatigueRecoveryEntity_TypeInfo);
    byte_4CC7394 = 1;
  }
  v7 = (EventFatigueRecoveryEntity_o *)sub_1C715FC(EventFatigueRecoveryEntity_TypeInfo);
  EventFatigueRecoveryEntity___ctor(v7, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C71608(list, v9);
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
      if ( list )
      {
        if ( LODWORD(list->fields.items) == eventId && LODWORD(list[1].klass) == idx )
          v7 = (EventFatigueRecoveryEntity_o *)list;
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v11;
        if ( list )
          continue;
      }
    }
    goto LABEL_12;
  }
  return v7;
}


System_Int32_array *EventFatigueRecoveryMaster__GetOpenRecoveryNum(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  const MethodInfo *klass_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  System_Collections_ObjectModel_Collection_T__o *v9; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_4CC7395 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC7395 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
    if ( !list )
      goto LABEL_20;
    v9 = list;
    if ( LODWORD(list->fields.items) == eventId )
    {
      if ( LODWORD(list[1].klass) )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)EventFatigueRecoveryEntity__IsOpen(
                                                                   (EventFatigueRecoveryEntity_o *)list,
                                                                   klass_low);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v5 )
            goto LABEL_20;
          klass_low = (const MethodInfo *)LODWORD(v9[1].klass);
          items = v5->fields._items;
          v11 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              (int32_t)klass_low,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size] = (int)klass_low;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1C71608(list, klass_low);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t EventFatigueRecoveryMaster__GetRecoverydBgId(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 lookup_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v8; // x21
  int32_t lookup_high; // w23
  int m_CachedPtr_high; // w27
  int32_t v11; // w22
  const MethodInfo *v12; // x4
  DataManager_o *v13; // x24

  if ( (byte_4CC7396 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
    sub_1C713B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7396 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_16:
    sub_1C71608(Instance, lookup_low);
  }
  v8 = (CommonReleaseMaster_o *)Instance;
  lookup_high = 0;
  m_CachedPtr_high = 0;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v11,
                                    (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
      if ( Instance )
      {
        v13 = Instance;
        if ( LODWORD(Instance->fields.m_CachedPtr) == eventId )
        {
          lookup_low = LODWORD(Instance->fields.lookup);
          if ( (int)lookup_low < 1 )
            goto LABEL_13;
          if ( !v8 )
            goto LABEL_16;
          Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v8, lookup_low, 0, 0, v12);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_13:
            if ( m_CachedPtr_high < SHIDWORD(v13->fields.m_CachedPtr) )
            {
              lookup_high = HIDWORD(v13->fields.lookup);
              m_CachedPtr_high = HIDWORD(v13->fields.m_CachedPtr);
            }
          }
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v11;
        if ( list )
          continue;
      }
    }
    goto LABEL_16;
  }
  return lookup_high;
}


// local variable allocation has failed, the output may be wrong!
bool EventFatigueRecoveryMaster__TryGetEntity(
        EventFatigueRecoveryMaster_o *this,
        EventFatigueRecoveryEntity_o **entity,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC7392 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
    byte_4CC7392 = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
}