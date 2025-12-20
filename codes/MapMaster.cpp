void MapMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct MapMaster_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct MapMaster_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct MapMaster_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct MapMaster_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  struct MapMaster_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  struct MapMaster_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  struct MapMaster_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w1
  struct MapMaster_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct MapMaster_StaticFields *v71; // x0
  int32_t v72; // w1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct MapMaster_StaticFields *v79; // x0
  int32_t v80; // w1
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct MapMaster_StaticFields *v87; // x0
  int32_t v88; // w1
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  struct MapMaster_StaticFields *v95; // x0
  int32_t v96; // w1
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7

  if ( (byte_4D2CD64 & 1) == 0 )
  {
    sub_1C94098(&MapMaster_TypeInfo);
    sub_1C94098(&StringLiteral_19616/*"firstEffectTime"*/);
    sub_1C94098(&StringLiteral_23230/*"referrerMapId"*/);
    sub_1C94098(&StringLiteral_17791/*"camera2DResetDuration"*/);
    sub_1C94098(&StringLiteral_20116/*"headerHidden"*/);
    sub_1C94098(&StringLiteral_21619/*"mapCameraMoveEasingType"*/);
    sub_1C94098(&StringLiteral_21622/*"mapCameraMoveTimeLogarithmBase"*/);
    sub_1C94098(&StringLiteral_23831/*"spotScale"*/);
    sub_1C94098(&StringLiteral_22780/*"overwriteMapAssetId"*/);
    sub_1C94098(&StringLiteral_24737/*"useVoiceSvtIdList"*/);
    sub_1C94098(&StringLiteral_1394/*"3dModelFlag"*/);
    sub_1C94098(&StringLiteral_21620/*"mapCameraMoveTimeCoefficient"*/);
    sub_1C94098(&StringLiteral_19617/*"firstEffectType"*/);
    sub_1C94098(&StringLiteral_21621/*"mapCameraMoveTimeConstant"*/);
    byte_4D2CD64 = 1;
  }
  MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_19617/*"firstEffectType"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)MapMaster_TypeInfo->static_fields,
    StringLiteral_19617/*"firstEffectType"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19616/*"firstEffectTime"*/;
  static_fields = MapMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_19616/*"firstEffectTime"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->SCRIPT_KEY_FADE_TIME, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_23230/*"referrerMapId"*/;
  v16 = MapMaster_TypeInfo->static_fields;
  v16->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_23230/*"referrerMapId"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->SCRIPT_KEY_REFERRER_MAP_ID, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_22780/*"overwriteMapAssetId"*/;
  v24 = MapMaster_TypeInfo->static_fields;
  v24->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_22780/*"overwriteMapAssetId"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v24->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_1394/*"3dModelFlag"*/;
  v32 = MapMaster_TypeInfo->static_fields;
  v32->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1394/*"3dModelFlag"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v32->SCRIPT_KEY_ON_MAP_MODEL, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_24737/*"useVoiceSvtIdList"*/;
  v40 = MapMaster_TypeInfo->static_fields;
  v40->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST = (struct System_String_o *)StringLiteral_24737/*"useVoiceSvtIdList"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v40->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_20116/*"headerHidden"*/;
  v48 = MapMaster_TypeInfo->static_fields;
  v48->SCRIPT_KEY_HEADER_HIDDEN = (struct System_String_o *)StringLiteral_20116/*"headerHidden"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v48->SCRIPT_KEY_HEADER_HIDDEN, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_23831/*"spotScale"*/;
  v56 = MapMaster_TypeInfo->static_fields;
  v56->SPOT_SCALE = (struct System_String_o *)StringLiteral_23831/*"spotScale"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->SPOT_SCALE, v55, v57, v58, v59, v60, v61, v62);
  v63 = StringLiteral_21621/*"mapCameraMoveTimeConstant"*/;
  v64 = MapMaster_TypeInfo->static_fields;
  v64->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_21621/*"mapCameraMoveTimeConstant"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v64->MAP_CAMERA_MOVE_TIME_CONSTANT, v63, v65, v66, v67, v68, v69, v70);
  v71 = MapMaster_TypeInfo->static_fields;
  v72 = StringLiteral_21620/*"mapCameraMoveTimeCoefficient"*/;
  v71->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_21620/*"mapCameraMoveTimeCoefficient"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v71->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v72, v73, v74, v75, v76, v77, v78);
  v79 = MapMaster_TypeInfo->static_fields;
  v80 = StringLiteral_21622/*"mapCameraMoveTimeLogarithmBase"*/;
  v79->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_21622/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v79->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = MapMaster_TypeInfo->static_fields;
  v88 = StringLiteral_21619/*"mapCameraMoveEasingType"*/;
  v87->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_21619/*"mapCameraMoveEasingType"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v87->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v88, v89, v90, v91, v92, v93, v94);
  v95 = MapMaster_TypeInfo->static_fields;
  v96 = StringLiteral_17791/*"camera2DResetDuration"*/;
  v95->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17791/*"camera2DResetDuration"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v95->CAMERA2D_RESET_DURATION, v96, v97, v98, v99, v100, v101, v102);
}


void MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CD61 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
    byte_4D2CD61 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    201,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2CD5F & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
    byte_4D2CD5F = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (MapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          PK,
                          (const MethodInfo_345FF78 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


MapEntity_array *MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4D2CD63 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_MapEntity__TypeInfo);
    byte_4D2CD63 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list->fields.items) == mapId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_MapEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C942F0(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool MapMaster__TryGetEntity(
        MapMaster_o *this,
        MapEntity_o **entity,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2CD60 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    byte_4D2CD60 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


MapEntity_array *MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D2CD62 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_MapEntity__TypeInfo);
    byte_4D2CD62 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list->fields.items) == war_id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_MapEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C942F0(list, v6);
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}