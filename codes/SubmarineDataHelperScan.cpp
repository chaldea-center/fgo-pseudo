System_Collections_Generic_List_SubmarineScanEvent__o *SubmarineDataHelperScan__CreateScanEvents(
        int32_t scanId,
        SubmarineMapPanelData_o *basePanel,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  const MethodInfo *v8; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelScanMaster; // x0
  __int64 v10; // x1
  SubmarineScanEvent_c **v11; // x27
  SubmarineScanEvent_c *v12; // x0
  int32_t NO_DIRECTION; // w24
  const MethodInfo *v14; // x7
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  __int64 v21; // x2
  _DWORD *monitor; // x8
  int32_t v23; // w24
  int32_t v24; // w9
  __int64 v25; // x22
  System_Collections_Generic_List_object__o *v26; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  SubmarineScanEvent_o *v29; // x25
  unsigned __int64 v30; // x23
  _DWORD *v31; // x8
  SubmarineMapPanelData_o *v32; // x26
  int v33; // w9
  SubmarineScanEvent_c *v34; // x0
  SubmarineScanEvent_c **v35; // x19
  bool IsStopped_k__BackingField; // w27
  bool v37; // w28
  const MethodInfo *v38; // x7
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  signed __int64 v45; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v49; // [xsp+18h] [xbp-68h]

  if ( (byte_4C23C45 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
    sub_1C2D490(&SubmarineScanEvent_TypeInfo);
    byte_4C23C45 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v8);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity[2].monitor )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v7;
  v11 = &SubmarineScanEvent_TypeInfo;
  v12 = SubmarineScanEvent_TypeInfo;
  if ( !SubmarineScanEvent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo);
    v12 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v12->static_fields->NO_DIRECTION;
  item = (Il2CppObject *)sub_1C2D6DC(v12);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, v14);
  if ( !v7 )
    goto LABEL_36;
  items = v7->fields._items;
  v18 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      item,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v20[4] = (Il2CppClass *)item;
    sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)item, v15, v16);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1C2D6EC(eventPanelScanMaster, v10);
  v23 = 0;
  v49 = submarineData;
  while ( 1 )
  {
    v24 = monitor[6];
    if ( v23 >= v24 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v7;
    if ( v23 >= (unsigned int)v24 )
      goto LABEL_38;
    v25 = *(_QWORD *)&monitor[2 * v23 + 8];
    v26 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v25 )
    {
      v28 = *(unsigned int *)(v25 + 24);
      if ( (v28 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v29 = (SubmarineScanEvent_o *)item;
        v30 = 0;
        while ( v30 < (unsigned int)v28 )
        {
          if ( !basePanel )
            goto LABEL_36;
          v31 = *(_DWORD **)(v25 + 32 + 8 * v30);
          if ( !v31 )
            goto LABEL_36;
          if ( v31[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 submarineData,
                                                                                 v31[8]
                                                                               + basePanel->fields._HIndex_k__BackingField,
                                                                                 v31[9]
                                                                               + basePanel->fields._VIndex_k__BackingField,
                                                                                 v27);
          if ( !eventPanelScanMaster )
            goto LABEL_35;
          if ( !v29 )
            goto LABEL_36;
          v32 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          v33 = v29->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.seriazlier) ^ 1;
          v34 = *v11;
          v35 = v11;
          IsStopped_k__BackingField = v29->fields._IsStopped_k__BackingField;
          v37 = v33 != 0;
          v29 = (SubmarineScanEvent_o *)sub_1C2D6DC(v34);
          SubmarineScanEvent___ctor(v29, v32, v30 + 1, v23, v37, 0, IsStopped_k__BackingField, v38);
          v41 = v7->fields._items;
          v42 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v7->fields._version;
          if ( !v41 )
            goto LABEL_36;
          v43 = v7->fields._size;
          if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v29,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &v41->obj.klass + v43;
            v7->fields._size = v43 + 1;
            v44[4] = (Il2CppClass *)v29;
            sub_1C2D434((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v29, v39, v40);
          }
          v11 = v35;
          submarineData = v49;
          v45 = v30 + 2;
          ++v30;
          LODWORD(v28) = *(_QWORD *)(v25 + 24);
          if ( v45 >= (int)v28 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1C2D6F4(eventPanelScanMaster, v10, v21);
      }
LABEL_35:
      ++v23;
      monitor = Entity[2].monitor;
      if ( monitor )
        continue;
    }
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeDetailInfo_array *SubmarineDataHelperScan__GetConsumeItemByScanId(
        int32_t scanId,
        const MethodInfo *method)
{
  int32_t v2; // w19
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelScanMaster; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  v2 = scanId;
  if ( (byte_4C23C46 & 1) == 0 )
  {
    sub_1C2D490(&CommonConsumeDetailInfo___TypeInfo);
    *(_QWORD *)&scanId = sub_1C2D490(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    byte_4C23C46 = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1C2D6EC(0, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0);
  else
    return (CommonConsumeDetailInfo_array *)sub_1C2D538(CommonConsumeDetailInfo___TypeInfo, 0);
}


System_String_o *SubmarineDataHelperScan__GetConsumeTextForScan(int32_t scanId, const MethodInfo *method)
{
  CommonConsumeDetailInfo_array *ConsumeItemByScanId; // x0

  ConsumeItemByScanId = SubmarineDataHelperScan__GetConsumeItemByScanId(scanId, method);
  return CommonConsumeDetail__GetConsumeDetailDescription(ConsumeItemByScanId, 0);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *SubmarineDataHelperScan__GetReleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  EventPanelScanEntity_o *v10; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4C23C48 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C23C48 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  max_length = ListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2D6F4(eventPanelScanMaster, id, v7);
      v10 = ListByEventId->m_Items[v9];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v10,
                                                         0);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) != 0 )
      {
        if ( !v10 )
          break;
        if ( !v6 )
          break;
        id = (unsigned int)v10->fields.id;
        items = v6->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            id,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = id;
        }
      }
      LODWORD(max_length) = ListByEventId->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C2D6EC(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  EventPanelScanEntity_o *v10; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4C23C47 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C23C47 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  max_length = ListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2D6F4(eventPanelScanMaster, id, v7);
      v10 = ListByEventId->m_Items[v9];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v10,
                                                         0);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) == 0 )
      {
        if ( !v10 )
          break;
        if ( !v6 )
          break;
        id = (unsigned int)v10->fields.id;
        items = v6->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            id,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = id;
        }
      }
      LODWORD(max_length) = ListByEventId->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C2D6EC(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineDataHelperScan__IsScannable(
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
          sub_1C2D6F4(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex, v9);
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
    sub_1C2D6EC(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  }
  return 0;
}


CommonConsumeMaster_o *SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C23C42 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23C42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C23C41 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23C41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v2);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C23C43 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23C43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C23C44 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23C44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
}