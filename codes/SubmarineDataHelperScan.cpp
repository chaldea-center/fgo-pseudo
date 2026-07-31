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
  __int64 v11; // x1
  __int64 v12; // x2
  SubmarineScanEvent_c **v13; // x28
  SubmarineScanEvent_c *v14; // x0
  int32_t NO_DIRECTION; // w24
  const MethodInfo *v16; // x7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  _DWORD *monitor; // x8
  int32_t v28; // w24
  int32_t v29; // w9
  __int64 v30; // x22
  System_Collections_Generic_List_object__o *v31; // x0
  const MethodInfo *v32; // x3
  __int64 v33; // x8
  SubmarineScanEvent_o *v34; // x25
  unsigned __int64 v35; // x23
  _DWORD *v36; // x8
  SubmarineMapPanelData_o *v37; // x26
  bool v38; // w27
  SubmarineScanEvent_c *v39; // x0
  SubmarineScanEvent_c **v40; // x19
  bool IsStopped_k__BackingField; // w28
  const MethodInfo *v42; // x7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  signed __int64 v53; // x10
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v57; // [xsp+18h] [xbp-68h]

  if ( (byte_5934DF1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
    sub_21FFC50(&SubmarineScanEvent_TypeInfo);
    byte_5934DF1 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v8);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity[2].monitor )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v7;
  v13 = &SubmarineScanEvent_TypeInfo;
  v14 = SubmarineScanEvent_TypeInfo;
  if ( !*(&SubmarineScanEvent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo, v11, v12);
    v14 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v14->static_fields->NO_DIRECTION;
  item = (Il2CppObject *)sub_21FFEBC(v14);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, v16);
  if ( !v7 )
    goto LABEL_36;
  items = v7->fields._items;
  v24 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      item,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v26[4] = (Il2CppClass *)item;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)item, v17, v18, v19, v20, v21, v22);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_21FFECC(eventPanelScanMaster, v10);
  v28 = 0;
  v57 = submarineData;
  while ( 1 )
  {
    v29 = monitor[6];
    if ( v28 >= v29 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v7;
    if ( v28 >= (unsigned int)v29 )
      goto LABEL_38;
    v30 = *(_QWORD *)&monitor[2 * v28 + 8];
    v31 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v30 )
    {
      v33 = *(_QWORD *)(v30 + 24);
      if ( (v33 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v34 = (SubmarineScanEvent_o *)item;
        v35 = 0;
        while ( v35 < (unsigned int)v33 )
        {
          if ( !basePanel )
            goto LABEL_36;
          v36 = *(_DWORD **)(v30 + 32 + 8 * v35);
          if ( !v36 )
            goto LABEL_36;
          if ( v36[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 submarineData,
                                                                                 v36[8]
                                                                               + basePanel->fields._HIndex_k__BackingField,
                                                                                 v36[9]
                                                                               + basePanel->fields._VIndex_k__BackingField,
                                                                                 v32);
          if ( !eventPanelScanMaster )
            goto LABEL_35;
          if ( !v34 )
            goto LABEL_36;
          v37 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          v38 = !v34->fields._IsStopped_k__BackingField && LOBYTE(eventPanelScanMaster->fields.seriazlier) == 0;
          v39 = *v13;
          v40 = v13;
          IsStopped_k__BackingField = v34->fields._IsStopped_k__BackingField;
          v34 = (SubmarineScanEvent_o *)sub_21FFEBC(v39);
          SubmarineScanEvent___ctor(v34, v37, v35 + 1, v28, v38, 0, IsStopped_k__BackingField, v42);
          v49 = v7->fields._items;
          v50 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v7->fields._version;
          if ( !v49 )
            goto LABEL_36;
          v51 = v7->fields._size;
          if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v34,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v49->obj.klass + v51;
            v7->fields._size = v51 + 1;
            v52[4] = (Il2CppClass *)v34;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v34, v43, v44, v45, v46, v47, v48);
          }
          v13 = v40;
          v53 = v35 + 2;
          submarineData = v57;
          ++v35;
          LODWORD(v33) = *(_QWORD *)(v30 + 24);
          if ( v53 >= (int)v33 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_21FFED4(eventPanelScanMaster);
      }
LABEL_35:
      ++v28;
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
  if ( (byte_5934DF2 & 1) == 0 )
  {
    sub_21FFC50(&CommonConsumeDetailInfo___TypeInfo);
    *(_QWORD *)&scanId = sub_21FFC50(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    byte_5934DF2 = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_21FFECC(0, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0);
  else
    return (CommonConsumeDetailInfo_array *)sub_21FFD10(CommonConsumeDetailInfo___TypeInfo, 0);
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
  EventPanelScanEntity_array *ListByEventId; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22
  EventPanelScanEntity_o *v9; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_5934DF4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5934DF4 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  max_length = ListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_21FFED4(eventPanelScanMaster);
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
        items = v6->fields._items;
        id = (unsigned int)v9->fields.id;
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
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_21FFECC(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22
  EventPanelScanEntity_o *v9; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_5934DF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5934DF3 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  max_length = ListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_21FFED4(eventPanelScanMaster);
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
        items = v6->fields._items;
        id = (unsigned int)v9->fields.id;
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
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_21FFECC(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v10; // w10
  __int64 v11; // x11

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
    sub_21FFECC(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  v9 = *(_DWORD *)(*(_QWORD *)&hIndex + 24LL);
  if ( v9 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v9 == v10 )
      sub_21FFED4(*(_QWORD *)&hIndex);
    v11 = *(_QWORD *)(*(_QWORD *)&hIndex + 8LL * v10 + 32);
    if ( !v11 )
      goto LABEL_15;
    if ( *(_BYTE *)(v11 + 56) && !*(_BYTE *)(v11 + 57) )
      return 1;
    if ( (v9 & ~(v9 >> 31)) == ++v10 )
      return 0;
  }
}


CommonConsumeMaster_o *SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5934DEE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934DEE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5934DED & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934DED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5934DEF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934DEF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5934DF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934DF0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
}