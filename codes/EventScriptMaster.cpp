void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC543 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__, method);
    byte_49FC543 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    215,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
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
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x21
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v22; // x23
  int32_t Count; // w0
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t v26; // w23
  int32_t v27; // w24
  const MethodInfo *v28; // x3
  int64_t v29; // x25
  __int64 methodPtr_low; // x10
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Comparison_T__o *v36; // x19
  Il2CppObject *v37; // x20
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  UserEventEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FC548 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_EventScriptEntity__TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_1B640C8(&EventScriptEntity_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_EventScriptMaster___c__GetAvailable_b__7_0__, v17);
    sub_1B640C8(&EventScriptMaster___c_TypeInfo, v18);
    byte_49FC548 = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventScriptEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v19 )
      goto LABEL_37;
    System_Collections_Generic_List_object___ToArray(
      v19,
      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v22 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v22
    || (UserEventMaster__TryGetEntity((UserEventMaster_o *)v22, &entity, Instance, eventId, 0LL),
        (Instance = (int64_t)this->fields.list) == 0) )
  {
LABEL_37:
    sub_1B64324(Instance);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_37;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v27,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_37;
      v29 = Instance;
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
          || (Instance = UserEventEntity__getScriptFlag(entity, *(_DWORD *)(v29 + 20), 0LL), (Instance & 1) == 0) )
        {
          if ( !MasterData_object )
            goto LABEL_37;
          Instance = EventScriptReleaseMaster__isAvailable(
                       (EventScriptReleaseMaster_o *)MasterData_object,
                       eventId,
                       *(_DWORD *)(v29 + 20),
                       v28);
          if ( (Instance & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_37;
            items = v19->fields._items;
            v33 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              goto LABEL_37;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v29,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v29;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), v29, v25, v31);
            }
          }
        }
      }
    }
    while ( v26 != ++v27 );
  }
  Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v36 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)EventScriptMaster___c_TypeInfo;
    }
    v37 = **(Il2CppObject ***)(Instance + 184);
    v36 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventScriptEntity__TypeInfo, v24, v25);
    System_Comparison_object____ctor(v36, v37, Method_EventScriptMaster___c__GetAvailable_b__7_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v36, v39, v40);
  }
  if ( !v19 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55243320(
    v19,
    v36,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC541 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_49FC541 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_30D41FC *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
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
  __int64 v11; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x22
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  int v17; // w21
  __int64 methodPtr_low; // x10
  UserEventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FC549 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_1B640C8(&EventScriptEntity_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FC549 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMaster___);
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
              (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v15 = Count;
      v16 = 0;
      v17 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = (int64_t)this->fields.list;
        if ( !Instance )
          goto LABEL_23;
        Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                              (System_Collections_ObjectModel_Collection_T__o *)Instance,
                              v16,
                              (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          && *(_DWORD *)(Instance + 40) == v17 )
        {
          break;
        }
        if ( v15 == ++v16 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *(_DWORD *)(Instance + 20), 0LL);
LABEL_23:
      sub_1B64324(Instance);
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

  if ( (byte_49FC542 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__, entity);
    byte_49FC542 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
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
  __int64 v12; // x1
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  int v17; // w24
  __int64 methodPtr_low; // x10

  if ( (byte_49FC544 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&playType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1B640C8(&EventScriptEntity_TypeInfo, v12);
    byte_49FC544 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    v17 = termId + 100 * eventId;
    while ( 1 )
    {
      result = (EventScriptEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)result,
                                        v16,
                                        (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.playType == playType && result->fields.targetId == v17 && result->fields.args == rank )
        return result;
      if ( v15 == ++v16 )
        return 0LL;
    }
LABEL_16:
    sub_1B64324(result);
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_38935488(
        EventScriptMaster_o *this,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v14; // w10

  if ( (byte_49FC545 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, scriptId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&EventScriptEntity_TypeInfo, v6);
    byte_49FC545 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_18:
    sub_1B64324(result);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_18;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v10,
                                      (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( ++v10 == v9 )
      return 0LL;
  }
  v14 = 0;
  while ( scriptIds->m_Items[v14] != scriptId )
  {
    if ( max_length == ++v14 )
      goto LABEL_15;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_38935784(
        EventScriptMaster_o *this,
        int32_t playType,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  __int64 methodPtr_low; // x10
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v16; // w10

  if ( (byte_49FC546 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&playType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&EventScriptEntity_TypeInfo, v8);
    byte_49FC546 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_1B64324(result);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v12,
                                      (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( ++v12 == v11 )
      return 0LL;
  }
  v16 = 0;
  while ( scriptIds->m_Items[v16] != scriptId )
  {
    if ( max_length == ++v16 )
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
  int64_t list; // x0
  int32_t Count; // w22
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x21
  int64_t v26; // x1
  __int64 v27; // x2
  int32_t v28; // w23
  int32_t v29; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x19
  Il2CppObject *v36; // x22
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int v40; // w23
  int32_t v41; // w19

  if ( (byte_49FC547 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_EventScriptEntity__TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMaster___, v7);
    sub_1B640C8(&EventScriptEntity_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, v17);
    sub_1B640C8(&EventScriptMaster___c_TypeInfo, v18);
    byte_49FC547 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_39;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)MasterData_object, list, eventId, 0LL);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventScriptEntity__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v28,
                        (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v26 = list;
      methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 28) == 2 )
      {
        if ( !v25 )
          break;
        items = v25->fields._items;
        v32 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
        ++v25->fields._version;
        if ( !items )
          break;
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v26;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), v26, v27, v29);
        }
      }
      if ( Count == ++v28 )
        goto LABEL_21;
    }
LABEL_39:
    sub_1B64324(list);
  }
LABEL_21:
  list = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    list = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v35 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)EventScriptMaster___c_TypeInfo;
    }
    v36 = **(Il2CppObject ***)(list + 184);
    v35 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventScriptEntity__TypeInfo, v26, v27);
    System_Comparison_object____ctor(v35, v36, Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)v35;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v35, v38, v39);
  }
  if ( !v25 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_55243320(
    v25,
    v35,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  list = (int64_t)System_Collections_Generic_List_object___get_Item(
                    v25,
                    v25->fields._size - 1,
                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
  if ( !list )
    goto LABEL_39;
  v40 = *(_DWORD *)(list + 40);
  if ( v25->fields._size >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v25,
                        v41,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
      if ( !list || !EntityDefinitely )
        goto LABEL_39;
      if ( !UserEventEntity__getScriptFlag(EntityDefinitely, *(_DWORD *)(list + 20), 0LL) )
        break;
      if ( ++v41 >= v25->fields._size )
        return v40 % 100;
    }
    list = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v25,
                      v41,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    if ( !list )
      goto LABEL_39;
    v40 = *(_DWORD *)(list + 40);
  }
  return v40 % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC54A & 1) == 0 )
  {
    sub_1B640C8(&EventScriptMaster___c_TypeInfo, v1);
    byte_49FC54A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventScriptMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventScriptMaster___c_TypeInfo->static_fields->__9 = (struct EventScriptMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventScriptMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}