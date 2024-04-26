void __fastcall MapMaster___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct MapMaster_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct MapMaster_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct MapMaster_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct MapMaster_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct MapMaster_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct MapMaster_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct MapMaster_StaticFields *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct MapMaster_StaticFields *v65; // x0
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct MapMaster_StaticFields *v73; // x0
  System_Int32_array **v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct MapMaster_StaticFields *v81; // x0
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7

  if ( (byte_4354DAC & 1) == 0 )
  {
    sub_B70694(&MapMaster_TypeInfo);
    sub_B70694(&StringLiteral_19035/*"firstEffectTime"*/);
    sub_B70694(&StringLiteral_22099/*"referrerMapId"*/);
    sub_B70694(&StringLiteral_17440/*"camera2DResetDuration"*/);
    sub_B70694(&StringLiteral_20687/*"mapCameraMoveEasingType"*/);
    sub_B70694(&StringLiteral_20690/*"mapCameraMoveTimeLogarithmBase"*/);
    sub_B70694(&StringLiteral_22592/*"spotScale"*/);
    sub_B70694(&StringLiteral_21715/*"overwriteMapAssetId"*/);
    sub_B70694(&StringLiteral_1194/*"3dModelFlag"*/);
    sub_B70694(&StringLiteral_20688/*"mapCameraMoveTimeCoefficient"*/);
    sub_B70694(&StringLiteral_19036/*"firstEffectType"*/);
    sub_B70694(&StringLiteral_20689/*"mapCameraMoveTimeConstant"*/);
    byte_4354DAC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19036/*"firstEffectType"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19036/*"firstEffectType"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = MapMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19035/*"firstEffectTime"*/;
  v9->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_19035/*"firstEffectTime"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->SCRIPT_KEY_FADE_TIME, v10, v11, v12, v13, v14, v15, v16);
  v17 = MapMaster_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_22099/*"referrerMapId"*/;
  v17->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_22099/*"referrerMapId"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->SCRIPT_KEY_REFERRER_MAP_ID, v18, v19, v20, v21, v22, v23, v24);
  v25 = MapMaster_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_21715/*"overwriteMapAssetId"*/;
  v25->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_21715/*"overwriteMapAssetId"*/;
  sub_B70630((BattleServantConfConponent_o *)&v25->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v26, v27, v28, v29, v30, v31, v32);
  v33 = MapMaster_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_1194/*"3dModelFlag"*/;
  v33->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1194/*"3dModelFlag"*/;
  sub_B70630((BattleServantConfConponent_o *)&v33->SCRIPT_KEY_ON_MAP_MODEL, v34, v35, v36, v37, v38, v39, v40);
  v41 = MapMaster_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_22592/*"spotScale"*/;
  v41->SPOT_SCALE = (struct System_String_o *)StringLiteral_22592/*"spotScale"*/;
  sub_B70630((BattleServantConfConponent_o *)&v41->SPOT_SCALE, v42, v43, v44, v45, v46, v47, v48);
  v49 = MapMaster_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_20689/*"mapCameraMoveTimeConstant"*/;
  v49->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_20689/*"mapCameraMoveTimeConstant"*/;
  sub_B70630((BattleServantConfConponent_o *)&v49->MAP_CAMERA_MOVE_TIME_CONSTANT, v50, v51, v52, v53, v54, v55, v56);
  v57 = MapMaster_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_20688/*"mapCameraMoveTimeCoefficient"*/;
  v57->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_20688/*"mapCameraMoveTimeCoefficient"*/;
  sub_B70630((BattleServantConfConponent_o *)&v57->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v58, v59, v60, v61, v62, v63, v64);
  v65 = MapMaster_TypeInfo->static_fields;
  v66 = (System_Int32_array **)StringLiteral_20690/*"mapCameraMoveTimeLogarithmBase"*/;
  v65->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_20690/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&v65->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = MapMaster_TypeInfo->static_fields;
  v74 = (System_Int32_array **)StringLiteral_20687/*"mapCameraMoveEasingType"*/;
  v73->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_20687/*"mapCameraMoveEasingType"*/;
  sub_B70630((BattleServantConfConponent_o *)&v73->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v74, v75, v76, v77, v78, v79, v80);
  v81 = MapMaster_TypeInfo->static_fields;
  v82 = (System_Int32_array **)StringLiteral_17440/*"camera2DResetDuration"*/;
  v81->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17440/*"camera2DResetDuration"*/;
  sub_B70630((BattleServantConfConponent_o *)&v81->CAMERA2D_RESET_DURATION, v82, v83, v84, v85, v86, v87, v88);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4354DA9 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
    byte_4354DA9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    196,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4354DA7 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
    byte_4354DA7 = 1;
  }
  PK = MapEntity__CreatePK(id, warId, 0LL);
  return (MapEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                          PK,
                          (const MethodInfo_21C0890 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


MapEntity_array *__fastcall MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_4354DAB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_MapEntity__TypeInfo);
    sub_B70694(&MapEntity_TypeInfo);
    byte_4354DAB = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v10 = *(&MapEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (MapEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == MapEntity_TypeInfo
          && LODWORD(list->fields.items) == mapId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7076C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (MapEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                              (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}


bool __fastcall MapMaster__TryGetEntity(
        MapMaster_o *this,
        MapEntity_o **entity,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4354DA8 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    byte_4354DA8 = 1;
  }
  PK = MapEntity__CreatePK(id, warId, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


MapEntity_array *__fastcall MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_4354DAA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_MapEntity__TypeInfo);
    sub_B70694(&MapEntity_TypeInfo);
    byte_4354DAA = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&MapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (MapEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == MapEntity_TypeInfo
        && HIDWORD(list->fields.items) == war_id )
      {
        if ( !v5 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B7076C(list, v6);
  return (MapEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                              (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}