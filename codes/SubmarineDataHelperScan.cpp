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
  const MethodInfo *v20; // x7
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x2
  _DWORD *monitor; // x8
  int32_t v29; // w24
  int32_t v30; // w9
  __int64 v31; // x22
  System_Collections_Generic_List_object__o *v32; // x0
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  SubmarineScanEvent_o *v35; // x25
  unsigned __int64 v36; // x23
  _DWORD *v37; // x8
  SubmarineMapPanelData_o *v38; // x26
  int v39; // w9
  SubmarineScanEvent_c *v40; // x0
  SubmarineScanEvent_c **v41; // x19
  bool IsStopped_k__BackingField; // w27
  bool v43; // w28
  const MethodInfo *v44; // x7
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  signed __int64 v51; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v55; // [xsp+18h] [xbp-68h]

  if ( (byte_4B18EE1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, basePanel);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v11);
    sub_1BCAFF8(&SubmarineScanEvent_TypeInfo, v12);
    byte_4B18EE1 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v14);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
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
  item = (Il2CppObject *)sub_1BCB244(v18);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, v20);
  if ( !v13 )
    goto LABEL_36;
  items = v13->fields._items;
  v24 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      item,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v26[4] = (Il2CppClass *)item;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)item, v21, v22);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1BCB254(eventPanelScanMaster, v16);
  v29 = 0;
  v55 = submarineData;
  while ( 1 )
  {
    v30 = monitor[6];
    if ( v29 >= v30 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
    if ( v29 >= (unsigned int)v30 )
      goto LABEL_38;
    v31 = *(_QWORD *)&monitor[2 * v29 + 8];
    v32 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v32,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v31 )
    {
      v34 = *(unsigned int *)(v31 + 24);
      if ( (v34 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v35 = (SubmarineScanEvent_o *)item;
        v36 = 0LL;
        while ( v36 < (unsigned int)v34 )
        {
          if ( !basePanel )
            goto LABEL_36;
          v37 = *(_DWORD **)(v31 + 32 + 8 * v36);
          if ( !v37 )
            goto LABEL_36;
          if ( v37[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 submarineData,
                                                                                 v37[8]
                                                                               + basePanel->fields._HIndex_k__BackingField,
                                                                                 v37[9]
                                                                               + basePanel->fields._VIndex_k__BackingField,
                                                                                 v33);
          if ( !eventPanelScanMaster )
            goto LABEL_35;
          if ( !v35 )
            goto LABEL_36;
          v38 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          v39 = v35->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.seriazlier) ^ 1;
          v40 = *v17;
          v41 = v17;
          IsStopped_k__BackingField = v35->fields._IsStopped_k__BackingField;
          v43 = v39 != 0;
          v35 = (SubmarineScanEvent_o *)sub_1BCB244(v40);
          SubmarineScanEvent___ctor(v35, v38, v36 + 1, v29, v43, 0, IsStopped_k__BackingField, v44);
          v47 = v13->fields._items;
          v48 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v13->fields._version;
          if ( !v47 )
            goto LABEL_36;
          v49 = v13->fields._size;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)v35,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            v13->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)v35;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v35, v45, v46);
          }
          v17 = v41;
          submarineData = v55;
          v51 = v36 + 2;
          ++v36;
          LODWORD(v34) = *(_QWORD *)(v31 + 24);
          if ( v51 >= (int)v34 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1BCB25C(eventPanelScanMaster, v16, v27);
      }
LABEL_35:
      ++v29;
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
  if ( (byte_4B18EE2 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonConsumeDetailInfo___TypeInfo, method);
    *(_QWORD *)&scanId = sub_1BCAFF8(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v3);
    byte_4B18EE2 = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1BCB254(0LL, v5);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_1BCB0A0(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  EventPanelScanEntity_o *v13; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4B18EE4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4B18EE4 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v11 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1BCB25C(eventPanelScanMaster, id, v10);
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
        if ( !v13 )
          break;
        if ( !v9 )
          break;
        id = (unsigned int)v13->fields.id;
        items = v9->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            id,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v11) = ListByEventId->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCB254(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v10; // x2
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  EventPanelScanEntity_o *v13; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4B18EE3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4B18EE3 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v11 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1BCB25C(eventPanelScanMaster, id, v10);
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
        if ( !v13 )
          break;
        if ( !v9 )
          break;
        id = (unsigned int)v13->fields.id;
        items = v9->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            id,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v11) = ListByEventId->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCB254(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x2
  int v10; // w8
  bool v11; // w9
  int v12; // w10
  __int64 v13; // x11

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
      v10 = *(_DWORD *)(*(_QWORD *)&hIndex + 24LL);
      v11 = v10 < 1;
      if ( v10 < 1 )
        return !v11;
      v12 = 0;
      while ( 1 )
      {
        if ( v10 == v12 )
          sub_1BCB25C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex, v9);
        v13 = *(_QWORD *)(*(_QWORD *)&hIndex + 8LL * v12 + 32);
        if ( !v13 )
          break;
        if ( !*(_BYTE *)(v13 + 56) || *(_BYTE *)(v13 + 57) )
        {
          v11 = v10 == ++v12;
          if ( v10 != v12 )
            continue;
        }
        return !v11;
      }
    }
LABEL_15:
    sub_1BCB254(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  }
  return 0;
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18EDE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B18EDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18EDD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B18EDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18EDF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B18EDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18EE0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B18EE0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
}