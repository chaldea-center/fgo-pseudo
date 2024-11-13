System_Collections_Generic_List_SubmarineScanEvent__o *__fastcall SubmarineDataHelperScan__CreateScanEvents(
        int32_t scanId,
        SubmarineMapPanelData_o *basePanel,
        SubmarineMapDataManager_o *submarineData,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x21
  const MethodInfo *v20; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelScanMaster; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  SubmarineScanEvent_c **v26; // x27
  SubmarineScanEvent_c *v27; // x0
  int32_t NO_DIRECTION; // w24
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x2
  const MethodInfo *v40; // x3
  _DWORD *monitor; // x8
  int32_t v42; // w24
  int32_t v43; // w9
  __int64 v44; // x22
  System_Collections_Generic_List_object__o *v45; // x0
  __int64 v46; // x8
  SubmarineScanEvent_o *v47; // x25
  unsigned __int64 v48; // x23
  _DWORD *v49; // x8
  SubmarineMapPanelData_o *v50; // x26
  int v51; // w9
  SubmarineScanEvent_c *v52; // x0
  SubmarineScanEvent_c **v53; // x19
  bool IsStopped_k__BackingField; // w27
  bool v55; // w28
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  signed __int64 v66; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v70; // [xsp+18h] [xbp-68h]

  v4 = submarineData;
  if ( (byte_4B12DA0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
      basePanel,
      submarineData);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo, v15, v16);
    sub_1BCA7E0(&SubmarineScanEvent_TypeInfo, v17, v18);
    byte_4B12DA0 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SubmarineScanEvent__TypeInfo,
                                                       basePanel,
                                                       submarineData,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v20);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Entity || !Entity[2].monitor )
    return (System_Collections_Generic_List_SubmarineScanEvent__o *)v19;
  v26 = &SubmarineScanEvent_TypeInfo;
  v27 = SubmarineScanEvent_TypeInfo;
  if ( !SubmarineScanEvent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScanEvent_TypeInfo, v23);
    v27 = SubmarineScanEvent_TypeInfo;
  }
  NO_DIRECTION = v27->static_fields->NO_DIRECTION;
  item = (Il2CppObject *)sub_1BCAA2C(v27, v23, v24, v25);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, 0LL);
  if ( !v19 )
    goto LABEL_36;
  items = v19->fields._items;
  v36 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v19->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      item,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v38[4] = (Il2CppClass *)item;
    sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)item, v29, v30, v31, v32, v33, v34);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1BCAA3C(eventPanelScanMaster, v22);
  v42 = 0;
  v70 = v4;
  while ( 1 )
  {
    v43 = monitor[6];
    if ( v42 >= v43 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v19;
    if ( v42 >= (unsigned int)v43 )
      goto LABEL_38;
    v44 = *(_QWORD *)&monitor[2 * v42 + 8];
    v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                         v22,
                                                         v39,
                                                         v40);
    System_Collections_Generic_List_object____ctor(
      v45,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v44 )
    {
      v46 = *(unsigned int *)(v44 + 24);
      if ( (v46 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v47 = (SubmarineScanEvent_o *)item;
        v48 = 0LL;
        while ( v48 < (unsigned int)v46 )
        {
          if ( !basePanel )
            goto LABEL_36;
          v49 = *(_DWORD **)(v44 + 32 + 8 * v48);
          if ( !v49 )
            goto LABEL_36;
          if ( v49[6] < 2u )
            break;
          if ( !v4 )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 v4,
                                                                                 v49[8]
                                                                               + basePanel->fields._HIndex_k__BackingField,
                                                                                 v49[9]
                                                                               + basePanel->fields._VIndex_k__BackingField,
                                                                                 v40);
          if ( !eventPanelScanMaster )
            goto LABEL_35;
          if ( !v47 )
            goto LABEL_36;
          v50 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          v51 = v47->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.sb) ^ 1;
          v52 = *v26;
          v53 = v26;
          IsStopped_k__BackingField = v47->fields._IsStopped_k__BackingField;
          v55 = v51 != 0;
          v47 = (SubmarineScanEvent_o *)sub_1BCAA2C(v52, v22, v39, v40);
          SubmarineScanEvent___ctor(v47, v50, v48 + 1, v42, v55, 0, IsStopped_k__BackingField, 0LL);
          v62 = v19->fields._items;
          v63 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v19->fields._version;
          if ( !v62 )
            goto LABEL_36;
          v64 = v19->fields._size;
          if ( (unsigned int)v64 >= v62->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v47,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v62->obj.klass + v64;
            v19->fields._size = v64 + 1;
            v65[4] = (Il2CppClass *)v47;
            sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 4), (int64_t)v47, v56, v57, v58, v59, v60, v61);
          }
          v26 = v53;
          v4 = v70;
          v66 = v48 + 2;
          ++v48;
          LODWORD(v46) = *(_QWORD *)(v44 + 24);
          if ( v66 >= (int)v46 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1BCAA44(eventPanelScanMaster, v22);
      }
LABEL_35:
      ++v42;
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
  __int64 v2; // x2
  int32_t v3; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelScanMaster; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  v3 = scanId;
  if ( (byte_4B12DA1 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConsumeDetailInfo___TypeInfo, method, v2);
    *(_QWORD *)&scanId = sub_1BCA7E0(
                           &Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__,
                           v4,
                           v5);
    byte_4B12DA1 = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1BCAA3C(0LL, v7);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v3,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_1BCA888(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  __int64 v2; // x2
  int32_t v3; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_List_int__o *v16; // x19
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  EventPanelScanEntity_o *v19; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  v3 = eventId;
  if ( (byte_4B12DA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v6, v7);
    *(_QWORD *)&eventId = sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    byte_4B12DA3 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v3, 0LL);
  v16 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v17 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1BCAA44(eventPanelScanMaster, id);
      v19 = ListByEventId->m_Items[v18];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v19,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) != 0 )
      {
        if ( !v19 )
          break;
        if ( !v16 )
          break;
        id = (unsigned int)v19->fields.id;
        items = v16->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v16,
            id,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v16->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v17) = ListByEventId->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v16 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SubmarineDataHelperScan__GetUnreleasedScanIds(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventPanelScanMaster_o *eventPanelScanMaster; // x0
  __int64 id; // x1
  EventPanelScanEntity_array *ListByEventId; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_List_int__o *v16; // x19
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  EventPanelScanEntity_o *v19; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  v3 = eventId;
  if ( (byte_4B12DA2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v6, v7);
    *(_QWORD *)&eventId = sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    byte_4B12DA2 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v3, 0LL);
  v16 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v17 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1BCAA44(eventPanelScanMaster, id);
      v19 = ListByEventId->m_Items[v18];
      eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster((const MethodInfo *)eventPanelScanMaster);
      if ( !eventPanelScanMaster )
        break;
      eventPanelScanMaster = (EventPanelScanMaster_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                                         eventPanelScanMaster,
                                                         v19,
                                                         0LL);
      if ( ((unsigned __int8)eventPanelScanMaster & 1) == 0 )
      {
        if ( !v19 )
          break;
        if ( !v16 )
          break;
        id = (unsigned int)v19->fields.id;
        items = v16->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v16,
            id,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v16->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v17) = ListByEventId->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v16 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          sub_1BCAA44(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
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
    sub_1BCAA3C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  }
  return 0;
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12D9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12D9D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12D9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12D9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12D9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12D9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12D9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12D9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
}