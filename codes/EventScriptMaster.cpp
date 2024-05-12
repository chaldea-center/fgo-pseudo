void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438EC6E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
    byte_438EC6E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    214,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
}


EventScriptEntity_array *__fastcall EventScriptMaster__GetAvailable(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  int64_t Instance; // x0
  __int64 v7; // x1
  EventScriptReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserEventMaster_o *v9; // x23
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  const MethodInfo *v13; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x25
  __int64 v15; // x10
  struct EventScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v18; // x21
  struct EventScriptMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UserEventEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438EC73 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventScriptEntity___ctor__);
    sub_B775C4(&System_Comparison_EventScriptEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B775C4(&EventScriptEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventScriptEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventScriptEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_EventScriptMaster___c__GetAvailable_b__7_0__);
    sub_B775C4(&EventScriptMaster___c_TypeInfo);
    byte_438EC73 = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v5 )
      goto LABEL_37;
    System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (EventScriptReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v9 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v9
    || (UserEventMaster__TryGetEntity(v9, &entity, Instance, eventId, 0LL), (Instance = (int64_t)this->fields.list) == 0) )
  {
LABEL_37:
    sub_B7769C(Instance, v7);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_37;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v12,
                            (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_37;
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v15 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v15
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v15 - 8) != EventScriptEntity_TypeInfo )
      {
        goto LABEL_37;
      }
      if ( *(_DWORD *)(Instance + 16) == eventId )
      {
        Instance = (int64_t)entity;
        if ( !entity
          || (Instance = UserEventEntity__getScriptFlag(entity, v14->fields.missionConditionDetailId, 0LL),
              (Instance & 1) == 0) )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_37;
          Instance = EventScriptReleaseMaster__isAvailable(
                       MasterData_WarQuestSelectionMaster,
                       eventId,
                       v14->fields.missionConditionDetailId,
                       v13);
          if ( (Instance & 1) != 0 )
          {
            if ( !v5 )
              goto LABEL_37;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              v14,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventScriptEntity__Add__);
          }
        }
      }
    }
    while ( ++v12 < v11 );
  }
  Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( (BYTE3(EventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  static_fields = *(struct EventScriptMaster___c_StaticFields **)(Instance + 184);
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v18,
      Method_EventScriptMaster___c__GetAvailable_b__7_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventScriptEntity___ctor__);
    v19 = EventScriptMaster___c_TypeInfo->static_fields;
    v19->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)_9__7_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v19->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v5 )
    goto LABEL_37;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438EC6C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
    byte_438EC6C = 1;
  }
  PK = EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
}


bool __fastcall EventScriptMaster__IsRaceResultFlagged(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  int v13; // w21
  __int64 v14; // x10
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438EC74 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B775C4(&EventScriptEntity_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438EC74 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  if ( UserEventMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, eventId, 0LL) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_24;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v11 = Count;
      v12 = 0;
      v13 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = (int64_t)this->fields.list;
        if ( !Instance )
          goto LABEL_24;
        Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                              v12,
                              (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          goto LABEL_24;
        v14 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v14
          || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v14 - 8) != EventScriptEntity_TypeInfo )
        {
          goto LABEL_24;
        }
        if ( *(_DWORD *)(Instance + 16) == eventId
          && *(_DWORD *)(Instance + 28) == 2
          && *(_DWORD *)(Instance + 40) == v13 )
        {
          break;
        }
        if ( ++v12 >= v11 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *(_DWORD *)(Instance + 20), 0LL);
LABEL_24:
      sub_B7769C(Instance, v8);
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
  System_String_o *PK; // x2

  if ( (byte_438EC6D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
    byte_438EC6D = 1;
  }
  PK = EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
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
  int v13; // w24
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_438EC6F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventScriptEntity_TypeInfo);
    byte_438EC6F = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = termId + 100 * eventId;
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      result = (EventScriptEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                        v15,
                                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v16 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v16 - 1] != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.playType == playType && result->fields.targetId == v13 && result->fields.args == rank )
        return result;
      if ( ++v15 >= v14 )
        return 0LL;
    }
LABEL_16:
    sub_B7769C(result, *(_QWORD *)&playType);
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_32158920(
        EventScriptMaster_o *this,
        int64_t scriptId,
        const MethodInfo *method)
{
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x10
  struct System_Int64_array *scriptIds; // x10
  int max_length; // w8
  __int64 v12; // x9
  int64_t *m_Items; // x10

  if ( (byte_438EC70 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventScriptEntity_TypeInfo);
    byte_438EC70 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_18:
    sub_B7769C(result, scriptId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_18;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                      v8,
                                      (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_18;
    v9 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v9 - 1] != EventScriptEntity_TypeInfo )
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
    if ( ++v8 >= v7 )
      return 0LL;
  }
  v12 = 0LL;
  m_Items = scriptIds->m_Items;
  while ( m_Items[v12] != scriptId )
  {
    if ( (int)++v12 >= max_length )
      goto LABEL_15;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_32159220(
        EventScriptMaster_o *this,
        int32_t playType,
        int64_t scriptId,
        const MethodInfo *method)
{
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct System_Int64_array *scriptIds; // x10
  int max_length; // w8
  __int64 v14; // x9
  int64_t *m_Items; // x10

  if ( (byte_438EC71 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventScriptEntity_TypeInfo);
    byte_438EC71 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_B7769C(result, *(_QWORD *)&playType);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                      v10,
                                      (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_19;
    v11 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] != EventScriptEntity_TypeInfo )
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
    if ( ++v10 >= v9 )
      return 0LL;
  }
  v14 = 0LL;
  m_Items = scriptIds->m_Items;
  while ( m_Items[v14] != scriptId )
  {
    if ( (int)++v14 >= max_length )
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
  int32_t v3; // w19
  int64_t list; // x0
  int32_t Count; // w22
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  int32_t v10; // w23
  __int64 v11; // x10
  struct EventScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v14; // x22
  struct EventScriptMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x9
  int v24; // w8
  int klass; // w21
  __int64 v26; // x22
  __int64 v27; // x8
  __int64 v28; // x8

  v3 = eventId;
  if ( (byte_438EC72 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventScriptEntity___ctor__);
    sub_B775C4(&System_Comparison_EventScriptEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B775C4(&EventScriptEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventScriptEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventScriptEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__);
    sub_B775C4(&EventScriptMaster___c_TypeInfo);
    byte_438EC72 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)list,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, list, v3, 0LL);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v10,
                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      v11 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v11
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 28) == 2 )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventScriptEntity__Add__);
      }
      if ( ++v10 >= Count )
        goto LABEL_19;
    }
LABEL_45:
    sub_B7769C(list, *(_QWORD *)&eventId);
  }
LABEL_19:
  list = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( (BYTE3(EventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    list = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  static_fields = *(struct EventScriptMaster___c_StaticFields **)(list + 184);
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (*(_BYTE *)(list + 307) & 4) != 0 && !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v14,
      Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventScriptEntity___ctor__);
    v15 = EventScriptMaster___c_TypeInfo->static_fields;
    v15->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)_9__6_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v9 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  size = v9->fields._size;
  if ( !size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v23 = v9->fields._items->m_Items[size - 1];
  if ( !v23 )
    goto LABEL_45;
  v24 = v9->fields._size;
  klass = (int)v23[1].klass;
  if ( v24 >= 1 )
  {
    v26 = 4LL;
    while ( 1 )
    {
      if ( v24 <= (unsigned int)(v26 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v27 = *((_QWORD *)&v9->fields._items->obj.klass + v26);
      if ( !v27 || !EntityDefinitely )
        goto LABEL_45;
      list = UserEventEntity__getScriptFlag(EntityDefinitely, *(_DWORD *)(v27 + 20), 0LL);
      if ( (list & 1) == 0 )
        break;
      v24 = v9->fields._size;
      if ( (int)++v26 - 4 >= v24 )
        return klass % 100;
    }
    if ( v9->fields._size <= (unsigned int)(v26 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v28 = *((_QWORD *)&v9->fields._items->obj.klass + v26);
    if ( !v28 )
      goto LABEL_45;
    klass = *(_DWORD *)(v28 + 40);
  }
  return klass % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventScriptMaster___c_StaticFields *static_fields; // x0

  if ( (byte_438803C & 1) == 0 )
  {
    sub_B775C4(&EventScriptMaster___c_TypeInfo);
    byte_438803C = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventScriptMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventScriptMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}