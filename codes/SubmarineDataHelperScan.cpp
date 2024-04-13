System_Collections_Generic_List_SubmarineScanEvent__o *__fastcall SubmarineDataHelperScan__CreateScanEvents(
        int32_t scanId,
        SubmarineMapPanelData_o *basePanel,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *v4; // x23
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x27
  const MethodInfo *v26; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *eventPanelScanMaster; // x0
  __int64 v28; // x1
  SubmarineScanEvent_c *v29; // x0
  int32_t NO_DIRECTION; // w24
  SubmarineScanEvent_o *v31; // x19
  const MethodInfo *v32; // x7
  struct System_String_o *longName; // x8
  int32_t v34; // w24
  int32_t klass; // w9
  __int64 v36; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x0
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  SubmarineScanEvent_o *v40; // x25
  unsigned __int64 v41; // x19
  _DWORD *v42; // x8
  SubmarineMapPanelData_o *v43; // x26
  int v44; // w9
  bool IsStopped_k__BackingField; // w27
  bool v46; // w28
  const MethodInfo *v47; // x7
  __int64 v48; // x10
  __int64 v50; // x0
  SubmarineScanEvent_o *v51; // [xsp+0h] [xbp-70h]
  WarEntity_o *Entity; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // [xsp+10h] [xbp-60h]
  SubmarineMapDataManager_o *v54; // [xsp+18h] [xbp-58h]

  v4 = submarineData;
  if ( (byte_42E7B1E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
      (_DWORD)basePanel,
      (_DWORD)submarineData,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&SubmarineScanEvent_TypeInfo, v22, v23, v24);
    byte_42E7B1E = 1;
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v26);
  if ( !eventPanelScanMaster )
    goto LABEL_29;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity->fields.longName )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v25;
  v29 = SubmarineScanEvent_TypeInfo;
  if ( (BYTE3(SubmarineScanEvent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScanEvent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo);
    v29 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v29->static_fields->NO_DIRECTION;
  v31 = (SubmarineScanEvent_o *)sub_B5D694(v29);
  SubmarineScanEvent___ctor(v31, basePanel, 0, NO_DIRECTION, 1, 0, 0, v32);
  if ( !v25
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v25,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__),
        (longName = Entity->fields.longName) == 0LL) )
  {
LABEL_29:
    sub_B5D69C(eventPanelScanMaster, v28);
  }
  v34 = 0;
  v53 = v25;
  v54 = v4;
  v51 = v31;
  while ( 1 )
  {
    klass = (int32_t)longName[1].klass;
    if ( v34 >= klass )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v25;
    if ( v34 >= (unsigned int)klass )
      goto LABEL_31;
    v36 = *((_QWORD *)&longName[1].monitor + v34);
    v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v37,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v36 )
    {
      v39 = *(unsigned int *)(v36 + 24);
      if ( (v39 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v40 = v51;
        v41 = 0LL;
        while ( v41 < (unsigned int)v39 )
        {
          if ( !basePanel )
            goto LABEL_29;
          v42 = *(_DWORD **)(v36 + 32 + 8 * v41);
          if ( !v42 )
            goto LABEL_29;
          if ( v42[6] < 2u )
            break;
          if ( !v4 )
            goto LABEL_29;
          eventPanelScanMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                  v4,
                                                                                  v42[8]
                                                                                + basePanel->fields._HIndex_k__BackingField,
                                                                                  v42[9]
                                                                                + basePanel->fields._VIndex_k__BackingField,
                                                                                  v38);
          if ( !eventPanelScanMaster )
            goto LABEL_28;
          if ( !v40 )
            goto LABEL_29;
          v43 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          if ( v40->fields._IsStopped_k__BackingField )
            v44 = 0;
          else
            v44 = LOBYTE(eventPanelScanMaster->fields.sb) ^ 1;
          IsStopped_k__BackingField = v40->fields._IsStopped_k__BackingField;
          v46 = v44 != 0;
          v40 = (SubmarineScanEvent_o *)sub_B5D694(SubmarineScanEvent_TypeInfo);
          SubmarineScanEvent___ctor(v40, v43, v41 + 1, v34, v46, 0, IsStopped_k__BackingField, v47);
          v25 = v53;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v53,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
          v39 = *(unsigned int *)(v36 + 24);
          v48 = v41 + 2;
          ++v41;
          v4 = v54;
          if ( v48 >= ((v39 << 32) + 0x100000000LL) >> 32 )
            goto LABEL_28;
        }
LABEL_31:
        v50 = sub_B5D6C8(eventPanelScanMaster);
        sub_B5D668(v50, 0LL);
      }
LABEL_28:
      ++v34;
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
  int v2; // w2
  __int64 v3; // x3
  int32_t v4; // w19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 v9; // x1
  WarEntity_o *Entity; // x0

  v4 = scanId;
  if ( (byte_42E7B1F & 1) == 0 )
  {
    sub_B5D5C4(&CommonConsumeDetailInfo___TypeInfo, (_DWORD)method, v2, v3);
    *(_QWORD *)&scanId = sub_B5D5C4(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v5,
                           v6,
                           v7);
    byte_42E7B1F = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_B5D69C(0LL, v9);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelScanMaster,
             v4,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(Entity->fields.bannerId, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_B5D5DC(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t v4; // w19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 v15; // x1
  EventPanelScanEntity_array *ListByEventId; // x19
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x8
  unsigned __int64 v19; // x22
  EventPanelScanEntity_o *v20; // x21
  __int64 v22; // x0

  v4 = eventId;
  if ( (byte_42E7B21 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    *(_QWORD *)&eventId = sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42E7B21 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v4, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !ListByEventId )
    goto LABEL_16;
  v18 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v18 )
      {
        v22 = sub_B5D6C8(eventPanelScanMaster);
        sub_B5D668(v22, 0LL);
      }
      v20 = ListByEventId->m_Items[v19];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v20,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) != 0 )
      {
        if ( !v20 || !v17 )
          break;
        System_Collections_Generic_List_int___Add(
          v17,
          v20->fields.id,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v18) = ListByEventId->max_length;
      if ( (__int64)++v19 >= (int)v18 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(eventPanelScanMaster, v15);
  }
LABEL_14:
  if ( !v17 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v4; // w19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 v15; // x1
  EventPanelScanEntity_array *ListByEventId; // x19
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x8
  unsigned __int64 v19; // x22
  EventPanelScanEntity_o *v20; // x21
  __int64 v22; // x0

  v4 = eventId;
  if ( (byte_42E7B20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    *(_QWORD *)&eventId = sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42E7B20 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_16;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v4, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !ListByEventId )
    goto LABEL_16;
  v18 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v18 )
      {
        v22 = sub_B5D6C8(eventPanelScanMaster);
        sub_B5D668(v22, 0LL);
      }
      v20 = ListByEventId->m_Items[v19];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v20,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) == 0 )
      {
        if ( !v20 || !v17 )
          break;
        System_Collections_Generic_List_int___Add(
          v17,
          v20->fields.id,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v18) = ListByEventId->max_length;
      if ( (__int64)++v19 >= (int)v18 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(eventPanelScanMaster, v15);
  }
LABEL_14:
  if ( !v17 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B5D69C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  v9 = *(_DWORD *)(*(_QWORD *)&hIndex + 24LL);
  if ( v9 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= v9 )
    {
      v12 = sub_B5D6C8(*(_QWORD *)&hIndex);
      sub_B5D668(v12, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B1B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B1A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B1A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B1C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B1C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B1D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B1D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
}