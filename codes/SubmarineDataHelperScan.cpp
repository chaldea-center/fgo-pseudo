System_Collections_Generic_List_SubmarineScanEvent__o *__fastcall SubmarineDataHelperScan__CreateScanEvents(
        int32_t scanId,
        SubmarineMapPanelData_o *basePanel,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
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
  SubmarineScanEvent_c *v17; // x0
  int32_t NO_DIRECTION; // w24
  SubmarineScanEvent_o *v19; // x19
  const MethodInfo *v20; // x7
  struct System_String_o *longName; // x8
  int32_t v22; // w24
  int32_t klass; // w9
  __int64 v24; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x0
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  SubmarineScanEvent_o *v28; // x25
  unsigned __int64 v29; // x19
  _DWORD *v30; // x8
  SubmarineMapPanelData_o *v31; // x26
  int v32; // w9
  bool IsStopped_k__BackingField; // w27
  bool v34; // w28
  const MethodInfo *v35; // x7
  __int64 v36; // x10
  __int64 v38; // x0
  SubmarineScanEvent_o *v39; // [xsp+0h] [xbp-70h]
  WarEntity_o *Entity; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // [xsp+10h] [xbp-60h]
  SubmarineMapDataManager_o *v42; // [xsp+18h] [xbp-58h]

  if ( (byte_4185792 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, basePanel);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v11);
    sub_B2C35C(&SubmarineScanEvent_TypeInfo, v12);
    byte_4185792 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v14);
  if ( !eventPanelScanMaster )
    goto LABEL_29;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity->fields.longName )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
  v17 = SubmarineScanEvent_TypeInfo;
  if ( (BYTE3(SubmarineScanEvent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScanEvent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo);
    v17 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v17->static_fields->NO_DIRECTION;
  v19 = (SubmarineScanEvent_o *)sub_B2C42C(v17);
  SubmarineScanEvent___ctor(v19, basePanel, 0, NO_DIRECTION, 1, 0, 0, v20);
  if ( !v13
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__),
        (longName = Entity->fields.longName) == 0LL) )
  {
LABEL_29:
    sub_B2C434(eventPanelScanMaster, v16);
  }
  v22 = 0;
  v41 = v13;
  v42 = submarineData;
  v39 = v19;
  while ( 1 )
  {
    klass = (int32_t)longName[1].klass;
    if ( v22 >= klass )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
    if ( v22 >= (unsigned int)klass )
      goto LABEL_31;
    v24 = *((_QWORD *)&longName[1].monitor + v22);
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v24 )
    {
      v27 = *(unsigned int *)(v24 + 24);
      if ( (v27 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v28 = v39;
        v29 = 0LL;
        while ( v29 < (unsigned int)v27 )
        {
          if ( !basePanel )
            goto LABEL_29;
          v30 = *(_DWORD **)(v24 + 32 + 8 * v29);
          if ( !v30 )
            goto LABEL_29;
          if ( v30[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_29;
          eventPanelScanMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                  submarineData,
                                                                                  v30[8]
                                                                                + basePanel->fields._HIndex_k__BackingField,
                                                                                  v30[9]
                                                                                + basePanel->fields._VIndex_k__BackingField,
                                                                                  v26);
          if ( !eventPanelScanMaster )
            goto LABEL_28;
          if ( !v28 )
            goto LABEL_29;
          v31 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          if ( v28->fields._IsStopped_k__BackingField )
            v32 = 0;
          else
            v32 = LOBYTE(eventPanelScanMaster->fields.sb) ^ 1;
          IsStopped_k__BackingField = v28->fields._IsStopped_k__BackingField;
          v34 = v32 != 0;
          v28 = (SubmarineScanEvent_o *)sub_B2C42C(SubmarineScanEvent_TypeInfo);
          SubmarineScanEvent___ctor(v28, v31, v29 + 1, v22, v34, 0, IsStopped_k__BackingField, v35);
          v13 = v41;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v41,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
          v27 = *(unsigned int *)(v24 + 24);
          v36 = v29 + 2;
          ++v29;
          submarineData = v42;
          if ( v36 >= ((v27 << 32) + 0x100000000LL) >> 32 )
            goto LABEL_28;
        }
LABEL_31:
        v38 = sub_B2C460(eventPanelScanMaster);
        sub_B2C400(v38, 0LL);
      }
LABEL_28:
      ++v22;
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
  __int64 v5; // x1
  WarEntity_o *Entity; // x0

  v2 = scanId;
  if ( (byte_4185793 & 1) == 0 )
  {
    sub_B2C35C(&CommonConsumeDetailInfo___TypeInfo, method);
    *(_QWORD *)&scanId = sub_B2C35C(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v3);
    byte_4185793 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_B2C434(0LL, v5);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelScanMaster,
             v2,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(Entity->fields.bannerId, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_B2C374(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  __int64 v7; // x1
  EventPanelScanEntity_array *ListByEventId; // x19
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  EventPanelScanEntity_o *v12; // x21
  __int64 v14; // x0

  v2 = eventId;
  if ( (byte_4185795 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4185795 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_16;
  v10 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v14 = sub_B2C460(eventPanelScanMaster);
        sub_B2C400(v14, 0LL);
      }
      v12 = ListByEventId->m_Items[v11];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v12,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) != 0 )
      {
        if ( !v12 || !v9 )
          break;
        System_Collections_Generic_List_int___Add(
          v9,
          v12->fields.id,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v10) = ListByEventId->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(eventPanelScanMaster, v7);
  }
LABEL_14:
  if ( !v9 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 v7; // x1
  EventPanelScanEntity_array *ListByEventId; // x19
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  EventPanelScanEntity_o *v12; // x21
  __int64 v14; // x0

  v2 = eventId;
  if ( (byte_4185794 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4185794 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_16;
  v10 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v14 = sub_B2C460(eventPanelScanMaster);
        sub_B2C400(v14, 0LL);
      }
      v12 = ListByEventId->m_Items[v11];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v12,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) == 0 )
      {
        if ( !v12 || !v9 )
          break;
        System_Collections_Generic_List_int___Add(
          v9,
          v12->fields.id,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v10) = ListByEventId->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(eventPanelScanMaster, v7);
  }
LABEL_14:
  if ( !v9 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B2C434(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  v9 = *(_DWORD *)(*(_QWORD *)&hIndex + 24LL);
  if ( v9 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= v9 )
    {
      v12 = sub_B2C460(*(_QWORD *)&hIndex);
      sub_B2C400(v12, 0LL);
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
  __int64 v4; // x1

  if ( (byte_418578F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_418578F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418578E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_418578E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4185790 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4185790 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4185791 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4185791 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
}