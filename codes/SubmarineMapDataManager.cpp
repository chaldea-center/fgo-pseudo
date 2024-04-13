void __fastcall SubmarineMapDataManager___ctor(
        SubmarineMapDataManager_o *this,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  SubmarineMapDataManager_Fields *p_fields; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  Il2CppObject *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x0
  struct SubmarineQuestSaveInfo_o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x1
  MapControl_WarInfo_o *EventId; // x0
  int32_t mapId; // w21
  int32_t v67; // w20
  SubmarineSettingsManager_o *v68; // x22
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7

  if ( (byte_42E7B3B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__,
      (_DWORD)mapInfo,
      (_DWORD)warInfo,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SubmarinePanelPositionCalculator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&SubmarineSettingsManager_TypeInfo, v19, v20, v21);
    byte_42E7B3B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)mapInfo,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.WarInfo = warInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.WarInfo,
    (System_Int32_array **)warInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (Il2CppObject *)sub_B5D694(SubmarinePanelPositionCalculator_TypeInfo);
  System_Object___ctor(v35, 0LL);
  this->fields._PositionCalculator_k__BackingField = (struct SubmarinePanelPositionCalculator_o *)v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._PositionCalculator_k__BackingField,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v42;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._PanelDataList_k__BackingField,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v57 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v56);
  this->fields._BeforeQuestInfo_k__BackingField = v57;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  EventId = this->fields.WarInfo;
  if ( !EventId || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), !p_fields->MapInfo) )
    sub_B5D69C(EventId, v64);
  mapId = p_fields->MapInfo->fields.mapId;
  v67 = (int)EventId;
  v68 = (SubmarineSettingsManager_o *)sub_B5D694(SubmarineSettingsManager_TypeInfo);
  SubmarineSettingsManager___ctor(v68, v67, mapId, 0LL);
  this->fields._Settings_k__BackingField = v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
}


void __fastcall SubmarineMapDataManager__ConstructParams(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapDataManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w20
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  struct SubmarinePanelPositionCalculator_o *v32; // x8
  int WarInfo; // w8
  SubmarineMapDataManager_o *v34; // x21
  unsigned int v35; // w24
  __int64 v36; // x23
  __int64 v37; // x22
  const MethodInfo *v38; // x2
  struct SubmarinePanelPositionCalculator_o *v39; // x8
  int32x2_t v40; // d0
  float32x2_t v41; // d1
  int32x2_t v42; // d2
  float32x2_t v43; // d3
  int32_t EventId; // w0
  const MethodInfo *v45; // x2
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  const MethodInfo *v48; // x2
  SubmarineSilhouetteData_o *v49; // x21
  __int64 v50; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *SilhouetteDataList_k__BackingField; // x0
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v53; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  _BOOL8 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x0
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_42E7B3D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&SubmarineMapPanelData_TypeInfo, v23, v24, v25);
    this = (SubmarineMapDataManager_o *)sub_B5D5C4(&SubmarineSilhouetteData_TypeInfo, v26, v27, v28);
    byte_42E7B3D = 1;
  }
  memset(&v59, 0, sizeof(v59));
  MapInfo = v4->fields.MapInfo;
  if ( !MapInfo )
    goto LABEL_31;
  mapId = MapInfo->fields.mapId;
  this = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_eventPanelMapMaster((const MethodInfo *)this);
  if ( !this )
    goto LABEL_31;
  this = (SubmarineMapDataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        mapId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_31;
  PositionCalculator_k__BackingField = v4->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_31;
  PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField = (int32_t)this->fields.WarInfo;
  v32 = v4->fields._PositionCalculator_k__BackingField;
  if ( !v32 )
    goto LABEL_31;
  v32->fields._VerticalPanelNum_k__BackingField = HIDWORD(this->fields.WarInfo);
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
  v34 = this;
  if ( WarInfo >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= WarInfo )
      {
        v57 = sub_B5D6C8(this);
        sub_B5D668(v57, 0LL);
      }
      v36 = *((_QWORD *)&v34->fields.hasReleasedScanMethod + (int)v35);
      v37 = sub_B5D694(SubmarineMapPanelData_TypeInfo);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v37, (EventPanelMapDetailEntity_o *)v36, v38);
      if ( !v36 )
        break;
      v39 = v4->fields._PositionCalculator_k__BackingField;
      if ( !v39 )
        break;
      if ( !v37 )
        break;
      v40.n64_u64[0] = *(unsigned __int64 *)(v36 + 28);
      v41.n64_u64[0] = (unsigned __int64)v39->fields._PanelUnitSize_k__BackingField;
      v42.n64_u64[0] = *(unsigned __int64 *)&v39->fields._HorizontalPanelNum_k__BackingField;
      v43.n64_u64[0] = *(unsigned __int64 *)&v39->fields._OffsetX_k__BackingField;
      *(_DWORD *)(v37 + 36) = 0;
      *(float32x2_t *)(v37 + 28) = vadd_f32(
                                     v43,
                                     vmul_f32(
                                       vmul_f32(
                                         v41,
                                         vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v40, 1uLL).n64_u64[0] | 0x100000001LL), v42))),
                                       (float32x2_t)0x3F0000003F000000LL));
      this = (SubmarineMapDataManager_o *)v4->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      WarInfo = (int)v34->fields.WarInfo;
      if ( (int)++v35 >= WarInfo )
        goto LABEL_18;
    }
LABEL_31:
    sub_B5D69C(this, method);
  }
LABEL_18:
  this = (SubmarineMapDataManager_o *)v4->fields.WarInfo;
  if ( !this )
    goto LABEL_31;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v45);
  if ( !this )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v55 )
      break;
    current = (SubmarineSpotInfo_o *)v59.fields.current;
    if ( !v59.fields.current )
      sub_B5D69C(v55, v56);
    monitor = (EventPanelSpotEntity_o *)v59.fields.current[1].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v56);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v49 = (SubmarineSilhouetteData_o *)sub_B5D694(SubmarineSilhouetteData_TypeInfo);
      SubmarineSilhouetteData___ctor(v49, current, 0LL);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_B5D69C(0LL, v50);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        SilhouetteDataList_k__BackingField,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v4, current->fields._PanelId_k__BackingField, v48);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_B5D69C(PanelByPanelId, v53);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_int__o *v17; // x20
  SubmarineMapPanelData_o *PanelByIndices; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32_t v22; // w21
  int32_t v23; // w22

  if ( (byte_42E7B46 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&PanelUniqueIDUtil_TypeInfo, v14, v15, v16);
    byte_42E7B46 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_19;
  if ( PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField >= 1 )
  {
    v22 = 0;
    do
    {
      v23 = 0;
      while ( v23 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
      {
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(this, v22, v23, v20);
        if ( !PanelByIndices )
        {
          if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          }
          PanelByIndices = (SubmarineMapPanelData_o *)PanelUniqueIDUtil__GetID(v22, v23, 0LL);
          if ( !v17 )
            goto LABEL_19;
          System_Collections_Generic_List_int___Add(
            v17,
            (int32_t)PanelByIndices,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
        ++v23;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_19;
      }
      ++v22;
    }
    while ( v22 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField );
  }
  if ( !v17 )
LABEL_19:
    sub_B5D69C(PanelByIndices, v19);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetNeighborPanels(
        SubmarineMapDataManager_o *this,
        int32_t hIndex,
        int32_t vIndex,
        bool diagonal,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByIndices; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  unsigned int v22; // w24
  bool v23; // w22
  int v24; // w23
  int v25; // w21
  unsigned int v26; // w25
  unsigned int v27; // w9

  if ( (byte_42E7B43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, hIndex, vIndex, diagonal);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v15, v16, v17);
    byte_42E7B43 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  v22 = 0;
  v23 = !diagonal;
  v24 = hIndex - 1;
  v25 = vIndex - 1;
  v26 = -1;
  do
  {
    v27 = v26++;
    if ( v27 != 3 && ((v26 & 1) != 0 || !v23) )
    {
      PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                this,
                                                                                v24 - 3 * (v22 / 3),
                                                                                v25 + v26 / 3,
                                                                                v21);
      if ( PanelByIndices )
      {
        if ( !v18 )
          goto LABEL_12;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          PanelByIndices,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      }
    }
    ++v22;
    ++v24;
  }
  while ( v26 < 8 );
  if ( !v18 )
LABEL_12:
    sub_B5D69C(PanelByIndices, v20);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


int32_t __fastcall SubmarineMapDataManager__GetNewReleasedScanId(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  void *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v19; // x1
  System_Int32_array *v20; // x20
  int32_t v21; // w0
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerable_T__o *v23; // x22
  void *monitor; // x8
  unsigned __int64 v25; // x23
  int32_t v26; // w21
  int32_t v27; // w0
  const MethodInfo *v28; // x2
  System_Collections_Generic_List_int__o *v30; // x20
  int32_t v31; // w19
  System_Int32_array *v32; // x0
  const MethodInfo *v33; // x2
  __int64 v34; // x0

  if ( (byte_42E7B45 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    byte_42E7B45 = 1;
  }
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_21;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
  WarInfo = SubmarineDataHelperScan__GetUnreleasedScanIds(EventId, v19);
  if ( !this->fields.WarInfo )
    goto LABEL_21;
  v20 = (System_Int32_array *)WarInfo;
  v21 = MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  WarInfo = SubmarineSaveParamsManager__LoadUnreleasedScanInfo(v21, v22);
  if ( WarInfo )
  {
    v23 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)WarInfo + 3);
    if ( !v23 )
      goto LABEL_21;
    monitor = v23[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v25 = 0LL;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)monitor )
        {
          v34 = sub_B5D6C8(WarInfo);
          sub_B5D668(v34, 0LL);
        }
        v26 = *((_DWORD *)&v23[2].klass + v25);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v20,
                            v26,
                            (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v23[1].monitor;
        if ( (__int64)++v25 >= (int)monitor )
          return 0;
      }
      v30 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_50870440(
        v30,
        v23,
        (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( v30 )
      {
        System_Collections_Generic_List_int___Remove(
          v30,
          v26,
          (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v31 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v32 = System_Collections_Generic_List_int___ToArray(
                  v30,
                  (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v31, v32, v33);
          return v26;
        }
      }
LABEL_21:
      sub_B5D69C(WarInfo, method);
    }
  }
  else
  {
    WarInfo = this->fields.WarInfo;
    if ( !WarInfo )
      goto LABEL_21;
    v27 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v27, v20, v28);
  }
  return 0;
}


SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelByIndices(
        SubmarineMapDataManager_o *this,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  SubmarineMapDataManager___c__DisplayClass36_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x20

  if ( (byte_42E7B3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, hIndex, vIndex, method);
    sub_B5D5C4(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__, v13, v14, v15);
    sub_B5D5C4(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo, v16, v17, v18);
    byte_42E7B3F = 1;
  }
  v19 = (SubmarineMapDataManager___c__DisplayClass36_0_o *)sub_B5D694(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass36_0___ctor(v19, 0LL);
  if ( !v19
    || (v19->fields.hIndex = hIndex,
        v19->fields.vIndex = vIndex,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v23,
          (Il2CppObject *)v19,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B5D69C(v20, v21);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v23,
                                      (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelByPanelId(
        SubmarineMapDataManager_o *this,
        int32_t panelId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  SubmarineMapDataManager___c__DisplayClass37_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E7B40 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, panelId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__, v12, v13, v14);
    sub_B5D5C4(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo, v15, v16, v17);
    byte_42E7B40 = 1;
  }
  v18 = (SubmarineMapDataManager___c__DisplayClass37_0_o *)sub_B5D694(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass37_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.panelId = panelId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B5D69C(v19, v20);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v22,
                                      (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelBySpotId(
        SubmarineMapDataManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  SubmarineMapDataManager___c__DisplayClass38_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E7B41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, spotId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__, v12, v13, v14);
    sub_B5D5C4(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo, v15, v16, v17);
    byte_42E7B41 = 1;
  }
  v18 = (SubmarineMapDataManager___c__DisplayClass38_0_o *)sub_B5D694(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass38_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.spotId = spotId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B5D69C(v19, v20);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v22,
                                      (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetPanelsByScanEvents(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineScanEvent__o *scanEvents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  _BOOL8 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByIndices; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7B44 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__,
      (_DWORD)scanEvents,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v24, v25, v26);
    byte_42E7B44 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_13;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scanEvents,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v30 )
      break;
    if ( !v35.fields.current )
      sub_B5D69C(v30, v31);
    PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                              this,
                                                                              (int32_t)v35.fields.current[1].klass,
                                                                              HIDWORD(v35.fields.current[1].klass),
                                                                              v32);
    if ( !v27 )
      sub_B5D69C(PanelByIndices, PanelByIndices);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v27,
      PanelByIndices,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v27 )
LABEL_13:
    sub_B5D69C(v28, v29);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
        SubmarineMapDataManager_o *this,
        SubmarineSilhouetteData_o *silhouetteData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  SubmarineMapPanelData_o *HasEnemySize; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x22
  int max_length; // w8
  SubmarineMapPanelData_o *v22; // x21
  int i; // w23
  System_Int32_array *v24; // x8
  __int64 v26; // x0

  if ( (byte_42E7B42 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__,
      (_DWORD)silhouetteData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v12, v13, v14);
    byte_42E7B42 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !silhouetteData )
    goto LABEL_19;
  HasEnemySize = (SubmarineMapPanelData_o *)SubmarineSilhouetteData__get_HasEnemySize(silhouetteData, 0LL);
  if ( ((unsigned __int8)HasEnemySize & 1) != 0 )
  {
    HasEnemySize = SubmarineMapDataManager__GetPanelByPanelId(
                     this,
                     silhouetteData->fields._PanelId_k__BackingField,
                     v18);
    if ( HasEnemySize )
    {
      EnemySizeIdx_k__BackingField = silhouetteData->fields._EnemySizeIdx_k__BackingField;
      if ( !EnemySizeIdx_k__BackingField )
        goto LABEL_19;
      max_length = EnemySizeIdx_k__BackingField->max_length;
      if ( max_length >= 1 )
      {
        v22 = HasEnemySize;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            goto LABEL_18;
          v24 = EnemySizeIdx_k__BackingField->m_Items[i];
          if ( !v24 )
            goto LABEL_19;
          if ( v24->max_length < 2 )
          {
LABEL_18:
            v26 = sub_B5D6C8(HasEnemySize);
            sub_B5D668(v26, 0LL);
          }
          HasEnemySize = SubmarineMapDataManager__GetPanelByIndices(
                           this,
                           v24->m_Items[1] + v22->fields._HIndex_k__BackingField,
                           v24->m_Items[2] + v22->fields._VIndex_k__BackingField,
                           v19);
          if ( HasEnemySize )
          {
            if ( !v15 )
              goto LABEL_19;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              (EventMissionProgressRequest_Argument_ProgressData_o *)HasEnemySize,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
          }
          max_length = EnemySizeIdx_k__BackingField->max_length;
        }
      }
    }
  }
  if ( !v15 )
LABEL_19:
    sub_B5D69C(HasEnemySize, v17);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_B5D69C(0LL, v6);
  return UserEventMapMaster__GetEntity_22454016(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
}


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
  if ( (byte_42E7B48 & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_B5D5C4(&CondType_TypeInfo, beforeClearQuestId, isCheckResetFlag, method);
    byte_42E7B48 = 1;
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
          v12 = sub_B5D6C8(questIds);
          sub_B5D668(v12, 0LL);
        }
        v10 = v6->m_Items[v8 + 1];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_25877652(v10, beforeClearQuestId, v9, 0LL);
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
      sub_B5D69C(userEventMapEntity, panelDetail);
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
          v11 = sub_B5D6C8(userEventMapEntity);
          sub_B5D668(v11, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Int64_array *value; // x22
  bool IsStartScan; // w23
  int32_t v13; // w22
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_42E7B47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_long___, (_DWORD)panelDetail, beforeClearQuestId, method);
    sub_B5D5C4(&long___TypeInfo, v7, v8, v9);
    byte_42E7B47 = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_B5D5DC(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v13 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_1FC184C *)Method_System_Array_IndexOf_long___);
  return (v13 >= 0 || IsStartScan) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_23609148(
                                       panelDetail,
                                       beforeClearQuestId,
                                       v14)
      || SubmarineMapDataManager__IsEnemyOccupiedPanelAndDefeated(
           userEventMapEntity,
           panelDetail,
           beforeClearQuestId,
           v15);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
        SubmarineMapPanelData_o *panelData,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelData )
    sub_B5D69C(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_23609148(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_B5D69C(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_23609388(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(commonReleaseId, beforeClearQuestId, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__IsSubmarineMap(int32_t mapId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v4; // w19
  DataMasterBase_o *eventPanelMapMaster; // x20
  System_Int64_array *v6; // x0
  System_Int64_array *v7; // x1
  __int64 v9; // x0

  v4 = mapId;
  if ( (byte_42E7B49 & 1) == 0 )
  {
    *(_QWORD *)&mapId = sub_B5D5C4(&long___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7B49 = 1;
  }
  eventPanelMapMaster = (DataMasterBase_o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v6 = (System_Int64_array *)sub_B5D5DC(long___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_7;
  v7 = v6;
  if ( !v6->max_length )
  {
    v9 = sub_B5D6C8(v6);
    sub_B5D668(v9, 0LL);
  }
  v6->m_Items[0] = v4;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_B5D69C(v6, v7);
  return DataMasterBase__isEntityExistsFromId(eventPanelMapMaster, v6, 0LL);
}


void __fastcall SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  struct SubmarineSettingsManager_o *v9; // x9

  if ( (byte_42E7B3C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)overwriteSettings, (_DWORD)method, v3);
    byte_42E7B3C = 1;
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
    || (v9 = this->fields._Settings_k__BackingField) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Settings_k__BackingField, v6);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  MapControl_WarInfo_o *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v29; // x1
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w22
  EventPanelMapDetailEntity_array *ListByMapId; // x21
  UserEventMapMaster_o *v33; // x23
  UserEventMapEntity_o *v34; // x22
  Il2CppObject *current; // x25
  int max_length; // w9
  unsigned int v37; // w10
  EventPanelMapDetailEntity_o *v38; // x8
  _BOOL8 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  SubmarineSilhouetteData_o *v42; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v44; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v46; // x1
  int v47; // w9
  int i; // w8
  SubmarineMapPanelData_o *v49; // x9
  _BOOL8 v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x3
  int v53; // w20
  int v54; // w8
  Il2CppObject *v55; // x21
  bool IsScannable; // w8
  _BOOL8 v57; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x3
  int v60; // w20
  __int64 v61; // x0
  __int64 v62; // x0
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+8h] [xbp-A8h] BYREF
  int v64[3]; // [xsp+20h] [xbp-90h]
  int v65; // [xsp+2Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_42E7B3E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      beforeClearQuestId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v24, v25, v26);
    byte_42E7B3E = 1;
  }
  memset(&v67, 0, sizeof(v67));
  memset(&v66, 0, sizeof(v66));
  v65 = 0;
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_59;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0LL);
  WarInfo = (MapControl_WarInfo_o *)SubmarineDataHelperScan__GetReleasedScanIds(EventId, v29);
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
  v33 = (UserEventMapMaster_o *)WarInfo;
  WarInfo = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  if ( !v33 )
    goto LABEL_59;
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_22454016(v33, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_59;
  v34 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v63,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v67 = v63;
LABEL_21:
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v67,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v39 )
      break;
    current = v67.fields.current;
    if ( !v67.fields.current )
      sub_B5D69C(v39, v40);
    LOWORD(v67.fields.current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_B5D69C(v39, v40);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= max_length )
        {
          v61 = sub_B5D6C8(v39);
          sub_B5D668(v61, 0LL);
        }
        v38 = ListByMapId->m_Items[v37];
        if ( !v38 )
          sub_B5D69C(v39, v40);
        if ( v38->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( (int)++v37 >= max_length )
          goto LABEL_21;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(
                                     v34,
                                     ListByMapId->m_Items[v37],
                                     beforeClearQuestId,
                                     v41);
    }
  }
  v64[0] = 190;
  v65 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v67,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  v65 = 0;
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_59;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v63,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarInfo,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v66 = v63;
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v66,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v50 )
      break;
    v42 = (SubmarineSilhouetteData_o *)v66.fields.current;
    if ( !v66.fields.current )
      sub_B5D69C(v50, v51);
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v66.fields.current[2].klass,
                          beforeClearQuestId,
                          0,
                          v52);
    v42->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v42, v44);
      if ( !SilhouetteOccupiedPanels )
        sub_B5D69C(0LL, v46);
      v47 = SilhouetteOccupiedPanels->max_length;
      if ( v47 >= 1 )
      {
        for ( i = 0; i < v47; ++i )
        {
          if ( i >= (unsigned int)v47 )
          {
            v62 = sub_B5D6C8(SilhouetteOccupiedPanels);
            sub_B5D668(v62, 0LL);
          }
          v49 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v49 )
            sub_B5D69C(SilhouetteOccupiedPanels, v46);
          v49->fields._HasEnemyParts_k__BackingField = 1;
          v47 = SilhouetteOccupiedPanels->max_length;
        }
      }
    }
  }
  v64[0] = 316;
  v53 = ++v65;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v66,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v53 )
  {
    v54 = v53 - 1;
    if ( v64[v53 - 1] == 316 )
    {
      --v53;
      v65 = v54;
    }
  }
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_59:
    sub_B5D69C(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v63,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarInfo,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v67 = v63;
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v67,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v57 )
      break;
    v55 = v67.fields.current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v67.fields.current )
        sub_B5D69C(v57, v58);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v67.fields.current[1].klass,
                      HIDWORD(v67.fields.current[1].klass),
                      this,
                      v59);
    }
    else
    {
      if ( !v67.fields.current )
        sub_B5D69C(v57, v58);
      IsScannable = 0;
    }
    BYTE2(v55[3].monitor) = IsScannable;
  }
  v64[v53] = 402;
  v60 = ++v65;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v67,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( v60 )
  {
    if ( v64[v60 - 1] == 402 )
      v65 = v60 - 1;
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
    sub_B5D69C(0LL, method);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B39 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B38 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B38 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B3A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMapMaster___);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}