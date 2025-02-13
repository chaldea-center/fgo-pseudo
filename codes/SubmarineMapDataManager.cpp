void __fastcall SubmarineMapDataManager___ctor(
        SubmarineMapDataManager_o *this,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  SubmarineMapDataManager_Fields *p_fields; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  SubmarinePanelPositionCalculator_o *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_object__o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct SubmarineQuestSaveInfo_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  MapControl_WarInfo_o *EventId; // x0
  struct MapControl_MapInfo_o *v50; // x8
  int32_t v51; // w20
  int32_t mapId; // w21
  SubmarineSettingsManager_o *v53; // x22
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4BD9086 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
    sub_1C21E38(&SubmarinePanelPositionCalculator_TypeInfo);
    sub_1C21E38(&SubmarineSettingsManager_TypeInfo);
    byte_4BD9086 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)mapInfo, v8, v9, v10, v11, v12, v13);
  this->fields.WarInfo = warInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.WarInfo, (int64_t)warInfo, v14, v15, v16, v17, v18, v19);
  v20 = (SubmarinePanelPositionCalculator_o *)sub_1C22084(SubmarinePanelPositionCalculator_TypeInfo);
  SubmarinePanelPositionCalculator___ctor(v20, 0LL);
  this->fields._PositionCalculator_k__BackingField = v20;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._PositionCalculator_k__BackingField,
    (int64_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v27;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._PanelDataList_k__BackingField,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v34;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(0LL);
  this->fields._BeforeQuestInfo_k__BackingField = v41;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  EventId = this->fields.WarInfo;
  if ( !EventId
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), (v50 = p_fields->MapInfo) == 0LL) )
  {
    sub_1C22094(EventId, v48);
  }
  v51 = (int)EventId;
  mapId = v50->fields.mapId;
  v53 = (SubmarineSettingsManager_o *)sub_1C22084(SubmarineSettingsManager_TypeInfo);
  SubmarineSettingsManager___ctor(v53, v51, mapId, 0LL);
  this->fields._Settings_k__BackingField = v53;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField,
    (int64_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
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
  int64_t v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int v17; // s0
  int v18; // s1
  int v19; // s2
  struct MapControl_MapInfo_o *v20; // x8
  _QWORD *v21; // x9
  __int64 WarInfo_low; // x10
  MapControl_MapInfo_c **v23; // x8
  int32_t EventId; // w0
  const MethodInfo *v25; // x2
  _BOOL8 v26; // x0
  __int64 v27; // x1
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  const MethodInfo *v30; // x2
  SubmarineSilhouetteData_o *v31; // x21
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v45; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4BD9088 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
    sub_1C21E38(&SubmarineMapPanelData_TypeInfo);
    this = (SubmarineMapDataManager_o *)sub_1C21E38(&SubmarineSilhouetteData_TypeInfo);
    byte_4BD9088 = 1;
  }
  memset(&v48, 0, sizeof(v48));
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
                                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
        sub_1C2209C(this, method);
      v9 = (EventPanelMapDetailEntity_o *)*((_QWORD *)&v7->fields.hasReleasedScanMethod + (int)v8);
      v10 = sub_1C22084(SubmarineMapPanelData_TypeInfo);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v10, v9, 0LL);
      if ( !v9 )
        break;
      this = (SubmarineMapDataManager_o *)v2->fields._PositionCalculator_k__BackingField;
      if ( !this )
        break;
      *(UnityEngine_Vector3_o *)&v17 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                         (SubmarinePanelPositionCalculator_o *)this,
                                         v9->fields.idxX,
                                         v9->fields.idxY,
                                         0LL);
      if ( !v10 )
        break;
      *(_DWORD *)(v10 + 28) = v17;
      *(_DWORD *)(v10 + 32) = v18;
      *(_DWORD *)(v10 + 36) = v19;
      this = (SubmarineMapDataManager_o *)v2->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      v20 = this->fields.MapInfo;
      v21 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
      ++HIDWORD(this->fields.WarInfo);
      if ( !v20 )
        break;
      WarInfo_low = SLODWORD(this->fields.WarInfo);
      if ( (unsigned int)WarInfo_low >= *(_DWORD *)&v20->fields._IsNext_k__BackingField )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v10,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &v20->klass + WarInfo_low;
        LODWORD(this->fields.WarInfo) = WarInfo_low + 1;
        v23[4] = (MapControl_MapInfo_c *)v10;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), v10, v11, v12, v13, v14, v15, v16);
      }
      WarInfo = (int)v7->fields.WarInfo;
      if ( (int)++v8 >= WarInfo )
        goto LABEL_21;
    }
LABEL_37:
    sub_1C22094(this, method);
  }
LABEL_21:
  this = (SubmarineMapDataManager_o *)v2->fields.WarInfo;
  if ( !this )
    goto LABEL_37;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v25);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v26 )
      break;
    current = (SubmarineSpotInfo_o *)v48.fields._current;
    if ( !v48.fields._current )
      sub_1C22094(v26, v27);
    monitor = (EventPanelSpotEntity_o *)v48.fields._current[1].monitor;
    if ( !monitor )
      sub_1C22094(0LL, v27);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v31 = (SubmarineSilhouetteData_o *)sub_1C22084(SubmarineSilhouetteData_TypeInfo);
      SubmarineSilhouetteData___ctor(v31, current, 0LL);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_1C22094(0LL, v32);
      items = SilhouetteDataList_k__BackingField->fields._items;
      v41 = Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__;
      ++SilhouetteDataList_k__BackingField->fields._version;
      if ( !items )
        sub_1C22094(SilhouetteDataList_k__BackingField, v32);
      size = SilhouetteDataList_k__BackingField->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          SilhouetteDataList_k__BackingField,
          (Il2CppObject *)v31,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        SilhouetteDataList_k__BackingField->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v31;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v31, v33, v34, v35, v36, v37, v38);
      }
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v30);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_1C22094(PanelByPanelId, v45);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
}


void __fastcall SubmarineMapDataManager__DeleteBeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineQuestSaveInfo_o *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  SubmarineSaveParamsManager__DeleteSavedQuestInfo(0LL);
  v3 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(0LL);
  this->fields._BeforeQuestInfo_k__BackingField = v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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

  if ( (byte_4BD9091 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&PanelUniqueIDUtil_TypeInfo);
    byte_4BD9091 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
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
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C22094(PanelByIndices, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int64_t v17; // x2
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int64_t v25; // x1
  Il2CppClass **v26; // x0

  if ( (byte_4BD908E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_4BD908E = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
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
        v25 = (int64_t)PanelByIndices;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            PanelByIndices,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), v25, v17, (int32_t)v12, v18, v19, v20, v21);
        }
      }
    }
    ++v13;
  }
  while ( v13 != 9 );
  if ( !v9 )
LABEL_15:
    sub_1C22094(PanelByIndices, v11);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v9,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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

  if ( (byte_4BD9090 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BD9090 = 1;
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
          sub_1C2209C(WarInfo, method);
        v11 = *((_DWORD *)&v8[2].klass + v10);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v6,
                            v11,
                            (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v8[1].monitor;
        if ( (__int64)++v10 >= (int)monitor )
          return 0;
      }
      v14 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_56826212(
        v14,
        v8,
        (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
      if ( v14 )
      {
        System_Collections_Generic_List_int___Remove(
          v14,
          v11,
          (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v15 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v16 = System_Collections_Generic_List_int___ToArray(
                  v14,
                  (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v15, v16, 0LL);
          return v11;
        }
      }
LABEL_21:
      sub_1C22094(WarInfo, method);
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

  if ( (byte_4BD908A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_1C21E38(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__);
    sub_1C21E38(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
    byte_4BD908A = 1;
  }
  v7 = (SubmarineMapDataManager___c__DisplayClass36_0_o *)sub_1C22084(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass36_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.hIndex = hIndex,
        v7->fields.vIndex = vIndex,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v11 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1C22094(v8, v9);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v11,
                                      (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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

  if ( (byte_4BD908B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_1C21E38(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__);
    sub_1C21E38(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
    byte_4BD908B = 1;
  }
  v5 = (SubmarineMapDataManager___c__DisplayClass37_0_o *)sub_1C22084(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass37_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.panelId = panelId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1C22094(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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

  if ( (byte_4BD908C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_1C21E38(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__);
    sub_1C21E38(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
    byte_4BD908C = 1;
  }
  v5 = (SubmarineMapDataManager___c__DisplayClass38_0_o *)sub_1C22084(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass38_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.spotId = spotId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1C22094(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD908F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_4BD908F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)scanEvents,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v8 )
      break;
    if ( !v25.fields._current )
      sub_1C22094(v8, v9);
    PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                       this,
                                       (int32_t)v25.fields._current[1].klass,
                                       HIDWORD(v25.fields._current[1].klass),
                                       v10);
    v18 = (int64_t)PanelByIndices;
    if ( !v5 )
      sub_1C22094(PanelByIndices, PanelByIndices);
    items = v5->fields._items;
    v20 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C22094(PanelByIndices, PanelByIndices);
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        PanelByIndices,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v18;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), v18, v12, v13, v14, v15, v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v5 )
LABEL_17:
    sub_1C22094(v6, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  int64_t v15; // x2
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_4BD908D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_4BD908D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
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
            sub_1C2209C(HasEnemySize, v7);
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
            v21 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
            ++v5->fields._version;
            if ( !items )
              goto LABEL_22;
            size = v5->fields._size;
            v23 = (int64_t)HasEnemySize;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)HasEnemySize,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v23;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v23, v15, (int32_t)v9, v16, v17, v18, v19);
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
    sub_1C22094(HasEnemySize, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_1C22094(0LL, v6);
  return UserEventMapMaster__GetEntity_41355188(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
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
  if ( (byte_4BD9093 & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_1C21E38(&CondType_TypeInfo);
    byte_4BD9093 = 1;
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
          sub_1C2209C(questIds, *(_QWORD *)&beforeClearQuestId);
        v10 = v6->m_Items[v8 + 1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_38834244(v10, beforeClearQuestId, v9, 0LL);
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
          sub_1C2209C(userEventMapEntity, panelDetail);
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
      sub_1C22094(userEventMapEntity, panelDetail);
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

  if ( (byte_4BD9092 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_long___);
    sub_1C21E38(&long___TypeInfo);
    byte_4BD9092 = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_1C21EE0(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v10 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_30ACDDC *)Method_System_Array_IndexOf_long___);
  return (IsStartScan || v10 >= 0) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_34702188(
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
    sub_1C22094(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_34702188(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_1C22094(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_34702408(
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
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelMapMaster; // x20
  System_Int64_array *v4; // x0
  System_Int64_array *v5; // x1

  v2 = mapId;
  if ( (byte_4BD9094 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__);
    *(_QWORD *)&mapId = sub_1C21E38(&long___TypeInfo);
    byte_4BD9094 = 1;
  }
  eventPanelMapMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v4 = (System_Int64_array *)sub_1C21EE0(long___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_7;
  v5 = v4;
  if ( !v4->max_length )
    sub_1C2209C(v4, v4);
  v4->m_Items[0] = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_1C22094(v4, v5);
  return DataMasterBase_object__object__int___isEntityExistsFromId(
           eventPanelMapMaster,
           v4,
           (const MethodInfo_325B3A4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__);
}


void __fastcall SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0

  if ( (byte_4BD9087 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9087 = 1;
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
    sub_1C22094(Settings_k__BackingField, v5);
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

  if ( (byte_4BD9089 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    byte_4BD9089 = 1;
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
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_41355188(v11, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_54;
  v12 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v38 = v36;
LABEL_11:
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v13 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1C22094(v13, v14);
    LOWORD(v38.fields._current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_1C22094(v13, v14);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( max_length == v18 )
          sub_1C2209C(v13, v14);
        v19 = ListByMapId->m_Items[v18];
        if ( !v19 )
          sub_1C22094(v13, v14);
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
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v20 )
      break;
    v23 = (SubmarineSilhouetteData_o *)v37.fields._current;
    if ( !v37.fields._current )
      sub_1C22094(v20, v21);
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
        sub_1C22094(0LL, v27);
      v28 = SilhouetteOccupiedPanels->max_length;
      if ( v28 >= 1 )
      {
        for ( i = 0; i != v28; ++i )
        {
          if ( v28 == i )
            sub_1C2209C(SilhouetteOccupiedPanels, v27);
          v30 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v30 )
            sub_1C22094(SilhouetteOccupiedPanels, v27);
          v30->fields._HasEnemyParts_k__BackingField = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_54:
    sub_1C22094(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v38 = v36;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v31 )
      break;
    v34 = v38.fields._current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v38.fields._current )
        sub_1C22094(v31, v32);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v38.fields._current[1].klass,
                      HIDWORD(v38.fields._current[1].klass),
                      this,
                      v33);
    }
    else
    {
      if ( !v38.fields._current )
        sub_1C22094(v31, v32);
      IsScannable = 0;
    }
    BYTE2(v34[3].monitor) = IsScannable;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
    sub_1C22094(0LL, method);
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

  if ( (byte_4BD9084 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9084 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD9083 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPanelMapMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9083 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD9085 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9085 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


void __fastcall SubmarineMapDataManager__set_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        SubmarineQuestSaveInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BeforeQuestInfo_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapDataManager__set_PanelDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineMapPanelData__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PanelDataList_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._PanelDataList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapDataManager__set_PositionCalculator(
        SubmarineMapDataManager_o *this,
        SubmarinePanelPositionCalculator_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PositionCalculator_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._PositionCalculator_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapDataManager__set_Settings(
        SubmarineMapDataManager_o *this,
        SubmarineSettingsManager_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Settings_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapDataManager__set_SilhouetteDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineSilhouetteData__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SilhouetteDataList_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}