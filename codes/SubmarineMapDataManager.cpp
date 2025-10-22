void SubmarineMapDataManager___ctor(
        SubmarineMapDataManager_o *this,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  SubmarineMapDataManager_Fields *p_fields; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x0
  struct SubmarineQuestSaveInfo_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  MapControl_WarInfo_o *EventId; // x0
  struct MapControl_MapInfo_o *v27; // x8
  int32_t v28; // w20
  int32_t mapId; // w21
  SubmarineSettingsManager_o *v30; // x22
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4C536B0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
    sub_1C3E564(&SubmarinePanelPositionCalculator_TypeInfo);
    sub_1C3E564(&SubmarineSettingsManager_TypeInfo);
    byte_4C536B0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)mapInfo, v8, v9);
  this->fields.WarInfo = warInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.WarInfo, (int32_t)warInfo, v10, v11);
  v12 = (Il2CppObject *)sub_1C3E7B0(SubmarinePanelPositionCalculator_TypeInfo);
  System_Object___ctor(v12, 0);
  this->fields._PositionCalculator_k__BackingField = (struct SubmarinePanelPositionCalculator_o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._PositionCalculator_k__BackingField, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._PanelDataList_k__BackingField, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._SilhouetteDataList_k__BackingField, (int32_t)v18, v19, v20);
  v22 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v21);
  this->fields._BeforeQuestInfo_k__BackingField = v22;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._BeforeQuestInfo_k__BackingField, (int32_t)v22, v23, v24);
  EventId = this->fields.WarInfo;
  if ( !EventId
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0), (v27 = p_fields->MapInfo) == 0) )
  {
    sub_1C3E7C0(EventId, v25);
  }
  v28 = (int)EventId;
  mapId = v27->fields.mapId;
  v30 = (SubmarineSettingsManager_o *)sub_1C3E7B0(SubmarineSettingsManager_TypeInfo);
  SubmarineSettingsManager___ctor(v30, v28, mapId, v31);
  this->fields._Settings_k__BackingField = v30;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, (int32_t)v30, v32, v33);
}


void SubmarineMapDataManager__ConstructParams(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *v2; // x19
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w20
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int WarInfo; // w8
  SubmarineMapDataManager_o *v7; // x21
  unsigned int v8; // w24
  __int64 v9; // x23
  __int64 v10; // x22
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct SubmarinePanelPositionCalculator_o *v14; // x8
  int32x2_t v15; // d0
  float32x2_t v16; // d1
  int32x2_t v17; // d2
  float32x2_t v18; // d3
  struct MapControl_MapInfo_o *v19; // x8
  _QWORD *v20; // x9
  __int64 WarInfo_low; // x10
  MapControl_MapInfo_c **v22; // x8
  int32_t EventId; // w0
  const MethodInfo *v24; // x2
  _BOOL8 v25; // x0
  __int64 v26; // x1
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  const MethodInfo *v29; // x2
  SubmarineSilhouetteData_o *v30; // x21
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v41; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4C536B2 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
    sub_1C3E564(&SubmarineMapPanelData_TypeInfo);
    this = (SubmarineMapDataManager_o *)sub_1C3E564(&SubmarineSilhouetteData_TypeInfo);
    byte_4C536B2 = 1;
  }
  memset(&v44, 0, sizeof(v44));
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
                                        (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
                                        0);
  if ( !this )
    goto LABEL_37;
  WarInfo = (int)this->fields.WarInfo;
  v7 = this;
  if ( WarInfo >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= WarInfo )
        sub_1C3E7C8(this, method);
      v9 = *((_QWORD *)&v7->fields.hasReleasedScanMethod + (int)v8);
      v10 = sub_1C3E7B0(SubmarineMapPanelData_TypeInfo);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v10, (EventPanelMapDetailEntity_o *)v9, v11);
      if ( !v9 )
        break;
      v14 = v2->fields._PositionCalculator_k__BackingField;
      if ( !v14 )
        break;
      if ( !v10 )
        break;
      v15.n64_u64[0] = *(unsigned __int64 *)(v9 + 28);
      v16.n64_u64[0] = (unsigned __int64)v14->fields._PanelUnitSize_k__BackingField;
      v17.n64_u64[0] = *(unsigned __int64 *)&v14->fields._HorizontalPanelNum_k__BackingField;
      v18.n64_u64[0] = *(unsigned __int64 *)&v14->fields._OffsetX_k__BackingField;
      *(_DWORD *)(v10 + 36) = 0;
      *(float32x2_t *)(v10 + 28) = vadd_f32(
                                     v18,
                                     vmul_f32(
                                       vmul_f32(
                                         v16,
                                         vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v15, 1u).n64_u64[0] | 0x100000001LL), v17))),
                                       (float32x2_t)0x3F0000003F000000LL));
      this = (SubmarineMapDataManager_o *)v2->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      v19 = this->fields.MapInfo;
      v20 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
      ++HIDWORD(this->fields.WarInfo);
      if ( !v19 )
        break;
      WarInfo_low = SLODWORD(this->fields.WarInfo);
      if ( (unsigned int)WarInfo_low >= *(_DWORD *)&v19->fields._IsNext_k__BackingField )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v10,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &v19->klass + WarInfo_low;
        LODWORD(this->fields.WarInfo) = WarInfo_low + 1;
        v22[4] = (MapControl_MapInfo_c *)v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), v10, v12, v13);
      }
      WarInfo = (int)v7->fields.WarInfo;
      if ( (int)++v8 >= WarInfo )
        goto LABEL_21;
    }
LABEL_37:
    sub_1C3E7C0(this, method);
  }
LABEL_21:
  this = (SubmarineMapDataManager_o *)v2->fields.WarInfo;
  if ( !this )
    goto LABEL_37;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v24);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v25 )
      break;
    current = (SubmarineSpotInfo_o *)v44.fields._current;
    if ( !v44.fields._current )
      sub_1C3E7C0(v25, v26);
    monitor = (EventPanelSpotEntity_o *)v44.fields._current[1].monitor;
    if ( !monitor )
      sub_1C3E7C0(0, v26);
    if ( EventPanelSpotEntity__HasObject(monitor, 0) )
    {
      v30 = (SubmarineSilhouetteData_o *)sub_1C3E7B0(SubmarineSilhouetteData_TypeInfo);
      SubmarineSilhouetteData___ctor(v30, current, v31);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_1C3E7C0(0, v32);
      items = SilhouetteDataList_k__BackingField->fields._items;
      v37 = Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__;
      ++SilhouetteDataList_k__BackingField->fields._version;
      if ( !items )
        sub_1C3E7C0(SilhouetteDataList_k__BackingField, v32);
      size = SilhouetteDataList_k__BackingField->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          SilhouetteDataList_k__BackingField,
          (Il2CppObject *)v30,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        SilhouetteDataList_k__BackingField->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v30;
        sub_1C3E508((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v30, v33, v34);
      }
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v29);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_1C3E7C0(PanelByPanelId, v41);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
}


void SubmarineMapDataManager__DeleteBeforeQuestInfo(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  struct SubmarineQuestSaveInfo_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  SubmarineSaveParamsManager__DeleteSavedQuestInfo((const MethodInfo *)this);
  v4 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v3);
  this->fields._BeforeQuestInfo_k__BackingField = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._BeforeQuestInfo_k__BackingField, (int32_t)v4, v5, v6);
}


System_Int32_array *SubmarineMapDataManager__GetEmptyPanelUniqueIds(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  SubmarineMapPanelData_o *PanelByIndices; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32_t v8; // w21
  int32_t v9; // w22
  const MethodInfo *v10; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C536BB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&PanelUniqueIDUtil_TypeInfo);
    byte_4C536BB = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_21;
  if ( PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField >= 1 )
  {
    v8 = 0;
    do
    {
      v9 = 0;
      while ( v9 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
      {
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(this, v8, v9, v6);
        if ( !PanelByIndices )
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          PanelByIndices = (SubmarineMapPanelData_o *)PanelUniqueIDUtil__GetID(v8, v9, v10);
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          v5 = (unsigned int)PanelByIndices;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              (int32_t)PanelByIndices,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = (int)PanelByIndices;
          }
        }
        PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
        ++v9;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_21;
      }
      ++v8;
    }
    while ( v8 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField );
  }
  if ( !v3 )
LABEL_21:
    sub_1C3E7C0(PanelByIndices, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


SubmarineMapPanelData_array *SubmarineMapDataManager__GetNeighborPanels(
        SubmarineMapDataManager_o *this,
        int32_t hIndex,
        int32_t vIndex,
        bool diagonal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  Il2CppObject *PanelByIndices; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  unsigned int v13; // w26
  bool v14; // w23
  int v15; // w22
  int v16; // w21
  int32_t v17; // w2
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppObject *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4C536B8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_4C536B8 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  v13 = 0;
  v14 = !diagonal;
  v15 = vIndex - 1;
  v16 = hIndex - 1;
  do
  {
    if ( v13 != 4 && ((v13 & 1) != 0 || !v14) )
    {
      PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                         this,
                                         v13 + v16 - 3 * (v13 / 3),
                                         v15 + v13 / 3,
                                         v12);
      if ( PanelByIndices )
      {
        if ( !v9 )
          goto LABEL_15;
        items = v9->fields._items;
        v19 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v9->fields._size;
        v21 = PanelByIndices;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            PanelByIndices,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v17, v12);
        }
      }
    }
    ++v13;
  }
  while ( v13 != 9 );
  if ( !v9 )
LABEL_15:
    sub_1C3E7C0(PanelByIndices, v11);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v9,
                                          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


int32_t SubmarineMapDataManager__GetNewReleasedScanId(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  void *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v5; // x1
  System_Int32_array *v6; // x20
  int32_t v7; // w0
  const MethodInfo *v8; // x1
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  void *monitor; // x8
  unsigned __int64 v11; // x23
  int32_t v12; // w21
  int32_t v13; // w0
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_int__o *v16; // x20
  int32_t v17; // w19
  System_Int32_array *v18; // x0
  const MethodInfo *v19; // x2

  if ( (byte_4C536BA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_IndexOf_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor___78135936);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C536BA = 1;
  }
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_21;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0);
  WarInfo = SubmarineDataHelperScan__GetUnreleasedScanIds(EventId, v5);
  if ( !this->fields.WarInfo )
    goto LABEL_21;
  v6 = (System_Int32_array *)WarInfo;
  v7 = MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0);
  WarInfo = SubmarineSaveParamsManager__LoadUnreleasedScanInfo(v7, v8);
  if ( WarInfo )
  {
    v9 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)WarInfo + 3);
    if ( !v9 )
      goto LABEL_21;
    monitor = v9[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)monitor )
          sub_1C3E7C8(WarInfo, method);
        v12 = *((_DWORD *)&v9[2].klass + v11);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v6,
                            v12,
                            (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v9[1].monitor;
        if ( (__int64)++v11 >= (int)monitor )
          return 0;
      }
      v16 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_58293520(
        v16,
        v9,
        (const MethodInfo_3797D10 *)Method_System_Collections_Generic_List_int___ctor___78135936);
      if ( v16 )
      {
        System_Collections_Generic_List_int___Remove(
          v16,
          v12,
          (const MethodInfo_3799938 *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v17 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0);
          v18 = System_Collections_Generic_List_int___ToArray(
                  v16,
                  (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v17, v18, v19);
          return v12;
        }
      }
LABEL_21:
      sub_1C3E7C0(WarInfo, method);
    }
  }
  else
  {
    WarInfo = this->fields.WarInfo;
    if ( !WarInfo )
      goto LABEL_21;
    v13 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v13, v6, v14);
  }
  return 0;
}


SubmarineMapPanelData_o *SubmarineMapDataManager__GetPanelByIndices(
        SubmarineMapDataManager_o *this,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4C536B4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_1C3E564(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1C3E564(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__);
    sub_1C3E564(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
    byte_4C536B4 = 1;
  }
  v7 = sub_1C3E7B0(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = hIndex,
        *(_DWORD *)(v7 + 20) = vIndex,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v11 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          0),
        !PanelDataList_k__BackingField) )
  {
    sub_1C3E7C0(v8, v9);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v11,
                                      (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *SubmarineMapDataManager__GetPanelByPanelId(
        SubmarineMapDataManager_o *this,
        int32_t panelId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C536B5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_1C3E564(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1C3E564(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__);
    sub_1C3E564(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
    byte_4C536B5 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = panelId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          0),
        !PanelDataList_k__BackingField) )
  {
    sub_1C3E7C0(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *SubmarineMapDataManager__GetPanelBySpotId(
        SubmarineMapDataManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C536B6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_1C3E564(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1C3E564(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__);
    sub_1C3E564(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
    byte_4C536B6 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = spotId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          0),
        !PanelDataList_k__BackingField) )
  {
    sub_1C3E7C0(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_array *SubmarineMapDataManager__GetPanelsByScanEvents(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineScanEvent__o *scanEvents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  Il2CppObject *PanelByIndices; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C536B9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_4C536B9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)scanEvents,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v8 )
      break;
    if ( !v21.fields._current )
      sub_1C3E7C0(v8, v9);
    PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                       this,
                                       (int32_t)v21.fields._current[1].klass,
                                       HIDWORD(v21.fields._current[1].klass),
                                       v10);
    v14 = PanelByIndices;
    if ( !v5 )
      sub_1C3E7C0(PanelByIndices, PanelByIndices);
    items = v5->fields._items;
    v16 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C3E7C0(PanelByIndices, PanelByIndices);
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        PanelByIndices,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v14;
      sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v5 )
LABEL_17:
    sub_1C3E7C0(v6, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


SubmarineMapPanelData_array *SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
        SubmarineMapDataManager_o *this,
        SubmarineSilhouetteData_o *silhouetteData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  Il2CppObject *PanelByPanelId; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x8
  const MethodInfo *v10; // x3
  struct System_Int32_array_array *v11; // x22
  int max_length; // w8
  Il2CppObject *v13; // x21
  unsigned int v14; // w23
  System_Int32_array *v15; // x8
  int32_t v16; // w2
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4C536B7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_4C536B7 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !silhouetteData )
    goto LABEL_23;
  EnemySizeIdx_k__BackingField = silhouetteData->fields._EnemySizeIdx_k__BackingField;
  if ( EnemySizeIdx_k__BackingField )
  {
    if ( LODWORD(EnemySizeIdx_k__BackingField->max_length) )
    {
      PanelByPanelId = (Il2CppObject *)SubmarineMapDataManager__GetPanelByPanelId(
                                         this,
                                         silhouetteData->fields._PanelId_k__BackingField,
                                         v8);
      if ( PanelByPanelId )
      {
        v11 = silhouetteData->fields._EnemySizeIdx_k__BackingField;
        if ( !v11 )
          goto LABEL_23;
        max_length = v11->max_length;
        if ( max_length >= 1 )
        {
          v13 = PanelByPanelId;
          v14 = 0;
          do
          {
            if ( v14 >= max_length )
              goto LABEL_22;
            v15 = v11->m_Items[v14];
            if ( !v15 )
              goto LABEL_23;
            if ( LODWORD(v15->max_length) < 2 )
LABEL_22:
              sub_1C3E7C8(PanelByPanelId, v7);
            PanelByPanelId = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                               this,
                                               v15->m_Items[0] + LODWORD(v13[1].klass),
                                               v15->m_Items[1] + HIDWORD(v13[1].klass),
                                               v10);
            if ( PanelByPanelId )
            {
              if ( !v5 )
                goto LABEL_23;
              items = v5->fields._items;
              v18 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
              ++v5->fields._version;
              if ( !items )
                goto LABEL_23;
              size = v5->fields._size;
              v20 = PanelByPanelId;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  PanelByPanelId,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v21[4] = (Il2CppClass *)v20;
                sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v16, v10);
              }
            }
            max_length = v11->max_length;
          }
          while ( (int)++v14 < max_length );
        }
      }
    }
  }
  if ( !v5 )
LABEL_23:
    sub_1C3E7C0(PanelByPanelId, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_1C3E7C0(0, v6);
  return UserEventMapMaster__GetEntity_43095764(userEventMapMaster, eventId, mapId, 0) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineMapDataManager__IsClearEachQuests(
        System_Int32_array *questIds,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x23
  bool v9; // w21
  int32_t v10; // w22

  v6 = questIds;
  if ( (byte_4C536BD & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_1C3E564(&CondType_TypeInfo);
    byte_4C536BD = 1;
  }
  if ( v6 && (max_length = v6->max_length) != 0 )
  {
    if ( (int)max_length < 1 )
    {
      LOBYTE(questIds) = 1;
    }
    else
    {
      v8 = 0;
      v9 = isCheckResetFlag;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C3E7C8(questIds, *(_QWORD *)&beforeClearQuestId);
        v10 = v6->m_Items[v8];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_40371188(v10, beforeClearQuestId, v9, 0);
        if ( ((unsigned __int8)questIds & 1) == 0 )
          break;
        LODWORD(max_length) = v6->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)max_length );
    }
  }
  else
  {
    LOBYTE(questIds) = 0;
  }
  return (unsigned __int8)questIds & 1;
}


bool SubmarineMapDataManager__IsEnemyOccupiedPanelAndDefeated(
        UserEventMapEntity_o *userEventMapEntity,
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v6; // x3
  __int64 v7; // x8
  UserEventMapEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x8

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
    v7 = *(_QWORD *)&userEventMapEntity->fields.eventId;
    v8 = userEventMapEntity;
    userEventMapEntity = 0;
    if ( v7 && (int)v7 >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= (unsigned int)v7 )
          sub_1C3E7C8(userEventMapEntity, panelDetail);
        v10 = *((_QWORD *)&v8->fields.value + v9);
        if ( !v10 )
          break;
        userEventMapEntity = (UserEventMapEntity_o *)SubmarineMapDataManager__IsClearEachQuests(
                                                       *(System_Int32_array **)(v10 + 40),
                                                       beforeClearQuestId,
                                                       0,
                                                       v6);
        if ( ((unsigned __int8)userEventMapEntity & 1) == 0 )
        {
          LODWORD(v7) = v8->fields.eventId;
          if ( (int)++v9 < (int)v7 )
            continue;
        }
        return (unsigned __int8)userEventMapEntity & 1;
      }
LABEL_12:
      sub_1C3E7C0(userEventMapEntity, panelDetail);
    }
  }
  return (unsigned __int8)userEventMapEntity & 1;
}


bool SubmarineMapDataManager__IsOpenPanel(
        UserEventMapEntity_o *userEventMapEntity,
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  System_Int64_array *value; // x22
  bool IsStartScan; // w23
  int32_t v10; // w22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3

  if ( (byte_4C536BC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_IndexOf_long___);
    sub_1C3E564(&long___TypeInfo);
    byte_4C536BC = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_1C3E60C(long___TypeInfo, 0);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0);
  v10 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_3200D3C *)Method_System_Array_IndexOf_long___);
  return (IsStartScan || v10 >= 0)
       | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_36082628(panelDetail, beforeClearQuestId, v11)
      || SubmarineMapDataManager__IsEnemyOccupiedPanelAndDefeated(
           userEventMapEntity,
           panelDetail,
           beforeClearQuestId,
           v12);
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
        SubmarineMapPanelData_o *panelData,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelData )
    sub_1C3E7C0(0, *(_QWORD *)&beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_36082628(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_1C3E7C0(0, *(_QWORD *)&beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0);
}


bool SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_36082848(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(commonReleaseId, beforeClearQuestId, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineMapDataManager__IsSubmarineMap(int32_t mapId, const MethodInfo *method)
{
  int32_t v2; // w19
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelMapMaster; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  v2 = mapId;
  if ( (byte_4C536BE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__);
    *(_QWORD *)&mapId = sub_1C3E564(&long___TypeInfo);
    byte_4C536BE = 1;
  }
  eventPanelMapMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v4 = sub_1C3E60C(long___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_7;
  v5 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1C3E7C8(v4, v4);
  *(_QWORD *)(v4 + 32) = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_1C3E7C0(v4, v5);
  return DataMasterBase_object__object__int___isEntityExistsFromId(
           eventPanelMapMaster,
           (System_Int64_array *)v4,
           (const MethodInfo_33B2534 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__);
}


void SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  struct SubmarineSettingsManager_o *v9; // x9

  if ( (byte_4C536B1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C536B1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)overwriteSettings, 0, 0) )
  {
    Settings_k__BackingField = this->fields._Settings_k__BackingField;
    if ( !Settings_k__BackingField )
      goto LABEL_12;
    SubmarineSettingsManager__Load(Settings_k__BackingField, overwriteSettings, v6);
  }
  Settings_k__BackingField = this->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField
    || (SubmarineSettingsManager__UpdateSettingsFromMaster(Settings_k__BackingField, v5),
        (PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField) == 0)
    || (v9 = this->fields._Settings_k__BackingField) == 0 )
  {
LABEL_12:
    sub_1C3E7C0(Settings_k__BackingField, v5);
  }
  PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField = v9->fields._BoardOffset_k__BackingField.fields.x;
  PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField = v9->fields._BoardOffset_k__BackingField.fields.y;
  PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField = v9->fields._PanelUnitSize_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void SubmarineMapDataManager__UpdateParams(
        SubmarineMapDataManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  MapControl_WarInfo_o *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v7; // x1
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w22
  EventPanelMapDetailEntity_array *ListByMapId; // x21
  UserEventMapMaster_o *v11; // x23
  UserEventMapEntity_o *v12; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  Il2CppObject *current; // x29
  int max_length; // w9
  int v18; // w10
  EventPanelMapDetailEntity_o *v19; // x8
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  SubmarineSilhouetteData_o *v23; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v25; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v27; // x1
  int v28; // w8
  int i; // w9
  SubmarineMapPanelData_o *v30; // x10
  _BOOL8 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x20
  bool IsScannable; // w8
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C536B3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    byte_4C536B3 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_54;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0);
  WarInfo = (MapControl_WarInfo_o *)SubmarineDataHelperScan__GetReleasedScanIds(EventId, v7);
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
  ListByMapId = EventPanelMapDetailMaster__GetListByMapId((EventPanelMapDetailMaster_o *)WarInfo, mapId, 0);
  WarInfo = (MapControl_WarInfo_o *)SubmarineMapDataManager__get_userEventMapMaster((const MethodInfo *)ListByMapId);
  if ( !this->fields.WarInfo )
    goto LABEL_54;
  v11 = (UserEventMapMaster_o *)WarInfo;
  WarInfo = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0);
  if ( !v11 )
    goto LABEL_54;
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_43095764(v11, (int32_t)WarInfo, mapId, 0);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_54;
  v12 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v38 = v36;
LABEL_11:
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v13 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1C3E7C0(v13, v14);
    LOWORD(v38.fields._current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_1C3E7C0(v13, v14);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( max_length == v18 )
          sub_1C3E7C8(v13, v14);
        v19 = ListByMapId->m_Items[v18];
        if ( !v19 )
          sub_1C3E7C0(v13, v14);
        if ( v19->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( max_length == ++v18 )
          goto LABEL_11;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(
                                     v12,
                                     ListByMapId->m_Items[v18],
                                     beforeClearQuestId,
                                     v15);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v20 )
      break;
    v23 = (SubmarineSilhouetteData_o *)v37.fields._current;
    if ( !v37.fields._current )
      sub_1C3E7C0(v20, v21);
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v37.fields._current[2].klass,
                          beforeClearQuestId,
                          0,
                          v22);
    v23->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v23, v25);
      if ( !SilhouetteOccupiedPanels )
        sub_1C3E7C0(0, v27);
      v28 = SilhouetteOccupiedPanels->max_length;
      if ( v28 >= 1 )
      {
        for ( i = 0; i != v28; ++i )
        {
          if ( v28 == i )
            sub_1C3E7C8(SilhouetteOccupiedPanels, v27);
          v30 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v30 )
            sub_1C3E7C0(SilhouetteOccupiedPanels, v27);
          v30->fields._HasEnemyParts_k__BackingField = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_54:
    sub_1C3E7C0(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v38 = v36;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v31 )
      break;
    v34 = v38.fields._current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v38.fields._current )
        sub_1C3E7C0(v31, v32);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v38.fields._current[1].klass,
                      HIDWORD(v38.fields._current[1].klass),
                      this,
                      v33);
    }
    else
    {
      if ( !v38.fields._current )
        sub_1C3E7C0(v31, v32);
      IsScannable = 0;
    }
    BYTE2(v34[3].monitor) = IsScannable;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


SubmarineQuestSaveInfo_o *SubmarineMapDataManager__get_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._BeforeQuestInfo_k__BackingField;
}


int32_t SubmarineMapDataManager__get_EventId(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *WarInfo; // x0

  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    sub_1C3E7C0(0, method);
  return MapControl_WarInfo__GetEventId(WarInfo, 0);
}


System_Collections_Generic_List_SubmarineMapPanelData__o *SubmarineMapDataManager__get_PanelDataList(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._PanelDataList_k__BackingField;
}


SubmarinePanelPositionCalculator_o *SubmarineMapDataManager__get_PositionCalculator(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *SubmarineMapDataManager__get_Settings(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._Settings_k__BackingField;
}


System_Collections_Generic_List_SubmarineSilhouetteData__o *SubmarineMapDataManager__get_SilhouetteDataList(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  return this->fields._SilhouetteDataList_k__BackingField;
}


EventPanelMapDetailMaster_o *SubmarineMapDataManager__get_eventMapDetailMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C536AE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C536AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C536AD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPanelMapMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C536AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C536AF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C536AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


void SubmarineMapDataManager__set_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        SubmarineQuestSaveInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BeforeQuestInfo_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapDataManager__set_PanelDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineMapPanelData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PanelDataList_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._PanelDataList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapDataManager__set_PositionCalculator(
        SubmarineMapDataManager_o *this,
        SubmarinePanelPositionCalculator_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PositionCalculator_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._PositionCalculator_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapDataManager__set_Settings(
        SubmarineMapDataManager_o *this,
        SubmarineSettingsManager_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Settings_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SubmarineMapDataManager__set_SilhouetteDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineSilhouetteData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SilhouetteDataList_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapDataManager___c__DisplayClass36_0___ctor(
        SubmarineMapDataManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SubmarineMapDataManager___c__DisplayClass36_0___GetPanelByIndices_b__0(
        SubmarineMapDataManager___c__DisplayClass36_0_o *this,
        SubmarineMapPanelData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._HIndex_k__BackingField == this->fields.hIndex
      && x->fields._VIndex_k__BackingField == this->fields.vIndex;
}


void SubmarineMapDataManager___c__DisplayClass37_0___ctor(
        SubmarineMapDataManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SubmarineMapDataManager___c__DisplayClass37_0___GetPanelByPanelId_b__0(
        SubmarineMapDataManager___c__DisplayClass37_0_o *this,
        SubmarineMapPanelData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._PanelId_k__BackingField == this->fields.panelId;
}


void SubmarineMapDataManager___c__DisplayClass38_0___ctor(
        SubmarineMapDataManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SubmarineMapDataManager___c__DisplayClass38_0___GetPanelBySpotId_b__0(
        SubmarineMapDataManager___c__DisplayClass38_0_o *this,
        SubmarineMapPanelData_o *x,
        const MethodInfo *method)
{
  int32_t SpotId_k__BackingField; // w8

  if ( !x )
    sub_1C3E7C0(this, 0);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}