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
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x0
  struct SubmarineQuestSaveInfo_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  MapControl_WarInfo_o *v66; // x0
  int32_t EventId; // w0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  int32_t mapId; // w21
  int32_t v73; // w20
  SubmarineSettingsManager_o *v74; // x22
  const MethodInfo *v75; // x3
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7

  if ( (byte_40F7C43 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, mapInfo);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo, v9);
    sub_B16FFC(&SubmarinePanelPositionCalculator_TypeInfo, v10);
    sub_B16FFC(&SubmarineSettingsManager_TypeInfo, v11);
    byte_40F7C43 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.MapInfo = mapInfo;
  p_fields = &this->fields;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)mapInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.WarInfo = warInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.WarInfo,
    (System_Int32_array **)warInfo,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v29 = (Il2CppObject *)sub_B170CC(SubmarinePanelPositionCalculator_TypeInfo, v25, v26, v27, v28);
  System_Object___ctor(v29, 0LL);
  this->fields._PositionCalculator_k__BackingField = (struct SubmarinePanelPositionCalculator_o *)v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._PositionCalculator_k__BackingField,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  this->fields._PanelDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineMapPanelData__o *)v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._PanelDataList_k__BackingField,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SubmarineSilhouetteData__TypeInfo,
                                                                                                  v47,
                                                                                                  v48,
                                                                                                  v49,
                                                                                                  v50);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData___ctor__);
  this->fields._SilhouetteDataList_k__BackingField = (struct System_Collections_Generic_List_SubmarineSilhouetteData__o *)v51;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._SilhouetteDataList_k__BackingField,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v59 = SubmarineSaveParamsManager__LoadBeforeQuestInfo(v58);
  this->fields._BeforeQuestInfo_k__BackingField = v59;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._BeforeQuestInfo_k__BackingField,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = this->fields.WarInfo;
  if ( !v66 || (EventId = MapControl_WarInfo__GetEventId(v66, 0LL), !p_fields->MapInfo) )
    sub_B170D4();
  mapId = p_fields->MapInfo->fields.mapId;
  v73 = EventId;
  v74 = (SubmarineSettingsManager_o *)sub_B170CC(SubmarineSettingsManager_TypeInfo, v68, v69, v70, v71);
  SubmarineSettingsManager___ctor(v74, v73, mapId, v75);
  this->fields._Settings_k__BackingField = v74;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField,
    (System_Int32_array **)v74,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
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
  EventPanelMapMaster_o *eventPanelMapMaster; // x0
  WarEntity_o *Entity; // x0
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  struct SubmarinePanelPositionCalculator_o *v16; // x8
  EventPanelMapDetailMaster_o *eventMapDetailMaster; // x0
  EventPanelMapDetailEntity_array *ListByMapId; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int max_length; // w8
  EventPanelMapDetailEntity_array *v24; // x21
  unsigned int v25; // w24
  EventPanelMapDetailEntity_o *v26; // x23
  __int64 v27; // x22
  const MethodInfo *v28; // x2
  struct SubmarinePanelPositionCalculator_o *v29; // x8
  int32x2_t v30; // d0
  float32x2_t v31; // d1
  int32x2_t v32; // d2
  float32x2_t v33; // d3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *PanelDataList_k__BackingField; // x0
  MapControl_WarInfo_o *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v37; // x2
  System_Collections_Generic_List_SubmarineSpotInfo__o *SubmarineSpotInfoList; // x0
  SubmarineSpotInfo_o *current; // x20
  EventPanelSpotEntity_o *monitor; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  SubmarineSilhouetteData_o *v45; // x21
  const MethodInfo *v46; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *SilhouetteDataList_k__BackingField; // x0
  SubmarineMapPanelData_o *PanelByPanelId; // x0
  struct SpotEntity_o *SpotEntity_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_40F7C45 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__, v8);
    sub_B16FFC(&SubmarineMapPanelData_TypeInfo, v9);
    this = (SubmarineMapDataManager_o *)sub_B16FFC(&SubmarineSilhouetteData_TypeInfo, v10);
    byte_40F7C45 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  MapInfo = v2->fields.MapInfo;
  if ( !MapInfo )
    goto LABEL_31;
  mapId = MapInfo->fields.mapId;
  eventPanelMapMaster = SubmarineMapDataManager__get_eventPanelMapMaster((const MethodInfo *)this);
  if ( !eventPanelMapMaster )
    goto LABEL_31;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelMapMaster,
             mapId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_31;
  PositionCalculator_k__BackingField = v2->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_31;
  PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField = (int32_t)Entity->fields.age;
  v16 = v2->fields._PositionCalculator_k__BackingField;
  if ( !v16 )
    goto LABEL_31;
  v16->fields._VerticalPanelNum_k__BackingField = HIDWORD(Entity->fields.age);
  eventMapDetailMaster = SubmarineMapDataManager__get_eventMapDetailMaster((const MethodInfo *)Entity);
  if ( !eventMapDetailMaster )
    goto LABEL_31;
  ListByMapId = EventPanelMapDetailMaster__GetListByMapId(eventMapDetailMaster, mapId, 0LL);
  if ( !ListByMapId )
    goto LABEL_31;
  max_length = ListByMapId->max_length;
  v24 = ListByMapId;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        sub_B17100(ListByMapId, v19, v20);
        sub_B170A0();
      }
      v26 = v24->m_Items[v25];
      v27 = sub_B170CC(SubmarineMapPanelData_TypeInfo, v19, v20, v21, v22);
      SubmarineMapPanelData___ctor((SubmarineMapPanelData_o *)v27, v26, v28);
      if ( !v26 )
        break;
      v29 = v2->fields._PositionCalculator_k__BackingField;
      if ( !v29 )
        break;
      if ( !v27 )
        break;
      v30.n64_u64[0] = *(unsigned __int64 *)&v26->fields.idxX;
      v31.n64_u64[0] = (unsigned __int64)v29->fields._PanelUnitSize_k__BackingField;
      v32.n64_u64[0] = *(unsigned __int64 *)&v29->fields._HorizontalPanelNum_k__BackingField;
      v33.n64_u64[0] = *(unsigned __int64 *)&v29->fields._OffsetX_k__BackingField;
      *(_DWORD *)(v27 + 36) = 0;
      *(float32x2_t *)(v27 + 28) = vadd_f32(
                                     v33,
                                     vmul_f32(
                                       vmul_f32(
                                         v31,
                                         vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v30, 1uLL).n64_u64[0] | 0x100000001LL), v32))),
                                       (float32x2_t)0x3F0000003F000000LL));
      PanelDataList_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields._PanelDataList_k__BackingField;
      if ( !PanelDataList_k__BackingField )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        PanelDataList_k__BackingField,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      max_length = v24->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_18;
    }
LABEL_31:
    sub_B170D4();
  }
LABEL_18:
  WarInfo = v2->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_31;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0LL);
  SubmarineSpotInfoList = SubmarineDataHelperSpot__GetSubmarineSpotInfoList(EventId, mapId, v37);
  if ( !SubmarineSpotInfoList )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SubmarineSpotInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__GetEnumerator__);
  v51 = v50;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__MoveNext__) )
  {
    current = (SubmarineSpotInfo_o *)v51.fields.current;
    if ( !v51.fields.current )
      sub_B170D4();
    monitor = (EventPanelSpotEntity_o *)v51.fields.current[1].monitor;
    if ( !monitor )
      sub_B170D4();
    if ( EventPanelSpotEntity__HasObject(monitor, 0LL) )
    {
      v45 = (SubmarineSilhouetteData_o *)sub_B170CC(SubmarineSilhouetteData_TypeInfo, v41, v42, v43, v44);
      SubmarineSilhouetteData___ctor(v45, current, v46);
      SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields._SilhouetteDataList_k__BackingField;
      if ( !SilhouetteDataList_k__BackingField )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        SilhouetteDataList_k__BackingField,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__Add__);
    }
    PanelByPanelId = SubmarineMapDataManager__GetPanelByPanelId(v2, current->fields._PanelId_k__BackingField, v42);
    if ( PanelByPanelId )
    {
      SpotEntity_k__BackingField = current->fields._SpotEntity_k__BackingField;
      if ( !SpotEntity_k__BackingField )
        sub_B170D4();
      PanelByPanelId->fields._SpotId_k__BackingField = SpotEntity_k__BackingField->fields.id;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSpotInfo__Dispose__);
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  const MethodInfo *v11; // x3
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32_t v13; // w21
  int32_t v14; // w22
  int32_t ID; // w0

  if ( (byte_40F7C4E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&PanelUniqueIDUtil_TypeInfo, v9);
    byte_40F7C4E = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_19;
  if ( PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField >= 1 )
  {
    v13 = 0;
    do
    {
      v14 = 0;
      while ( v14 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
      {
        if ( !SubmarineMapDataManager__GetPanelByIndices(this, v13, v14, v11) )
        {
          if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          }
          ID = PanelUniqueIDUtil__GetID(v13, v14, 0LL);
          if ( !v10 )
            goto LABEL_19;
          System_Collections_Generic_List_int___Add(
            v10,
            ID,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField;
        ++v14;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_19;
      }
      ++v13;
    }
    while ( v13 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField );
  }
  if ( !v10 )
LABEL_19:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  const MethodInfo *v13; // x3
  unsigned int v14; // w24
  bool v15; // w22
  int v16; // w23
  int v17; // w21
  unsigned int v18; // w25
  unsigned int v19; // w9
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByIndices; // x0

  if ( (byte_40F7C4B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, *(_QWORD *)&hIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v11);
    byte_40F7C4B = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                  *(_QWORD *)&hIndex,
                                                                                                  *(_QWORD *)&vIndex,
                                                                                                  diagonal,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  v14 = 0;
  v15 = !diagonal;
  v16 = hIndex - 1;
  v17 = vIndex - 1;
  v18 = -1;
  do
  {
    v19 = v18++;
    if ( v19 != 3 && ((v18 & 1) != 0 || !v15) )
    {
      PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                this,
                                                                                v16 - 3 * (v14 / 3),
                                                                                v17 + v18 / 3,
                                                                                v13);
      if ( PanelByIndices )
      {
        if ( !v12 )
          goto LABEL_12;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          PanelByIndices,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      }
    }
    ++v14;
    ++v16;
  }
  while ( v18 < 8 );
  if ( !v12 )
LABEL_12:
    sub_B170D4();
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


int32_t __fastcall SubmarineMapDataManager__GetNewReleasedScanId(
        SubmarineMapDataManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MapControl_WarInfo_o *WarInfo; // x0
  int32_t EventId; // w0
  const MethodInfo *v9; // x1
  System_Int32_array *UnreleasedScanIds; // x0
  System_Int32_array *v11; // x20
  int32_t v12; // w0
  const MethodInfo *v13; // x1
  SubmarineUnreleasedScanSaveInfo_o *UnreleasedScanInfo; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x22
  void *monitor; // x8
  unsigned __int64 v19; // x23
  int32_t v20; // w21
  __int64 v21; // x3
  __int64 v22; // x4
  MapControl_WarInfo_o *v23; // x0
  int32_t v24; // w0
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_int__o *v27; // x20
  MapControl_WarInfo_o *v28; // x0
  int32_t v29; // w19
  System_Int32_array *v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_40F7C4D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_40F7C4D = 1;
  }
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_21;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0LL);
  UnreleasedScanIds = SubmarineDataHelperScan__GetUnreleasedScanIds(EventId, v9);
  if ( !this->fields.WarInfo )
    goto LABEL_21;
  v11 = UnreleasedScanIds;
  v12 = MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  UnreleasedScanInfo = SubmarineSaveParamsManager__LoadUnreleasedScanInfo(v12, v13);
  if ( UnreleasedScanInfo )
  {
    ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)UnreleasedScanInfo->fields._ScanIds_k__BackingField;
    if ( !ScanIds_k__BackingField )
      goto LABEL_21;
    monitor = ScanIds_k__BackingField[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)monitor )
        {
          sub_B17100(UnreleasedScanInfo, v15, v16);
          sub_B170A0();
        }
        v20 = *((_DWORD *)&ScanIds_k__BackingField[2].klass + v19);
        UnreleasedScanInfo = (SubmarineUnreleasedScanSaveInfo_o *)System_Array__IndexOf_int_(
                                                                    v11,
                                                                    v20,
                                                                    (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)UnreleasedScanInfo & 0x80000000) != 0 )
          break;
        LODWORD(monitor) = ScanIds_k__BackingField[1].monitor;
        if ( (__int64)++v19 >= (int)monitor )
          return 0;
      }
      v27 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v15,
                                                        v16,
                                                        v21,
                                                        v22);
      System_Collections_Generic_List_int____ctor_49346956(
        v27,
        ScanIds_k__BackingField,
        (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
      if ( v27 )
      {
        System_Collections_Generic_List_int___Remove(
          v27,
          v20,
          (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
        v28 = this->fields.WarInfo;
        if ( v28 )
        {
          v29 = MapControl_WarInfo__GetEventId(v28, 0LL);
          v30 = System_Collections_Generic_List_int___ToArray(
                  v27,
                  (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
          SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v29, v30, v31);
          return v20;
        }
      }
LABEL_21:
      sub_B170D4();
    }
  }
  else
  {
    v23 = this->fields.WarInfo;
    if ( !v23 )
      goto LABEL_21;
    v24 = MapControl_WarInfo__GetEventId(v23, 0LL);
    SubmarineSaveParamsManager__SaveUnreleasedScanInfo(v24, v11, v25);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  SubmarineMapDataManager___c__DisplayClass36_0_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x20

  if ( (byte_40F7C47 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&hIndex);
    sub_B16FFC(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v8);
    sub_B16FFC(&System_Predicate_SubmarineMapPanelData__TypeInfo, v9);
    sub_B16FFC(&Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__, v10);
    sub_B16FFC(&SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo, v11);
    byte_40F7C47 = 1;
  }
  v12 = (SubmarineMapDataManager___c__DisplayClass36_0_o *)sub_B170CC(
                                                             SubmarineMapDataManager___c__DisplayClass36_0_TypeInfo,
                                                             *(_QWORD *)&hIndex,
                                                             *(_QWORD *)&vIndex,
                                                             method,
                                                             v4);
  SubmarineMapDataManager___c__DisplayClass36_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.hIndex = hIndex,
        v12->fields.vIndex = vIndex,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                                         v13,
                                                                         v14,
                                                                         v15,
                                                                         v16),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_SubmarineMapDataManager___c__DisplayClass36_0__GetPanelByIndices_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B170D4();
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v18,
                                      (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelByPanelId(
        SubmarineMapDataManager_o *this,
        int32_t panelId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  SubmarineMapDataManager___c__DisplayClass37_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F7C48 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&panelId);
    sub_B16FFC(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v7);
    sub_B16FFC(&System_Predicate_SubmarineMapPanelData__TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__, v9);
    sub_B16FFC(&SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo, v10);
    byte_40F7C48 = 1;
  }
  v11 = (SubmarineMapDataManager___c__DisplayClass37_0_o *)sub_B170CC(
                                                             SubmarineMapDataManager___c__DisplayClass37_0_TypeInfo,
                                                             *(_QWORD *)&panelId,
                                                             method,
                                                             v3,
                                                             v4);
  SubmarineMapDataManager___c__DisplayClass37_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.panelId = panelId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_SubmarineMapDataManager___c__DisplayClass37_0__GetPanelByPanelId_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B170D4();
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v17,
                                      (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineMapPanelData_o *__fastcall SubmarineMapDataManager__GetPanelBySpotId(
        SubmarineMapDataManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  SubmarineMapDataManager___c__DisplayClass38_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F7C49 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__, *(_QWORD *)&spotId);
    sub_B16FFC(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v7);
    sub_B16FFC(&System_Predicate_SubmarineMapPanelData__TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__, v9);
    sub_B16FFC(&SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo, v10);
    byte_40F7C49 = 1;
  }
  v11 = (SubmarineMapDataManager___c__DisplayClass38_0_o *)sub_B170CC(
                                                             SubmarineMapDataManager___c__DisplayClass38_0_TypeInfo,
                                                             *(_QWORD *)&spotId,
                                                             method,
                                                             v3,
                                                             v4);
  SubmarineMapDataManager___c__DisplayClass38_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.spotId = spotId,
        PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_SubmarineMapDataManager___c__DisplayClass38_0__GetPanelBySpotId_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_SubmarineMapPanelData___ctor__),
        !PanelDataList_k__BackingField) )
  {
    sub_B170D4();
  }
  return (SubmarineMapPanelData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)PanelDataList_k__BackingField,
                                      (System_Predicate_T__o *)v17,
                                      (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Find__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetPanelsByScanEvents(
        SubmarineMapDataManager_o *this,
        System_Collections_Generic_List_SubmarineScanEvent__o *scanEvents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  const MethodInfo *v15; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByIndices; // x1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7C4C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, scanEvents);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v13);
    byte_40F7C4C = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                  scanEvents,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  if ( !scanEvents )
    goto LABEL_13;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scanEvents,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B170D4();
    PanelByIndices = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                              this,
                                                                              (int32_t)v18.fields.current[1].klass,
                                                                              HIDWORD(v18.fields.current[1].klass),
                                                                              v15);
    if ( !v14 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      PanelByIndices,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
  if ( !v14 )
LABEL_13:
    sub_B170D4();
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


SubmarineMapPanelData_array *__fastcall SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
        SubmarineMapDataManager_o *this,
        SubmarineSilhouetteData_o *silhouetteData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  const MethodInfo *v11; // x2
  struct System_Int32_array_array *EnemySizeIdx_k__BackingField; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *PanelByPanelId; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  struct System_Int32_array_array *v17; // x22
  int max_length; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  int i; // w23
  System_Int32_array *v21; // x8

  if ( (byte_40F7C4A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, silhouetteData);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v9);
    byte_40F7C4A = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                  silhouetteData,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
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
        v17 = silhouetteData->fields._EnemySizeIdx_k__BackingField;
        if ( !v17 )
          goto LABEL_20;
        max_length = v17->max_length;
        if ( max_length >= 1 )
        {
          v19 = PanelByPanelId;
          for ( i = 0; i < max_length; ++i )
          {
            if ( i >= (unsigned int)max_length )
              goto LABEL_19;
            v21 = v17->m_Items[i];
            if ( !v21 )
              goto LABEL_20;
            if ( v21->max_length < 2 )
            {
LABEL_19:
              sub_B17100(PanelByPanelId, v14, v15);
              sub_B170A0();
            }
            PanelByPanelId = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapDataManager__GetPanelByIndices(
                                                                                      this,
                                                                                      v21->m_Items[1]
                                                                                    + v19->fields.missionTargetId,
                                                                                      v21->m_Items[2]
                                                                                    + v19->fields.missionConditionDetailId,
                                                                                      v16);
            if ( PanelByPanelId )
            {
              if ( !v10 )
                goto LABEL_20;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v10,
                PanelByPanelId,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
            }
            max_length = v17->max_length;
          }
        }
      }
    }
  }
  if ( !v10 )
LABEL_20:
    sub_B170D4();
  return (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineMapDataManager__HasUserMapData(int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  UserEventMapMaster_o *userEventMapMaster; // x0

  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster(*(const MethodInfo **)&eventId);
  if ( !userEventMapMaster )
    sub_B170D4();
  return UserEventMapMaster__GetEntity_26577024(userEventMapMaster, eventId, mapId, 0LL) != 0LL;
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
  if ( (byte_40F7C50 & 1) == 0 )
  {
    questIds = (System_Int32_array *)sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_40F7C50 = 1;
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
          sub_B17100(questIds, *(_QWORD *)&beforeClearQuestId, isCheckResetFlag);
          sub_B170A0();
        }
        v10 = v6->m_Items[v8 + 1];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        questIds = (System_Int32_array *)CondType__IsQuestClear_25438860(v10, beforeClearQuestId, v9, 0LL);
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
  EventPanelSpotEntity_array *SpotsEnemyOccupied; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x8
  EventPanelSpotEntity_array *v11; // x20
  __int64 v12; // x21
  EventPanelSpotEntity_o *v13; // x8

  if ( userEventMapEntity )
  {
    if ( !panelDetail
      || (SpotsEnemyOccupied = SubmarineDataHelperSpot__GetSpotsEnemyOccupied(
                                 userEventMapEntity->fields.eventId,
                                 userEventMapEntity->fields.mapId,
                                 panelDetail->fields.idxX,
                                 panelDetail->fields.idxY,
                                 v4)) == 0LL )
    {
LABEL_14:
      sub_B170D4();
    }
    v10 = *(_QWORD *)&SpotsEnemyOccupied->max_length;
    v11 = SpotsEnemyOccupied;
    if ( v10 && (int)v10 >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= (unsigned int)v10 )
        {
          sub_B17100(SpotsEnemyOccupied, v7, v8);
          sub_B170A0();
        }
        v13 = v11->m_Items[v12];
        if ( !v13 )
          goto LABEL_14;
        SpotsEnemyOccupied = (EventPanelSpotEntity_array *)SubmarineMapDataManager__IsClearEachQuests(
                                                             v13->fields.objectQuestIds,
                                                             beforeClearQuestId,
                                                             0,
                                                             v9);
        if ( ((unsigned __int8)SpotsEnemyOccupied & 1) != 0 )
          break;
        LODWORD(v10) = v11->max_length;
        if ( (int)++v12 >= (int)v10 )
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_40F7C4F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_long___, panelDetail);
    sub_B16FFC(&long___TypeInfo, v7);
    byte_40F7C4F = 1;
  }
  if ( !panelDetail )
    return 0;
  if ( userEventMapEntity )
    value = userEventMapEntity->fields.value;
  else
    value = (System_Int64_array *)sub_B17014(long___TypeInfo, 0LL, *(_QWORD *)&beforeClearQuestId);
  IsStartScan = EventPanelMapDetailEntity__IsStartScan(panelDetail, 0LL);
  v11 = System_Array__IndexOf_long_(
          value,
          panelDetail->fields.id,
          (const MethodInfo_2045640 *)Method_System_Array_IndexOf_long___);
  return (v11 >= 0 || IsStartScan) | SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_20929872(
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
    sub_B170D4();
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelData->fields._CommonReleaseId_k__BackingField,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_20929872(
        EventPanelMapDetailEntity_o *panelDetail,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  if ( !panelDetail )
    sub_B170D4();
  return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           panelDetail->fields.commonReleaseId,
           beforeClearQuestId,
           0,
           0LL);
}


bool __fastcall SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond_20930112(
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
  __int64 v4; // x2
  System_Int64_array *v5; // x0
  __int64 v6; // x2

  v2 = mapId;
  if ( (byte_40F7C51 & 1) == 0 )
  {
    *(_QWORD *)&mapId = sub_B16FFC(&long___TypeInfo, method);
    byte_40F7C51 = 1;
  }
  eventPanelMapMaster = (DataMasterBase_o *)SubmarineMapDataManager__get_eventPanelMapMaster(*(const MethodInfo **)&mapId);
  v5 = (System_Int64_array *)sub_B17014(long___TypeInfo, 1LL, v4);
  if ( !v5 )
    goto LABEL_7;
  if ( !v5->max_length )
  {
    sub_B17100(v5, v5, v6);
    sub_B170A0();
  }
  v5->m_Items[0] = v2;
  if ( !eventPanelMapMaster )
LABEL_7:
    sub_B170D4();
  return DataMasterBase__isEntityExistsFromId(eventPanelMapMaster, v5, 0LL);
}


void __fastcall SubmarineMapDataManager__LoadSettings(
        SubmarineMapDataManager_o *this,
        SubmarineSettings_o *overwriteSettings,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  SubmarineSettingsManager_o *v8; // x0
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  struct SubmarineSettingsManager_o *v10; // x9

  if ( (byte_40F7C44 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, overwriteSettings);
    byte_40F7C44 = 1;
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
  v8 = this->fields._Settings_k__BackingField;
  if ( !v8
    || (SubmarineSettingsManager__UpdateSettingsFromMaster(v8, v5),
        (PositionCalculator_k__BackingField = this->fields._PositionCalculator_k__BackingField) == 0LL)
    || (v10 = this->fields._Settings_k__BackingField) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField = v10->fields._BoardOffset_k__BackingField.fields.x;
  PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField = v10->fields._BoardOffset_k__BackingField.fields.y;
  PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField = v10->fields._PanelUnitSize_k__BackingField;
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
  System_Int32_array *ReleasedScanIds; // x0
  struct MapControl_MapInfo_o *MapInfo; // x8
  int32_t mapId; // w22
  EventPanelMapDetailMaster_o *eventMapDetailMaster; // x0
  EventPanelMapDetailEntity_array *ListByMapId; // x21
  UserEventMapMaster_o *userEventMapMaster; // x0
  UserEventMapMaster_o *v21; // x23
  int32_t v22; // w0
  UserEventMapEntity_o *Entity_26577024; // x0
  UserEventMapEntity_o *v24; // x22
  Il2CppObject *current; // x25
  int max_length; // w9
  unsigned int v27; // w10
  EventPanelMapDetailEntity_o *v28; // x8
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  struct System_Collections_Generic_List_SubmarineSilhouetteData__o *SilhouetteDataList_k__BackingField; // x0
  SubmarineSilhouetteData_o *v34; // x21
  bool IsClearEachQuests; // w0
  const MethodInfo *v36; // x2
  SubmarineMapPanelData_array *SilhouetteOccupiedPanels; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  int v40; // w9
  int i; // w8
  SubmarineMapPanelData_o *v42; // x9
  const MethodInfo *v43; // x3
  int v44; // w20
  int v45; // w8
  struct System_Collections_Generic_List_SubmarineMapPanelData__o *PanelDataList_k__BackingField; // x0
  Il2CppObject *v47; // x21
  bool IsScannable; // w8
  const MethodInfo *v49; // x3
  int v50; // w20
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-A8h] BYREF
  int v52[3]; // [xsp+20h] [xbp-90h]
  int v53; // [xsp+2Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_40F7C46 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v11);
    byte_40F7C46 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  memset(&v54, 0, sizeof(v54));
  v53 = 0;
  WarInfo = this->fields.WarInfo;
  if ( !WarInfo )
    goto LABEL_59;
  EventId = MapControl_WarInfo__GetEventId(WarInfo, 0LL);
  ReleasedScanIds = SubmarineDataHelperScan__GetReleasedScanIds(EventId, v14);
  if ( !ReleasedScanIds )
    goto LABEL_59;
  MapInfo = this->fields.MapInfo;
  this->fields.hasReleasedScanMethod = ReleasedScanIds->max_length != 0;
  if ( !MapInfo )
    goto LABEL_59;
  mapId = MapInfo->fields.mapId;
  eventMapDetailMaster = SubmarineMapDataManager__get_eventMapDetailMaster((const MethodInfo *)ReleasedScanIds);
  if ( !eventMapDetailMaster )
    goto LABEL_59;
  ListByMapId = EventPanelMapDetailMaster__GetListByMapId(eventMapDetailMaster, mapId, 0LL);
  userEventMapMaster = SubmarineMapDataManager__get_userEventMapMaster((const MethodInfo *)ListByMapId);
  if ( !this->fields.WarInfo )
    goto LABEL_59;
  v21 = userEventMapMaster;
  v22 = MapControl_WarInfo__GetEventId(this->fields.WarInfo, 0LL);
  if ( !v21 )
    goto LABEL_59;
  Entity_26577024 = UserEventMapMaster__GetEntity_26577024(v21, v22, mapId, 0LL);
  if ( !this->fields._PanelDataList_k__BackingField )
    goto LABEL_59;
  v24 = Entity_26577024;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields._PanelDataList_k__BackingField,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v55 = v51;
LABEL_21:
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v29 )
      break;
    current = v55.fields.current;
    if ( !v55.fields.current )
      sub_B170D4();
    LOWORD(v55.fields.current[3].monitor) = 0;
    if ( !ListByMapId )
      sub_B170D4();
    max_length = ListByMapId->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
        {
          sub_B17100(v29, v30, v31);
          sub_B170A0();
        }
        v28 = ListByMapId->m_Items[v27];
        if ( !v28 )
          sub_B170D4();
        if ( v28->fields.id == LODWORD(current[1].monitor) )
          break;
        if ( (int)++v27 >= max_length )
          goto LABEL_21;
      }
      LOBYTE(current[3].monitor) = SubmarineMapDataManager__IsOpenPanel(
                                     v24,
                                     ListByMapId->m_Items[v27],
                                     beforeClearQuestId,
                                     v32);
    }
  }
  v52[0] = 190;
  v53 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  v53 = 0;
  SilhouetteDataList_k__BackingField = this->fields._SilhouetteDataList_k__BackingField;
  if ( !SilhouetteDataList_k__BackingField )
    goto LABEL_59;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SilhouetteDataList_k__BackingField,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v54 = v51;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v34 = (SubmarineSilhouetteData_o *)v54.fields.current;
    if ( !v54.fields.current )
      sub_B170D4();
    IsClearEachQuests = SubmarineMapDataManager__IsClearEachQuests(
                          (System_Int32_array *)v54.fields.current[2].klass,
                          beforeClearQuestId,
                          0,
                          v43);
    v34->fields._Alive_k__BackingField = !IsClearEachQuests;
    if ( !IsClearEachQuests )
    {
      SilhouetteOccupiedPanels = SubmarineMapDataManager__GetSilhouetteOccupiedPanels(this, v34, v36);
      if ( !SilhouetteOccupiedPanels )
        sub_B170D4();
      v40 = SilhouetteOccupiedPanels->max_length;
      if ( v40 >= 1 )
      {
        for ( i = 0; i < v40; ++i )
        {
          if ( i >= (unsigned int)v40 )
          {
            sub_B17100(SilhouetteOccupiedPanels, v38, v39);
            sub_B170A0();
          }
          v42 = SilhouetteOccupiedPanels->m_Items[i];
          if ( !v42 )
            sub_B170D4();
          v42->fields._HasEnemyParts_k__BackingField = 1;
          v40 = SilhouetteOccupiedPanels->max_length;
        }
      }
    }
  }
  v52[0] = 316;
  v44 = ++v53;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v44 )
  {
    v45 = v44 - 1;
    if ( v52[v44 - 1] == 316 )
    {
      --v44;
      v53 = v45;
    }
  }
  PanelDataList_k__BackingField = this->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
LABEL_59:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PanelDataList_k__BackingField,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v55 = v51;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    v47 = v55.fields.current;
    if ( this->fields.hasReleasedScanMethod )
    {
      if ( !v55.fields.current )
        sub_B170D4();
      IsScannable = SubmarineDataHelperScan__IsScannable(
                      (int32_t)v55.fields.current[1].klass,
                      HIDWORD(v55.fields.current[1].klass),
                      this,
                      v49);
    }
    else
    {
      if ( !v55.fields.current )
        sub_B170D4();
      IsScannable = 0;
    }
    BYTE2(v47[3].monitor) = IsScannable;
  }
  v52[v44] = 402;
  v50 = ++v53;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( v50 )
  {
    if ( v52[v50 - 1] == 402 )
      v53 = v50 - 1;
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
    sub_B170D4();
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

  if ( (byte_40F7C41 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C41 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineMapDataManager__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C40 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C40 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineMapDataManager__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C42 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C42 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  SpotId_k__BackingField = x->fields._SpotId_k__BackingField;
  return SpotId_k__BackingField && SpotId_k__BackingField == this->fields.spotId;
}