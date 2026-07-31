void MapMaster___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct MapMaster_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct MapMaster_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct MapMaster_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct MapMaster_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct MapMaster_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct MapMaster_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct MapMaster_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  struct MapMaster_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct MapMaster_StaticFields *v72; // x0
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct MapMaster_StaticFields *v80; // x0
  int32_t v81; // w1
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct MapMaster_StaticFields *v88; // x0
  int32_t v89; // w1
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  struct MapMaster_StaticFields *v96; // x0
  int32_t v97; // w1
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  struct MapMaster_StaticFields *v104; // x0
  int32_t v105; // w1
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  struct MapMaster_StaticFields *v112; // x0
  int32_t v113; // w1
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7

  if ( (byte_5938BCF & 1) == 0 )
  {
    sub_21FFC50(&MapMaster_TypeInfo);
    sub_21FFC50(&StringLiteral_20328/*"firstFadeColorKind"*/);
    sub_21FFC50(&StringLiteral_20325/*"firstEffectTime"*/);
    sub_21FFC50(&StringLiteral_24153/*"referrerMapId"*/);
    sub_21FFC50(&StringLiteral_20327/*"firstFadeColor"*/);
    sub_21FFC50(&StringLiteral_18446/*"camera2DResetDuration"*/);
    sub_21FFC50(&StringLiteral_20853/*"headerHidden"*/);
    sub_21FFC50(&StringLiteral_22458/*"mapCameraMoveEasingType"*/);
    sub_21FFC50(&StringLiteral_22461/*"mapCameraMoveTimeLogarithmBase"*/);
    sub_21FFC50(&StringLiteral_24809/*"spotScale"*/);
    sub_21FFC50(&StringLiteral_23660/*"overwriteMapAssetId"*/);
    sub_21FFC50(&StringLiteral_25793/*"useVoiceSvtIdList"*/);
    sub_21FFC50(&StringLiteral_1476/*"3dModelFlag"*/);
    sub_21FFC50(&StringLiteral_22459/*"mapCameraMoveTimeCoefficient"*/);
    sub_21FFC50(&StringLiteral_20326/*"firstEffectType"*/);
    sub_21FFC50(&StringLiteral_22460/*"mapCameraMoveTimeConstant"*/);
    byte_5938BCF = 1;
  }
  v7 = StringLiteral_20326/*"firstEffectType"*/;
  MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_20326/*"firstEffectType"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)MapMaster_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_20325/*"firstEffectTime"*/;
  static_fields = MapMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_20325/*"firstEffectTime"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SCRIPT_KEY_FADE_TIME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_20328/*"firstFadeColorKind"*/;
  v17 = MapMaster_TypeInfo->static_fields;
  v17->ScriptKeyFadeKind = (struct System_String_o *)StringLiteral_20328/*"firstFadeColorKind"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->ScriptKeyFadeKind, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_20327/*"firstFadeColor"*/;
  v25 = MapMaster_TypeInfo->static_fields;
  v25->ScriptKeyFadeColor = (struct System_String_o *)StringLiteral_20327/*"firstFadeColor"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->ScriptKeyFadeColor, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_24153/*"referrerMapId"*/;
  v33 = MapMaster_TypeInfo->static_fields;
  v33->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_24153/*"referrerMapId"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->SCRIPT_KEY_REFERRER_MAP_ID, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_23660/*"overwriteMapAssetId"*/;
  v41 = MapMaster_TypeInfo->static_fields;
  v41->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_23660/*"overwriteMapAssetId"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v41->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
    v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = StringLiteral_1476/*"3dModelFlag"*/;
  v49 = MapMaster_TypeInfo->static_fields;
  v49->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1476/*"3dModelFlag"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->SCRIPT_KEY_ON_MAP_MODEL, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_25793/*"useVoiceSvtIdList"*/;
  v57 = MapMaster_TypeInfo->static_fields;
  v57->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST = (struct System_String_o *)StringLiteral_25793/*"useVoiceSvtIdList"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v57->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST,
    v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = StringLiteral_20853/*"headerHidden"*/;
  v65 = MapMaster_TypeInfo->static_fields;
  v65->SCRIPT_KEY_HEADER_HIDDEN = (struct System_String_o *)StringLiteral_20853/*"headerHidden"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v65->SCRIPT_KEY_HEADER_HIDDEN, v64, v66, v67, v68, v69, v70, v71);
  v72 = MapMaster_TypeInfo->static_fields;
  v73 = StringLiteral_24809/*"spotScale"*/;
  v72->SPOT_SCALE = (struct System_String_o *)StringLiteral_24809/*"spotScale"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v72->SPOT_SCALE, v73, v74, v75, v76, v77, v78, v79);
  v80 = MapMaster_TypeInfo->static_fields;
  v81 = StringLiteral_22460/*"mapCameraMoveTimeConstant"*/;
  v80->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_22460/*"mapCameraMoveTimeConstant"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v80->MAP_CAMERA_MOVE_TIME_CONSTANT,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v88 = MapMaster_TypeInfo->static_fields;
  v89 = StringLiteral_22459/*"mapCameraMoveTimeCoefficient"*/;
  v88->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_22459/*"mapCameraMoveTimeCoefficient"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v88->MAP_CAMERA_MOVE_TIME_COEFFICIENT,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v96 = MapMaster_TypeInfo->static_fields;
  v97 = StringLiteral_22461/*"mapCameraMoveTimeLogarithmBase"*/;
  v96->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_22461/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v96->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  v104 = MapMaster_TypeInfo->static_fields;
  v105 = StringLiteral_22458/*"mapCameraMoveEasingType"*/;
  v104->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_22458/*"mapCameraMoveEasingType"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v104->MAP_CAMERA_MOVE_TIME_EASING_TYPE,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  v112 = MapMaster_TypeInfo->static_fields;
  v113 = StringLiteral_18446/*"camera2DResetDuration"*/;
  v112->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_18446/*"camera2DResetDuration"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v112->CAMERA2D_RESET_DURATION,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
}


void MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938BCC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
    byte_5938BCC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    203,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938BCA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
    byte_5938BCA = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (MapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          PK,
                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


MapEntity_array *MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5938BCE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MapEntity__TypeInfo);
    byte_5938BCE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_445164C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
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

  if ( (byte_5938BCB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    byte_5938BCB = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


MapEntity_array *MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5938BCD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MapEntity__TypeInfo);
    byte_5938BCD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list->fields.items) == war_id )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_MapEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_21FFECC(list, v6);
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_445164C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}