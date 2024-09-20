void __fastcall MapMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct MapMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct MapMaster_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct MapMaster_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct MapMaster_StaticFields *v16; // x0
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
  struct MapMaster_StaticFields *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  struct MapMaster_StaticFields *v39; // x0
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_4A5B4D6 & 1) == 0 )
  {
    sub_1B885B0(&MapMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_19440/*"firstEffectTime"*/);
    sub_1B885B0(&StringLiteral_22829/*"referrerMapId"*/);
    sub_1B885B0(&StringLiteral_17708/*"camera2DResetDuration"*/);
    sub_1B885B0(&StringLiteral_21264/*"mapCameraMoveEasingType"*/);
    sub_1B885B0(&StringLiteral_21267/*"mapCameraMoveTimeLogarithmBase"*/);
    sub_1B885B0(&StringLiteral_23430/*"spotScale"*/);
    sub_1B885B0(&StringLiteral_22395/*"overwriteMapAssetId"*/);
    sub_1B885B0(&StringLiteral_1490/*"3dModelFlag"*/);
    sub_1B885B0(&StringLiteral_21265/*"mapCameraMoveTimeCoefficient"*/);
    sub_1B885B0(&StringLiteral_19441/*"firstEffectType"*/);
    sub_1B885B0(&StringLiteral_21266/*"mapCameraMoveTimeConstant"*/);
    byte_4A5B4D6 = 1;
  }
  MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_19441/*"firstEffectType"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)MapMaster_TypeInfo->static_fields, StringLiteral_19441/*"firstEffectType"*/, v1, v2);
  v3 = StringLiteral_19440/*"firstEffectTime"*/;
  static_fields = MapMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_19440/*"firstEffectTime"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SCRIPT_KEY_FADE_TIME, v3, v5, v6);
  v7 = StringLiteral_22829/*"referrerMapId"*/;
  v8 = MapMaster_TypeInfo->static_fields;
  v8->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_22829/*"referrerMapId"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->SCRIPT_KEY_REFERRER_MAP_ID, v7, v9, v10);
  v11 = StringLiteral_22395/*"overwriteMapAssetId"*/;
  v12 = MapMaster_TypeInfo->static_fields;
  v12->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_22395/*"overwriteMapAssetId"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v11, v13, v14);
  v15 = StringLiteral_1490/*"3dModelFlag"*/;
  v16 = MapMaster_TypeInfo->static_fields;
  v16->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1490/*"3dModelFlag"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->SCRIPT_KEY_ON_MAP_MODEL, v15, v17, v18);
  v19 = StringLiteral_23430/*"spotScale"*/;
  v20 = MapMaster_TypeInfo->static_fields;
  v20->SPOT_SCALE = (struct System_String_o *)StringLiteral_23430/*"spotScale"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->SPOT_SCALE, v19, v21, v22);
  v23 = StringLiteral_21266/*"mapCameraMoveTimeConstant"*/;
  v24 = MapMaster_TypeInfo->static_fields;
  v24->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_21266/*"mapCameraMoveTimeConstant"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->MAP_CAMERA_MOVE_TIME_CONSTANT, v23, v25, v26);
  v27 = StringLiteral_21265/*"mapCameraMoveTimeCoefficient"*/;
  v28 = MapMaster_TypeInfo->static_fields;
  v28->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_21265/*"mapCameraMoveTimeCoefficient"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v27, v29, v30);
  v31 = StringLiteral_21267/*"mapCameraMoveTimeLogarithmBase"*/;
  v32 = MapMaster_TypeInfo->static_fields;
  v32->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_21267/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE, v31, v33, v34);
  v35 = MapMaster_TypeInfo->static_fields;
  v36 = StringLiteral_21264/*"mapCameraMoveEasingType"*/;
  v35->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_21264/*"mapCameraMoveEasingType"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v36, v37, v38);
  v39 = MapMaster_TypeInfo->static_fields;
  v40 = StringLiteral_17708/*"camera2DResetDuration"*/;
  v39->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17708/*"camera2DResetDuration"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v39->CAMERA2D_RESET_DURATION, v40, v41, v42);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
    byte_4A5B4D3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    197,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B4D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
    byte_4A5B4D1 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (MapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          PK,
                          (const MethodInfo_311DC8C *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


MapEntity_array *__fastcall MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B4D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MapEntity__TypeInfo);
    sub_1B885B0(&MapEntity_TypeInfo);
    byte_4A5B4D5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(MapEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (MapEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == MapEntity_TypeInfo
          && LODWORD(list->fields.items) == mapId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_MapEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
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

  if ( (byte_4A5B4D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
    byte_4A5B4D2 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


MapEntity_array *__fastcall MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B4D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MapEntity__TypeInfo);
    sub_1B885B0(&MapEntity_TypeInfo);
    byte_4A5B4D4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(MapEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (MapEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == MapEntity_TypeInfo
        && HIDWORD(list->fields.items) == war_id )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_MapEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}