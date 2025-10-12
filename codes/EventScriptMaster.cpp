void EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37AF6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
    byte_4C37AF6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    221,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
}


EventScriptEntity_array *EventScriptMaster__GetAvailable(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v8; // x23
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x19
  Il2CppObject *v21; // x20
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UserEventEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C37AFB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    sub_1C32C20(&System_Comparison_EventScriptEntity__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventScriptEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventScriptEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventScriptMaster___c__GetAvailable_b__7_0__);
    sub_1C32C20(&EventScriptMaster___c_TypeInfo);
    byte_4C37AFB = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v5 )
      goto LABEL_39;
    System_Collections_Generic_List_object___ToArray(
      v5,
      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v8
    || (UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)v8,
          &entity,
          *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
          eventId,
          0),
        (Instance = this->fields.list) == 0) )
  {
LABEL_39:
    sub_1C32E7C(Instance);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_39;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v11,
                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !Instance )
        goto LABEL_39;
      v13 = (Il2CppObject *)Instance;
      if ( *((_DWORD *)Instance + 4) == eventId )
      {
        Instance = entity;
        if ( !entity
          || (Instance = (void *)UserEventEntity__getScriptFlag(entity, HIDWORD(v13[1].klass), 0),
              ((unsigned __int8)Instance & 1) == 0) )
        {
          if ( !MasterData_object )
            goto LABEL_39;
          Instance = (void *)EventScriptReleaseMaster__isAvailable(
                               (EventScriptReleaseMaster_o *)MasterData_object,
                               eventId,
                               HIDWORD(v13[1].klass),
                               v12);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v5 )
              goto LABEL_39;
            items = v5->fields._items;
            v17 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              goto LABEL_39;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v13,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v13;
              sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
            }
          }
        }
      }
    }
    while ( v10 != ++v11 );
  }
  Instance = EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    Instance = EventScriptMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventScriptMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v20 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_EventScriptMaster___c__GetAvailable_b__7_0__, 0);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)v20;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)v20, v23, v24);
  }
  if ( !v5 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_58303104(
    v5,
    v20,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37AF4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
    byte_4C37AF4 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_339B2F0 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
}


bool EventScriptMaster__IsRaceResultFlagged(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  int v12; // w21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C37AFC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37AFC = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_25;
  if ( UserEventMaster__TryGetEntity(
         (UserEventMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
         eventId,
         0) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_25;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    if ( Count >= 1 )
    {
      v10 = Count;
      v11 = 0;
      v12 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          goto LABEL_25;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v11,
                     (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
        if ( !Instance )
          goto LABEL_25;
        if ( *((_DWORD *)Instance + 4) == eventId && *((_DWORD *)Instance + 7) == 2 && *((_DWORD *)Instance + 10) == v12 )
          break;
        if ( v10 == ++v11 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *((_DWORD *)Instance + 5), 0);
LABEL_25:
      sub_1C32E7C(Instance);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool EventScriptMaster__TryGetEntity(
        EventScriptMaster_o *this,
        EventScriptEntity_o **entity,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37AF5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
    byte_4C37AF5 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
}


EventScriptEntity_o *EventScriptMaster__getRaceResultEntity(
        EventScriptMaster_o *this,
        int32_t playType,
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        const MethodInfo *method)
{
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int v15; // w24

  if ( (byte_4C37AF7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    byte_4C37AF7 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    v15 = termId + 100 * eventId;
    while ( 1 )
    {
      result = (EventScriptEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)result,
                                        v14,
                                        (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.playType == playType && result->fields.targetId == v15 && result->fields.args == rank )
        return result;
      if ( v13 == ++v14 )
        return 0;
    }
LABEL_14:
    sub_1C32E7C(result);
  }
  return 0;
}


EventScriptEntity_o *EventScriptMaster__getRaceResultEntity_42007572(
        EventScriptMaster_o *this,
        int64_t scriptId,
        const MethodInfo *method)
{
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v11; // w10

  if ( (byte_4C37AF8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    byte_4C37AF8 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_16:
    sub_1C32E7C(result);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_16;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v8,
                                      (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    if ( !result )
      goto LABEL_16;
    scriptIds = result->fields.scriptIds;
    if ( scriptIds )
    {
      max_length = scriptIds->max_length;
      if ( max_length >= 1 )
        break;
    }
LABEL_13:
    if ( ++v8 == v7 )
      return 0;
  }
  v11 = 0;
  while ( scriptIds->m_Items[v11] != scriptId )
  {
    if ( max_length == ++v11 )
      goto LABEL_13;
  }
  return result;
}


EventScriptEntity_o *EventScriptMaster__getRaceResultEntity_42007796(
        EventScriptMaster_o *this,
        int32_t playType,
        int64_t scriptId,
        const MethodInfo *method)
{
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v13; // w10

  if ( (byte_4C37AF9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    byte_4C37AF9 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_17:
    sub_1C32E7C(result);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_17;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v10,
                                      (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    if ( !result )
      goto LABEL_17;
    if ( result->fields.playType == playType )
    {
      scriptIds = result->fields.scriptIds;
      if ( scriptIds )
      {
        max_length = scriptIds->max_length;
        if ( max_length >= 1 )
          break;
      }
    }
LABEL_14:
    if ( ++v10 == v9 )
      return 0;
  }
  v13 = 0;
  while ( scriptIds->m_Items[v13] != scriptId )
  {
    if ( max_length == ++v13 )
      goto LABEL_14;
  }
  return result;
}


int32_t EventScriptMaster__getRaceTermIdEntity(EventScriptMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w22
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppClass *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x19
  Il2CppObject *v19; // x22
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w23
  int32_t v24; // w19

  if ( (byte_4C37AFA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    sub_1C32C20(&System_Comparison_EventScriptEntity__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventScriptEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_EventScriptEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__);
    sub_1C32C20(&EventScriptMaster___c_TypeInfo);
    byte_4C37AFA = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_41;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  list = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_41;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       (UserEventMaster_o *)MasterData_object,
                       *(_QWORD *)(*((_QWORD *)list + 23) + 64LL),
                       eventId,
                       0);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !list )
        break;
      v13 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 7) == 2 )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v15 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v17[4] = v13;
          sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
        }
      }
      if ( Count == ++v10 )
        goto LABEL_23;
    }
LABEL_41:
    sub_1C32E7C(list);
  }
LABEL_23:
  list = EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    list = EventScriptMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventScriptMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, 0);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)v18, v21, v22);
  }
  if ( !v9 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_58303104(
    v9,
    v18,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v9,
           v9->fields._size - 1,
           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
  if ( !list )
    goto LABEL_41;
  v23 = *((_DWORD *)list + 10);
  if ( v9->fields._size >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v9,
               v24,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
      if ( !list || !EntityDefinitely )
        goto LABEL_41;
      if ( !UserEventEntity__getScriptFlag(EntityDefinitely, *((_DWORD *)list + 5), 0) )
        break;
      if ( ++v24 >= v9->fields._size )
        return v23 % 100;
    }
    list = System_Collections_Generic_List_object___get_Item(
             v9,
             v24,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    if ( !list )
      goto LABEL_41;
    v23 = *((_DWORD *)list + 10);
  }
  return v23 % 100;
}


void EventScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37AFD & 1) == 0 )
  {
    sub_1C32C20(&EventScriptMaster___c_TypeInfo);
    byte_4C37AFD = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventScriptMaster___c_TypeInfo->static_fields->__9 = (struct EventScriptMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventScriptMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventScriptMaster___c___ctor(EventScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventScriptMaster___c___GetAvailable_b__7_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}