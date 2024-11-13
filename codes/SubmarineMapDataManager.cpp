void __fastcall SubmarineMapDataManager___ctor(
        SubmarineMapDataManager_o *this,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
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
  SubmarineMapDataManager_Fields *p_fields; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  SubmarinePanelPositionCalculator_o *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_object__o *v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_object__o *v53; // x22
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct SubmarineQuestSaveInfo_o *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x1
  MapControl_WarInfo_o *EventId; // x0
  __int64 v69; // x2
  __int64 v70; // x3
  struct MapControl_MapInfo_o *v71; // x8
  int32_t v72; // w20
  int32_t mapId; // w21
  SubmarineSettingsManager_o *v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7

  if ( (byte_4B12DB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__, mapInfo, warInfo);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo, v11, v12);
    sub_1BCA7E0(&SubmarinePanelPositionCalculator_TypeInfo, v13, v14);
    sub_1BCA7E0(&SubmarineSettingsManager_TypeInfo, v15, v16);
    byte_4B12DB2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)mapInfo, v18, v19, v20, v21, v22, v23);
  this->fields.WarInfo = warInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.WarInfo, (int64_t)warInfo, v24, v25, v26, v27, v28, v29);
  v33 = (SubmarinePanelPositionCalculator_o *)sub_1BCAA2C(SubmarinePanelPositionCalculator_TypeInfo, v30, v31, v32);
  SubmarinePanelPositionCalculator___ctor(v33, 0LL);
  this->fields._PositionCalculator_k__BackingField = v33;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._PositionCalculator_k__BackingField,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                       v40,
                                                       v41,
                                                       v42);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v43;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._PanelDataList_k__BackingField,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v53 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo,
                                                       v50,
                                                       v51,
                                                       v52);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v53;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int64_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(0LL);
  this->fields._BeforeQuestInfo_k__BackingField = v60;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int64_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  EventId = this->fields.WarInfo;
  if ( !EventId
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), (v71 = p_fields->MapInfo) == 0LL) )
  {
    sub_1BCAA3C(EventId, v67);
  }
  v72 = (int)EventId;
  mapId = v71->fields.mapId;
  v74 = (SubmarineSettingsManager_o *)sub_1BCAA2C(SubmarineSettingsManager_TypeInfo, v67, v69, v70);
  SubmarineSettingsManager___ctor(v74, v72, mapId, 0LL);
  this->fields._Settings_k__BackingField = v74;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField,
    (int64_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapDataManager__ConstructParams(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SubmarineMapDataManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w20
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  __int64 v23; // x2
  __int64 v24; // x3
  int WarInfo; // w8
  SubmarineMapDataManager_o *v26; // x21
  unsigned int v27; // w24
  EventPanelMapDetailEntity_o *v28; // x23
  int64_t v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // s0
  int v37; // s1
  int v38; // s2
  struct MapControl_MapInfo_o *v39; // x8
  _QWORD *v40; // x9
  __int64 WarInfo_low; // x10
  MapControl_MapInfo_c **v42; // x8
  int32_t EventId; // w0
  const MethodInfo *v44; // x2
  _BOOL8 v45; // x0
  __int64 v46; // x1
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  __int64 v51; // x3
  SubmarineSilhouetteData_o *v52; // x21
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x8
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v66; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_4B12DB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&SubmarineMapPanelData_TypeInfo, v16, v17);
    this = (SubmarineMapDataManager_o *)sub_1BCA7E0(&SubmarineSilhouetteData_TypeInfo, v18, v19);
    byte_4B12DB4 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  MapInfo = v3->fields.MapInfo;
  if ( !MapInfo )
    goto LABEL_37;
  mapId = MapInfo->fields.mapId;
  this = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_eventPanelMapMaster((const MethodInfo *)this);
  if ( !this )
    goto LABEL_37;
  this = (SubmarineMapDataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        mapId,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_37;
  PositionCalculator_k__BackingField = v3->fields._PositionCalculator_k__BackingField;
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
  v26 = this;
  if ( WarInfo >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= WarInfo )
        sub_1BCAA44(this, method);
      v28 = (EventPanelMapDetailEntity_o *)*((_QWORD *)&v26->fields.hasReleasedScanMethod + (int)v27);
      v29 = sub_1BCAA2C(SubmarineMapPanelData_TypeInfo, method, v23, v24);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v29, v28, 0LL);
      if ( !v28 )
        break;
      this = (SubmarineMapDataManager_o *)v3->fields._PositionCalculator_k__BackingField;
      if ( !this )
        break;
      *(UnityEngine_Vector3_o *)&v36 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                         (SubmarinePanelPositionCalculator_o *)this,
                                         v28->fields.idxX,
                                         v28->fields.idxY,
                                         0LL);
      if ( !v29 )
        break;
      *(_DWORD *)(v29 + 28) = v36;
      *(_DWORD *)(v29 + 32) = v37;
      *(_DWORD *)(v29 + 36) = v38;
      this = (SubmarineMapDataManager_o *)v3->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      v39 = this->fields.MapInfo;
      v40 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
      ++HIDWORD(this->fields.WarInfo);
      if ( !v39 )
        break;
      WarInfo_low = SLODWORD(this->fields.WarInfo);
      if ( (unsigned int)WarInfo_low >= *(_DWORD *)&v39->fields._IsNext_k__BackingField )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v29,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &v39->klass + WarInfo_low;
        LODWORD(this->fields.WarInfo) = WarInfo_low + 1;
        v42[4] = (MapControl_MapInfo_c *)v29;
        sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v29, v30, v31, v32, v33, v34, v35);
      }
      WarInfo = (int)v26->fields.WarInfo;
      if ( (int)++v27 >= WarInfo )
        goto LABEL_21;
    }
LABEL_37:
    sub_1BCAA3C(this, method);
  }
LABEL_21:
  this = (SubmarineMapDataManager_o *)v3->fields.WarInfo;
  if ( !this )
    goto LABEL_37;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v44);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v69 = v68;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v45 )
      break;
    current = (SubmarineSpotInfo_o *)v69.fields._current;
    if ( !v69.fields._current )
      sub_1BCAA3C(v45, v46);
    monitor = (EventPanelSpotEntity_o *)v69.fields._current[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v46);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v52 = (SubmarineSilhouetteData_o *)sub_1BCAA2C(SubmarineSilhouetteData_TypeInfo, v49, v50, v51);
      SubmarineSilhouetteData___ctor(v52, current, 0LL);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v3->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_1BCAA3C(0LL, v53);
      items = SilhouetteDataList_k__BackingField->fields._items;
      v62 = Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__;
      ++SilhouetteDataList_k__BackingField->fields._version;
      if ( !items )
        sub_1BCAA3C(SilhouetteDataList_k__BackingField, v53);
      size = SilhouetteDataList_k__BackingField->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          SilhouetteDataList_k__BackingField,
          (Il2CppObject *)v52,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        SilhouetteDataList_k__BackingField->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v52;
        sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v52, v54, v55, v56, v57, v58, v59);
      }
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v3, current->fields._PanelId_k__BackingField, v50);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_1BCAA3C(PanelByPanelId, v66);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x20
  SubmarineMapPanelData_o *PanelByIndices; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32_t v18; // w21
  int32_t v19; // w22
  const MethodInfo *v20; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10

  if ( (byte_4B12DBD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&PanelUniqueIDUtil_TypeInfo, v11, v12);
    byte_4B12DBD = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_21;
  if ( PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField >= 1 )
  {
    v18 = 0;
    do
    {
      v19 = 0;
      while ( v19 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
      {
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(this, v18, v19, v16);
        if ( !PanelByIndices )
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, v15);
          PanelByIndices = (SubmarineMapPanelData_o *)PanelUniqueIDUtil__GetID(v18, v19, v20);
          if ( !v13 )
            goto LABEL_21;
          items = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v13->fields._size;
          v15 = (unsigned int)PanelByIndices;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              (int32_t)PanelByIndices,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v13->fields._size = size + 1;
            items->m_Items[size + 1] = (int)PanelByIndices;
          }
        }
        PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
        ++v19;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_21;
      }
      ++v18;
    }
    while ( v18 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField );
  }
  if ( !v13 )
LABEL_21:
    sub_1BCAA3C(PanelByIndices, v15);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  Il2CppObject *PanelByIndices; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  unsigned int v19; // w26
  bool v20; // w23
  int v21; // w22
  int v22; // w21
  int64_t v23; // x2
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  int64_t v31; // x1
  Il2CppClass **v32; // x0

  if ( (byte_4B12DBA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__,
      *(_QWORD *)&hIndex,
      *(_QWORD *)&vIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v13, v14);
    byte_4B12DBA = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                       *(_QWORD *)&hIndex,
                                                       *(_QWORD *)&vIndex,
                                                       diagonal);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  v19 = 0;
  v20 = !diagonal;
  v21 = vIndex - 1;
  v22 = hIndex - 1;
  do
  {
    if ( v19 != 4 && ((v19 & 1) != 0 || !v20) )
    {
      PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                         this,
                                         v19 + v22 - 3 * (v19 / 3),
                                         v21 + v19 / 3,
                                         v18);
      if ( PanelByIndices )
      {
        if ( !v15 )
          goto LABEL_15;
        items = v15->fields._items;
        v29 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v15->fields._size;
        v31 = (int64_t)PanelByIndices;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            PanelByIndices,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v31;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v31, v23, (int32_t)v18, v24, v25, v26, v27);
        }
      }
    }
    ++v19;
  }
  while ( v19 != 9 );
  if ( !v15 )
LABEL_15:
    sub_1BCAA3C(PanelByIndices, v17);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v15,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


int32_t __fastcall SubmarineMapDataManager__GetNewReleasedScanId(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  void *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v14; // x1
  System_Int32_array *v15; // x20
  int32_t v16; // w0
  System_Collections_Generic_IEnumerable_T__o *v17; // x22
  void *monitor; // x8
  unsigned __int64 v19; // x23
  int32_t v20; // w21
  __int64 v21; // x2
  __int64 v22; // x3
  int32_t v23; // w0
  System_Collections_Generic_List_int__o *v25; // x20
  int32_t v26; // w19
  System_Int32_array *v27; // x0

  if ( (byte_4B12DBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    byte_4B12DBC = 1;
  }
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_21;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
  WarInfo = SubmarineDataHelperScan__GetUnreleasedScanIds(EventId, v14);
  if ( !this->fields.WarInfo )
    goto LABEL_21;
  v15 = (System_Int32_array *)WarInfo;
  v16 = MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  WarInfo = SubmarineSaveParamsManager__LoadUnreleasedScanInfo(v16, 0LL);
  if ( WarInfo )
  {
    v17 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)WarInfo + 3);
    if ( !v17 )
      goto LABEL_21;
    monitor = v17[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)monitor )
          sub_1BCAA44(WarInfo, method);
        v20 = *((_DWORD *)&v17[2].klass + v19);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v15,
                            v20,
                            (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v17[1].monitor;
        if ( (__int64)++v19 >= (int)monitor )
          return 0;
      }
      v25 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        method,
                                                        v21,
                                                        v22);
      System_Collections_Generic_List_int____ctor_56116492(
        v25,
        v17,
        (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
      if ( v25 )
      {
        System_Collections_Generic_List_int___Remove(
          v25,
          v20,
          (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v26 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v27 = System_Collections_Generic_List_int___ToArray(
                  v25,
                  (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v26, v27, 0LL);
          return v20;
        }
      }
LABEL_21:
      sub_1BCAA3C(WarInfo, method);
    }
  }
  else
  {
    WarInfo = this->fields.WarInfo;
    if ( !WarInfo )
      goto LABEL_21;
    v23 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v23, v15, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  SubmarineMapDataManager___c__DisplayClass36_0_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v19; // x20

  if ( (byte_4B12DB6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__,
      *(_QWORD *)&hIndex,
      *(_QWORD *)&vIndex);
    sub_1BCA7E0(&System_Predicate_SubmarineMapPanelData__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__, v9, v10);
    sub_1BCA7E0(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo, v11, v12);
    byte_4B12DB6 = 1;
  }
  v13 = (SubmarineMapDataManager___c__DisplayClass36_0_o *)sub_1BCAA2C(
                                                             SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo,
                                                             *(_QWORD *)&hIndex,
                                                             *(_QWORD *)&vIndex,
                                                             method);
  SubmarineMapDataManager___c__DisplayClass36_0___ctor(v13, 0LL);
  if ( !v13
    || (v13->fields.hIndex = hIndex,
        v13->fields.vIndex = vIndex,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v19 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_SubmarineMapPanelData__TypeInfo, v15, v16, v17),
        System_Predicate_object____ctor(
          v19,
          (Il2CppObject *)v13,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1BCAA3C(v14, v15);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v19,
                                      (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelByPanelId(
        SubmarineMapDataManager_o *this,
        int32_t panelId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  SubmarineMapDataManager___c__DisplayClass37_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B12DB7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&panelId, method);
    sub_1BCA7E0(&System_Predicate_SubmarineMapPanelData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__, v8, v9);
    sub_1BCA7E0(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo, v10, v11);
    byte_4B12DB7 = 1;
  }
  v12 = (SubmarineMapDataManager___c__DisplayClass37_0_o *)sub_1BCAA2C(
                                                             SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo,
                                                             *(_QWORD *)&panelId,
                                                             method,
                                                             v3);
  SubmarineMapDataManager___c__DisplayClass37_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.panelId = panelId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_SubmarineMapPanelData__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v18,
                                      (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelBySpotId(
        SubmarineMapDataManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  SubmarineMapDataManager___c__DisplayClass38_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B12DB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&spotId, method);
    sub_1BCA7E0(&System_Predicate_SubmarineMapPanelData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__, v8, v9);
    sub_1BCA7E0(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo, v10, v11);
    byte_4B12DB8 = 1;
  }
  v12 = (SubmarineMapDataManager___c__DisplayClass38_0_o *)sub_1BCAA2C(
                                                             SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo,
                                                             *(_QWORD *)&spotId,
                                                             method,
                                                             v3);
  SubmarineMapDataManager___c__DisplayClass38_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.spotId = spotId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_SubmarineMapPanelData__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v18,
                                      (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetPanelsByScanEvents(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineScanEvent__o *scanEvents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  Il2CppObject *PanelByIndices; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12DBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, scanEvents, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v18, v19);
    byte_4B12DBB = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                       scanEvents,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)scanEvents,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v23 )
      break;
    if ( !v40.fields._current )
      sub_1BCAA3C(v23, v24);
    PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                       this,
                                       (int32_t)v40.fields._current[1].klass,
                                       HIDWORD(v40.fields._current[1].klass),
                                       v25);
    v33 = (int64_t)PanelByIndices;
    if ( !v20 )
      sub_1BCAA3C(PanelByIndices, PanelByIndices);
    items = v20->fields._items;
    v35 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
    ++v20->fields._version;
    if ( !items )
      sub_1BCAA3C(PanelByIndices, PanelByIndices);
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        PanelByIndices,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v33;
      sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v33, v27, v28, v29, v30, v31, v32);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v20 )
LABEL_17:
    sub_1BCAA3C(v21, v22);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v20,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
        SubmarineMapDataManager_o *this,
        SubmarineSilhouetteData_o *silhouetteData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  SubmarineMapPanelData_o *HasEnemySize; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x22
  int max_length; // w8
  SubmarineMapPanelData_o *v19; // x21
  unsigned int v20; // w23
  System_Int32_array *v21; // x8
  int64_t v22; // x2
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x0

  if ( (byte_4B12DB9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, silhouetteData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v10, v11);
    byte_4B12DB9 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                       silhouetteData,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !silhouetteData )
    goto LABEL_22;
  HasEnemySize = (SubmarineMapPanelData_o *)SubmarineSilhouetteData__get_HasEnemySize(silhouetteData, 0LL);
  if ( ((unsigned __int8)HasEnemySize & 1) != 0 )
  {
    HasEnemySize = SubmarineMapDataManager__GetPanelByPanelId(
                     this,
                     silhouetteData->fields._PanelId_k__BackingField,
                     v15);
    if ( HasEnemySize )
    {
      EnemySizeIdx_k__BackingField = silhouetteData->fields._EnemySizeIdx_k__BackingField;
      if ( !EnemySizeIdx_k__BackingField )
        goto LABEL_22;
      max_length = EnemySizeIdx_k__BackingField->max_length;
      if ( max_length >= 1 )
      {
        v19 = HasEnemySize;
        v20 = 0;
        do
        {
          if ( v20 >= max_length )
            goto LABEL_21;
          v21 = EnemySizeIdx_k__BackingField->m_Items[v20];
          if ( !v21 )
            goto LABEL_22;
          if ( v21->max_length < 2 )
LABEL_21:
            sub_1BCAA44(HasEnemySize, v14);
          HasEnemySize = SubmarineMapDataManager__GetPanelByIndices(
                           this,
                           v21->m_Items[1] + v19->fields._HIndex_k__BackingField,
                           v21->m_Items[2] + v19->fields._VIndex_k__BackingField,
                           v16);
          if ( HasEnemySize )
          {
            if ( !v12 )
              goto LABEL_22;
            items = v12->fields._items;
            v28 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_22;
            size = v12->fields._size;
            v30 = (int64_t)HasEnemySize;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)HasEnemySize,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v30;
              sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v30, v22, (int32_t)v16, v23, v24, v25, v26);
            }
          }
          max_length = EnemySizeIdx_k__BackingField->max_length;
        }
        while ( (int)++v20 < max_length );
      }
    }
  }
  if ( !v12 )
LABEL_22:
    sub_1BCAA3C(HasEnemySize, v14);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_1BCAA3C(0LL, v6);
  return UserEventMapMaster__GetEntity_40814760(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
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
  if ( (byte_4B12DBF & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId, isCheckResetFlag);
    byte_4B12DBF = 1;
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
          sub_1BCAA44(questIds, *(_QWORD *)&beforeClearQuestId);
        v10 = v6->m_Items[v8 + 1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
        questIds = (System_Int32_array *)CondType__IsQuestClear_38310172(v10, beforeClearQuestId, v9, 0LL);
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
          sub_1BCAA44(userEventMapEntity, panelDetail);
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
      sub_1BCAA3C(userEventMapEntity, panelDetail);
    }
  }
  return (unsigned __int8)userEventMapEntity & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__IsOpenPanel(
        UserEventMapEntity_o *userEventMapEntity,
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Int64_array *value; // x22
  bool IsStartScan; // w23
  int32_t v12; // w22
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4B12DBE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_long___, panelDetail, *(_QWORD *)&beforeClearQuestId);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    byte_4B12DBE = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v12 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_300EAB0 *)Method_System_Array_IndexOf_long___);
  return (IsStartScan || v12 >= 0) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_34235640(
                                       panelDetail,
                                       beforeClearQuestId,
                                       v13)
      || SubmarineMapDataManager__IsEnemyOccupiedPanelAndDefeated(
           userEventMapEntity,
           panelDetail,
           beforeClearQuestId,
           v14);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
        SubmarineMapPanelData_o *panelData,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelData )
    sub_1BCAA3C(0LL, *(_QWORD *)&beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_34235640(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_1BCAA3C(0LL, *(_QWORD *)&beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_34235860(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(commonReleaseId, beforeClearQuestId, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__IsSubmarineMap(int32_t mapId, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w19
  DataMasterBase_o *eventPanelMapMaster; // x20
  System_Int64_array *v5; // x0
  System_Int64_array *v6; // x1

  v3 = mapId;
  if ( (byte_4B12DC0 & 1) == 0 )
  {
    *(_QWORD *)&mapId = sub_1BCA7E0(&long___TypeInfo, method, v2);
    byte_4B12DC0 = 1;
  }
  eventPanelMapMaster = (DataMasterBase_o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v5 = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_7;
  v6 = v5;
  if ( !v5->max_length )
    sub_1BCAA44(v5, v5);
  v5->m_Items[0] = v3;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_1BCAA3C(v5, v6);
  return DataMasterBase__isEntityExistsFromId(eventPanelMapMaster, v5, 0LL);
}


void __fastcall SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0

  if ( (byte_4B12DB3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, overwriteSettings, method);
    byte_4B12DB3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, overwriteSettings);
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
    sub_1BCAA3C(Settings_k__BackingField, v5);
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
  __int64 v5; // x1
  __int64 v6; // x2
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
  MapControl_WarInfo_o *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v21; // x1
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w22
  EventPanelMapDetailEntity_array *ListByMapId; // x21
  UserEventMapMaster_o *v25; // x23
  UserEventMapEntity_o *v26; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  Il2CppObject *current; // x29
  int max_length; // w9
  int v32; // w10
  EventPanelMapDetailEntity_o *v33; // x8
  _BOOL8 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  SubmarineSilhouetteData_o *v37; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v39; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v41; // x1
  int v42; // w8
  int i; // w9
  SubmarineMapPanelData_o *v44; // x10
  _BOOL8 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x20
  bool IsScannable; // w8
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B12DB5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      *(_QWORD *)&beforeClearQuestId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v17, v18);
    byte_4B12DB5 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  memset(&v51, 0, sizeof(v51));
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_54;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0LL);
  WarInfo = (MapControl_WarInfo_o *)SubmarineDataHelperScan__GetReleasedScanIds(EventId, v21);
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
  v25 = (UserEventMapMaster_o *)WarInfo;
  WarInfo = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  if ( !v25 )
    goto LABEL_54;
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_40814760(v25, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_54;
  v26 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v52 = v50;
LABEL_11:
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v27 )
      break;
    current = v52.fields._current;
    if ( !v52.fields._current )
      sub_1BCAA3C(v27, v28);
    LOWORD(v52.fields._current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_1BCAA3C(v27, v28);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        if ( max_length == v32 )
          sub_1BCAA44(v27, v28);
        v33 = ListByMapId->m_Items[v32];
        if ( !v33 )
          sub_1BCAA3C(v27, v28);
        if ( v33->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( max_length == ++v32 )
          goto LABEL_11;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(
                                     v26,
                                     ListByMapId->m_Items[v32],
                                     beforeClearQuestId,
                                     v29);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v34 )
      break;
    v37 = (SubmarineSilhouetteData_o *)v51.fields._current;
    if ( !v51.fields._current )
      sub_1BCAA3C(v34, v35);
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v51.fields._current[2].klass,
                          beforeClearQuestId,
                          0,
                          v36);
    v37->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v37, v39);
      if ( !SilhouetteOccupiedPanels )
        sub_1BCAA3C(0LL, v41);
      v42 = SilhouetteOccupiedPanels->max_length;
      if ( v42 >= 1 )
      {
        for ( i = 0; i != v42; ++i )
        {
          if ( v42 == i )
            sub_1BCAA44(SilhouetteOccupiedPanels, v41);
          v44 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v44 )
            sub_1BCAA3C(SilhouetteOccupiedPanels, v41);
          v44->fields._HasEnemyParts_k__BackingField = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_54:
    sub_1BCAA3C(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v52 = v50;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v45 )
      break;
    v48 = v52.fields._current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v52.fields._current )
        sub_1BCAA3C(v45, v46);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v52.fields._current[1].klass,
                      HIDWORD(v52.fields._current[1].klass),
                      this,
                      v47);
    }
    else
    {
      if ( !v52.fields._current )
        sub_1BCAA3C(v45, v46);
      IsScannable = 0;
    }
    BYTE2(v48[3].monitor) = IsScannable;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12DB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12DB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12DAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12DAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12DB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12DB1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}