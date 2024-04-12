void __fastcall SubmarineMapDataManager___ctor(
        SubmarineMapDataManager_o *this,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  SubmarineMapDataManager_Fields *p_fields; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  Il2CppObject *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x0
  struct SubmarineQuestSaveInfo_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  MapControl_WarInfo_o *EventId; // x0
  int32_t mapId; // w21
  int32_t v52; // w20
  SubmarineSettingsManager_o *v53; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_42AEE14 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
    sub_B52984(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
    sub_B52984(&SubmarinePanelPositionCalculator_TypeInfo);
    sub_B52984(&SubmarineSettingsManager_TypeInfo);
    byte_42AEE14 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)mapInfo, v8, v9, v10, v11, v12, v13);
  this->fields.WarInfo = warInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.WarInfo,
    (System_Int32_array **)warInfo,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (Il2CppObject *)sub_B52A54(SubmarinePanelPositionCalculator_TypeInfo);
  System_Object___ctor(v20, 0LL);
  this->fields._PositionCalculator_k__BackingField = (struct SubmarinePanelPositionCalculator_o *)v20;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._PositionCalculator_k__BackingField,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v27;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._PanelDataList_k__BackingField,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v34;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v42 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v41);
  this->fields._BeforeQuestInfo_k__BackingField = v42;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  EventId = this->fields.WarInfo;
  if ( !EventId || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), !p_fields->MapInfo) )
    sub_B52A5C(EventId, v49);
  mapId = p_fields->MapInfo->fields.mapId;
  v52 = (int)EventId;
  v53 = (SubmarineSettingsManager_o *)sub_B52A54(SubmarineSettingsManager_TypeInfo);
  SubmarineSettingsManager___ctor(v53, v52, mapId, 0LL);
  this->fields._Settings_k__BackingField = v53;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
}


void __fastcall SubmarineMapDataManager__ConstructParams(SubmarineMapDataManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *v2; // x19
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w20
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  struct SubmarinePanelPositionCalculator_o *v6; // x8
  int WarInfo; // w8
  SubmarineMapDataManager_o *v8; // x21
  unsigned int v9; // w24
  __int64 v10; // x23
  __int64 v11; // x22
  const MethodInfo *v12; // x2
  struct SubmarinePanelPositionCalculator_o *v13; // x8
  int32x2_t v14; // d0
  float32x2_t v15; // d1
  int32x2_t v16; // d2
  float32x2_t v17; // d3
  int32_t EventId; // w0
  const MethodInfo *v19; // x2
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  const MethodInfo *v22; // x2
  SubmarineSilhouetteData_o *v23; // x21
  __int64 v24; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *SilhouetteDataList_k__BackingField; // x0
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v27; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_42AEE16 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
    sub_B52984(&SubmarineMapPanelData_TypeInfo);
    this = (SubmarineMapDataManager_o *)sub_B52984(&SubmarineSilhouetteData_TypeInfo);
    byte_42AEE16 = 1;
  }
  memset(&v33, 0, sizeof(v33));
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
                                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_31;
  PositionCalculator_k__BackingField = v2->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_31;
  PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField = (int32_t)this->fields.WarInfo;
  v6 = v2->fields._PositionCalculator_k__BackingField;
  if ( !v6 )
    goto LABEL_31;
  v6->fields._VerticalPanelNum_k__BackingField = HIDWORD(this->fields.WarInfo);
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
  v8 = this;
  if ( WarInfo >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= WarInfo )
      {
        v31 = sub_B52A88(this);
        sub_B52A28(v31, 0LL);
      }
      v10 = *((_QWORD *)&v8->fields.hasReleasedScanMethod + (int)v9);
      v11 = sub_B52A54(SubmarineMapPanelData_TypeInfo);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v11, (EventPanelMapDetailEntity_o *)v10, v12);
      if ( !v10 )
        break;
      v13 = v2->fields._PositionCalculator_k__BackingField;
      if ( !v13 )
        break;
      if ( !v11 )
        break;
      v14.n64_u64[0] = *(unsigned __int64 *)(v10 + 28);
      v15.n64_u64[0] = (unsigned __int64)v13->fields._PanelUnitSize_k__BackingField;
      v16.n64_u64[0] = *(unsigned __int64 *)&v13->fields._HorizontalPanelNum_k__BackingField;
      v17.n64_u64[0] = *(unsigned __int64 *)&v13->fields._OffsetX_k__BackingField;
      *(_DWORD *)(v11 + 36) = 0;
      *(float32x2_t *)(v11 + 28) = vadd_f32(
                                     v17,
                                     vmul_f32(
                                       vmul_f32(
                                         v15,
                                         vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v14, 1uLL).n64_u64[0] | 0x100000001LL), v16))),
                                       (float32x2_t)0x3F0000003F000000LL));
      this = (SubmarineMapDataManager_o *)v2->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      WarInfo = (int)v8->fields.WarInfo;
      if ( (int)++v9 >= WarInfo )
        goto LABEL_18;
    }
LABEL_31:
    sub_B52A5C(this, method);
  }
LABEL_18:
  this = (SubmarineMapDataManager_o *)v2->fields.WarInfo;
  if ( !this )
    goto LABEL_31;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v19);
  if ( !this )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v29 )
      break;
    current = (SubmarineSpotInfo_o *)v33.fields.current;
    if ( !v33.fields.current )
      sub_B52A5C(v29, v30);
    monitor = (EventPanelSpotEntity_o *)v33.fields.current[1].monitor;
    if ( !monitor )
      sub_B52A5C(0LL, v30);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v23 = (SubmarineSilhouetteData_o *)sub_B52A54(SubmarineSilhouetteData_TypeInfo);
      SubmarineSilhouetteData___ctor(v23, current, 0LL);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_B52A5C(0LL, v24);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        SilhouetteDataList_k__BackingField,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v22);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_B52A5C(PanelByPanelId, v27);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
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
  sub_B52920(
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
  System_Collections_Generic_List_int__o *v3; // x20
  SubmarineMapPanelData_o *PanelByIndices; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32_t v8; // w21
  int32_t v9; // w22

  if ( (byte_42AEE1F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&PanelUniqueIDUtil_TypeInfo);
    byte_42AEE1F = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_19;
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
          if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          }
          PanelByIndices = (SubmarineMapPanelData_o *)PanelUniqueIDUtil__GetID(v8, v9, 0LL);
          if ( !v3 )
            goto LABEL_19;
          System_Collections_Generic_List_int___Add(
            v3,
            (int32_t)PanelByIndices,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
        ++v9;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_19;
      }
      ++v8;
    }
    while ( v8 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField );
  }
  if ( !v3 )
LABEL_19:
    sub_B52A5C(PanelByIndices, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetNeighborPanels(
        SubmarineMapDataManager_o *this,
        int32_t hIndex,
        int32_t vIndex,
        bool diagonal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByIndices; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  unsigned int v13; // w24
  bool v14; // w22
  int v15; // w23
  int v16; // w21
  unsigned int v17; // w25
  unsigned int v18; // w9

  if ( (byte_42AEE1C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_B52984(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_42AEE1C = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  v13 = 0;
  v14 = !diagonal;
  v15 = hIndex - 1;
  v16 = vIndex - 1;
  v17 = -1;
  do
  {
    v18 = v17++;
    if ( v18 != 3 && ((v17 & 1) != 0 || !v14) )
    {
      PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                this,
                                                                                v15 - 3 * (v13 / 3),
                                                                                v16 + v17 / 3,
                                                                                v12);
      if ( PanelByIndices )
      {
        if ( !v9 )
          goto LABEL_12;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          PanelByIndices,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      }
    }
    ++v13;
    ++v15;
  }
  while ( v17 < 8 );
  if ( !v9 )
LABEL_12:
    sub_B52A5C(PanelByIndices, v11);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  __int64 v20; // x0

  if ( (byte_42AEE1E & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AEE1E = 1;
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
  WarInfo = SubmarineSaveParamsManager__LoadUnreleasedScanInfo(v7, v8);
  if ( WarInfo )
  {
    v9 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)WarInfo + 3);
    if ( !v9 )
      goto LABEL_21;
    monitor = v9[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)monitor )
        {
          v20 = sub_B52A88(WarInfo);
          sub_B52A28(v20, 0LL);
        }
        v12 = *((_DWORD *)&v9[2].klass + v11);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v6,
                            v12,
                            (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v9[1].monitor;
        if ( (__int64)++v11 >= (int)monitor )
          return 0;
      }
      v16 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_50685004(
        v16,
        v9,
        (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
      if ( v16 )
      {
        System_Collections_Generic_List_int___Remove(
          v16,
          v12,
          (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v17 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v18 = System_Collections_Generic_List_int___ToArray(
                  v16,
                  (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v17, v18, v19);
          return v12;
        }
      }
LABEL_21:
      sub_B52A5C(WarInfo, method);
    }
  }
  else
  {
    WarInfo = this->fields.WarInfo;
    if ( !WarInfo )
      goto LABEL_21;
    v13 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v13, v6, v14);
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
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x20

  if ( (byte_42AEE18 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_B52984(&Method_System_Predicate_SubmarineMapPanelData___ctor__);
    sub_B52984(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_B52984(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__);
    sub_B52984(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
    byte_42AEE18 = 1;
  }
  v7 = (SubmarineMapDataManager___c__DisplayClass36_0_o *)sub_B52A54(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass36_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.hIndex = hIndex,
        v7->fields.vIndex = vIndex,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B52A5C(v8, v9);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v11,
                                      (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelByPanelId(
        SubmarineMapDataManager_o *this,
        int32_t panelId,
        const MethodInfo *method)
{
  SubmarineMapDataManager___c__DisplayClass37_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42AEE19 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_B52984(&Method_System_Predicate_SubmarineMapPanelData___ctor__);
    sub_B52984(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_B52984(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__);
    sub_B52984(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
    byte_42AEE19 = 1;
  }
  v5 = (SubmarineMapDataManager___c__DisplayClass37_0_o *)sub_B52A54(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass37_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.panelId = panelId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B52A5C(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelBySpotId(
        SubmarineMapDataManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  SubmarineMapDataManager___c__DisplayClass38_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42AEE1A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
    sub_B52984(&Method_System_Predicate_SubmarineMapPanelData___ctor__);
    sub_B52984(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_B52984(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__);
    sub_B52984(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
    byte_42AEE1A = 1;
  }
  v5 = (SubmarineMapDataManager___c__DisplayClass38_0_o *)sub_B52A54(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass38_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.spotId = spotId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B52A5C(v6, v7);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v9,
                                      (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetPanelsByScanEvents(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineScanEvent__o *scanEvents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByIndices; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AEE1D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_B52984(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_42AEE1D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_13;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scanEvents,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v8 )
      break;
    if ( !v13.fields.current )
      sub_B52A5C(v8, v9);
    PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                              this,
                                                                              (int32_t)v13.fields.current[1].klass,
                                                                              HIDWORD(v13.fields.current[1].klass),
                                                                              v10);
    if ( !v5 )
      sub_B52A5C(PanelByIndices, PanelByIndices);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v5,
      PanelByIndices,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v5 )
LABEL_13:
    sub_B52A5C(v6, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
        SubmarineMapDataManager_o *this,
        SubmarineSilhouetteData_o *silhouetteData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  SubmarineMapPanelData_o *HasEnemySize; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x22
  int max_length; // w8
  SubmarineMapPanelData_o *v12; // x21
  int i; // w23
  System_Int32_array *v14; // x8
  __int64 v16; // x0

  if ( (byte_42AEE1B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_B52984(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    byte_42AEE1B = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !silhouetteData )
    goto LABEL_19;
  HasEnemySize = (SubmarineMapPanelData_o *)SubmarineSilhouetteData__get_HasEnemySize(silhouetteData, 0LL);
  if ( ((unsigned __int8)HasEnemySize & 1) != 0 )
  {
    HasEnemySize = SubmarineMapDataManager__GetPanelByPanelId(this, silhouetteData->fields._PanelId_k__BackingField, v8);
    if ( HasEnemySize )
    {
      EnemySizeIdx_k__BackingField = silhouetteData->fields._EnemySizeIdx_k__BackingField;
      if ( !EnemySizeIdx_k__BackingField )
        goto LABEL_19;
      max_length = EnemySizeIdx_k__BackingField->max_length;
      if ( max_length >= 1 )
      {
        v12 = HasEnemySize;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            goto LABEL_18;
          v14 = EnemySizeIdx_k__BackingField->m_Items[i];
          if ( !v14 )
            goto LABEL_19;
          if ( v14->max_length < 2 )
          {
LABEL_18:
            v16 = sub_B52A88(HasEnemySize);
            sub_B52A28(v16, 0LL);
          }
          HasEnemySize = SubmarineMapDataManager__GetPanelByIndices(
                           this,
                           v14->m_Items[1] + v12->fields._HIndex_k__BackingField,
                           v14->m_Items[2] + v12->fields._VIndex_k__BackingField,
                           v9);
          if ( HasEnemySize )
          {
            if ( !v5 )
              goto LABEL_19;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              (EventMissionProgressRequest_Argument_ProgressData_o *)HasEnemySize,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
          }
          max_length = EnemySizeIdx_k__BackingField->max_length;
        }
      }
    }
  }
  if ( !v5 )
LABEL_19:
    sub_B52A5C(HasEnemySize, v7);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_B52A5C(0LL, v6);
  return UserEventMapMaster__GetEntity_27465848(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
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
  if ( (byte_42AEE21 & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_B52984(&CondType_TypeInfo);
    byte_42AEE21 = 1;
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
          v12 = sub_B52A88(questIds);
          sub_B52A28(v12, 0LL);
        }
        v10 = v6->m_Items[v8 + 1];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_25987760(v10, beforeClearQuestId, v9, 0LL);
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
      sub_B52A5C(userEventMapEntity, panelDetail);
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
          v11 = sub_B52A88(userEventMapEntity);
          sub_B52A28(v11, 0LL);
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
  System_Int64_array *value; // x22
  bool IsStartScan; // w23
  int32_t v10; // w22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3

  if ( (byte_42AEE20 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_long___);
    sub_B52984(&long___TypeInfo);
    byte_42AEE20 = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_B5299C(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v10 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_201BCA8 *)Method_System_Array_IndexOf_long___);
  return (v10 >= 0 || IsStartScan) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_23118852(
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
    sub_B52A5C(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_23118852(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_B52A5C(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_23119092(
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
  __int64 v7; // x0

  v2 = mapId;
  if ( (byte_42AEE22 & 1) == 0 )
  {
    *(_QWORD *)&mapId = sub_B52984(&long___TypeInfo);
    byte_42AEE22 = 1;
  }
  eventPanelMapMaster = (DataMasterBase_o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v4 = (System_Int64_array *)sub_B5299C(long___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_7;
  v5 = v4;
  if ( !v4->max_length )
  {
    v7 = sub_B52A88(v4);
    sub_B52A28(v7, 0LL);
  }
  v4->m_Items[0] = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_B52A5C(v4, v5);
  return DataMasterBase__isEntityExistsFromId(eventPanelMapMaster, v4, 0LL);
}


void __fastcall SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  struct SubmarineSettingsManager_o *v8; // x9

  if ( (byte_42AEE15 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEE15 = 1;
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
    || (v8 = this->fields._Settings_k__BackingField) == 0LL )
  {
LABEL_13:
    sub_B52A5C(Settings_k__BackingField, v5);
  }
  PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField = v8->fields._BoardOffset_k__BackingField.fields.x;
  PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField = v8->fields._BoardOffset_k__BackingField.fields.y;
  PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField = v8->fields._PanelUnitSize_k__BackingField;
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
  Il2CppObject *current; // x25
  int max_length; // w9
  unsigned int v15; // w10
  EventPanelMapDetailEntity_o *v16; // x8
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  SubmarineSilhouetteData_o *v20; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v22; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v24; // x1
  int v25; // w9
  int i; // w8
  SubmarineMapPanelData_o *v27; // x9
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  int v31; // w20
  int v32; // w8
  Il2CppObject *v33; // x21
  bool IsScannable; // w8
  _BOOL8 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x3
  int v38; // w20
  __int64 v39; // x0
  __int64 v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-A8h] BYREF
  int v42[3]; // [xsp+20h] [xbp-90h]
  int v43; // [xsp+2Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_42AEE17 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    byte_42AEE17 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_59;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0LL);
  WarInfo = (MapControl_WarInfo_o *)SubmarineDataHelperScan__GetReleasedScanIds(EventId, v7);
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
  v11 = (UserEventMapMaster_o *)WarInfo;
  WarInfo = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  if ( !v11 )
    goto LABEL_59;
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_27465848(v11, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_59;
  v12 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v45 = v41;
LABEL_21:
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v17 )
      break;
    current = v45.fields.current;
    if ( !v45.fields.current )
      sub_B52A5C(v17, v18);
    LOWORD(v45.fields.current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_B52A5C(v17, v18);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
        {
          v39 = sub_B52A88(v17);
          sub_B52A28(v39, 0LL);
        }
        v16 = ListByMapId->m_Items[v15];
        if ( !v16 )
          sub_B52A5C(v17, v18);
        if ( v16->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( (int)++v15 >= max_length )
          goto LABEL_21;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(
                                     v12,
                                     ListByMapId->m_Items[v15],
                                     beforeClearQuestId,
                                     v19);
    }
  }
  v42[0] = 190;
  v43 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  v43 = 0;
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_59;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarInfo,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v44 = v41;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v28 )
      break;
    v20 = (SubmarineSilhouetteData_o *)v44.fields.current;
    if ( !v44.fields.current )
      sub_B52A5C(v28, v29);
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v44.fields.current[2].klass,
                          beforeClearQuestId,
                          0,
                          v30);
    v20->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v20, v22);
      if ( !SilhouetteOccupiedPanels )
        sub_B52A5C(0LL, v24);
      v25 = SilhouetteOccupiedPanels->max_length;
      if ( v25 >= 1 )
      {
        for ( i = 0; i < v25; ++i )
        {
          if ( i >= (unsigned int)v25 )
          {
            v40 = sub_B52A88(SilhouetteOccupiedPanels);
            sub_B52A28(v40, 0LL);
          }
          v27 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v27 )
            sub_B52A5C(SilhouetteOccupiedPanels, v24);
          v27->fields._HasEnemyParts_k__BackingField = 1;
          v25 = SilhouetteOccupiedPanels->max_length;
        }
      }
    }
  }
  v42[0] = 316;
  v31 = ++v43;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v31 )
  {
    v32 = v31 - 1;
    if ( v42[v31 - 1] == 316 )
    {
      --v31;
      v43 = v32;
    }
  }
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_59:
    sub_B52A5C(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarInfo,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v45 = v41;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v35 )
      break;
    v33 = v45.fields.current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v45.fields.current )
        sub_B52A5C(v35, v36);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v45.fields.current[1].klass,
                      HIDWORD(v45.fields.current[1].klass),
                      this,
                      v37);
    }
    else
    {
      if ( !v45.fields.current )
        sub_B52A5C(v35, v36);
      IsScannable = 0;
    }
    BYTE2(v33[3].monitor) = IsScannable;
  }
  v42[v31] = 402;
  v38 = ++v43;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( v38 )
  {
    if ( v42[v38 - 1] == 402 )
      v43 = v38 - 1;
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
    sub_B52A5C(0LL, method);
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
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42AEE12 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEE12 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42AEE11 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventPanelMapMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEE11 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42AEE13 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEE13 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}