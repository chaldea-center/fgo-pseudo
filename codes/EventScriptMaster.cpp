void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66CEA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__, method);
    byte_4B66CEA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    219,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
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
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v23; // x23
  int32_t Count; // w0
  int32_t v25; // w23
  int32_t v26; // w24
  const MethodInfo *v27; // x3
  int64_t v28; // x25
  __int64 methodPtr_low; // x10
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Comparison_T__o *v40; // x19
  Il2CppObject *v41; // x20
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UserEventEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B66CEF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&System_Comparison_EventScriptEntity__TypeInfo, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_1BE4ACC(&EventScriptEntity_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v14);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_EventScriptMaster___c__GetAvailable_b__7_0__, v17);
    sub_1BE4ACC(&EventScriptMaster___c_TypeInfo, v18);
    byte_4B66CEF = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v19 )
      goto LABEL_41;
    System_Collections_Generic_List_object___ToArray(
      v19,
      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v23 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v21);
    byte_4B61717 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v23
    || (UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)v23,
          &entity,
          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
          eventId,
          0LL),
        (Instance = (int64_t)this->fields.list) == 0) )
  {
LABEL_41:
    sub_1BE4D28(Instance, v21);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_41;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v26,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_41;
      v28 = Instance;
      methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventScriptEntity_TypeInfo )
      {
        goto LABEL_41;
      }
      if ( *(_DWORD *)(Instance + 16) == eventId )
      {
        Instance = (int64_t)entity;
        if ( !entity
          || (Instance = UserEventEntity__getScriptFlag(entity, *(_DWORD *)(v28 + 20), 0LL), (Instance & 1) == 0) )
        {
          if ( !MasterData_object )
            goto LABEL_41;
          Instance = EventScriptReleaseMaster__isAvailable(
                       (EventScriptReleaseMaster_o *)MasterData_object,
                       eventId,
                       *(_DWORD *)(v28 + 20),
                       v27);
          if ( (Instance & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_41;
            items = v19->fields._items;
            v37 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              goto LABEL_41;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v28,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v28;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v28, v30, v31, v32, v33, v34, v35);
            }
          }
        }
      }
    }
    while ( v25 != ++v26 );
  }
  Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  v40 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v40 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)EventScriptMaster___c_TypeInfo;
    }
    v41 = **(Il2CppObject ***)(Instance + 184);
    v40 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v40, v41, Method_EventScriptMaster___c__GetAvailable_b__7_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)v40;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v40, v43, v44, v45, v46, v47, v48);
  }
  if ( !v19 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_56548584(
    v19,
    v40,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66CE8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4B66CE8 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
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
  void *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  int v18; // w21
  __int64 methodPtr_low; // x10
  UserEventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B66CF0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_1BE4ACC(&EventScriptEntity_TypeInfo, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B66CF0 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
    byte_4B61717 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_27;
  if ( UserEventMaster__TryGetEntity(
         (UserEventMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
         eventId,
         0LL) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_27;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v16 = Count;
      v17 = 0;
      v18 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          goto LABEL_27;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v17,
                     (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          goto LABEL_27;
        methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventScriptEntity_TypeInfo )
        {
          goto LABEL_27;
        }
        if ( *((_DWORD *)Instance + 4) == eventId && *((_DWORD *)Instance + 7) == 2 && *((_DWORD *)Instance + 10) == v18 )
          break;
        if ( v16 == ++v17 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *((_DWORD *)Instance + 5), 0LL);
LABEL_27:
      sub_1BE4D28(Instance, v13);
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

  if ( (byte_4B66CE9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__, entity);
    byte_4B66CE9 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
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

  if ( (byte_4B66CEB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&playType);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1BE4ACC(&EventScriptEntity_TypeInfo, v12);
    byte_4B66CEB = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1BE4D28(result, *(_QWORD *)&playType);
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_40181468(
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

  if ( (byte_4B66CEC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, scriptId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventScriptEntity_TypeInfo, v6);
    byte_4B66CEC = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_18:
    sub_1BE4D28(result, scriptId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_40181764(
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

  if ( (byte_4B66CED & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&playType);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&EventScriptEntity_TypeInfo, v8);
    byte_4B66CED = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_1BE4D28(result, *(_QWORD *)&playType);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
  __int64 v18; // x1
  void *list; // x0
  int32_t Count; // w22
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t v24; // w23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Comparison_T__o *v36; // x19
  Il2CppObject *v37; // x22
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int v45; // w23
  int32_t v46; // w19

  v3 = eventId;
  if ( (byte_4B66CEE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&System_Comparison_EventScriptEntity__TypeInfo, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEventMaster___, v7);
    sub_1BE4ACC(&EventScriptEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v14);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, v17);
    sub_1BE4ACC(&EventScriptMaster___c_TypeInfo, v18);
    byte_4B66CEE = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B61717 = 1;
  }
  list = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_43;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       (UserEventMaster_o *)MasterData_object,
                       *(_QWORD *)(*((_QWORD *)list + 23) + 64LL),
                       v3,
                       0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      methodPtr_low = LOBYTE(EventScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 7) == 2 )
      {
        if ( !v23 )
          break;
        items = v23->fields._items;
        v33 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
        ++v23->fields._version;
        if ( !items )
          break;
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v35[4] = *(Il2CppClass **)&eventId;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 4), *(int64_t *)&eventId, v25, v26, v27, v28, v29, v30);
        }
      }
      if ( Count == ++v24 )
        goto LABEL_25;
    }
LABEL_43:
    sub_1BE4D28(list, *(_QWORD *)&eventId);
  }
LABEL_25:
  list = EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    list = EventScriptMaster___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v36 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventScriptMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)**((_QWORD **)list + 23);
    v36 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v36, v37, Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)v36;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v36, v39, v40, v41, v42, v43, v44);
  }
  if ( !v23 )
    goto LABEL_43;
  System_Collections_Generic_List_object___Sort_56548584(
    v23,
    v36,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v23,
           v23->fields._size - 1,
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
  if ( !list )
    goto LABEL_43;
  v45 = *((_DWORD *)list + 10);
  if ( v23->fields._size >= 1 )
  {
    v46 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v23,
               v46,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
      if ( !list || !EntityDefinitely )
        goto LABEL_43;
      if ( !UserEventEntity__getScriptFlag(EntityDefinitely, *((_DWORD *)list + 5), 0LL) )
        break;
      if ( ++v46 >= v23->fields._size )
        return v45 % 100;
    }
    list = System_Collections_Generic_List_object___get_Item(
             v23,
             v46,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    if ( !list )
      goto LABEL_43;
    v45 = *((_DWORD *)list + 10);
  }
  return v45 % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66CF1 & 1) == 0 )
  {
    sub_1BE4ACC(&EventScriptMaster___c_TypeInfo, v1);
    byte_4B66CF1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventScriptMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventScriptMaster___c_TypeInfo->static_fields->__9 = (struct EventScriptMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventScriptMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BE4D28(this, a);
  return b->fields.priority - a->fields.priority;
}