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
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  _DWORD *monitor; // x8
  int32_t v27; // w24
  int32_t v28; // w9
  __int64 v29; // x22
  System_Collections_Generic_List_object__o *v30; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x8
  SubmarineScanEvent_o *v33; // x25
  unsigned __int64 v34; // x23
  _DWORD *v35; // x8
  SubmarineMapPanelData_o *v36; // x26
  int v37; // w9
  SubmarineScanEvent_c *v38; // x0
  SubmarineScanEvent_c **v39; // x19
  bool IsStopped_k__BackingField; // w27
  bool v41; // w28
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  signed __int64 v48; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v52; // [xsp+18h] [xbp-68h]

  if ( (byte_4A2AB92 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, basePanel);
    sub_1B761C0(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v9);
    sub_1B761C0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v10);
    sub_1B761C0(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v11);
    sub_1B761C0(&SubmarineScanEvent_TypeInfo, v12);
    byte_4A2AB92 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v14);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_30FF780 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
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
  item = (Il2CppObject *)sub_1B7640C(v18);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, 0LL);
  if ( !v13 )
    goto LABEL_36;
  items = v13->fields._items;
  v23 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      item,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v25[4] = (Il2CppClass *)item;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)item, v20, v21);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1B7641C(eventPanelScanMaster, v16);
  v27 = 0;
  v52 = submarineData;
  while ( 1 )
  {
    v28 = monitor[6];
    if ( v27 >= v28 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
    if ( v27 >= (unsigned int)v28 )
      goto LABEL_38;
    v29 = *(_QWORD *)&monitor[2 * v27 + 8];
    v30 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v29 )
    {
      v32 = *(unsigned int *)(v29 + 24);
      if ( (v32 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v33 = (SubmarineScanEvent_o *)item;
        v34 = 0LL;
        while ( v34 < (unsigned int)v32 )
        {
          if ( !basePanel )
            goto LABEL_36;
          v35 = *(_DWORD **)(v29 + 32 + 8 * v34);
          if ( !v35 )
            goto LABEL_36;
          if ( v35[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 submarineData,
                                                                                 v35[8]
                                                                               + basePanel->fields._HIndex_k__BackingField,
                                                                                 v35[9]
                                                                               + basePanel->fields._VIndex_k__BackingField,
                                                                                 v31);
          if ( !eventPanelScanMaster )
            goto LABEL_35;
          if ( !v33 )
            goto LABEL_36;
          v36 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          v37 = v33->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.sb) ^ 1;
          v38 = *v17;
          v39 = v17;
          IsStopped_k__BackingField = v33->fields._IsStopped_k__BackingField;
          v41 = v37 != 0;
          v33 = (SubmarineScanEvent_o *)sub_1B7640C(v38);
          SubmarineScanEvent___ctor(v33, v36, v34 + 1, v27, v41, 0, IsStopped_k__BackingField, 0LL);
          v44 = v13->fields._items;
          v45 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v13->fields._version;
          if ( !v44 )
            goto LABEL_36;
          v46 = v13->fields._size;
          if ( (unsigned int)v46 >= v44->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)v33,
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &v44->obj.klass + v46;
            v13->fields._size = v46 + 1;
            v47[4] = (Il2CppClass *)v33;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v33, v42, v43);
          }
          v17 = v39;
          submarineData = v52;
          v48 = v34 + 2;
          ++v34;
          LODWORD(v32) = *(_QWORD *)(v29 + 24);
          if ( v48 >= (int)v32 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1B76424(eventPanelScanMaster, v16);
      }
LABEL_35:
      ++v27;
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
  if ( (byte_4A2AB93 & 1) == 0 )
  {
    sub_1B761C0(&CommonConsumeDetailInfo___TypeInfo, method);
    *(_QWORD *)&scanId = sub_1B761C0(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v3);
    byte_4A2AB93 = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1B7641C(0LL, v5);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_30FF780 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_1B76268(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  if ( (byte_4A2AB95 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4A2AB95 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v10 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B76424(eventPanelScanMaster, id);
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
            *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1B7641C(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A2AB94 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4A2AB94 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v10 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B76424(eventPanelScanMaster, id);
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
            *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1B7641C(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          sub_1B76424(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
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
    sub_1B7641C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  }
  return 0;
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A2AB8F & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A2AB8F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A2AB8E & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A2AB8E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v4);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A2AB90 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A2AB90 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v4);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A2AB91 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A2AB91 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v4);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserItemMaster___);
}