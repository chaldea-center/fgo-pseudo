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
  Il2CppObject *v13; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  const MethodInfo *v16; // x0
  struct SubmarineQuestSaveInfo_o *v17; // x0
  __int64 v18; // x1
  MapControl_WarInfo_o *EventId; // x0
  int32_t mapId; // w21
  int32_t v21; // w20
  SubmarineSettingsManager_o *v22; // x22
  const MethodInfo *v23; // x3

  if ( (byte_41857AF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, mapInfo);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo, v9);
    sub_B2C35C(&SubmarinePanelPositionCalculator_TypeInfo, v10);
    sub_B2C35C(&SubmarineSettingsManager_TypeInfo, v11);
    byte_41857AF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_B2C2F8(&this->fields, mapInfo);
  this->fields.WarInfo = warInfo;
  sub_B2C2F8(&this->fields.WarInfo, warInfo);
  v13 = (Il2CppObject *)sub_B2C42C(SubmarinePanelPositionCalculator_TypeInfo);
  System_Object___ctor(v13, 0LL);
  this->fields._PositionCalculator_k__BackingField = (struct SubmarinePanelPositionCalculator_o *)v13;
  sub_B2C2F8(&this->fields._PositionCalculator_k__BackingField, v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v14;
  sub_B2C2F8(&this->fields._PanelDataList_k__BackingField, v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v15;
  sub_B2C2F8(&this->fields._SilhouetteDataList_k__BackingField, v15);
  v17 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v16);
  this->fields._BeforeQuestInfo_k__BackingField = v17;
  sub_B2C2F8(&this->fields._BeforeQuestInfo_k__BackingField, v17);
  EventId = this->fields.WarInfo;
  if ( !EventId || (EventId = (MapControl_WarInfo_o *)MapControl_WarInfo__GetEventId(EventId, 0LL), !p_fields->MapInfo) )
    sub_B2C434(EventId, v18);
  mapId = p_fields->MapInfo->fields.mapId;
  v21 = (int)EventId;
  v22 = (SubmarineSettingsManager_o *)sub_B2C42C(SubmarineSettingsManager_TypeInfo);
  SubmarineSettingsManager___ctor(v22, v21, mapId, v23);
  this->fields._Settings_k__BackingField = v22;
  sub_B2C2F8(&this->fields._Settings_k__BackingField, v22);
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
  int WarInfo; // w8
  SubmarineMapDataManager_o *v16; // x21
  unsigned int v17; // w24
  __int64 v18; // x23
  __int64 v19; // x22
  const MethodInfo *v20; // x2
  struct SubmarinePanelPositionCalculator_o *v21; // x8
  int32x2_t v22; // d0
  float32x2_t v23; // d1
  int32x2_t v24; // d2
  float32x2_t v25; // d3
  int32_t EventId; // w0
  const MethodInfo *v27; // x2
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  const MethodInfo *v30; // x2
  SubmarineSilhouetteData_o *v31; // x21
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *SilhouetteDataList_k__BackingField; // x0
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  __int64 v36; // x1
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  _BOOL8 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_41857B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__, v8);
    sub_B2C35C(&SubmarineMapPanelData_TypeInfo, v9);
    this = (SubmarineMapDataManager_o *)sub_B2C35C(&SubmarineSilhouetteData_TypeInfo, v10);
    byte_41857B1 = 1;
  }
  memset(&v42, 0, sizeof(v42));
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
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
  v16 = this;
  if ( WarInfo >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= WarInfo )
      {
        v40 = sub_B2C460(this);
        sub_B2C400(v40, 0LL);
      }
      v18 = *((_QWORD *)&v16->fields.hasReleasedScanMethod + (int)v17);
      v19 = sub_B2C42C(SubmarineMapPanelData_TypeInfo);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v19, (EventPanelMapDetailEntity_o *)v18, v20);
      if ( !v18 )
        break;
      v21 = v2->fields._PositionCalculator_k__BackingField;
      if ( !v21 )
        break;
      if ( !v19 )
        break;
      v22.n64_u64[0] = *(unsigned __int64 *)(v18 + 28);
      v23.n64_u64[0] = (unsigned __int64)v21->fields._PanelUnitSize_k__BackingField;
      v24.n64_u64[0] = *(unsigned __int64 *)&v21->fields._HorizontalPanelNum_k__BackingField;
      v25.n64_u64[0] = *(unsigned __int64 *)&v21->fields._OffsetX_k__BackingField;
      *(_DWORD *)(v19 + 36) = 0;
      *(float32x2_t *)(v19 + 28) = vadd_f32(
                                     v25,
                                     vmul_f32(
                                       vmul_f32(
                                         v23,
                                         vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v22, 1uLL).n64_u64[0] | 0x100000001LL), v24))),
                                       (float32x2_t)0x3F0000003F000000LL));
      this = (SubmarineMapDataManager_o *)v2->fields._PanelDataList_k__BackingField;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      WarInfo = (int)v16->fields.WarInfo;
      if ( (int)++v17 >= WarInfo )
        goto LABEL_18;
    }
LABEL_31:
    sub_B2C434(this, method);
  }
LABEL_18:
  this = (SubmarineMapDataManager_o *)v2->fields.WarInfo;
  if ( !this )
    goto LABEL_31;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
  this = (SubmarineMapDataManager_o *)SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v27);
  if ( !this )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__);
    if ( !v38 )
      break;
    current = (SubmarineSpotInfo_o *)v42.fields.current;
    if ( !v42.fields.current )
      sub_B2C434(v38, v39);
    monitor = (EventPanelSpotEntity_o *)v42.fields.current[1].monitor;
    if ( !monitor )
      sub_B2C434(0LL, v39);
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v31 = (SubmarineSilhouetteData_o *)sub_B2C42C(SubmarineSilhouetteData_TypeInfo);
      SubmarineSilhouetteData___ctor(v31, current, v32);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_B2C434(0LL, v33);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        SilhouetteDataList_k__BackingField,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v30);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_B2C434(PanelByPanelId, v36);
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
}


void __fastcall SubmarineMapDataManager__DeleteBeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  struct SubmarineQuestSaveInfo_o *v4; // x0

  SubmarineSaveParamsManager__DeleteSavedQuestInfo((const MethodInfo *)this);
  v4 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v3);
  this->fields._BeforeQuestInfo_k__BackingField = v4;
  sub_B2C2F8(&this->fields._BeforeQuestInfo_k__BackingField, v4);
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

  if ( (byte_41857BA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&PanelUniqueIDUtil_TypeInfo, v6);
    byte_41857BA = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
          if ( !v7 )
            goto LABEL_19;
          System_Collections_Generic_List_int___Add(
            v7,
            (int32_t)PanelByIndices,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
  if ( !v7 )
LABEL_19:
    sub_B2C434(PanelByIndices, v9);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  unsigned int v16; // w24
  bool v17; // w22
  int v18; // w23
  int v19; // w21
  unsigned int v20; // w25
  unsigned int v21; // w9

  if ( (byte_41857B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, *(_QWORD *)&hIndex);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_41857B7 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  v16 = 0;
  v17 = !diagonal;
  v18 = hIndex - 1;
  v19 = vIndex - 1;
  v20 = -1;
  do
  {
    v21 = v20++;
    if ( v21 != 3 && ((v20 & 1) != 0 || !v17) )
    {
      PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                this,
                                                                                v18 - 3 * (v16 / 3),
                                                                                v19 + v20 / 3,
                                                                                v15);
      if ( PanelByIndices )
      {
        if ( !v12 )
          goto LABEL_12;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          PanelByIndices,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      }
    }
    ++v16;
    ++v18;
  }
  while ( v20 < 8 );
  if ( !v12 )
LABEL_12:
    sub_B2C434(PanelByIndices, v14);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  int32_t v17; // w0
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_int__o *v20; // x20
  int32_t v21; // w19
  System_Int32_array *v22; // x0
  const MethodInfo *v23; // x2
  __int64 v24; // x0

  if ( (byte_41857B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_41857B9 = 1;
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
          v24 = sub_B2C460(WarInfo);
          sub_B2C400(v24, 0LL);
        }
        v16 = *((_DWORD *)&v13[2].klass + v15);
        WarInfo = (void *)System_Array__IndexOf_int_(
                            v10,
                            v16,
                            (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)WarInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = v13[1].monitor;
        if ( (__int64)++v15 >= (int)monitor )
          return 0;
      }
      v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_49702036(
        v20,
        v13,
        (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
      if ( v20 )
      {
        System_Collections_Generic_List_int___Remove(
          v20,
          v16,
          (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
        WarInfo = this->fields.WarInfo;
        if ( WarInfo )
        {
          v21 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
          v22 = System_Collections_Generic_List_int___ToArray(
                  v20,
                  (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v21, v22, v23);
          return v16;
        }
      }
LABEL_21:
      sub_B2C434(WarInfo, method);
    }
  }
  else
  {
    WarInfo = this->fields.WarInfo;
    if ( !WarInfo )
      goto LABEL_21;
    v17 = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)WarInfo, 0LL);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v17, v10, v18);
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
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20

  if ( (byte_41857B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&hIndex);
    sub_B2C35C(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v7);
    sub_B2C35C(&System_Predicate_SubmarineMapPanelData__TypeInfo, v8);
    sub_B2C35C(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__, v9);
    sub_B2C35C(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo, v10);
    byte_41857B3 = 1;
  }
  v11 = (SubmarineMapDataManager___c__DisplayClass36_0_o *)sub_B2C42C(SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass36_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.hIndex = hIndex,
        v11->fields.vIndex = vIndex,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v15,
          (Il2CppObject *)v11,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B2C434(v12, v13);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v15,
                                      (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_41857B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&panelId);
    sub_B2C35C(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v5);
    sub_B2C35C(&System_Predicate_SubmarineMapPanelData__TypeInfo, v6);
    sub_B2C35C(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__, v7);
    sub_B2C35C(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo, v8);
    byte_41857B4 = 1;
  }
  v9 = (SubmarineMapDataManager___c__DisplayClass37_0_o *)sub_B2C42C(SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass37_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.panelId = panelId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B2C434(v10, v11);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v13,
                                      (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_41857B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&spotId);
    sub_B2C35C(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v5);
    sub_B2C35C(&System_Predicate_SubmarineMapPanelData__TypeInfo, v6);
    sub_B2C35C(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__, v7);
    sub_B2C35C(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo, v8);
    byte_41857B5 = 1;
  }
  v9 = (SubmarineMapDataManager___c__DisplayClass38_0_o *)sub_B2C42C(SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo);
  SubmarineMapDataManager___c__DisplayClass38_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.spotId = spotId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SubmarineMapPanelData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B2C434(v10, v11);
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v13,
                                      (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
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
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByIndices; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41857B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, scanEvents);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_41857B8 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_13;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scanEvents,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    if ( !v15 )
      break;
    if ( !v20.fields.current )
      sub_B2C434(v15, v16);
    PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                              this,
                                                                              (int32_t)v20.fields.current[1].klass,
                                                                              HIDWORD(v20.fields.current[1].klass),
                                                                              v17);
    if ( !v12 )
      sub_B2C434(PanelByIndices, PanelByIndices);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v12,
      PanelByIndices,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v12 )
LABEL_13:
    sub_B2C434(v13, v14);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByPanelId; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x8
  const MethodInfo *v13; // x3
  struct System_Int32_array_array *v14; // x22
  int max_length; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x21
  int i; // w23
  System_Int32_array *v18; // x8
  __int64 v20; // x0

  if ( (byte_41857B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, silhouetteData);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v7);
    byte_41857B6 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !silhouetteData )
    goto LABEL_20;
  EnemySizeIdx_k__BackingField = silhouetteData->fields._EnemySizeIdx_k__BackingField;
  if ( EnemySizeIdx_k__BackingField )
  {
    if ( EnemySizeIdx_k__BackingField->max_length )
    {
      PanelByPanelId = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByPanelId(
                                                                                this,
                                                                                silhouetteData->fields._PanelId_k__BackingField,
                                                                                v11);
      if ( PanelByPanelId )
      {
        v14 = silhouetteData->fields._EnemySizeIdx_k__BackingField;
        if ( !v14 )
          goto LABEL_20;
        max_length = v14->max_length;
        if ( max_length >= 1 )
        {
          v16 = PanelByPanelId;
          for ( i = 0; i < max_length; ++i )
          {
            if ( i >= (unsigned int)max_length )
              goto LABEL_19;
            v18 = v14->m_Items[i];
            if ( !v18 )
              goto LABEL_20;
            if ( v18->max_length < 2 )
            {
LABEL_19:
              v20 = sub_B2C460(PanelByPanelId);
              sub_B2C400(v20, 0LL);
            }
            PanelByPanelId = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                      this,
                                                                                      v18->m_Items[1]
                                                                                    + v16->fields.missionTargetId,
                                                                                      v18->m_Items[2]
                                                                                    + v16->fields.missionConditionDetailId,
                                                                                      v13);
            if ( PanelByPanelId )
            {
              if ( !v8 )
                goto LABEL_20;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v8,
                PanelByPanelId,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
            }
            max_length = v14->max_length;
          }
        }
      }
    }
  }
  if ( !v8 )
LABEL_20:
    sub_B2C434(PanelByPanelId, v10);
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0
  __int64 v6; // x1

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_B2C434(0LL, v6);
  return UserEventMapMaster__GetEntity_27014188(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
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
  if ( (byte_41857BC & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_41857BC = 1;
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
          v12 = sub_B2C460(questIds);
          sub_B2C400(v12, 0LL);
        }
        v10 = v6->m_Items[v8 + 1];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_25746984(v10, beforeClearQuestId, v9, 0LL);
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
      sub_B2C434(userEventMapEntity, panelDetail);
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
          v11 = sub_B2C460(userEventMapEntity);
          sub_B2C400(v11, 0LL);
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

  if ( (byte_41857BB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_long___, panelDetail);
    sub_B2C35C(&long___TypeInfo, v7);
    byte_41857BB = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_B2C374(long___TypeInfo, 0LL);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v11 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_1FFD60C *)Method_System_Array_IndexOf_long___);
  return (v11 >= 0 || IsStartScan) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_20903160(
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
    sub_B2C434(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_20903160(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_B2C434(0LL, beforeClearQuestId);
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_20903400(
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
  if ( (byte_41857BD & 1) == 0 )
  {
    *(_QWORD *)&mapId = sub_B2C35C(&long___TypeInfo, method);
    byte_41857BD = 1;
  }
  eventPanelMapMaster = (DataMasterBase_o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v4 = (System_Int64_array *)sub_B2C374(long___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_7;
  v5 = v4;
  if ( !v4->max_length )
  {
    v7 = sub_B2C460(v4);
    sub_B2C400(v7, 0LL);
  }
  v4->m_Items[0] = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_B2C434(v4, v5);
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

  if ( (byte_41857B0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, overwriteSettings);
    byte_41857B0 = 1;
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
    SubmarineSettingsManager__Load(Settings_k__BackingField, overwriteSettings, v6);
  }
  Settings_k__BackingField = this->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField
    || (SubmarineSettingsManager__UpdateSettingsFromMaster(Settings_k__BackingField, v5),
        (PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField) == 0LL)
    || (v9 = this->fields._Settings_k__BackingField) == 0LL )
  {
LABEL_13:
    sub_B2C434(Settings_k__BackingField, v5);
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
  Il2CppObject *current; // x25
  int max_length; // w9
  unsigned int v22; // w10
  EventPanelMapDetailEntity_o *v23; // x8
  _BOOL8 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  SubmarineSilhouetteData_o *v27; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v29; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v31; // x1
  int v32; // w9
  int i; // w8
  SubmarineMapPanelData_o *v34; // x9
  _BOOL8 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x3
  int v38; // w20
  int v39; // w8
  Il2CppObject *v40; // x21
  bool IsScannable; // w8
  _BOOL8 v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x3
  int v45; // w20
  __int64 v46; // x0
  __int64 v47; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-A8h] BYREF
  int v49[3]; // [xsp+20h] [xbp-90h]
  int v50; // [xsp+2Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_41857B2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v11);
    byte_41857B2 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  memset(&v51, 0, sizeof(v51));
  v50 = 0;
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
  WarInfo = (MapControl_WarInfo_o *)UserEventMapMaster__GetEntity_27014188(v18, (int32_t)WarInfo, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_59;
  v19 = (UserEventMapEntity_o *)WarInfo;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v52 = v48;
LABEL_21:
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v24 )
      break;
    current = v52.fields.current;
    if ( !v52.fields.current )
      sub_B2C434(v24, v25);
    LOWORD(v52.fields.current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_B2C434(v24, v25);
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= max_length )
        {
          v46 = sub_B2C460(v24);
          sub_B2C400(v46, 0LL);
        }
        v23 = ListByMapId->m_Items[v22];
        if ( !v23 )
          sub_B2C434(v24, v25);
        if ( v23->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( (int)++v22 >= max_length )
          goto LABEL_21;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(
                                     v19,
                                     ListByMapId->m_Items[v22],
                                     beforeClearQuestId,
                                     v26);
    }
  }
  v49[0] = 190;
  v50 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  v50 = 0;
  WarInfo = (MapControl_WarInfo_o *)this->fields._SilhouetteDataList_k__BackingField;
  if ( !WarInfo )
    goto LABEL_59;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarInfo,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v51 = v48;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    if ( !v35 )
      break;
    v27 = (SubmarineSilhouetteData_o *)v51.fields.current;
    if ( !v51.fields.current )
      sub_B2C434(v35, v36);
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v51.fields.current[2].klass,
                          beforeClearQuestId,
                          0,
                          v37);
    v27->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v27, v29);
      if ( !SilhouetteOccupiedPanels )
        sub_B2C434(0LL, v31);
      v32 = SilhouetteOccupiedPanels->max_length;
      if ( v32 >= 1 )
      {
        for ( i = 0; i < v32; ++i )
        {
          if ( i >= (unsigned int)v32 )
          {
            v47 = sub_B2C460(SilhouetteOccupiedPanels);
            sub_B2C400(v47, 0LL);
          }
          v34 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v34 )
            sub_B2C434(SilhouetteOccupiedPanels, v31);
          v34->fields._HasEnemyParts_k__BackingField = 1;
          v32 = SilhouetteOccupiedPanels->max_length;
        }
      }
    }
  }
  v49[0] = 316;
  v38 = ++v50;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v38 )
  {
    v39 = v38 - 1;
    if ( v49[v38 - 1] == 316 )
    {
      --v38;
      v50 = v39;
    }
  }
  WarInfo = (MapControl_WarInfo_o *)this->fields._PanelDataList_k__BackingField;
  if ( !WarInfo )
LABEL_59:
    sub_B2C434(WarInfo, *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarInfo,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v52 = v48;
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v42 )
      break;
    v40 = v52.fields.current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v52.fields.current )
        sub_B2C434(v42, v43);
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v52.fields.current[1].klass,
                      HIDWORD(v52.fields.current[1].klass),
                      this,
                      v44);
    }
    else
    {
      if ( !v52.fields.current )
        sub_B2C434(v42, v43);
      IsScannable = 0;
    }
    BYTE2(v40[3].monitor) = IsScannable;
  }
  v49[v38] = 402;
  v45 = ++v50;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( v45 )
  {
    if ( v49[v45 - 1] == 402 )
      v50 = v45 - 1;
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
    sub_B2C434(0LL, method);
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
  __int64 v4; // x1

  if ( (byte_41857AD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_41857AD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41857AC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_41857AC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41857AE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_41857AE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


void __fastcall SubmarineMapDataManager__set_BeforeQuestInfo(
        SubmarineMapDataManager_o *this,
        SubmarineQuestSaveInfo_o *value,
        const MethodInfo *method)
{
  this->fields._BeforeQuestInfo_k__BackingField = value;
  sub_B2C2F8(&this->fields._BeforeQuestInfo_k__BackingField, value);
}


void __fastcall SubmarineMapDataManager__set_PanelDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineMapPanelData__o *value,
        const MethodInfo *method)
{
  this->fields._PanelDataList_k__BackingField = value;
  sub_B2C2F8(&this->fields._PanelDataList_k__BackingField, value);
}


void __fastcall SubmarineMapDataManager__set_PositionCalculator(
        SubmarineMapDataManager_o *this,
        SubmarinePanelPositionCalculator_o *value,
        const MethodInfo *method)
{
  this->fields._PositionCalculator_k__BackingField = value;
  sub_B2C2F8(&this->fields._PositionCalculator_k__BackingField, value);
}


void __fastcall SubmarineMapDataManager__set_Settings(
        SubmarineMapDataManager_o *this,
        SubmarineSettingsManager_o *value,
        const MethodInfo *method)
{
  this->fields._Settings_k__BackingField = value;
  sub_B2C2F8(&this->fields._Settings_k__BackingField, value);
}


void __fastcall SubmarineMapDataManager__set_SilhouetteDataList(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineSilhouetteData__o *value,
        const MethodInfo *method)
{
  this->fields._SilhouetteDataList_k__BackingField = value;
  sub_B2C2F8(&this->fields._SilhouetteDataList_k__BackingField, value);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}