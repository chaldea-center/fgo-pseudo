void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8897 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__, method);
    byte_40F8897 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    136,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
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

  if ( (byte_40F8895 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_40F8895 = 1;
  }
  PK = EventMissionActionAddEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v16; // x23
  int32_t v17; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionActionAddEntity_o *v20; // x25
  __int64 v21; // x10

  if ( (byte_40F8898 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_B16FFC(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40F8898 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  v16 = (CommonReleaseMaster_o *)MasterData_WarQuestSelectionMaster;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v18 )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v18,
             v17,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_17;
    v20 = (EventMissionActionAddEntity_o *)Item;
    v21 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (EventMissionActionAddEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] != EventMissionActionAddEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    if ( LODWORD(Item[1].klass) == missionID
      && HIDWORD(Item[1].klass) == progressType
      && HIDWORD(Item[2].klass) == actionType )
    {
      if ( !v16 )
        goto LABEL_17;
      if ( CommonReleaseMaster__IsOpen(v16, (int32_t)Item[2].klass, 0LL, 0, 0LL) )
        return v20;
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
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v32; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x25
  __int64 v35; // x10
  EventMissionActionAddMaster___c_c *v36; // x0
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v39; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40F889A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventMissionActionAddEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_B16FFC(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__, v17);
    sub_B16FFC(&EventMissionActionAddMaster___c_TypeInfo, v18);
    byte_40F889A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  v27 = 0;
  while ( v27 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v32 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v32 )
    {
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v32,
               v27,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v35 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (EventMissionActionAddEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == EventMissionActionAddEntity_TypeInfo )
        {
          if ( LODWORD(Item[1].klass) == missionID && HIDWORD(Item[1].klass) == progressType )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_29;
            if ( CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, (int32_t)Item[2].klass, 0LL, 0, 0LL) )
            {
              if ( !v25 )
                goto LABEL_29;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v25,
                v34,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v27;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_29;
  }
  v36 = EventMissionActionAddMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    v36 = EventMissionActionAddMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionActionAddEntity__TypeInfo,
                                                                          v28,
                                                                          v29,
                                                                          v30,
                                                                          v31);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v39,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    v40 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v40->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !v25 )
LABEL_29:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v25;
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
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v23; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v24; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x26
  __int64 v27; // x10

  if ( (byte_40F8899 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_B16FFC(&EventMissionActionAddEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F8899 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v17, v18, v19, v20),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v21,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  v23 = 0;
  while ( v23 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v24 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v24 )
    {
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v24,
               v23,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v27 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (EventMissionActionAddEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == EventMissionActionAddEntity_TypeInfo )
        {
          if ( LODWORD(Item[1].klass) == missionID
            && HIDWORD(Item[1].klass) == progressType
            && HIDWORD(Item[2].klass) == actionType )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_19;
            if ( CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, (int32_t)Item[2].klass, 0LL, 0, 0LL) )
            {
              if ( !v21 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v21,
                v26,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v23;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v21;
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
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v32; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x25
  __int64 v35; // x10
  EventMissionActionAddMaster___c_c *v36; // x0
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v39; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40F889B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventMissionActionAddEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_B16FFC(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__, v17);
    sub_B16FFC(&EventMissionActionAddMaster___c_TypeInfo, v18);
    byte_40F889B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  v27 = 0;
  while ( v27 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v32 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v32 )
    {
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v32,
               v27,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v35 = *(&EventMissionActionAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (EventMissionActionAddEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == EventMissionActionAddEntity_TypeInfo )
        {
          if ( LODWORD(Item[1].klass) == missionID
            && HIDWORD(Item[1].klass) == progressType
            && HIDWORD(Item[2].klass) == 7 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_30;
            if ( CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, (int32_t)Item[2].klass, 0LL, 0, 0LL) )
            {
              if ( !v25 )
                goto LABEL_30;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v25,
                v34,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v27;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_30;
  }
  v36 = EventMissionActionAddMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    v36 = EventMissionActionAddMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionActionAddEntity__TypeInfo,
                                                                          v28,
                                                                          v29,
                                                                          v30,
                                                                          v31);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v39,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionActionAddEntity___ctor__);
    v40 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v40->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__6_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !v25 )
LABEL_30:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v25;
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

  if ( (byte_40F8896 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__,
      entity);
    byte_40F8896 = 1;
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
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void __fastcall EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F6FED & 1) == 0 )
  {
    sub_B16FFC(&EventMissionActionAddMaster___c_TypeInfo, v1);
    byte_40F6FED = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventMissionActionAddMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventMissionActionAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.id - b->fields.id;
}