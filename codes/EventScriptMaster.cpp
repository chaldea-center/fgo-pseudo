void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC01B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC01B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    214,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
}


EventScriptEntity_array *__fastcall EventScriptMaster__GetAvailable(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x20
  int64_t Instance; // x0
  __int64 v53; // x1
  EventScriptReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserEventMaster_o *v55; // x23
  int32_t Count; // w0
  int32_t v57; // w23
  int32_t v58; // w24
  const MethodInfo *v59; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x25
  __int64 v61; // x10
  struct EventScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v64; // x21
  struct EventScriptMaster___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  UserEventEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EC020 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventScriptEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventScriptEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, v18, v19, v20);
    sub_B5D5C4(&EventScriptEntity_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&NetworkManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_EventScriptMaster___c__GetAvailable_b__7_0__, v45, v46, v47);
    sub_B5D5C4(&EventScriptMaster___c_TypeInfo, v48, v49, v50);
    byte_42EC020 = 1;
  }
  entity = 0LL;
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v51 )
      goto LABEL_37;
    System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (EventScriptReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v55 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v55
    || (UserEventMaster__TryGetEntity(v55, &entity, Instance, eventId, 0LL), (Instance = (int64_t)this->fields.list) == 0) )
  {
LABEL_37:
    sub_B5D69C(Instance, v53);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v57 = Count;
    v58 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_37;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v58,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_37;
      v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v61 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v61
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v61 - 8) != EventScriptEntity_TypeInfo )
      {
        goto LABEL_37;
      }
      if ( *(_DWORD *)(Instance + 16) == eventId )
      {
        Instance = (int64_t)entity;
        if ( !entity
          || (Instance = UserEventEntity__getScriptFlag(entity, v60->fields.missionConditionDetailId, 0LL),
              (Instance & 1) == 0) )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_37;
          Instance = EventScriptReleaseMaster__isAvailable(
                       MasterData_WarQuestSelectionMaster,
                       eventId,
                       v60->fields.missionConditionDetailId,
                       v59);
          if ( (Instance & 1) != 0 )
          {
            if ( !v51 )
              goto LABEL_37;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v51,
              v60,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventScriptEntity__Add__);
          }
        }
      }
    }
    while ( ++v58 < v57 );
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
    v64 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v64,
      Method_EventScriptMaster___c__GetAvailable_b__7_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventScriptEntity___ctor__);
    v65 = EventScriptMaster___c_TypeInfo->static_fields;
    v65->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v65->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
  if ( !v51 )
    goto LABEL_37;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v51,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EC019 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__,
      eventId,
      flagId,
      method);
    byte_42EC019 = 1;
  }
  PK = EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23FB260 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
}


bool __fastcall EventScriptMaster__IsRaceResultFlagged(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int64_t Instance; // x0
  __int64 v23; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t Count; // w0
  int32_t v26; // w22
  int32_t v27; // w23
  int v28; // w21
  __int64 v29; // x10
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC021 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, termId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, v10, v11, v12);
    sub_B5D5C4(&EventScriptEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&NetworkManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42EC021 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
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
              (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v26 = Count;
      v27 = 0;
      v28 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = (int64_t)this->fields.list;
        if ( !Instance )
          goto LABEL_24;
        Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                              v27,
                              (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          goto LABEL_24;
        v29 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v29
          || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v29 - 8) != EventScriptEntity_TypeInfo )
        {
          goto LABEL_24;
        }
        if ( *(_DWORD *)(Instance + 16) == eventId
          && *(_DWORD *)(Instance + 28) == 2
          && *(_DWORD *)(Instance + 40) == v28 )
        {
          break;
        }
        if ( ++v27 >= v26 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *(_DWORD *)(Instance + 20), 0LL);
LABEL_24:
      sub_B5D69C(Instance, v23);
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

  if ( (byte_42EC01A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&flagId);
    byte_42EC01A = 1;
  }
  PK = EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int v19; // w24
  int32_t v20; // w22
  int32_t v21; // w23
  __int64 v22; // x10

  if ( (byte_42EC01C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      playType,
      eventId,
      *(_QWORD *)&termId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&EventScriptEntity_TypeInfo, v14, v15, v16);
    byte_42EC01C = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = termId + 100 * eventId;
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      result = (EventScriptEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                        v21,
                                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v22 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v22 - 1] != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.playType == playType && result->fields.targetId == v19 && result->fields.args == rank )
        return result;
      if ( ++v21 >= v20 )
        return 0LL;
    }
LABEL_16:
    sub_B5D69C(result, *(_QWORD *)&playType);
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_31534664(
        EventScriptMaster_o *this,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 v16; // x10
  struct System_Int64_array *scriptIds; // x10
  int max_length; // w8
  __int64 v19; // x9
  int64_t *m_Items; // x10

  if ( (byte_42EC01D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      scriptId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventScriptEntity_TypeInfo, v9, v10, v11);
    byte_42EC01D = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_18:
    sub_B5D69C(result, scriptId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_18;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                      v15,
                                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_18;
    v16 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v16 - 1] != EventScriptEntity_TypeInfo )
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
    if ( ++v15 >= v14 )
      return 0LL;
  }
  v19 = 0LL;
  m_Items = scriptIds->m_Items;
  while ( m_Items[v19] != scriptId )
  {
    if ( (int)++v19 >= max_length )
      goto LABEL_15;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_31534964(
        EventScriptMaster_o *this,
        int32_t playType,
        int64_t scriptId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  __int64 v17; // x10
  struct System_Int64_array *scriptIds; // x10
  int max_length; // w8
  __int64 v20; // x9
  int64_t *m_Items; // x10

  if ( (byte_42EC01E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      playType,
      scriptId,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventScriptEntity_TypeInfo, v10, v11, v12);
    byte_42EC01E = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_B5D69C(result, *(_QWORD *)&playType);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                      v16,
                                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_19;
    v17 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v17 - 1] != EventScriptEntity_TypeInfo )
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
    if ( ++v16 >= v15 )
      return 0LL;
  }
  v20 = 0LL;
  m_Items = scriptIds->m_Items;
  while ( m_Items[v20] != scriptId )
  {
    if ( (int)++v20 >= max_length )
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
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int64_t list; // x0
  int32_t Count; // w22
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x19
  int32_t v56; // w23
  __int64 v57; // x10
  struct EventScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v60; // x22
  struct EventScriptMaster___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int32_t size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x9
  int v70; // w8
  int klass; // w21
  __int64 v72; // x22
  __int64 v73; // x8
  __int64 v74; // x8

  v4 = eventId;
  if ( (byte_42EC01F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventScriptEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventScriptEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, v15, v16, v17);
    sub_B5D5C4(&EventScriptEntity_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&NetworkManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, v45, v46, v47);
    sub_B5D5C4(&EventScriptMaster___c_TypeInfo, v48, v49, v50);
    byte_42EC01F = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)list,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, list, v4, 0LL);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v56,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      v57 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v57
        || *(EventScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v57 - 8) != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 28) == 2 )
      {
        if ( !v55 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v55,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventScriptEntity__Add__);
      }
      if ( ++v56 >= Count )
        goto LABEL_19;
    }
LABEL_45:
    sub_B5D69C(list, *(_QWORD *)&eventId);
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
    v60 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v60,
      Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventScriptEntity___ctor__);
    v61 = EventScriptMaster___c_TypeInfo->static_fields;
    v61->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)_9__6_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v61->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  if ( !v55 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v55,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  size = v55->fields._size;
  if ( !size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v69 = v55->fields._items->m_Items[size - 1];
  if ( !v69 )
    goto LABEL_45;
  v70 = v55->fields._size;
  klass = (int)v69[1].klass;
  if ( v70 >= 1 )
  {
    v72 = 4LL;
    while ( 1 )
    {
      if ( v70 <= (unsigned int)(v72 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v73 = *((_QWORD *)&v55->fields._items->obj.klass + v72);
      if ( !v73 || !EntityDefinitely )
        goto LABEL_45;
      list = UserEventEntity__getScriptFlag(EntityDefinitely, *(_DWORD *)(v73 + 20), 0LL);
      if ( (list & 1) == 0 )
        break;
      v70 = v55->fields._size;
      if ( (int)++v72 - 4 >= v70 )
        return klass % 100;
    }
    if ( v55->fields._size <= (unsigned int)(v72 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v74 = *((_QWORD *)&v55->fields._items->obj.klass + v72);
    if ( !v74 )
      goto LABEL_45;
    klass = *(_DWORD *)(v74 + 40);
  }
  return klass % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventScriptMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5686 & 1) == 0 )
  {
    sub_B5D5C4(&EventScriptMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5686 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventScriptMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventScriptMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventScriptMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}