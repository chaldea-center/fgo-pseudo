void __fastcall MapModelManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4212A14 & 1) == 0 )
  {
    sub_B0D8A4(&MapModelManager_TypeInfo, v1);
    byte_4212A14 = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void __fastcall MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4212A13 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_ModelLineComponent__TypeInfo, v4);
    byte_4212A13 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ModelLineComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.lineList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x23
  int32_t v15; // w25
  _DWORD *v16; // x24
  SpotEntity_o *Entity; // x22
  SpotEntity_o *v18; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v22; // s11
  float v23; // s12
  float v24; // s13
  float w; // s14
  Il2CppObject *v26; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v32; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4212A07 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_SpotMaster___, spotRoadInfo);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ModelLineComponent__Add__, v10);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025368, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4212A07 = 1;
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SpotMaster___);
    if ( spotRoadInfo )
    {
      v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = MapControl_SpotRoadInfo__GetMine(spotRoadInfo, 0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        if ( v14 )
        {
          v15 = *((_DWORD *)Master_WarQuestSelectionMaster + 7);
          v16 = Master_WarQuestSelectionMaster;
          Entity = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v14,
                                     *((_DWORD *)Master_WarQuestSelectionMaster + 6),
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v18 = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v14,
                                  v15,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          zero = UnityEngine_Vector3__get_zero(0LL);
          x = zero.fields.x;
          y = zero.fields.y;
          z = zero.fields.z;
          identity = UnityEngine_Quaternion__get_identity(0LL);
          v22 = identity.fields.x;
          v23 = identity.fields.y;
          v24 = identity.fields.z;
          w = identity.fields.w;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v30.fields.x = x;
          v30.fields.y = y;
          v30.fields.z = z;
          v32.fields.x = v22;
          v32.fields.y = v23;
          v32.fields.z = v24;
          v32.fields.w = w;
          v26 = UnityEngine_Object__Instantiate_object_(
                  (Il2CppObject *)linePrefab,
                  v30,
                  v32,
                  (const MethodInfo_204AC10 *)Method_UnityEngine_Object_Instantiate_GameObject____68025368);
          Master_WarQuestSelectionMaster = srcLineSprite__GetGobjName(v16[4], 0LL);
          if ( v26 )
          {
            UnityEngine_Object__set_name(
              (UnityEngine_Object_o *)v26,
              (System_String_o *)Master_WarQuestSelectionMaster,
              0LL);
            GameObjectExtensions__SafeSetParent_31184716(
              (UnityEngine_GameObject_o *)v26,
              this->fields._RoadRoot_k__BackingField,
              0LL);
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)v26,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
              return;
            Master_WarQuestSelectionMaster = this->fields.lineList;
            if ( Master_WarQuestSelectionMaster )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ModelLineComponent__Add__);
              TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
              if ( TerminalMap_k__BackingField )
              {
                if ( Component_srcLineSprite )
                {
                  ModelLineComponent__Setup(
                    (ModelLineComponent_o *)Component_srcLineSprite,
                    spotRoadInfo,
                    Entity,
                    v18,
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
}


int32_t __fastcall MapModelManager__GetLayerBySpotPrefab(
        MapModelManager_o *this,
        SrcSpotBasePrefab_o *spotPrefab,
        const MethodInfo *method)
{
  __int64 v4; // x1
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  MapModelManager_c *v6; // x0
  int32_t Layer; // w19
  MapModelManager_c *v9; // x8

  if ( (byte_4212A0E & 1) == 0 )
  {
    sub_B0D8A4(&MapModelManager_TypeInfo, spotPrefab);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4212A0E = 1;
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
    v6 = MapModelManager_TypeInfo;
    if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v6 = MapModelManager_TypeInfo;
    }
    return v6->static_fields->LAYER_LOWER_ID;
  }
  else
  {
    if ( !spotPrefab || (mMapCtrl_SpotInfo = spotPrefab->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_B0D97C(mMapCtrl_SpotInfo);
    Layer = MapControl_SpotInfo__GetLayer(mMapCtrl_SpotInfo, 0LL);
    v9 = MapModelManager_TypeInfo;
    if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v9 = MapModelManager_TypeInfo;
    }
    return UnityEngine_Mathf__Max_40819140(Layer, v9->static_fields->LAYER_LOWER_ID, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MapModelManager__GetLocationPostion(
        MapModelManager_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x21
  const MethodInfo *v6; // x2
  float v7; // s0
  float v8; // s1
  float v9; // s2
  MapModelComponent_o *v10; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212A0D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
    byte_4212A0D = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
  }
  else
  {
    v10 = this->fields.mapModelComponent;
    if ( !v10 )
      sub_B0D97C(0LL);
    *(UnityEngine_Vector3_o *)&v7 = MapModelComponent__GetCameraLocationPosition(v10, layer, v6);
  }
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_GameObject_o *__fastcall MapModelManager__GetMapGimmickRootObject(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0
  struct MapModelComponent_o *v6; // x8

  if ( (byte_4212A0F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212A0F = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL);
  result = 0LL;
  if ( !v4 )
  {
    v6 = this->fields.mapModelComponent;
    if ( !v6 )
      sub_B0D97C(0LL);
    return v6->fields.mapModelGimmickRoot;
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_o **v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x23
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  const MethodInfo *v33; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v35; // x22
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  AssetLoader_LoadEndDataHandler_o *v39; // x19
  int32_t v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4212A06 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&assetId);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B0D8A4(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__, v11);
    sub_B0D8A4(&MapModelManager___c__DisplayClass41_0_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_13651/*"Terminal/MapModels/{0:D4}_{1}"*/, v13);
    byte_4212A06 = 1;
  }
  v14 = sub_B0D974(MapModelManager___c__DisplayClass41_0_TypeInfo, *(_QWORD *)&assetId, *(_QWORD *)&mapId);
  MapModelManager___c__DisplayClass41_0___ctor((MapModelManager___c__DisplayClass41_0_o *)v14, 0LL);
  if ( !v14 )
    sub_B0D97C(v15);
  *(_QWORD *)(v14 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v14 + 24) = endFunc;
  v22 = (System_Action_o **)(v14 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)endFunc, v23, v24, v25, v26, v27, v28);
  if ( MapModelManager__get_IsMapModel(this, v29) )
  {
    v41 = assetId;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v40 = mapId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    v32 = System_String__Format_43845440((System_String_o *)StringLiteral_13651/*"Terminal/MapModels/{0:D4}_{1}"*/, v30, v31, 0LL);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v35 = v32;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v32, 0LL) )
    {
      goto LABEL_11;
    }
    MapModelManager__ReleaseMapModelObject(this, v33);
    MapModelManager__ReleaseLineList(this, v36);
    v39 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v37, v38);
    AssetLoader_LoadEndDataHandler___ctor(
      v39,
      (Il2CppObject *)v14,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(v35, v39, 1, 0LL) )
LABEL_11:
      ActionExtensions__Call(*v22, 0LL);
  }
  else
  {
    ActionExtensions__Call(*v22, 0LL);
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x22
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s3.4,4:s4.4,8:s5.4

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v14 = startedPos.fields.z;
  v15 = startedPos.fields.y;
  v16 = startedPos.fields.x;
  if ( (byte_4212A09 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&targetLayer);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__, v20);
    sub_B0D8A4(&MapModelManager___c__DisplayClass45_0_TypeInfo, v21);
    byte_4212A09 = 1;
  }
  v22 = sub_B0D974(MapModelManager___c__DisplayClass45_0_TypeInfo, *(_QWORD *)&targetLayer, *(_QWORD *)&easingType);
  MapModelManager___c__DisplayClass45_0___ctor((MapModelManager___c__DisplayClass45_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_14;
  *(_QWORD *)(v22 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(float *)(v22 + 24) = v16;
  *(float *)(v22 + 28) = v15;
  *(float *)(v22 + 32) = v14;
  *(float *)(v22 + 36) = x;
  *(float *)(v22 + 40) = y;
  *(float *)(v22 + 44) = z;
  if ( duration <= 0.0 )
    goto LABEL_10;
  v42.fields.x = v16;
  v42.fields.y = v15;
  v42.fields.z = v14;
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  if ( UnityEngine_Vector3__op_Equality(v42, v43, 0LL) )
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
        Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                      gameObject,
                                                      (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v22 + 48) = Component_UIWidget,
        sub_B0D840((BattleServantConfConponent_o *)(v22 + 48), Component_UIWidget, v33, v34, v35, v36, v37, v38),
        v41 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v39, v40),
        System_Action___ctor(
          v41,
          (Il2CppObject *)v22,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0LL),
        (v23 = *(UnityEngine_Component_o **)(v22 + 48)) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(v23);
  }
  EasingObject__Play((EasingObject_o *)v23, duration, v41, endAction, 0.0, easingType, 0LL);
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
    sub_B0D97C(0LL);
  MapModelComponent__PlayAnimation(mapModelComponent, animationName, endAction, method);
}


void __fastcall MapModelManager__ReleaseAsset(MapModelManager_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_MapModelAssetData_k__BackingField; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *MapModelAssetData_k__BackingField; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4212A0A & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_4212A0A = 1;
  }
  MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
  p_MapModelAssetData_k__BackingField = (BattleServantConfConponent_o *)&this->fields._MapModelAssetData_k__BackingField;
  v4 = MapModelAssetData_k__BackingField;
  if ( MapModelAssetData_k__BackingField )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(v4, 0LL);
    p_MapModelAssetData_k__BackingField->klass = 0LL;
    sub_B0D840(p_MapModelAssetData_k__BackingField, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0

  if ( (byte_4212A0C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ModelLineComponent__Clear__, method);
    byte_4212A0C = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)lineList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ModelLineComponent__Clear__);
}


void __fastcall MapModelManager__ReleaseMapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *MapModelObject_k__BackingField; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4212A0B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212A0B = 1;
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
    UnityEngine_Object__Destroy_34935276(v4, 0LL);
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
    sub_B0D97C(0LL);
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
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0
  _BOOL8 v8; // x0
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4212A08 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_ModelLineComponent___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__, v6);
    byte_4212A08 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    lineList = this->fields.lineList;
    if ( !lineList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v10,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
      if ( !v8 )
        break;
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_B0D97C(v8);
      if ( !v10.fields.current )
        sub_B0D97C(0LL);
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v10.fields.current,
        (int32_t)TerminalMap_k__BackingField->fields.servantRoot,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
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
  struct MapModelComponent_o *v5; // x8

  if ( (byte_4212A10 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212A10 = 1;
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
  v5 = this->fields.mapModelComponent;
  if ( !v5 )
    sub_B0D97C(v4);
  return v5->fields.isMapCamera2DReset;
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
    sub_B0D97C(this);
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
  struct MapModelComponent_o *v5; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212A11 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212A11 = 1;
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
    v5 = this->fields.mapModelComponent;
    if ( !v5 )
      sub_B0D97C(v4);
    x = v5->fields.mapCamera2DResetPosition.fields.x;
    y = v5->fields.mapCamera2DResetPosition.fields.y;
    z = v5->fields.mapCamera2DResetPosition.fields.z;
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
  struct MapModelComponent_o *v5; // x8

  if ( (byte_4212A12 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212A12 = 1;
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
  v5 = this->fields.mapModelComponent;
  if ( !v5 )
    sub_B0D97C(v4);
  return v5->fields.mapCamera2DResetSize;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DispRoot_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DispRoot_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapModelManager__set_MapModelAssetData(
        MapModelManager_o *this,
        AssetData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MapModelAssetData_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._MapModelAssetData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapModelManager__set_MapModelCamera(
        MapModelManager_o *this,
        MapModelCamera_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MapModelCamera_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._MapModelCamera_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapModelManager__set_MapModelObject(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MapModelObject_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._MapModelObject_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapModelManager__set_MapModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MapModelScreen_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._MapModelScreen_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapModelManager__set_RoadRoot(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._RoadRoot_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._RoadRoot_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapModelManager__set_SpotModelCamera(
        MapModelManager_o *this,
        MapModelCamera_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SpotModelCamera_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SpotModelCamera_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapModelManager__set_SpotModelScreen(
        MapModelManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SpotModelScreen_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SpotModelScreen_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapModelManager__set_TerminalMap(
        MapModelManager_o *this,
        ScrTerminalMap_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._TerminalMap_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  AssetData_o *_4__this; // x0
  struct MapModelManager_o *v13; // x8
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  struct MapModelManager_o *v15; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x21
  struct MapModelManager_o *v17; // x8
  struct MapModelManager_o *v18; // x8
  struct MapModelManager_o *v19; // x8
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  ScrTerminalMap_c *v21; // x0
  int32_t v22; // w21
  struct MapModelManager_o *v23; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct MapModelManager_o *v25; // x8
  AssetData_c *klass; // x8
  const char *namespaze; // x1
  struct MapModelManager_o *v28; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v30; // x8
  struct MapModelManager_o *v31; // x8
  AssetData_c *v32; // x8
  void *data; // x1
  struct MapModelManager_o *v34; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v36; // x8
  MapModelManager_o *v37; // x20

  if ( (byte_4212702 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, assetData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___, v5);
    sub_B0D8A4(&MapModelManager_TypeInfo, v6);
    sub_B0D8A4(&NGUITools_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&ScrTerminalMap_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_16751/*"bg_map"*/, v11);
    byte_4212702 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_52;
  _4__this->fields.name = (struct System_String_o *)assetData;
  sub_B0D840(&_4__this->fields.name, assetData);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_52;
  _4__this = v13->fields._MapModelAssetData_k__BackingField;
  if ( !_4__this )
    goto LABEL_52;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     _4__this,
                                     (System_String_o *)StringLiteral_16751/*"bg_map"*/,
                                     (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  v15 = this->fields.__4__this;
  v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                              v16,
                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v15 )
    goto LABEL_52;
  v15->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)_4__this;
  sub_B0D840(&v15->fields._MapModelObject_k__BackingField, _4__this);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_52;
  GameObjectExtensions__SetParent_31184580(
    v17->fields._MapModelObject_k__BackingField,
    v17->fields._DispRoot_k__BackingField,
    0LL);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_52;
  GameObjectExtensions__ResetTransform(v18->fields._MapModelObject_k__BackingField, 0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_52;
  MapModelObject_k__BackingField = v19->fields._MapModelObject_k__BackingField;
  v21 = ScrTerminalMap_TypeInfo;
  if ( (BYTE3(ScrTerminalMap_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v21 = ScrTerminalMap_TypeInfo;
  }
  v22 = UnityEngine_LayerMask__NameToLayer(v21->static_fields->MAP_DISP_LAYER_MODEL, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v22, 0LL);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_52;
  _4__this = (AssetData_o *)v23->fields._MapModelObject_k__BackingField;
  if ( !_4__this )
    goto LABEL_52;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)_4__this,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  v23->fields.mapModelComponent = (struct MapModelComponent_o *)Component_srcLineSprite;
  sub_B0D840(&v23->fields.mapModelComponent, Component_srcLineSprite);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_52;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25->fields.mapModelComponent, 0LL, 0LL) )
  {
    _4__this = (AssetData_o *)this->fields.__4__this;
    if ( _4__this )
    {
      klass = _4__this[1].klass;
      if ( klass )
      {
        namespaze = klass->_1.namespaze;
        *(_QWORD *)&_4__this->fields.nowVersion = namespaze;
        sub_B0D840(&_4__this->fields.nowVersion, namespaze);
        v28 = this->fields.__4__this;
        if ( v28 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v28->fields._MapModelCamera_k__BackingField;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          _4__this = (AssetData_o *)UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL);
          if ( ((unsigned __int8)_4__this & 1) != 0 )
          {
            v30 = this->fields.__4__this;
            if ( !v30 )
              goto LABEL_52;
            _4__this = (AssetData_o *)v30->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_52;
            _4__this = (AssetData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
            if ( !_4__this )
              goto LABEL_52;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
            v31 = this->fields.__4__this;
            if ( !v31 )
              goto LABEL_52;
            _4__this = (AssetData_o *)v31->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_52;
            MapModelCamera__Setup((MapModelCamera_o *)_4__this, v31->fields._MapModelScreen_k__BackingField, 0LL);
          }
          _4__this = (AssetData_o *)this->fields.__4__this;
          if ( _4__this )
          {
            v32 = _4__this[1].klass;
            if ( v32 )
            {
              data = v32->_1.byval_arg.data;
              *(_QWORD *)&_4__this->fields.size = data;
              sub_B0D840(&_4__this->fields.size, data);
              v34 = this->fields.__4__this;
              if ( v34 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v34->fields._SpotModelCamera_k__BackingField;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                _4__this = (AssetData_o *)UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0LL, 0LL);
                if ( ((unsigned __int8)_4__this & 1) != 0 )
                {
                  v36 = this->fields.__4__this;
                  if ( !v36 )
                    goto LABEL_52;
                  _4__this = (AssetData_o *)v36->fields._SpotModelCamera_k__BackingField;
                  if ( !_4__this )
                    goto LABEL_52;
                  MapModelCamera__Setup((MapModelCamera_o *)_4__this, v36->fields._SpotModelScreen_k__BackingField, 0LL);
                }
                v37 = this->fields.__4__this;
                _4__this = (AssetData_o *)MapModelManager_TypeInfo;
                if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !MapModelManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
                }
                if ( v37 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v37,
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
    sub_B0D97C(_4__this);
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
    sub_B0D97C(this);
  }
  v5 = (UnityEngine_GameObject_o *)this;
  v6 = Easing__Func(v3->fields.startedPos, v3->fields.endedPos, easingObject->fields.mStartTime, 0, 0LL);
  GameObjectExtensions__SetLocalPosition(v5, v6, 0LL);
}