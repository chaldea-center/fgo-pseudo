void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B292 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
    byte_4A5B292 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    215,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
}


EventScriptEntity_array *__fastcall EventScriptMaster__GetAvailable(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v9; // x23
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  const MethodInfo *v13; // x3
  int64_t v14; // x25
  __int64 methodPtr_low; // x10
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x19
  Il2CppObject *v23; // x20
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  UserEventEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B297 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventScriptEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&EventScriptEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventScriptEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventScriptEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventScriptMaster___c__GetAvailable_b__7_0__);
    sub_1B885B0(&EventScriptMaster___c_TypeInfo);
    byte_4A5B297 = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v5 )
      goto LABEL_37;
    System_Collections_Generic_List_object___ToArray(
      v5,
      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v9
    || (UserEventMaster__TryGetEntity((UserEventMaster_o *)v9, &entity, Instance, eventId, 0LL),
        (Instance = (int64_t)this->fields.list) == 0) )
  {
LABEL_37:
    sub_1B8880C(Instance, v7);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_37;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v12,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_37;
      v14 = Instance;
      methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventScriptEntity_TypeInfo )
      {
        goto LABEL_37;
      }
      if ( *(_DWORD *)(Instance + 16) == eventId )
      {
        Instance = (int64_t)entity;
        if ( !entity
          || (Instance = UserEventEntity__getScriptFlag(entity, *(_DWORD *)(v14 + 20), 0LL), (Instance & 1) == 0) )
        {
          if ( !MasterData_object )
            goto LABEL_37;
          Instance = EventScriptReleaseMaster__isAvailable(
                       (EventScriptReleaseMaster_o *)MasterData_object,
                       eventId,
                       *(_DWORD *)(v14 + 20),
                       v13);
          if ( (Instance & 1) != 0 )
          {
            if ( !v5 )
              goto LABEL_37;
            items = v5->fields._items;
            v19 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              goto LABEL_37;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v14,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v14;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), v14, v16, v17);
            }
          }
        }
      }
    }
    while ( v11 != ++v12 );
  }
  Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v22 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)EventScriptMaster___c_TypeInfo;
    }
    v23 = **(Il2CppObject ***)(Instance + 184);
    v22 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_EventScriptMaster___c__GetAvailable_b__7_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v22, v25, v26);
  }
  if ( !v5 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v22,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B290 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
    byte_4A5B290 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_311DC8C *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
}


bool __fastcall EventScriptMaster__IsRaceResultFlagged(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  int v13; // w21
  __int64 methodPtr_low; // x10
  UserEventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5B298 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&EventScriptEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B298 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_23;
  if ( UserEventMaster__TryGetEntity((UserEventMaster_o *)MasterData_object, &entity, Instance, eventId, 0LL) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v11 = Count;
      v12 = 0;
      v13 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = (int64_t)this->fields.list;
        if ( !Instance )
          goto LABEL_23;
        Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                              (System_Collections_ObjectModel_Collection_T__o *)Instance,
                              v12,
                              (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          goto LABEL_23;
        methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventScriptEntity_TypeInfo )
        {
          goto LABEL_23;
        }
        if ( *(_DWORD *)(Instance + 16) == eventId
          && *(_DWORD *)(Instance + 28) == 2
          && *(_DWORD *)(Instance + 40) == v13 )
        {
          break;
        }
        if ( v11 == ++v12 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *(_DWORD *)(Instance + 20), 0LL);
LABEL_23:
      sub_1B8880C(Instance, v8);
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

  if ( (byte_4A5B291 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
    byte_4A5B291 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
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
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int v15; // w24
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B293 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventScriptEntity_TypeInfo);
    byte_4A5B293 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.playType == playType && result->fields.targetId == v15 && result->fields.args == rank )
        return result;
      if ( v13 == ++v14 )
        return 0LL;
    }
LABEL_16:
    sub_1B8880C(result, *(_QWORD *)&playType);
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_39256400(
        EventScriptMaster_o *this,
        int64_t scriptId,
        const MethodInfo *method)
{
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v12; // w10

  if ( (byte_4A5B294 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventScriptEntity_TypeInfo);
    byte_4A5B294 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_18:
    sub_1B8880C(result, scriptId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_18;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v8,
                                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_18;
    methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventScriptEntity_TypeInfo )
    {
      goto LABEL_18;
    }
    scriptIds = result->fields.scriptIds;
    if ( scriptIds )
    {
      max_length = scriptIds->max_length;
      if ( max_length >= 1 )
        break;
    }
LABEL_15:
    if ( ++v8 == v7 )
      return 0LL;
  }
  v12 = 0;
  while ( scriptIds->m_Items[v12] != scriptId )
  {
    if ( max_length == ++v12 )
      goto LABEL_15;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_39256696(
        EventScriptMaster_o *this,
        int32_t playType,
        int64_t scriptId,
        const MethodInfo *method)
{
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 methodPtr_low; // x10
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v14; // w10

  if ( (byte_4A5B295 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventScriptEntity_TypeInfo);
    byte_4A5B295 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_1B8880C(result, *(_QWORD *)&playType);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v10,
                                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_19;
    methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventScriptEntity_TypeInfo )
    {
      goto LABEL_19;
    }
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
LABEL_16:
    if ( ++v10 == v9 )
      return 0LL;
  }
  v14 = 0;
  while ( scriptIds->m_Items[v14] != scriptId )
  {
    if ( max_length == ++v14 )
      goto LABEL_16;
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
  int64_t list; // x0
  int32_t Count; // w22
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x19
  Il2CppObject *v19; // x22
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int v23; // w23
  int32_t v24; // w19

  v3 = eventId;
  if ( (byte_4A5B296 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventScriptEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&EventScriptEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventScriptEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventScriptEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__);
    sub_1B885B0(&EventScriptMaster___c_TypeInfo);
    byte_4A5B296 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_39;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)MasterData_object, list, v3, 0LL);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v10,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 28) == 2 )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v15 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v17[4] = *(Il2CppClass **)&eventId;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), eventId, v11, v12);
        }
      }
      if ( Count == ++v10 )
        goto LABEL_21;
    }
LABEL_39:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
LABEL_21:
  list = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    list = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v18 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)EventScriptMaster___c_TypeInfo;
    }
    v19 = **(Il2CppObject ***)(list + 184);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v18, v21, v22);
  }
  if ( !v9 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  list = (int64_t)System_Collections_Generic_List_object___get_Item(
                    v9,
                    v9->fields._size - 1,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
  if ( !list )
    goto LABEL_39;
  v23 = *(_DWORD *)(list + 40);
  if ( v9->fields._size >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v9,
                        v24,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
      if ( !list || !EntityDefinitely )
        goto LABEL_39;
      if ( !UserEventEntity__getScriptFlag(EntityDefinitely, *(_DWORD *)(list + 20), 0LL) )
        break;
      if ( ++v24 >= v9->fields._size )
        return v23 % 100;
    }
    list = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v9,
                      v24,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    if ( !list )
      goto LABEL_39;
    v23 = *(_DWORD *)(list + 40);
  }
  return v23 % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B299 & 1) == 0 )
  {
    sub_1B885B0(&EventScriptMaster___c_TypeInfo);
    byte_4A5B299 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventScriptMaster___c_TypeInfo->static_fields->__9 = (struct EventScriptMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventScriptMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}