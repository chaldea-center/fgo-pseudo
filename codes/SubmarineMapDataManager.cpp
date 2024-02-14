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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x0
  struct SubmarineQuestSaveInfo_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  MapControl_WarInfo_o *EventId; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  int32_t mapId; // w21
  int32_t v64; // w20
  SubmarineSettingsManager_o *v65; // x22
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7

  if ( (byte_42135F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, mapInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo, v9);
    sub_B0D8A4(&SubmarinePanelPositionCalculator_TypeInfo, v10);
    sub_B0D8A4(&SubmarineSettingsManager_TypeInfo, v11);
    byte_42135F8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)mapInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.WarInfo = warInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.WarInfo,
    (System_Int32_array **)warInfo,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (Il2CppObject *)sub_B0D974(SubmarinePanelPositionCalculator_TypeInfo, v25, v26);
  System_Object___ctor(v27, 0LL);
  this->fields._PositionCalculator_k__BackingField = (struct SubmarinePanelPositionCalculator_o *)v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._PositionCalculator_k__BackingField,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v36;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._PanelDataList_k__BackingField,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v53 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v52);
  this->fields._BeforeQuestInfo_k__BackingField = v53;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  EventId = this->fields.WarInfo;
  if ( !EventId || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), !p_fields->MapInfo) )
    sub_B0D97C(EventId);
  mapId = p_fields->MapInfo->fields.mapId;
  v64 = (int)EventId;
  v65 = (SubmarineSettingsManager_o *)sub_B0D974(SubmarineSettingsManager_TypeInfo, v61, v62);
  SubmarineSettingsManager___ctor(v65, v64, mapId, 0LL);
  this->fields._Settings_k__BackingField = v65;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
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
  struct SubmarinePanelPositionCalculator_o *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  int WarInfo; // w8
  SubmarineMapDataManager_o *v18; // x21
  unsigned int v19; // w24
  __int64 v20; // x23
  __int64 v21; // x22
  const MethodInfo *v22; // x2
  struct SubmarinePanelPositionCalculator_o *v23; // x8
  int32x2_t v24; // d0
  float32x2_t v25; // d1
  int32x2_t v26; // d2
  float32x2_t v27; // d3
  int32_t EventId; // w0
  const MethodInfo *v29; // x2
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  SubmarineSilhouetteData_o *v34; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *SilhouetteDataList_k__BackingField; // x0
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  _BOOL8 v38; // x0
  __int64 v39; // x0
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_42135FA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__, v8);
    sub_B0D8A4(&SubmarineMapPanelData_TypeInfo, v9);
    this = (SubmarineMapDataManager_o *)sub_B0D8A4(&SubmarineSilhouetteData_TypeInfo, v10);
    byte_42135FA = 1;
  }
  memset(&v41, 0, sizeof(v41));
  MapInfo = v2->fields.MapInfo;
  if ( !MapInfo )
    goto LABEL_31;
  mapId = MapInfo->fields.mapId;
  this = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_eventPanelMapMaster((const MethodInfo *)this);
  if ( !this )
    goto LABEL_31;
  this = (SubmarineMapDataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        mapId,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_31;
  PositionCalculator_k__BackingField = v2->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_31;
  PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField = (int32_t)this->fields.WarInfo;
  v14 = v2->fields._PositionCalculator_k__BackingField;
  if ( !v14 )
    goto LABEL_31;
  v14->fields._VerticalPanelNum_k__BackingField = HIDWORD(this->fields.WarInfo);
  this = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_eventMapDetailMaster((const MethodInfo *)this);
  if ( !this )
    goto LABEL_31;
  this = (SubmarineMapDataManager_o *)EventPanelMapDetailMaster__GetListByMapId(
                                        (EventPanelMapDetailMaster_o *)this,
                                        mapId,
                                        0LL);
  if ( !this )
    goto LABEL_31;
  WarInfo = (int)this->fields.WarInfo;
  v18 = this;
  if ( WarInfo >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= WarInfo )
      {
        v39 = sub_B0D9A8(this);
        sub_B0D948(v39, 0LL);
      }
      v20 = *((_QWORD *)&v18->fields.hasReleasedScanMethod + (int)v19);
      v21 = sub_B0D974(SubmarineMapPanelData_TypeInfo, v15, v16);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v21, (EventPanelMapDetailEntity_o *)v20, v22);
      if ( !v20 )
        break;
      v23 = v2->fields._PositionCalculator_k__BackingField;
      if ( !v23 )
        break;
      if ( !v21 )
        break;
      v24.n64_u64[0] = *(unsigned __int64 *)(v20 + 28);
      v25.n64_u64[0] = (unsigned __int64)v23->fields._PanelUnitSize_k__BackingField;
      v26.n64_u64[0] = *(unsigned __int64 *)&v23->fields._HorizontalPanelNum_k__BackingField;
      v27.n64_u64[0] = *(unsigned __int64 *)&v23->fields._OffsetX_k__BackingField;
      *(_DWORD *)(v21 + 36) = 0;
      *(float32x2_t *)(v21 + 28) = vadd_f32(
                                     v27,
                                     vmul_f32(
                                       vmul_f32(
                                         v25,
                                         vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v24, 1uLL).n64_u64[0] | 0x100000001LL), v26))),
                                       (float32x2_t)0x3F0000003F000000LL));
      this = (SubmarineMapDataManager_o *)v2->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      WarInfo = (int)v18->fields.WarInfo;
      if ( (int)++v19 >= WarInfo )
        goto LABEL_18;
    }
LABEL_31:
    sub_B0D97C(this);
  }
LABEL_18:
  this = (SubmarineMapDataManager_o *)v2->fields.WarInfo;
  if ( !this )
    goto LABEL_31;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v29);
  if ( !this )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v38 )
      break;
    current = (SubmarineSpotInfo_o *)v41.fields.current;
    if ( !v41.fields.current )
      sub_B0D97C(v38);
    monitor = (EventPanelSpotEntity_o *)v41.fields.current[1].monitor;
    if ( !monitor )
      sub_B0D97C(0LL);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v34 = (SubmarineSilhouetteData_o *)sub_B0D974(SubmarineSilhouetteData_TypeInfo, v32, v33);
      SubmarineSilhouetteData___ctor(v34, current, 0LL);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        SilhouetteDataList_k__BackingField,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v33);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_B0D97C(PanelByPanelId);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
}


void __fastcall SubmarineMapDataManager__DeleteBeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  struct SubmarineQuestSaveInfo_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  SubmarineSaveParamsManager__DeleteSavedQuestInfo((const MethodInfo *)this);
  v4 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v3);
  this->fields._BeforeQuestInfo_k__BackingField = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4213603 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&PanelUniqueIDUtil_TypeInfo, v7);
    byte_4213603 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_19;
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
          if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          }
          PanelByIndices = (SubmarineMapPanelData_o *)PanelUniqueIDUtil__GetID(v12, v13, 0LL);
          if ( !v8 )
            goto LABEL_19;
          System_Collections_Generic_List_int___Add(
            v8,
            (int32_t)PanelByIndices,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
        PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
        ++v13;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_19;
      }
      ++v12;
    }
    while ( v12 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField );
  }
  if ( !v8 )
LABEL_19:
    sub_B0D97C(PanelByIndices);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByIndices; // x0
  const MethodInfo *v14; // x3
  unsigned int v15; // w24
  bool v16; // w22
  int v17; // w23
  int v18; // w21
  unsigned int v19; // w25
  unsigned int v20; // w9

  if ( (byte_4213600 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, *(_QWORD *)&hIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_4213600 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                  *(_QWORD *)&hIndex,
                                                                                                  *(_QWORD *)&vIndex);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  v15 = 0;
  v16 = !diagonal;
  v17 = hIndex - 1;
  v18 = vIndex - 1;
  v19 = -1;
  do
  {
    v20 = v19++;
    if ( v20 != 3 && ((v19 & 1) != 0 || !v16) )
    {
      PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                this,
                                                                                v17 - 3 * (v15 / 3),
                                                                                v18 + v19 / 3,
                                                                                v14);
      if ( PanelByIndices )
      {
        if ( !v12 )
          goto LABEL_12;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          PanelByIndices,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      }
    }
    ++v15;
    ++v17;
  }
  while ( v19 < 8 );
  if ( !v12 )
LABEL_12:
    sub_B0D97C(PanelByIndices);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  System_Collections_Generic_IEnumerable_T__o *v13; // x22
  void *monitor; // x8
  unsigned __int64 v15; // x23
  int32_t v16; // w21
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w0
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_int__o *v22; // x20
  int32_t v23; // w19
  System_Int32_array *v24; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x0

  if ( (byte_4213602 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4213602 = 1;
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
    v13 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)WarInfo + 3);
    if ( !v13 )
      goto LABEL_21;
    monitor = v13[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)monitor )
        {
          v26 = sub_B0D9A8(WarInfo);
          sub_B0D948(v26, 0LL);
        }
        v16 = *((_DWORD *)&v13[2].klass + v15);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v10,
                            v16,
                            (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v13[1].monitor;
        if ( (__int64)++v15 >= (int)monitor )
          return 0;
      }
      v22 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v17,
                                                        v18);
      System_Collections_Generic_List_int____ctor_50000796(
        v22,
        v13,
        (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
      if ( v22 )
      {
        System_Collections_Generic_List_int___Remove(
          v22,
          v16,
          (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v23 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v24 = System_Collections_Generic_List_int___ToArray(
                  v22,
                  (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v23, v24, v25);
          return v16;
        }
      }
LABEL_21:
      sub_B0D97C(WarInfo);
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
  __int64 v10; // x1
  SubmarineMapDataManager___c__DisplayClass36_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x20

  if ( (byte_42135FC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&hIndex);
    sub_B0D8A4(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v7);
    sub_B0D8A4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v8);
    sub_B0D8A4(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__, v9);
    sub_B0D8A4(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo, v10);
    byte_42135FC = 1;
  }
  v11 = (SubmarineMapDataManager___c__DisplayClass36_0_o *)sub_B0D974(
                                                             SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo,
                                                             *(_QWORD *)&hIndex,
                                                             *(_QWORD *)&vIndex);
  SubmarineMapDataManager___c__DisplayClass36_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.hIndex = hIndex,
        v11->fields.vIndex = vIndex,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                                         v13,
                                                                         v14),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v16,
          (Il2CppObject *)v11,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B0D97C(v12);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v16,
                                      (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  __int64 v8; // x1
  SubmarineMapDataManager___c__DisplayClass37_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_42135FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&panelId);
    sub_B0D8A4(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v6);
    sub_B0D8A4(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__, v7);
    sub_B0D8A4(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo, v8);
    byte_42135FD = 1;
  }
  v9 = (SubmarineMapDataManager___c__DisplayClass37_0_o *)sub_B0D974(
                                                            SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo,
                                                            *(_QWORD *)&panelId,
                                                            method);
  SubmarineMapDataManager___c__DisplayClass37_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.panelId = panelId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B0D97C(v10);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v14,
                                      (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  __int64 v8; // x1
  SubmarineMapDataManager___c__DisplayClass38_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_42135FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&spotId);
    sub_B0D8A4(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v6);
    sub_B0D8A4(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__, v7);
    sub_B0D8A4(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo, v8);
    byte_42135FE = 1;
  }
  v9 = (SubmarineMapDataManager___c__DisplayClass38_0_o *)sub_B0D974(
                                                            SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo,
                                                            *(_QWORD *)&spotId,
                                                            method);
  SubmarineMapDataManager___c__DisplayClass38_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.spotId = spotId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B0D97C(v10);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v14,
                                      (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x0
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByIndices; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4213601 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, scanEvents);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_4213601 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                  scanEvents,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_13;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scanEvents,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v14 )
      break;
    if ( !v18.fields.current )
      sub_B0D97C(v14);
    PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                              this,
                                                                              (int32_t)v18.fields.current[1].klass,
                                                                              HIDWORD(v18.fields.current[1].klass),
                                                                              v15);
    if ( !v12 )
      sub_B0D97C(PanelByIndices);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v12,
      PanelByIndices,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v12 )
LABEL_13:
    sub_B0D97C(v13);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
        SubmarineMapDataManager_o *this,
        SubmarineSilhouetteData_o *silhouetteData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  SubmarineMapPanelData_o *HasEnemySize; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x22
  int max_length; // w8
  SubmarineMapPanelData_o *v14; // x21
  int i; // w23
  System_Int32_array *v16; // x8
  __int64 v18; // x0

  if ( (byte_42135FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, silhouetteData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v7);
    byte_42135FF = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                 silhouetteData,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !silhouetteData )
    goto LABEL_19;
  HasEnemySize = (SubmarineMapPanelData_o *)SubmarineSilhouetteData__get_HasEnemySize(silhouetteData, 0LL);
  if ( ((unsigned __int8)HasEnemySize & 1) != 0 )
  {
    HasEnemySize = SubmarineMapDataManager__GetPanelByPanelId(
                     this,
                     silhouetteData->fields._PanelId_k__BackingField,
                     v10);
    if ( HasEnemySize )
    {
      EnemySizeIdx_k__BackingField = silhouetteData->fields._EnemySizeIdx_k__BackingField;
      if ( !EnemySizeIdx_k__BackingField )
        goto LABEL_19;
      max_length = EnemySizeIdx_k__BackingField->max_length;
      if ( max_length >= 1 )
      {
        v14 = HasEnemySize;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            goto LABEL_18;
          v16 = EnemySizeIdx_k__BackingField->m_Items[i];
          if ( !v16 )
            goto LABEL_19;
          if ( v16->max_length < 2 )
          {
LABEL_18:
            v18 = sub_B0D9A8(HasEnemySize);
            sub_B0D948(v18, 0LL);
          }
          HasEnemySize = SubmarineMapDataManager__GetPanelByIndices(
                           this,
                           v16->m_Items[1] + v14->fields._HIndex_k__BackingField,
                           v16->m_Items[2] + v14->fields._VIndex_k__BackingField,
                           v11);
          if ( HasEnemySize )
          {
            if ( !v8 )
              goto LABEL_19;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              (EventMissionProgressRequest_Argument_ProgressData_o *)HasEnemySize,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
          }
          max_length = EnemySizeIdx_k__BackingField->max_length;
        }
      }
    }
  }
  if ( !v8 )
LABEL_19:
    sub_B0D97C(HasEnemySize);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_B0D97C(0LL);
  return UserEventMapMaster__GetEntity_26766520(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
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
  __int64 v12; // x0

  v6 = questIds;
  if ( (byte_4213605 & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4213605 = 1;
  }
  if ( v6 )
  {
    v7 = *(_QWORD *)&v6->max_length;
    if ( v7 )
    {
      if ( (int)v7 < 1 )
        return 1;
      v8 = 0LL;
      v9 = isCheckResetFlag;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)v7 )
        {
          v12 = sub_B0D9A8(questIds);
          sub_B0D948(v12, 0LL);
        }
        v10 = v6->m_Items[v8 + 1];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_25410236(v10, beforeClearQuestId, v9, 0LL);
        if ( ((unsigned __int8)questIds & 1) == 0 )
          break;
        LODWORD(v7) = v6->max_length;
        if ( (__int64)++v8 >= (int)v7 )
          return 1;
      }
    }
  }
  return 0;
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
  __int64 v11; // x0

  if ( userEventMapEntity )
  {
    if ( !panelDetail
      || (userEventMapEntity = (UserEventMapEntity_o *)SubmarineDataHelperSpot__GetSpotsEnemyOccupied(
                                                         userEventMapEntity->fields.eventId,
                                                         userEventMapEntity->fields.mapId,
                                                         panelDetail->fields.idxX,
                                                         panelDetail->fields.idxY,
                                                         v4)) == 0LL )
    {
LABEL_14:
      sub_B0D97C(userEventMapEntity);
    }
    v7 = *(_QWORD *)&userEventMapEntity->fields.eventId;
    v8 = userEventMapEntity;
    if ( v7 && (int)v7 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= (unsigned int)v7 )
        {
          v11 = sub_B0D9A8(userEventMapEntity);
          sub_B0D948(v11, 0LL);
        }
        v10 = *((_QWORD *)&v8->fields.value + v9);
        if ( !v10 )
          goto LABEL_14;
        userEventMapEntity = (UserEventMapEntity_o *)SubmarineMapDataManager__IsClearEachQuests(
                                                       *(System_Int32_array **)(v10 + 40),
                                                       beforeClearQuestId,
                                                       0,
                                                       v6);
        if ( ((unsigned __int8)userEventMapEntity & 1) != 0 )
          break;
        LODWORD(v7) = v8->fields.eventId;
        if ( (int)++v9 >= (int)v7 )
          goto LABEL_11;
      }
      LOBYTE(userEventMapEntity) = 1;
    }
    else
    {
LABEL_11:
      LOBYTE(userEventMapEntity) = 0;
    }
  }
  return (char)userEventMapEntity;
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

  if ( (byte_4213604 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_long___, panelDetail);
    sub_B0D8A4(&long___TypeInfo, v7);
    byte_4213604 = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_B0D8BC(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v11 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_1F69C00 *)Method_System_Array_IndexOf_long___);
  return (v11 >= 0 || IsStartScan) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_22303552(
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
    sub_B0D97C(0LL);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_22303552(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_B0D97C(0LL);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_22303792(
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
  __int64 v6; // x0

  v2 = mapId;
  if ( (byte_4213606 & 1) == 0 )
  {
    *(_QWORD *)&mapId = sub_B0D8A4(&long___TypeInfo, method);
    byte_4213606 = 1;
  }
  eventPanelMapMaster = (DataMasterBase_o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v4 = (System_Int64_array *)sub_B0D8BC(long___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_7;
  if ( !v4->max_length )
  {
    v6 = sub_B0D9A8(v4);
    sub_B0D948(v6, 0LL);
  }
  v4->m_Items[0] = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_B0D97C(v4);
  return DataMasterBase__isEntityExistsFromId(eventPanelMapMaster, v4, 0LL);
}


void __fastcall SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  struct SubmarineSettingsManager_o *v7; // x9

  if ( (byte_42135F9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, overwriteSettings);
    byte_42135F9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)overwriteSettings, 0LL, 0LL) )
  {
    Settings_k__BackingField = this->fields._Settings_k__BackingField;
    if ( !Settings_k__BackingField )
      goto LABEL_13;
    SubmarineSettingsManager__Load(Settings_k__BackingField, overwriteSettings, 0LL);
  }
  Settings_k__BackingField = this->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField
    || (SubmarineSettingsManager__UpdateSettingsFromMaster(Settings_k__BackingField, 0LL),
        (PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField) == 0LL)
    || (v7 = this->fields._Settings_k__BackingField) == 0LL )
  {
LABEL_13:
    sub_B0D97C(Settings_k__BackingField);
  }
  PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField = v7->fields._BoardOffset_k__BackingField.fields.x;
  PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField = v7->fields._BoardOffset_k__BackingField.fields.y;
  PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField = v7->fields._PanelUnitSize_k__BackingField;
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
  Il2CppObject *current; // x25
  int max_length; // w9
  unsigned int v22; // w10
  EventPanelMapDetailEntity_o *v23; // x8
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x3
  SubmarineSilhouetteData_o *v26; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v28; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  int v30; // w9
  int i; // w8
  SubmarineMapPanelData_o *v32; // x9
  _BOOL8 v33; // x0
  const MethodInfo *v34; // x3
  int v35; // w20
  int v36; // w8
  Il2CppObject *v37; // x21
  bool IsScannable; // w8
  _BOOL8 v39; // x0
  const MethodInfo *v40; // x3
  int v41; // w20
  __int64 v42; // x0
  __int64 v43; // x0
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-A8h] BYREF
  int v45[3]; // [xsp+20h] [xbp-90h]
  int v46; // [xsp+2Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_42135FB & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v11);
    byte_42135FB = 1;
  }
  memset(&v48, 0, sizeof(v48));
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_59;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0LL);
  WarInfo = (MapControl_WarInfo_o *)SubmarineDataHelperScan__GetReleasedScanIds(EventId, v14);
  if ( !WarInfo )
    goto LABEL_59;
  MapInfo = this->fields.MapInfo;
  this->fields.hasReleasedScanMethod = WarInfo->fields.status != 0;
  if ( !MapInfo )
    goto LABEL_59;
  mapId = MapInfo->fields.mapId;
  WarInfo = (MapControl_WarInfo_o *)SubmarineMapDataManager__get_eventMapDetailMaster((const MethodInfo *)WarInfo);
  if ( !WarInfo )
    goto LABEL_59;
  ListByMapId = EventPanelMapDetailMaster__GetListByMapId((EventPanelMapDetailMaster_o *)WarInfo, mapId, 0LL);
  WarInfo = (MapControl_WarInfo_o *)SubmarineMapDataManager__get_userEventMapMaster((const MethodInfo *)ListByMapId);
  if ( !this->fields.WarInfo )
    goto LABEL_59;
  v18 = (UserEventMapMaster_o *)WarInfo;
  WarInfo = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  if ( !v18 )
    goto LABEL_59;
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_26766520(v18, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_59;
  v19 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v48 = v44;
LABEL_21:
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v24 )
      break;
    current = v48.fields.current;
    if ( !v48.fields.current )
      sub_B0D97C(v24);
    LOWORD(v48.fields.current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_B0D97C(v24);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= max_length )
        {
          v42 = sub_B0D9A8(v24);
          sub_B0D948(v42, 0LL);
        }
        v23 = ListByMapId->m_Items[v22];
        if ( !v23 )
          sub_B0D97C(v24);
        if ( v23->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( (int)++v22 >= max_length )
          goto LABEL_21;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(
                                     v19,
                                     ListByMapId->m_Items[v22],
                                     beforeClearQuestId,
                                     v25);
    }
  }
  v45[0] = 190;
  v46 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  v46 = 0;
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_59;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarInfo,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v47 = v44;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v33 )
      break;
    v26 = (SubmarineSilhouetteData_o *)v47.fields.current;
    if ( !v47.fields.current )
      sub_B0D97C(v33);
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v47.fields.current[2].klass,
                          beforeClearQuestId,
                          0,
                          v34);
    v26->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v26, v28);
      if ( !SilhouetteOccupiedPanels )
        sub_B0D97C(0LL);
      v30 = SilhouetteOccupiedPanels->max_length;
      if ( v30 >= 1 )
      {
        for ( i = 0; i < v30; ++i )
        {
          if ( i >= (unsigned int)v30 )
          {
            v43 = sub_B0D9A8(SilhouetteOccupiedPanels);
            sub_B0D948(v43, 0LL);
          }
          v32 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v32 )
            sub_B0D97C(SilhouetteOccupiedPanels);
          v32->fields._HasEnemyParts_k__BackingField = 1;
          v30 = SilhouetteOccupiedPanels->max_length;
        }
      }
    }
  }
  v45[0] = 316;
  v35 = ++v46;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v35 )
  {
    v36 = v35 - 1;
    if ( v45[v35 - 1] == 316 )
    {
      --v35;
      v46 = v36;
    }
  }
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_59:
    sub_B0D97C(WarInfo);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarInfo,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v48 = v44;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v39 )
      break;
    v37 = v48.fields.current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v48.fields.current )
        sub_B0D97C(v39);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v48.fields.current[1].klass,
                      HIDWORD(v48.fields.current[1].klass),
                      this,
                      v40);
    }
    else
    {
      if ( !v48.fields.current )
        sub_B0D97C(v39);
      IsScannable = 0;
    }
    BYTE2(v37[3].monitor) = IsScannable;
  }
  v45[v35] = 402;
  v41 = ++v46;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( v41 )
  {
    if ( v45[v41 - 1] == 402 )
      v46 = v41 - 1;
  }
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
    sub_B0D97C(0LL);
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
  WebViewManager_o *Instance; // x0

  if ( (byte_42135F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135F6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135F5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135F5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135F7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


void __fastcall SubmarineMapDataManager__set_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        SubmarineQuestSaveInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BeforeQuestInfo_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PanelDataList_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._PanelDataList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PositionCalculator_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._PositionCalculator_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Settings_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SilhouetteDataList_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}