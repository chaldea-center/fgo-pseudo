void __fastcall MapModelManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FB609 & 1) == 0 )
  {
    sub_B16FFC(&MapModelManager_TypeInfo, v1);
    byte_40FB609 = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void __fastcall MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FB608 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_ModelLineComponent__TypeInfo, v6);
    byte_40FB608 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ModelLineComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lineList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x23
  SpotRoadEntity_o *Mine; // x0
  int32_t dstSpotId; // w25
  SpotRoadEntity_o *v17; // x24
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
  System_String_o *GobjName; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40FB5FC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SpotMaster___, spotRoadInfo);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ModelLineComponent__Add__, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874920, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FB5FC = 1;
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SpotMaster___);
    if ( spotRoadInfo )
    {
      v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      Mine = MapControl_SpotRoadInfo__GetMine(spotRoadInfo, 0LL);
      if ( Mine )
      {
        if ( v14 )
        {
          dstSpotId = Mine->fields.dstSpotId;
          v17 = Mine;
          Entity = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v14,
                                     Mine->fields.srcSpotId,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v19 = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v14,
                                  dstSpotId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
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
          v33.fields.x = x;
          v33.fields.y = y;
          v33.fields.z = z;
          v35.fields.x = v23;
          v35.fields.y = v24;
          v35.fields.z = v25;
          v35.fields.w = w;
          v27 = UnityEngine_Object__Instantiate_object_(
                  (Il2CppObject *)linePrefab,
                  v33,
                  v35,
                  (const MethodInfo_19DE498 *)Method_UnityEngine_Object_Instantiate_GameObject____66874920);
          GobjName = srcLineSprite__GetGobjName(v17->fields.id, 0LL);
          if ( v27 )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v27, GobjName, 0LL);
            GameObjectExtensions__SafeSetParent_27425996(
              (UnityEngine_GameObject_o *)v27,
              this->fields._RoadRoot_k__BackingField,
              0LL);
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)v27,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
              return;
            lineList = this->fields.lineList;
            if ( lineList )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ModelLineComponent__Add__);
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
    sub_B170D4();
  }
}


int32_t __fastcall MapModelManager__GetLayerBySpotPrefab(
        MapModelManager_o *this,
        SrcSpotBasePrefab_o *spotPrefab,
        const MethodInfo *method)
{
  __int64 v4; // x1
  MapModelManager_c *v5; // x0
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  int32_t Layer; // w19
  MapModelManager_c *v9; // x8

  if ( (byte_40FB603 & 1) == 0 )
  {
    sub_B16FFC(&MapModelManager_TypeInfo, spotPrefab);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FB603 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)spotPrefab, 0LL, 0LL) )
  {
    v5 = MapModelManager_TypeInfo;
    if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v5 = MapModelManager_TypeInfo;
    }
    return v5->static_fields->LAYER_LOWER_ID;
  }
  else
  {
    if ( !spotPrefab || (mMapCtrl_SpotInfo = spotPrefab->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_B170D4();
    Layer = MapControl_SpotInfo__GetLayer(mMapCtrl_SpotInfo, 0LL);
    v9 = MapModelManager_TypeInfo;
    if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v9 = MapModelManager_TypeInfo;
    }
    return UnityEngine_Mathf__Max_40727628(Layer, v9->static_fields->LAYER_LOWER_ID, 0LL);
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

  if ( (byte_40FB602 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
    byte_40FB602 = 1;
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
      sub_B170D4();
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

  if ( (byte_40FB604 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB604 = 1;
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
      sub_B170D4();
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o **v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  Il2CppObject *v29; // x23
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v34; // x22
  const MethodInfo *v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  AssetLoader_LoadEndDataHandler_o *v40; // x19
  int32_t v41; // [xsp+8h] [xbp-38h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB5FB & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&assetId);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B16FFC(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__, v11);
    sub_B16FFC(&MapModelManager___c__DisplayClass41_0_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_13550/*"Terminal/MapModels/{0:D4}_{1}"*/, v13);
    byte_40FB5FB = 1;
  }
  v14 = sub_B170CC(
          MapModelManager___c__DisplayClass41_0_TypeInfo,
          *(_QWORD *)&assetId,
          *(_QWORD *)&mapId,
          endFunc,
          method);
  MapModelManager___c__DisplayClass41_0___ctor((MapModelManager___c__DisplayClass41_0_o *)v14, 0LL);
  if ( !v14 )
    sub_B170D4();
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = endFunc;
  v21 = (System_Action_o **)(v14 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)endFunc, v22, v23, v24, v25, v26, v27);
  if ( MapModelManager__get_IsMapModel(this, v28) )
  {
    v42 = assetId;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    v41 = mapId;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v31 = System_String__Format_43739268((System_String_o *)StringLiteral_13550/*"Terminal/MapModels/{0:D4}_{1}"*/, v29, v30, 0LL);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v34 = v31;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v31, 0LL) )
    {
      goto LABEL_11;
    }
    MapModelManager__ReleaseMapModelObject(this, v32);
    MapModelManager__ReleaseLineList(this, v35);
    v40 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v36, v37, v38, v39);
    AssetLoader_LoadEndDataHandler___ctor(
      v40,
      (Il2CppObject *)v14,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(v34, v40, 1, 0LL) )
LABEL_11:
      ActionExtensions__Call(*v21, 0LL);
  }
  else
  {
    ActionExtensions__Call(*v21, 0LL);
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_Component_o *v30; // x0
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
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x22
  EasingObject_o *v44; // x0
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s3.4,4:s4.4,8:s5.4

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v14 = startedPos.fields.z;
  v15 = startedPos.fields.y;
  v16 = startedPos.fields.x;
  if ( (byte_40FB5FE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&targetLayer);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__, v20);
    sub_B16FFC(&MapModelManager___c__DisplayClass45_0_TypeInfo, v21);
    byte_40FB5FE = 1;
  }
  v22 = sub_B170CC(
          MapModelManager___c__DisplayClass45_0_TypeInfo,
          *(_QWORD *)&targetLayer,
          *(_QWORD *)&easingType,
          endAction,
          method);
  MapModelManager___c__DisplayClass45_0___ctor((MapModelManager___c__DisplayClass45_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_14;
  *(_QWORD *)(v22 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(float *)(v22 + 24) = v16;
  *(float *)(v22 + 28) = v15;
  *(float *)(v22 + 32) = v14;
  *(float *)(v22 + 36) = x;
  *(float *)(v22 + 40) = y;
  *(float *)(v22 + 44) = z;
  if ( duration <= 0.0 )
    goto LABEL_10;
  v45.fields.x = v16;
  v45.fields.y = v15;
  v45.fields.z = v14;
  v46.fields.x = x;
  v46.fields.y = y;
  v46.fields.z = z;
  if ( UnityEngine_Vector3__op_Equality(v45, v46, 0LL) )
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
  v30 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !v30
    || (gameObject = UnityEngine_Component__get_gameObject(v30, 0LL),
        Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                      gameObject,
                                                      (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v22 + 48) = Component_UIWidget,
        sub_B16F98((BattleServantConfConponent_o *)(v22 + 48), Component_UIWidget, v33, v34, v35, v36, v37, v38),
        v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42),
        System_Action___ctor(
          v43,
          (Il2CppObject *)v22,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0LL),
        (v44 = *(EasingObject_o **)(v22 + 48)) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  EasingObject__Play(v44, duration, v43, endAction, 0.0, easingType, 0LL);
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
    sub_B170D4();
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

  if ( (byte_40FB5FF & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40FB5FF = 1;
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
    AssetManager__releaseAsset_29947376(v4, 0LL);
    p_MapModelAssetData_k__BackingField->klass = 0LL;
    sub_B16F98(p_MapModelAssetData_k__BackingField, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0

  if ( (byte_40FB601 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ModelLineComponent__Clear__, method);
    byte_40FB601 = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)lineList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ModelLineComponent__Clear__);
}


void __fastcall MapModelManager__ReleaseMapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *MapModelObject_k__BackingField; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_40FB600 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB600 = 1;
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
    UnityEngine_Object__Destroy_34809464(v4, 0LL);
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
    sub_B170D4();
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
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB5FD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_ModelLineComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__, v6);
    byte_40FB5FD = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    lineList = this->fields.lineList;
    if ( !lineList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__) )
    {
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_B170D4();
      if ( !v9.fields.current )
        sub_B170D4();
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v9.fields.current,
        (int32_t)TerminalMap_k__BackingField->fields.servantRoot,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
  }
}


UnityEngine_GameObject_o *__fastcall MapModelManager__get_DispRoot(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._DispRoot_k__BackingField;
}


bool __fastcall MapModelManager__get_IsMapCamera2DReset(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  struct MapModelComponent_o *v4; // x8

  if ( (byte_40FB605 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB605 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL) )
    return 1;
  v4 = this->fields.mapModelComponent;
  if ( !v4 )
    sub_B170D4();
  return v4->fields.isMapCamera2DReset;
}


bool __fastcall MapModelManager__get_IsMapModel(MapModelManager_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  MapControl_MapInfo_o *mWarEnt; // x0
  MapEntity_o *Mine; // x0
  const MethodInfo *v5; // x1

  TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
  if ( !TerminalMap_k__BackingField )
    goto LABEL_6;
  mWarEnt = (MapControl_MapInfo_o *)TerminalMap_k__BackingField->fields.mWarEnt;
  if ( !mWarEnt )
    return (char)mWarEnt;
  Mine = MapControl_MapInfo__GetMine(mWarEnt, 0LL);
  if ( !Mine )
LABEL_6:
    sub_B170D4();
  LOBYTE(mWarEnt) = MapEntity__IsMapModel(Mine, v5);
  return (char)mWarEnt;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MapModelManager__get_MapCamera2DResetPosition(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapModelComponent; // x20
  struct MapModelComponent_o *v4; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB606 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB606 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL) )
  {
    v4 = this->fields.mapModelComponent;
    if ( !v4 )
      sub_B170D4();
    x = v4->fields.mapCamera2DResetPosition.fields.x;
    y = v4->fields.mapCamera2DResetPosition.fields.y;
    z = v4->fields.mapCamera2DResetPosition.fields.z;
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
  struct MapModelComponent_o *v4; // x8

  if ( (byte_40FB607 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB607 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL) )
    return 1.0;
  v4 = this->fields.mapModelComponent;
  if ( !v4 )
    sub_B170D4();
  return v4->fields.mapCamera2DResetSize;
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  struct MapModelManager_o *_4__this; // x0
  struct MapModelManager_o *v18; // x8
  AssetData_o *MapModelAssetData_k__BackingField; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  struct MapModelManager_o *v21; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v22; // x21
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct MapModelManager_o *v30; // x8
  struct MapModelManager_o *v31; // x8
  struct MapModelManager_o *v32; // x8
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  ScrTerminalMap_c *v34; // x0
  int32_t v35; // w21
  struct MapModelManager_o *v36; // x20
  UnityEngine_GameObject_o *v37; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct MapModelManager_o *v45; // x8
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct MapModelManager_o *v52; // x0
  struct MapModelComponent_o *mapModelComponent; // x8
  System_Int32_array **mapModelCamera; // x1
  struct MapModelManager_o *v55; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct MapModelManager_o *v63; // x8
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapModelManager_o *v66; // x8
  MapModelCamera_o *v67; // x0
  struct MapModelManager_o *v68; // x0
  struct MapModelComponent_o *v69; // x8
  System_Int32_array **spotModelCamera; // x1
  struct MapModelManager_o *v71; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v73; // x8
  MapModelCamera_o *v74; // x0
  MapModelManager_o *v75; // x20

  if ( (byte_40F694E & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___, v10);
    sub_B16FFC(&MapModelManager_TypeInfo, v11);
    sub_B16FFC(&NGUITools_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&ScrTerminalMap_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_16638/*"bg_map"*/, v16);
    byte_40F694E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_52;
  _4__this->fields._MapModelAssetData_k__BackingField = assetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields._MapModelAssetData_k__BackingField,
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
  MapModelAssetData_k__BackingField = v18->fields._MapModelAssetData_k__BackingField;
  if ( !MapModelAssetData_k__BackingField )
    goto LABEL_52;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     MapModelAssetData_k__BackingField,
                                     (System_String_o *)StringLiteral_16638/*"bg_map"*/,
                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  v21 = this->fields.__4__this;
  v22 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 v22,
                                 (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v21 )
    goto LABEL_52;
  v21->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->fields._MapModelObject_k__BackingField,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_52;
  GameObjectExtensions__SetParent_27425860(
    v30->fields._MapModelObject_k__BackingField,
    v30->fields._DispRoot_k__BackingField,
    0LL);
  v31 = this->fields.__4__this;
  if ( !v31 )
    goto LABEL_52;
  GameObjectExtensions__ResetTransform(v31->fields._MapModelObject_k__BackingField, 0LL);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_52;
  MapModelObject_k__BackingField = v32->fields._MapModelObject_k__BackingField;
  v34 = ScrTerminalMap_TypeInfo;
  if ( (BYTE3(ScrTerminalMap_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v34 = ScrTerminalMap_TypeInfo;
  }
  v35 = UnityEngine_LayerMask__NameToLayer(v34->static_fields->MAP_DISP_LAYER_MODEL, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v35, 0LL);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_52;
  v37 = v36->fields._MapModelObject_k__BackingField;
  if ( !v37 )
    goto LABEL_52;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v37,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  v36->fields.mapModelComponent = (struct MapModelComponent_o *)Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v36->fields.mapModelComponent,
    Component_srcLineSprite,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = this->fields.__4__this;
  if ( !v45 )
    goto LABEL_52;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45->fields.mapModelComponent, 0LL, 0LL) )
  {
    v52 = this->fields.__4__this;
    if ( v52 )
    {
      mapModelComponent = v52->fields.mapModelComponent;
      if ( mapModelComponent )
      {
        mapModelCamera = (System_Int32_array **)mapModelComponent->fields.mapModelCamera;
        v52->fields._MapModelCamera_k__BackingField = (struct MapModelCamera_o *)mapModelCamera;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v52->fields._MapModelCamera_k__BackingField,
          mapModelCamera,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        v55 = this->fields.__4__this;
        if ( v55 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v55->fields._MapModelCamera_k__BackingField;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL) )
          {
            v63 = this->fields.__4__this;
            if ( !v63 )
              goto LABEL_52;
            v64 = (UnityEngine_Component_o *)v63->fields._MapModelCamera_k__BackingField;
            if ( !v64 )
              goto LABEL_52;
            gameObject = UnityEngine_Component__get_gameObject(v64, 0LL);
            if ( !gameObject )
              goto LABEL_52;
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            v66 = this->fields.__4__this;
            if ( !v66 )
              goto LABEL_52;
            v67 = v66->fields._MapModelCamera_k__BackingField;
            if ( !v67 )
              goto LABEL_52;
            MapModelCamera__Setup(v67, v66->fields._MapModelScreen_k__BackingField, 0LL);
          }
          v68 = this->fields.__4__this;
          if ( v68 )
          {
            v69 = v68->fields.mapModelComponent;
            if ( v69 )
            {
              spotModelCamera = (System_Int32_array **)v69->fields.spotModelCamera;
              v68->fields._SpotModelCamera_k__BackingField = (struct MapModelCamera_o *)spotModelCamera;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v68->fields._SpotModelCamera_k__BackingField,
                spotModelCamera,
                v57,
                v58,
                v59,
                v60,
                v61,
                v62);
              v71 = this->fields.__4__this;
              if ( v71 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v71->fields._SpotModelCamera_k__BackingField;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0LL, 0LL) )
                {
                  v73 = this->fields.__4__this;
                  if ( !v73 )
                    goto LABEL_52;
                  v74 = v73->fields._SpotModelCamera_k__BackingField;
                  if ( !v74 )
                    goto LABEL_52;
                  MapModelCamera__Setup(v74, v73->fields._SpotModelScreen_k__BackingField, 0LL);
                }
                v75 = this->fields.__4__this;
                if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !MapModelManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
                }
                if ( v75 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v75,
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
    sub_B170D4();
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
  UnityEngine_Component_o *MapModelCamera_k__BackingField; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct EasingObject_o *easingObject; // x8
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (MapModelCamera_k__BackingField = (UnityEngine_Component_o *)_4__this->fields._MapModelCamera_k__BackingField) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(MapModelCamera_k__BackingField, 0LL),
        (easingObject = this->fields.easingObject) == 0LL) )
  {
    sub_B170D4();
  }
  v7 = gameObject;
  v8 = Easing__Func(this->fields.startedPos, this->fields.endedPos, easingObject->fields.mStartTime, 0, 0LL);
  GameObjectExtensions__SetLocalPosition(v7, v8, 0LL);
}