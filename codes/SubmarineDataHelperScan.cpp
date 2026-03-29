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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  _DWORD *monitor; // x8
  int32_t v26; // w24
  int32_t v27; // w9
  __int64 v28; // x22
  System_Collections_Generic_List_object__o *v29; // x0
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  SubmarineScanEvent_o *v32; // x25
  unsigned __int64 v33; // x23
  _DWORD *v34; // x8
  SubmarineMapPanelData_o *v35; // x26
  int v36; // w9
  SubmarineScanEvent_c *v37; // x0
  SubmarineScanEvent_c **v38; // x19
  bool IsStopped_k__BackingField; // w27
  bool v40; // w28
  const MethodInfo *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  signed __int64 v52; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v56; // [xsp+18h] [xbp-68h]

  if ( (byte_4D2D260 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
    sub_1C93AD4(&SubmarineScanEvent_TypeInfo);
    byte_4D2D260 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v8);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
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
  item = (Il2CppObject *)sub_1C93D20(v12);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, v14);
  if ( !v7 )
    goto LABEL_36;
  items = v7->fields._items;
  v22 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      item,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v24[4] = (Il2CppClass *)item;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)item, v15, v16, v17, v18, v19, v20);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1C93D2C(eventPanelScanMaster, v10);
  v26 = 0;
  v56 = submarineData;
  while ( 1 )
  {
    v27 = monitor[6];
    if ( v26 >= v27 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v7;
    if ( v26 >= (unsigned int)v27 )
      goto LABEL_38;
    v28 = *(_QWORD *)&monitor[2 * v26 + 8];
    v29 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v28 )
    {
      v31 = *(unsigned int *)(v28 + 24);
      if ( (v31 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v32 = (SubmarineScanEvent_o *)item;
        v33 = 0;
        while ( v33 < (unsigned int)v31 )
        {
          if ( !basePanel )
            goto LABEL_36;
          v34 = *(_DWORD **)(v28 + 32 + 8 * v33);
          if ( !v34 )
            goto LABEL_36;
          if ( v34[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 submarineData,
                                                                                 v34[8]
                                                                               + basePanel->fields._HIndex_k__BackingField,
                                                                                 v34[9]
                                                                               + basePanel->fields._VIndex_k__BackingField,
                                                                                 v30);
          if ( !eventPanelScanMaster )
            goto LABEL_35;
          if ( !v32 )
            goto LABEL_36;
          v35 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          v36 = v32->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.seriazlier) ^ 1;
          v37 = *v11;
          v38 = v11;
          IsStopped_k__BackingField = v32->fields._IsStopped_k__BackingField;
          v40 = v36 != 0;
          v32 = (SubmarineScanEvent_o *)sub_1C93D20(v37);
          SubmarineScanEvent___ctor(v32, v35, v33 + 1, v26, v40, 0, IsStopped_k__BackingField, v41);
          v48 = v7->fields._items;
          v49 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v7->fields._version;
          if ( !v48 )
            goto LABEL_36;
          v50 = v7->fields._size;
          if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v32,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &v48->obj.klass + v50;
            v7->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)v32;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v51 + 4), (int32_t)v32, v42, v43, v44, v45, v46, v47);
          }
          v11 = v38;
          submarineData = v56;
          v52 = v33 + 2;
          ++v33;
          LODWORD(v31) = *(_QWORD *)(v28 + 24);
          if ( v52 >= (int)v31 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1C93D34(eventPanelScanMaster);
      }
LABEL_35:
      ++v26;
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
  if ( (byte_4D2D261 & 1) == 0 )
  {
    sub_1C93AD4(&CommonConsumeDetailInfo___TypeInfo);
    *(_QWORD *)&scanId = sub_1C93AD4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    byte_4D2D261 = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1C93D2C(0, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0);
  else
    return (CommonConsumeDetailInfo_array *)sub_1C93B7C(CommonConsumeDetailInfo___TypeInfo, 0);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22
  EventPanelScanEntity_o *v9; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4D2D263 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2D263 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  max_length = ListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C93D34(eventPanelScanMaster);
      v9 = ListByEventId->m_Items[v8];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v9,
                                                         0);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) != 0 )
      {
        if ( !v9 )
          break;
        if ( !v6 )
          break;
        id = (unsigned int)v9->fields.id;
        items = v6->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            id,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = id;
        }
      }
      LODWORD(max_length) = ListByEventId->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C93D2C(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22
  EventPanelScanEntity_o *v9; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4D2D262 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2D262 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  max_length = ListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C93D34(eventPanelScanMaster);
      v9 = ListByEventId->m_Items[v8];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v9,
                                                         0);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) == 0 )
      {
        if ( !v9 )
          break;
        if ( !v6 )
          break;
        id = (unsigned int)v9->fields.id;
        items = v6->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            id,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = id;
        }
      }
      LODWORD(max_length) = ListByEventId->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C93D2C(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          sub_1C93D34(*(_QWORD *)&hIndex);
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
    sub_1C93D2C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  }
  return 0;
}


CommonConsumeMaster_o *SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D2D25D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D25D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D2D25C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D25C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D2D25E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D25E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D2D25F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D25F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
}