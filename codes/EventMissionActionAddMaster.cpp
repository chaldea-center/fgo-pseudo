void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4352F38 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
    byte_4352F38 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    137,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionAddEntity_o *__fastcall EventMissionActionAddMaster__GetEntity(
        EventMissionActionAddMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4352F36 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
    byte_4352F36 = 1;
  }
  PK = EventMissionActionAddEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_21C0890 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
}


EventMissionActionAddEntity_o *__fastcall EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v12; // x23
  int32_t v13; // w24
  EventMissionActionAddEntity_o *v14; // x25
  __int64 v15; // x10

  if ( (byte_4352F39 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B70694(&EventMissionActionAddEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352F39 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_B7076C(Instance, v10);
  }
  v12 = (CommonReleaseMaster_o *)Instance;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_17;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v13,
                 (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    v14 = (EventMissionActionAddEntity_o *)Instance;
    v15 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v15
      || *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v15 - 8) != EventMissionActionAddEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == actionType )
    {
      if ( !v12 )
        goto LABEL_17;
      Instance = (void *)CommonReleaseMaster__IsOpen(v12, *((_DWORD *)Instance + 8), 0LL, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return v14;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_17;
  }
  return 0LL;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetEntityListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  int32_t v11; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x25
  __int64 v13; // x10
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v16; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4352F3B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    sub_B70694(&System_Comparison_EventMissionActionAddEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B70694(&EventMissionActionAddEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__);
    sub_B70694(&EventMissionActionAddMaster___c_TypeInfo);
    byte_4352F3B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v11,
                   (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v13 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v13
          && *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v13 - 8) == EventMissionActionAddEntity_TypeInfo )
        {
          if ( *((_DWORD *)Instance + 4) == missionID && *((_DWORD *)Instance + 5) == progressType )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_29;
            Instance = (void *)CommonReleaseMaster__IsOpen(
                                 MasterData_WarQuestSelectionMaster,
                                 *((_DWORD *)Instance + 8),
                                 0LL,
                                 0,
                                 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_29;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v10,
                v12,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          Instance = this->fields.list;
          ++v11;
          if ( Instance )
            continue;
        }
      }
    }
    goto LABEL_29;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionAddMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v16,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    v17 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v17->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__5_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v17->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v10 )
LABEL_29:
    sub_B7076C(Instance, v8);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v10;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x24
  int32_t v12; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x26
  __int64 v14; // x10

  if ( (byte_4352F3A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B70694(&EventMissionActionAddEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352F3A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v11,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B7076C(Instance, v9);
  }
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v12,
                   (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v14 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v14
          && *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v14 - 8) == EventMissionActionAddEntity_TypeInfo )
        {
          if ( *((_DWORD *)Instance + 4) == missionID
            && *((_DWORD *)Instance + 5) == progressType
            && *((_DWORD *)Instance + 9) == actionType )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_19;
            Instance = (void *)CommonReleaseMaster__IsOpen(
                                 MasterData_WarQuestSelectionMaster,
                                 *((_DWORD *)Instance + 8),
                                 0LL,
                                 0,
                                 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v11,
                v13,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          Instance = this->fields.list;
          ++v12;
          if ( Instance )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v11;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetSafeActionListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  int32_t v11; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x25
  __int64 v13; // x10
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v16; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4352F3C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    sub_B70694(&System_Comparison_EventMissionActionAddEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B70694(&EventMissionActionAddEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__);
    sub_B70694(&EventMissionActionAddMaster___c_TypeInfo);
    byte_4352F3C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_30;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v11,
                   (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v13 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v13
          && *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v13 - 8) == EventMissionActionAddEntity_TypeInfo )
        {
          if ( *((_DWORD *)Instance + 4) == missionID
            && *((_DWORD *)Instance + 5) == progressType
            && *((_DWORD *)Instance + 9) == 7 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_30;
            Instance = (void *)CommonReleaseMaster__IsOpen(
                                 MasterData_WarQuestSelectionMaster,
                                 *((_DWORD *)Instance + 8),
                                 0LL,
                                 0,
                                 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_30;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v10,
                v12,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          Instance = this->fields.list;
          ++v11;
          if ( Instance )
            continue;
        }
      }
    }
    goto LABEL_30;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionAddMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v16,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    v17 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v17->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__6_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v17->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v10 )
LABEL_30:
    sub_B7076C(Instance, v8);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionActionAddMaster__TryGetEntity(
        EventMissionActionAddMaster_o *this,
        EventMissionActionAddEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4352F37 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
    byte_4352F37 = 1;
  }
  PK = EventMissionActionAddEntity__CreatePK(
         missionId,
         missionProgressType,
         id,
         *(const MethodInfo **)&missionProgressType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void __fastcall EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434F0A7 & 1) == 0 )
  {
    sub_B70694(&EventMissionActionAddMaster___c_TypeInfo);
    byte_434F0A7 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventMissionActionAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall EventMissionActionAddMaster___c___ctor(
        EventMissionActionAddMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionActionAddMaster___c___GetEntityListFromIDnType_b__5_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.id - b->fields.id;
}