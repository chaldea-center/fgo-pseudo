void MapModelManager___cctor(const MethodInfo *method)
{
  if ( (byte_596D12E & 1) == 0 )
  {
    sub_2213A60(&MapModelManager_TypeInfo);
    byte_596D12E = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596D12D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ModelLineComponent__TypeInfo);
    byte_596D12D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ModelLineComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.lineList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapModelManager__CreateModelLineBySpotId(
        MapModelManager_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        UnityEngine_GameObject_o *linePrefab,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x24
  int32_t MasterName_k__BackingField_high; // w25
  Il2CppObject *Entity; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Quaternion_StaticFields *v22; // x8
  float v23; // s11
  float v24; // s12
  float v25; // s13
  float w; // s14
  Il2CppObject *v27; // x22
  Il2CppObject *Component_object; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v38; // x8
  const MethodInfo *v39; // x6
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v42; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_596D121 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SpotMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_ModelLineComponent__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801600);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D121 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spotRoadInfo, linePrefab);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)linePrefab, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotMaster___);
    if ( spotRoadInfo )
    {
      v11 = Master_object;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotRoadInfo__GetMine(spotRoadInfo, v10);
      if ( Master_object )
      {
        if ( v11 )
        {
          v12 = Master_object;
          MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Master_object->fields._MasterName_k__BackingField,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v17 = DataMasterBase_object__object__int___GetEntity(
                  v11,
                  MasterName_k__BackingField_high,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          if ( !byte_5969AE0 )
          {
            sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          x = static_fields->zeroVector.fields.x;
          y = static_fields->zeroVector.fields.y;
          z = static_fields->zeroVector.fields.z;
          if ( !byte_5969AE6 )
          {
            sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
            byte_5969AE6 = 1;
          }
          v22 = UnityEngine_Quaternion_TypeInfo->static_fields;
          v23 = v22->identityQuaternion.fields.x;
          v24 = v22->identityQuaternion.fields.y;
          v25 = v22->identityQuaternion.fields.z;
          w = v22->identityQuaternion.fields.w;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
          v41.fields.x = x;
          v41.fields.y = y;
          v41.fields.z = z;
          v42.fields.x = v23;
          v42.fields.y = v24;
          v42.fields.z = v25;
          v42.fields.w = w;
          v27 = UnityEngine_Object__Instantiate_object__59717424(
                  (Il2CppObject *)linePrefab,
                  v41,
                  v42,
                  (const MethodInfo_38F3730 *)Method_UnityEngine_Object_Instantiate_GameObject____91801600);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)srcLineSprite__GetGobjName(
                                                                          v12->fields._MasterKind_k__BackingField,
                                                                          0);
          if ( v27 )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v27, (System_String_o *)Master_object, 0);
            GameObjectExtensions__SafeSetParent_42897308(
              (UnityEngine_GameObject_o *)v27,
              this->fields._RoadRoot_k__BackingField,
              0);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v27,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
              return;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.lineList;
            if ( Master_object )
            {
              v35 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
              v36 = Method_System_Collections_Generic_List_ModelLineComponent__Add__;
              ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
              if ( v35 )
              {
                MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
                if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v35 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Master_object,
                    Component_object,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v38 = v35 + 8 * MasterName_k__BackingField_low;
                  LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                  *(_QWORD *)(v38 + 32) = Component_object;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v38 + 32),
                    (int32_t)Component_object,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33,
                    v34);
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
                      (SpotEntity_o *)v17,
                      this->fields._SpotModelCamera_k__BackingField,
                      TerminalMap_k__BackingField->fields.currentMapLayerId,
                      v39);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_2213CDC(Master_object, v10);
  }
}


int32_t MapModelManager__GetLayerBySpotPrefab(
        MapModelManager_o *this,
        SrcSpotBasePrefab_o *spotPrefab,
        const MethodInfo *method)
{
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  MapModelManager_c *v7; // x0
  int32_t Layer; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  MapModelManager_c *v12; // x8
  int32_t v13; // w19
  int32_t LAYER_LOWER_ID; // w8

  if ( (byte_596D128 & 1) == 0 )
  {
    sub_2213A60(&MapModelManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D128 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spotPrefab, method);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)spotPrefab, 0, 0);
  if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
  {
    v7 = MapModelManager_TypeInfo;
    if ( !*(&MapModelManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo, v5, v6);
      v7 = MapModelManager_TypeInfo;
    }
    return v7->static_fields->LAYER_LOWER_ID;
  }
  else
  {
    if ( !spotPrefab || (mMapCtrl_SpotInfo = spotPrefab->fields.mMapCtrl_SpotInfo) == 0 )
      sub_2213CDC(mMapCtrl_SpotInfo, v5);
    Layer = MapControl_SpotInfo__GetLayer(mMapCtrl_SpotInfo, v5);
    v12 = MapModelManager_TypeInfo;
    v13 = Layer;
    if ( !*(&MapModelManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo, v10, v11);
      v12 = MapModelManager_TypeInfo;
    }
    LAYER_LOWER_ID = v12->static_fields->LAYER_LOWER_ID;
    if ( v13 <= LAYER_LOWER_ID )
      return LAYER_LOWER_ID;
    else
      return v13;
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
  MapModelComponent_o *v12; // x0
  UnityEngine_Vector3_o CameraLocationPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D127 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D127 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&layer, method);
  if ( UnityEngine_Object__op_Equality(mapModelComponent, 0, 0) )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    result.fields.x = static_fields->zeroVector.fields.x;
    result.fields.y = static_fields->zeroVector.fields.y;
    result.fields.z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v12 = this->fields.mapModelComponent;
    if ( !v12 )
      sub_2213CDC(0, v6);
    CameraLocationPosition = MapModelComponent__GetCameraLocationPosition(v12, layer, v7);
    result.fields.x = CameraLocationPosition.fields.x;
    result.fields.y = CameraLocationPosition.fields.y;
    result.fields.z = CameraLocationPosition.fields.z;
  }
  return result;
}


UnityEngine_GameObject_o *MapModelManager__GetMapGimmickRootObject(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mapModelComponent; // x20
  __int64 v5; // x1
  bool v6; // w8
  UnityEngine_GameObject_o *result; // x0
  struct MapModelComponent_o *v8; // x8

  if ( (byte_596D129 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D129 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = UnityEngine_Object__op_Equality(mapModelComponent, 0, 0);
  result = 0;
  if ( !v6 )
  {
    v8 = this->fields.mapModelComponent;
    if ( !v8 )
      sub_2213CDC(0, v5);
    return v8->fields.mapModelGimmickRoot;
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Action_o **v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  const MethodInfo *v29; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v31; // x22
  const MethodInfo *v32; // x1
  AssetLoader_LoadEndDataHandler_o *v33; // x19
  __int64 v34; // x1
  __int64 v35; // x2
  int32_t v36; // [xsp+8h] [xbp-38h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596D120 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__);
    sub_2213A60(&MapModelManager___c__DisplayClass41_0_TypeInfo);
    sub_2213A60(&StringLiteral_14260/*"Terminal/MapModels/{0:D4}_{1}"*/);
    byte_596D120 = 1;
  }
  v9 = sub_2213CCC(MapModelManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = endFunc;
  v18 = (System_Action_o **)(v9 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)endFunc, v19, v20, v21, v22, v23, v24);
  if ( MapModelManager__get_IsMapModel(this, v25) )
  {
    v37 = assetId;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37);
    v36 = mapId;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v36);
    v28 = System_String__Format_75697880((System_String_o *)StringLiteral_14260/*"Terminal/MapModels/{0:D4}_{1}"*/, v26, v27, 0);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v31 = v28;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v28, 0) )
    {
      goto LABEL_10;
    }
    MapModelManager__ReleaseMapModelObject(this, v29);
    MapModelManager__ReleaseLineList(this, v32);
    v33 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v33,
      (Il2CppObject *)v9,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v34, v35);
    if ( !AssetManager__loadAssetStorage(v31, v33, 1, 0, 0) )
LABEL_10:
      ActionExtensions__Call(*v18, 0);
  }
  else
  {
    ActionExtensions__Call(*v18, 0);
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
  float v12; // s11
  float v13; // s13
  float v14; // s14
  __int64 v18; // x21
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Action_o *v38; // x22

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v12 = startedPos.fields.z;
  v13 = startedPos.fields.y;
  v14 = startedPos.fields.x;
  if ( (byte_596D123 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__);
    sub_2213A60(&MapModelManager___c__DisplayClass45_0_TypeInfo);
    byte_596D123 = 1;
  }
  v18 = sub_2213CCC(MapModelManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 16), (int32_t)this, v21, v22, v23, v24, v25, v26);
  *(float *)(v18 + 24) = v14;
  *(float *)(v18 + 28) = v13;
  *(float *)(v18 + 32) = v12;
  *(float *)(v18 + 36) = x;
  *(float *)(v18 + 40) = y;
  *(float *)(v18 + 44) = z;
  if ( duration <= 0.0
    || (float)((float)((float)(v12 - z) * (float)(v12 - z))
             + (float)((float)((float)(v14 - x) * (float)(v14 - x)) + (float)((float)(v13 - y) * (float)(v13 - y)))) < 1.0e-10 )
  {
    goto LABEL_9;
  }
  MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
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
                             (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v18 + 48) = Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v18 + 48),
          (int32_t)Component_object,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37),
        v38 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v18,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0),
        (v19 = *(UnityEngine_Component_o **)(v18 + 48)) == 0) )
  {
LABEL_13:
    sub_2213CDC(v19, v20);
  }
  EasingObject__Play((EasingObject_o *)v19, duration, v38, endAction, 0.0, easingType, 0);
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
    sub_2213CDC(0, animationName);
  MapModelComponent__PlayAnimation(mapModelComponent, animationName, endAction, method);
}


void MapModelManager__ReleaseAsset(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_MapModelAssetData_k__BackingField; // x19
  AssetData_o *v5; // x20
  struct AssetData_o *MapModelAssetData_k__BackingField; // t1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596D124 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596D124 = 1;
  }
  MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
  p_MapModelAssetData_k__BackingField = (MissionNaviTransitionBoardItem_o *)&this->fields._MapModelAssetData_k__BackingField;
  v5 = MapModelAssetData_k__BackingField;
  if ( MapModelAssetData_k__BackingField )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAsset_47496972(v5, 0);
    p_MapModelAssetData_k__BackingField->klass = 0;
    sub_2213A04(p_MapModelAssetData_k__BackingField, 0, v7, v8, v9, v10, v11, v12);
  }
}


void MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  MapModelManager_o *v2; // x19
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_596D126 & 1) == 0 )
  {
    this = (MapModelManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ModelLineComponent__Clear__);
    byte_596D126 = 1;
  }
  lineList = v2->fields.lineList;
  if ( !lineList )
    sub_2213CDC(this, method);
  size = lineList->fields._size;
  v5 = lineList->fields._version + 1;
  lineList->fields._size = 0;
  lineList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lineList->fields._items, 0, size, 0);
}


void MapModelManager__ReleaseMapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *MapModelObject_k__BackingField; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x19

  if ( (byte_596D125 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D125 = 1;
  }
  MapModelObject_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(MapModelObject_k__BackingField, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(v7, 0);
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
    sub_2213CDC(0, *(_QWORD *)&layer);
  gameObject = UnityEngine_Component__get_gameObject(MapModelCamera_k__BackingField, 0);
  LocationPostion = MapModelManager__GetLocationPostion(this, layer, v7);
  GameObjectExtensions__SetLocalPosition(gameObject, LocationPostion, 0);
}


void MapModelManager__UpdateLineDispAll(MapModelManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596D122 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ModelLineComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    byte_596D122 = 1;
  }
  lineList = this->fields.lineList;
  memset(&v10, 0, sizeof(v10));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)lineList,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    v5 = (System_Collections_Generic_List_object__o *)this->fields.lineList;
    if ( !v5 )
      sub_2213CDC(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      v5,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
      if ( !v6 )
        break;
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_2213CDC(v6, v7);
      if ( !v10.fields._current )
        sub_2213CDC(0, v7);
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v10.fields._current,
        TerminalMap_k__BackingField->fields.currentMapLayerId,
        v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
  }
}


UnityEngine_GameObject_o *MapModelManager__get_DispRoot(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._DispRoot_k__BackingField;
}


bool MapModelManager__get_IsMapCamera2DReset(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct MapModelComponent_o *v7; // x8

  if ( (byte_596D12A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D12A = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(mapModelComponent, 0, 0);
  if ( !v5 )
    return 1;
  v7 = this->fields.mapModelComponent;
  if ( !v7 )
    sub_2213CDC(v5, v6);
  return v7->fields.isMapCamera2DReset;
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
    sub_2213CDC(this, method);
  LOBYTE(mMapInfo) = MapEntity__IsMapModel((MapEntity_o *)this, 0);
  return (char)mMapInfo;
}


UnityEngine_Vector3_o MapModelManager__get_MapCamera2DResetPosition(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct MapModelComponent_o *v7; // x10
  struct UnityEngine_Vector3_StaticFields *p_mapCamera2DResetPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D12B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D12B = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(mapModelComponent, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.mapModelComponent;
    if ( !v7 )
      sub_2213CDC(v5, v6);
    p_mapCamera2DResetPosition = (struct UnityEngine_Vector3_StaticFields *)&v7->fields.mapCamera2DResetPosition;
    p_y = &v7->fields.mapCamera2DResetPosition.fields.y;
    p_z = &v7->fields.mapCamera2DResetPosition.fields.z;
  }
  else
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    p_mapCamera2DResetPosition = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &p_mapCamera2DResetPosition->zeroVector.fields.y;
    p_z = &p_mapCamera2DResetPosition->zeroVector.fields.z;
  }
  result.fields.z = *p_z;
  result.fields.y = *p_y;
  result.fields.x = p_mapCamera2DResetPosition->zeroVector.fields.x;
  return result;
}


float MapModelManager__get_MapCamera2DResetSize(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct MapModelComponent_o *v8; // x8

  if ( (byte_596D12C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D12C = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(mapModelComponent, 0, 0);
  result = 1.0;
  if ( v5 )
  {
    v8 = this->fields.mapModelComponent;
    if ( !v8 )
      sub_2213CDC(v5, v6);
    return v8->fields.mapCamera2DResetSize;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DispRoot_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DispRoot_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapModelManager__set_MapModelAssetData(MapModelManager_o *this, AssetData_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MapModelAssetData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MapModelAssetData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapModelManager__set_MapModelCamera(MapModelManager_o *this, MapModelCamera_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MapModelCamera_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MapModelCamera_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapModelManager__set_MapModelObject(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MapModelObject_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MapModelObject_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapModelManager__set_MapModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MapModelScreen_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MapModelScreen_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapModelManager__set_RoadRoot(MapModelManager_o *this, UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RoadRoot_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RoadRoot_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapModelManager__set_SpotModelCamera(MapModelManager_o *this, MapModelCamera_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SpotModelCamera_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SpotModelCamera_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapModelManager__set_SpotModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SpotModelScreen_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SpotModelScreen_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapModelManager__set_TerminalMap(MapModelManager_o *this, ScrTerminalMap_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TerminalMap_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  void *_4__this; // x0
  struct MapModelManager_o *v11; // x8
  Il2CppObject *Object_object__58532980; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct MapModelManager_o *v15; // x20
  Il2CppObject *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct MapModelManager_o *v23; // x8
  struct MapModelManager_o *v24; // x8
  __int64 v25; // x2
  struct MapModelManager_o *v26; // x8
  ScrTerminalMap_c *v27; // x0
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  int32_t v31; // w21
  struct MapModelManager_o *v32; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct MapModelManager_o *v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  struct MapModelManager_o *v50; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct MapModelManager_o *v58; // x8
  const MethodInfo *v59; // x2
  struct MapModelManager_o *v60; // x8
  __int64 v61; // x8
  __int64 v62; // x1
  __int64 v63; // x2
  struct MapModelManager_o *v64; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  const MethodInfo *v66; // x2
  struct MapModelManager_o *v67; // x8
  MapModelManager_o *v68; // x20

  if ( (byte_596D12F & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
    sub_2213A60(&MapModelManager_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScrTerminalMap_TypeInfo);
    sub_2213A60(&StringLiteral_17879/*"bg_map"*/);
    byte_596D12F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  *((_QWORD *)_4__this + 3) = assetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)((char *)_4__this + 24),
    (int32_t)assetData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_46;
  _4__this = v11->fields._MapModelAssetData_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)_4__this,
                              (System_String_o *)StringLiteral_17879/*"bg_map"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  v15 = this->fields.__4__this;
  v16 = Object_object__58532980;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  _4__this = UnityEngine_Object__Instantiate_object_(
               v16,
               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v15 )
    goto LABEL_46;
  v15->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)_4__this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v15->fields._MapModelObject_k__BackingField,
    (int32_t)_4__this,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_46;
  GameObjectExtensions__SetParent_42897232(
    v23->fields._MapModelObject_k__BackingField,
    v23->fields._DispRoot_k__BackingField,
    0);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_46;
  GameObjectExtensions__ResetTransform(v24->fields._MapModelObject_k__BackingField, 0);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_46;
  v27 = ScrTerminalMap_TypeInfo;
  MapModelObject_k__BackingField = v26->fields._MapModelObject_k__BackingField;
  if ( !*(&ScrTerminalMap_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo, assetData, v25);
    v27 = ScrTerminalMap_TypeInfo;
  }
  v31 = UnityEngine_LayerMask__NameToLayer(v27->static_fields->MAP_DISP_LAYER_MODEL, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v29, v30);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v31, 0);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_46;
  _4__this = v32->fields._MapModelObject_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  v32->fields.mapModelComponent = (struct MapModelComponent_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v32->fields.mapModelComponent,
    (int32_t)Component_object,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_46;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40->fields.mapModelComponent, 0, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      v47 = *((_QWORD *)_4__this + 11);
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 32);
        *((_QWORD *)_4__this + 5) = v48;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)_4__this + 40), v48, v41, v42, v43, v44, v45, v46);
        v50 = this->fields.__4__this;
        if ( v50 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v50->fields._MapModelCamera_k__BackingField;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, assetData, v49);
          _4__this = (void *)UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0, 0);
          if ( ((unsigned __int8)_4__this & 1) != 0 )
          {
            v58 = this->fields.__4__this;
            if ( !v58 )
              goto LABEL_46;
            _4__this = v58->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
            if ( !_4__this )
              goto LABEL_46;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0);
            v60 = this->fields.__4__this;
            if ( !v60 )
              goto LABEL_46;
            _4__this = v60->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            MapModelCamera__Setup((MapModelCamera_o *)_4__this, v60->fields._MapModelScreen_k__BackingField, v59);
          }
          _4__this = this->fields.__4__this;
          if ( _4__this )
          {
            v61 = *((_QWORD *)_4__this + 11);
            if ( v61 )
            {
              v62 = *(_QWORD *)(v61 + 40);
              *((_QWORD *)_4__this + 6) = v62;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)((char *)_4__this + 48),
                v62,
                v52,
                v53,
                v54,
                v55,
                v56,
                v57);
              v64 = this->fields.__4__this;
              if ( v64 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v64->fields._SpotModelCamera_k__BackingField;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, assetData, v63);
                _4__this = (void *)UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0, 0);
                if ( ((unsigned __int8)_4__this & 1) != 0 )
                {
                  v67 = this->fields.__4__this;
                  if ( !v67 )
                    goto LABEL_46;
                  _4__this = v67->fields._SpotModelCamera_k__BackingField;
                  if ( !_4__this )
                    goto LABEL_46;
                  MapModelCamera__Setup((MapModelCamera_o *)_4__this, v67->fields._SpotModelScreen_k__BackingField, v66);
                }
                v68 = this->fields.__4__this;
                _4__this = MapModelManager_TypeInfo;
                if ( !*(&MapModelManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo, assetData, v66);
                if ( v68 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v68,
                    MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID,
                    v66);
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_2213CDC(_4__this, assetData);
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
  MapModelManager___c__DisplayClass45_0_o *v3; // x19
  struct EasingObject_o *easingObject; // x8
  MapModelManager___c__DisplayClass45_0_o *v5; // x20
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
    sub_2213CDC(this, method);
  }
  v5 = this;
  v6 = Easing__Func(v3->fields.startedPos, v3->fields.endedPos, easingObject->fields.mNow, 0, 0);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v5, v6, 0);
}