void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16321 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__, method, v2);
    byte_4B16321 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    215,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_array *__fastcall EventScriptMaster__GetAvailable(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x21
  int64_t Instance; // x0
  __int64 v36; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v38; // x1
  Il2CppObject *v39; // x23
  int32_t Count; // w0
  int64_t v41; // x2
  const MethodInfo *v42; // x3
  int32_t v43; // w23
  int32_t v44; // w24
  int64_t v45; // x25
  __int64 methodPtr_low; // x10
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Comparison_T__o *v55; // x19
  Il2CppObject *v56; // x20
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  UserEventEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16326 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventScriptEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v12, v13);
    sub_1BCA7E0(&EventScriptEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_EventScriptMaster___c__GetAvailable_b__7_0__, v30, v31);
    sub_1BCA7E0(&EventScriptMaster___c_TypeInfo, v32, v33);
    byte_4B16326 = 1;
  }
  entity = 0LL;
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventScriptEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v34 )
      goto LABEL_37;
    System_Collections_Generic_List_object___ToArray(
      v34,
      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v39 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v39
    || (UserEventMaster__TryGetEntity((UserEventMaster_o *)v39, &entity, Instance, eventId, 0LL),
        (Instance = (int64_t)this->fields.list) == 0) )
  {
LABEL_37:
    sub_1BCAA3C(Instance, v36);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v43 = Count;
    v44 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_37;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v44,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_37;
      v45 = Instance;
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
          || (Instance = UserEventEntity__getScriptFlag(entity, *(_DWORD *)(v45 + 20), 0LL), (Instance & 1) == 0) )
        {
          if ( !MasterData_object )
            goto LABEL_37;
          Instance = EventScriptReleaseMaster__isAvailable(
                       (EventScriptReleaseMaster_o *)MasterData_object,
                       eventId,
                       *(_DWORD *)(v45 + 20),
                       v42);
          if ( (Instance & 1) != 0 )
          {
            if ( !v34 )
              goto LABEL_37;
            items = v34->fields._items;
            v52 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
            ++v34->fields._version;
            if ( !items )
              goto LABEL_37;
            size = v34->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                (Il2CppObject *)v45,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = &items->obj.klass + size;
              v34->fields._size = size + 1;
              v54[4] = (Il2CppClass *)v45;
              sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v45, v41, (int32_t)v42, v47, v48, v49, v50);
            }
          }
        }
      }
    }
    while ( v43 != ++v44 );
  }
  Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo, v36);
    Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  v55 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v55 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v36);
      Instance = (int64_t)EventScriptMaster___c_TypeInfo;
    }
    v56 = **(Il2CppObject ***)(Instance + 184);
    v55 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventScriptEntity__TypeInfo, v36, v41, v42);
    System_Comparison_object____ctor(v55, v56, Method_EventScriptMaster___c__GetAvailable_b__7_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)v55;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v55, v58, v59, v60, v61, v62, v63);
  }
  if ( !v34 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_56244000(
    v34,
    v55,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v34,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1631F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&flagId);
    byte_4B1631F = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31B3198 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventScriptMaster__IsRaceResultFlagged(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t Count; // w0
  int32_t v22; // w22
  int32_t v23; // w23
  int v24; // w21
  __int64 methodPtr_low; // x10
  UserEventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16327 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v9, v10);
    sub_1BCA7E0(&EventScriptEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B16327 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
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
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v22 = Count;
      v23 = 0;
      v24 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = (int64_t)this->fields.list;
        if ( !Instance )
          goto LABEL_23;
        Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                              (System_Collections_ObjectModel_Collection_T__o *)Instance,
                              v23,
                              (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          && *(_DWORD *)(Instance + 40) == v24 )
        {
          break;
        }
        if ( v22 == ++v23 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *(_DWORD *)(Instance + 20), 0LL);
LABEL_23:
      sub_1BCAA3C(Instance, v18);
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

  if ( (byte_4B16320 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16320 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v17; // w22
  int32_t v18; // w23
  int v19; // w24
  __int64 methodPtr_low; // x10

  if ( (byte_4B16322 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&playType,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12);
    sub_1BCA7E0(&EventScriptEntity_TypeInfo, v13, v14);
    byte_4B16322 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = termId + 100 * eventId;
    while ( 1 )
    {
      result = (EventScriptEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)result,
                                        v18,
                                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.playType == playType && result->fields.targetId == v19 && result->fields.args == rank )
        return result;
      if ( v17 == ++v18 )
        return 0LL;
    }
LABEL_16:
    sub_1BCAA3C(result, *(_QWORD *)&playType);
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_39976556(
        EventScriptMaster_o *this,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v16; // w10

  if ( (byte_4B16323 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, scriptId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&EventScriptEntity_TypeInfo, v7, v8);
    byte_4B16323 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_18:
    sub_1BCAA3C(result, scriptId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_18;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v12,
                                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( ++v12 == v11 )
      return 0LL;
  }
  v16 = 0;
  while ( scriptIds->m_Items[v16] != scriptId )
  {
    if ( max_length == ++v16 )
      goto LABEL_15;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_39976852(
        EventScriptMaster_o *this,
        int32_t playType,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  __int64 methodPtr_low; // x10
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v18; // w10

  if ( (byte_4B16324 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&playType,
      scriptId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventScriptEntity_TypeInfo, v9, v10);
    byte_4B16324 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_1BCAA3C(result, *(_QWORD *)&playType);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v14,
                                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( ++v14 == v13 )
      return 0LL;
  }
  v18 = 0;
  while ( scriptIds->m_Items[v18] != scriptId )
  {
    if ( max_length == ++v18 )
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int64_t list; // x0
  int32_t Count; // w22
  __int64 v35; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x21
  int64_t v42; // x2
  __int64 v43; // x3
  int32_t v44; // w23
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Comparison_T__o *v54; // x19
  Il2CppObject *v55; // x22
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int v63; // w23
  int32_t v64; // w19

  v3 = eventId;
  if ( (byte_4B16325 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_EventScriptEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v9, v10);
    sub_1BCA7E0(&EventScriptEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, v29, v30);
    sub_1BCA7E0(&EventScriptMaster___c_TypeInfo, v31, v32);
    byte_4B16325 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
  list = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_39;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)MasterData_object, list, v3, 0LL);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventScriptEntity__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v44,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( !v41 )
          break;
        items = v41->fields._items;
        v51 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
        ++v41->fields._version;
        if ( !items )
          break;
        size = v41->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v41,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &items->obj.klass + size;
          v41->fields._size = size + 1;
          v53[4] = *(Il2CppClass **)&eventId;
          sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), *(int64_t *)&eventId, v42, v43, v45, v46, v47, v48);
        }
      }
      if ( Count == ++v44 )
        goto LABEL_21;
    }
LABEL_39:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
LABEL_21:
  list = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo, *(_QWORD *)&eventId);
    list = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  v54 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v54 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&eventId);
      list = (int64_t)EventScriptMaster___c_TypeInfo;
    }
    v55 = **(Il2CppObject ***)(list + 184);
    v54 = (System_Comparison_T__o *)sub_1BCAA2C(
                                      System_Comparison_EventScriptEntity__TypeInfo,
                                      *(_QWORD *)&eventId,
                                      v42,
                                      v43);
    System_Comparison_object____ctor(v54, v55, Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)v54;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v54, v57, v58, v59, v60, v61, v62);
  }
  if ( !v41 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_56244000(
    v41,
    v54,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  list = (int64_t)System_Collections_Generic_List_object___get_Item(
                    v41,
                    v41->fields._size - 1,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
  if ( !list )
    goto LABEL_39;
  v63 = *(_DWORD *)(list + 40);
  if ( v41->fields._size >= 1 )
  {
    v64 = 0;
    while ( 1 )
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v41,
                        v64,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
      if ( !list || !EntityDefinitely )
        goto LABEL_39;
      if ( !UserEventEntity__getScriptFlag(EntityDefinitely, *(_DWORD *)(list + 20), 0LL) )
        break;
      if ( ++v64 >= v41->fields._size )
        return v63 % 100;
    }
    list = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v41,
                      v64,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    if ( !list )
      goto LABEL_39;
    v63 = *(_DWORD *)(list + 40);
  }
  return v63 % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16328 & 1) == 0 )
  {
    sub_1BCA7E0(&EventScriptMaster___c_TypeInfo, v1, v2);
    byte_4B16328 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventScriptMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventScriptMaster___c_TypeInfo->static_fields->__9 = (struct EventScriptMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventScriptMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}