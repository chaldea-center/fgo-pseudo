void __fastcall MapMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v20; // x1
  struct MapMaster_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct MapMaster_StaticFields *v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct MapMaster_StaticFields *v37; // x0
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct MapMaster_StaticFields *v45; // x0
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct MapMaster_StaticFields *v53; // x0
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct MapMaster_StaticFields *v61; // x0
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct MapMaster_StaticFields *v69; // x0
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct MapMaster_StaticFields *v77; // x0
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct MapMaster_StaticFields *v85; // x0
  System_Int32_array **v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct MapMaster_StaticFields *v93; // x0
  System_Int32_array **v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7

  if ( (byte_40FB5F9 & 1) == 0 )
  {
    sub_B16FFC(&MapMaster_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18675, v8);
    sub_B16FFC(&StringLiteral_21645, v9);
    sub_B16FFC(&StringLiteral_17114, v10);
    sub_B16FFC(&StringLiteral_20284, v11);
    sub_B16FFC(&StringLiteral_20287, v12);
    sub_B16FFC(&StringLiteral_22128, v13);
    sub_B16FFC(&StringLiteral_21281, v14);
    sub_B16FFC(&StringLiteral_1166, v15);
    sub_B16FFC(&StringLiteral_20285, v16);
    sub_B16FFC(&StringLiteral_18676, v17);
    sub_B16FFC(&StringLiteral_20286, v18);
    byte_40FB5F9 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapMaster_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_18676;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18676;
  sub_B16F98(static_fields, v20, v2, v3, v4, v5, v6, v7);
  v21 = MapMaster_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_18675;
  v21->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_18675;
  sub_B16F98((BattleServantConfConponent_o *)&v21->SCRIPT_KEY_FADE_TIME, v22, v23, v24, v25, v26, v27, v28);
  v29 = MapMaster_TypeInfo->static_fields;
  v30 = (System_Int32_array **)StringLiteral_21645;
  v29->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_21645;
  sub_B16F98((BattleServantConfConponent_o *)&v29->SCRIPT_KEY_REFERRER_MAP_ID, v30, v31, v32, v33, v34, v35, v36);
  v37 = MapMaster_TypeInfo->static_fields;
  v38 = (System_Int32_array **)StringLiteral_21281;
  v37->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_21281;
  sub_B16F98((BattleServantConfConponent_o *)&v37->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v38, v39, v40, v41, v42, v43, v44);
  v45 = MapMaster_TypeInfo->static_fields;
  v46 = (System_Int32_array **)StringLiteral_1166;
  v45->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1166;
  sub_B16F98((BattleServantConfConponent_o *)&v45->SCRIPT_KEY_ON_MAP_MODEL, v46, v47, v48, v49, v50, v51, v52);
  v53 = MapMaster_TypeInfo->static_fields;
  v54 = (System_Int32_array **)StringLiteral_22128;
  v53->SPOT_SCALE = (struct System_String_o *)StringLiteral_22128;
  sub_B16F98((BattleServantConfConponent_o *)&v53->SPOT_SCALE, v54, v55, v56, v57, v58, v59, v60);
  v61 = MapMaster_TypeInfo->static_fields;
  v62 = (System_Int32_array **)StringLiteral_20286;
  v61->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_20286;
  sub_B16F98((BattleServantConfConponent_o *)&v61->MAP_CAMERA_MOVE_TIME_CONSTANT, v62, v63, v64, v65, v66, v67, v68);
  v69 = MapMaster_TypeInfo->static_fields;
  v70 = (System_Int32_array **)StringLiteral_20285;
  v69->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_20285;
  sub_B16F98((BattleServantConfConponent_o *)&v69->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v70, v71, v72, v73, v74, v75, v76);
  v77 = MapMaster_TypeInfo->static_fields;
  v78 = (System_Int32_array **)StringLiteral_20287;
  v77->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_20287;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v77->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v85 = MapMaster_TypeInfo->static_fields;
  v86 = (System_Int32_array **)StringLiteral_20284;
  v85->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_20284;
  sub_B16F98((BattleServantConfConponent_o *)&v85->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v86, v87, v88, v89, v90, v91, v92);
  v93 = MapMaster_TypeInfo->static_fields;
  v94 = (System_Int32_array **)StringLiteral_17114;
  v93->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17114;
  sub_B16F98((BattleServantConfConponent_o *)&v93->CAMERA2D_RESET_DURATION, v94, v95, v96, v97, v98, v99, v100);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB5F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__, method);
    byte_40FB5F6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    195,
    (const MethodInfo_266F73C *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB5F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FB5F4 = 1;
  }
  PK = MapEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (MapEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                          PK,
                          (const MethodInfo_266F7D8 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FB5F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_MapEntity__TypeInfo, v11);
    sub_B16FFC(&MapEntity_TypeInfo, v12);
    byte_40FB5F8 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapEntity__TypeInfo,
                                                                                                  *(_QWORD *)&mapId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v18,
                                                                      v17,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = *(&MapEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (MapEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == MapEntity_TypeInfo
          && Item->fields.missionTargetId == mapId )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (MapEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
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

  if ( (byte_40FB5F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, entity);
    byte_40FB5F5 = 1;
  }
  PK = MapEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_40FB5F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&war_id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_MapEntity__TypeInfo, v11);
    sub_B16FFC(&MapEntity_TypeInfo, v12);
    byte_40FB5F7 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapEntity__TypeInfo,
                                                                                                  *(_QWORD *)&war_id,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_17;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v16,
                                                                    v15,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&MapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (MapEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == MapEntity_TypeInfo
        && Item->fields.missionConditionDetailId == war_id )
      {
        if ( !v13 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  return (MapEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}