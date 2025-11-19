void MapMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct MapMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct MapMaster_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct MapMaster_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct MapMaster_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct MapMaster_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct MapMaster_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct MapMaster_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  struct MapMaster_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct MapMaster_StaticFields *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct MapMaster_StaticFields *v39; // x0
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct MapMaster_StaticFields *v43; // x0
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3

  if ( (byte_4CB67C3 & 1) == 0 )
  {
    sub_1C6BA08(&MapMaster_TypeInfo);
    sub_1C6BA08(&StringLiteral_19518/*"firstEffectTime"*/);
    sub_1C6BA08(&StringLiteral_23098/*"referrerMapId"*/);
    sub_1C6BA08(&StringLiteral_17717/*"camera2DResetDuration"*/);
    sub_1C6BA08(&StringLiteral_21499/*"mapCameraMoveEasingType"*/);
    sub_1C6BA08(&StringLiteral_21502/*"mapCameraMoveTimeLogarithmBase"*/);
    sub_1C6BA08(&StringLiteral_23696/*"spotScale"*/);
    sub_1C6BA08(&StringLiteral_22652/*"overwriteMapAssetId"*/);
    sub_1C6BA08(&StringLiteral_24595/*"useVoiceSvtIdList"*/);
    sub_1C6BA08(&StringLiteral_1393/*"3dModelFlag"*/);
    sub_1C6BA08(&StringLiteral_21500/*"mapCameraMoveTimeCoefficient"*/);
    sub_1C6BA08(&StringLiteral_19519/*"firstEffectType"*/);
    sub_1C6BA08(&StringLiteral_21501/*"mapCameraMoveTimeConstant"*/);
    byte_4CB67C3 = 1;
  }
  MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_19519/*"firstEffectType"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)MapMaster_TypeInfo->static_fields, StringLiteral_19519/*"firstEffectType"*/, v1, v2);
  v3 = StringLiteral_19518/*"firstEffectTime"*/;
  static_fields = MapMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_19518/*"firstEffectTime"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->SCRIPT_KEY_FADE_TIME, v3, v5, v6);
  v7 = StringLiteral_23098/*"referrerMapId"*/;
  v8 = MapMaster_TypeInfo->static_fields;
  v8->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_23098/*"referrerMapId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->SCRIPT_KEY_REFERRER_MAP_ID, v7, v9, v10);
  v11 = StringLiteral_22652/*"overwriteMapAssetId"*/;
  v12 = MapMaster_TypeInfo->static_fields;
  v12->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_22652/*"overwriteMapAssetId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v11, v13, v14);
  v15 = StringLiteral_1393/*"3dModelFlag"*/;
  v16 = MapMaster_TypeInfo->static_fields;
  v16->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1393/*"3dModelFlag"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->SCRIPT_KEY_ON_MAP_MODEL, v15, v17, v18);
  v19 = StringLiteral_24595/*"useVoiceSvtIdList"*/;
  v20 = MapMaster_TypeInfo->static_fields;
  v20->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST = (struct System_String_o *)StringLiteral_24595/*"useVoiceSvtIdList"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST, v19, v21, v22);
  v23 = StringLiteral_23696/*"spotScale"*/;
  v24 = MapMaster_TypeInfo->static_fields;
  v24->SPOT_SCALE = (struct System_String_o *)StringLiteral_23696/*"spotScale"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->SPOT_SCALE, v23, v25, v26);
  v27 = StringLiteral_21501/*"mapCameraMoveTimeConstant"*/;
  v28 = MapMaster_TypeInfo->static_fields;
  v28->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_21501/*"mapCameraMoveTimeConstant"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v28->MAP_CAMERA_MOVE_TIME_CONSTANT, v27, v29, v30);
  v31 = StringLiteral_21500/*"mapCameraMoveTimeCoefficient"*/;
  v32 = MapMaster_TypeInfo->static_fields;
  v32->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_21500/*"mapCameraMoveTimeCoefficient"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v32->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v31, v33, v34);
  v35 = MapMaster_TypeInfo->static_fields;
  v36 = StringLiteral_21502/*"mapCameraMoveTimeLogarithmBase"*/;
  v35->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_21502/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v35->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE, v36, v37, v38);
  v39 = MapMaster_TypeInfo->static_fields;
  v40 = StringLiteral_21499/*"mapCameraMoveEasingType"*/;
  v39->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_21499/*"mapCameraMoveEasingType"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v39->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v40, v41, v42);
  v43 = MapMaster_TypeInfo->static_fields;
  v44 = StringLiteral_17717/*"camera2DResetDuration"*/;
  v43->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17717/*"camera2DResetDuration"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v43->CAMERA2D_RESET_DURATION, v44, v45, v46);
}


void MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB67C0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
    byte_4CB67C0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    201,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB67BE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
    byte_4CB67BE = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (MapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          PK,
                          (const MethodInfo_33FDB94 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


MapEntity_array *MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4CB67C2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_MapEntity__TypeInfo);
    byte_4CB67C2 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
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
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list->fields.items) == mapId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_MapEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v6;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C6BC60(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
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

  if ( (byte_4CB67BF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    byte_4CB67BF = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


MapEntity_array *MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4CB67C1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_MapEntity__TypeInfo);
    byte_4CB67C1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list->fields.items) == war_id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_MapEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v6;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v9, v10);
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
    sub_1C6BC60(list, v6);
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}