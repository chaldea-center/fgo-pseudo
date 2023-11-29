void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD146 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__, method);
    byte_40FD146 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    213,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_array *__fastcall EventScriptMaster__GetAvailable(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  WebViewManager_o *Instance; // x0
  EventScriptReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v25; // x0
  UserEventMaster_o *v26; // x23
  int64_t UserId; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  __int64 v33; // x4
  int32_t v34; // w23
  int32_t v35; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v36; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x25
  __int64 v39; // x10
  EventScriptMaster___c_c *v40; // x0
  struct EventScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v43; // x21
  struct EventScriptMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UserEventEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FD14B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventScriptEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventScriptEntity__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v11);
    sub_B16FFC(&EventScriptEntity_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_EventScriptMaster___c__GetAvailable_b__7_0__, v20);
    sub_B16FFC(&EventScriptMaster___c_TypeInfo, v21);
    byte_40FD14B = 1;
  }
  entity = 0LL;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventScriptEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v22 )
      goto LABEL_37;
    System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (EventScriptReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_37;
  v26 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v25,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v26
    || (UserEventMaster__TryGetEntity(v26, &entity, UserId, eventId, 0LL),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_37:
    sub_B170D4();
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v34 = Count;
    v35 = 0;
    do
    {
      v36 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v36 )
        goto LABEL_37;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v36,
               v35,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_37;
      v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v39 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v39
        || (EventScriptEntity_c *)Item->klass->_2.typeHierarchy[v39 - 1] != EventScriptEntity_TypeInfo )
      {
        goto LABEL_37;
      }
      if ( LODWORD(Item[1].klass) == eventId
        && (!entity || !UserEventEntity__getScriptFlag(entity, HIDWORD(Item[1].klass), 0LL)) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_37;
        if ( EventScriptReleaseMaster__isAvailable(
               MasterData_WarQuestSelectionMaster,
               eventId,
               v38->fields.missionConditionDetailId,
               v32) )
        {
          if ( !v22 )
            goto LABEL_37;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            v38,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventScriptEntity__Add__);
        }
      }
    }
    while ( ++v35 < v34 );
  }
  v40 = EventScriptMaster___c_TypeInfo;
  if ( (BYTE3(EventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    v40 = EventScriptMaster___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventScriptEntity__TypeInfo,
                                                                          v30,
                                                                          v31,
                                                                          v32,
                                                                          v33);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v43,
      Method_EventScriptMaster___c__GetAvailable_b__7_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventScriptEntity___ctor__);
    v44 = EventScriptMaster___c_TypeInfo->static_fields;
    v44->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)_9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v44->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !v22 )
    goto LABEL_37;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FD144 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_40FD144 = 1;
  }
  PK = EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w22
  int32_t v18; // w23
  int v19; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x10
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD14C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_B16FFC(&EventScriptEntity_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FD14C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  if ( UserEventMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, eventId, 0LL) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_24;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v17 = Count;
      v18 = 0;
      v19 = termId + 100 * eventId;
      while ( 1 )
      {
        v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v20 )
          goto LABEL_24;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 v20,
                 v18,
                 (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Item )
          goto LABEL_24;
        v22 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v22
          || (EventScriptEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] != EventScriptEntity_TypeInfo )
        {
          goto LABEL_24;
        }
        if ( LODWORD(Item[1].klass) == eventId && HIDWORD(Item[1].monitor) == 2 && LODWORD(Item[2].monitor) == v19 )
          break;
        if ( ++v18 >= v17 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, HIDWORD(Item[1].klass), 0LL);
LABEL_24:
      sub_B170D4();
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

  if ( (byte_40FD145 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__, entity);
    byte_40FD145 = 1;
  }
  PK = EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int v15; // w24
  int32_t v16; // w22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventScriptEntity_o *result; // x0
  __int64 v20; // x10

  if ( (byte_40FD147 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&playType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B16FFC(&EventScriptEntity_TypeInfo, v12);
    byte_40FD147 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = termId + 100 * eventId;
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                        v18,
                                        v17,
                                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v20 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v20 - 1] != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.playType == playType && result->fields.targetId == v15 && result->fields.args == rank )
        return result;
      if ( ++v17 >= v16 )
        return 0LL;
    }
LABEL_16:
    sub_B170D4();
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_30744484(
        EventScriptMaster_o *this,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  EventScriptEntity_o *result; // x0
  __int64 v13; // x10
  struct System_Int64_array *scriptIds; // x10
  int max_length; // w8
  __int64 v16; // x9
  int64_t *m_Items; // x10

  if ( (byte_40FD148 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, scriptId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&EventScriptEntity_TypeInfo, v6);
    byte_40FD148 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_18;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      v11,
                                      v10,
                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_18;
    v13 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v13 - 1] != EventScriptEntity_TypeInfo )
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
  v16 = 0LL;
  m_Items = scriptIds->m_Items;
  while ( m_Items[v16] != scriptId )
  {
    if ( (int)++v16 >= max_length )
      goto LABEL_15;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_30744784(
        EventScriptMaster_o *this,
        int32_t playType,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x0
  EventScriptEntity_o *result; // x0
  __int64 v15; // x10
  struct System_Int64_array *scriptIds; // x10
  int max_length; // w8
  __int64 v18; // x9
  int64_t *m_Items; // x10

  if ( (byte_40FD149 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&playType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventScriptEntity_TypeInfo, v8);
    byte_40FD149 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    v13 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v13 )
      goto LABEL_19;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      v13,
                                      v12,
                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_19;
    v15 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (EventScriptEntity_c *)result->klass->_2.typeHierarchy[v15 - 1] != EventScriptEntity_TypeInfo )
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
  v18 = 0LL;
  m_Items = scriptIds->m_Items;
  while ( m_Items[v18] != scriptId )
  {
    if ( (int)++v18 >= max_length )
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
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserEventEntity_o *EntityDefinitely; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v36; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v38; // x10
  EventScriptMaster___c_c *v39; // x0
  struct EventScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v42; // x22
  struct EventScriptMaster___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x9
  int v52; // w8
  int klass; // w21
  __int64 v54; // x22
  __int64 v55; // x8
  __int64 v56; // x8

  if ( (byte_40FD14A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_EventScriptEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_EventScriptEntity__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_B16FFC(&EventScriptEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, v18);
    sub_B16FFC(&EventScriptMaster___c_TypeInfo, v19);
    byte_40FD14A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, UserId, eventId, 0LL);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventScriptEntity__TypeInfo,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      v36 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v36 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v36,
                                                                      v35,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v31 = Item;
      v38 = *(&EventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v38
        || (EventScriptEntity_c *)Item->klass->_2.typeHierarchy[v38 - 1] != EventScriptEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.eventId == 2 )
      {
        if ( !v30 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventScriptEntity__Add__);
      }
      if ( ++v35 >= Count )
        goto LABEL_19;
    }
LABEL_45:
    sub_B170D4();
  }
LABEL_19:
  v39 = EventScriptMaster___c_TypeInfo;
  if ( (BYTE3(EventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    v39 = EventScriptMaster___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventScriptEntity__TypeInfo,
                                                                          v31,
                                                                          v32,
                                                                          v33,
                                                                          v34);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v42,
      Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventScriptEntity___ctor__);
    v43 = EventScriptMaster___c_TypeInfo->static_fields;
    v43->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)_9__6_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v43->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  if ( !v30 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v30,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  size = v30->fields._size;
  if ( !size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v51 = v30->fields._items->m_Items[size - 1];
  if ( !v51 )
    goto LABEL_45;
  v52 = v30->fields._size;
  klass = (int)v51[1].klass;
  if ( v52 >= 1 )
  {
    v54 = 4LL;
    while ( 1 )
    {
      if ( v52 <= (unsigned int)(v54 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v55 = *((_QWORD *)&v30->fields._items->obj.klass + v54);
      if ( !v55 || !EntityDefinitely )
        goto LABEL_45;
      if ( !UserEventEntity__getScriptFlag(EntityDefinitely, *(_DWORD *)(v55 + 20), 0LL) )
        break;
      v52 = v30->fields._size;
      if ( (int)++v54 - 4 >= v52 )
        return klass % 100;
    }
    if ( v30->fields._size <= (unsigned int)(v54 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v56 = *((_QWORD *)&v30->fields._items->obj.klass + v54);
    if ( !v56 )
      goto LABEL_45;
    klass = *(_DWORD *)(v56 + 40);
  }
  return klass % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F705D & 1) == 0 )
  {
    sub_B16FFC(&EventScriptMaster___c_TypeInfo, v1);
    byte_40F705D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventScriptMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventScriptMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}