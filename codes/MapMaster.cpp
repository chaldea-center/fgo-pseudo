void __fastcall MapMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v42; // x1
  struct MapMaster_StaticFields *v43; // x0
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct MapMaster_StaticFields *v51; // x0
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct MapMaster_StaticFields *v59; // x0
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct MapMaster_StaticFields *v67; // x0
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct MapMaster_StaticFields *v75; // x0
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct MapMaster_StaticFields *v83; // x0
  System_Int32_array **v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct MapMaster_StaticFields *v91; // x0
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  struct MapMaster_StaticFields *v99; // x0
  System_Int32_array **v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct MapMaster_StaticFields *v107; // x0
  System_Int32_array **v108; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  struct MapMaster_StaticFields *v115; // x0
  System_Int32_array **v116; // x1
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7

  if ( (byte_42EBB2A & 1) == 0 )
  {
    sub_B5D5C4(&MapMaster_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18983/*"firstEffectTime"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22031/*"referrerMapId"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17393/*"camera2DResetDuration"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_20627/*"mapCameraMoveEasingType"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20630/*"mapCameraMoveTimeLogarithmBase"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_22522/*"spotScale"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_21652/*"overwriteMapAssetId"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1189/*"3dModelFlag"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_20628/*"mapCameraMoveTimeCoefficient"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_18984/*"firstEffectType"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_20629/*"mapCameraMoveTimeConstant"*/, v38, v39, v40);
    byte_42EBB2A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapMaster_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_18984/*"firstEffectType"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18984/*"firstEffectType"*/;
  sub_B5D560(static_fields, v42, v2, v3, v4, v5, v6, v7);
  v43 = MapMaster_TypeInfo->static_fields;
  v44 = (System_Int32_array **)StringLiteral_18983/*"firstEffectTime"*/;
  v43->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_18983/*"firstEffectTime"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v43->SCRIPT_KEY_FADE_TIME, v44, v45, v46, v47, v48, v49, v50);
  v51 = MapMaster_TypeInfo->static_fields;
  v52 = (System_Int32_array **)StringLiteral_22031/*"referrerMapId"*/;
  v51->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_22031/*"referrerMapId"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v51->SCRIPT_KEY_REFERRER_MAP_ID, v52, v53, v54, v55, v56, v57, v58);
  v59 = MapMaster_TypeInfo->static_fields;
  v60 = (System_Int32_array **)StringLiteral_21652/*"overwriteMapAssetId"*/;
  v59->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_21652/*"overwriteMapAssetId"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v59->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v60, v61, v62, v63, v64, v65, v66);
  v67 = MapMaster_TypeInfo->static_fields;
  v68 = (System_Int32_array **)StringLiteral_1189/*"3dModelFlag"*/;
  v67->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1189/*"3dModelFlag"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v67->SCRIPT_KEY_ON_MAP_MODEL, v68, v69, v70, v71, v72, v73, v74);
  v75 = MapMaster_TypeInfo->static_fields;
  v76 = (System_Int32_array **)StringLiteral_22522/*"spotScale"*/;
  v75->SPOT_SCALE = (struct System_String_o *)StringLiteral_22522/*"spotScale"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v75->SPOT_SCALE, v76, v77, v78, v79, v80, v81, v82);
  v83 = MapMaster_TypeInfo->static_fields;
  v84 = (System_Int32_array **)StringLiteral_20629/*"mapCameraMoveTimeConstant"*/;
  v83->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_20629/*"mapCameraMoveTimeConstant"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v83->MAP_CAMERA_MOVE_TIME_CONSTANT, v84, v85, v86, v87, v88, v89, v90);
  v91 = MapMaster_TypeInfo->static_fields;
  v92 = (System_Int32_array **)StringLiteral_20628/*"mapCameraMoveTimeCoefficient"*/;
  v91->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_20628/*"mapCameraMoveTimeCoefficient"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v91->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v92, v93, v94, v95, v96, v97, v98);
  v99 = MapMaster_TypeInfo->static_fields;
  v100 = (System_Int32_array **)StringLiteral_20630/*"mapCameraMoveTimeLogarithmBase"*/;
  v99->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_20630/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v99->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v107 = MapMaster_TypeInfo->static_fields;
  v108 = (System_Int32_array **)StringLiteral_20627/*"mapCameraMoveEasingType"*/;
  v107->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_20627/*"mapCameraMoveEasingType"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v107->MAP_CAMERA_MOVE_TIME_EASING_TYPE,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  v115 = MapMaster_TypeInfo->static_fields;
  v116 = (System_Int32_array **)StringLiteral_17393/*"camera2DResetDuration"*/;
  v115->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17393/*"camera2DResetDuration"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v115->CAMERA2D_RESET_DURATION, v116, v117, v118, v119, v120, v121, v122);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB27 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBB27 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    196,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBB25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__, id, warId, method);
    byte_42EBB25 = 1;
  }
  PK = MapEntity__CreatePK(id, warId, 0LL);
  return (MapEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                          PK,
                          (const MethodInfo_23FB260 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


MapEntity_array *__fastcall MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42EBB29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, mapId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_MapEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&MapEntity_TypeInfo, v21, v22, v23);
    byte_42EBB29 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v27 = (int)list;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v28,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = list;
        v29 = *(&MapEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (MapEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] == MapEntity_TypeInfo
          && LODWORD(list->fields.items) == mapId )
        {
          if ( !v24 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapEntity__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, v25);
  }
LABEL_14:
  if ( !v24 )
    goto LABEL_16;
  return (MapEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapMaster__TryGetEntity(
        MapMaster_o *this,
        MapEntity_o **entity,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EBB26 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&warId);
    byte_42EBB26 = 1;
  }
  PK = MapEntity__CreatePK(id, warId, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


MapEntity_array *__fastcall MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  __int64 v28; // x10

  if ( (byte_42EBB28 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      war_id,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_MapEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&MapEntity_TypeInfo, v21, v22, v23);
    byte_42EBB28 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v27 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v27 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v27,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v25 = list;
      v28 = *(&MapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (MapEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == MapEntity_TypeInfo
        && HIDWORD(list->fields.items) == war_id )
      {
        if ( !v24 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v27;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v24 )
LABEL_17:
    sub_B5D69C(list, v25);
  return (MapEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}