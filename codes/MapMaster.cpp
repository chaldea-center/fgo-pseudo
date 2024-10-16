void __fastcall MapMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v19; // w3
  int32_t v20; // w1
  struct MapMaster_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct MapMaster_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  struct MapMaster_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  struct MapMaster_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  struct MapMaster_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  struct MapMaster_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w1
  struct MapMaster_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct MapMaster_StaticFields *v48; // x0
  int32_t v49; // w1
  int32_t v50; // w2
  int32_t v51; // w3
  struct MapMaster_StaticFields *v52; // x0
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  struct MapMaster_StaticFields *v56; // x0
  int32_t v57; // w1
  int32_t v58; // w2
  int32_t v59; // w3

  if ( (byte_4AB60CC & 1) == 0 )
  {
    sub_1BAB41C(&MapMaster_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_19470/*"firstEffectTime"*/, v4);
    sub_1BAB41C(&StringLiteral_22867/*"referrerMapId"*/, v5);
    sub_1BAB41C(&StringLiteral_17739/*"camera2DResetDuration"*/, v6);
    sub_1BAB41C(&StringLiteral_21297/*"mapCameraMoveEasingType"*/, v7);
    sub_1BAB41C(&StringLiteral_21300/*"mapCameraMoveTimeLogarithmBase"*/, v8);
    sub_1BAB41C(&StringLiteral_23469/*"spotScale"*/, v9);
    sub_1BAB41C(&StringLiteral_22432/*"overwriteMapAssetId"*/, v10);
    sub_1BAB41C(&StringLiteral_24406/*"useVoiceSvtIdList"*/, v11);
    sub_1BAB41C(&StringLiteral_1487/*"3dModelFlag"*/, v12);
    sub_1BAB41C(&StringLiteral_21298/*"mapCameraMoveTimeCoefficient"*/, v13);
    sub_1BAB41C(&StringLiteral_19471/*"firstEffectType"*/, v14);
    sub_1BAB41C(&StringLiteral_21299/*"mapCameraMoveTimeConstant"*/, v15);
    byte_4AB60CC = 1;
  }
  MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_19471/*"firstEffectType"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)MapMaster_TypeInfo->static_fields, StringLiteral_19471/*"firstEffectType"*/, v2, v3);
  v16 = StringLiteral_19470/*"firstEffectTime"*/;
  static_fields = MapMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_19470/*"firstEffectTime"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->SCRIPT_KEY_FADE_TIME, v16, v18, v19);
  v20 = StringLiteral_22867/*"referrerMapId"*/;
  v21 = MapMaster_TypeInfo->static_fields;
  v21->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_22867/*"referrerMapId"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->SCRIPT_KEY_REFERRER_MAP_ID, v20, v22, v23);
  v24 = StringLiteral_22432/*"overwriteMapAssetId"*/;
  v25 = MapMaster_TypeInfo->static_fields;
  v25->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_22432/*"overwriteMapAssetId"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v25->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v24, v26, v27);
  v28 = StringLiteral_1487/*"3dModelFlag"*/;
  v29 = MapMaster_TypeInfo->static_fields;
  v29->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1487/*"3dModelFlag"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v29->SCRIPT_KEY_ON_MAP_MODEL, v28, v30, v31);
  v32 = StringLiteral_24406/*"useVoiceSvtIdList"*/;
  v33 = MapMaster_TypeInfo->static_fields;
  v33->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST = (struct System_String_o *)StringLiteral_24406/*"useVoiceSvtIdList"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v33->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST, v32, v34, v35);
  v36 = StringLiteral_23469/*"spotScale"*/;
  v37 = MapMaster_TypeInfo->static_fields;
  v37->SPOT_SCALE = (struct System_String_o *)StringLiteral_23469/*"spotScale"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v37->SPOT_SCALE, v36, v38, v39);
  v40 = StringLiteral_21299/*"mapCameraMoveTimeConstant"*/;
  v41 = MapMaster_TypeInfo->static_fields;
  v41->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_21299/*"mapCameraMoveTimeConstant"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v41->MAP_CAMERA_MOVE_TIME_CONSTANT, v40, v42, v43);
  v44 = StringLiteral_21298/*"mapCameraMoveTimeCoefficient"*/;
  v45 = MapMaster_TypeInfo->static_fields;
  v45->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_21298/*"mapCameraMoveTimeCoefficient"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v45->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v44, v46, v47);
  v48 = MapMaster_TypeInfo->static_fields;
  v49 = StringLiteral_21300/*"mapCameraMoveTimeLogarithmBase"*/;
  v48->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_21300/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v48->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE, v49, v50, v51);
  v52 = MapMaster_TypeInfo->static_fields;
  v53 = StringLiteral_21297/*"mapCameraMoveEasingType"*/;
  v52->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_21297/*"mapCameraMoveEasingType"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v52->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v53, v54, v55);
  v56 = MapMaster_TypeInfo->static_fields;
  v57 = StringLiteral_17739/*"camera2DResetDuration"*/;
  v56->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17739/*"camera2DResetDuration"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v56->CAMERA2D_RESET_DURATION, v57, v58, v59);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB60C9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__, method);
    byte_4AB60C9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    197,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB60C7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4AB60C7 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (MapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          PK,
                          (const MethodInfo_31640E8 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
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
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4AB60CB & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    sub_1BAB41C(&MapEntity_TypeInfo, v10);
    byte_4AB60CB = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(MapEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (MapEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == MapEntity_TypeInfo
          && LODWORD(list->fields.items) == mapId )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_MapEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BAB678(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v11,
                              (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapMaster__TryGetEntity(
        MapMaster_o *this,
        MapEntity_o **entity,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB60C8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, entity);
    byte_4AB60C8 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4AB60CA & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&war_id);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    sub_1BAB41C(&MapEntity_TypeInfo, v10);
    byte_4AB60CA = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(MapEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (MapEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == MapEntity_TypeInfo
        && HIDWORD(list->fields.items) == war_id )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_MapEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1BAB678(list, v12);
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v11,
                              (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}