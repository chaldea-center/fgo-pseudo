void MapModelManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C5389F & 1) == 0 )
  {
    sub_1C3E564(&MapModelManager_TypeInfo);
    byte_4C5389F = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5389E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ModelLineComponent__TypeInfo);
    byte_4C5389E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ModelLineComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.lineList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapModelManager__CreateModelLineBySpotId(
        MapModelManager_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        UnityEngine_GameObject_o *linePrefab,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x23
  int32_t MasterName_k__BackingField_high; // w25
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x24
  Il2CppObject *Entity; // x21
  Il2CppObject *v13; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v18; // x8
  float v19; // s13
  float v20; // s14
  float w; // s11
  float v22; // s12
  Il2CppObject *v23; // x22
  Il2CppObject *Component_object; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v30; // x8
  const MethodInfo *v31; // x6
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v34; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C53892 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ModelLineComponent__Add__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78273040);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53892 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)linePrefab, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SpotMaster___);
    if ( spotRoadInfo )
    {
      v9 = Master_object;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotRoadInfo__GetMine(spotRoadInfo, v8);
      if ( Master_object )
      {
        if ( v9 )
        {
          MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
          v11 = Master_object;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Master_object->fields._MasterName_k__BackingField,
                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v13 = DataMasterBase_object__object__int___GetEntity(
                  v9,
                  MasterName_k__BackingField_high,
                  (const MethodInfo_33B2F58 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          if ( !byte_4C506A1 )
          {
            sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
            byte_4C506A1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          x = static_fields->zeroVector.fields.x;
          y = static_fields->zeroVector.fields.y;
          z = static_fields->zeroVector.fields.z;
          if ( !byte_4C506A7 )
          {
            sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
            byte_4C506A7 = 1;
          }
          v18 = UnityEngine_Quaternion_TypeInfo->static_fields;
          v20 = v18->identityQuaternion.fields.x;
          v19 = v18->identityQuaternion.fields.y;
          v22 = v18->identityQuaternion.fields.z;
          w = v18->identityQuaternion.fields.w;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v33.fields.x = x;
          v33.fields.y = y;
          v33.fields.z = z;
          v34.fields.x = v20;
          v34.fields.y = v19;
          v34.fields.z = v22;
          v34.fields.w = w;
          v23 = UnityEngine_Object__Instantiate_object__51929360(
                  (Il2CppObject *)linePrefab,
                  v33,
                  v34,
                  (const MethodInfo_3186110 *)Method_UnityEngine_Object_Instantiate_GameObject____78273040);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)srcLineSprite__GetGobjName(
                                                                          v11->fields._MasterKind_k__BackingField,
                                                                          0);
          if ( v23 )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v23, (System_String_o *)Master_object, 0);
            GameObjectExtensions__SafeSetParent_36182084(
              (UnityEngine_GameObject_o *)v23,
              this->fields._RoadRoot_k__BackingField,
              0);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v23,
                                 (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
              return;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.lineList;
            if ( Master_object )
            {
              v27 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
              v28 = Method_System_Collections_Generic_List_ModelLineComponent__Add__;
              ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
              if ( v27 )
              {
                MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
                if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v27 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Master_object,
                    Component_object,
                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                }
                else
                {
                  v30 = v27 + 8 * MasterName_k__BackingField_low;
                  LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                  *(_QWORD *)(v30 + 32) = Component_object;
                  sub_1C3E508((CGThumbnailListItem_o *)(v30 + 32), (int32_t)Component_object, v25, v26);
                }
                TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
                if ( TerminalMap_k__BackingField )
                {
                  if ( Component_object )
                  {
                    ModelLineComponent__Setup(
                      (ModelLineComponent_o *)Component_object,
                      spotRoadInfo,
                      (SpotEntity_o *)Entity,
                      (SpotEntity_o *)v13,
                      this->fields._SpotModelCamera_k__BackingField,
                      TerminalMap_k__BackingField->fields.currentMapLayerId,
                      v31);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C3E7C0(Master_object, v8);
  }
}


int32_t MapModelManager__GetLayerBySpotPrefab(
        MapModelManager_o *this,
        SrcSpotBasePrefab_o *spotPrefab,
        const MethodInfo *method)
{
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v5; // x1
  MapModelManager_c *v6; // x0
  int32_t Layer; // w0
  MapModelManager_c *v9; // x8
  int32_t v10; // w19
  int32_t LAYER_LOWER_ID; // w8

  if ( (byte_4C53899 & 1) == 0 )
  {
    sub_1C3E564(&MapModelManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53899 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)spotPrefab, 0, 0);
  if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
  {
    v6 = MapModelManager_TypeInfo;
    if ( !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v6 = MapModelManager_TypeInfo;
    }
    return v6->static_fields->LAYER_LOWER_ID;
  }
  else
  {
    if ( !spotPrefab || (mMapCtrl_SpotInfo = spotPrefab->fields.mMapCtrl_SpotInfo) == 0 )
      sub_1C3E7C0(mMapCtrl_SpotInfo, v5);
    Layer = MapControl_SpotInfo__GetLayer(mMapCtrl_SpotInfo, v5);
    v9 = MapModelManager_TypeInfo;
    v10 = Layer;
    if ( !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v9 = MapModelManager_TypeInfo;
    }
    LAYER_LOWER_ID = v9->static_fields->LAYER_LOWER_ID;
    if ( v10 <= LAYER_LOWER_ID )
      return LAYER_LOWER_ID;
    else
      return v10;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o MapModelManager__GetLocationPostion(
        MapModelManager_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  MapModelComponent_o *v12; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C53898 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53898 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mapModelComponent, 0, 0) )
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v12 = this->fields.mapModelComponent;
    if ( !v12 )
      sub_1C3E7C0(0, v6);
    *(UnityEngine_Vector3_o *)&x = MapModelComponent__GetCameraLocationPosition(v12, layer, v7);
  }
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_GameObject_o *MapModelManager__GetMapGimmickRootObject(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  __int64 v4; // x1
  bool v5; // w8
  UnityEngine_GameObject_o *result; // x0
  struct MapModelComponent_o *v7; // x8

  if ( (byte_4C5389A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5389A = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(mapModelComponent, 0, 0);
  result = 0;
  if ( !v5 )
  {
    v7 = this->fields.mapModelComponent;
    if ( !v7 )
      sub_1C3E7C0(0, v4);
    return v7->fields.mapModelGimmickRoot;
  }
  return result;
}


void MapModelManager__LoadMapModel(
        MapModelManager_o *this,
        int32_t assetId,
        int32_t mapId,
        System_Action_o *endFunc,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o **v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  const MethodInfo *v33; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v35; // x22
  const MethodInfo *v36; // x1
  AssetLoader_LoadEndDataHandler_o *v37; // x19
  int32_t v38; // [xsp+8h] [xbp-38h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C53891 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__);
    sub_1C3E564(&MapModelManager___c__DisplayClass41_0_TypeInfo);
    sub_1C3E564(&StringLiteral_13700/*"Terminal/MapModels/{0:D4}_{1}"*/);
    byte_4C53891 = 1;
  }
  v9 = sub_1C3E7B0(MapModelManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = endFunc;
  v14 = (System_Action_o **)(v9 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)endFunc, v15, v16);
  if ( MapModelManager__get_IsMapModel(this, v17) )
  {
    v39 = assetId;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v18, v19, v20, v21, v22, v23);
    v38 = mapId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v25, v26, v27, v28, v29, v30);
    v32 = System_String__Format_63677760((System_String_o *)StringLiteral_13700/*"Terminal/MapModels/{0:D4}_{1}"*/, v24, v31, 0);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v35 = v32;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v32, 0) )
    {
      goto LABEL_10;
    }
    MapModelManager__ReleaseMapModelObject(this, v33);
    MapModelManager__ReleaseLineList(this, v36);
    v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v37,
      (Il2CppObject *)v9,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(v35, v37, 1, 0) )
LABEL_10:
      ActionExtensions__Call(*v14, 0);
  }
  else
  {
    ActionExtensions__Call(*v14, 0);
  }
}


void MapModelManager__MoveMapModelCamera(
        MapModelManager_o *this,
        int32_t targetLayer,
        UnityEngine_Vector3_o startedPos,
        UnityEngine_Vector3_o endedPos,
        float duration,
        int32_t easingType,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s12
  float v14; // s11
  float v15; // s13
  float v16; // s14
  __int64 v18; // x22
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x21

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v14 = startedPos.fields.z;
  v15 = startedPos.fields.y;
  v16 = startedPos.fields.x;
  if ( (byte_4C53894 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__);
    sub_1C3E564(&MapModelManager___c__DisplayClass45_0_TypeInfo);
    byte_4C53894 = 1;
  }
  v18 = sub_1C3E7B0(MapModelManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(float *)(v18 + 24) = v16;
  *(float *)(v18 + 28) = v15;
  *(float *)(v18 + 32) = v14;
  *(float *)(v18 + 36) = x;
  *(float *)(v18 + 40) = y;
  *(float *)(v18 + 44) = z;
  if ( duration <= 0.0
    || (float)((float)((float)(v14 - z) * (float)(v14 - z))
             + (float)((float)((float)(v16 - x) * (float)(v16 - x)) + (float)((float)(v15 - y) * (float)(v15 - y)))) < 1.0e-10 )
  {
    goto LABEL_9;
  }
  MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(MapModelCamera_k__BackingField, 0, 0) )
  {
LABEL_9:
    ActionExtensions__Call(endAction, 0);
    return;
  }
  v19 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !v19
    || (gameObject = UnityEngine_Component__get_gameObject(v19, 0),
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             gameObject,
                             (const MethodInfo_3152BB4 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v18 + 48) = Component_object,
        sub_1C3E508((CGThumbnailListItem_o *)(v18 + 48), (int32_t)Component_object, v26, v27),
        v28 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(
          v28,
          (Il2CppObject *)v18,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0),
        (v19 = *(UnityEngine_Component_o **)(v18 + 48)) == 0) )
  {
LABEL_13:
    sub_1C3E7C0(v19, v20);
  }
  EasingObject__Play((EasingObject_o *)v19, duration, v28, endAction, 0.0, easingType, 0);
}


void MapModelManager__PlayAnimation(
        MapModelManager_o *this,
        System_String_o *animationName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  MapModelComponent_o *mapModelComponent; // x0

  mapModelComponent = this->fields.mapModelComponent;
  if ( !mapModelComponent )
    sub_1C3E7C0(0, animationName);
  MapModelComponent__PlayAnimation(mapModelComponent, animationName, endAction, method);
}


void MapModelManager__ReleaseAsset(MapModelManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_MapModelAssetData_k__BackingField; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *MapModelAssetData_k__BackingField; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C53895 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C53895 = 1;
  }
  MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
  p_MapModelAssetData_k__BackingField = (CGThumbnailListItem_o *)&this->fields._MapModelAssetData_k__BackingField;
  v4 = MapModelAssetData_k__BackingField;
  if ( MapModelAssetData_k__BackingField )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40580972(v4, 0);
    p_MapModelAssetData_k__BackingField->klass = 0;
    sub_1C3E508(p_MapModelAssetData_k__BackingField, 0, v6, v7);
  }
}


void MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  MapModelManager_o *v2; // x19
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4C53897 & 1) == 0 )
  {
    this = (MapModelManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_ModelLineComponent__Clear__);
    byte_4C53897 = 1;
  }
  lineList = v2->fields.lineList;
  if ( !lineList )
    sub_1C3E7C0(this, method);
  size = lineList->fields._size;
  v5 = lineList->fields._version + 1;
  lineList->fields._size = 0;
  lineList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lineList->fields._items, 0, size, 0);
}


void MapModelManager__ReleaseMapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *MapModelObject_k__BackingField; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C53896 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53896 = 1;
  }
  MapModelObject_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(MapModelObject_k__BackingField, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v4, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MapModelManager__SetMapModelCameraPositionByLayer(
        MapModelManager_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Component_o *MapModelCamera_k__BackingField; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v7; // x2
  UnityEngine_Vector3_o LocationPostion; // 0:s0.4,4:s1.4,8:s2.4

  MapModelCamera_k__BackingField = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !MapModelCamera_k__BackingField )
    sub_1C3E7C0(0, *(_QWORD *)&layer);
  gameObject = UnityEngine_Component__get_gameObject(MapModelCamera_k__BackingField, 0);
  LocationPostion = MapModelManager__GetLocationPostion(this, layer, v7);
  GameObjectExtensions__SetLocalPosition(gameObject, LocationPostion, 0);
}


void MapModelManager__UpdateLineDispAll(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *lineList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C53893 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_ModelLineComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    byte_4C53893 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
         (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
    if ( !lineList )
      sub_1C3E7C0(0, v3);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      lineList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v9,
             (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
      if ( !v5 )
        break;
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_1C3E7C0(v5, v6);
      if ( !v9.fields._current )
        sub_1C3E7C0(0, v6);
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v9.fields._current,
        TerminalMap_k__BackingField->fields.currentMapLayerId,
        v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
  }
}


UnityEngine_GameObject_o *MapModelManager__get_DispRoot(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._DispRoot_k__BackingField;
}


bool MapModelManager__get_IsMapCamera2DReset(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct MapModelComponent_o *v6; // x8

  if ( (byte_4C5389B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5389B = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0, 0);
  if ( !v4 )
    return 1;
  v6 = this->fields.mapModelComponent;
  if ( !v6 )
    sub_1C3E7C0(v4, v5);
  return v6->fields.isMapCamera2DReset;
}


bool MapModelManager__get_IsMapModel(MapModelManager_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  MapControl_MapInfo_o *mMapInfo; // x0

  TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
  if ( !TerminalMap_k__BackingField )
    goto LABEL_6;
  mMapInfo = TerminalMap_k__BackingField->fields.mMapInfo;
  if ( !mMapInfo )
    return (char)mMapInfo;
  this = (MapModelManager_o *)MapControl_MapInfo__GetMine(mMapInfo, method);
  if ( !this )
LABEL_6:
    sub_1C3E7C0(this, method);
  LOBYTE(mMapInfo) = MapEntity__IsMapModel((MapEntity_o *)this, 0);
  return (char)mMapInfo;
}


UnityEngine_Vector3_o MapModelManager__get_MapCamera2DResetPosition(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct MapModelComponent_o *v6; // x10
  struct UnityEngine_Vector3_StaticFields *p_mapCamera2DResetPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  float v10; // s2
  float v11; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5389C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5389C = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.mapModelComponent;
    if ( !v6 )
      sub_1C3E7C0(v4, v5);
    p_mapCamera2DResetPosition = (struct UnityEngine_Vector3_StaticFields *)&v6->fields.mapCamera2DResetPosition;
    p_y = &v6->fields.mapCamera2DResetPosition.fields.y;
    p_z = &v6->fields.mapCamera2DResetPosition.fields.z;
  }
  else
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    p_mapCamera2DResetPosition = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &p_mapCamera2DResetPosition->zeroVector.fields.y;
    p_z = &p_mapCamera2DResetPosition->zeroVector.fields.z;
  }
  v10 = *p_z;
  v11 = *p_y;
  x = p_mapCamera2DResetPosition->zeroVector.fields.x;
  result.fields.z = v10;
  result.fields.y = v11;
  result.fields.x = x;
  return result;
}


float MapModelManager__get_MapCamera2DResetSize(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct MapModelComponent_o *v7; // x8

  if ( (byte_4C5389D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5389D = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0, 0);
  result = 1.0;
  if ( v4 )
  {
    v7 = this->fields.mapModelComponent;
    if ( !v7 )
      sub_1C3E7C0(v4, v5);
    return v7->fields.mapCamera2DResetSize;
  }
  return result;
}


AssetData_o *MapModelManager__get_MapModelAssetData(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._MapModelAssetData_k__BackingField;
}


MapModelCamera_o *MapModelManager__get_MapModelCamera(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._MapModelCamera_k__BackingField;
}


UnityEngine_GameObject_o *MapModelManager__get_MapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._MapModelObject_k__BackingField;
}


UnityEngine_GameObject_o *MapModelManager__get_MapModelScreen(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._MapModelScreen_k__BackingField;
}


UnityEngine_GameObject_o *MapModelManager__get_RoadRoot(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._RoadRoot_k__BackingField;
}


MapModelCamera_o *MapModelManager__get_SpotModelCamera(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._SpotModelCamera_k__BackingField;
}


UnityEngine_GameObject_o *MapModelManager__get_SpotModelScreen(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._SpotModelScreen_k__BackingField;
}


ScrTerminalMap_o *MapModelManager__get_TerminalMap(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._TerminalMap_k__BackingField;
}


void MapModelManager__set_DispRoot(MapModelManager_o *this, UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DispRoot_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._DispRoot_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MapModelManager__set_MapModelAssetData(MapModelManager_o *this, AssetData_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MapModelAssetData_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._MapModelAssetData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void MapModelManager__set_MapModelCamera(MapModelManager_o *this, MapModelCamera_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MapModelCamera_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._MapModelCamera_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void MapModelManager__set_MapModelObject(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MapModelObject_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._MapModelObject_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void MapModelManager__set_MapModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MapModelScreen_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._MapModelScreen_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void MapModelManager__set_RoadRoot(MapModelManager_o *this, UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._RoadRoot_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._RoadRoot_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MapModelManager__set_SpotModelCamera(MapModelManager_o *this, MapModelCamera_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SpotModelCamera_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._SpotModelCamera_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void MapModelManager__set_SpotModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SpotModelScreen_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._SpotModelScreen_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void MapModelManager__set_TerminalMap(MapModelManager_o *this, ScrTerminalMap_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TerminalMap_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void MapModelManager___c__DisplayClass41_0___ctor(
        MapModelManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapModelManager___c__DisplayClass41_0___LoadMapModel_b__0(
        MapModelManager___c__DisplayClass41_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  void *_4__this; // x0
  struct MapModelManager_o *v7; // x8
  Il2CppObject *Object_object__51228128; // x0
  struct MapModelManager_o *v9; // x20
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct MapModelManager_o *v13; // x8
  struct MapModelManager_o *v14; // x8
  struct MapModelManager_o *v15; // x8
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  ScrTerminalMap_c *v17; // x0
  int32_t v18; // w21
  struct MapModelManager_o *v19; // x20
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct MapModelManager_o *v23; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  struct MapModelManager_o *v28; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct MapModelManager_o *v32; // x8
  const MethodInfo *v33; // x2
  struct MapModelManager_o *v34; // x8
  __int64 v35; // x8
  __int64 v36; // x1
  struct MapModelManager_o *v37; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  const MethodInfo *v39; // x2
  struct MapModelManager_o *v40; // x8
  MapModelManager_o *v41; // x20

  if ( (byte_4C538A0 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
    sub_1C3E564(&MapModelManager_TypeInfo);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ScrTerminalMap_TypeInfo);
    sub_1C3E564(&StringLiteral_17159/*"bg_map"*/);
    byte_4C538A0 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  *((_QWORD *)_4__this + 3) = assetData;
  sub_1C3E508((CGThumbnailListItem_o *)((char *)_4__this + 24), (int32_t)assetData, (int32_t)method, v3);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_46;
  _4__this = v7->fields._MapModelAssetData_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              (AssetData_o *)_4__this,
                              (System_String_o *)StringLiteral_17159/*"bg_map"*/,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  v9 = this->fields.__4__this;
  v10 = Object_object__51228128;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = UnityEngine_Object__Instantiate_object_(
               v10,
               (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v9 )
    goto LABEL_46;
  v9->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)_4__this;
  sub_1C3E508((CGThumbnailListItem_o *)&v9->fields._MapModelObject_k__BackingField, (int32_t)_4__this, v11, v12);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_46;
  GameObjectExtensions__SetParent_36182008(
    v13->fields._MapModelObject_k__BackingField,
    v13->fields._DispRoot_k__BackingField,
    0);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_46;
  GameObjectExtensions__ResetTransform(v14->fields._MapModelObject_k__BackingField, 0);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_46;
  MapModelObject_k__BackingField = v15->fields._MapModelObject_k__BackingField;
  v17 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v17 = ScrTerminalMap_TypeInfo;
  }
  v18 = UnityEngine_LayerMask__NameToLayer(v17->static_fields->MAP_DISP_LAYER_MODEL, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v18, 0);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_46;
  _4__this = v19->fields._MapModelObject_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  v19->fields.mapModelComponent = (struct MapModelComponent_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->fields.mapModelComponent, (int32_t)Component_object, v21, v22);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_46;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23->fields.mapModelComponent, 0, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      v26 = *((_QWORD *)_4__this + 11);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 32);
        *((_QWORD *)_4__this + 5) = v27;
        sub_1C3E508((CGThumbnailListItem_o *)((char *)_4__this + 40), v27, v24, v25);
        v28 = this->fields.__4__this;
        if ( v28 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v28->fields._MapModelCamera_k__BackingField;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          _4__this = (void *)UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0, 0);
          if ( ((unsigned __int8)_4__this & 1) != 0 )
          {
            v32 = this->fields.__4__this;
            if ( !v32 )
              goto LABEL_46;
            _4__this = v32->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
            if ( !_4__this )
              goto LABEL_46;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0);
            v34 = this->fields.__4__this;
            if ( !v34 )
              goto LABEL_46;
            _4__this = v34->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            MapModelCamera__Setup((MapModelCamera_o *)_4__this, v34->fields._MapModelScreen_k__BackingField, v33);
          }
          _4__this = this->fields.__4__this;
          if ( _4__this )
          {
            v35 = *((_QWORD *)_4__this + 11);
            if ( v35 )
            {
              v36 = *(_QWORD *)(v35 + 40);
              *((_QWORD *)_4__this + 6) = v36;
              sub_1C3E508((CGThumbnailListItem_o *)((char *)_4__this + 48), v36, v30, v31);
              v37 = this->fields.__4__this;
              if ( v37 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v37->fields._SpotModelCamera_k__BackingField;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                _4__this = (void *)UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0, 0);
                if ( ((unsigned __int8)_4__this & 1) != 0 )
                {
                  v40 = this->fields.__4__this;
                  if ( !v40 )
                    goto LABEL_46;
                  _4__this = v40->fields._SpotModelCamera_k__BackingField;
                  if ( !_4__this )
                    goto LABEL_46;
                  MapModelCamera__Setup((MapModelCamera_o *)_4__this, v40->fields._SpotModelScreen_k__BackingField, v39);
                }
                v41 = this->fields.__4__this;
                _4__this = MapModelManager_TypeInfo;
                if ( !MapModelManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
                if ( v41 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v41,
                    MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID,
                    v39);
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1C3E7C0(_4__this, assetData);
  }
LABEL_45:
  ActionExtensions__Call(this->fields.endFunc, 0);
}


void MapModelManager___c__DisplayClass45_0___ctor(
        MapModelManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapModelManager___c__DisplayClass45_0___MoveMapModelCamera_b__0(
        MapModelManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  struct MapModelManager_o *_4__this; // x8
  MapModelManager___c__DisplayClass45_0_o *v3; // x20
  struct EasingObject_o *easingObject; // x8
  MapModelManager___c__DisplayClass45_0_o *v5; // x19
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (MapModelManager___c__DisplayClass45_0_o *)_4__this->fields._MapModelCamera_k__BackingField) == 0)
    || (this = (MapModelManager___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0),
        (easingObject = v3->fields.easingObject) == 0) )
  {
    sub_1C3E7C0(this, method);
  }
  v5 = this;
  v6 = Easing__Func(v3->fields.startedPos, v3->fields.endedPos, easingObject->fields.mNow, 0, 0);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v5, v6, 0);
}