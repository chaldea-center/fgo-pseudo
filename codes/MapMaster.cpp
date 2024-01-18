void __fastcall MapMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct MapMaster_StaticFields *static_fields; // x0
  __int64 v14; // x1
  struct MapMaster_StaticFields *v15; // x0
  __int64 v16; // x1
  struct MapMaster_StaticFields *v17; // x0
  __int64 v18; // x1
  struct MapMaster_StaticFields *v19; // x0
  __int64 v20; // x1
  struct MapMaster_StaticFields *v21; // x0
  __int64 v22; // x1
  struct MapMaster_StaticFields *v23; // x0
  __int64 v24; // x1
  struct MapMaster_StaticFields *v25; // x0
  __int64 v26; // x1
  struct MapMaster_StaticFields *v27; // x0
  __int64 v28; // x1
  struct MapMaster_StaticFields *v29; // x0
  __int64 v30; // x1
  struct MapMaster_StaticFields *v31; // x0
  __int64 v32; // x1
  struct MapMaster_StaticFields *v33; // x0
  __int64 v34; // x1

  if ( (byte_41858C8 & 1) == 0 )
  {
    sub_B2C35C(&MapMaster_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18747/*"firstEffectTime"*/, v2);
    sub_B2C35C(&StringLiteral_21737/*"referrerMapId"*/, v3);
    sub_B2C35C(&StringLiteral_17180/*"camera2DResetDuration"*/, v4);
    sub_B2C35C(&StringLiteral_20367/*"mapCameraMoveEasingType"*/, v5);
    sub_B2C35C(&StringLiteral_20370/*"mapCameraMoveTimeLogarithmBase"*/, v6);
    sub_B2C35C(&StringLiteral_22220/*"spotScale"*/, v7);
    sub_B2C35C(&StringLiteral_21371/*"overwriteMapAssetId"*/, v8);
    sub_B2C35C(&StringLiteral_1169/*"3dModelFlag"*/, v9);
    sub_B2C35C(&StringLiteral_20368/*"mapCameraMoveTimeCoefficient"*/, v10);
    sub_B2C35C(&StringLiteral_18748/*"firstEffectType"*/, v11);
    sub_B2C35C(&StringLiteral_20369/*"mapCameraMoveTimeConstant"*/, v12);
    byte_41858C8 = 1;
  }
  static_fields = MapMaster_TypeInfo->static_fields;
  v14 = StringLiteral_18748/*"firstEffectType"*/;
  static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_18748/*"firstEffectType"*/;
  sub_B2C2F8(static_fields, v14);
  v15 = MapMaster_TypeInfo->static_fields;
  v16 = StringLiteral_18747/*"firstEffectTime"*/;
  v15->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_18747/*"firstEffectTime"*/;
  sub_B2C2F8(&v15->SCRIPT_KEY_FADE_TIME, v16);
  v17 = MapMaster_TypeInfo->static_fields;
  v18 = StringLiteral_21737/*"referrerMapId"*/;
  v17->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_21737/*"referrerMapId"*/;
  sub_B2C2F8(&v17->SCRIPT_KEY_REFERRER_MAP_ID, v18);
  v19 = MapMaster_TypeInfo->static_fields;
  v20 = StringLiteral_21371/*"overwriteMapAssetId"*/;
  v19->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_21371/*"overwriteMapAssetId"*/;
  sub_B2C2F8(&v19->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v20);
  v21 = MapMaster_TypeInfo->static_fields;
  v22 = StringLiteral_1169/*"3dModelFlag"*/;
  v21->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1169/*"3dModelFlag"*/;
  sub_B2C2F8(&v21->SCRIPT_KEY_ON_MAP_MODEL, v22);
  v23 = MapMaster_TypeInfo->static_fields;
  v24 = StringLiteral_22220/*"spotScale"*/;
  v23->SPOT_SCALE = (struct System_String_o *)StringLiteral_22220/*"spotScale"*/;
  sub_B2C2F8(&v23->SPOT_SCALE, v24);
  v25 = MapMaster_TypeInfo->static_fields;
  v26 = StringLiteral_20369/*"mapCameraMoveTimeConstant"*/;
  v25->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_20369/*"mapCameraMoveTimeConstant"*/;
  sub_B2C2F8(&v25->MAP_CAMERA_MOVE_TIME_CONSTANT, v26);
  v27 = MapMaster_TypeInfo->static_fields;
  v28 = StringLiteral_20368/*"mapCameraMoveTimeCoefficient"*/;
  v27->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_20368/*"mapCameraMoveTimeCoefficient"*/;
  sub_B2C2F8(&v27->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v28);
  v29 = MapMaster_TypeInfo->static_fields;
  v30 = StringLiteral_20370/*"mapCameraMoveTimeLogarithmBase"*/;
  v29->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_20370/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_B2C2F8(&v29->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE, v30);
  v31 = MapMaster_TypeInfo->static_fields;
  v32 = StringLiteral_20367/*"mapCameraMoveEasingType"*/;
  v31->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_20367/*"mapCameraMoveEasingType"*/;
  sub_B2C2F8(&v31->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v32);
  v33 = MapMaster_TypeInfo->static_fields;
  v34 = StringLiteral_17180/*"camera2DResetDuration"*/;
  v33->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17180/*"camera2DResetDuration"*/;
  sub_B2C2F8(&v33->CAMERA2D_RESET_DURATION, v34);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41858C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__, method);
    byte_41858C5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    195,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41858C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_41858C3 = 1;
  }
  PK = MapEntity__CreatePK(id, warId, 0LL);
  return (MapEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                          PK,
                          (const MethodInfo_24E4520 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_41858C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    sub_B2C35C(&MapEntity_TypeInfo, v10);
    byte_41858C7 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v16 = *(&MapEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (MapEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == MapEntity_TypeInfo
          && LODWORD(list->fields.items) == mapId )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, v12);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (MapEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}


bool __fastcall MapMaster__TryGetEntity(
        MapMaster_o *this,
        MapEntity_o **entity,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_41858C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, entity);
    byte_41858C4 = 1;
  }
  PK = MapEntity__CreatePK(id, warId, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x10

  if ( (byte_41858C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&war_id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    sub_B2C35C(&MapEntity_TypeInfo, v10);
    byte_41858C6 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      v15 = *(&MapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (MapEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == MapEntity_TypeInfo
        && HIDWORD(list->fields.items) == war_id )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (MapEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}