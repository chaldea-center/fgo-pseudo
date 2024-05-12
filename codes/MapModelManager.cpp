void __fastcall MapModelManager___cctor(const MethodInfo *method)
{
  if ( (byte_438E5B0 & 1) == 0 )
  {
    sub_B775C4(&MapModelManager_TypeInfo);
    byte_438E5B0 = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void __fastcall MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438E5AF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ModelLineComponent__TypeInfo);
    byte_438E5AF = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ModelLineComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.lineList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapModelManager__CreateModelLineBySpotId(
        MapModelManager_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        UnityEngine_GameObject_o *linePrefab,
        const MethodInfo *method)
{
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x23
  int32_t v10; // w25
  _DWORD *v11; // x24
  SpotEntity_o *Entity; // x22
  SpotEntity_o *v13; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v17; // s11
  float v18; // s12
  float v19; // s13
  float w; // s14
  Il2CppObject *v21; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_438E5A3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SpotMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_ModelLineComponent__Add__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541624);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5A3 = 1;
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SpotMaster___);
    if ( spotRoadInfo )
    {
      v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = MapControl_SpotRoadInfo__GetMine(spotRoadInfo, 0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        if ( v9 )
        {
          v10 = *((_DWORD *)Master_WarQuestSelectionMaster + 7);
          v11 = Master_WarQuestSelectionMaster;
          Entity = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v9,
                                     *((_DWORD *)Master_WarQuestSelectionMaster + 6),
                                     (const MethodInfo_21FB894 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v13 = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v9,
                                  v10,
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          zero = UnityEngine_Vector3__get_zero(0LL);
          x = zero.fields.x;
          y = zero.fields.y;
          z = zero.fields.z;
          identity = UnityEngine_Quaternion__get_identity(0LL);
          v17 = identity.fields.x;
          v18 = identity.fields.y;
          v19 = identity.fields.z;
          w = identity.fields.w;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v25.fields.x = x;
          v25.fields.y = y;
          v25.fields.z = z;
          v27.fields.x = v17;
          v27.fields.y = v18;
          v27.fields.z = v19;
          v27.fields.w = w;
          v21 = UnityEngine_Object__Instantiate_object_(
                  (Il2CppObject *)linePrefab,
                  v25,
                  v27,
                  (const MethodInfo_1DF9B8C *)Method_UnityEngine_Object_Instantiate_GameObject____69541624);
          Master_WarQuestSelectionMaster = srcLineSprite__GetGobjName(v11[4], 0LL);
          if ( v21 )
          {
            UnityEngine_Object__set_name(
              (UnityEngine_Object_o *)v21,
              (System_String_o *)Master_WarQuestSelectionMaster,
              0LL);
            GameObjectExtensions__SafeSetParent_32813688(
              (UnityEngine_GameObject_o *)v21,
              this->fields._RoadRoot_k__BackingField,
              0LL);
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)v21,
                                                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
              return;
            Master_WarQuestSelectionMaster = this->fields.lineList;
            if ( Master_WarQuestSelectionMaster )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ModelLineComponent__Add__);
              TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
              if ( TerminalMap_k__BackingField )
              {
                if ( Component_srcLineSprite )
                {
                  ModelLineComponent__Setup(
                    (ModelLineComponent_o *)Component_srcLineSprite,
                    spotRoadInfo,
                    Entity,
                    v13,
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
    sub_B7769C(Master_WarQuestSelectionMaster, v8);
  }
}


int32_t __fastcall MapModelManager__GetLayerBySpotPrefab(
        MapModelManager_o *this,
        SrcSpotBasePrefab_o *spotPrefab,
        const MethodInfo *method)
{
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  __int64 v5; // x1
  MapModelManager_c *v6; // x0
  int32_t Layer; // w19
  MapModelManager_c *v9; // x8

  if ( (byte_438E5AA & 1) == 0 )
  {
    sub_B775C4(&MapModelManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5AA = 1;
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
      sub_B7769C(mMapCtrl_SpotInfo, v5);
    Layer = MapControl_SpotInfo__GetLayer(mMapCtrl_SpotInfo, 0LL);
    v9 = MapModelManager_TypeInfo;
    if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v9 = MapModelManager_TypeInfo;
    }
    return UnityEngine_Mathf__Max_41473772(Layer, v9->static_fields->LAYER_LOWER_ID, 0LL);
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

  if ( (byte_438E5A9 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5A9 = 1;
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
      sub_B7769C(0LL, v6);
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

  if ( (byte_438E5AB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5AB = 1;
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
      sub_B7769C(0LL, v4);
    return v7->fields.mapModelGimmickRoot;
  }
  return result;
}


void __fastcall MapModelManager__LoadMapModel(
        MapModelManager_o *this,
        int32_t assetId,
        int32_t mapId,
        System_Action_o *endFunc,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o **v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  Il2CppObject *v27; // x23
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v33; // x22
  const MethodInfo *v34; // x1
  AssetLoader_LoadEndDataHandler_o *v35; // x19
  int32_t v36; // [xsp+8h] [xbp-38h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438E5A2 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__);
    sub_B775C4(&MapModelManager___c__DisplayClass41_0_TypeInfo);
    sub_B775C4(&StringLiteral_13857/*"Terminal/MapModels/{0:D4}_{1}"*/);
    byte_438E5A2 = 1;
  }
  v9 = sub_B77694(MapModelManager___c__DisplayClass41_0_TypeInfo);
  MapModelManager___c__DisplayClass41_0___ctor((MapModelManager___c__DisplayClass41_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = endFunc;
  v18 = (System_Action_o **)(v9 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)endFunc, v19, v20, v21, v22, v23, v24);
  if ( MapModelManager__get_IsMapModel(this, v25) )
  {
    v37 = assetId;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v26);
    v36 = mapId;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v28);
    v30 = System_String__Format_44897472((System_String_o *)StringLiteral_13857/*"Terminal/MapModels/{0:D4}_{1}"*/, v27, v29, 0LL);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v33 = v30;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v30, 0LL) )
    {
      goto LABEL_11;
    }
    MapModelManager__ReleaseMapModelObject(this, v31);
    MapModelManager__ReleaseLineList(this, v34);
    v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v35,
      (Il2CppObject *)v9,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(v33, v35, 1, 0LL) )
LABEL_11:
      ActionExtensions__Call(*v18, 0LL);
  }
  else
  {
    ActionExtensions__Call(*v18, 0LL);
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
  __int64 v18; // x21
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Action_o *v36; // x22
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s3.4,4:s4.4,8:s5.4

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v14 = startedPos.fields.z;
  v15 = startedPos.fields.y;
  v16 = startedPos.fields.x;
  if ( (byte_438E5A5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__);
    sub_B775C4(&MapModelManager___c__DisplayClass45_0_TypeInfo);
    byte_438E5A5 = 1;
  }
  v18 = sub_B77694(MapModelManager___c__DisplayClass45_0_TypeInfo);
  MapModelManager___c__DisplayClass45_0___ctor((MapModelManager___c__DisplayClass45_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_14;
  *(_QWORD *)(v18 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(float *)(v18 + 24) = v16;
  *(float *)(v18 + 28) = v15;
  *(float *)(v18 + 32) = v14;
  *(float *)(v18 + 36) = x;
  *(float *)(v18 + 40) = y;
  *(float *)(v18 + 44) = z;
  if ( duration <= 0.0 )
    goto LABEL_10;
  v37.fields.x = v16;
  v37.fields.y = v15;
  v37.fields.z = v14;
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  if ( UnityEngine_Vector3__op_Equality(v37, v38, 0LL) )
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
  v19 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !v19
    || (gameObject = UnityEngine_Component__get_gameObject(v19, 0LL),
        Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                      gameObject,
                                                      (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v18 + 48) = Component_UIWidget,
        sub_B77560((BattleServantConfConponent_o *)(v18 + 48), Component_UIWidget, v30, v31, v32, v33, v34, v35),
        v36 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v18,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0LL),
        (v19 = *(UnityEngine_Component_o **)(v18 + 48)) == 0LL) )
  {
LABEL_14:
    sub_B7769C(v19, v20);
  }
  EasingObject__Play((EasingObject_o *)v19, duration, v36, endAction, 0.0, easingType, 0LL);
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
    sub_B7769C(0LL, animationName);
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

  if ( (byte_438E5A6 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438E5A6 = 1;
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
    AssetManager__releaseAsset_24402476(v4, 0LL);
    p_MapModelAssetData_k__BackingField->klass = 0LL;
    sub_B77560(p_MapModelAssetData_k__BackingField, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0

  if ( (byte_438E5A8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ModelLineComponent__Clear__);
    byte_438E5A8 = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)lineList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ModelLineComponent__Clear__);
}


void __fastcall MapModelManager__ReleaseMapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *MapModelObject_k__BackingField; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_438E5A7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5A7 = 1;
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
    UnityEngine_Object__Destroy_36309980(v4, 0LL);
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
    sub_B7769C(0LL, layer);
  gameObject = UnityEngine_Component__get_gameObject(MapModelCamera_k__BackingField, 0LL);
  LocationPostion = MapModelManager__GetLocationPostion(this, layer, v7);
  GameObjectExtensions__SetLocalPosition(gameObject, LocationPostion, 0LL);
}


void __fastcall MapModelManager__UpdateLineDispAll(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E5A4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Any_ModelLineComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    byte_438E5A4 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
         (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    lineList = this->fields.lineList;
    if ( !lineList )
      sub_B7769C(0LL, v3);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v8,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
      if ( !v5 )
        break;
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_B7769C(v5, v6);
      if ( !v8.fields.current )
        sub_B7769C(0LL, v6);
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v8.fields.current,
        (int32_t)TerminalMap_k__BackingField->fields.servantRoot,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
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

  if ( (byte_438E5AC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5AC = 1;
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
    sub_B7769C(v4, v5);
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
    sub_B7769C(this, method);
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

  if ( (byte_438E5AD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5AD = 1;
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
      sub_B7769C(v4, v5);
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

  if ( (byte_438E5AE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5AE = 1;
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
    sub_B7769C(v4, v5);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DispRoot_k__BackingField = value;
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  AssetData_o *_4__this; // x0
  struct MapModelManager_o *v6; // x8
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  struct MapModelManager_o *v8; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v9; // x21
  struct MapModelManager_o *v10; // x8
  struct MapModelManager_o *v11; // x8
  struct MapModelManager_o *v12; // x8
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  ScrTerminalMap_c *v14; // x0
  int32_t v15; // w21
  struct MapModelManager_o *v16; // x20
  struct MapModelManager_o *v17; // x8
  AssetData_c *klass; // x8
  struct MapModelManager_o *v19; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v21; // x8
  struct MapModelManager_o *v22; // x8
  AssetData_c *v23; // x8
  struct MapModelManager_o *v24; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v26; // x8
  MapModelManager_o *v27; // x20

  if ( (byte_43889A4 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
    sub_B775C4(&MapModelManager_TypeInfo);
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ScrTerminalMap_TypeInfo);
    sub_B775C4(&StringLiteral_17034/*"bg_map"*/);
    byte_43889A4 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_52;
  _4__this->fields.name = (struct System_String_o *)assetData;
  sub_B77560(&_4__this->fields.name);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_52;
  _4__this = v6->fields._MapModelAssetData_k__BackingField;
  if ( !_4__this )
    goto LABEL_52;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     _4__this,
                                     (System_String_o *)StringLiteral_17034/*"bg_map"*/,
                                     (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  v8 = this->fields.__4__this;
  v9 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                              v9,
                              (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v8 )
    goto LABEL_52;
  v8->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)_4__this;
  sub_B77560(&v8->fields._MapModelObject_k__BackingField);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_52;
  GameObjectExtensions__SetParent_32813552(
    v10->fields._MapModelObject_k__BackingField,
    v10->fields._DispRoot_k__BackingField,
    0LL);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_52;
  GameObjectExtensions__ResetTransform(v11->fields._MapModelObject_k__BackingField, 0LL);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_52;
  MapModelObject_k__BackingField = v12->fields._MapModelObject_k__BackingField;
  v14 = ScrTerminalMap_TypeInfo;
  if ( (BYTE3(ScrTerminalMap_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v14 = ScrTerminalMap_TypeInfo;
  }
  v15 = UnityEngine_LayerMask__NameToLayer(v14->static_fields->MAP_DISP_LAYER_MODEL, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v15, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_52;
  _4__this = (AssetData_o *)v16->fields._MapModelObject_k__BackingField;
  if ( !_4__this )
    goto LABEL_52;
  v16->fields.mapModelComponent = (struct MapModelComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)_4__this,
                                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  sub_B77560(&v16->fields.mapModelComponent);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_52;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17->fields.mapModelComponent, 0LL, 0LL) )
  {
    _4__this = (AssetData_o *)this->fields.__4__this;
    if ( _4__this )
    {
      klass = _4__this[1].klass;
      if ( klass )
      {
        *(_QWORD *)&_4__this->fields.nowVersion = klass->_1.namespaze;
        sub_B77560(&_4__this->fields.nowVersion);
        v19 = this->fields.__4__this;
        if ( v19 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v19->fields._MapModelCamera_k__BackingField;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          _4__this = (AssetData_o *)UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL);
          if ( ((unsigned __int8)_4__this & 1) != 0 )
          {
            v21 = this->fields.__4__this;
            if ( !v21 )
              goto LABEL_52;
            _4__this = (AssetData_o *)v21->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_52;
            _4__this = (AssetData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
            if ( !_4__this )
              goto LABEL_52;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
            v22 = this->fields.__4__this;
            if ( !v22 )
              goto LABEL_52;
            _4__this = (AssetData_o *)v22->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_52;
            MapModelCamera__Setup((MapModelCamera_o *)_4__this, v22->fields._MapModelScreen_k__BackingField, 0LL);
          }
          _4__this = (AssetData_o *)this->fields.__4__this;
          if ( _4__this )
          {
            v23 = _4__this[1].klass;
            if ( v23 )
            {
              *(_QWORD *)&_4__this->fields.size = v23->_1.byval_arg.data;
              sub_B77560(&_4__this->fields.size);
              v24 = this->fields.__4__this;
              if ( v24 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v24->fields._SpotModelCamera_k__BackingField;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                _4__this = (AssetData_o *)UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0LL, 0LL);
                if ( ((unsigned __int8)_4__this & 1) != 0 )
                {
                  v26 = this->fields.__4__this;
                  if ( !v26 )
                    goto LABEL_52;
                  _4__this = (AssetData_o *)v26->fields._SpotModelCamera_k__BackingField;
                  if ( !_4__this )
                    goto LABEL_52;
                  MapModelCamera__Setup((MapModelCamera_o *)_4__this, v26->fields._SpotModelScreen_k__BackingField, 0LL);
                }
                v27 = this->fields.__4__this;
                _4__this = (AssetData_o *)MapModelManager_TypeInfo;
                if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !MapModelManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
                }
                if ( v27 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v27,
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
    sub_B7769C(_4__this, assetData);
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
    sub_B7769C(this, method);
  }
  v5 = (UnityEngine_GameObject_o *)this;
  v6 = Easing__Func(v3->fields.startedPos, v3->fields.endedPos, easingObject->fields.mStartTime, 0, 0LL);
  GameObjectExtensions__SetLocalPosition(v5, v6, 0LL);
}