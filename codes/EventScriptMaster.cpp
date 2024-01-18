void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A957 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__, method);
    byte_418A957 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    213,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
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
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  int64_t Instance; // x0
  __int64 v22; // x1
  EventScriptReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserEventMaster_o *v24; // x23
  int32_t Count; // w0
  int32_t v26; // w23
  int32_t v27; // w24
  const MethodInfo *v28; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x25
  __int64 v30; // x10
  struct EventScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v33; // x21
  struct EventScriptMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UserEventEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418A95C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_EventScriptEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventScriptEntity__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, v9);
    sub_B2C35C(&EventScriptEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_EventScriptMaster___c__GetAvailable_b__7_0__, v18);
    sub_B2C35C(&EventScriptMaster___c_TypeInfo, v19);
    byte_418A95C = 1;
  }
  entity = 0LL;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v20 )
      goto LABEL_37;
    System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (EventScriptReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v24 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v24
    || (UserEventMaster__TryGetEntity(v24, &entity, Instance, eventId, 0LL), (Instance = (int64_t)this->fields.list) == 0) )
  {
LABEL_37:
    sub_B2C434(Instance, v22);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_37;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v27,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_37;
      v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v30 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v30
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v30 - 8) != EventScriptEntity_TypeInfo )
      {
        goto LABEL_37;
      }
      if ( *(_DWORD *)(Instance + 16) == eventId )
      {
        Instance = (int64_t)entity;
        if ( !entity
          || (Instance = UserEventEntity__getScriptFlag(entity, v29->fields.missionConditionDetailId, 0LL),
              (Instance & 1) == 0) )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_37;
          Instance = EventScriptReleaseMaster__isAvailable(
                       MasterData_WarQuestSelectionMaster,
                       eventId,
                       v29->fields.missionConditionDetailId,
                       v28);
          if ( (Instance & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_37;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              v29,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventScriptEntity__Add__);
          }
        }
      }
    }
    while ( ++v27 < v26 );
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
    v33 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v33,
      Method_EventScriptMaster___c__GetAvailable_b__7_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventScriptEntity___ctor__);
    v34 = EventScriptMaster___c_TypeInfo->static_fields;
    v34->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)_9__7_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v34->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v20 )
    goto LABEL_37;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A955 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_418A955 = 1;
  }
  PK = EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
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
  __int64 v13; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  int v18; // w21
  __int64 v19; // x10
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A95D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_B2C35C(&EventScriptEntity_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418A95D = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
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
              (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v16 = Count;
      v17 = 0;
      v18 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = (int64_t)this->fields.list;
        if ( !Instance )
          goto LABEL_24;
        Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                              v17,
                              (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          goto LABEL_24;
        v19 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v19
          || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v19 - 8) != EventScriptEntity_TypeInfo )
        {
          goto LABEL_24;
        }
        if ( *(_DWORD *)(Instance + 16) == eventId
          && *(_DWORD *)(Instance + 28) == 2
          && *(_DWORD *)(Instance + 40) == v18 )
        {
          break;
        }
        if ( ++v17 >= v16 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *(_DWORD *)(Instance + 20), 0LL);
LABEL_24:
      sub_B2C434(Instance, v13);
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

  if ( (byte_418A956 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__, entity);
    byte_418A956 = 1;
  }
  PK = EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
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
  int v15; // w24
  int32_t v16; // w22
  int32_t v17; // w23
  __int64 v18; // x10

  if ( (byte_418A958 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&playType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B2C35C(&EventScriptEntity_TypeInfo, v12);
    byte_418A958 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = termId + 100 * eventId;
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      result = (EventScriptEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                        v17,
                                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v18 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v18 - 1] != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.playType == playType && result->fields.targetId == v15 && result->fields.args == rank )
        return result;
      if ( ++v17 >= v16 )
        return 0LL;
    }
LABEL_16:
    sub_B2C434(result, *(_QWORD *)&playType);
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_30461532(
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
  __int64 v11; // x10
  struct System_Int64_array *scriptIds; // x10
  int max_length; // w8
  __int64 v14; // x9
  int64_t *m_Items; // x10

  if ( (byte_418A959 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, scriptId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventScriptEntity_TypeInfo, v6);
    byte_418A959 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_18:
    sub_B2C434(result, scriptId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_18;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                      v10,
                                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_18;
    v11 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] != EventScriptEntity_TypeInfo )
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
    if ( ++v10 >= v9 )
      return 0LL;
  }
  v14 = 0LL;
  m_Items = scriptIds->m_Items;
  while ( m_Items[v14] != scriptId )
  {
    if ( (int)++v14 >= max_length )
      goto LABEL_15;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_30461832(
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
  __int64 v13; // x10
  struct System_Int64_array *scriptIds; // x10
  int max_length; // w8
  __int64 v16; // x9
  int64_t *m_Items; // x10

  if ( (byte_418A95A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&playType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventScriptEntity_TypeInfo, v8);
    byte_418A95A = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_B2C434(result, *(_QWORD *)&playType);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                      v12,
                                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_19;
    v13 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v13 - 1] != EventScriptEntity_TypeInfo )
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
    if ( ++v12 >= v11 )
      return 0LL;
  }
  v16 = 0LL;
  m_Items = scriptIds->m_Items;
  while ( m_Items[v16] != scriptId )
  {
    if ( (int)++v16 >= max_length )
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
  __int64 v19; // x1
  int64_t list; // x0
  int32_t Count; // w22
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  int32_t v25; // w23
  __int64 v26; // x10
  struct EventScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v29; // x22
  struct EventScriptMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x9
  int v39; // w8
  int klass; // w21
  __int64 v41; // x22
  __int64 v42; // x8
  __int64 v43; // x8

  v3 = eventId;
  if ( (byte_418A95B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_EventScriptEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventScriptEntity__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_B2C35C(&EventScriptEntity_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, v18);
    sub_B2C35C(&EventScriptMaster___c_TypeInfo, v19);
    byte_418A95B = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)list,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, list, v3, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v25,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      v26 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v26
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v26 - 8) != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 28) == 2 )
      {
        if ( !v24 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventScriptEntity__Add__);
      }
      if ( ++v25 >= Count )
        goto LABEL_19;
    }
LABEL_45:
    sub_B2C434(list, *(_QWORD *)&eventId);
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
    v29 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v29,
      Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventScriptEntity___ctor__);
    v30 = EventScriptMaster___c_TypeInfo->static_fields;
    v30->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)_9__6_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v30->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v24 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v24,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  size = v24->fields._size;
  if ( !size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v38 = v24->fields._items->m_Items[size - 1];
  if ( !v38 )
    goto LABEL_45;
  v39 = v24->fields._size;
  klass = (int)v38[1].klass;
  if ( v39 >= 1 )
  {
    v41 = 4LL;
    while ( 1 )
    {
      if ( v39 <= (unsigned int)(v41 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v42 = *((_QWORD *)&v24->fields._items->obj.klass + v41);
      if ( !v42 || !EntityDefinitely )
        goto LABEL_45;
      list = UserEventEntity__getScriptFlag(EntityDefinitely, *(_DWORD *)(v42 + 20), 0LL);
      if ( (list & 1) == 0 )
        break;
      v39 = v24->fields._size;
      if ( (int)++v41 - 4 >= v39 )
        return klass % 100;
    }
    if ( v24->fields._size <= (unsigned int)(v41 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v43 = *((_QWORD *)&v24->fields._items->obj.klass + v41);
    if ( !v43 )
      goto LABEL_45;
    klass = *(_DWORD *)(v43 + 40);
  }
  return klass % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventScriptMaster___c_StaticFields *static_fields; // x0

  if ( (byte_418418E & 1) == 0 )
  {
    sub_B2C35C(&EventScriptMaster___c_TypeInfo, v1);
    byte_418418E = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventScriptMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventScriptMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventScriptMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}