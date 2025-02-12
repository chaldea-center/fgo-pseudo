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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  SubmarinePanelPositionCalculator_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_object__o *v39; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct SubmarineQuestSaveInfo_o *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  MapControl_WarInfo_o *EventId; // x0
  struct MapControl_MapInfo_o *v55; // x8
  int32_t v56; // w20
  int32_t mapId; // w21
  SubmarineSettingsManager_o *v58; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7

  if ( (byte_4BC45F7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__, mapInfo);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo, v9);
    sub_1C1ABD4(&SubmarinePanelPositionCalculator_TypeInfo, v10);
    sub_1C1ABD4(&SubmarineSettingsManager_TypeInfo, v11);
    byte_4BC45F7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)mapInfo, v13, v14, v15, v16, v17, v18);
  this->fields.WarInfo = warInfo;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.WarInfo, (int64_t)warInfo, v19, v20, v21, v22, v23, v24);
  v25 = (SubmarinePanelPositionCalculator_o *)sub_1C1AE20(SubmarinePanelPositionCalculator_TypeInfo);
  SubmarinePanelPositionCalculator___ctor(v25, 0LL);
  this->fields._PositionCalculator_k__BackingField = v25;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._PositionCalculator_k__BackingField,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v32;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._PanelDataList_k__BackingField,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v39;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(0LL);
  this->fields._BeforeQuestInfo_k__BackingField = v46;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  EventId = this->fields.WarInfo;
  if ( !EventId
    || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), (v55 = p_fields->MapInfo) == 0LL) )
  {
    sub_1C1AE30(EventId, v53);
  }
  v56 = (int)EventId;
  mapId = v55->fields.mapId;
  v58 = (SubmarineSettingsManager_o *)sub_1C1AE20(SubmarineSettingsManager_TypeInfo);
  SubmarineSettingsManager___ctor(v58, v56, mapId, 0LL);
  this->fields._Settings_k__BackingField = v58;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField,
    (int64_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
}


// local variable allocation has failed, the output may be wrong!
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
  int WarInfo; // w8
  SubmarineMapDataManager_o *v15; // x21
  unsigned int v16; // w24
  EventPanelMapDetailEntity_o *v17; // x23
  int64_t v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int v25; // s0
  int v26; // s1
  int v27; // s2
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
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x8
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v53; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4BC45F9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__, v8);
    sub_1C1ABD4(&SubmarineMapPanelData_TypeInfo, v9);
    this = (SubmarineMapDataManager_o *)sub_1C1ABD4(&SubmarineSilhouetteData_TypeInfo, v10);
    byte_4BC45F9 = 1;
  }
  memset(&v56, 0, sizeof(v56));
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
                                        (const MethodInfo_3248678 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
  v15 = this;
  if ( WarInfo >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= WarInfo )
        sub_1C1AE38(this, method);
      v17 = (EventPanelMapDetailEntity_o *)*((_QWORD *)&v15->fields.hasReleasedScanMethod + (int)v16);
      v18 = sub_1C1AE20(SubmarineMapPanelData_TypeInfo);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v18, v17, 0LL);
      if ( !v17 )
        break;
      this = (SubmarineMapDataManager_o *)v2->fields._PositionCalculator_k__BackingField;
      if ( !this )
        break;
      *(UnityEngine_Vector3_o *)&v25 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                         (SubmarinePanelPositionCalculator_o *)this,
                                         v17->fields.idxX,
                                         v17->fields.idxY,
                                         0LL);
      if ( !v18 )
        break;
      *(_DWORD *)(v18 + 28) = v25;
      *(_DWORD *)(v18 + 32) = v26;
      *(_DWORD *)(v18 + 36) = v27;
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
          (Il2CppObject *)v18,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &v28->klass + WarInfo_low;
        LODWORD(this->fields.WarInfo) = WarInfo_low + 1;
        v31[4] = (MapControl_MapInfo_c *)v18;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v31 + 4), v18, v19, v20, v21, v22, v23, v24);
      }
      WarInfo = (int)v15->fields.WarInfo;
      if ( (int)++v16 >= WarInfo )
        goto LABEL_21;
    }
LABEL_37:
    sub_1C1AE30(this, method);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v34 )
      break;
    current = (SubmarineSpotInfo_o *)v56.fields._current;
    if ( !v56.fields._current )
      sub_1C1AE30(v34, v35);
    monitor = (EventPanelSpotEntity_o *)v56.fields._current[1].monitor;
    if ( !monitor )
      sub_1C1AE30(0LL, v35);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v39 = (SubmarineSilhouetteData_o *)sub_1C1AE20(SubmarineSilhouetteData_TypeInfo);
      SubmarineSilhouetteData___ctor(v39, current, 0LL);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_1C1AE30(0LL, v40);
      items = SilhouetteDataList_k__BackingField->fields._items;
      v49 = Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__;
      ++SilhouetteDataList_k__BackingField->fields._version;
      if ( !items )
        sub_1C1AE30(SilhouetteDataList_k__BackingField, v40);
      size = SilhouetteDataList_k__BackingField->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          SilhouetteDataList_k__BackingField,
          (Il2CppObject *)v39,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        SilhouetteDataList_k__BackingField->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v39;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v39, v41, v42, v43, v44, v45, v46);
      }
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v38);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_1C1AE30(PanelByPanelId, v53);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
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
  sub_1C1AB78(
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

  if ( (byte_4BC4602 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1C1ABD4(&PanelUniqueIDUtil_TypeInfo, v6);
    byte_4BC4602 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
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
              *(const MethodInfo_361F86C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
    sub_1C1AE30(PanelByIndices, v9);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int64_t v20; // x2
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0

  if ( (byte_4BC45FF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, *(_QWORD *)&hIndex);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_4BC45FF = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
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
        v26 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v12->fields._size;
        v28 = (int64_t)PanelByIndices;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            PanelByIndices,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v28;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 4), v28, v20, (int32_t)v15, v21, v22, v23, v24);
        }
      }
    }
    ++v16;
  }
  while ( v16 != 9 );
  if ( !v12 )
LABEL_15:
    sub_1C1AE30(PanelByIndices, v14);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  System_Collections_Generic_IEnumerable_T__o *v12; // x22
  void *monitor; // x8
  unsigned __int64 v14; // x23
  int32_t v15; // w21
  int32_t v16; // w0
  System_Collections_Generic_List_int__o *v18; // x20
  int32_t v19; // w19
  System_Int32_array *v20; // x0

  if ( (byte_4BC4601 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_IndexOf_int___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Remove__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor___77494032, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4BC4601 = 1;
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
  WarInfo = SubmarineSaveParamsManager__LoadUnreleasedScanInfo(v11, 0LL);
  if ( WarInfo )
  {
    v12 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)WarInfo + 3);
    if ( !v12 )
      goto LABEL_21;
    monitor = v12[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)monitor )
          sub_1C1AE38(WarInfo, method);
        v15 = *((_DWORD *)&v12[2].klass + v14);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v10,
                            v15,
                            (const MethodInfo_309C358 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v12[1].monitor;
        if ( (__int64)++v14 >= (int)monitor )
          return 0;
      }
      v18 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_56750400(
        v18,
        v12,
        (const MethodInfo_361F140 *)Method_System_Collections_Generic_List_int___ctor___77494032);
      if ( v18 )
      {
        System_Collections_Generic_List_int___Remove(
          v18,
          v15,
          (const MethodInfo_3620D68 *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v19 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v20 = System_Collections_Generic_List_int___ToArray(
                  v18,
                  (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v19, v20, 0LL);
          return v15;
        }
      }
LABEL_21:
      sub_1C1AE30(WarInfo, method);
    }
  }
  else
  {
    WarInfo = this->fields.WarInfo;
    if ( !WarInfo )
      goto LABEL_21;
    v16 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v16, v10, 0LL);
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
  SubmarineMapDataManager___c__DisplayClass36_0_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_4BC45FB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&hIndex);
    sub_1C1ABD4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v7);
    sub_1C1ABD4(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__, v8);
    sub_1C1ABD4(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo, v9);
    byte_4BC45FB = 1;
  }
  v10 = (SubmarineMapDataManager___c__DisplayClass36_0_o *)sub_1C1AE20(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass36_0___ctor(v10, 0LL);
  if ( !v10
    || (v10->fields.hIndex = hIndex,
        v10->fields.vIndex = vIndex,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v14 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v10,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1C1AE30(v11, v12);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v14,
                                      (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  SubmarineMapDataManager___c__DisplayClass37_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BC45FC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&panelId);
    sub_1C1ABD4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v5);
    sub_1C1ABD4(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__, v6);
    sub_1C1ABD4(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo, v7);
    byte_4BC45FC = 1;
  }
  v8 = (SubmarineMapDataManager___c__DisplayClass37_0_o *)sub_1C1AE20(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass37_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.panelId = panelId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v12 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1C1AE30(v9, v10);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v12,
                                      (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  SubmarineMapDataManager___c__DisplayClass38_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *PanelDataList_k__BackingField; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BC45FD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&spotId);
    sub_1C1ABD4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v5);
    sub_1C1ABD4(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__, v6);
    sub_1C1ABD4(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo, v7);
    byte_4BC45FD = 1;
  }
  v8 = (SubmarineMapDataManager___c__DisplayClass38_0_o *)sub_1C1AE20(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass38_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.spotId = spotId,
        PanelDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
        v12 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          0LL),
        !PanelDataList_k__BackingField) )
  {
    sub_1C1AE30(v9, v10);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_object___Find(
                                      PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v12,
                                      (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC4600 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, scanEvents);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_4BC4600 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)scanEvents,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v15 )
      break;
    if ( !v32.fields._current )
      sub_1C1AE30(v15, v16);
    PanelByIndices = (Il2CppObject *)SubmarineMapDataManager__GetPanelByIndices(
                                       this,
                                       (int32_t)v32.fields._current[1].klass,
                                       HIDWORD(v32.fields._current[1].klass),
                                       v17);
    v25 = (int64_t)PanelByIndices;
    if ( !v12 )
      sub_1C1AE30(PanelByIndices, PanelByIndices);
    items = v12->fields._items;
    v27 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1C1AE30(PanelByIndices, PanelByIndices);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        PanelByIndices,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v25;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 4), v25, v19, v20, v21, v22, v23, v24);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v12 )
LABEL_17:
    sub_1C1AE30(v13, v14);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  SubmarineMapPanelData_o *HasEnemySize; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x22
  int max_length; // w8
  SubmarineMapPanelData_o *v15; // x21
  unsigned int v16; // w23
  System_Int32_array *v17; // x8
  int64_t v18; // x2
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  int64_t v26; // x1
  Il2CppClass **v27; // x0

  if ( (byte_4BC45FE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, silhouetteData);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v7);
    byte_4BC45FE = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !silhouetteData )
    goto LABEL_22;
  HasEnemySize = (SubmarineMapPanelData_o *)SubmarineSilhouetteData__get_HasEnemySize(silhouetteData, 0LL);
  if ( ((unsigned __int8)HasEnemySize & 1) != 0 )
  {
    HasEnemySize = SubmarineMapDataManager__GetPanelByPanelId(
                     this,
                     silhouetteData->fields._PanelId_k__BackingField,
                     v11);
    if ( HasEnemySize )
    {
      EnemySizeIdx_k__BackingField = silhouetteData->fields._EnemySizeIdx_k__BackingField;
      if ( !EnemySizeIdx_k__BackingField )
        goto LABEL_22;
      max_length = EnemySizeIdx_k__BackingField->max_length;
      if ( max_length >= 1 )
      {
        v15 = HasEnemySize;
        v16 = 0;
        do
        {
          if ( v16 >= max_length )
            goto LABEL_21;
          v17 = EnemySizeIdx_k__BackingField->m_Items[v16];
          if ( !v17 )
            goto LABEL_22;
          if ( v17->max_length < 2 )
LABEL_21:
            sub_1C1AE38(HasEnemySize, v10);
          HasEnemySize = SubmarineMapDataManager__GetPanelByIndices(
                           this,
                           v17->m_Items[1] + v15->fields._HIndex_k__BackingField,
                           v17->m_Items[2] + v15->fields._VIndex_k__BackingField,
                           v12);
          if ( HasEnemySize )
          {
            if ( !v8 )
              goto LABEL_22;
            items = v8->fields._items;
            v24 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
            ++v8->fields._version;
            if ( !items )
              goto LABEL_22;
            size = v8->fields._size;
            v26 = (int64_t)HasEnemySize;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)HasEnemySize,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v26;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v27 + 4), v26, v18, (int32_t)v12, v19, v20, v21, v22);
            }
          }
          max_length = EnemySizeIdx_k__BackingField->max_length;
        }
        while ( (int)++v16 < max_length );
      }
    }
  }
  if ( !v8 )
LABEL_22:
    sub_1C1AE30(HasEnemySize, v10);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_object___ToArray(
                                          v8,
                                          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_1C1AE30(0LL, v6);
  return UserEventMapMaster__GetEntity_41303792(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
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
  if ( (byte_4BC4604 & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_1C1ABD4(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4BC4604 = 1;
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
          sub_1C1AE38(questIds, *(_QWORD *)&beforeClearQuestId);
        v10 = v6->m_Items[v8 + 1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_38787928(v10, beforeClearQuestId, v9, 0LL);
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
          sub_1C1AE38(userEventMapEntity, panelDetail);
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
      sub_1C1AE30(userEventMapEntity, panelDetail);
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

  if ( (byte_4BC4603 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_IndexOf_long___, panelDetail);
    sub_1C1ABD4(&long___TypeInfo, v7);
    byte_4BC4603 = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_1C1AC7C(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v11 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_309C468 *)Method_System_Array_IndexOf_long___);
  return (IsStartScan || v11 >= 0) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_34660828(
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
    sub_1C1AE30(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_34660828(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_1C1AE30(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_34661048(
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

  v2 = mapId;
  if ( (byte_4BC4605 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__, method);
    *(_QWORD *)&mapId = sub_1C1ABD4(&long___TypeInfo, v3);
    byte_4BC4605 = 1;
  }
  eventPanelMapMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v5 = (System_Int64_array *)sub_1C1AC7C(long___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_7;
  v6 = v5;
  if ( !v5->max_length )
    sub_1C1AE38(v5, v5);
  v5->m_Items[0] = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_1C1AE30(v5, v6);
  return DataMasterBase_object__object__int___isEntityExistsFromId(
           eventPanelMapMaster,
           v5,
           (const MethodInfo_3247C54 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__isEntityExistsFromId__);
}


void __fastcall SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0

  if ( (byte_4BC45F8 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, overwriteSettings);
    byte_4BC45F8 = 1;
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
    sub_1C1AE30(Settings_k__BackingField, v5);
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
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  SubmarineSilhouetteData_o *v30; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v32; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v34; // x1
  int v35; // w8
  int i; // w9
  SubmarineMapPanelData_o *v37; // x10
  _BOOL8 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x20
  bool IsScannable; // w8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4BC45FA & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v11);
    byte_4BC45FA = 1;
  }
  memset(&v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
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
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_41303792(v18, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_54;
  v19 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v45 = v43;
LABEL_11:
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v20 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_1C1AE30(v20, v21);
    LOWORD(v45.fields._current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_1C1AE30(v20, v21);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( max_length == v25 )
          sub_1C1AE38(v20, v21);
        v26 = ListByMapId->m_Items[v25];
        if ( !v26 )
          sub_1C1AE30(v20, v21);
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
    &v45,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v27 )
      break;
    v30 = (SubmarineSilhouetteData_o *)v44.fields._current;
    if ( !v44.fields._current )
      sub_1C1AE30(v27, v28);
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v44.fields._current[2].klass,
                          beforeClearQuestId,
                          0,
                          v29);
    v30->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v30, v32);
      if ( !SilhouetteOccupiedPanels )
        sub_1C1AE30(0LL, v34);
      v35 = SilhouetteOccupiedPanels->max_length;
      if ( v35 >= 1 )
      {
        for ( i = 0; i != v35; ++i )
        {
          if ( v35 == i )
            sub_1C1AE38(SilhouetteOccupiedPanels, v34);
          v37 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v37 )
            sub_1C1AE30(SilhouetteOccupiedPanels, v34);
          v37->fields._HasEnemyParts_k__BackingField = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_54:
    sub_1C1AE30(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)WarInfo,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v45 = v43;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v38 )
      break;
    v41 = v45.fields._current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v45.fields._current )
        sub_1C1AE30(v38, v39);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v45.fields._current[1].klass,
                      HIDWORD(v45.fields._current[1].klass),
                      this,
                      v40);
    }
    else
    {
      if ( !v45.fields._current )
        sub_1C1AE30(v38, v39);
      IsScannable = 0;
    }
    BYTE2(v41[3].monitor) = IsScannable;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
    sub_1C1AE30(0LL, method);
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

  if ( (byte_4BC45F5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4BC45F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC45F4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4BC45F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC45F6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4BC45F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
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
  sub_1C1AB78(
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
  sub_1C1AB78(
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
  sub_1C1AB78(
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
  sub_1C1AB78(
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
  sub_1C1AB78(
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}