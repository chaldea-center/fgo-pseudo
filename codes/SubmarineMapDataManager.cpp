void __fastcall SubmarineMapDataManager___ctor(
        SubmarineMapDataManager_o *this,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  SubmarineMapDataManager_Fields *p_fields; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x0
  struct SubmarineQuestSaveInfo_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  MapControl_WarInfo_o *EventId; // x0
  struct MapControl_MapInfo_o *v32; // x8
  int32_t v33; // w20
  int32_t mapId; // w21
  SubmarineSettingsManager_o *v35; // x22
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4B41498 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__, mapInfo);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v8);
    sub_1BDB878(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo, v9);
    sub_1BDB878(&SubmarinePanelPositionCalculator_TypeInfo, v10);
    sub_1BDB878(&SubmarineSettingsManager_TypeInfo, v11);
    byte_4B41498 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)mapInfo, v13, v14);
  this->fields.WarInfo = warInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.WarInfo, (int32_t)warInfo, v15, v16);
  v17 = (Il2CppObject *)sub_1BDBAC4(SubmarinePanelPositionCalculator_TypeInfo);
  System_Object___ctor(v17, 0LL);
  this->fields._PositionCalculator_k__BackingField = (struct SubmarinePanelPositionCalculator_o *)v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._PositionCalculator_k__BackingField, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v20;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._PanelDataList_k__BackingField, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._SilhouetteDataList_k__BackingField, (int32_t)v23, v24, v25);
  v27 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v26);
  this->fields._BeforeQuestInfo_k__BackingField = v27;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._BeforeQuestInfo_k__BackingField, (int32_t)v27, v28, v29);
  EventId = this->fields.WarInfo;
  if ( !EventId
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), (v32 = p_fields->MapInfo) == 0LL) )
  {
    sub_1BDBAD4(EventId, v30);
  }
  v33 = (int)EventId;
  mapId = v32->fields.mapId;
  v35 = (SubmarineSettingsManager_o *)sub_1BDBAC4(SubmarineSettingsManager_TypeInfo);
  SubmarineSettingsManager___ctor(v35, v33, mapId, v36);
  this->fields._Settings_k__BackingField = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, (int32_t)v35, v37, v38);
}


void __fastcall SubmarineMapDataManager__ConstructParams(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w20
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  __int64 v14; // x2
  int WarInfo; // w8
  SubmarineMapDataManager_o *v16; // x21
  unsigned int v17; // w24
  __int64 v18; // x23
  __int64 v19; // x22
  const MethodInfo *v20; // x2
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct SubmarinePanelPositionCalculator_o *v23; // x8
  int32x2_t v24; // d0
  float32x2_t v25; // d1
  int32x2_t v26; // d2
  float32x2_t v27; // d3
  struct MapControl_MapInfo_o *v28; // x8
  _QWORD *v29; // x9
  __int64 WarInfo_low; // x10
  MapControl_MapInfo_c **v31; // x8
  int32_t EventId; // w0
  const MethodInfo *v33; // x2
  _BOOL8 v34; // x0
  __int64 v35; // x1
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  const MethodInfo *v38; // x2
  SubmarineSilhouetteData_o *v39; // x21
  const MethodInfo *v40; // x2
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v50; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4B4149A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__, v8);
    sub_1BDB878(&SubmarineMapPanelData_TypeInfo, v9);
    this = (SubmarineMapDataManager_o *)sub_1BDB878(&SubmarineSilhouetteData_TypeInfo, v10);
    byte_4B4149A = 1;
  }
  memset(&v53, 0, sizeof(v53));
  MapInfo = v2->fields.MapInfo;
  if ( !MapInfo )
    goto LABEL_37;
  mapId = MapInfo->fields.mapId;
  this = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_eventPanelMapMaster((const MethodInfo *)this);
  if ( !this )
    goto LABEL_37;
  this = (SubmarineMapDataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        mapId,
                                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_37;
  PositionCalculator_k__BackingField = v2->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_37;
  *(_QWORD *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField = this->fields.WarInfo;
  this = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_eventMapDetailMaster((const MethodInfo *)this);
  if ( !this )
    goto LABEL_37;
  this = (SubmarineMapDataManager_o *)EventPanelMapDetailMaster__GetListByMapId(
                                        (EventPanelMapDetailMaster_o *)this,
                                        mapId,
                                        0LL);
  if ( !this )
    goto LABEL_37;
  WarInfo = (int)this->fields.WarInfo;
  v16 = this;
  if ( WarInfo >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= WarInfo )
        sub_1BDBADC(this, method, v14);
      v18 = *((_QWORD *)&v16->fields.hasReleasedScanMethod + (int)v17);
      v19 = sub_1BDBAC4(SubmarineMapPanelData_TypeInfo);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v19, (EventPanelMapDetailEntity_o *)v18, v20);
      if ( !v18 )
        break;
      v23 = v2->fields._PositionCalculator_k__BackingField;
      if ( !v23 )
        break;
      if ( !v19 )
        break;
      v24.n64_u64[0] = *(unsigned __int64 *)(v18 + 28);
      v25.n64_u64[0] = (unsigned __int64)v23->fields._PanelUnitSize_k__BackingField;
      v26.n64_u64[0] = *(unsigned __int64 *)&v23->fields._HorizontalPanelNum_k__BackingField;
      v27.n64_u64[0] = *(unsigned __int64 *)&v23->fields._OffsetX_k__BackingField;
      *(_DWORD *)(v19 + 36) = 0;
      *(float32x2_t *)(v19 + 28) = vadd_f32(
                                     v27,
                                     vmul_f32(
                                       vmul_f32(
                                         v25,
                                         vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v24, 1uLL).n64_u64[0] | 0x100000001LL), v26))),
                                       (float32x2_t)0x3F0000003F000000LL));
      this = (SubmarineMapDataManager_o *)v2->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      v28 = this->fields.MapInfo;
      v29 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
      ++HIDWORD(this->fields.WarInfo);
      if ( !v28 )
        break;
      WarInfo_low = SLODWORD(this->fields.WarInfo);
      if ( (unsigned int)WarInfo_low >= *(_DWORD *)&v28->fields._IsNext_k__BackingField )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v19,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &v28->klass + WarInfo_low;
        LODWORD(this->fields.WarInfo) = WarInfo_low + 1;
        v31[4] = (MapControl_MapInfo_c *)v19;
        sub_1BDB81C((CGThumbnailListItem_o *)(v31 + 4), v19, v21, v22);
      }
      WarInfo = (int)v16->fields.WarInfo;
      if ( (int)++v17 >= WarInfo )
        goto LABEL_21;
    }
LABEL_37:
    sub_1BDBAD4(this, method);
  }
LABEL_21:
  this = (SubmarineMapDataManager_o *)v2->fields.WarInfo;
  if ( !this )
    goto LABEL_37;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v33);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v34 )
      break;
    current = (SubmarineSpotInfo_o *)v53.fields._current;
    if ( !v53.fields._current )
      sub_1BDBAD4(v34, v35);
    monitor = (EventPanelSpotEntity_o *)v53.fields._current[1].monitor;
    if ( !monitor )
      sub_1BDBAD4(0LL, v35);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v39 = (SubmarineSilhouetteData_o *)sub_1BDBAC4(SubmarineSilhouetteData_TypeInfo);
      SubmarineSilhouetteData___ctor(v39, current, v40);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_1BDBAD4(0LL, v41);
      items = SilhouetteDataList_k__BackingField->fields._items;
      v46 = Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__;
      ++SilhouetteDataList_k__BackingField->fields._version;
      if ( !items )
        sub_1BDBAD4(SilhouetteDataList_k__BackingField, v41);
      size = SilhouetteDataList_k__BackingField->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          SilhouetteDataList_k__BackingField,
          (Il2CppObject *)v39,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        SilhouetteDataList_k__BackingField->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v39;
        sub_1BDB81C((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v39, v42, v43);
      }
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v38);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_1BDBAD4(PanelByPanelId, v50);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
}


void __fastcall SubmarineMapDataManager__DeleteBeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  struct SubmarineQuestSaveInfo_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  SubmarineSaveParamsManager__DeleteSavedQuestInfo((const MethodInfo *)this);
  v4 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v3);
  this->fields._BeforeQuestInfo_k__BackingField = v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._BeforeQuestInfo_k__BackingField, (int32_t)v4, v5, v6);
}


System_Int32_array *__fastcall SubmarineMapDataManager__GetEmptyPanelUniqueIds(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  SubmarineMapPanelData_o *PanelByIndices; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32_t v12; // w21
  int32_t v13; // w22
  const MethodInfo *v14; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4B414A3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1BDB878(&PanelUniqueIDUtil_TypeInfo, v6);
    byte_4B414A3 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_21;
  if ( PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField >= 1 )
  {
    v12 = 0;
    do
    {
      v13 = 0;
      while ( v13 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
      {
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(this, v12, v13, v10);
        if ( !PanelByIndices )
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          PanelByIndices = (SubmarineMapPanelData_o *)PanelUniqueIDUtil__GetID(v12, v13, v14);
          if ( !v7 )
            goto LABEL_21;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v7->fields._size;
          v9 = (unsigned int)PanelByIndices;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              (int32_t)PanelByIndices,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = size + 1;
            items->m_Items[size + 1] = (int)PanelByIndices;
          }
        }
        PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
        ++v13;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_21;
      }
      ++v12;
    }
    while ( v12 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField );
  }
  if ( !v7 )
LABEL_21:
    sub_1BDBAD4(PanelByIndices, v9);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetNeighborPanels(
        SubmarineMapDataManager_o *this,
        int32_t hIndex,
        int32_t vIndex,
        bool diagonal,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  Il2CppObject *PanelByIndices; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  unsigned int v16; // w26
  bool v17; // w23
  int v18; // w22
  int v19; // w21
  int32_t v20; // w2
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppObject *v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_4B414A0 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, *(_QWORD *)&hIndex);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_4B414A0 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  v16 = 0;
  v17 = !diagonal;
  v18 = vIndex - 1;
  v19 = hIndex - 1;
  do
  {
    if ( v16 != 4 && ((v16 & 1) != 0 || !v17) )
    {
      PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                         this,
                                         v16 + v19 - 3 * (v16 / 3),
                                         v18 + v16 / 3,
                                         v15);
      if ( PanelByIndices )
      {
        if ( !v12 )
          goto LABEL_15;
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v12->fields._size;
        v24 = PanelByIndices;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            PanelByIndices,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1BDB81C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v20, v15);
        }
      }
    }
    ++v16;
  }
  while ( v16 != 9 );
  if ( !v12 )
LABEL_15:
    sub_1BDBAD4(PanelByIndices, v14);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


int32_t __fastcall SubmarineMapDataManager__GetNewReleasedScanId(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v9; // x1
  System_Int32_array *v10; // x20
  int32_t v11; // w0
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_T__o *v14; // x22
  void *monitor; // x8
  unsigned __int64 v16; // x23
  int32_t v17; // w21
  int32_t v18; // w0
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_int__o *v21; // x20
  int32_t v22; // w19
  System_Int32_array *v23; // x0
  const MethodInfo *v24; // x2

  if ( (byte_4B414A2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_int___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Remove__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor___77024896, v5);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4B414A2 = 1;
  }
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_21;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
  WarInfo = SubmarineDataHelperScan__GetUnreleasedScanIds(EventId, v9);
  if ( !this->fields.WarInfo )
    goto LABEL_21;
  v10 = (System_Int32_array *)WarInfo;
  v11 = MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  WarInfo = SubmarineSaveParamsManager__LoadUnreleasedScanInfo(v11, v12);
  if ( WarInfo )
  {
    v14 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)WarInfo + 3);
    if ( !v14 )
      goto LABEL_21;
    monitor = v14[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)monitor )
          sub_1BDBADC(WarInfo, method, v13);
        v17 = *((_DWORD *)&v14[2].klass + v16);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v10,
                            v17,
                            (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v14[1].monitor;
        if ( (__int64)++v16 >= (int)monitor )
          return 0;
      }
      v21 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_57378420(
        v21,
        v14,
        (const MethodInfo_36B8674 *)Method_System_Collections_Generic_List_int___ctor___77024896);
      if ( v21 )
      {
        System_Collections_Generic_List_int___Remove(
          v21,
          v17,
          (const MethodInfo_36BA29C *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v22 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v23 = System_Collections_Generic_List_int___ToArray(
                  v21,
                  (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v22, v23, v24);
          return v17;
        }
      }
LABEL_21:
      sub_1BDBAD4(WarInfo, method);
    }
  }
  else
  {
    WarInfo = this->fields.WarInfo;
    if ( !WarInfo )
      goto LABEL_21;
    v18 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v18, v10, v19);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelByIndices(
        SubmarineMapDataManager_o *this,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_4B4149C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&hIndex);
    sub_1BDB878(&System_Predicate_SubmarineMapPanelData__TypeInfo, v7);
    sub_1BDB878(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__, v8);
    sub_1BDB878(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo, v9);
    byte_4B4149C = 1;
  }
  v10 = sub_1BDBAC4(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = hIndex,
        *(_DWORD *)(v10 + 20) = vIndex,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v14 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v10,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1BDBAD4(v11, v12);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v14,
                                      (const MethodInfo_36D642C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelByPanelId(
        SubmarineMapDataManager_o *this,
        int32_t panelId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4B4149D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&panelId);
    sub_1BDB878(&System_Predicate_SubmarineMapPanelData__TypeInfo, v5);
    sub_1BDB878(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__, v6);
    sub_1BDB878(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo, v7);
    byte_4B4149D = 1;
  }
  v8 = sub_1BDBAC4(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = panelId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v12 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1BDBAD4(v9, v10);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v12,
                                      (const MethodInfo_36D642C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelBySpotId(
        SubmarineMapDataManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4B4149E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&spotId);
    sub_1BDB878(&System_Predicate_SubmarineMapPanelData__TypeInfo, v5);
    sub_1BDB878(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__, v6);
    sub_1BDB878(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo, v7);
    byte_4B4149E = 1;
  }
  v8 = sub_1BDBAC4(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = spotId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v12 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1BDBAD4(v9, v10);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v12,
                                      (const MethodInfo_36D642C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetPanelsByScanEvents(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineScanEvent__o *scanEvents,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  Il2CppObject *PanelByIndices; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B414A1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, scanEvents);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_4B414A1 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)scanEvents,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v15 )
      break;
    if ( !v28.fields._current )
      sub_1BDBAD4(v15, v16);
    PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                       this,
                                       (int32_t)v28.fields._current[1].klass,
                                       HIDWORD(v28.fields._current[1].klass),
                                       v17);
    v21 = PanelByIndices;
    if ( !v12 )
      sub_1BDBAD4(PanelByIndices, PanelByIndices);
    items = v12->fields._items;
    v23 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1BDBAD4(PanelByIndices, PanelByIndices);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        PanelByIndices,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v21;
      sub_1BDB81C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v21, v19, v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v12 )
LABEL_17:
    sub_1BDBAD4(v13, v14);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
        SubmarineMapDataManager_o *this,
        SubmarineSilhouetteData_o *silhouetteData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  Il2CppObject *PanelByPanelId; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x8
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  struct System_Int32_array_array *v15; // x22
  int max_length; // w8
  Il2CppObject *v17; // x21
  unsigned int v18; // w23
  System_Int32_array *v19; // x8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_4B4149F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, silhouetteData);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v7);
    byte_4B4149F = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !silhouetteData )
    goto LABEL_23;
  EnemySizeIdx_k__BackingField = silhouetteData->fields._EnemySizeIdx_k__BackingField;
  if ( EnemySizeIdx_k__BackingField )
  {
    if ( EnemySizeIdx_k__BackingField->max_length )
    {
      PanelByPanelId = (Il2CppObject *)SubmarineMapDataManager__GetPanelByPanelId(
                                         this,
                                         silhouetteData->fields._PanelId_k__BackingField,
                                         v11);
      if ( PanelByPanelId )
      {
        v15 = silhouetteData->fields._EnemySizeIdx_k__BackingField;
        if ( !v15 )
          goto LABEL_23;
        max_length = v15->max_length;
        if ( max_length >= 1 )
        {
          v17 = PanelByPanelId;
          v18 = 0;
          do
          {
            if ( v18 >= max_length )
              goto LABEL_22;
            v19 = v15->m_Items[v18];
            if ( !v19 )
              goto LABEL_23;
            if ( v19->max_length < 2 )
LABEL_22:
              sub_1BDBADC(PanelByPanelId, v10, v13);
            PanelByPanelId = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                               this,
                                               v19->m_Items[1] + LODWORD(v17[1].klass),
                                               v19->m_Items[2] + HIDWORD(v17[1].klass),
                                               v14);
            if ( PanelByPanelId )
            {
              if ( !v8 )
                goto LABEL_23;
              items = v8->fields._items;
              v21 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
              ++v8->fields._version;
              if ( !items )
                goto LABEL_23;
              size = v8->fields._size;
              v23 = PanelByPanelId;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  PanelByPanelId,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v23;
                sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v23, v13, v14);
              }
            }
            max_length = v15->max_length;
          }
          while ( (int)++v18 < max_length );
        }
      }
    }
  }
  if ( !v8 )
LABEL_23:
    sub_1BDBAD4(PanelByPanelId, v10);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v8,
                                          (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_1BDBAD4(0LL, v6);
  return UserEventMapMaster__GetEntity_41983388(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__IsClearEachQuests(
        System_Int32_array *questIds,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  bool v9; // w21
  int32_t v10; // w22

  v6 = questIds;
  if ( (byte_4B414A5 & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_1BDB878(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4B414A5 = 1;
  }
  if ( v6 && (v7 = *(_QWORD *)&v6->max_length) != 0 )
  {
    if ( (int)v7 < 1 )
    {
      LOBYTE(questIds) = 1;
    }
    else
    {
      v8 = 0LL;
      v9 = isCheckResetFlag;
      do
      {
        if ( v8 >= (unsigned int)v7 )
          sub_1BDBADC(questIds, *(_QWORD *)&beforeClearQuestId, isCheckResetFlag);
        v10 = v6->m_Items[v8 + 1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_39349364(v10, beforeClearQuestId, v9, 0LL);
        if ( ((unsigned __int8)questIds & 1) == 0 )
          break;
        LODWORD(v7) = v6->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
    }
  }
  else
  {
    LOBYTE(questIds) = 0;
  }
  return (unsigned __int8)questIds & 1;
}


bool __fastcall SubmarineMapDataManager__IsEnemyOccupiedPanelAndDefeated(
        UserEventMapEntity_o *userEventMapEntity,
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  UserEventMapEntity_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x8

  if ( userEventMapEntity )
  {
    if ( !panelDetail )
      goto LABEL_12;
    userEventMapEntity = (UserEventMapEntity_o *)SubmarineDataHelperSpot__GetSpotsEnemyOccupied(
                                                   userEventMapEntity->fields.eventId,
                                                   userEventMapEntity->fields.mapId,
                                                   panelDetail->fields.idxX,
                                                   panelDetail->fields.idxY,
                                                   v4);
    if ( !userEventMapEntity )
      goto LABEL_12;
    v8 = *(_QWORD *)&userEventMapEntity->fields.eventId;
    v9 = userEventMapEntity;
    userEventMapEntity = 0LL;
    if ( v8 && (int)v8 >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= (unsigned int)v8 )
          sub_1BDBADC(userEventMapEntity, panelDetail, v6);
        v11 = *((_QWORD *)&v9->fields.value + v10);
        if ( !v11 )
          break;
        userEventMapEntity = (UserEventMapEntity_o *)SubmarineMapDataManager__IsClearEachQuests(
                                                       *(System_Int32_array **)(v11 + 40),
                                                       beforeClearQuestId,
                                                       0,
                                                       v7);
        if ( ((unsigned __int8)userEventMapEntity & 1) == 0 )
        {
          LODWORD(v8) = v9->fields.eventId;
          if ( (int)++v10 < (int)v8 )
            continue;
        }
        return (unsigned __int8)userEventMapEntity & 1;
      }
LABEL_12:
      sub_1BDBAD4(userEventMapEntity, panelDetail);
    }
  }
  return (unsigned __int8)userEventMapEntity & 1;
}


bool __fastcall SubmarineMapDataManager__IsOpenPanel(
        UserEventMapEntity_o *userEventMapEntity,
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Int64_array *value; // x22
  bool IsStartScan; // w23
  int32_t v11; // w22
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3

  if ( (byte_4B414A4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_long___, panelDetail);
    sub_1BDB878(&long___TypeInfo, v7);
    byte_4B414A4 = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_1BDB920(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v11 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_3133038 *)Method_System_Array_IndexOf_long___);
  return (IsStartScan || v11 >= 0) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_35117632(
                                       panelDetail,
                                       beforeClearQuestId,
                                       v12)
      || SubmarineMapDataManager__IsEnemyOccupiedPanelAndDefeated(
           userEventMapEntity,
           panelDetail,
           beforeClearQuestId,
           v13);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
        SubmarineMapPanelData_o *panelData,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelData )
    sub_1BDBAD4(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_35117632(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_1BDBAD4(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_35117852(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(commonReleaseId, beforeClearQuestId, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__IsSubmarineMap(int32_t mapId, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelMapMaster; // x20
  System_Int64_array *v5; // x0
  System_Int64_array *v6; // x1
  __int64 v7; // x2

  v2 = mapId;
  if ( (byte_4B414A6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__, method);
    *(_QWORD *)&mapId = sub_1BDB878(&long___TypeInfo, v3);
    byte_4B414A6 = 1;
  }
  eventPanelMapMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v5 = (System_Int64_array *)sub_1BDB920(long___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_7;
  v6 = v5;
  if ( !v5->max_length )
    sub_1BDBADC(v5, v5, v7);
  v5->m_Items[0] = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_1BDBAD4(v5, v6);
  return DataMasterBase_object__object__int___isEntityExistsFromId(
           eventPanelMapMaster,
           v5,
           (const MethodInfo_32E1418 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__);
}


void __fastcall SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  struct SubmarineSettingsManager_o *v9; // x9

  if ( (byte_4B41499 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, overwriteSettings);
    byte_4B41499 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)overwriteSettings, 0LL, 0LL) )
  {
    Settings_k__BackingField = this->fields._Settings_k__BackingField;
    if ( !Settings_k__BackingField )
      goto LABEL_12;
    SubmarineSettingsManager__Load(Settings_k__BackingField, overwriteSettings, v6);
  }
  Settings_k__BackingField = this->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField
    || (SubmarineSettingsManager__UpdateSettingsFromMaster(Settings_k__BackingField, v5),
        (PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField) == 0LL)
    || (v9 = this->fields._Settings_k__BackingField) == 0LL )
  {
LABEL_12:
    sub_1BDBAD4(Settings_k__BackingField, v5);
  }
  PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField = v9->fields._BoardOffset_k__BackingField.fields.x;
  PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField = v9->fields._BoardOffset_k__BackingField.fields.y;
  PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField = v9->fields._PanelUnitSize_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapDataManager__UpdateParams(
        SubmarineMapDataManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  MapControl_WarInfo_o *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v14; // x1
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w22
  EventPanelMapDetailEntity_array *ListByMapId; // x21
  UserEventMapMaster_o *v18; // x23
  UserEventMapEntity_o *v19; // x22
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  Il2CppObject *current; // x29
  int max_length; // w9
  int v26; // w10
  EventPanelMapDetailEntity_o *v27; // x8
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  SubmarineSilhouetteData_o *v31; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v33; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  int v37; // w8
  int i; // w9
  SubmarineMapPanelData_o *v39; // x10
  _BOOL8 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x20
  bool IsScannable; // w8
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B4149B & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v11);
    byte_4B4149B = 1;
  }
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_54;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0LL);
  WarInfo = (MapControl_WarInfo_o *)SubmarineDataHelperScan__GetReleasedScanIds(EventId, v14);
  if ( !WarInfo )
    goto LABEL_54;
  MapInfo = this->fields.MapInfo;
  this->fields.hasReleasedScanMethod = WarInfo->fields.status != 0;
  if ( !MapInfo )
    goto LABEL_54;
  mapId = MapInfo->fields.mapId;
  WarInfo = (MapControl_WarInfo_o *)SubmarineMapDataManager__get_eventMapDetailMaster((const MethodInfo *)WarInfo);
  if ( !WarInfo )
    goto LABEL_54;
  ListByMapId = EventPanelMapDetailMaster__GetListByMapId((EventPanelMapDetailMaster_o *)WarInfo, mapId, 0LL);
  WarInfo = (MapControl_WarInfo_o *)SubmarineMapDataManager__get_userEventMapMaster((const MethodInfo *)ListByMapId);
  if ( !this->fields.WarInfo )
    goto LABEL_54;
  v18 = (UserEventMapMaster_o *)WarInfo;
  WarInfo = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  if ( !v18 )
    goto LABEL_54;
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_41983388(v18, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_54;
  v19 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v47 = v45;
LABEL_11:
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v20 )
      break;
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_1BDBAD4(v20, v21);
    LOWORD(v47.fields._current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_1BDBAD4(v20, v21);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( max_length == v26 )
          sub_1BDBADC(v20, v21, v22);
        v27 = ListByMapId->m_Items[v26];
        if ( !v27 )
          sub_1BDBAD4(v20, v21);
        if ( v27->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( max_length == ++v26 )
          goto LABEL_11;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(
                                     v19,
                                     ListByMapId->m_Items[v26],
                                     beforeClearQuestId,
                                     v23);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v28 )
      break;
    v31 = (SubmarineSilhouetteData_o *)v46.fields._current;
    if ( !v46.fields._current )
      sub_1BDBAD4(v28, v29);
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v46.fields._current[2].klass,
                          beforeClearQuestId,
                          0,
                          v30);
    v31->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v31, v33);
      if ( !SilhouetteOccupiedPanels )
        sub_1BDBAD4(0LL, v35);
      v37 = SilhouetteOccupiedPanels->max_length;
      if ( v37 >= 1 )
      {
        for ( i = 0; i != v37; ++i )
        {
          if ( v37 == i )
            sub_1BDBADC(SilhouetteOccupiedPanels, v35, v36);
          v39 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v39 )
            sub_1BDBAD4(SilhouetteOccupiedPanels, v35);
          v39->fields._HasEnemyParts_k__BackingField = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_54:
    sub_1BDBAD4(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v47 = v45;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v40 )
      break;
    v43 = v47.fields._current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v47.fields._current )
        sub_1BDBAD4(v40, v41);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v47.fields._current[1].klass,
                      HIDWORD(v47.fields._current[1].klass),
                      this,
                      v42);
    }
    else
    {
      if ( !v47.fields._current )
        sub_1BDBAD4(v40, v41);
      IsScannable = 0;
    }
    BYTE2(v43[3].monitor) = IsScannable;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineMapDataManager__get_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._BeforeQuestInfo_k__BackingField;
}


int32_t __fastcall SubmarineMapDataManager__get_EventId(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *WarInfo; // x0

  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    sub_1BDBAD4(0LL, method);
  return MapControl_WarInfo__GetEventId(WarInfo, 0LL);
}


System_Collections_Generic_List_SubmarineMapPanelData__o *__fastcall SubmarineMapDataManager__get_PanelDataList(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._PanelDataList_k__BackingField;
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapDataManager__get_PositionCalculator(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapDataManager__get_Settings(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._Settings_k__BackingField;
}


System_Collections_Generic_List_SubmarineSilhouetteData__o *__fastcall SubmarineMapDataManager__get_SilhouetteDataList(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._SilhouetteDataList_k__BackingField;
}


EventPanelMapDetailMaster_o *__fastcall SubmarineMapDataManager__get_eventMapDetailMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B41496 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B41496 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B41495 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B41495 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B41497 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B41497 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


void __fastcall SubmarineMapDataManager__set_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        SubmarineQuestSaveInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BeforeQuestInfo_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapDataManager__set_PanelDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineMapPanelData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PanelDataList_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._PanelDataList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapDataManager__set_PositionCalculator(
        SubmarineMapDataManager_o *this,
        SubmarinePanelPositionCalculator_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PositionCalculator_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._PositionCalculator_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapDataManager__set_Settings(
        SubmarineMapDataManager_o *this,
        SubmarineSettingsManager_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Settings_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SubmarineMapDataManager__set_SilhouetteDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineSilhouetteData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SilhouetteDataList_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapDataManager___c__DisplayClass36_0___ctor(
        SubmarineMapDataManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapDataManager___c__DisplayClass36_0___GetPanelByIndices_b__0(
        SubmarineMapDataManager___c__DisplayClass36_0_o *this,
        SubmarineMapPanelData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._HIndex_k__BackingField == this->fields.hIndex
      && x->fields._VIndex_k__BackingField == this->fields.vIndex;
}


void __fastcall SubmarineMapDataManager___c__DisplayClass37_0___ctor(
        SubmarineMapDataManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapDataManager___c__DisplayClass37_0___GetPanelByPanelId_b__0(
        SubmarineMapDataManager___c__DisplayClass37_0_o *this,
        SubmarineMapPanelData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._PanelId_k__BackingField == this->fields.panelId;
}


void __fastcall SubmarineMapDataManager___c__DisplayClass38_0___ctor(
        SubmarineMapDataManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapDataManager___c__DisplayClass38_0___GetPanelBySpotId_b__0(
        SubmarineMapDataManager___c__DisplayClass38_0_o *this,
        SubmarineMapPanelData_o *x,
        const MethodInfo *method)
{
  int32_t SpotId_k__BackingField; // w8

  if ( !x )
    sub_1BDBAD4(this, 0LL);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}