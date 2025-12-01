void EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC752F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
    byte_4CC752F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    221,
    (const MethodInfo_340B614 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
}


EventScriptEntity_array *EventScriptMaster__GetAvailable(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  void *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v9; // x23
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x19
  Il2CppObject *v26; // x20
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UserEventEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC7534 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    sub_1C713B0(&System_Comparison_EventScriptEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventScriptEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventScriptEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_EventScriptMaster___c__GetAvailable_b__7_0__);
    sub_1C713B0(&EventScriptMaster___c_TypeInfo);
    byte_4CC7534 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v5 )
      goto LABEL_39;
    System_Collections_Generic_List_object___ToArray(
      v5,
      (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v9
    || (UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)v9,
          &entity,
          *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
          eventId,
          0),
        (Instance = this->fields.list) == 0) )
  {
LABEL_39:
    sub_1C71608(Instance, v7);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_39;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v12,
                   (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !Instance )
        goto LABEL_39;
      v14 = (Il2CppObject *)Instance;
      if ( *((_DWORD *)Instance + 4) == eventId )
      {
        Instance = entity;
        if ( !entity
          || (Instance = (void *)UserEventEntity__getScriptFlag(entity, HIDWORD(v14[1].klass), 0),
              ((unsigned __int8)Instance & 1) == 0) )
        {
          if ( !MasterData_object )
            goto LABEL_39;
          Instance = (void *)EventScriptReleaseMaster__isAvailable(
                               (EventScriptReleaseMaster_o *)MasterData_object,
                               eventId,
                               HIDWORD(v14[1].klass),
                               v13);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v5 )
              goto LABEL_39;
            items = v5->fields._items;
            v22 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              goto LABEL_39;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v14,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v14;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
            }
          }
        }
      }
    }
    while ( v11 != ++v12 );
  }
  Instance = EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    Instance = EventScriptMaster___c_TypeInfo;
  }
  v25 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventScriptMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v25 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v25, v26, Method_EventScriptMaster___c__GetAvailable_b__7_0__, 0);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)v25;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !v5 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_58794460(
    v5,
    v25,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC752D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
    byte_4CC752D = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_340D938 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
}


bool EventScriptMaster__IsRaceResultFlagged(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  int v13; // w21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC7535 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7535 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
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
              (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    if ( Count >= 1 )
    {
      v11 = Count;
      v12 = 0;
      v13 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          goto LABEL_25;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v12,
                     (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
        if ( !Instance )
          goto LABEL_25;
        if ( *((_DWORD *)Instance + 4) == eventId && *((_DWORD *)Instance + 7) == 2 && *((_DWORD *)Instance + 10) == v13 )
          break;
        if ( v11 == ++v12 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *((_DWORD *)Instance + 5), 0);
LABEL_25:
      sub_1C71608(Instance, v8);
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

  if ( (byte_4CC752E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
    byte_4CC752E = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CC7530 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    byte_4CC7530 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
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
                                        (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.playType == playType && result->fields.targetId == v15 && result->fields.args == rank )
        return result;
      if ( v13 == ++v14 )
        return 0;
    }
LABEL_14:
    sub_1C71608(result, *(_QWORD *)&playType);
  }
  return 0;
}


EventScriptEntity_o *EventScriptMaster__getRaceResultEntity_42392352(
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

  if ( (byte_4CC7531 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    byte_4CC7531 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_16:
    sub_1C71608(result, scriptId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
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
                                      (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
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


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *EventScriptMaster__getRaceResultEntity_42392576(
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

  if ( (byte_4CC7532 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    byte_4CC7532 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_17:
    sub_1C71608(result, *(_QWORD *)&playType);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
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
                                      (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
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


// local variable allocation has failed, the output may be wrong!
int32_t EventScriptMaster__getRaceTermIdEntity(EventScriptMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t v3; // w20
  void *list; // x0
  int32_t Count; // w22
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x19
  Il2CppObject *v22; // x22
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int v30; // w23
  int32_t v31; // w19

  v3 = eventId;
  if ( (byte_4CC7533 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    sub_1C713B0(&System_Comparison_EventScriptEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventScriptEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_EventScriptEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__);
    sub_1C713B0(&EventScriptMaster___c_TypeInfo);
    byte_4CC7533 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_41;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
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
                       v3,
                       0);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
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
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      if ( *((_DWORD *)list + 7) == 2 )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v20[4] = *(Il2CppClass **)&eventId;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), eventId, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( Count == ++v10 )
        goto LABEL_23;
    }
LABEL_41:
    sub_1C71608(list, *(_QWORD *)&eventId);
  }
LABEL_23:
  list = EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    list = EventScriptMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventScriptMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, 0);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)v21;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v9 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_58794460(
    v9,
    v21,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v9,
           v9->fields._size - 1,
           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
  if ( !list )
    goto LABEL_41;
  v30 = *((_DWORD *)list + 10);
  if ( v9->fields._size >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v9,
               v31,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
      if ( !list || !EntityDefinitely )
        goto LABEL_41;
      if ( !UserEventEntity__getScriptFlag(EntityDefinitely, *((_DWORD *)list + 5), 0) )
        break;
      if ( ++v31 >= v9->fields._size )
        return v30 % 100;
    }
    list = System_Collections_Generic_List_object___get_Item(
             v9,
             v31,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    if ( !list )
      goto LABEL_41;
    v30 = *((_DWORD *)list + 10);
  }
  return v30 % 100;
}


void EventScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7536 & 1) == 0 )
  {
    sub_1C713B0(&EventScriptMaster___c_TypeInfo);
    byte_4CC7536 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventScriptMaster___c_TypeInfo->static_fields->__9 = (struct EventScriptMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventScriptMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}