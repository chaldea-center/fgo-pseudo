void __fastcall MapModelManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A6CCE9 & 1) == 0 )
  {
    sub_1B90010(&MapModelManager_TypeInfo, v1);
    byte_4A6CCE9 = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void __fastcall MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A6CCE8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_ModelLineComponent__TypeInfo, v3);
    byte_4A6CCE8 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ModelLineComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.lineList, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapModelManager__CreateModelLineBySpotId(
        MapModelManager_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        UnityEngine_GameObject_o *linePrefab,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  int32_t MasterName_k__BackingField_high; // w25
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x24
  Il2CppObject *Entity; // x21
  __int64 v19; // x1
  Il2CppObject *v20; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v25; // x8
  float v26; // s13
  float v27; // s14
  float w; // s11
  float v29; // s12
  Il2CppObject *v30; // x22
  const MethodInfo *v31; // x2
  Il2CppObject *Component_object; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v38; // x8
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v41; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A6CCDC & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_SpotMaster___, spotRoadInfo);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v8);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ModelLineComponent__Add__, v10);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject____76256224, v11);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v12);
    byte_4A6CCDC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)linePrefab, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SpotMaster___);
    if ( spotRoadInfo )
    {
      v15 = Master_object;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotRoadInfo__GetMine(spotRoadInfo, v14);
      if ( Master_object )
      {
        if ( v15 )
        {
          MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
          v17 = Master_object;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     (int32_t)Master_object->fields._MasterName_k__BackingField,
                     (const MethodInfo_312C5A8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v20 = DataMasterBase_object__object__int___GetEntity(
                  v15,
                  MasterName_k__BackingField_high,
                  (const MethodInfo_312C5A8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          if ( !byte_4A6A9C1 )
          {
            sub_1B90010(&UnityEngine_Vector3_TypeInfo, v19);
            byte_4A6A9C1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          x = static_fields->zeroVector.fields.x;
          y = static_fields->zeroVector.fields.y;
          z = static_fields->zeroVector.fields.z;
          if ( !byte_4A6A9C7 )
          {
            sub_1B90010(&UnityEngine_Quaternion_TypeInfo, v19);
            byte_4A6A9C7 = 1;
          }
          v25 = UnityEngine_Quaternion_TypeInfo->static_fields;
          v27 = v25->identityQuaternion.fields.x;
          v26 = v25->identityQuaternion.fields.y;
          v29 = v25->identityQuaternion.fields.z;
          w = v25->identityQuaternion.fields.w;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v40.fields.x = x;
          v40.fields.y = y;
          v40.fields.z = z;
          v41.fields.x = v27;
          v41.fields.y = v26;
          v41.fields.z = v29;
          v41.fields.w = w;
          v30 = UnityEngine_Object__Instantiate_object__49357880(
                  (Il2CppObject *)linePrefab,
                  v40,
                  v41,
                  (const MethodInfo_2F12438 *)Method_UnityEngine_Object_Instantiate_GameObject____76256224);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)srcLineSprite__GetGobjName(
                                                                          v17->fields._MasterKind_k__BackingField,
                                                                          0LL);
          if ( v30 )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v30, (System_String_o *)Master_object, 0LL);
            GameObjectExtensions__SafeSetParent_33776688(
              (UnityEngine_GameObject_o *)v30,
              this->fields._RoadRoot_k__BackingField,
              v31);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v30,
                                 (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
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
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v38 = v35 + 8 * MasterName_k__BackingField_low;
                  LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                  *(_QWORD *)(v38 + 32) = Component_object;
                  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v38 + 32), (int32_t)Component_object, v33, v34);
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
                      (SpotEntity_o *)v20,
                      this->fields._SpotModelCamera_k__BackingField,
                      TerminalMap_k__BackingField->fields.currentMapLayerId,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1B9026C(Master_object, v14);
  }
}


int32_t __fastcall MapModelManager__GetLayerBySpotPrefab(
        MapModelManager_o *this,
        SrcSpotBasePrefab_o *spotPrefab,
        const MethodInfo *method)
{
  __int64 v4; // x1
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v6; // x1
  MapModelManager_c *v7; // x0
  int32_t Layer; // w0
  MapModelManager_c *v10; // x8
  int32_t v11; // w19
  int32_t LAYER_LOWER_ID; // w8

  if ( (byte_4A6CCE3 & 1) == 0 )
  {
    sub_1B90010(&MapModelManager_TypeInfo, spotPrefab);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    byte_4A6CCE3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)spotPrefab,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
  {
    v7 = MapModelManager_TypeInfo;
    if ( !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v7 = MapModelManager_TypeInfo;
    }
    return v7->static_fields->LAYER_LOWER_ID;
  }
  else
  {
    if ( !spotPrefab || (mMapCtrl_SpotInfo = spotPrefab->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_1B9026C(mMapCtrl_SpotInfo, v6);
    Layer = MapControl_SpotInfo__GetLayer(mMapCtrl_SpotInfo, v6);
    v10 = MapModelManager_TypeInfo;
    v11 = Layer;
    if ( !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v10 = MapModelManager_TypeInfo;
    }
    LAYER_LOWER_ID = v10->static_fields->LAYER_LOWER_ID;
    if ( v11 <= LAYER_LOWER_ID )
      return LAYER_LOWER_ID;
    else
      return v11;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MapModelManager__GetLocationPostion(
        MapModelManager_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  MapModelComponent_o *v12; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6CCE2 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
    byte_4A6CCE2 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL) )
  {
    if ( !byte_4A6A9C1 )
    {
      sub_1B90010(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4A6A9C1 = 1;
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
      sub_1B9026C(0LL, v6);
    *(UnityEngine_Vector3_o *)&x = MapModelComponent__GetCameraLocationPosition(v12, layer, v7);
  }
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_GameObject_o *__fastcall MapModelManager__GetMapGimmickRootObject(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  __int64 v4; // x1
  bool v5; // w8
  UnityEngine_GameObject_o *result; // x0
  struct MapModelComponent_o *v7; // x8

  if ( (byte_4A6CCE4 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6CCE4 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
  {
    v7 = this->fields.mapModelComponent;
    if ( !v7 )
      sub_1B9026C(0LL, v4);
    return v7->fields.mapModelGimmickRoot;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapModelManager__LoadMapModel(
        MapModelManager_o *this,
        int32_t assetId,
        int32_t mapId,
        System_Action_o *endFunc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_Action_o **v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v34; // x22
  const MethodInfo *v35; // x1
  AssetLoader_LoadEndDataHandler_o *v36; // x19
  int32_t v37; // [xsp+8h] [xbp-38h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A6CCDB & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, *(_QWORD *)&assetId);
    sub_1B90010(&int_TypeInfo, v9);
    sub_1B90010(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1B90010(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__, v11);
    sub_1B90010(&MapModelManager___c__DisplayClass41_0_TypeInfo, v12);
    sub_1B90010(&StringLiteral_13619/*"Terminal/MapModels/{0:D4}_{1}"*/, v13);
    byte_4A6CCDB = 1;
  }
  v14 = sub_1B9025C(MapModelManager___c__DisplayClass41_0_TypeInfo);
  MapModelManager___c__DisplayClass41_0___ctor((MapModelManager___c__DisplayClass41_0_o *)v14, 0LL);
  if ( !v14 )
    sub_1B9026C(v15, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = endFunc;
  v19 = (System_Action_o **)(v14 + 24);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)endFunc, v20, v21);
  if ( MapModelManager__get_IsMapModel(this, v22) )
  {
    v38 = assetId;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v23, v24, v25);
    v37 = mapId;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v27, v28, v29);
    v31 = System_String__Format_61801464((System_String_o *)StringLiteral_13619/*"Terminal/MapModels/{0:D4}_{1}"*/, v26, v30, 0LL);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v34 = v31;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v31, 0LL) )
    {
      goto LABEL_10;
    }
    MapModelManager__ReleaseMapModelObject(this, v32);
    MapModelManager__ReleaseLineList(this, v35);
    v36 = (AssetLoader_LoadEndDataHandler_o *)sub_1B9025C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v36,
      (Il2CppObject *)v14,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(v34, v36, 1, 0LL) )
LABEL_10:
      ActionExtensions__Call(*v19, 0LL);
  }
  else
  {
    ActionExtensions__Call(*v19, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapModelManager__MoveMapModelCamera(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x22
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Action_o *v32; // x21

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v14 = startedPos.fields.z;
  v15 = startedPos.fields.y;
  v16 = startedPos.fields.x;
  if ( (byte_4A6CCDE & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&targetLayer);
    sub_1B90010(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v18);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v19);
    sub_1B90010(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__, v20);
    sub_1B90010(&MapModelManager___c__DisplayClass45_0_TypeInfo, v21);
    byte_4A6CCDE = 1;
  }
  v22 = sub_1B9025C(MapModelManager___c__DisplayClass45_0_TypeInfo);
  MapModelManager___c__DisplayClass45_0___ctor((MapModelManager___c__DisplayClass45_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_13;
  *(_QWORD *)(v22 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)this, v25, v26);
  *(float *)(v22 + 24) = v16;
  *(float *)(v22 + 28) = v15;
  *(float *)(v22 + 32) = v14;
  *(float *)(v22 + 36) = x;
  *(float *)(v22 + 40) = y;
  *(float *)(v22 + 44) = z;
  if ( duration <= 0.0
    || (float)((float)((float)(v14 - z) * (float)(v14 - z))
             + (float)((float)((float)(v16 - x) * (float)(v16 - x)) + (float)((float)(v15 - y) * (float)(v15 - y)))) < 1.0e-10 )
  {
    goto LABEL_9;
  }
  MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(MapModelCamera_k__BackingField, 0LL, 0LL) )
  {
LABEL_9:
    ActionExtensions__Call(endAction, 0LL);
    return;
  }
  v23 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !v23
    || (gameObject = UnityEngine_Component__get_gameObject(v23, 0LL),
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             gameObject,
                             (const MethodInfo_2EDF250 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v22 + 48) = Component_object,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v22 + 48), (int32_t)Component_object, v30, v31),
        v32 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v22,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0LL),
        (v23 = *(UnityEngine_Component_o **)(v22 + 48)) == 0LL) )
  {
LABEL_13:
    sub_1B9026C(v23, v24);
  }
  EasingObject__Play((EasingObject_o *)v23, duration, v32, endAction, 0.0, easingType, 0LL);
}


void __fastcall MapModelManager__PlayAnimation(
        MapModelManager_o *this,
        System_String_o *animationName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  MapModelComponent_o *mapModelComponent; // x0

  mapModelComponent = this->fields.mapModelComponent;
  if ( !mapModelComponent )
    sub_1B9026C(0LL, animationName);
  MapModelComponent__PlayAnimation(mapModelComponent, animationName, endAction, method);
}


void __fastcall MapModelManager__ReleaseAsset(MapModelManager_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_MapModelAssetData_k__BackingField; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *MapModelAssetData_k__BackingField; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A6CCDF & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, method);
    byte_4A6CCDF = 1;
  }
  MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
  p_MapModelAssetData_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._MapModelAssetData_k__BackingField;
  v4 = MapModelAssetData_k__BackingField;
  if ( MapModelAssetData_k__BackingField )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37842776(v4, 0LL);
    p_MapModelAssetData_k__BackingField->klass = 0LL;
    sub_1B8FFB4(p_MapModelAssetData_k__BackingField, 0, v6, v7);
  }
}


void __fastcall MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  MapModelManager_o *v2; // x19
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A6CCE1 & 1) == 0 )
  {
    this = (MapModelManager_o *)sub_1B90010(&Method_System_Collections_Generic_List_ModelLineComponent__Clear__, method);
    byte_4A6CCE1 = 1;
  }
  lineList = v2->fields.lineList;
  if ( !lineList )
    sub_1B9026C(this, method);
  size = lineList->fields._size;
  v5 = lineList->fields._version + 1;
  lineList->fields._size = 0;
  lineList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lineList->fields._items, 0, size, 0LL);
}


void __fastcall MapModelManager__ReleaseMapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *MapModelObject_k__BackingField; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4A6CCE0 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6CCE0 = 1;
  }
  MapModelObject_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(MapModelObject_k__BackingField, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(v4, 0LL);
  }
}


void __fastcall MapModelManager__SetMapModelCameraPositionByLayer(
        MapModelManager_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Component_o *MapModelCamera_k__BackingField; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  UnityEngine_Vector3_o LocationPostion; // 0:s0.4,4:s1.4,8:s2.4

  MapModelCamera_k__BackingField = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !MapModelCamera_k__BackingField )
    sub_1B9026C(0LL, layer);
  gameObject = UnityEngine_Component__get_gameObject(MapModelCamera_k__BackingField, 0LL);
  LocationPostion = MapModelManager__GetLocationPostion(this, layer, v7);
  GameObjectExtensions__SetLocalPosition(gameObject, LocationPostion, v8);
}


void __fastcall MapModelManager__UpdateLineDispAll(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *lineList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A6CCDD & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Any_ModelLineComponent___, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__, v6);
    byte_4A6CCDD = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
         (const MethodInfo_2E9BBF0 *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
    if ( !lineList )
      sub_1B9026C(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      lineList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
      if ( !v9 )
        break;
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_1B9026C(v9, v10);
      if ( !v12.fields._current )
        sub_1B9026C(0LL, v10);
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v12.fields._current,
        TerminalMap_k__BackingField->fields.currentMapLayerId,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
  }
}


UnityEngine_GameObject_o *__fastcall MapModelManager__get_DispRoot(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._DispRoot_k__BackingField;
}


bool __fastcall MapModelManager__get_IsMapCamera2DReset(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct MapModelComponent_o *v6; // x8

  if ( (byte_4A6CCE5 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6CCE5 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( !v4 )
    return 1;
  v6 = this->fields.mapModelComponent;
  if ( !v6 )
    sub_1B9026C(v4, v5);
  return v6->fields.isMapCamera2DReset;
}


bool __fastcall MapModelManager__get_IsMapModel(MapModelManager_o *this, const MethodInfo *method)
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
    sub_1B9026C(this, method);
  LOBYTE(mMapInfo) = MapEntity__IsMapModel((MapEntity_o *)this, 0LL);
  return (char)mMapInfo;
}


UnityEngine_Vector3_o __fastcall MapModelManager__get_MapCamera2DResetPosition(
        MapModelManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A6CCE6 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6CCE6 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.mapModelComponent;
    if ( !v6 )
      sub_1B9026C(v4, v5);
    p_mapCamera2DResetPosition = (struct UnityEngine_Vector3_StaticFields *)&v6->fields.mapCamera2DResetPosition;
    p_y = &v6->fields.mapCamera2DResetPosition.fields.y;
    p_z = &v6->fields.mapCamera2DResetPosition.fields.z;
  }
  else
  {
    if ( !byte_4A6A9C1 )
    {
      sub_1B90010(&UnityEngine_Vector3_TypeInfo, v5);
      byte_4A6A9C1 = 1;
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


float __fastcall MapModelManager__get_MapCamera2DResetSize(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct MapModelComponent_o *v7; // x8

  if ( (byte_4A6CCE7 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6CCE7 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  result = 1.0;
  if ( v4 )
  {
    v7 = this->fields.mapModelComponent;
    if ( !v7 )
      sub_1B9026C(v4, v5);
    return v7->fields.mapCamera2DResetSize;
  }
  return result;
}


AssetData_o *__fastcall MapModelManager__get_MapModelAssetData(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._MapModelAssetData_k__BackingField;
}


MapModelCamera_o *__fastcall MapModelManager__get_MapModelCamera(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._MapModelCamera_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall MapModelManager__get_MapModelObject(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  return this->fields._MapModelObject_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall MapModelManager__get_MapModelScreen(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  return this->fields._MapModelScreen_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall MapModelManager__get_RoadRoot(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._RoadRoot_k__BackingField;
}


MapModelCamera_o *__fastcall MapModelManager__get_SpotModelCamera(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._SpotModelCamera_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall MapModelManager__get_SpotModelScreen(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotModelScreen_k__BackingField;
}


ScrTerminalMap_o *__fastcall MapModelManager__get_TerminalMap(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._TerminalMap_k__BackingField;
}


void __fastcall MapModelManager__set_DispRoot(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._DispRoot_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._DispRoot_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MapModelManager__set_MapModelAssetData(
        MapModelManager_o *this,
        AssetData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MapModelAssetData_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._MapModelAssetData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MapModelManager__set_MapModelCamera(
        MapModelManager_o *this,
        MapModelCamera_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MapModelCamera_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._MapModelCamera_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MapModelManager__set_MapModelObject(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MapModelObject_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._MapModelObject_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MapModelManager__set_MapModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MapModelScreen_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._MapModelScreen_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MapModelManager__set_RoadRoot(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._RoadRoot_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._RoadRoot_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MapModelManager__set_SpotModelCamera(
        MapModelManager_o *this,
        MapModelCamera_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SpotModelCamera_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpotModelCamera_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MapModelManager__set_SpotModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SpotModelScreen_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpotModelScreen_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MapModelManager__set_TerminalMap(
        MapModelManager_o *this,
        ScrTerminalMap_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TerminalMap_k__BackingField = value;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall MapModelManager___c__DisplayClass41_0___ctor(
        MapModelManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapModelManager___c__DisplayClass41_0___LoadMapModel_b__0(
        MapModelManager___c__DisplayClass41_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *_4__this; // x0
  struct MapModelManager_o *v14; // x8
  Il2CppObject *Object_object__48695184; // x0
  struct MapModelManager_o *v16; // x20
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct MapModelManager_o *v20; // x8
  struct MapModelManager_o *v21; // x8
  struct MapModelManager_o *v22; // x8
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  ScrTerminalMap_c *v24; // x0
  int32_t v25; // w21
  struct MapModelManager_o *v26; // x20
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct MapModelManager_o *v30; // x8
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  __int64 v34; // x1
  struct MapModelManager_o *v35; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  struct MapModelManager_o *v39; // x8
  struct MapModelManager_o *v40; // x8
  __int64 v41; // x8
  __int64 v42; // x1
  struct MapModelManager_o *v43; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v45; // x8
  MapModelManager_o *v46; // x20

  if ( (byte_4A6CCF3 & 1) == 0 )
  {
    sub_1B90010(&Method_AssetData_GetObject_GameObject____76169496, assetData);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___, v6);
    sub_1B90010(&MapModelManager_TypeInfo, v7);
    sub_1B90010(&NGUITools_TypeInfo, v8);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v10);
    sub_1B90010(&ScrTerminalMap_TypeInfo, v11);
    sub_1B90010(&StringLiteral_17196/*"bg_map"*/, v12);
    byte_4A6CCF3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  *((_QWORD *)_4__this + 3) = assetData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)_4__this + 24), (int32_t)assetData, (int32_t)method, v3);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_46;
  _4__this = v14->fields._MapModelAssetData_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Object_object__48695184 = AssetData__GetObject_object__48695184(
                              (AssetData_o *)_4__this,
                              (System_String_o *)StringLiteral_17196/*"bg_map"*/,
                              (const MethodInfo_2E70790 *)Method_AssetData_GetObject_GameObject____76169496);
  v16 = this->fields.__4__this;
  v17 = Object_object__48695184;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = UnityEngine_Object__Instantiate_object_(
               v17,
               (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v16 )
    goto LABEL_46;
  v16->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)_4__this;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&v16->fields._MapModelObject_k__BackingField,
    (int32_t)_4__this,
    v18,
    v19);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_46;
  GameObjectExtensions__SetParent_33776568(
    v20->fields._MapModelObject_k__BackingField,
    v20->fields._DispRoot_k__BackingField,
    0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_46;
  GameObjectExtensions__ResetTransform(v21->fields._MapModelObject_k__BackingField, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_46;
  MapModelObject_k__BackingField = v22->fields._MapModelObject_k__BackingField;
  v24 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v24 = ScrTerminalMap_TypeInfo;
  }
  v25 = UnityEngine_LayerMask__NameToLayer(v24->static_fields->MAP_DISP_LAYER_MODEL, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v25, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_46;
  _4__this = v26->fields._MapModelObject_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  v26->fields.mapModelComponent = (struct MapModelComponent_o *)Component_object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->fields.mapModelComponent, (int32_t)Component_object, v28, v29);
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_46;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30->fields.mapModelComponent, 0LL, 0LL) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      v33 = *((_QWORD *)_4__this + 11);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 32);
        *((_QWORD *)_4__this + 5) = v34;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)_4__this + 40), v34, v31, v32);
        v35 = this->fields.__4__this;
        if ( v35 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v35->fields._MapModelCamera_k__BackingField;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          _4__this = (void *)UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL);
          if ( ((unsigned __int8)_4__this & 1) != 0 )
          {
            v39 = this->fields.__4__this;
            if ( !v39 )
              goto LABEL_46;
            _4__this = v39->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
            if ( !_4__this )
              goto LABEL_46;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
            v40 = this->fields.__4__this;
            if ( !v40 )
              goto LABEL_46;
            _4__this = v40->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            MapModelCamera__Setup((MapModelCamera_o *)_4__this, v40->fields._MapModelScreen_k__BackingField, 0LL);
          }
          _4__this = this->fields.__4__this;
          if ( _4__this )
          {
            v41 = *((_QWORD *)_4__this + 11);
            if ( v41 )
            {
              v42 = *(_QWORD *)(v41 + 40);
              *((_QWORD *)_4__this + 6) = v42;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)_4__this + 48), v42, v37, v38);
              v43 = this->fields.__4__this;
              if ( v43 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v43->fields._SpotModelCamera_k__BackingField;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                _4__this = (void *)UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0LL, 0LL);
                if ( ((unsigned __int8)_4__this & 1) != 0 )
                {
                  v45 = this->fields.__4__this;
                  if ( !v45 )
                    goto LABEL_46;
                  _4__this = v45->fields._SpotModelCamera_k__BackingField;
                  if ( !_4__this )
                    goto LABEL_46;
                  MapModelCamera__Setup((MapModelCamera_o *)_4__this, v45->fields._SpotModelScreen_k__BackingField, 0LL);
                }
                v46 = this->fields.__4__this;
                _4__this = MapModelManager_TypeInfo;
                if ( !MapModelManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
                if ( v46 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v46,
                    MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID,
                    0LL);
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1B9026C(_4__this, assetData);
  }
LABEL_45:
  ActionExtensions__Call(this->fields.endFunc, 0LL);
}


void __fastcall MapModelManager___c__DisplayClass45_0___ctor(
        MapModelManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapModelManager___c__DisplayClass45_0___MoveMapModelCamera_b__0(
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
        (this = (MapModelManager___c__DisplayClass45_0_o *)_4__this->fields._MapModelCamera_k__BackingField) == 0LL)
    || (this = (MapModelManager___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL),
        (easingObject = v3->fields.easingObject) == 0LL) )
  {
    sub_1B9026C(this, method);
  }
  v5 = this;
  v6 = Easing__Func(v3->fields.startedPos, v3->fields.endedPos, easingObject->fields.mNow, 0, 0LL);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v5, v6, 0LL);
}