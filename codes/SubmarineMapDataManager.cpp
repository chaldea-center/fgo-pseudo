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
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x0
  struct SubmarineQuestSaveInfo_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  MapControl_WarInfo_o *EventId; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  struct MapControl_MapInfo_o *v39; // x8
  int32_t v40; // w20
  int32_t mapId; // w21
  SubmarineSettingsManager_o *v42; // x22
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  int32_t v45; // w3

  if ( (byte_49F90D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__, mapInfo);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo, v9);
    sub_1B640C8(&SubmarinePanelPositionCalculator_TypeInfo, v10);
    sub_1B640C8(&SubmarineSettingsManager_TypeInfo, v11);
    byte_49F90D1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)mapInfo, v13, v14);
  this->fields.WarInfo = warInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.WarInfo, (int32_t)warInfo, v15, v16);
  v19 = (Il2CppObject *)sub_1B64314(SubmarinePanelPositionCalculator_TypeInfo, v17, v18);
  System_Object___ctor(v19, 0LL);
  this->fields._PositionCalculator_k__BackingField = (struct SubmarinePanelPositionCalculator_o *)v19;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._PositionCalculator_k__BackingField,
    (int32_t)v19,
    v20,
    v21);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._PanelDataList_k__BackingField, (int32_t)v24, v25, v26);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v29;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int32_t)v29,
    v30,
    v31);
  v33 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v32);
  this->fields._BeforeQuestInfo_k__BackingField = v33;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int32_t)v33,
    v34,
    v35);
  EventId = this->fields.WarInfo;
  if ( !EventId
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), (v39 = p_fields->MapInfo) == 0LL) )
  {
    sub_1B64324(EventId);
  }
  v40 = (int)EventId;
  mapId = v39->fields.mapId;
  v42 = (SubmarineSettingsManager_o *)sub_1B64314(SubmarineSettingsManager_TypeInfo, v37, v38);
  SubmarineSettingsManager___ctor(v42, v40, mapId, v43);
  this->fields._Settings_k__BackingField = v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField, (int32_t)v42, v44, v45);
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
  __int64 v14; // x1
  __int64 v15; // x2
  int WarInfo; // w8
  SubmarineMapDataManager_o *v17; // x21
  unsigned int v18; // w24
  __int64 v19; // x23
  __int64 v20; // x22
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  int32_t v23; // w3
  struct SubmarinePanelPositionCalculator_o *v24; // x8
  int32x2_t v25; // d0
  float32x2_t v26; // d1
  int32x2_t v27; // d2
  float32x2_t v28; // d3
  struct MapControl_MapInfo_o *v29; // x8
  _QWORD *v30; // x9
  __int64 WarInfo_low; // x10
  MapControl_MapInfo_c **v32; // x8
  int32_t EventId; // w0
  const MethodInfo *v34; // x2
  _BOOL8 v35; // x0
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  SubmarineSilhouetteData_o *v40; // x21
  const MethodInfo *v41; // x2
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_49F90D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__, v8);
    sub_1B640C8(&SubmarineMapPanelData_TypeInfo, v9);
    this = (SubmarineMapDataManager_o *)sub_1B640C8(&SubmarineSilhouetteData_TypeInfo, v10);
    byte_49F90D3 = 1;
  }
  memset(&v52, 0, sizeof(v52));
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
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
  v17 = this;
  if ( WarInfo >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= WarInfo )
        sub_1B6432C(this, v14);
      v19 = *((_QWORD *)&v17->fields.hasReleasedScanMethod + (int)v18);
      v20 = sub_1B64314(SubmarineMapPanelData_TypeInfo, v14, v15);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v20, (EventPanelMapDetailEntity_o *)v19, v21);
      if ( !v19 )
        break;
      v24 = v2->fields._PositionCalculator_k__BackingField;
      if ( !v24 )
        break;
      if ( !v20 )
        break;
      v25.n64_u64[0] = *(unsigned __int64 *)(v19 + 28);
      v26.n64_u64[0] = (unsigned __int64)v24->fields._PanelUnitSize_k__BackingField;
      v27.n64_u64[0] = *(unsigned __int64 *)&v24->fields._HorizontalPanelNum_k__BackingField;
      v28.n64_u64[0] = *(unsigned __int64 *)&v24->fields._OffsetX_k__BackingField;
      *(_DWORD *)(v20 + 36) = 0;
      *(float32x2_t *)(v20 + 28) = vadd_f32(
                                     v28,
                                     vmul_f32(
                                       vmul_f32(
                                         v26,
                                         vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v25, 1uLL).n64_u64[0] | 0x100000001LL), v27))),
                                       (float32x2_t)0x3F0000003F000000LL));
      this = (SubmarineMapDataManager_o *)v2->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      v29 = this->fields.MapInfo;
      v30 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
      ++HIDWORD(this->fields.WarInfo);
      if ( !v29 )
        break;
      WarInfo_low = SLODWORD(this->fields.WarInfo);
      if ( (unsigned int)WarInfo_low >= *(_DWORD *)&v29->fields._IsNext_k__BackingField )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v20,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &v29->klass + WarInfo_low;
        LODWORD(this->fields.WarInfo) = WarInfo_low + 1;
        v32[4] = (MapControl_MapInfo_c *)v20;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), v20, v22, v23);
      }
      WarInfo = (int)v17->fields.WarInfo;
      if ( (int)++v18 >= WarInfo )
        goto LABEL_21;
    }
LABEL_37:
    sub_1B64324(this);
  }
LABEL_21:
  this = (SubmarineMapDataManager_o *)v2->fields.WarInfo;
  if ( !this )
    goto LABEL_37;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v34);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v52 = v51;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v35 )
      break;
    current = (SubmarineSpotInfo_o *)v52.fields._current;
    if ( !v52.fields._current )
      sub_1B64324(v35);
    monitor = (EventPanelSpotEntity_o *)v52.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64324(0LL);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v40 = (SubmarineSilhouetteData_o *)sub_1B64314(SubmarineSilhouetteData_TypeInfo, v38, v39);
      SubmarineSilhouetteData___ctor(v40, current, v41);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_1B64324(0LL);
      items = SilhouetteDataList_k__BackingField->fields._items;
      v46 = Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__;
      ++SilhouetteDataList_k__BackingField->fields._version;
      if ( !items )
        sub_1B64324(SilhouetteDataList_k__BackingField);
      size = SilhouetteDataList_k__BackingField->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          SilhouetteDataList_k__BackingField,
          (Il2CppObject *)v40,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        SilhouetteDataList_k__BackingField->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v40;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v40, v42, v43);
      }
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v39);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_1B64324(PanelByPanelId);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
}


void __fastcall SubmarineMapDataManager__DeleteBeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  struct SubmarineQuestSaveInfo_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  SubmarineSaveParamsManager__DeleteSavedQuestInfo((const MethodInfo *)this);
  v4 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v3);
  this->fields._BeforeQuestInfo_k__BackingField = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._BeforeQuestInfo_k__BackingField, (int32_t)v4, v5, v6);
}


System_Int32_array *__fastcall SubmarineMapDataManager__GetEmptyPanelUniqueIds(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v10; // x3
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32_t v12; // w21
  int32_t v13; // w22
  const MethodInfo *v14; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_49F90DC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&PanelUniqueIDUtil_TypeInfo, v7);
    byte_49F90DC = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
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
          if ( !v8 )
            goto LABEL_21;
          items = v8->fields._items;
          v16 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              (int32_t)PanelByIndices,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v8->fields._size = size + 1;
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
  if ( !v8 )
LABEL_21:
    sub_1B64324(PanelByIndices);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  const MethodInfo *v14; // x3
  unsigned int v15; // w26
  bool v16; // w23
  int v17; // w22
  int v18; // w21
  int32_t v19; // w2
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_49F90D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, *(_QWORD *)&hIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_49F90D9 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                       *(_QWORD *)&hIndex,
                                                       *(_QWORD *)&vIndex);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  v15 = 0;
  v16 = !diagonal;
  v17 = vIndex - 1;
  v18 = hIndex - 1;
  do
  {
    if ( v15 != 4 && ((v15 & 1) != 0 || !v16) )
    {
      PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                         this,
                                         v15 + v18 - 3 * (v15 / 3),
                                         v17 + v15 / 3,
                                         v14);
      if ( PanelByIndices )
      {
        if ( !v12 )
          goto LABEL_15;
        items = v12->fields._items;
        v21 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v12->fields._size;
        v23 = PanelByIndices;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            PanelByIndices,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v23, v19, (int32_t)v14);
        }
      }
    }
    ++v15;
  }
  while ( v15 != 9 );
  if ( !v12 )
LABEL_15:
    sub_1B64324(PanelByIndices);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *v14; // x22
  void *monitor; // x8
  unsigned __int64 v16; // x23
  int32_t v17; // w21
  __int64 v18; // x2
  int32_t v19; // w0
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_int__o *v22; // x20
  int32_t v23; // w19
  System_Int32_array *v24; // x0
  const MethodInfo *v25; // x2

  if ( (byte_49F90DB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_49F90DB = 1;
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
          sub_1B6432C(WarInfo, v13);
        v17 = *((_DWORD *)&v14[2].klass + v16);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v10,
                            v17,
                            (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v14[1].monitor;
        if ( (__int64)++v16 >= (int)monitor )
          return 0;
      }
      v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v13,
                                                        v18);
      System_Collections_Generic_List_int____ctor_55113648(
        v22,
        v14,
        (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
      if ( v22 )
      {
        System_Collections_Generic_List_int___Remove(
          v22,
          v17,
          (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v23 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v24 = System_Collections_Generic_List_int___ToArray(
                  v22,
                  (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v23, v24, v25);
          return v17;
        }
      }
LABEL_21:
      sub_1B64324(WarInfo);
    }
  }
  else
  {
    WarInfo = this->fields.WarInfo;
    if ( !WarInfo )
      goto LABEL_21;
    v19 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v19, v10, v20);
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
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_49F90D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&hIndex);
    sub_1B640C8(&System_Predicate_SubmarineMapPanelData__TypeInfo, v7);
    sub_1B640C8(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__, v8);
    sub_1B640C8(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo, v9);
    byte_49F90D5 = 1;
  }
  v10 = sub_1B64314(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo, *(_QWORD *)&hIndex, *(_QWORD *)&vIndex);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = hIndex,
        *(_DWORD *)(v10 + 20) = vIndex,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v15 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_SubmarineMapPanelData__TypeInfo, v12, v13),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v10,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1B64324(v11);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v15,
                                      (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49F90D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&panelId);
    sub_1B640C8(&System_Predicate_SubmarineMapPanelData__TypeInfo, v5);
    sub_1B640C8(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__, v6);
    sub_1B640C8(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo, v7);
    byte_49F90D6 = 1;
  }
  v8 = sub_1B64314(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&panelId, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = panelId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_SubmarineMapPanelData__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1B64324(v9);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v13,
                                      (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49F90D7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&spotId);
    sub_1B640C8(&System_Predicate_SubmarineMapPanelData__TypeInfo, v5);
    sub_1B640C8(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__, v6);
    sub_1B640C8(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo, v7);
    byte_49F90D7 = 1;
  }
  v8 = sub_1B64314(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo, *(_QWORD *)&spotId, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = spotId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_SubmarineMapPanelData__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1B64324(v9);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v13,
                                      (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  Il2CppObject *PanelByIndices; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F90DA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, scanEvents);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_49F90DA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                       scanEvents,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)scanEvents,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v14 )
      break;
    if ( !v26.fields._current )
      sub_1B64324(v14);
    PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                       this,
                                       (int32_t)v26.fields._current[1].klass,
                                       HIDWORD(v26.fields._current[1].klass),
                                       v15);
    v19 = PanelByIndices;
    if ( !v12 )
      sub_1B64324(PanelByIndices);
    items = v12->fields._items;
    v21 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1B64324(PanelByIndices);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        PanelByIndices,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v12 )
LABEL_17:
    sub_1B64324(v13);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  const MethodInfo *v10; // x2
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x8
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct System_Int32_array_array *v14; // x22
  int max_length; // w8
  Il2CppObject *v16; // x21
  unsigned int v17; // w23
  System_Int32_array *v18; // x8
  int32_t v19; // w2
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_49F90D8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, silhouetteData);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v7);
    byte_49F90D8 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                      silhouetteData,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
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
                                         v10);
      if ( PanelByPanelId )
      {
        v14 = silhouetteData->fields._EnemySizeIdx_k__BackingField;
        if ( !v14 )
          goto LABEL_23;
        max_length = v14->max_length;
        if ( max_length >= 1 )
        {
          v16 = PanelByPanelId;
          v17 = 0;
          do
          {
            if ( v17 >= max_length )
              goto LABEL_22;
            v18 = v14->m_Items[v17];
            if ( !v18 )
              goto LABEL_23;
            if ( v18->max_length < 2 )
LABEL_22:
              sub_1B6432C(PanelByPanelId, v12);
            PanelByPanelId = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                               this,
                                               v18->m_Items[1] + LODWORD(v16[1].klass),
                                               v18->m_Items[2] + HIDWORD(v16[1].klass),
                                               v13);
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
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v23;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v23, v19, (int32_t)v13);
              }
            }
            max_length = v14->max_length;
          }
          while ( (int)++v17 < max_length );
        }
      }
    }
  }
  if ( !v8 )
LABEL_23:
    sub_1B64324(PanelByPanelId);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v8,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_1B64324(0LL);
  return UserEventMapMaster__GetEntity_39752976(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
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
  if ( (byte_49F90DE & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_49F90DE = 1;
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
          sub_1B6432C(questIds, *(_QWORD *)&beforeClearQuestId);
        v10 = v6->m_Items[v8 + 1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_37285996(v10, beforeClearQuestId, v9, 0LL);
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
  __int64 v6; // x1
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
          sub_1B6432C(userEventMapEntity, v6);
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
      sub_1B64324(userEventMapEntity);
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

  if ( (byte_49F90DD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_long___, panelDetail);
    sub_1B640C8(&long___TypeInfo, v7);
    byte_49F90DD = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_1B64170(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v11 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_2F31F78 *)Method_System_Array_IndexOf_long___);
  return (IsStartScan || v11 >= 0) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_33282276(
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
    sub_1B64324(0LL);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_33282276(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_1B64324(0LL);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_33282496(
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
  DataMasterBase_o *eventPanelMapMaster; // x20
  System_Int64_array *v4; // x0

  v2 = mapId;
  if ( (byte_49F90DF & 1) == 0 )
  {
    *(_QWORD *)&mapId = sub_1B640C8(&long___TypeInfo, method);
    byte_49F90DF = 1;
  }
  eventPanelMapMaster = (DataMasterBase_o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v4 = (System_Int64_array *)sub_1B64170(long___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_7;
  if ( !v4->max_length )
    sub_1B6432C(v4, v4);
  v4->m_Items[0] = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_1B64324(v4);
  return DataMasterBase__isEntityExistsFromId(eventPanelMapMaster, v4, 0LL);
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

  if ( (byte_49F90D2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, overwriteSettings);
    byte_49F90D2 = 1;
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
    sub_1B64324(Settings_k__BackingField);
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
  const MethodInfo *v22; // x3
  Il2CppObject *current; // x29
  int max_length; // w9
  int v25; // w10
  EventPanelMapDetailEntity_o *v26; // x8
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x3
  SubmarineSilhouetteData_o *v29; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v31; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v33; // x1
  int v34; // w8
  int i; // w9
  SubmarineMapPanelData_o *v36; // x10
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x20
  bool IsScannable; // w8
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49F90D4 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v11);
    byte_49F90D4 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  memset(&v42, 0, sizeof(v42));
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
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_39752976(v18, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_54;
  v19 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v43 = v41;
LABEL_11:
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v20 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1B64324(v20);
    LOWORD(v43.fields._current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_1B64324(v20);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( max_length == v25 )
          sub_1B6432C(v20, v21);
        v26 = ListByMapId->m_Items[v25];
        if ( !v26 )
          sub_1B64324(v20);
        if ( v26->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( max_length == ++v25 )
          goto LABEL_11;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(
                                     v19,
                                     ListByMapId->m_Items[v25],
                                     beforeClearQuestId,
                                     v22);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v27 )
      break;
    v29 = (SubmarineSilhouetteData_o *)v42.fields._current;
    if ( !v42.fields._current )
      sub_1B64324(v27);
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v42.fields._current[2].klass,
                          beforeClearQuestId,
                          0,
                          v28);
    v29->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v29, v31);
      if ( !SilhouetteOccupiedPanels )
        sub_1B64324(0LL);
      v34 = SilhouetteOccupiedPanels->max_length;
      if ( v34 >= 1 )
      {
        for ( i = 0; i != v34; ++i )
        {
          if ( v34 == i )
            sub_1B6432C(SilhouetteOccupiedPanels, v33);
          v36 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v36 )
            sub_1B64324(SilhouetteOccupiedPanels);
          v36->fields._HasEnemyParts_k__BackingField = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_54:
    sub_1B64324(WarInfo);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v43 = v41;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v37 )
      break;
    v39 = v43.fields._current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v43.fields._current )
        sub_1B64324(v37);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v43.fields._current[1].klass,
                      HIDWORD(v43.fields._current[1].klass),
                      this,
                      v38);
    }
    else
    {
      if ( !v43.fields._current )
        sub_1B64324(v37);
      IsScannable = 0;
    }
    BYTE2(v39[3].monitor) = IsScannable;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
    sub_1B64324(0LL);
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

  if ( (byte_49F90CF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90CE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


void __fastcall SubmarineMapDataManager__set_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        SubmarineQuestSaveInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._BeforeQuestInfo_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapDataManager__set_PanelDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineMapPanelData__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._PanelDataList_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._PanelDataList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapDataManager__set_PositionCalculator(
        SubmarineMapDataManager_o *this,
        SubmarinePanelPositionCalculator_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._PositionCalculator_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._PositionCalculator_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapDataManager__set_Settings(
        SubmarineMapDataManager_o *this,
        SubmarineSettingsManager_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Settings_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapDataManager__set_SilhouetteDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineSilhouetteData__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SilhouetteDataList_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._SilhouetteDataList_k__BackingField,
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}