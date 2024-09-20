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
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  _DWORD *monitor; // x8
  int32_t v21; // w24
  int32_t v22; // w9
  __int64 v23; // x22
  System_Collections_Generic_List_object__o *v24; // x0
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  SubmarineScanEvent_o *v27; // x25
  unsigned __int64 v28; // x23
  _DWORD *v29; // x8
  SubmarineMapPanelData_o *v30; // x26
  int v31; // w9
  SubmarineScanEvent_c *v32; // x0
  SubmarineScanEvent_c **v33; // x19
  bool IsStopped_k__BackingField; // w27
  bool v35; // w28
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  signed __int64 v42; // x9
  Il2CppObject *item; // [xsp+8h] [xbp-78h]
  Il2CppObject *Entity; // [xsp+10h] [xbp-70h]
  SubmarineMapDataManager_o *v46; // [xsp+18h] [xbp-68h]

  if ( (byte_4A57D9D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineScanEvent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
    sub_1B885B0(&SubmarineScanEvent_TypeInfo);
    byte_4A57D9D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineScanEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SubmarineScanEvent___ctor__);
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(v8);
  if ( !eventPanelScanMaster )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             scanId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
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
  item = (Il2CppObject *)sub_1B887FC(v12);
  SubmarineScanEvent___ctor((SubmarineScanEvent_o *)item, basePanel, 0, NO_DIRECTION, 1, 0, 0, 0LL);
  if ( !v7 )
    goto LABEL_36;
  items = v7->fields._items;
  v17 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_36;
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      item,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v19[4] = (Il2CppClass *)item;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)item, v14, v15);
  }
  monitor = Entity[2].monitor;
  if ( !monitor )
LABEL_36:
    sub_1B8880C(eventPanelScanMaster, v10);
  v21 = 0;
  v46 = submarineData;
  while ( 1 )
  {
    v22 = monitor[6];
    if ( v21 >= v22 )
      return (System_Collections_Generic_List_SubmarineScanEvent__o *)v7;
    if ( v21 >= (unsigned int)v22 )
      goto LABEL_38;
    v23 = *(_QWORD *)&monitor[2 * v21 + 8];
    v24 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    if ( v23 )
    {
      v26 = *(unsigned int *)(v23 + 24);
      if ( (v26 << 32) + 0x100000000LL >= 0x100000001LL )
      {
        v27 = (SubmarineScanEvent_o *)item;
        v28 = 0LL;
        while ( v28 < (unsigned int)v26 )
        {
          if ( !basePanel )
            goto LABEL_36;
          v29 = *(_DWORD **)(v23 + 32 + 8 * v28);
          if ( !v29 )
            goto LABEL_36;
          if ( v29[6] < 2u )
            break;
          if ( !submarineData )
            goto LABEL_36;
          eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                 submarineData,
                                                                                 v29[8]
                                                                               + basePanel->fields._HIndex_k__BackingField,
                                                                                 v29[9]
                                                                               + basePanel->fields._VIndex_k__BackingField,
                                                                                 v25);
          if ( !eventPanelScanMaster )
            goto LABEL_35;
          if ( !v27 )
            goto LABEL_36;
          v30 = (SubmarineMapPanelData_o *)eventPanelScanMaster;
          v31 = v27->fields._IsStopped_k__BackingField ? 0 : LOBYTE(eventPanelScanMaster->fields.sb) ^ 1;
          v32 = *v11;
          v33 = v11;
          IsStopped_k__BackingField = v27->fields._IsStopped_k__BackingField;
          v35 = v31 != 0;
          v27 = (SubmarineScanEvent_o *)sub_1B887FC(v32);
          SubmarineScanEvent___ctor(v27, v30, v28 + 1, v21, v35, 0, IsStopped_k__BackingField, 0LL);
          v38 = v7->fields._items;
          v39 = Method_System_Collections_Generic_List_SubmarineScanEvent__Add__;
          ++v7->fields._version;
          if ( !v38 )
            goto LABEL_36;
          v40 = v7->fields._size;
          if ( (unsigned int)v40 >= v38->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v27,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &v38->obj.klass + v40;
            v7->fields._size = v40 + 1;
            v41[4] = (Il2CppClass *)v27;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v27, v36, v37);
          }
          v11 = v33;
          submarineData = v46;
          v42 = v28 + 2;
          ++v28;
          LODWORD(v26) = *(_QWORD *)(v23 + 24);
          if ( v42 >= (int)v26 + 1 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1B88814(eventPanelScanMaster, v10);
      }
LABEL_35:
      ++v21;
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
  if ( (byte_4A57D9E & 1) == 0 )
  {
    sub_1B885B0(&CommonConsumeDetailInfo___TypeInfo);
    *(_QWORD *)&scanId = sub_1B885B0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    byte_4A57D9E = 1;
  }
  eventPanelScanMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&scanId);
  if ( !eventPanelScanMaster )
    sub_1B8880C(0LL, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             eventPanelScanMaster,
             v2,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
    return CommonConsumeDetail__GetConsumeDetailInfoByConsumeId((int32_t)Entity[3].klass, 0LL);
  else
    return (CommonConsumeDetailInfo_array *)sub_1B88658(CommonConsumeDetailInfo___TypeInfo, 0LL);
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
  if ( (byte_4A57DA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A57DA0 = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v7 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1B88814(eventPanelScanMaster, id);
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
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_1B8880C(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A57D9F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    *(_QWORD *)&eventId = sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A57D9F = 1;
  }
  eventPanelScanMaster = SubmarineDataHelperScan__get_eventPanelScanMaster(*(const MethodInfo **)&eventId);
  if ( !eventPanelScanMaster )
    goto LABEL_19;
  ListByEventId = EventPanelScanMaster__GetListByEventId(eventPanelScanMaster, v2, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventId )
    goto LABEL_19;
  v7 = *(_QWORD *)&ListByEventId->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1B88814(eventPanelScanMaster, id);
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
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_1B8880C(eventPanelScanMaster, id);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          sub_1B88814(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
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
    sub_1B8880C(*(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  }
  return 0;
}


CommonConsumeMaster_o *__fastcall SubmarineDataHelperScan__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A57D9A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D9A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


EventPanelScanMaster_o *__fastcall SubmarineDataHelperScan__get_eventPanelScanMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A57D99 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D99 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (EventPanelScanMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
}


ItemMaster_o *__fastcall SubmarineDataHelperScan__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A57D9B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D9B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall SubmarineDataHelperScan__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A57D9C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
}