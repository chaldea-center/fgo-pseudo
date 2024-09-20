void __fastcall SubmarineMapDataManager___ctor(
        SubmarineMapDataManager_o *this,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  SubmarineMapDataManager_Fields *p_fields; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  SubmarinePanelPositionCalculator_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_object__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  struct SubmarineQuestSaveInfo_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  MapControl_WarInfo_o *EventId; // x0
  struct MapControl_MapInfo_o *v26; // x8
  int32_t v27; // w20
  int32_t mapId; // w21
  SubmarineSettingsManager_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A57DAF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
    sub_1B885B0(&SubmarinePanelPositionCalculator_TypeInfo);
    sub_1B885B0(&SubmarineSettingsManager_TypeInfo);
    byte_4A57DAF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)mapInfo, v8, v9);
  this->fields.WarInfo = warInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.WarInfo, (int32_t)warInfo, v10, v11);
  v12 = (SubmarinePanelPositionCalculator_o *)sub_1B887FC(SubmarinePanelPositionCalculator_TypeInfo);
  SubmarinePanelPositionCalculator___ctor(v12, 0LL);
  this->fields._PositionCalculator_k__BackingField = v12;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._PositionCalculator_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._PanelDataList_k__BackingField, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v18;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int32_t)v18,
    v19,
    v20);
  v21 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(0LL);
  this->fields._BeforeQuestInfo_k__BackingField = v21;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int32_t)v21,
    v22,
    v23);
  EventId = this->fields.WarInfo;
  if ( !EventId
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), (v26 = p_fields->MapInfo) == 0LL) )
  {
    sub_1B8880C(EventId, v24);
  }
  v27 = (int)EventId;
  mapId = v26->fields.mapId;
  v29 = (SubmarineSettingsManager_o *)sub_1B887FC(SubmarineSettingsManager_TypeInfo);
  SubmarineSettingsManager___ctor(v29, v27, mapId, 0LL);
  this->fields._Settings_k__BackingField = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField, (int32_t)v29, v30, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapDataManager__ConstructParams(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *v2; // x19
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w20
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int WarInfo; // w8
  SubmarineMapDataManager_o *v7; // x21
  unsigned int v8; // w24
  EventPanelMapDetailEntity_o *v9; // x23
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  int v13; // s0
  int v14; // s1
  int v15; // s2
  struct MapControl_MapInfo_o *v16; // x8
  _QWORD *v17; // x9
  __int64 WarInfo_low; // x10
  MapControl_MapInfo_c **v19; // x8
  int32_t EventId; // w0
  const MethodInfo *v21; // x2
  _BOOL8 v22; // x0
  __int64 v23; // x1
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  const MethodInfo *v26; // x2
  SubmarineSilhouetteData_o *v27; // x21
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v37; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4A57DB1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
    sub_1B885B0(&SubmarineMapPanelData_TypeInfo);
    this = (SubmarineMapDataManager_o *)sub_1B885B0(&SubmarineSilhouetteData_TypeInfo);
    byte_4A57DB1 = 1;
  }
  memset(&v40, 0, sizeof(v40));
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
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
  v7 = this;
  if ( WarInfo >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= WarInfo )
        sub_1B88814(this, method);
      v9 = (EventPanelMapDetailEntity_o *)*((_QWORD *)&v7->fields.hasReleasedScanMethod + (int)v8);
      v10 = sub_1B887FC(SubmarineMapPanelData_TypeInfo);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v10, v9, 0LL);
      if ( !v9 )
        break;
      this = (SubmarineMapDataManager_o *)v2->fields._PositionCalculator_k__BackingField;
      if ( !this )
        break;
      *(UnityEngine_Vector3_o *)&v13 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                         (SubmarinePanelPositionCalculator_o *)this,
                                         v9->fields.idxX,
                                         v9->fields.idxY,
                                         0LL);
      if ( !v10 )
        break;
      *(_DWORD *)(v10 + 28) = v13;
      *(_DWORD *)(v10 + 32) = v14;
      *(_DWORD *)(v10 + 36) = v15;
      this = (SubmarineMapDataManager_o *)v2->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      v16 = this->fields.MapInfo;
      v17 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
      ++HIDWORD(this->fields.WarInfo);
      if ( !v16 )
        break;
      WarInfo_low = SLODWORD(this->fields.WarInfo);
      if ( (unsigned int)WarInfo_low >= *(_DWORD *)&v16->fields._IsNext_k__BackingField )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v10,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &v16->klass + WarInfo_low;
        LODWORD(this->fields.WarInfo) = WarInfo_low + 1;
        v19[4] = (MapControl_MapInfo_c *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), v10, v11, v12);
      }
      WarInfo = (int)v7->fields.WarInfo;
      if ( (int)++v8 >= WarInfo )
        goto LABEL_21;
    }
LABEL_37:
    sub_1B8880C(this, method);
  }
LABEL_21:
  this = (SubmarineMapDataManager_o *)v2->fields.WarInfo;
  if ( !this )
    goto LABEL_37;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v21);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v22 )
      break;
    current = (SubmarineSpotInfo_o *)v40.fields._current;
    if ( !v40.fields._current )
      sub_1B8880C(v22, v23);
    monitor = (EventPanelSpotEntity_o *)v40.fields._current[1].monitor;
    if ( !monitor )
      sub_1B8880C(0LL, v23);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v27 = (SubmarineSilhouetteData_o *)sub_1B887FC(SubmarineSilhouetteData_TypeInfo);
      SubmarineSilhouetteData___ctor(v27, current, 0LL);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_1B8880C(0LL, v28);
      items = SilhouetteDataList_k__BackingField->fields._items;
      v33 = Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__;
      ++SilhouetteDataList_k__BackingField->fields._version;
      if ( !items )
        sub_1B8880C(SilhouetteDataList_k__BackingField, v28);
      size = SilhouetteDataList_k__BackingField->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          SilhouetteDataList_k__BackingField,
          (Il2CppObject *)v27,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        SilhouetteDataList_k__BackingField->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v27;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v27, v29, v30);
      }
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v26);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_1B8880C(PanelByPanelId, v37);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
}


void __fastcall SubmarineMapDataManager__DeleteBeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineQuestSaveInfo_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  SubmarineSaveParamsManager__DeleteSavedQuestInfo(0LL);
  v3 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(0LL);
  this->fields._BeforeQuestInfo_k__BackingField = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._BeforeQuestInfo_k__BackingField, (int32_t)v3, v4, v5);
}


System_Int32_array *__fastcall SubmarineMapDataManager__GetEmptyPanelUniqueIds(
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

  if ( (byte_4A57DBA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&PanelUniqueIDUtil_TypeInfo);
    byte_4A57DBA = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              (int32_t)PanelByIndices,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size + 1] = (int)PanelByIndices;
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
    sub_1B8880C(PanelByIndices, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetNeighborPanels(
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

  if ( (byte_4A57DB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_4A57DB7 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            PanelByIndices,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v21, v17, (int32_t)v12);
        }
      }
    }
    ++v13;
  }
  while ( v13 != 9 );
  if ( !v9 )
LABEL_15:
    sub_1B8880C(PanelByIndices, v11);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v9,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


int32_t __fastcall SubmarineMapDataManager__GetNewReleasedScanId(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  void *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v5; // x1
  System_Int32_array *v6; // x20
  int32_t v7; // w0
  System_Collections_Generic_IEnumerable_T__o *v8; // x22
  void *monitor; // x8
  unsigned __int64 v10; // x23
  int32_t v11; // w21
  int32_t v12; // w0
  System_Collections_Generic_List_int__o *v14; // x20
  int32_t v15; // w19
  System_Int32_array *v16; // x0

  if ( (byte_4A57DB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A57DB9 = 1;
  }
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_21;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
  WarInfo = SubmarineDataHelperScan__GetUnreleasedScanIds(EventId, v5);
  if ( !this->fields.WarInfo )
    goto LABEL_21;
  v6 = (System_Int32_array *)WarInfo;
  v7 = MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  WarInfo = SubmarineSaveParamsManager__LoadUnreleasedScanInfo(v7, 0LL);
  if ( WarInfo )
  {
    v8 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)WarInfo + 3);
    if ( !v8 )
      goto LABEL_21;
    monitor = v8[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)monitor )
          sub_1B88814(WarInfo, method);
        v11 = *((_DWORD *)&v8[2].klass + v10);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v6,
                            v11,
                            (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v8[1].monitor;
        if ( (__int64)++v10 >= (int)monitor )
          return 0;
      }
      v14 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_55443684(
        v14,
        v8,
        (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
      if ( v14 )
      {
        System_Collections_Generic_List_int___Remove(
          v14,
          v11,
          (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v15 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v16 = System_Collections_Generic_List_int___ToArray(
                  v14,
                  (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v15, v16, 0LL);
          return v11;
        }
      }
LABEL_21:
      sub_1B8880C(WarInfo, method);
    }
  }
  else
  {
    WarInfo = this->fields.WarInfo;
    if ( !WarInfo )
      goto LABEL_21;
    v12 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v12, v6, 0LL);
  }
  return 0;
}


SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelByIndices(
        SubmarineMapDataManager_o *this,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
  SubmarineMapDataManager___c__DisplayClass36_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4A57DB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_1B885B0(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__);
    sub_1B885B0(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
    byte_4A57DB3 = 1;
  }
  v7 = (SubmarineMapDataManager___c__DisplayClass36_0_o *)sub_1B887FC(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass36_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.hIndex = hIndex,
        v7->fields.vIndex = vIndex,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1B8880C(v8, v9);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v11,
                                      (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelByPanelId(
        SubmarineMapDataManager_o *this,
        int32_t panelId,
        const MethodInfo *method)
{
  SubmarineMapDataManager___c__DisplayClass37_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A57DB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_1B885B0(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__);
    sub_1B885B0(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
    byte_4A57DB4 = 1;
  }
  v5 = (SubmarineMapDataManager___c__DisplayClass37_0_o *)sub_1B887FC(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass37_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.panelId = panelId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1B8880C(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelBySpotId(
        SubmarineMapDataManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  SubmarineMapDataManager___c__DisplayClass38_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A57DB5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_1B885B0(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__);
    sub_1B885B0(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
    byte_4A57DB5 = 1;
  }
  v5 = (SubmarineMapDataManager___c__DisplayClass38_0_o *)sub_1B887FC(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass38_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.spotId = spotId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1B8880C(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetPanelsByScanEvents(
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
  int32_t v13; // w3
  Il2CppObject *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57DB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_4A57DB8 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)scanEvents,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v8 )
      break;
    if ( !v21.fields._current )
      sub_1B8880C(v8, v9);
    PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                       this,
                                       (int32_t)v21.fields._current[1].klass,
                                       HIDWORD(v21.fields._current[1].klass),
                                       v10);
    v14 = PanelByIndices;
    if ( !v5 )
      sub_1B8880C(PanelByIndices, PanelByIndices);
    items = v5->fields._items;
    v16 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1B8880C(PanelByIndices, PanelByIndices);
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        PanelByIndices,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v5 )
LABEL_17:
    sub_1B8880C(v6, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
        SubmarineMapDataManager_o *this,
        SubmarineSilhouetteData_o *silhouetteData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  SubmarineMapPanelData_o *HasEnemySize; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x22
  int max_length; // w8
  SubmarineMapPanelData_o *v12; // x21
  unsigned int v13; // w23
  System_Int32_array *v14; // x8
  int32_t v15; // w2
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  SubmarineMapPanelData_o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4A57DB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_4A57DB6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !silhouetteData )
    goto LABEL_22;
  HasEnemySize = (SubmarineMapPanelData_o *)SubmarineSilhouetteData__get_HasEnemySize(silhouetteData, 0LL);
  if ( ((unsigned __int8)HasEnemySize & 1) != 0 )
  {
    HasEnemySize = SubmarineMapDataManager__GetPanelByPanelId(this, silhouetteData->fields._PanelId_k__BackingField, v8);
    if ( HasEnemySize )
    {
      EnemySizeIdx_k__BackingField = silhouetteData->fields._EnemySizeIdx_k__BackingField;
      if ( !EnemySizeIdx_k__BackingField )
        goto LABEL_22;
      max_length = EnemySizeIdx_k__BackingField->max_length;
      if ( max_length >= 1 )
      {
        v12 = HasEnemySize;
        v13 = 0;
        do
        {
          if ( v13 >= max_length )
            goto LABEL_21;
          v14 = EnemySizeIdx_k__BackingField->m_Items[v13];
          if ( !v14 )
            goto LABEL_22;
          if ( v14->max_length < 2 )
LABEL_21:
            sub_1B88814(HasEnemySize, v7);
          HasEnemySize = SubmarineMapDataManager__GetPanelByIndices(
                           this,
                           v14->m_Items[1] + v12->fields._HIndex_k__BackingField,
                           v14->m_Items[2] + v12->fields._VIndex_k__BackingField,
                           v9);
          if ( HasEnemySize )
          {
            if ( !v5 )
              goto LABEL_22;
            items = v5->fields._items;
            v17 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
            ++v5->fields._version;
            if ( !items )
              goto LABEL_22;
            size = v5->fields._size;
            v19 = HasEnemySize;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)HasEnemySize,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v19;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v15, (int32_t)v9);
            }
          }
          max_length = EnemySizeIdx_k__BackingField->max_length;
        }
        while ( (int)++v13 < max_length );
      }
    }
  }
  if ( !v5 )
LABEL_22:
    sub_1B8880C(HasEnemySize, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_1B8880C(0LL, v6);
  return UserEventMapMaster__GetEntity_40084972(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
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
  if ( (byte_4A57DBC & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A57DBC = 1;
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
          sub_1B88814(questIds, *(_QWORD *)&beforeClearQuestId);
        v10 = v6->m_Items[v8 + 1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_37596684(v10, beforeClearQuestId, v9, 0LL);
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
    userEventMapEntity = 0LL;
    if ( v7 && (int)v7 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= (unsigned int)v7 )
          sub_1B88814(userEventMapEntity, panelDetail);
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
      sub_1B8880C(userEventMapEntity, panelDetail);
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
  System_Int64_array *value; // x22
  bool IsStartScan; // w23
  int32_t v10; // w22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3

  if ( (byte_4A57DBB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_long___);
    sub_1B885B0(&long___TypeInfo);
    byte_4A57DBB = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_1B88658(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v10 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_2F7A4E8 *)Method_System_Array_IndexOf_long___);
  return (IsStartScan || v10 >= 0) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_33559864(
                                       panelDetail,
                                       beforeClearQuestId,
                                       v11)
      || SubmarineMapDataManager__IsEnemyOccupiedPanelAndDefeated(
           userEventMapEntity,
           panelDetail,
           beforeClearQuestId,
           v12);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
        SubmarineMapPanelData_o *panelData,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelData )
    sub_1B8880C(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_33559864(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_1B8880C(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_33560084(
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
  System_Int64_array *v5; // x1

  v2 = mapId;
  if ( (byte_4A57DBD & 1) == 0 )
  {
    *(_QWORD *)&mapId = sub_1B885B0(&long___TypeInfo);
    byte_4A57DBD = 1;
  }
  eventPanelMapMaster = (DataMasterBase_o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v4 = (System_Int64_array *)sub_1B88658(long___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_7;
  v5 = v4;
  if ( !v4->max_length )
    sub_1B88814(v4, v4);
  v4->m_Items[0] = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_1B8880C(v4, v5);
  return DataMasterBase__isEntityExistsFromId(eventPanelMapMaster, v4, 0LL);
}


void __fastcall SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0

  if ( (byte_4A57DB0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57DB0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)overwriteSettings, 0LL, 0LL) )
  {
    Settings_k__BackingField = this->fields._Settings_k__BackingField;
    if ( !Settings_k__BackingField )
      goto LABEL_11;
    SubmarineSettingsManager__Load(Settings_k__BackingField, overwriteSettings, 0LL);
  }
  Settings_k__BackingField = this->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField
    || (SubmarineSettingsManager__UpdateSettingsFromMaster(Settings_k__BackingField, 0LL),
        (Settings_k__BackingField = (SubmarineSettingsManager_o *)this->fields._PositionCalculator_k__BackingField) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(Settings_k__BackingField, v5);
  }
  SubmarinePanelPositionCalculator__LoadSettings(
    (SubmarinePanelPositionCalculator_o *)Settings_k__BackingField,
    this->fields._Settings_k__BackingField,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapDataManager__UpdateParams(
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

  if ( (byte_4A57DB2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    byte_4A57DB2 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_54;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0LL);
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
  ListByMapId = EventPanelMapDetailMaster__GetListByMapId((EventPanelMapDetailMaster_o *)WarInfo, mapId, 0LL);
  WarInfo = (MapControl_WarInfo_o *)SubmarineMapDataManager__get_userEventMapMaster((const MethodInfo *)ListByMapId);
  if ( !this->fields.WarInfo )
    goto LABEL_54;
  v11 = (UserEventMapMaster_o *)WarInfo;
  WarInfo = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  if ( !v11 )
    goto LABEL_54;
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_40084972(v11, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_54;
  v12 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v38 = v36;
LABEL_11:
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v13 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1B8880C(v13, v14);
    LOWORD(v38.fields._current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_1B8880C(v13, v14);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( max_length == v18 )
          sub_1B88814(v13, v14);
        v19 = ListByMapId->m_Items[v18];
        if ( !v19 )
          sub_1B8880C(v13, v14);
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v20 )
      break;
    v23 = (SubmarineSilhouetteData_o *)v37.fields._current;
    if ( !v37.fields._current )
      sub_1B8880C(v20, v21);
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
        sub_1B8880C(0LL, v27);
      v28 = SilhouetteOccupiedPanels->max_length;
      if ( v28 >= 1 )
      {
        for ( i = 0; i != v28; ++i )
        {
          if ( v28 == i )
            sub_1B88814(SilhouetteOccupiedPanels, v27);
          v30 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v30 )
            sub_1B8880C(SilhouetteOccupiedPanels, v27);
          v30->fields._HasEnemyParts_k__BackingField = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_54:
    sub_1B8880C(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v38 = v36;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v31 )
      break;
    v34 = v38.fields._current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v38.fields._current )
        sub_1B8880C(v31, v32);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v38.fields._current[1].klass,
                      HIDWORD(v38.fields._current[1].klass),
                      this,
                      v33);
    }
    else
    {
      if ( !v38.fields._current )
        sub_1B8880C(v31, v32);
      IsScannable = 0;
    }
    BYTE2(v34[3].monitor) = IsScannable;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
    sub_1B8880C(0LL, method);
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
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A57DAD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57DAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A57DAC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPanelMapMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57DAC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A57DAE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57DAE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


void __fastcall SubmarineMapDataManager__set_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        SubmarineQuestSaveInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._BeforeQuestInfo_k__BackingField = value;
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}