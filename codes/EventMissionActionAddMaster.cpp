void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9B5B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9B5B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    137,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
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

  if ( (byte_42E9B59 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__,
      missionId,
      missionProgressType,
      *(_QWORD *)&id);
    byte_42E9B59 = 1;
  }
  PK = EventMissionActionAddEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionAddEntity_o *__fastcall EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v24; // x23
  int32_t v25; // w24
  EventMissionActionAddEntity_o *v26; // x25
  __int64 v27; // x10

  if ( (byte_42E9B5C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      missionID,
      progressType,
      *(_QWORD *)&actionType);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v12, v13, v14);
    sub_B5D5C4(&EventMissionActionAddEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E9B5C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(Instance, v22);
  }
  v24 = (CommonReleaseMaster_o *)Instance;
  v25 = 0;
  while ( v25 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_17;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v25,
                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    v26 = (EventMissionActionAddEntity_o *)Instance;
    v27 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v27
      || *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v27 - 8) != EventMissionActionAddEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == actionType )
    {
      if ( !v24 )
        goto LABEL_17;
      Instance = (void *)CommonReleaseMaster__IsOpen(v24, *((_DWORD *)Instance + 8), 0LL, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return v26;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v25;
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  void *Instance; // x0
  __int64 v44; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x22
  int32_t v47; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x25
  __int64 v49; // x10
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v52; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_42E9B5E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      missionID,
      progressType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_EventMissionActionAddEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v16, v17, v18);
    sub_B5D5C4(&EventMissionActionAddEntity_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__, v37, v38, v39);
    sub_B5D5C4(&EventMissionActionAddMaster___c_TypeInfo, v40, v41, v42);
    byte_42E9B5E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  v47 = 0;
  while ( v47 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v47,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v49 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == EventMissionActionAddEntity_TypeInfo )
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
              if ( !v46 )
                goto LABEL_29;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v46,
                v48,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          Instance = this->fields.list;
          ++v47;
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v52,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    v53 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v53->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v46 )
LABEL_29:
    sub_B5D69C(Instance, v44);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v46,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v46;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  void *Instance; // x0
  __int64 v30; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x24
  int32_t v33; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x26
  __int64 v35; // x10

  if ( (byte_42E9B5D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      missionID,
      progressType,
      *(_QWORD *)&actionType);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&EventMissionActionAddEntity_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42E9B5D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v32,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(Instance, v30);
  }
  v33 = 0;
  while ( v33 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v33,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v35 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v35
          && *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v35 - 8) == EventMissionActionAddEntity_TypeInfo )
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
              if ( !v32 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v32,
                v34,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          Instance = this->fields.list;
          ++v33;
          if ( Instance )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v32;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetSafeActionListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  void *Instance; // x0
  __int64 v44; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x22
  int32_t v47; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x25
  __int64 v49; // x10
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v52; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_42E9B5F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      missionID,
      progressType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_EventMissionActionAddEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v16, v17, v18);
    sub_B5D5C4(&EventMissionActionAddEntity_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__, v37, v38, v39);
    sub_B5D5C4(&EventMissionActionAddMaster___c_TypeInfo, v40, v41, v42);
    byte_42E9B5F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_30;
  v47 = 0;
  while ( v47 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( Instance )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v47,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v49 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == EventMissionActionAddEntity_TypeInfo )
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
              if ( !v46 )
                goto LABEL_30;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v46,
                v48,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          Instance = this->fields.list;
          ++v47;
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v52,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    v53 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v53->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__6_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v46 )
LABEL_30:
    sub_B5D69C(Instance, v44);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v46,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v46;
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

  if ( (byte_42E9B5A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      missionId,
      *(_QWORD *)&missionProgressType);
    byte_42E9B5A = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void __fastcall EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E655B & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionActionAddMaster___c_TypeInfo, v1, v2, v3);
    byte_42E655B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventMissionActionAddMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}