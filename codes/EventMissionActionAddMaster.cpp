void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188DA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__, method);
    byte_4188DA5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    136,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
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

  if ( (byte_4188DA3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4188DA3 = 1;
  }
  PK = EventMissionActionAddEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionAddEntity_o *__fastcall EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *Instance; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v16; // x23
  int32_t v17; // w24
  EventMissionActionAddEntity_o *v18; // x25
  __int64 v19; // x10

  if ( (byte_4188DA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_B2C35C(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4188DA6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_B2C434(Instance, v14);
  }
  v16 = (CommonReleaseMaster_o *)Instance;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_17;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v17,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    v18 = (EventMissionActionAddEntity_o *)Instance;
    v19 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v19
      || *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v19 - 8) != EventMissionActionAddEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == actionType )
    {
      if ( !v16 )
        goto LABEL_17;
      Instance = (void *)CommonReleaseMaster__IsOpen(v16, *((_DWORD *)Instance + 8), 0LL, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return v18;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_17;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetEntityListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  __int64 v20; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  int32_t v23; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x25
  __int64 v25; // x10
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v28; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4188DA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_EventMissionActionAddEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_B2C35C(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__, v17);
    sub_B2C35C(&EventMissionActionAddMaster___c_TypeInfo, v18);
    byte_4188DA8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  v23 = 0;
  while ( v23 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v23,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v25 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v25
          && *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v25 - 8) == EventMissionActionAddEntity_TypeInfo )
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
              if ( !v22 )
                goto LABEL_29;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v22,
                v24,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          Instance = this->fields.list;
          ++v23;
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
    v28 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v28,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    v29 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v29->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v22 )
LABEL_29:
    sub_B2C434(Instance, v20);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v22;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *Instance; // x0
  __int64 v16; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x24
  int32_t v19; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x26
  __int64 v21; // x10

  if ( (byte_4188DA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_B2C35C(&EventMissionActionAddEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4188DA7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v18,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B2C434(Instance, v16);
  }
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v19,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v21 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v21
          && *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v21 - 8) == EventMissionActionAddEntity_TypeInfo )
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
              if ( !v18 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v18,
                v20,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          Instance = this->fields.list;
          ++v19;
          if ( Instance )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetSafeActionListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  __int64 v20; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  int32_t v23; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x25
  __int64 v25; // x10
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v28; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4188DA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_EventMissionActionAddEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_B2C35C(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__, v17);
    sub_B2C35C(&EventMissionActionAddMaster___c_TypeInfo, v18);
    byte_4188DA9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_30;
  v23 = 0;
  while ( v23 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v23,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v25 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v25
          && *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v25 - 8) == EventMissionActionAddEntity_TypeInfo )
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
              if ( !v22 )
                goto LABEL_30;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v22,
                v24,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          Instance = this->fields.list;
          ++v23;
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
    v28 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v28,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    v29 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v29->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__6_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v22 )
LABEL_30:
    sub_B2C434(Instance, v20);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v22;
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

  if ( (byte_4188DA4 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__,
      entity);
    byte_4188DA4 = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void __fastcall EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B20 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionActionAddMaster___c_TypeInfo, v1);
    byte_4184B20 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventMissionActionAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.id - b->fields.id;
}