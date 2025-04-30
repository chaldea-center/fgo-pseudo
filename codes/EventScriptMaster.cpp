void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E5C9 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__, method);
    byte_4A4E5C9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    221,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_array *__fastcall EventScriptMaster__GetAvailable(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v18; // x21
  void *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v22; // x23
  int32_t Count; // w0
  int32_t v24; // w23
  int32_t v25; // w24
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x25
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x19
  Il2CppObject *v35; // x20
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UserEventEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A4E5CE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v5);
    sub_1B863B8(&System_Comparison_EventScriptEntity__TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v12);
    sub_1B863B8(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v13);
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&Method_EventScriptMaster___c__GetAvailable_b__7_0__, v16);
    sub_1B863B8(&EventScriptMaster___c_TypeInfo, v17);
    byte_4A4E5CE = 1;
  }
  entity = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v18 )
      goto LABEL_39;
    System_Collections_Generic_List_object___ToArray(
      v18,
      (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v22 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v20);
    byte_4A48C25 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v22
    || (UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)v22,
          &entity,
          *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
          eventId,
          0LL),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_39:
    sub_1B86614(Instance, v20);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_39;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v25,
                   (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !Instance )
        goto LABEL_39;
      v27 = (Il2CppObject *)Instance;
      if ( *((_DWORD *)Instance + 4) == eventId )
      {
        Instance = entity;
        if ( !entity
          || (Instance = (void *)UserEventEntity__getScriptFlag(entity, HIDWORD(v27[1].klass), 0LL),
              ((unsigned __int8)Instance & 1) == 0) )
        {
          if ( !MasterData_object )
            goto LABEL_39;
          Instance = (void *)EventScriptReleaseMaster__isAvailable(
                               (EventScriptReleaseMaster_o *)MasterData_object,
                               eventId,
                               HIDWORD(v27[1].klass),
                               v26);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_39;
            items = v18->fields._items;
            v31 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              goto LABEL_39;
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                v27,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v18->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v27;
              sub_1B8635C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
            }
          }
        }
      }
    }
    while ( v24 != ++v25 );
  }
  Instance = EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    Instance = EventScriptMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventScriptMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v34 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_EventScriptMaster___c__GetAvailable_b__7_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)v34;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)v34, v37, v38);
  }
  if ( !v18 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_56615964(
    v18,
    v34,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v18,
                                      (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4E5C7 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4A4E5C7 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_3218D38 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventScriptMaster__IsRaceResultFlagged(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  int v17; // w21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4E5CF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A4E5CF = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    byte_4A48C25 = 1;
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
         0LL) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_25;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    if ( Count >= 1 )
    {
      v15 = Count;
      v16 = 0;
      v17 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          goto LABEL_25;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v16,
                     (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
        if ( !Instance )
          goto LABEL_25;
        if ( *((_DWORD *)Instance + 4) == eventId && *((_DWORD *)Instance + 7) == 2 && *((_DWORD *)Instance + 10) == v17 )
          break;
        if ( v15 == ++v16 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *((_DWORD *)Instance + 5), 0LL);
LABEL_25:
      sub_1B86614(Instance, v12);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventScriptMaster__TryGetEntity(
        EventScriptMaster_o *this,
        EventScriptEntity_o **entity,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4E5C8 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__, entity);
    byte_4A4E5C8 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity(
        EventScriptMaster_o *this,
        int32_t playType,
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v11; // x1
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int v16; // w24

  if ( (byte_4A4E5CA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&playType);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v11);
    byte_4A4E5CA = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    v16 = termId + 100 * eventId;
    while ( 1 )
    {
      result = (EventScriptEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)result,
                                        v15,
                                        (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.playType == playType && result->fields.targetId == v16 && result->fields.args == rank )
        return result;
      if ( v14 == ++v15 )
        return 0LL;
    }
LABEL_14:
    sub_1B86614(result, *(_QWORD *)&playType);
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_40227560(
        EventScriptMaster_o *this,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v12; // w10

  if ( (byte_4A4E5CB & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, scriptId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v5);
    byte_4A4E5CB = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_16:
    sub_1B86614(result, scriptId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v8 = Count;
  v9 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_16;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v9,
                                      (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
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
    if ( ++v9 == v8 )
      return 0LL;
  }
  v12 = 0;
  while ( scriptIds->m_Items[v12] != scriptId )
  {
    if ( max_length == ++v12 )
      goto LABEL_13;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_40227784(
        EventScriptMaster_o *this,
        int32_t playType,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v14; // w10

  if ( (byte_4A4E5CC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&playType);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v7);
    byte_4A4E5CC = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_17:
    sub_1B86614(result, *(_QWORD *)&playType);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_17;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v11,
                                      (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
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
    if ( ++v11 == v10 )
      return 0LL;
  }
  v14 = 0;
  while ( scriptIds->m_Items[v14] != scriptId )
  {
    if ( max_length == ++v14 )
      goto LABEL_14;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventScriptMaster__getRaceTermIdEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
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
  void *list; // x0
  int32_t Count; // w22
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x19
  Il2CppObject *v31; // x22
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int v35; // w23
  int32_t v36; // w19

  v3 = eventId;
  if ( (byte_4A4E5CD & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v5);
    sub_1B863B8(&System_Comparison_EventScriptEntity__TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMaster___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__, v12);
    sub_1B863B8(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v13);
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, v16);
    sub_1B863B8(&EventScriptMaster___c_TypeInfo, v17);
    byte_4A4E5CD = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_41;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A48C25 = 1;
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
                       0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v23,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      if ( *((_DWORD *)list + 7) == 2 )
      {
        if ( !v22 )
          break;
        items = v22->fields._items;
        v27 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          break;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)list,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v29[4] = *(Il2CppClass **)&eventId;
          sub_1B8635C((CGThumbnailListItem_o *)(v29 + 4), eventId, v24, v25);
        }
      }
      if ( Count == ++v23 )
        goto LABEL_23;
    }
LABEL_41:
    sub_1B86614(list, *(_QWORD *)&eventId);
  }
LABEL_23:
  list = EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    list = EventScriptMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventScriptMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)v30;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)v30, v33, v34);
  }
  if ( !v22 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_56615964(
    v22,
    v30,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v22,
           v22->fields._size - 1,
           (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
  if ( !list )
    goto LABEL_41;
  v35 = *((_DWORD *)list + 10);
  if ( v22->fields._size >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v22,
               v36,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
      if ( !list || !EntityDefinitely )
        goto LABEL_41;
      if ( !UserEventEntity__getScriptFlag(EntityDefinitely, *((_DWORD *)list + 5), 0LL) )
        break;
      if ( ++v36 >= v22->fields._size )
        return v35 % 100;
    }
    list = System_Collections_Generic_List_object___get_Item(
             v22,
             v36,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    if ( !list )
      goto LABEL_41;
    v35 = *((_DWORD *)list + 10);
  }
  return v35 % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4E5D0 & 1) == 0 )
  {
    sub_1B863B8(&EventScriptMaster___c_TypeInfo, v1);
    byte_4A4E5D0 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(EventScriptMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventScriptMaster___c_TypeInfo->static_fields->__9 = (struct EventScriptMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)EventScriptMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventScriptMaster___c___ctor(EventScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventScriptMaster___c___GetAvailable_b__7_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}