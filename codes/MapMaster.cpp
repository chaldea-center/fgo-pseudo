void __fastcall MapMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t v16; // w1
  struct MapMaster_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  struct MapMaster_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  struct MapMaster_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  struct MapMaster_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  struct MapMaster_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  struct MapMaster_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  struct MapMaster_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  struct MapMaster_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct MapMaster_StaticFields *v48; // x0
  int32_t v49; // w1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct MapMaster_StaticFields *v52; // x0
  int32_t v53; // w1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct MapMaster_StaticFields *v56; // x0
  int32_t v57; // w1
  int32_t v58; // w2
  const MethodInfo *v59; // x3

  if ( (byte_4B44E57 & 1) == 0 )
  {
    sub_1BDB878(&MapMaster_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_19464/*"firstEffectTime"*/, v4);
    sub_1BDB878(&StringLiteral_23026/*"referrerMapId"*/, v5);
    sub_1BDB878(&StringLiteral_17712/*"camera2DResetDuration"*/, v6);
    sub_1BDB878(&StringLiteral_21429/*"mapCameraMoveEasingType"*/, v7);
    sub_1BDB878(&StringLiteral_21432/*"mapCameraMoveTimeLogarithmBase"*/, v8);
    sub_1BDB878(&StringLiteral_23632/*"spotScale"*/, v9);
    sub_1BDB878(&StringLiteral_22579/*"overwriteMapAssetId"*/, v10);
    sub_1BDB878(&StringLiteral_24552/*"useVoiceSvtIdList"*/, v11);
    sub_1BDB878(&StringLiteral_1423/*"3dModelFlag"*/, v12);
    sub_1BDB878(&StringLiteral_21430/*"mapCameraMoveTimeCoefficient"*/, v13);
    sub_1BDB878(&StringLiteral_19465/*"firstEffectType"*/, v14);
    sub_1BDB878(&StringLiteral_21431/*"mapCameraMoveTimeConstant"*/, v15);
    byte_4B44E57 = 1;
  }
  MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_19465/*"firstEffectType"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)MapMaster_TypeInfo->static_fields, StringLiteral_19465/*"firstEffectType"*/, v2, v3);
  v16 = StringLiteral_19464/*"firstEffectTime"*/;
  static_fields = MapMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_19464/*"firstEffectTime"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->SCRIPT_KEY_FADE_TIME, v16, v18, v19);
  v20 = StringLiteral_23026/*"referrerMapId"*/;
  v21 = MapMaster_TypeInfo->static_fields;
  v21->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_23026/*"referrerMapId"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v21->SCRIPT_KEY_REFERRER_MAP_ID, v20, v22, v23);
  v24 = StringLiteral_22579/*"overwriteMapAssetId"*/;
  v25 = MapMaster_TypeInfo->static_fields;
  v25->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_22579/*"overwriteMapAssetId"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v25->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v24, v26, v27);
  v28 = StringLiteral_1423/*"3dModelFlag"*/;
  v29 = MapMaster_TypeInfo->static_fields;
  v29->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1423/*"3dModelFlag"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v29->SCRIPT_KEY_ON_MAP_MODEL, v28, v30, v31);
  v32 = StringLiteral_24552/*"useVoiceSvtIdList"*/;
  v33 = MapMaster_TypeInfo->static_fields;
  v33->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST = (struct System_String_o *)StringLiteral_24552/*"useVoiceSvtIdList"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST, v32, v34, v35);
  v36 = StringLiteral_23632/*"spotScale"*/;
  v37 = MapMaster_TypeInfo->static_fields;
  v37->SPOT_SCALE = (struct System_String_o *)StringLiteral_23632/*"spotScale"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v37->SPOT_SCALE, v36, v38, v39);
  v40 = StringLiteral_21431/*"mapCameraMoveTimeConstant"*/;
  v41 = MapMaster_TypeInfo->static_fields;
  v41->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_21431/*"mapCameraMoveTimeConstant"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v41->MAP_CAMERA_MOVE_TIME_CONSTANT, v40, v42, v43);
  v44 = StringLiteral_21430/*"mapCameraMoveTimeCoefficient"*/;
  v45 = MapMaster_TypeInfo->static_fields;
  v45->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_21430/*"mapCameraMoveTimeCoefficient"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v45->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v44, v46, v47);
  v48 = MapMaster_TypeInfo->static_fields;
  v49 = StringLiteral_21432/*"mapCameraMoveTimeLogarithmBase"*/;
  v48->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_21432/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v48->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE, v49, v50, v51);
  v52 = MapMaster_TypeInfo->static_fields;
  v53 = StringLiteral_21429/*"mapCameraMoveEasingType"*/;
  v52->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_21429/*"mapCameraMoveEasingType"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v52->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v53, v54, v55);
  v56 = MapMaster_TypeInfo->static_fields;
  v57 = StringLiteral_17712/*"camera2DResetDuration"*/;
  v56->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17712/*"camera2DResetDuration"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v56->CAMERA2D_RESET_DURATION, v57, v58, v59);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44E54 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__, method);
    byte_4B44E54 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    201,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44E52 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B44E52 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, 0LL);
  return (MapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          PK,
                          (const MethodInfo_32E68F4 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B44E56 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__, *(_QWORD *)&mapId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    byte_4B44E56 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( LODWORD(list->fields.items) == mapId )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_MapEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BDBAD4(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v10,
                              (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}


bool __fastcall MapMaster__TryGetEntity(
        MapMaster_o *this,
        MapEntity_o **entity,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44E53 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, entity);
    byte_4B44E53 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B44E55 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__, *(_QWORD *)&war_id);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    byte_4B44E55 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( HIDWORD(list->fields.items) == war_id )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_MapEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1BDBAD4(list, v11);
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v10,
                              (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}