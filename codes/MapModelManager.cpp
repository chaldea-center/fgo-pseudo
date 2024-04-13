void __fastcall MapModelManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB3A & 1) == 0 )
  {
    sub_B5D5C4(&MapModelManager_TypeInfo, v1, v2, v3);
    byte_42EBB3A = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void __fastcall MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EBB39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_ModelLineComponent__TypeInfo, v5, v6, v7);
    byte_42EBB39 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ModelLineComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lineList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapModelManager__CreateModelLineBySpotId(
        MapModelManager_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        UnityEngine_GameObject_o *linePrefab,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v26; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x23
  int32_t v28; // w25
  _DWORD *v29; // x24
  SpotEntity_o *Entity; // x22
  SpotEntity_o *v31; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v35; // s11
  float v36; // s12
  float v37; // s13
  float w; // s14
  Il2CppObject *v39; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v45; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42EBB2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SpotMaster___, (_DWORD)spotRoadInfo, (_DWORD)linePrefab, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ModelLineComponent__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882840, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    byte_42EBB2D = 1;
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SpotMaster___);
    if ( spotRoadInfo )
    {
      v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = MapControl_SpotRoadInfo__GetMine(spotRoadInfo, 0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        if ( v27 )
        {
          v28 = *((_DWORD *)Master_WarQuestSelectionMaster + 7);
          v29 = Master_WarQuestSelectionMaster;
          Entity = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v27,
                                     *((_DWORD *)Master_WarQuestSelectionMaster + 6),
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v31 = (SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v27,
                                  v28,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          zero = UnityEngine_Vector3__get_zero(0LL);
          x = zero.fields.x;
          y = zero.fields.y;
          z = zero.fields.z;
          identity = UnityEngine_Quaternion__get_identity(0LL);
          v35 = identity.fields.x;
          v36 = identity.fields.y;
          v37 = identity.fields.z;
          w = identity.fields.w;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v43.fields.x = x;
          v43.fields.y = y;
          v43.fields.z = z;
          v45.fields.x = v35;
          v45.fields.y = v36;
          v45.fields.z = v37;
          v45.fields.w = w;
          v39 = UnityEngine_Object__Instantiate_object_(
                  (Il2CppObject *)linePrefab,
                  v43,
                  v45,
                  (const MethodInfo_1E66564 *)Method_UnityEngine_Object_Instantiate_GameObject____68882840);
          Master_WarQuestSelectionMaster = srcLineSprite__GetGobjName(v29[4], 0LL);
          if ( v39 )
          {
            UnityEngine_Object__set_name(
              (UnityEngine_Object_o *)v39,
              (System_String_o *)Master_WarQuestSelectionMaster,
              0LL);
            GameObjectExtensions__SafeSetParent_32436524(
              (UnityEngine_GameObject_o *)v39,
              this->fields._RoadRoot_k__BackingField,
              0LL);
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)v39,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
              return;
            Master_WarQuestSelectionMaster = this->fields.lineList;
            if ( Master_WarQuestSelectionMaster )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ModelLineComponent__Add__);
              TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
              if ( TerminalMap_k__BackingField )
              {
                if ( Component_srcLineSprite )
                {
                  ModelLineComponent__Setup(
                    (ModelLineComponent_o *)Component_srcLineSprite,
                    spotRoadInfo,
                    Entity,
                    v31,
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v26);
  }
}


int32_t __fastcall MapModelManager__GetLayerBySpotPrefab(
        MapModelManager_o *this,
        SrcSpotBasePrefab_o *spotPrefab,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  __int64 v9; // x1
  MapModelManager_c *v10; // x0
  int32_t Layer; // w19
  MapModelManager_c *v13; // x8

  if ( (byte_42EBB34 & 1) == 0 )
  {
    sub_B5D5C4(&MapModelManager_TypeInfo, (_DWORD)spotPrefab, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBB34 = 1;
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
    v10 = MapModelManager_TypeInfo;
    if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v10 = MapModelManager_TypeInfo;
    }
    return v10->static_fields->LAYER_LOWER_ID;
  }
  else
  {
    if ( !spotPrefab || (mMapCtrl_SpotInfo = spotPrefab->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_B5D69C(mMapCtrl_SpotInfo, v9);
    Layer = MapControl_SpotInfo__GetLayer(mMapCtrl_SpotInfo, 0LL);
    v13 = MapModelManager_TypeInfo;
    if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
      v13 = MapModelManager_TypeInfo;
    }
    return UnityEngine_Mathf__Max_41629432(Layer, v13->static_fields->LAYER_LOWER_ID, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MapModelManager__GetLocationPostion(
        MapModelManager_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *mapModelComponent; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  float v9; // s0
  float v10; // s1
  float v11; // s2
  MapModelComponent_o *v12; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBB33 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, layer, (_DWORD)method, v3);
    byte_42EBB33 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  }
  else
  {
    v12 = this->fields.mapModelComponent;
    if ( !v12 )
      sub_B5D69C(0LL, v7);
    *(UnityEngine_Vector3_o *)&v9 = MapModelComponent__GetCameraLocationPosition(v12, layer, v8);
  }
  result.fields.z = v11;
  result.fields.y = v10;
  result.fields.x = v9;
  return result;
}


UnityEngine_GameObject_o *__fastcall MapModelManager__GetMapGimmickRootObject(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mapModelComponent; // x20
  __int64 v6; // x1
  bool v7; // w8
  UnityEngine_GameObject_o *result; // x0
  struct MapModelComponent_o *v9; // x8

  if ( (byte_42EBB35 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB35 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    v9 = this->fields.mapModelComponent;
    if ( !v9 )
      sub_B5D69C(0LL, v6);
    return v9->fields.mapModelGimmickRoot;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_o **v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  Il2CppObject *v41; // x23
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  const MethodInfo *v44; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v46; // x22
  const MethodInfo *v47; // x1
  AssetLoader_LoadEndDataHandler_o *v48; // x19
  int32_t v49; // [xsp+8h] [xbp-38h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EBB2C & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, assetId, mapId, endFunc);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__, v15, v16, v17);
    sub_B5D5C4(&MapModelManager___c__DisplayClass41_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_13763/*"Terminal/MapModels/{0:D4}_{1}"*/, v21, v22, v23);
    byte_42EBB2C = 1;
  }
  v24 = sub_B5D694(MapModelManager___c__DisplayClass41_0_TypeInfo);
  MapModelManager___c__DisplayClass41_0___ctor((MapModelManager___c__DisplayClass41_0_o *)v24, 0LL);
  if ( !v24 )
    sub_B5D69C(v25, v26);
  *(_QWORD *)(v24 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 24) = endFunc;
  v33 = (System_Action_o **)(v24 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)endFunc, v34, v35, v36, v37, v38, v39);
  if ( MapModelManager__get_IsMapModel(this, v40) )
  {
    v50 = assetId;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    v49 = mapId;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
    v43 = System_String__Format_44573324((System_String_o *)StringLiteral_13763/*"Terminal/MapModels/{0:D4}_{1}"*/, v41, v42, 0LL);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v46 = v43;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v43, 0LL) )
    {
      goto LABEL_11;
    }
    MapModelManager__ReleaseMapModelObject(this, v44);
    MapModelManager__ReleaseLineList(this, v47);
    v48 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v48,
      (Il2CppObject *)v24,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(v46, v48, 1, 0LL) )
LABEL_11:
      ActionExtensions__Call(*v33, 0LL);
  }
  else
  {
    ActionExtensions__Call(*v33, 0LL);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x21
  UnityEngine_Component_o *v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Action_o *v48; // x22
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s3.4,4:s4.4,8:s5.4

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v14 = startedPos.fields.z;
  v15 = startedPos.fields.y;
  v16 = startedPos.fields.x;
  if ( (byte_42EBB2F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, targetLayer, easingType, endAction);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__, v24, v25, v26);
    sub_B5D5C4(&MapModelManager___c__DisplayClass45_0_TypeInfo, v27, v28, v29);
    byte_42EBB2F = 1;
  }
  v30 = sub_B5D694(MapModelManager___c__DisplayClass45_0_TypeInfo);
  MapModelManager___c__DisplayClass45_0___ctor((MapModelManager___c__DisplayClass45_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_14;
  *(_QWORD *)(v30 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(float *)(v30 + 24) = v16;
  *(float *)(v30 + 28) = v15;
  *(float *)(v30 + 32) = v14;
  *(float *)(v30 + 36) = x;
  *(float *)(v30 + 40) = y;
  *(float *)(v30 + 44) = z;
  if ( duration <= 0.0 )
    goto LABEL_10;
  v49.fields.x = v16;
  v49.fields.y = v15;
  v49.fields.z = v14;
  v50.fields.x = x;
  v50.fields.y = y;
  v50.fields.z = z;
  if ( UnityEngine_Vector3__op_Equality(v49, v50, 0LL) )
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
  v31 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !v31
    || (gameObject = UnityEngine_Component__get_gameObject(v31, 0LL),
        Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                      gameObject,
                                                      (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v30 + 48) = Component_UIWidget,
        sub_B5D560((BattleServantConfConponent_o *)(v30 + 48), Component_UIWidget, v42, v43, v44, v45, v46, v47),
        v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v48,
          (Il2CppObject *)v30,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0LL),
        (v31 = *(UnityEngine_Component_o **)(v30 + 48)) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(v31, v32);
  }
  EasingObject__Play((EasingObject_o *)v31, duration, v48, endAction, 0.0, easingType, 0LL);
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
    sub_B5D69C(0LL, animationName);
  MapModelComponent__PlayAnimation(mapModelComponent, animationName, endAction, method);
}


void __fastcall MapModelManager__ReleaseAsset(MapModelManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_MapModelAssetData_k__BackingField; // x19
  AssetData_o *v6; // x20
  struct AssetData_o *MapModelAssetData_k__BackingField; // t1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EBB30 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB30 = 1;
  }
  MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
  p_MapModelAssetData_k__BackingField = (BattleServantConfConponent_o *)&this->fields._MapModelAssetData_k__BackingField;
  v6 = MapModelAssetData_k__BackingField;
  if ( MapModelAssetData_k__BackingField )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(v6, 0LL);
    p_MapModelAssetData_k__BackingField->klass = 0LL;
    sub_B5D560(p_MapModelAssetData_k__BackingField, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0

  if ( (byte_42EBB32 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ModelLineComponent__Clear__, (_DWORD)method, v2, v3);
    byte_42EBB32 = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)lineList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ModelLineComponent__Clear__);
}


void __fastcall MapModelManager__ReleaseMapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *MapModelObject_k__BackingField; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_42EBB31 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB31 = 1;
  }
  MapModelObject_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(MapModelObject_k__BackingField, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v6, 0LL);
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
    sub_B5D69C(0LL, layer);
  gameObject = UnityEngine_Component__get_gameObject(MapModelCamera_k__BackingField, 0LL);
  LocationPostion = MapModelManager__GetLocationPostion(this, layer, v7);
  GameObjectExtensions__SetLocalPosition(gameObject, LocationPostion, 0LL);
}


void __fastcall MapModelManager__UpdateLineDispAll(MapModelManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EBB2E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_ModelLineComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__, v14, v15, v16);
    byte_42EBB2E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    lineList = this->fields.lineList;
    if ( !lineList )
      sub_B5D69C(0LL, v17);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
      if ( !v19 )
        break;
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_B5D69C(v19, v20);
      if ( !v22.fields.current )
        sub_B5D69C(0LL, v20);
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v22.fields.current,
        (int32_t)TerminalMap_k__BackingField->fields.servantRoot,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
  }
}


UnityEngine_GameObject_o *__fastcall MapModelManager__get_DispRoot(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._DispRoot_k__BackingField;
}


bool __fastcall MapModelManager__get_IsMapCamera2DReset(MapModelManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MapModelComponent_o *v8; // x8

  if ( (byte_42EBB36 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB36 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( !v6 )
    return 1;
  v8 = this->fields.mapModelComponent;
  if ( !v8 )
    sub_B5D69C(v6, v7);
  return v8->fields.isMapCamera2DReset;
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
    sub_B5D69C(this, method);
  LOBYTE(mWarEnt) = MapEntity__IsMapModel((MapEntity_o *)this, 0LL);
  return (char)mWarEnt;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MapModelManager__get_MapCamera2DResetPosition(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MapModelComponent_o *v8; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBB37 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB37 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.mapModelComponent;
    if ( !v8 )
      sub_B5D69C(v6, v7);
    x = v8->fields.mapCamera2DResetPosition.fields.x;
    y = v8->fields.mapCamera2DResetPosition.fields.y;
    z = v8->fields.mapCamera2DResetPosition.fields.z;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MapModelComponent_o *v8; // x8

  if ( (byte_42EBB38 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB38 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( !v6 )
    return 1.0;
  v8 = this->fields.mapModelComponent;
  if ( !v8 )
    sub_B5D69C(v6, v7);
  return v8->fields.mapCamera2DResetSize;
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  AssetData_o *_4__this; // x0
  struct MapModelManager_o *v28; // x8
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  struct MapModelManager_o *v30; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v31; // x21
  struct MapModelManager_o *v32; // x8
  struct MapModelManager_o *v33; // x8
  struct MapModelManager_o *v34; // x8
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  ScrTerminalMap_c *v36; // x0
  int32_t v37; // w21
  struct MapModelManager_o *v38; // x20
  struct MapModelManager_o *v39; // x8
  AssetData_c *klass; // x8
  struct MapModelManager_o *v41; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v43; // x8
  struct MapModelManager_o *v44; // x8
  AssetData_c *v45; // x8
  struct MapModelManager_o *v46; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v48; // x8
  MapModelManager_o *v49; // x20

  if ( (byte_42E5F25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___, v6, v7, v8);
    sub_B5D5C4(&MapModelManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NGUITools_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ScrTerminalMap_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16908/*"bg_map"*/, v24, v25, v26);
    byte_42E5F25 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_52;
  _4__this->fields.name = (struct System_String_o *)assetData;
  sub_B5D560(&_4__this->fields.name);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_52;
  _4__this = v28->fields._MapModelAssetData_k__BackingField;
  if ( !_4__this )
    goto LABEL_52;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     _4__this,
                                     (System_String_o *)StringLiteral_16908/*"bg_map"*/,
                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  v30 = this->fields.__4__this;
  v31 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                              v31,
                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v30 )
    goto LABEL_52;
  v30->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)_4__this;
  sub_B5D560(&v30->fields._MapModelObject_k__BackingField);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_52;
  GameObjectExtensions__SetParent_32436388(
    v32->fields._MapModelObject_k__BackingField,
    v32->fields._DispRoot_k__BackingField,
    0LL);
  v33 = this->fields.__4__this;
  if ( !v33 )
    goto LABEL_52;
  GameObjectExtensions__ResetTransform(v33->fields._MapModelObject_k__BackingField, 0LL);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_52;
  MapModelObject_k__BackingField = v34->fields._MapModelObject_k__BackingField;
  v36 = ScrTerminalMap_TypeInfo;
  if ( (BYTE3(ScrTerminalMap_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v36 = ScrTerminalMap_TypeInfo;
  }
  v37 = UnityEngine_LayerMask__NameToLayer(v36->static_fields->MAP_DISP_LAYER_MODEL, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v37, 0LL);
  v38 = this->fields.__4__this;
  if ( !v38 )
    goto LABEL_52;
  _4__this = (AssetData_o *)v38->fields._MapModelObject_k__BackingField;
  if ( !_4__this )
    goto LABEL_52;
  v38->fields.mapModelComponent = (struct MapModelComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)_4__this,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  sub_B5D560(&v38->fields.mapModelComponent);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_52;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39->fields.mapModelComponent, 0LL, 0LL) )
  {
    _4__this = (AssetData_o *)this->fields.__4__this;
    if ( _4__this )
    {
      klass = _4__this[1].klass;
      if ( klass )
      {
        *(_QWORD *)&_4__this->fields.nowVersion = klass->_1.namespaze;
        sub_B5D560(&_4__this->fields.nowVersion);
        v41 = this->fields.__4__this;
        if ( v41 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v41->fields._MapModelCamera_k__BackingField;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          _4__this = (AssetData_o *)UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL);
          if ( ((unsigned __int8)_4__this & 1) != 0 )
          {
            v43 = this->fields.__4__this;
            if ( !v43 )
              goto LABEL_52;
            _4__this = (AssetData_o *)v43->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_52;
            _4__this = (AssetData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
            if ( !_4__this )
              goto LABEL_52;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
            v44 = this->fields.__4__this;
            if ( !v44 )
              goto LABEL_52;
            _4__this = (AssetData_o *)v44->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_52;
            MapModelCamera__Setup((MapModelCamera_o *)_4__this, v44->fields._MapModelScreen_k__BackingField, 0LL);
          }
          _4__this = (AssetData_o *)this->fields.__4__this;
          if ( _4__this )
          {
            v45 = _4__this[1].klass;
            if ( v45 )
            {
              *(_QWORD *)&_4__this->fields.size = v45->_1.byval_arg.data;
              sub_B5D560(&_4__this->fields.size);
              v46 = this->fields.__4__this;
              if ( v46 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v46->fields._SpotModelCamera_k__BackingField;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                _4__this = (AssetData_o *)UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0LL, 0LL);
                if ( ((unsigned __int8)_4__this & 1) != 0 )
                {
                  v48 = this->fields.__4__this;
                  if ( !v48 )
                    goto LABEL_52;
                  _4__this = (AssetData_o *)v48->fields._SpotModelCamera_k__BackingField;
                  if ( !_4__this )
                    goto LABEL_52;
                  MapModelCamera__Setup((MapModelCamera_o *)_4__this, v48->fields._SpotModelScreen_k__BackingField, 0LL);
                }
                v49 = this->fields.__4__this;
                _4__this = (AssetData_o *)MapModelManager_TypeInfo;
                if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !MapModelManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
                }
                if ( v49 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v49,
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
    sub_B5D69C(_4__this, assetData);
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
    sub_B5D69C(this, method);
  }
  v5 = (UnityEngine_GameObject_o *)this;
  v6 = Easing__Func(v3->fields.startedPos, v3->fields.endedPos, easingObject->fields.mStartTime, 0, 0LL);
  GameObjectExtensions__SetLocalPosition(v5, v6, 0LL);
}