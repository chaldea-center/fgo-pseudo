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
  int32_t v15; // w1
  struct MapMaster_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct MapMaster_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct MapMaster_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct MapMaster_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  struct MapMaster_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  struct MapMaster_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  struct MapMaster_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  struct MapMaster_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct MapMaster_StaticFields *v47; // x0
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  struct MapMaster_StaticFields *v51; // x0
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3

  if ( (byte_4A2E2B6 & 1) == 0 )
  {
    sub_1B761C0(&MapMaster_TypeInfo, v1);
    sub_1B761C0(&StringLiteral_19434/*"firstEffectTime"*/, v4);
    sub_1B761C0(&StringLiteral_22819/*"referrerMapId"*/, v5);
    sub_1B761C0(&StringLiteral_17702/*"camera2DResetDuration"*/, v6);
    sub_1B761C0(&StringLiteral_21257/*"mapCameraMoveEasingType"*/, v7);
    sub_1B761C0(&StringLiteral_21260/*"mapCameraMoveTimeLogarithmBase"*/, v8);
    sub_1B761C0(&StringLiteral_23418/*"spotScale"*/, v9);
    sub_1B761C0(&StringLiteral_22386/*"overwriteMapAssetId"*/, v10);
    sub_1B761C0(&StringLiteral_1490/*"3dModelFlag"*/, v11);
    sub_1B761C0(&StringLiteral_21258/*"mapCameraMoveTimeCoefficient"*/, v12);
    sub_1B761C0(&StringLiteral_19435/*"firstEffectType"*/, v13);
    sub_1B761C0(&StringLiteral_21259/*"mapCameraMoveTimeConstant"*/, v14);
    byte_4A2E2B6 = 1;
  }
  MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_19435/*"firstEffectType"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)MapMaster_TypeInfo->static_fields, StringLiteral_19435/*"firstEffectType"*/, v2, v3);
  v15 = StringLiteral_19434/*"firstEffectTime"*/;
  static_fields = MapMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_19434/*"firstEffectTime"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->SCRIPT_KEY_FADE_TIME, v15, v17, v18);
  v19 = StringLiteral_22819/*"referrerMapId"*/;
  v20 = MapMaster_TypeInfo->static_fields;
  v20->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_22819/*"referrerMapId"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v20->SCRIPT_KEY_REFERRER_MAP_ID, v19, v21, v22);
  v23 = StringLiteral_22386/*"overwriteMapAssetId"*/;
  v24 = MapMaster_TypeInfo->static_fields;
  v24->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_22386/*"overwriteMapAssetId"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v24->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v23, v25, v26);
  v27 = StringLiteral_1490/*"3dModelFlag"*/;
  v28 = MapMaster_TypeInfo->static_fields;
  v28->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1490/*"3dModelFlag"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v28->SCRIPT_KEY_ON_MAP_MODEL, v27, v29, v30);
  v31 = StringLiteral_23418/*"spotScale"*/;
  v32 = MapMaster_TypeInfo->static_fields;
  v32->SPOT_SCALE = (struct System_String_o *)StringLiteral_23418/*"spotScale"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v32->SPOT_SCALE, v31, v33, v34);
  v35 = StringLiteral_21259/*"mapCameraMoveTimeConstant"*/;
  v36 = MapMaster_TypeInfo->static_fields;
  v36->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_21259/*"mapCameraMoveTimeConstant"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v36->MAP_CAMERA_MOVE_TIME_CONSTANT, v35, v37, v38);
  v39 = StringLiteral_21258/*"mapCameraMoveTimeCoefficient"*/;
  v40 = MapMaster_TypeInfo->static_fields;
  v40->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_21258/*"mapCameraMoveTimeCoefficient"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v40->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v39, v41, v42);
  v43 = StringLiteral_21260/*"mapCameraMoveTimeLogarithmBase"*/;
  v44 = MapMaster_TypeInfo->static_fields;
  v44->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_21260/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v44->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE, v43, v45, v46);
  v47 = MapMaster_TypeInfo->static_fields;
  v48 = StringLiteral_21257/*"mapCameraMoveEasingType"*/;
  v47->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_21257/*"mapCameraMoveEasingType"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v47->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v48, v49, v50);
  v51 = MapMaster_TypeInfo->static_fields;
  v52 = StringLiteral_17702/*"camera2DResetDuration"*/;
  v51->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17702/*"camera2DResetDuration"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v51->CAMERA2D_RESET_DURATION, v52, v53, v54);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E2B3 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__, method);
    byte_4A2E2B3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    197,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A2E2B1 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4A2E2B1 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (MapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          PK,
                          (const MethodInfo_30FFAD8 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
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

  if ( (byte_4A2E2B5 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    sub_1B761C0(&MapEntity_TypeInfo, v10);
    byte_4A2E2B5 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B7641C(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v11,
                              (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
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

  if ( (byte_4A2E2B2 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, entity);
    byte_4A2E2B2 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
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

  if ( (byte_4A2E2B4 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&war_id);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    sub_1B761C0(&MapEntity_TypeInfo, v10);
    byte_4A2E2B4 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
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
    sub_1B7641C(list, v12);
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v11,
                              (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}