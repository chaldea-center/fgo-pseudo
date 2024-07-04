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
  int32_t v22; // w3
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
  int v38; // w9
  SubmarineScanEvent_c *v39; // x0
  SubmarineScanEvent_c **v40; // x19
  bool IsStopped_k__BackingField; // w27
  bool v42; // w28
  const MethodInfo *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  signed __int64 v50; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v54; // [xsp+18h] [xbp-68h]

  if ( (byte_48DF57D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, basePanel);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v10);
    sub_1B00CCC(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v11);
    sub_1B00CCC(&SubmarineScanEvent_TypeInfo, v12);
    byte_48DF57D = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v14);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
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
  item = (Il2CppObject *)sub_1B00F18(v18);
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
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v26[4] = (Il2CppClass *)item;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)item, v21, v22);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1B00F28(eventPanelScanMaster, v16);
  v28 = 0;
  v54 = submarineData;
  while ( 1 )
  {
    v29 = monitor[6];
    if ( v28 >= v29 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
    if ( v28 >= (unsigned int)v29 )
      goto LABEL_38;
    v30 = *(_QWORD *)&monitor[2 * v28 + 8];
    v31 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v30 )
    {
      v33 = *(unsigned int *)(v30 + 24);
      if ( (v33 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v34 = (SubmarineScanEvent_o *)item;
        v35 = 0LL;
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
          v38 = v34->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.sb) ^ 1;
          v39 = *v17;
          v40 = v17;
          IsStopped_k__BackingField = v34->fields._IsStopped_k__BackingField;
          v42 = v38 != 0;
          v34 = (SubmarineScanEvent_o *)sub_1B00F18(v39);
          SubmarineScanEvent___ctor(v34, v37, v35 + 1, v28, v42, 0, IsStopped_k__BackingField, v43);
          v46 = v13->fields._items;
          v47 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v13->fields._version;
          if ( !v46 )
            goto LABEL_36;
          v48 = v13->fields._size;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)v34,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &v46->obj.klass + v48;
            v13->fields._size = v48 + 1;
            v49[4] = (Il2CppClass *)v34;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v34, v44, v45);
          }
          v17 = v40;
          submarineData = v54;
          v50 = v35 + 2;
          ++v35;
          LODWORD(v33) = *(_QWORD *)(v30 + 24);
          if ( v50 >= (int)v33 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1B00F30(eventPanelScanMaster, v16);
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
  if ( (byte_48DF57E & 1) == 0 )
  {
    sub_1B00CCC(&CommonConsumeDetailInfo___TypeInfo, method);
    *(_QWORD *)&scanId = sub_1B00CCC(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v3);
    byte_48DF57E = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1B00F28(0LL, v5);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_1B00D74(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  if ( (byte_48DF580 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_48DF580 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v10 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B00F30(eventPanelScanMaster, id);
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
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1B00F28(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_48DF57F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_48DF57F = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v10 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B00F30(eventPanelScanMaster, id);
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
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1B00F28(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          sub_1B00F30(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
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
    sub_1B00F28(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  }
  return 0;
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DF57A & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_48DF57A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DF579 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_48DF579 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DF57B & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_48DF57B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DF57C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_48DF57C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
}