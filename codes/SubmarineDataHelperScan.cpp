System_Collections_Generic_List_SubmarineScanEvent__o *__fastcall SubmarineDataHelperScan__CreateScanEvents(
        int32_t scanId,
        SubmarineMapPanelData_o *basePanel,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  SubmarineMapDataManager_o *v5; // x23
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x27
  const MethodInfo *v15; // x0
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  SubmarineScanEvent_c *v21; // x0
  int32_t NO_DIRECTION; // w24
  SubmarineScanEvent_o *v23; // x19
  const MethodInfo *v24; // x7
  SubmarineMapPanelData_o *PanelByIndices; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  __int64 v29; // x4
  struct System_String_o *longName; // x8
  int32_t v31; // w24
  int32_t klass; // w9
  __int64 v33; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x0
  __int64 v35; // x8
  SubmarineScanEvent_o *v36; // x25
  unsigned __int64 v37; // x19
  _DWORD *v38; // x8
  SubmarineMapPanelData_o *v39; // x26
  int v40; // w9
  bool IsStopped_k__BackingField; // w27
  bool v42; // w28
  const MethodInfo *v43; // x7
  __int64 v44; // x10
  SubmarineScanEvent_o *v46; // [xsp+0h] [xbp-70h]
  WarEntity_o *Entity; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // [xsp+10h] [xbp-60h]
  SubmarineMapDataManager_o *v49; // [xsp+18h] [xbp-58h]

  v5 = submarineData;
  if ( (byte_40F7C26 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, basePanel);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v12);
    sub_B16FFC(&SubmarineScanEvent_TypeInfo, v13);
    byte_40F7C26 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SubmarineScanEvent__TypeInfo,
                                                                                                  basePanel,
                                                                                                  submarineData,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(v15);
  if ( !eventPanelScanMaster )
    goto LABEL_29;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelScanMaster,
             scanId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity->fields.longName )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v14;
  v21 = SubmarineScanEvent_TypeInfo;
  if ( (BYTE3(SubmarineScanEvent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScanEvent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo);
    v21 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v21->static_fields->NO_DIRECTION;
  v23 = (SubmarineScanEvent_o *)sub_B170CC(v21, v17, v18, v19, v20);
  SubmarineScanEvent___ctor(v23, basePanel, 0, NO_DIRECTION, 1, 0, 0, v24);
  if ( !v14
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__),
        (longName = Entity->fields.longName) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  v31 = 0;
  v48 = v14;
  v49 = v5;
  v46 = v23;
  while ( 1 )
  {
    klass = (int32_t)longName[1].klass;
    if ( v31 >= klass )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v14;
    if ( v31 >= (unsigned int)klass )
      goto LABEL_31;
    v33 = *((_QWORD *)&longName[1].monitor + v31);
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                    v26,
                                                                                                    v27,
                                                                                                    v28,
                                                                                                    v29);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v34,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v33 )
    {
      v35 = *(unsigned int *)(v33 + 24);
      if ( (v35 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v36 = v46;
        v37 = 0LL;
        while ( v37 < (unsigned int)v35 )
        {
          if ( !basePanel )
            goto LABEL_29;
          v38 = *(_DWORD **)(v33 + 32 + 8 * v37);
          if ( !v38 )
            goto LABEL_29;
          if ( v38[6] < 2u )
            break;
          if ( !v5 )
            goto LABEL_29;
          PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                             v5,
                             v38[8] + basePanel->fields._HIndex_k__BackingField,
                             v38[9] + basePanel->fields._VIndex_k__BackingField,
                             v28);
          if ( !PanelByIndices )
            goto LABEL_28;
          if ( !v36 )
            goto LABEL_29;
          v39 = PanelByIndices;
          v40 = !v36->fields._IsStopped_k__BackingField && !PanelByIndices->fields._IsOpened_k__BackingField;
          IsStopped_k__BackingField = v36->fields._IsStopped_k__BackingField;
          v42 = v40 != 0;
          v36 = (SubmarineScanEvent_o *)sub_B170CC(SubmarineScanEvent_TypeInfo, v26, v27, v28, v29);
          SubmarineScanEvent___ctor(v36, v39, v37 + 1, v31, v42, 0, IsStopped_k__BackingField, v43);
          v14 = v48;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v48,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
          v35 = *(unsigned int *)(v33 + 24);
          v44 = v37 + 2;
          ++v37;
          v5 = v49;
          if ( v44 >= ((v35 << 32) + 0x100000000LL) >> 32 )
            goto LABEL_28;
        }
LABEL_31:
        sub_B17100(PanelByIndices, v26, v27);
        sub_B170A0();
      }
LABEL_28:
      ++v31;
      longName = Entity->fields.longName;
      if ( longName )
        continue;
    }
    goto LABEL_29;
  }
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeDetailInfo_array *__fastcall SubmarineDataHelperScan__GetConsumeItemByScanId(
        int32_t scanId,
        const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  WarEntity_o *Entity; // x0
  __int64 v6; // x2

  v2 = scanId;
  if ( (byte_40F7C27 & 1) == 0 )
  {
    sub_B16FFC(&CommonConsumeDetailInfo___TypeInfo, method);
    *(_QWORD *)&scanId = sub_B16FFC(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v3);
    byte_40F7C27 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_B170D4();
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelScanMaster,
             v2,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(Entity->fields.bannerId, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_B17014(CommonConsumeDetailInfo___TypeInfo, 0LL, v6);
}


System_String_o *__fastcall SubmarineDataHelperScan__GetConsumeTextForScan(int32_t scanId, const MethodInfo *method)
{
  CommonConsumeDetailInfo_array *ConsumeItemByScanId; // x0

  ConsumeItemByScanId = SubmarineDataHelperScan__GetConsumeItemByScanId(scanId, method);
  return CommonConsumeDetail__GetConsumeDetailDescription(ConsumeItemByScanId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SubmarineDataHelperScan__GetReleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  EventPanelScanEntity_array *ListByEventId; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_List_int__o *v12; // x20
  _BOOL8 IsSatisfyReleaseCondition; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  EventPanelScanEntity_o *v18; // x21
  EventPanelScanMaster_o *v19; // x0

  v2 = eventId;
  if ( (byte_40F7C29 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_40F7C29 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v12 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v8,
                                                    v9,
                                                    v10,
                                                    v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_16;
  v16 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
      {
        sub_B17100(IsSatisfyReleaseCondition, v14, v15);
        sub_B170A0();
      }
      v18 = ListByEventId->m_Items[v17];
      v19 = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)IsSatisfyReleaseCondition);
      if ( !v19 )
        break;
      IsSatisfyReleaseCondition = EventPanelScanMaster__IsSatisfyReleaseCondition(v19, v18, 0LL);
      if ( IsSatisfyReleaseCondition )
      {
        if ( !v18 || !v12 )
          break;
        System_Collections_Generic_List_int___Add(
          v12,
          v18->fields.id,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v16) = ListByEventId->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v12 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  EventPanelScanEntity_array *ListByEventId; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_List_int__o *v12; // x20
  _BOOL8 IsSatisfyReleaseCondition; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  EventPanelScanEntity_o *v18; // x21
  EventPanelScanMaster_o *v19; // x0

  v2 = eventId;
  if ( (byte_40F7C28 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_40F7C28 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v12 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v8,
                                                    v9,
                                                    v10,
                                                    v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_16;
  v16 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
      {
        sub_B17100(IsSatisfyReleaseCondition, v14, v15);
        sub_B170A0();
      }
      v18 = ListByEventId->m_Items[v17];
      v19 = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)IsSatisfyReleaseCondition);
      if ( !v19 )
        break;
      IsSatisfyReleaseCondition = EventPanelScanMaster__IsSatisfyReleaseCondition(v19, v18, 0LL);
      if ( !IsSatisfyReleaseCondition )
      {
        if ( !v18 || !v12 )
          break;
        System_Collections_Generic_List_int___Add(
          v12,
          v18->fields.id,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v16) = ListByEventId->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v12 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall SubmarineDataHelperScan__IsScannable(
        int32_t hIndex,
        int32_t vIndex,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v8; // x4
  SubmarineMapPanelData_array *NeighborPanels; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  unsigned int v14; // w9
  SubmarineMapPanelData_o *v15; // x10

  if ( !submarineData )
    goto LABEL_15;
  PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(submarineData, hIndex, vIndex, method);
  if ( !PanelByIndices )
    goto LABEL_15;
  if ( PanelByIndices->fields._IsOpened_k__BackingField )
    return 0;
  NeighborPanels = SubmarineMapDataManager__GetNeighborPanels(submarineData, hIndex, vIndex, 0, v8);
  if ( !NeighborPanels )
LABEL_15:
    sub_B170D4();
  max_length = NeighborPanels->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= max_length )
    {
      sub_B17100(NeighborPanels, v11, v12);
      sub_B170A0();
    }
    v15 = NeighborPanels->m_Items[v14];
    if ( !v15 )
      goto LABEL_15;
    if ( v15->fields._IsOpened_k__BackingField && !v15->fields._HasEnemyParts_k__BackingField )
      return 1;
    if ( (int)++v14 >= max_length )
      return 0;
  }
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C23 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C23 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C22 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C22 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C24 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C24 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C25 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C25 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
}