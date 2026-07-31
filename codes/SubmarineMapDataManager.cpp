void SubmarineMapDataManager___ctor(
        SubmarineMapDataManager_o *this,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  SubmarineMapDataManager_Fields *p_fields; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_object__o *v27; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_List_object__o *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  const MethodInfo *v41; // x0
  struct SubmarineQuestSaveInfo_o *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  MapControl_WarInfo_o *EventId; // x0
  struct MapControl_MapInfo_o *v51; // x8
  int32_t v52; // w20
  int32_t mapId; // w21
  SubmarineSettingsManager_o *v54; // x22
  const MethodInfo *v55; // x3
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7

  if ( (byte_5934E03 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
    sub_21FFC50(&SubmarinePanelPositionCalculator_TypeInfo);
    sub_21FFC50(&SubmarineSettingsManager_TypeInfo);
    byte_5934E03 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)mapInfo, v8, v9, v10, v11, v12, v13);
  this->fields.WarInfo = warInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.WarInfo, (int32_t)warInfo, v14, v15, v16, v17, v18, v19);
  v20 = (Il2CppObject *)sub_21FFEBC(SubmarinePanelPositionCalculator_TypeInfo);
  System_Object___ctor(v20, 0);
  this->fields._PositionCalculator_k__BackingField = (struct SubmarinePanelPositionCalculator_o *)v20;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PositionCalculator_k__BackingField,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v27;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PanelDataList_k__BackingField,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v34;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v42 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v41);
  this->fields._BeforeQuestInfo_k__BackingField = v42;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int32_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  EventId = this->fields.WarInfo;
  if ( !EventId
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0), (v51 = p_fields->MapInfo) == 0) )
  {
    sub_21FFECC(EventId, v49);
  }
  v52 = (int)EventId;
  mapId = v51->fields.mapId;
  v54 = (SubmarineSettingsManager_o *)sub_21FFEBC(SubmarineSettingsManager_TypeInfo);
  SubmarineSettingsManager___ctor(v54, v52, mapId, v55);
  this->fields._Settings_k__BackingField = v54;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Settings_k__BackingField,
    (int32_t)v54,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
}


void SubmarineMapDataManager__ConstructParams(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *v2; // x19
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w20
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int WarInfo; // w8
  SubmarineMapDataManager_o *v7; // x21
  unsigned int v8; // w26
  __int64 v9; // x23
  __int64 v10; // x22
  const MethodInfo *v11; // x2
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  float32x2_t *v18; // x8
  float32x2_t v19; // d0
  float32x2_t v20; // d1
  struct MapControl_MapInfo_o *v21; // x8
  _QWORD *v22; // x9
  __int64 WarInfo_low; // x10
  MapControl_MapInfo_c **v24; // x8
  int32_t EventId; // w0
  const MethodInfo *v26; // x2
  _BOOL8 v27; // x0
  __int64 v28; // x1
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  const MethodInfo *v31; // x2
  SubmarineSilhouetteData_o *v32; // x21
  const MethodInfo *v33; // x2
  __int64 v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x8
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v47; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_5934E05 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
    sub_21FFC50(&SubmarineMapPanelData_TypeInfo);
    this = (SubmarineMapDataManager_o *)sub_21FFC50(&SubmarineSilhouetteData_TypeInfo);
    byte_5934E05 = 1;
  }
  MapInfo = v2->fields.MapInfo;
  memset(&v50, 0, sizeof(v50));
  if ( !MapInfo )
    goto LABEL_37;
  mapId = MapInfo->fields.mapId;
  this = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_eventPanelMapMaster((const MethodInfo *)this);
  if ( !this )
    goto LABEL_37;
  this = (SubmarineMapDataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        mapId,
                                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
        sub_21FFED4(this);
      v9 = *((_QWORD *)&v7->fields.hasReleasedScanMethod + (int)v8);
      v10 = sub_21FFEBC(SubmarineMapPanelData_TypeInfo);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v10, (EventPanelMapDetailEntity_o *)v9, v11);
      if ( !v9 )
        break;
      v18 = (float32x2_t *)v2->fields._PositionCalculator_k__BackingField;
      if ( !v18 )
        break;
      if ( !v10 )
        break;
      v19.n64_u64[0] = vmul_f32(
                         v18[2],
                         vcvt_f32_s32(
                           vsub_s32(
                             (int32x2_t)(vadd_s32(*(int32x2_t *)(v9 + 28), *(int32x2_t *)(v9 + 28)).n64_u64[0]
                                       | 0x100000001LL),
                             v18[3]))).n64_u64[0];
      v20.n64_u64[0] = v18[4].n64_u64[0];
      *(_DWORD *)(v10 + 36) = 0;
      *(float32x2_t *)(v10 + 28) = vadd_f32(v20, vmul_f32(v19, (float32x2_t)0x3F0000003F000000LL));
      this = (SubmarineMapDataManager_o *)v2->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      v21 = this->fields.MapInfo;
      v22 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
      ++HIDWORD(this->fields.WarInfo);
      if ( !v21 )
        break;
      WarInfo_low = SLODWORD(this->fields.WarInfo);
      if ( (unsigned int)WarInfo_low >= *(_DWORD *)&v21->fields._IsNext_k__BackingField )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v10,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &v21->klass + WarInfo_low;
        LODWORD(this->fields.WarInfo) = WarInfo_low + 1;
        v24[4] = (MapControl_MapInfo_c *)v10;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), v10, v12, v13, v14, v15, v16, v17);
      }
      WarInfo = (int)v7->fields.WarInfo;
      if ( (int)++v8 >= WarInfo )
        goto LABEL_21;
    }
LABEL_37:
    sub_21FFECC(this, method);
  }
LABEL_21:
  this = (SubmarineMapDataManager_o *)v2->fields.WarInfo;
  if ( !this )
    goto LABEL_37;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v26);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v50 = v49;
  v49.fields._list = 0;
  *(_QWORD *)&v49.fields._index = &v50;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v27 )
      break;
    current = (SubmarineSpotInfo_o *)v50.fields._current;
    if ( !v50.fields._current )
      sub_21FFECC(v27, v28);
    monitor = (EventPanelSpotEntity_o *)v50.fields._current[1].monitor;
    if ( !monitor )
      sub_21FFECC(0, v28);
    if ( EventPanelSpotEntity__HasObject(monitor, 0) )
    {
      v32 = (SubmarineSilhouetteData_o *)sub_21FFEBC(SubmarineSilhouetteData_TypeInfo);
      SubmarineSilhouetteData___ctor(v32, current, v33);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField
        || (items = SilhouetteDataList_k__BackingField->fields._items,
            v43 = Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__,
            ++SilhouetteDataList_k__BackingField->fields._version,
            !items) )
      {
        sub_21FFECC(SilhouetteDataList_k__BackingField, v34);
      }
      size = SilhouetteDataList_k__BackingField->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          SilhouetteDataList_k__BackingField,
          (Il2CppObject *)v32,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        SilhouetteDataList_k__BackingField->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v32;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)v32, v35, v36, v37, v38, v39, v40);
      }
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v31);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_21FFECC(PanelByPanelId, v47);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
}


void SubmarineMapDataManager__DeleteBeforeQuestInfo(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  struct SubmarineQuestSaveInfo_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  SubmarineSaveParamsManager__DeleteSavedQuestInfo((const MethodInfo *)this);
  v4 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v3);
  this->fields._BeforeQuestInfo_k__BackingField = v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_5934E0E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&PanelUniqueIDUtil_TypeInfo);
    byte_5934E0E = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
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
          if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, v5, v10);
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
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_21FFECC(PanelByIndices, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  MethodInfo *v12; // x3
  unsigned int v13; // w26
  bool v14; // w23
  int v15; // w22
  int v16; // w21
  System_String_o *v17; // x2
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppObject *v25; // x1
  Il2CppClass **v26; // x0

  if ( (byte_5934E0B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_5934E0B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
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
        v23 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v9->fields._size;
        v25 = PanelByIndices;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            PanelByIndices,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v26 + 4),
            (int32_t)v25,
            v17,
            (System_String_o *)v12,
            v18,
            v19,
            v20,
            v21);
        }
      }
    }
    ++v13;
  }
  while ( v13 != 9 );
  if ( !v9 )
LABEL_15:
    sub_21FFECC(PanelByIndices, v11);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v9,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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

  if ( (byte_5934E0D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5934E0D = 1;
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
          sub_21FFED4(WarInfo);
        v12 = *((_DWORD *)&v9[2].klass + v11);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v6,
                            v12,
                            (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v9[1].monitor;
        if ( (__int64)++v11 >= (int)monitor )
          return 0;
      }
      v16 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_71510500(
        v16,
        v9,
        (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
      if ( v16 )
      {
        System_Collections_Generic_List_int___Remove(
          v16,
          v12,
          (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v17 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0);
          v18 = System_Collections_Generic_List_int___ToArray(
                  v16,
                  (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v17, v18, v19);
          return v12;
        }
      }
LABEL_21:
      sub_21FFECC(WarInfo, method);
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
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x21
  System_Predicate_object__o *v11; // x19

  if ( (byte_5934E07 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_21FFC50(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_21FFC50(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__);
    sub_21FFC50(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
    byte_5934E07 = 1;
  }
  v7 = sub_21FFEBC(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        *(_DWORD *)(v7 + 16) = hIndex,
        *(_DWORD *)(v7 + 20) = vIndex,
        v11 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          0),
        !PanelDataList_k__BackingField) )
  {
    sub_21FFECC(v8, v9);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v11,
                                      (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *SubmarineMapDataManager__GetPanelByPanelId(
        SubmarineMapDataManager_o *this,
        int32_t panelId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5934E08 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_21FFC50(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_21FFC50(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__);
    sub_21FFC50(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
    byte_5934E08 = 1;
  }
  v5 = sub_21FFEBC(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        *(_DWORD *)(v5 + 16) = panelId,
        v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          0),
        !PanelDataList_k__BackingField) )
  {
    sub_21FFECC(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *SubmarineMapDataManager__GetPanelBySpotId(
        SubmarineMapDataManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5934E09 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_21FFC50(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_21FFC50(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__);
    sub_21FFC50(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
    byte_5934E09 = 1;
  }
  v5 = sub_21FFEBC(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        *(_DWORD *)(v5 + 16) = spotId,
        v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          0),
        !PanelDataList_k__BackingField) )
  {
    sub_21FFECC(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5934E0C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_5934E0C = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)scanEvents,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v8 )
      break;
    if ( !v25.fields._current )
      sub_21FFECC(v8, v9);
    PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                       this,
                                       (int32_t)v25.fields._current[1].klass,
                                       HIDWORD(v25.fields._current[1].klass),
                                       v10);
    v18 = PanelByIndices;
    if ( !v5
      || (items = v5->fields._items,
          v20 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__,
          ++v5->fields._version,
          !items) )
    {
      sub_21FFECC(PanelByIndices, PanelByIndices);
    }
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        PanelByIndices,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v18;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v5 )
LABEL_16:
    sub_21FFECC(v6, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  MethodInfo *v10; // x3
  struct System_Int32_array_array *v11; // x22
  int max_length; // w8
  Il2CppObject *v13; // x21
  unsigned int v14; // w24
  System_Int32_array *v15; // x8
  System_String_o *v16; // x2
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppObject *v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_5934E0A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_5934E0A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
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
              sub_21FFED4(PanelByPanelId);
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
              v22 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
              ++v5->fields._version;
              if ( !items )
                goto LABEL_23;
              size = v5->fields._size;
              v24 = PanelByPanelId;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  PanelByPanelId,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v25 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v25[4] = (Il2CppClass *)v24;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v25 + 4),
                  (int32_t)v24,
                  v16,
                  (System_String_o *)v10,
                  v17,
                  v18,
                  v19,
                  v20);
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
    sub_21FFECC(PanelByPanelId, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_21FFECC(0, v6);
  return UserEventMapMaster__GetEntity_49998704(userEventMapMaster, eventId, mapId, 0) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineMapDataManager__IsClearEachQuests(
        System_Int32_array *questIds,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x23
  int32_t v9; // w22

  v6 = questIds;
  if ( (byte_5934E10 & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_21FFC50(&CondType_TypeInfo);
    byte_5934E10 = 1;
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
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_21FFED4(questIds);
        v9 = v6->m_Items[v8];
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId, isCheckResetFlag);
        questIds = (System_Int32_array *)CondType__IsQuestClear_47254560(v9, beforeClearQuestId, isCheckResetFlag, 0);
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
  int32_t eventId; // w8
  UserEventMapEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x8

  if ( userEventMapEntity )
  {
    if ( !panelDetail )
      goto LABEL_13;
    userEventMapEntity = (UserEventMapEntity_o *)SubmarineDataHelperSpot__GetSpotsEnemyOccupied(
                                                   userEventMapEntity->fields.eventId,
                                                   userEventMapEntity->fields.mapId,
                                                   panelDetail->fields.idxX,
                                                   panelDetail->fields.idxY,
                                                   v4);
    if ( !userEventMapEntity )
      goto LABEL_13;
    eventId = userEventMapEntity->fields.eventId;
    v8 = userEventMapEntity;
    if ( eventId >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= eventId )
          sub_21FFED4(userEventMapEntity);
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
          eventId = v8->fields.eventId;
          if ( (int)++v9 < eventId )
            continue;
        }
        return (unsigned __int8)userEventMapEntity & 1;
      }
LABEL_13:
      sub_21FFECC(userEventMapEntity, panelDetail);
    }
    LOBYTE(userEventMapEntity) = 0;
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
  bool result; // w0
  bool IsStartScan; // w23
  int32_t v10; // w22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  bool IsPanelSatisfyCommonReleaseCond_42783172; // w8

  if ( (byte_5934E0F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_long___);
    sub_21FFC50(&long___TypeInfo);
    byte_5934E0F = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_21FFD10(long___TypeInfo, 0);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0);
  v10 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_39FB0D4 *)Method_System_Array_IndexOf_long___);
  IsPanelSatisfyCommonReleaseCond_42783172 = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_42783172(
                                               panelDetail,
                                               beforeClearQuestId,
                                               v11);
  result = 1;
  if ( !IsPanelSatisfyCommonReleaseCond_42783172 && !IsStartScan && v10 < 0 )
    return SubmarineMapDataManager__IsEnemyOccupiedPanelAndDefeated(
             userEventMapEntity,
             panelDetail,
             beforeClearQuestId,
             v12);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
        SubmarineMapPanelData_o *panelData,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelData )
    sub_21FFECC(0, *(_QWORD *)&beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_42783172(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_21FFECC(0, *(_QWORD *)&beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0);
}


bool SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_42783384(
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
  if ( (byte_5934E11 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__);
    *(_QWORD *)&mapId = sub_21FFC50(&long___TypeInfo);
    byte_5934E11 = 1;
  }
  eventPanelMapMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v4 = sub_21FFD10(long___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_7;
  v5 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_21FFED4(v4);
  *(_QWORD *)(v4 + 32) = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_21FFECC(v4, v5);
  return DataMasterBase_object__object__int___isEntityExistsFromId(
           eventPanelMapMaster,
           (System_Int64_array *)v4,
           (const MethodInfo_3EDCA60 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__);
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

  if ( (byte_5934E04 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934E04 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, overwriteSettings, method);
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
    sub_21FFECC(Settings_k__BackingField, v5);
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
  int max_length; // w8
  int v18; // w10
  EventPanelMapDetailEntity_o *v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  SubmarineSilhouetteData_o *v23; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v25; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v27; // x1
  int v28; // w8
  int v29; // w10
  SubmarineMapPanelData_o *v30; // x11
  _BOOL8 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x20
  bool IsScannable; // w0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_5934E06 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    byte_5934E06 = 1;
  }
  WarInfo = this->fields.WarInfo;
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
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
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_49998704(v11, (int32_t)WarInfo, mapId, 0);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_54;
  v12 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v38 = v36;
  v36.fields._list = 0;
  *(_QWORD *)&v36.fields._index = &v38;
LABEL_11:
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v13 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_21FFECC(v13, v14);
    LOWORD(v38.fields._current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_21FFECC(v13, v14);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( max_length == v18 )
          sub_21FFED4(v13);
        v19 = ListByMapId->m_Items[v18];
        if ( !v19 )
          sub_21FFECC(v13, 0);
        if ( v19->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( (max_length & ~(max_length >> 31)) == ++v18 )
          goto LABEL_11;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(v12, v19, beforeClearQuestId, v15);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v37 = v36;
  v36.fields._list = 0;
  *(_QWORD *)&v36.fields._index = &v37;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v20 )
      break;
    v23 = (SubmarineSilhouetteData_o *)v37.fields._current;
    if ( !v37.fields._current )
      sub_21FFECC(v20, v21);
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
        sub_21FFECC(0, v27);
      v28 = SilhouetteOccupiedPanels->max_length;
      if ( v28 >= 1 )
      {
        v29 = 0;
        do
        {
          if ( v28 == v29 )
            sub_21FFED4(SilhouetteOccupiedPanels);
          v30 = SilhouetteOccupiedPanels->m_Items[v29];
          if ( !v30 )
            sub_21FFECC(SilhouetteOccupiedPanels, v27);
          ++v29;
          v30->fields._HasEnemyParts_k__BackingField = 1;
        }
        while ( (v28 & ~(v28 >> 31)) != v29 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_54:
    sub_21FFECC(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v38 = v36;
  v36.fields._list = 0;
  *(_QWORD *)&v36.fields._index = &v38;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v31 )
      break;
    v34 = v38.fields._current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v38.fields._current )
        sub_21FFECC(v31, v32);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v38.fields._current[1].klass,
                      HIDWORD(v38.fields._current[1].klass),
                      this,
                      v33);
    }
    else
    {
      if ( !v38.fields._current )
        sub_21FFECC(v31, v32);
      IsScannable = 0;
    }
    BYTE2(v34[3].monitor) = IsScannable;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
    sub_21FFECC(0, method);
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

  if ( (byte_5934E01 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934E01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5934E00 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPanelMapMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934E00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5934E02 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934E02 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


void SubmarineMapDataManager__set_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        SubmarineQuestSaveInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BeforeQuestInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapDataManager__set_PanelDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineMapPanelData__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PanelDataList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PanelDataList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapDataManager__set_PositionCalculator(
        SubmarineMapDataManager_o *this,
        SubmarinePanelPositionCalculator_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PositionCalculator_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PositionCalculator_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapDataManager__set_Settings(
        SubmarineMapDataManager_o *this,
        SubmarineSettingsManager_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Settings_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Settings_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapDataManager__set_SilhouetteDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineSilhouetteData__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SilhouetteDataList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}