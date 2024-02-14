System_Collections_Generic_List_SubmarineScanEvent__o *__fastcall SubmarineDataHelperScan__CreateScanEvents(
        int32_t scanId,
        SubmarineMapPanelData_o *basePanel,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *v4; // x23
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x27
  const MethodInfo *v14; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *eventPanelScanMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  SubmarineScanEvent_c *v18; // x0
  int32_t NO_DIRECTION; // w24
  SubmarineScanEvent_o *v20; // x19
  const MethodInfo *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_String_o *longName; // x8
  int32_t v25; // w24
  int32_t klass; // w9
  __int64 v27; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x0
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  SubmarineScanEvent_o *v31; // x25
  unsigned __int64 v32; // x19
  _DWORD *v33; // x8
  SubmarineMapPanelData_o *v34; // x26
  int v35; // w9
  bool IsStopped_k__BackingField; // w27
  bool v37; // w28
  const MethodInfo *v38; // x7
  __int64 v39; // x10
  __int64 v41; // x0
  SubmarineScanEvent_o *v42; // [xsp+0h] [xbp-70h]
  WarEntity_o *Entity; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // [xsp+10h] [xbp-60h]
  SubmarineMapDataManager_o *v45; // [xsp+18h] [xbp-58h]

  v4 = submarineData;
  if ( (byte_42135DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, basePanel);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v11);
    sub_B0D8A4(&SubmarineScanEvent_TypeInfo, v12);
    byte_42135DB = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SubmarineScanEvent__TypeInfo,
                                                                                                  basePanel,
                                                                                                  submarineData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v14);
  if ( !eventPanelScanMaster )
    goto LABEL_29;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity->fields.longName )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
  v18 = SubmarineScanEvent_TypeInfo;
  if ( (BYTE3(SubmarineScanEvent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScanEvent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo);
    v18 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v18->static_fields->NO_DIRECTION;
  v20 = (SubmarineScanEvent_o *)sub_B0D974(v18, v16, v17);
  SubmarineScanEvent___ctor(v20, basePanel, 0, NO_DIRECTION, 1, 0, 0, v21);
  if ( !v13
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__),
        (longName = Entity->fields.longName) == 0LL) )
  {
LABEL_29:
    sub_B0D97C(eventPanelScanMaster);
  }
  v25 = 0;
  v44 = v13;
  v45 = v4;
  v42 = v20;
  while ( 1 )
  {
    klass = (int32_t)longName[1].klass;
    if ( v25 >= klass )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
    if ( v25 >= (unsigned int)klass )
      goto LABEL_31;
    v27 = *((_QWORD *)&longName[1].monitor + v25);
    v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                    v22,
                                                                                                    v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v28,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v27 )
    {
      v30 = *(unsigned int *)(v27 + 24);
      if ( (v30 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v31 = v42;
        v32 = 0LL;
        while ( v32 < (unsigned int)v30 )
        {
          if ( !basePanel )
            goto LABEL_29;
          v33 = *(_DWORD **)(v27 + 32 + 8 * v32);
          if ( !v33 )
            goto LABEL_29;
          if ( v33[6] < 2u )
            break;
          if ( !v4 )
            goto LABEL_29;
          eventPanelScanMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                  v4,
                                                                                  v33[8]
                                                                                + basePanel->fields._HIndex_k__BackingField,
                                                                                  v33[9]
                                                                                + basePanel->fields._VIndex_k__BackingField,
                                                                                  v29);
          if ( !eventPanelScanMaster )
            goto LABEL_28;
          if ( !v31 )
            goto LABEL_29;
          v34 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          if ( v31->fields._IsStopped_k__BackingField )
            v35 = 0;
          else
            v35 = LOBYTE(eventPanelScanMaster->fields.sb) ^ 1;
          IsStopped_k__BackingField = v31->fields._IsStopped_k__BackingField;
          v37 = v35 != 0;
          v31 = (SubmarineScanEvent_o *)sub_B0D974(SubmarineScanEvent_TypeInfo, v22, v23);
          SubmarineScanEvent___ctor(v31, v34, v32 + 1, v25, v37, 0, IsStopped_k__BackingField, v38);
          v13 = v44;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
          v30 = *(unsigned int *)(v27 + 24);
          v39 = v32 + 2;
          ++v32;
          v4 = v45;
          if ( v39 >= ((v30 << 32) + 0x100000000LL) >> 32 )
            goto LABEL_28;
        }
LABEL_31:
        v41 = sub_B0D9A8(eventPanelScanMaster);
        sub_B0D948(v41, 0LL);
      }
LABEL_28:
      ++v25;
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

  v2 = scanId;
  if ( (byte_42135DC & 1) == 0 )
  {
    sub_B0D8A4(&CommonConsumeDetailInfo___TypeInfo, method);
    *(_QWORD *)&scanId = sub_B0D8A4(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v3);
    byte_42135DC = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_B0D97C(0LL);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelScanMaster,
             v2,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(Entity->fields.bannerId, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_B0D8BC(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  EventPanelScanEntity_o *v13; // x21
  __int64 v15; // x0

  v2 = eventId;
  if ( (byte_42135DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_42135DE = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v8, v9);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_16;
  v11 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B0D9A8(eventPanelScanMaster);
        sub_B0D948(v15, 0LL);
      }
      v13 = ListByEventId->m_Items[v12];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v13,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) != 0 )
      {
        if ( !v13 || !v10 )
          break;
        System_Collections_Generic_List_int___Add(
          v10,
          v13->fields.id,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v11) = ListByEventId->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(eventPanelScanMaster);
  }
LABEL_14:
  if ( !v10 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  EventPanelScanEntity_o *v13; // x21
  __int64 v15; // x0

  v2 = eventId;
  if ( (byte_42135DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_42135DD = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v8, v9);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_16;
  v11 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B0D9A8(eventPanelScanMaster);
        sub_B0D948(v15, 0LL);
      }
      v13 = ListByEventId->m_Items[v12];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v13,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) == 0 )
      {
        if ( !v13 || !v10 )
          break;
        System_Collections_Generic_List_int___Add(
          v10,
          v13->fields.id,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v11) = ListByEventId->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(eventPanelScanMaster);
  }
LABEL_14:
  if ( !v10 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineDataHelperScan__IsScannable(
        int32_t hIndex,
        int32_t vIndex,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
  int32_t v5; // w21
  const MethodInfo *v7; // x4
  int v9; // w8
  unsigned int v10; // w9
  __int64 v11; // x10
  __int64 v12; // x0

  if ( !submarineData )
    goto LABEL_15;
  v5 = hIndex;
  *(_QWORD *)&hIndex = SubmarineMapDataManager__GetPanelByIndices(submarineData, hIndex, vIndex, method);
  if ( !*(_QWORD *)&hIndex )
    goto LABEL_15;
  if ( *(_BYTE *)(*(_QWORD *)&hIndex + 56LL) )
    return 0;
  *(_QWORD *)&hIndex = SubmarineMapDataManager__GetNeighborPanels(submarineData, v5, vIndex, 0, v7);
  if ( !*(_QWORD *)&hIndex )
LABEL_15:
    sub_B0D97C(*(_QWORD *)&hIndex);
  v9 = *(_DWORD *)(*(_QWORD *)&hIndex + 24LL);
  if ( v9 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= v9 )
    {
      v12 = sub_B0D9A8(*(_QWORD *)&hIndex);
      sub_B0D948(v12, 0LL);
    }
    v11 = *(_QWORD *)(*(_QWORD *)&hIndex + 8LL * (int)v10 + 32);
    if ( !v11 )
      goto LABEL_15;
    if ( *(_BYTE *)(v11 + 56) && !*(_BYTE *)(v11 + 57) )
      return 1;
    if ( (int)++v10 >= v9 )
      return 0;
  }
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135D8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135D8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135D7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135D7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135D9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135D9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135DA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
}