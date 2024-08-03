System_Collections_Generic_List_SubmarineScanEvent__o *__fastcall SubmarineDataHelperScan__CreateScanEvents(
        int32_t scanId,
        SubmarineMapPanelData_o *basePanel,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *v4; // x19
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
  __int64 v17; // x2
  SubmarineScanEvent_c **v18; // x27
  SubmarineScanEvent_c *v19; // x0
  int32_t NO_DIRECTION; // w24
  const MethodInfo *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
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
  const MethodInfo *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  signed __int64 v53; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v57; // [xsp+18h] [xbp-68h]

  v4 = submarineData;
  if ( (byte_49F90BF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, basePanel);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v11);
    sub_1B640C8(&SubmarineScanEvent_TypeInfo, v12);
    byte_49F90BF = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SubmarineScanEvent__TypeInfo,
                                                       basePanel,
                                                       submarineData);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v14);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity[2].monitor )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
  v18 = &SubmarineScanEvent_TypeInfo;
  v19 = SubmarineScanEvent_TypeInfo;
  if ( !SubmarineScanEvent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo);
    v19 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v19->static_fields->NO_DIRECTION;
  item = (Il2CppObject *)sub_1B64314(v19, v16, v17);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, v21);
  if ( !v13 )
    goto LABEL_36;
  items = v13->fields._items;
  v25 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      item,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v27[4] = (Il2CppClass *)item;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)item, v22, v23);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1B64324(eventPanelScanMaster);
  v31 = 0;
  v57 = v4;
  while ( 1 )
  {
    v32 = monitor[6];
    if ( v31 >= v32 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v13;
    if ( v31 >= (unsigned int)v32 )
      goto LABEL_38;
    v33 = *(_QWORD *)&monitor[2 * v31 + 8];
    v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                         v28,
                                                         v29);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
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
          if ( !v4 )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 v4,
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
          v41 = v37->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.sb) ^ 1;
          v42 = *v18;
          v43 = v18;
          IsStopped_k__BackingField = v37->fields._IsStopped_k__BackingField;
          v45 = v41 != 0;
          v37 = (SubmarineScanEvent_o *)sub_1B64314(v42, v28, v29);
          SubmarineScanEvent___ctor(v37, v40, v38 + 1, v31, v45, 0, IsStopped_k__BackingField, v46);
          v49 = v13->fields._items;
          v50 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v13->fields._version;
          if ( !v49 )
            goto LABEL_36;
          v51 = v13->fields._size;
          if ( (unsigned int)v51 >= v49->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)v37,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v49->obj.klass + v51;
            v13->fields._size = v51 + 1;
            v52[4] = (Il2CppClass *)v37;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v37, v47, v48);
          }
          v18 = v43;
          v4 = v57;
          v53 = v38 + 2;
          ++v38;
          LODWORD(v36) = *(_QWORD *)(v33 + 24);
          if ( v53 >= (int)v36 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1B6432C(eventPanelScanMaster, v28);
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
  Il2CppObject *Entity; // x0

  v2 = scanId;
  if ( (byte_49F90C0 & 1) == 0 )
  {
    sub_1B640C8(&CommonConsumeDetailInfo___TypeInfo, method);
    *(_QWORD *)&scanId = sub_1B640C8(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v3);
    byte_49F90C0 = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1B64324(0LL);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_1B64170(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  EventPanelScanEntity_array *ListByEventId; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 id; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  EventPanelScanEntity_o *v14; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_49F90C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_49F90C2 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v8, v9);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v12 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1B6432C(eventPanelScanMaster, id);
      v14 = ListByEventId->m_Items[v13];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v14,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) != 0 )
      {
        if ( !v14 )
          break;
        if ( !v10 )
          break;
        id = (unsigned int)v14->fields.id;
        items = v10->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            id,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v12) = ListByEventId->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(eventPanelScanMaster);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  EventPanelScanEntity_array *ListByEventId; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 id; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  EventPanelScanEntity_o *v14; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_49F90C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    *(_QWORD *)&eventId = sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_49F90C1 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v8, v9);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v12 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1B6432C(eventPanelScanMaster, id);
      v14 = ListByEventId->m_Items[v13];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v14,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) == 0 )
      {
        if ( !v14 )
          break;
        if ( !v10 )
          break;
        id = (unsigned int)v14->fields.id;
        items = v10->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            id,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v12) = ListByEventId->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(eventPanelScanMaster);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x1
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
          sub_1B6432C(*(_QWORD *)&hIndex, v9);
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
    sub_1B64324(*(_QWORD *)&hIndex);
  }
  return 0;
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90BC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90BB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90BD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90BE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
}