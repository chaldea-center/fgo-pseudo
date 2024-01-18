void __fastcall MapModelManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_41858D8 & 1) == 0 )
  {
    sub_B2C35C(&MapModelManager_TypeInfo, v1);
    byte_41858D8 = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void __fastcall MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_41858D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_ModelLineComponent__TypeInfo, v3);
    byte_41858D7 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ModelLineComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v4;
  sub_B2C2F8(&this->fields.lineList, v4);
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
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x23
  int32_t v16; // w25
  _DWORD *v17; // x24
  SpotEntity_o *Entity; // x22
  SpotEntity_o *v19; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v23; // s11
  float v24; // s12
  float v25; // s13
  float w; // s14
  Il2CppObject *v27; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_41858CB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SpotMaster___, spotRoadInfo);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ModelLineComponent__Add__, v10);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450632, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_41858CB = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)linePrefab, 0LL, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SpotMaster___);
    if ( spotRoadInfo )
    {
      v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = MapControl_SpotRoadInfo__GetMine(spotRoadInfo, 0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        if ( v15 )
        {
          v16 = *((_DWORD *)Master_WarQuestSelectionMaster + 7);
          v17 = Master_WarQuestSelectionMaster;
          Entity = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v15,
                                     *((_DWORD *)Master_WarQuestSelectionMaster + 6),
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v19 = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v15,
                                  v16,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          zero = UnityEngine_Vector3__get_zero(0LL);
          x = zero.fields.x;
          y = zero.fields.y;
          z = zero.fields.z;
          identity = UnityEngine_Quaternion__get_identity(0LL);
          v23 = identity.fields.x;
          v24 = identity.fields.y;
          v25 = identity.fields.z;
          w = identity.fields.w;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v31.fields.x = x;
          v31.fields.y = y;
          v31.fields.z = z;
          v33.fields.x = v23;
          v33.fields.y = v24;
          v33.fields.z = v25;
          v33.fields.w = w;
          v27 = UnityEngine_Object__Instantiate_object_(
                  (Il2CppObject *)linePrefab,
                  v31,
                  v33,
                  (const MethodInfo_20960C4 *)Method_UnityEngine_Object_Instantiate_GameObject____67450632);
          Master_WarQuestSelectionMaster = srcLineSprite__GetGobjName(v17[4], 0LL);
          if ( v27 )
          {
            UnityEngine_Object__set_name(
              (UnityEngine_Object_o *)v27,
              (System_String_o *)Master_WarQuestSelectionMaster,
              0LL);
            GameObjectExtensions__SafeSetParent_31331952(
              (UnityEngine_GameObject_o *)v27,
              this->fields._RoadRoot_k__BackingField,
              0LL);
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)v27,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
              return;
            Master_WarQuestSelectionMaster = this->fields.lineList;
            if ( Master_WarQuestSelectionMaster )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ModelLineComponent__Add__);
              TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
              if ( TerminalMap_k__BackingField )
              {
                if ( Component_srcLineSprite )
                {
                  ModelLineComponent__Setup(
                    (ModelLineComponent_o *)Component_srcLineSprite,
                    spotRoadInfo,
                    Entity,
                    v19,
                    this->fields._SpotModelCamera_k__BackingField,
                    (int32_t)TerminalMap_k__BackingField->fields.servantRoot,
                    0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_B2C434(Master_WarQuestSelectionMaster, v14);
  }
}


int32_t __fastcall MapModelManager__GetLayerBySpotPrefab(
        MapModelManager_o *this,
        SrcSpotBasePrefab_o *spotPrefab,
        const MethodInfo *method)
{
  __int64 v4; // x1
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  __int64 v6; // x1
  MapModelManager_c *v7; // x0
  int32_t Layer; // w19
  MapModelManager_c *v10; // x8

  if ( (byte_41858D2 & 1) == 0 )
  {
    sub_B2C35C(&MapModelManager_TypeInfo, spotPrefab);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_41858D2 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)spotPrefab,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
  {
    v7 = MapModelManager_TypeInfo;
    if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v7 = MapModelManager_TypeInfo;
    }
    return v7->static_fields->LAYER_LOWER_ID;
  }
  else
  {
    if ( !spotPrefab || (mMapCtrl_SpotInfo = spotPrefab->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_B2C434(mMapCtrl_SpotInfo, v6);
    Layer = MapControl_SpotInfo__GetLayer(mMapCtrl_SpotInfo, 0LL);
    v10 = MapModelManager_TypeInfo;
    if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v10 = MapModelManager_TypeInfo;
    }
    return UnityEngine_Mathf__Max_40694800(Layer, v10->static_fields->LAYER_LOWER_ID, 0LL);
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
  float v8; // s0
  float v9; // s1
  float v10; // s2
  MapModelComponent_o *v11; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41858D1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
    byte_41858D1 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  }
  else
  {
    v11 = this->fields.mapModelComponent;
    if ( !v11 )
      sub_B2C434(0LL, v6);
    *(UnityEngine_Vector3_o *)&v8 = MapModelComponent__GetCameraLocationPosition(v11, layer, v7);
  }
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
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

  if ( (byte_41858D3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41858D3 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
  {
    v7 = this->fields.mapModelComponent;
    if ( !v7 )
      sub_B2C434(0LL, v4);
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
  MapModelManager___c__DisplayClass41_0_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Action_o **p_endFunc; // x20
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v24; // x22
  const MethodInfo *v25; // x1
  AssetLoader_LoadEndDataHandler_o *v26; // x19
  int32_t v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41858CA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&assetId);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B2C35C(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__, v11);
    sub_B2C35C(&MapModelManager___c__DisplayClass41_0_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_13607/*"Terminal/MapModels/{0:D4}_{1}"*/, v13);
    byte_41858CA = 1;
  }
  v14 = (MapModelManager___c__DisplayClass41_0_o *)sub_B2C42C(MapModelManager___c__DisplayClass41_0_TypeInfo);
  MapModelManager___c__DisplayClass41_0___ctor(v14, 0LL);
  if ( !v14 )
    sub_B2C434(v15, v16);
  v14->fields.__4__this = this;
  sub_B2C2F8(&v14->fields, this);
  v14->fields.endFunc = endFunc;
  p_endFunc = &v14->fields.endFunc;
  sub_B2C2F8(&v14->fields.endFunc, endFunc);
  if ( MapModelManager__get_IsMapModel(this, v18) )
  {
    v28 = assetId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v27 = mapId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v21 = System_String__Format_44301068((System_String_o *)StringLiteral_13607/*"Terminal/MapModels/{0:D4}_{1}"*/, v19, v20, 0LL);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v24 = v21;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v21, 0LL) )
    {
      goto LABEL_11;
    }
    MapModelManager__ReleaseMapModelObject(this, v22);
    MapModelManager__ReleaseLineList(this, v25);
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v26,
      (Il2CppObject *)v14,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(v24, v26, 1, 0LL) )
LABEL_11:
      ActionExtensions__Call(*p_endFunc, 0LL);
  }
  else
  {
    ActionExtensions__Call(*p_endFunc, 0LL);
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
  float x; // s11
  float v14; // s12
  float v15; // s13
  float v16; // s14
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x21
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  System_Action_o *v28; // x22
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s3.4,4:s4.4,8:s5.4

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v14 = startedPos.fields.z;
  v15 = startedPos.fields.y;
  v16 = startedPos.fields.x;
  if ( (byte_41858CD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&targetLayer);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__, v20);
    sub_B2C35C(&MapModelManager___c__DisplayClass45_0_TypeInfo, v21);
    byte_41858CD = 1;
  }
  v22 = sub_B2C42C(MapModelManager___c__DisplayClass45_0_TypeInfo);
  MapModelManager___c__DisplayClass45_0___ctor((MapModelManager___c__DisplayClass45_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_14;
  *(_QWORD *)(v22 + 16) = this;
  sub_B2C2F8(v22 + 16, this);
  *(float *)(v22 + 24) = v16;
  *(float *)(v22 + 28) = v15;
  *(float *)(v22 + 32) = v14;
  *(float *)(v22 + 36) = x;
  *(float *)(v22 + 40) = y;
  *(float *)(v22 + 44) = z;
  if ( duration <= 0.0 )
    goto LABEL_10;
  v29.fields.x = v16;
  v29.fields.y = v15;
  v29.fields.z = v14;
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  if ( UnityEngine_Vector3__op_Equality(v29, v30, 0LL) )
    goto LABEL_10;
  MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(MapModelCamera_k__BackingField, 0LL, 0LL) )
  {
LABEL_10:
    ActionExtensions__Call(endAction, 0LL);
    return;
  }
  v23 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !v23
    || (gameObject = UnityEngine_Component__get_gameObject(v23, 0LL),
        Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                               gameObject,
                               (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v22 + 48) = Component_UIWidget,
        sub_B2C2F8(v22 + 48, Component_UIWidget),
        v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v28,
          (Il2CppObject *)v22,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0LL),
        (v23 = *(UnityEngine_Component_o **)(v22 + 48)) == 0LL) )
  {
LABEL_14:
    sub_B2C434(v23, v24);
  }
  EasingObject__Play((EasingObject_o *)v23, duration, v28, endAction, 0.0, easingType, 0LL);
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
    sub_B2C434(0LL, animationName);
  MapModelComponent__PlayAnimation(mapModelComponent, animationName, endAction, method);
}


void __fastcall MapModelManager__ReleaseAsset(MapModelManager_o *this, const MethodInfo *method)
{
  struct AssetData_o **p_MapModelAssetData_k__BackingField; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *MapModelAssetData_k__BackingField; // t1

  if ( (byte_41858CE & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_41858CE = 1;
  }
  MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
  p_MapModelAssetData_k__BackingField = &this->fields._MapModelAssetData_k__BackingField;
  v4 = MapModelAssetData_k__BackingField;
  if ( MapModelAssetData_k__BackingField )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30152684(v4, 0LL);
    *p_MapModelAssetData_k__BackingField = 0LL;
    sub_B2C2F8(p_MapModelAssetData_k__BackingField, 0LL);
  }
}


void __fastcall MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0

  if ( (byte_41858D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ModelLineComponent__Clear__, method);
    byte_41858D0 = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)lineList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ModelLineComponent__Clear__);
}


void __fastcall MapModelManager__ReleaseMapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *MapModelObject_k__BackingField; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_41858CF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41858CF = 1;
  }
  MapModelObject_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(MapModelObject_k__BackingField, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v4, 0LL);
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
  UnityEngine_Vector3_o LocationPostion; // 0:s0.4,4:s1.4,8:s2.4

  MapModelCamera_k__BackingField = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !MapModelCamera_k__BackingField )
    sub_B2C434(0LL, layer);
  gameObject = UnityEngine_Component__get_gameObject(MapModelCamera_k__BackingField, 0LL);
  LocationPostion = MapModelManager__GetLocationPostion(this, layer, v7);
  GameObjectExtensions__SetLocalPosition(gameObject, LocationPostion, 0LL);
}


void __fastcall MapModelManager__UpdateLineDispAll(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41858CC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_ModelLineComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__, v6);
    byte_41858CC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    lineList = this->fields.lineList;
    if ( !lineList )
      sub_B2C434(0LL, v7);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v12,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
      if ( !v9 )
        break;
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_B2C434(v9, v10);
      if ( !v12.fields.current )
        sub_B2C434(0LL, v10);
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v12.fields.current,
        (int32_t)TerminalMap_k__BackingField->fields.servantRoot,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
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

  if ( (byte_41858D4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41858D4 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( !v4 )
    return 1;
  v6 = this->fields.mapModelComponent;
  if ( !v6 )
    sub_B2C434(v4, v5);
  return v6->fields.isMapCamera2DReset;
}


bool __fastcall MapModelManager__get_IsMapModel(MapModelManager_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  MapControl_MapInfo_o *mWarEnt; // x0

  TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
  if ( !TerminalMap_k__BackingField )
    goto LABEL_6;
  mWarEnt = (MapControl_MapInfo_o *)TerminalMap_k__BackingField->fields.mWarEnt;
  if ( !mWarEnt )
    return (char)mWarEnt;
  this = (MapModelManager_o *)MapControl_MapInfo__GetMine(mWarEnt, 0LL);
  if ( !this )
LABEL_6:
    sub_B2C434(this, method);
  LOBYTE(mWarEnt) = MapEntity__IsMapModel((MapEntity_o *)this, 0LL);
  return (char)mWarEnt;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MapModelManager__get_MapCamera2DResetPosition(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct MapModelComponent_o *v6; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41858D5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41858D5 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.mapModelComponent;
    if ( !v6 )
      sub_B2C434(v4, v5);
    x = v6->fields.mapCamera2DResetPosition.fields.x;
    y = v6->fields.mapCamera2DResetPosition.fields.y;
    z = v6->fields.mapCamera2DResetPosition.fields.z;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&x = UnityEngine_Vector3__get_zero(0LL);
  }
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall MapModelManager__get_MapCamera2DResetSize(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct MapModelComponent_o *v6; // x8

  if ( (byte_41858D6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41858D6 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( !v4 )
    return 1.0;
  v6 = this->fields.mapModelComponent;
  if ( !v6 )
    sub_B2C434(v4, v5);
  return v6->fields.mapCamera2DResetSize;
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
  this->fields._DispRoot_k__BackingField = value;
  sub_B2C2F8(&this->fields._DispRoot_k__BackingField, value);
}


void __fastcall MapModelManager__set_MapModelAssetData(
        MapModelManager_o *this,
        AssetData_o *value,
        const MethodInfo *method)
{
  this->fields._MapModelAssetData_k__BackingField = value;
  sub_B2C2F8(&this->fields._MapModelAssetData_k__BackingField, value);
}


void __fastcall MapModelManager__set_MapModelCamera(
        MapModelManager_o *this,
        MapModelCamera_o *value,
        const MethodInfo *method)
{
  this->fields._MapModelCamera_k__BackingField = value;
  sub_B2C2F8(&this->fields._MapModelCamera_k__BackingField, value);
}


void __fastcall MapModelManager__set_MapModelObject(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._MapModelObject_k__BackingField = value;
  sub_B2C2F8(&this->fields._MapModelObject_k__BackingField, value);
}


void __fastcall MapModelManager__set_MapModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._MapModelScreen_k__BackingField = value;
  sub_B2C2F8(&this->fields._MapModelScreen_k__BackingField, value);
}


void __fastcall MapModelManager__set_RoadRoot(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._RoadRoot_k__BackingField = value;
  sub_B2C2F8(&this->fields._RoadRoot_k__BackingField, value);
}


void __fastcall MapModelManager__set_SpotModelCamera(
        MapModelManager_o *this,
        MapModelCamera_o *value,
        const MethodInfo *method)
{
  this->fields._SpotModelCamera_k__BackingField = value;
  sub_B2C2F8(&this->fields._SpotModelCamera_k__BackingField, value);
}


void __fastcall MapModelManager__set_SpotModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._SpotModelScreen_k__BackingField = value;
  sub_B2C2F8(&this->fields._SpotModelScreen_k__BackingField, value);
}


void __fastcall MapModelManager__set_TerminalMap(
        MapModelManager_o *this,
        ScrTerminalMap_o *value,
        const MethodInfo *method)
{
  this->fields._TerminalMap_k__BackingField = value;
  sub_B2C2F8(&this->fields, value);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *_4__this; // x0
  struct MapModelManager_o *v18; // x8
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  struct MapModelManager_o *v20; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct MapModelManager_o *v28; // x8
  struct MapModelManager_o *v29; // x8
  struct MapModelManager_o *v30; // x8
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  ScrTerminalMap_c *v32; // x0
  int32_t v33; // w21
  struct MapModelManager_o *v34; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct MapModelManager_o *v42; // x8
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x8
  System_Int32_array **v50; // x1
  struct MapModelManager_o *v51; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct MapModelManager_o *v59; // x8
  struct MapModelManager_o *v60; // x8
  __int64 v61; // x8
  System_Int32_array **v62; // x1
  struct MapModelManager_o *v63; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v65; // x8
  MapModelManager_o *v66; // x20

  if ( (byte_4185D01 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, assetData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___, v10);
    sub_B2C35C(&MapModelManager_TypeInfo, v11);
    sub_B2C35C(&NGUITools_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&ScrTerminalMap_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_16702/*"bg_map"*/, v16);
    byte_4185D01 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_52;
  *((_QWORD *)_4__this + 3) = assetData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)((char *)_4__this + 24),
    (System_Int32_array **)assetData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_52;
  _4__this = v18->fields._MapModelAssetData_k__BackingField;
  if ( !_4__this )
    goto LABEL_52;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     (AssetData_o *)_4__this,
                                     (System_String_o *)StringLiteral_16702/*"bg_map"*/,
                                     (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  v20 = this->fields.__4__this;
  v21 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
               v21,
               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v20 )
    goto LABEL_52;
  v20->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)_4__this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v20->fields._MapModelObject_k__BackingField,
    (System_Int32_array **)_4__this,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_52;
  GameObjectExtensions__SetParent_31331816(
    v28->fields._MapModelObject_k__BackingField,
    v28->fields._DispRoot_k__BackingField,
    0LL);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_52;
  GameObjectExtensions__ResetTransform(v29->fields._MapModelObject_k__BackingField, 0LL);
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_52;
  MapModelObject_k__BackingField = v30->fields._MapModelObject_k__BackingField;
  v32 = ScrTerminalMap_TypeInfo;
  if ( (BYTE3(ScrTerminalMap_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v32 = ScrTerminalMap_TypeInfo;
  }
  v33 = UnityEngine_LayerMask__NameToLayer(v32->static_fields->MAP_DISP_LAYER_MODEL, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v33, 0LL);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_52;
  _4__this = v34->fields._MapModelObject_k__BackingField;
  if ( !_4__this )
    goto LABEL_52;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)_4__this,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  v34->fields.mapModelComponent = (struct MapModelComponent_o *)Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v34->fields.mapModelComponent,
    Component_srcLineSprite,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = this->fields.__4__this;
  if ( !v42 )
    goto LABEL_52;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42->fields.mapModelComponent, 0LL, 0LL) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      v49 = *((_QWORD *)_4__this + 11);
      if ( v49 )
      {
        v50 = *(System_Int32_array ***)(v49 + 24);
        *((_QWORD *)_4__this + 5) = v50;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)_4__this + 40), v50, v43, v44, v45, v46, v47, v48);
        v51 = this->fields.__4__this;
        if ( v51 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v51->fields._MapModelCamera_k__BackingField;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          _4__this = (void *)UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL);
          if ( ((unsigned __int8)_4__this & 1) != 0 )
          {
            v59 = this->fields.__4__this;
            if ( !v59 )
              goto LABEL_52;
            _4__this = v59->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_52;
            _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
            if ( !_4__this )
              goto LABEL_52;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
            v60 = this->fields.__4__this;
            if ( !v60 )
              goto LABEL_52;
            _4__this = v60->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_52;
            MapModelCamera__Setup((MapModelCamera_o *)_4__this, v60->fields._MapModelScreen_k__BackingField, 0LL);
          }
          _4__this = this->fields.__4__this;
          if ( _4__this )
          {
            v61 = *((_QWORD *)_4__this + 11);
            if ( v61 )
            {
              v62 = *(System_Int32_array ***)(v61 + 32);
              *((_QWORD *)_4__this + 6) = v62;
              sub_B2C2F8((BattleServantConfConponent_o *)((char *)_4__this + 48), v62, v53, v54, v55, v56, v57, v58);
              v63 = this->fields.__4__this;
              if ( v63 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v63->fields._SpotModelCamera_k__BackingField;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                _4__this = (void *)UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0LL, 0LL);
                if ( ((unsigned __int8)_4__this & 1) != 0 )
                {
                  v65 = this->fields.__4__this;
                  if ( !v65 )
                    goto LABEL_52;
                  _4__this = v65->fields._SpotModelCamera_k__BackingField;
                  if ( !_4__this )
                    goto LABEL_52;
                  MapModelCamera__Setup((MapModelCamera_o *)_4__this, v65->fields._SpotModelScreen_k__BackingField, 0LL);
                }
                v66 = this->fields.__4__this;
                _4__this = MapModelManager_TypeInfo;
                if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !MapModelManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
                }
                if ( v66 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v66,
                    MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID,
                    0LL);
                  goto LABEL_51;
                }
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B2C434(_4__this, assetData);
  }
LABEL_51:
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
  MapModelManager___c__DisplayClass45_0_o *v3; // x19
  struct EasingObject_o *easingObject; // x8
  UnityEngine_GameObject_o *v5; // x20
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
    sub_B2C434(this, method);
  }
  v5 = (UnityEngine_GameObject_o *)this;
  v6 = Easing__Func(v3->fields.startedPos, v3->fields.endedPos, easingObject->fields.mStartTime, 0, 0LL);
  GameObjectExtensions__SetLocalPosition(v5, v6, 0LL);
}