System_Collections_Generic_List_SubmarineScanEvent__o *__fastcall SubmarineDataHelperScan__CreateScanEvents(
        int32_t scanId,
        SubmarineMapPanelData_o *basePanel,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x27
  const MethodInfo *v8; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *eventPanelScanMaster; // x0
  __int64 v10; // x1
  SubmarineScanEvent_c *v11; // x0
  int32_t NO_DIRECTION; // w24
  SubmarineScanEvent_o *v13; // x19
  const MethodInfo *v14; // x7
  struct System_String_o *longName; // x8
  int32_t v16; // w24
  int32_t klass; // w9
  __int64 v18; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  SubmarineScanEvent_o *v22; // x25
  unsigned __int64 v23; // x19
  _DWORD *v24; // x8
  SubmarineMapPanelData_o *v25; // x26
  int v26; // w9
  bool IsStopped_k__BackingField; // w27
  bool v28; // w28
  const MethodInfo *v29; // x7
  __int64 v30; // x10
  __int64 v32; // x0
  SubmarineScanEvent_o *v33; // [xsp+0h] [xbp-70h]
  WarEntity_o *Entity; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // [xsp+10h] [xbp-60h]
  SubmarineMapDataManager_o *v36; // [xsp+18h] [xbp-58h]

  if ( (byte_42AEDF7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
    sub_B52984(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
    sub_B52984(&SubmarineScanEvent_TypeInfo);
    byte_42AEDF7 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v8);
  if ( !eventPanelScanMaster )
    goto LABEL_29;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity->fields.longName )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v7;
  v11 = SubmarineScanEvent_TypeInfo;
  if ( (BYTE3(SubmarineScanEvent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScanEvent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo);
    v11 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v11->static_fields->NO_DIRECTION;
  v13 = (SubmarineScanEvent_o *)sub_B52A54(v11);
  SubmarineScanEvent___ctor(v13, basePanel, 0, NO_DIRECTION, 1, 0, 0, v14);
  if ( !v7
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__),
        (longName = Entity->fields.longName) == 0LL) )
  {
LABEL_29:
    sub_B52A5C(eventPanelScanMaster, v10);
  }
  v16 = 0;
  v35 = v7;
  v36 = submarineData;
  v33 = v13;
  while ( 1 )
  {
    klass = (int32_t)longName[1].klass;
    if ( v16 >= klass )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v7;
    if ( v16 >= (unsigned int)klass )
      goto LABEL_31;
    v18 = *((_QWORD *)&longName[1].monitor + v16);
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v18 )
    {
      v21 = *(unsigned int *)(v18 + 24);
      if ( (v21 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v22 = v33;
        v23 = 0LL;
        while ( v23 < (unsigned int)v21 )
        {
          if ( !basePanel )
            goto LABEL_29;
          v24 = *(_DWORD **)(v18 + 32 + 8 * v23);
          if ( !v24 )
            goto LABEL_29;
          if ( v24[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_29;
          eventPanelScanMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                  submarineData,
                                                                                  v24[8]
                                                                                + basePanel->fields._HIndex_k__BackingField,
                                                                                  v24[9]
                                                                                + basePanel->fields._VIndex_k__BackingField,
                                                                                  v20);
          if ( !eventPanelScanMaster )
            goto LABEL_28;
          if ( !v22 )
            goto LABEL_29;
          v25 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          if ( v22->fields._IsStopped_k__BackingField )
            v26 = 0;
          else
            v26 = LOBYTE(eventPanelScanMaster->fields.sb) ^ 1;
          IsStopped_k__BackingField = v22->fields._IsStopped_k__BackingField;
          v28 = v26 != 0;
          v22 = (SubmarineScanEvent_o *)sub_B52A54(SubmarineScanEvent_TypeInfo);
          SubmarineScanEvent___ctor(v22, v25, v23 + 1, v16, v28, 0, IsStopped_k__BackingField, v29);
          v7 = v35;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v35,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
          v21 = *(unsigned int *)(v18 + 24);
          v30 = v23 + 2;
          ++v23;
          submarineData = v36;
          if ( v30 >= ((v21 << 32) + 0x100000000LL) >> 32 )
            goto LABEL_28;
        }
LABEL_31:
        v32 = sub_B52A88(eventPanelScanMaster);
        sub_B52A28(v32, 0LL);
      }
LABEL_28:
      ++v16;
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
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0

  v2 = scanId;
  if ( (byte_42AEDF8 & 1) == 0 )
  {
    sub_B52984(&CommonConsumeDetailInfo___TypeInfo);
    *(_QWORD *)&scanId = sub_B52984(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    byte_42AEDF8 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_B52A5C(0LL, v4);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelScanMaster,
             v2,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(Entity->fields.bannerId, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_B5299C(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 v4; // x1
  EventPanelScanEntity_array *ListByEventId; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  EventPanelScanEntity_o *v9; // x21
  __int64 v11; // x0

  v2 = eventId;
  if ( (byte_42AEDFA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AEDFA = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_16;
  v7 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
      {
        v11 = sub_B52A88(eventPanelScanMaster);
        sub_B52A28(v11, 0LL);
      }
      v9 = ListByEventId->m_Items[v8];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v9,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) != 0 )
      {
        if ( !v9 || !v6 )
          break;
        System_Collections_Generic_List_int___Add(
          v6,
          v9->fields.id,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v7) = ListByEventId->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(eventPanelScanMaster, v4);
  }
LABEL_14:
  if ( !v6 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 v4; // x1
  EventPanelScanEntity_array *ListByEventId; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  EventPanelScanEntity_o *v9; // x21
  __int64 v11; // x0

  v2 = eventId;
  if ( (byte_42AEDF9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AEDF9 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_16;
  v7 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
      {
        v11 = sub_B52A88(eventPanelScanMaster);
        sub_B52A28(v11, 0LL);
      }
      v9 = ListByEventId->m_Items[v8];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v9,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) == 0 )
      {
        if ( !v9 || !v6 )
          break;
        System_Collections_Generic_List_int___Add(
          v6,
          v9->fields.id,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v7) = ListByEventId->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(eventPanelScanMaster, v4);
  }
LABEL_14:
  if ( !v6 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B52A5C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  v9 = *(_DWORD *)(*(_QWORD *)&hIndex + 24LL);
  if ( v9 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= v9 )
    {
      v12 = sub_B52A88(*(_QWORD *)&hIndex);
      sub_B52A28(v12, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42AEDF4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEDF4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42AEDF3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEDF3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42AEDF5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEDF5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42AEDF6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEDF6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
}