System_Collections_Generic_List_SubmarineScanEvent__o *__fastcall SubmarineDataHelperScan__CreateScanEvents(
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  _DWORD *monitor; // x8
  int32_t v25; // w24
  int32_t v26; // w9
  __int64 v27; // x22
  System_Collections_Generic_List_object__o *v28; // x0
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  SubmarineScanEvent_o *v31; // x25
  unsigned __int64 v32; // x23
  _DWORD *v33; // x8
  SubmarineMapPanelData_o *v34; // x26
  int v35; // w9
  SubmarineScanEvent_c *v36; // x0
  SubmarineScanEvent_c **v37; // x19
  bool IsStopped_k__BackingField; // w27
  bool v39; // w28
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  signed __int64 v50; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v54; // [xsp+18h] [xbp-68h]

  if ( (byte_4BD9074 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
    sub_1C21E38(&SubmarineScanEvent_TypeInfo);
    byte_4BD9074 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v8);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
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
  item = (Il2CppObject *)sub_1C22084(v12);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, 0LL);
  if ( !v7 )
    goto LABEL_36;
  items = v7->fields._items;
  v21 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      item,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v23[4] = (Il2CppClass *)item;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)item, v14, v15, v16, v17, v18, v19);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1C22094(eventPanelScanMaster, v10);
  v25 = 0;
  v54 = submarineData;
  while ( 1 )
  {
    v26 = monitor[6];
    if ( v25 >= v26 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v7;
    if ( v25 >= (unsigned int)v26 )
      goto LABEL_38;
    v27 = *(_QWORD *)&monitor[2 * v25 + 8];
    v28 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v28,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v27 )
    {
      v30 = *(unsigned int *)(v27 + 24);
      if ( (v30 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v31 = (SubmarineScanEvent_o *)item;
        v32 = 0LL;
        while ( v32 < (unsigned int)v30 )
        {
          if ( !basePanel )
            goto LABEL_36;
          v33 = *(_DWORD **)(v27 + 32 + 8 * v32);
          if ( !v33 )
            goto LABEL_36;
          if ( v33[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 submarineData,
                                                                                 v33[8]
                                                                               + basePanel->fields._HIndex_k__BackingField,
                                                                                 v33[9]
                                                                               + basePanel->fields._VIndex_k__BackingField,
                                                                                 v29);
          if ( !eventPanelScanMaster )
            goto LABEL_35;
          if ( !v31 )
            goto LABEL_36;
          v34 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          v35 = v31->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.seriazlier) ^ 1;
          v36 = *v11;
          v37 = v11;
          IsStopped_k__BackingField = v31->fields._IsStopped_k__BackingField;
          v39 = v35 != 0;
          v31 = (SubmarineScanEvent_o *)sub_1C22084(v36);
          SubmarineScanEvent___ctor(v31, v34, v32 + 1, v25, v39, 0, IsStopped_k__BackingField, 0LL);
          v46 = v7->fields._items;
          v47 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v7->fields._version;
          if ( !v46 )
            goto LABEL_36;
          v48 = v7->fields._size;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v31,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &v46->obj.klass + v48;
            v7->fields._size = v48 + 1;
            v49[4] = (Il2CppClass *)v31;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v31, v40, v41, v42, v43, v44, v45);
          }
          v11 = v37;
          submarineData = v54;
          v50 = v32 + 2;
          ++v32;
          LODWORD(v30) = *(_QWORD *)(v27 + 24);
          if ( v50 >= (int)v30 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1C2209C(eventPanelScanMaster, v10);
      }
LABEL_35:
      ++v25;
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
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelScanMaster; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  v2 = scanId;
  if ( (byte_4BD9075 & 1) == 0 )
  {
    sub_1C21E38(&CommonConsumeDetailInfo___TypeInfo);
    *(_QWORD *)&scanId = sub_1C21E38(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    byte_4BD9075 = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1C22094(0LL, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_1C21EE0(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  EventPanelScanEntity_o *v9; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4BD9077 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BD9077 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v7 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1C2209C(eventPanelScanMaster, id);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            id,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v7) = ListByEventId->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C22094(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  int32_t v2; // w19
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  EventPanelScanEntity_o *v9; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  v2 = eventId;
  if ( (byte_4BD9076 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BD9076 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v7 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1C2209C(eventPanelScanMaster, id);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            id,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v7) = ListByEventId->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C22094(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          sub_1C2209C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
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
    sub_1C22094(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  }
  return 0;
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD9071 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9071 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD9070 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9070 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD9072 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9072 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD9073 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9073 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
}