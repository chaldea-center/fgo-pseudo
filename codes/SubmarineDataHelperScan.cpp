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
  System_Collections_Generic_List_object__o *v13; // x21
  const MethodInfo *v14; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelScanMaster; // x0
  __int64 v16; // x1
  SubmarineScanEvent_c **v17; // x27
  SubmarineScanEvent_c *v18; // x0
  int32_t NO_DIRECTION; // w24
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  _DWORD *monitor; // x8
  int32_t v31; // w24
  int32_t v32; // w9
  __int64 v33; // x22
  System_Collections_Generic_List_object__o *v34; // x0
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  SubmarineScanEvent_o *v37; // x25
  unsigned __int64 v38; // x23
  _DWORD *v39; // x8
  SubmarineMapPanelData_o *v40; // x26
  int v41; // w9
  SubmarineScanEvent_c *v42; // x0
  SubmarineScanEvent_c **v43; // x19
  bool IsStopped_k__BackingField; // w27
  bool v45; // w28
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  signed __int64 v56; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v60; // [xsp+18h] [xbp-68h]

  if ( (byte_4BC45E5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, basePanel);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v11);
    sub_1C1ABD4(&SubmarineScanEvent_TypeInfo, v12);
    byte_4BC45E5 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v14);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_3248678 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity[2].monitor )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
  v17 = &SubmarineScanEvent_TypeInfo;
  v18 = SubmarineScanEvent_TypeInfo;
  if ( !SubmarineScanEvent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo);
    v18 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v18->static_fields->NO_DIRECTION;
  item = (Il2CppObject *)sub_1C1AE20(v18);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, 0LL);
  if ( !v13 )
    goto LABEL_36;
  items = v13->fields._items;
  v27 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      item,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v29[4] = (Il2CppClass *)item;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)item, v20, v21, v22, v23, v24, v25);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1C1AE30(eventPanelScanMaster, v16);
  v31 = 0;
  v60 = submarineData;
  while ( 1 )
  {
    v32 = monitor[6];
    if ( v31 >= v32 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
    if ( v31 >= (unsigned int)v32 )
      goto LABEL_38;
    v33 = *(_QWORD *)&monitor[2 * v31 + 8];
    v34 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v33 )
    {
      v36 = *(unsigned int *)(v33 + 24);
      if ( (v36 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v37 = (SubmarineScanEvent_o *)item;
        v38 = 0LL;
        while ( v38 < (unsigned int)v36 )
        {
          if ( !basePanel )
            goto LABEL_36;
          v39 = *(_DWORD **)(v33 + 32 + 8 * v38);
          if ( !v39 )
            goto LABEL_36;
          if ( v39[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 submarineData,
                                                                                 v39[8]
                                                                               + basePanel->fields._HIndex_k__BackingField,
                                                                                 v39[9]
                                                                               + basePanel->fields._VIndex_k__BackingField,
                                                                                 v35);
          if ( !eventPanelScanMaster )
            goto LABEL_35;
          if ( !v37 )
            goto LABEL_36;
          v40 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          v41 = v37->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.seriazlier) ^ 1;
          v42 = *v17;
          v43 = v17;
          IsStopped_k__BackingField = v37->fields._IsStopped_k__BackingField;
          v45 = v41 != 0;
          v37 = (SubmarineScanEvent_o *)sub_1C1AE20(v42);
          SubmarineScanEvent___ctor(v37, v40, v38 + 1, v31, v45, 0, IsStopped_k__BackingField, 0LL);
          v52 = v13->fields._items;
          v53 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v13->fields._version;
          if ( !v52 )
            goto LABEL_36;
          v54 = v13->fields._size;
          if ( (unsigned int)v54 >= v52->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)v37,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v13->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)v37;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v37, v46, v47, v48, v49, v50, v51);
          }
          v17 = v43;
          submarineData = v60;
          v56 = v38 + 2;
          ++v38;
          LODWORD(v36) = *(_QWORD *)(v33 + 24);
          if ( v56 >= (int)v36 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1C1AE38(eventPanelScanMaster, v16);
      }
LABEL_35:
      ++v31;
      monitor = Entity[2].monitor;
      if ( monitor )
        continue;
    }
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeDetailInfo_array *__fastcall SubmarineDataHelperScan__GetConsumeItemByScanId(
        int32_t scanId,
        const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelScanMaster; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  v2 = scanId;
  if ( (byte_4BC45E6 & 1) == 0 )
  {
    sub_1C1ABD4(&CommonConsumeDetailInfo___TypeInfo, method);
    *(_QWORD *)&scanId = sub_1C1ABD4(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v3);
    byte_4BC45E6 = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1C1AE30(0LL, v5);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_3248678 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_1C1AC7C(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x20
  System_Collections_Generic_List_int__o *v9; // x19
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  EventPanelScanEntity_o *v12; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4BC45E8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4BC45E8 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v10 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1C1AE38(eventPanelScanMaster, id);
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
        if ( !v12 )
          break;
        if ( !v9 )
          break;
        id = (unsigned int)v12->fields.id;
        items = v9->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            id,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v10) = ListByEventId->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C1AE30(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x20
  System_Collections_Generic_List_int__o *v9; // x19
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  EventPanelScanEntity_o *v12; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4BC45E7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4BC45E7 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v10 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1C1AE38(eventPanelScanMaster, id);
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
        if ( !v12 )
          break;
        if ( !v9 )
          break;
        id = (unsigned int)v12->fields.id;
        items = v9->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            id,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v10) = ListByEventId->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C1AE30(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  bool v10; // w9
  int v11; // w10
  __int64 v12; // x11

  if ( !submarineData )
    goto LABEL_15;
  v5 = hIndex;
  *(_QWORD *)&hIndex = SubmarineMapDataManager__GetPanelByIndices(submarineData, hIndex, vIndex, method);
  if ( !*(_QWORD *)&hIndex )
    goto LABEL_15;
  if ( !*(_BYTE *)(*(_QWORD *)&hIndex + 56LL) )
  {
    *(_QWORD *)&hIndex = SubmarineMapDataManager__GetNeighborPanels(submarineData, v5, vIndex, 0, v7);
    if ( *(_QWORD *)&hIndex )
    {
      v9 = *(_DWORD *)(*(_QWORD *)&hIndex + 24LL);
      v10 = v9 < 1;
      if ( v9 < 1 )
        return !v10;
      v11 = 0;
      while ( 1 )
      {
        if ( v9 == v11 )
          sub_1C1AE38(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
        v12 = *(_QWORD *)(*(_QWORD *)&hIndex + 8LL * v11 + 32);
        if ( !v12 )
          break;
        if ( !*(_BYTE *)(v12 + 56) || *(_BYTE *)(v12 + 57) )
        {
          v10 = v9 == ++v11;
          if ( v9 != v11 )
            continue;
        }
        return !v10;
      }
    }
LABEL_15:
    sub_1C1AE30(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  }
  return 0;
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC45E2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4BC45E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC45E1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4BC45E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC45E3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4BC45E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC45E4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4BC45E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
}