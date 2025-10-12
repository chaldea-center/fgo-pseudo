void EventFatigueRecoveryMaster___ctor(EventFatigueRecoveryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3795B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
    byte_4C3795B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    305,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *EventFatigueRecoveryMaster__GetEntity(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37959 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
    byte_4C37959 = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventFatigueRecoveryEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_339B2F0 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
}


EventFatigueRecoveryEntity_o *EventFatigueRecoveryMaster__GetEntityDefinitely(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  EventFatigueRecoveryEntity_o *v7; // x22
  const MethodInfo *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w23

  if ( (byte_4C3795C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
    sub_1C32C20(&EventFatigueRecoveryEntity_TypeInfo);
    byte_4C3795C = 1;
  }
  v7 = (EventFatigueRecoveryEntity_o *)sub_1C32E6C(EventFatigueRecoveryEntity_TypeInfo);
  EventFatigueRecoveryEntity___ctor(v7, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C32E7C(list);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
      if ( list )
      {
        if ( LODWORD(list->fields.items) == eventId && LODWORD(list[1].klass) == idx )
          v7 = (EventFatigueRecoveryEntity_o *)list;
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v10;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w22
  const MethodInfo *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *v9; // x23
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C3795D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3795D = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v7 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__);
    if ( v7 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v7,
                                                               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
    if ( !list )
      goto LABEL_20;
    v9 = list;
    if ( LODWORD(list->fields.items) == eventId )
    {
      if ( LODWORD(list[1].klass) )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)EventFatigueRecoveryEntity__IsOpen(
                                                                   (EventFatigueRecoveryEntity_o *)list,
                                                                   v8);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v5 )
            goto LABEL_20;
          klass = (int32_t)v9[1].klass;
          items = v5->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              klass,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size] = klass;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1C32E7C(list);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t EventFatigueRecoveryMaster__GetRecoverydBgId(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v7; // x21
  int32_t v8; // w23
  int v9; // w27
  int32_t v10; // w22
  const MethodInfo *v11; // x4
  _DWORD *v12; // x24
  int32_t v13; // w1

  if ( (byte_4C3795E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3795E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_16:
    sub_1C32E7C(Instance);
  }
  v7 = (CommonReleaseMaster_o *)Instance;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v10,
                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
      if ( Instance )
      {
        v12 = Instance;
        if ( *((_DWORD *)Instance + 4) == eventId )
        {
          v13 = *((_DWORD *)Instance + 12);
          if ( v13 < 1 )
            goto LABEL_13;
          if ( !v7 )
            goto LABEL_16;
          Instance = (void *)CommonReleaseMaster__IsOpen(v7, v13, 0, 0, v11);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_13:
            if ( v9 < v12[5] )
            {
              v8 = v12[13];
              v9 = v12[5];
            }
          }
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v10;
        if ( list )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v8;
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

  if ( (byte_4C3795A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
    byte_4C3795A = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
}