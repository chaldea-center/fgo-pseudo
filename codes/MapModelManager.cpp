void __fastcall MapModelManager___cctor(const MethodInfo *method)
{
  if ( (byte_4BD9274 & 1) == 0 )
  {
    sub_1C21E38(&MapModelManager_TypeInfo);
    byte_4BD9274 = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void __fastcall MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD9273 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ModelLineComponent__TypeInfo);
    byte_4BD9273 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ModelLineComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.lineList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapModelManager__CreateModelLineBySpotId(
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
  const MethodInfo *v24; // x2
  Il2CppObject *Component_object; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v35; // x8
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v38; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4BD9267 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ModelLineComponent__Add__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715648);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9267 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)linePrefab, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SpotMaster___);
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
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v13 = DataMasterBase_object__object__int___GetEntity(
                  v9,
                  MasterName_k__BackingField_high,
                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          if ( !byte_4BD6BB1 )
          {
            sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          x = static_fields->zeroVector.fields.x;
          y = static_fields->zeroVector.fields.y;
          z = static_fields->zeroVector.fields.z;
          if ( !byte_4BD6BB7 )
          {
            sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
            byte_4BD6BB7 = 1;
          }
          v18 = UnityEngine_Quaternion_TypeInfo->static_fields;
          v20 = v18->identityQuaternion.fields.x;
          v19 = v18->identityQuaternion.fields.y;
          v22 = v18->identityQuaternion.fields.z;
          w = v18->identityQuaternion.fields.w;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v37.fields.x = x;
          v37.fields.y = y;
          v37.fields.z = z;
          v38.fields.x = v20;
          v38.fields.y = v19;
          v38.fields.z = v22;
          v38.fields.w = w;
          v23 = UnityEngine_Object__Instantiate_object__50551576(
                  (Il2CppObject *)linePrefab,
                  v37,
                  v38,
                  (const MethodInfo_3035B18 *)Method_UnityEngine_Object_Instantiate_GameObject____77715648);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)srcLineSprite__GetGobjName(
                                                                          v11->fields._MasterKind_k__BackingField,
                                                                          0LL);
          if ( v23 )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v23, (System_String_o *)Master_object, 0LL);
            GameObjectExtensions__SafeSetParent_34803616(
              (UnityEngine_GameObject_o *)v23,
              this->fields._RoadRoot_k__BackingField,
              v24);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v23,
                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
              return;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.lineList;
            if ( Master_object )
            {
              v32 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
              v33 = Method_System_Collections_Generic_List_ModelLineComponent__Add__;
              ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
              if ( v32 )
              {
                MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
                if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v32 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Master_object,
                    Component_object,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                }
                else
                {
                  v35 = v32 + 8 * MasterName_k__BackingField_low;
                  LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                  *(_QWORD *)(v35 + 32) = Component_object;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)(v35 + 32),
                    (int64_t)Component_object,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31);
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
    sub_1C22094(Master_object, v8);
  }
}


int32_t __fastcall MapModelManager__GetLayerBySpotPrefab(
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

  if ( (byte_4BD926E & 1) == 0 )
  {
    sub_1C21E38(&MapModelManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD926E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)spotPrefab,
                                                 0LL,
                                                 0LL);
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
    if ( !spotPrefab || (mMapCtrl_SpotInfo = spotPrefab->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_1C22094(mMapCtrl_SpotInfo, v5);
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

  if ( (byte_4BD926D & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD926D = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL) )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
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
      sub_1C22094(0LL, v6);
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

  if ( (byte_4BD926F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD926F = 1;
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
      sub_1C22094(0LL, v4);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Action_o **v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x23
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  const MethodInfo *v35; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v37; // x22
  const MethodInfo *v38; // x1
  AssetLoader_LoadEndDataHandler_o *v39; // x19
  int32_t v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD9266 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__);
    sub_1C21E38(&MapModelManager___c__DisplayClass41_0_TypeInfo);
    sub_1C21E38(&StringLiteral_13852/*"Terminal/MapModels/{0:D4}_{1}"*/);
    byte_4BD9266 = 1;
  }
  v9 = sub_1C22084(MapModelManager___c__DisplayClass41_0_TypeInfo);
  MapModelManager___c__DisplayClass41_0___ctor((MapModelManager___c__DisplayClass41_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = endFunc;
  v18 = (System_Action_o **)(v9 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)endFunc, v19, v20, v21, v22, v23, v24);
  if ( MapModelManager__get_IsMapModel(this, v25) )
  {
    v41 = assetId;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v26, v27, v28);
    v40 = mapId;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v30, v31, v32);
    v34 = System_String__Format_63129848((System_String_o *)StringLiteral_13852/*"Terminal/MapModels/{0:D4}_{1}"*/, v29, v33, 0LL);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v37 = v34;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v34, 0LL) )
    {
      goto LABEL_10;
    }
    MapModelManager__ReleaseMapModelObject(this, v35);
    MapModelManager__ReleaseLineList(this, v38);
    v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v39,
      (Il2CppObject *)v9,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(v37, v39, 1, 0LL) )
LABEL_10:
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
  float x; // s12
  float v14; // s11
  float v15; // s13
  float v16; // s14
  __int64 v18; // x22
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Action_o *v36; // x21

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v14 = startedPos.fields.z;
  v15 = startedPos.fields.y;
  v16 = startedPos.fields.x;
  if ( (byte_4BD9269 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__);
    sub_1C21E38(&MapModelManager___c__DisplayClass45_0_TypeInfo);
    byte_4BD9269 = 1;
  }
  v18 = sub_1C22084(MapModelManager___c__DisplayClass45_0_TypeInfo);
  MapModelManager___c__DisplayClass45_0___ctor((MapModelManager___c__DisplayClass45_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
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
  if ( UnityEngine_Object__op_Equality(MapModelCamera_k__BackingField, 0LL, 0LL) )
  {
LABEL_9:
    ActionExtensions__Call(endAction, 0LL);
    return;
  }
  v19 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !v19
    || (gameObject = UnityEngine_Component__get_gameObject(v19, 0LL),
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             gameObject,
                             (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v18 + 48) = Component_object,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 48), (int64_t)Component_object, v30, v31, v32, v33, v34, v35),
        v36 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v18,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0LL),
        (v19 = *(UnityEngine_Component_o **)(v18 + 48)) == 0LL) )
  {
LABEL_13:
    sub_1C22094(v19, v20);
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
    sub_1C22094(0LL, animationName);
  MapModelComponent__PlayAnimation(mapModelComponent, animationName, endAction, method);
}


void __fastcall MapModelManager__ReleaseAsset(MapModelManager_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_MapModelAssetData_k__BackingField; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *MapModelAssetData_k__BackingField; // t1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BD926A & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD926A = 1;
  }
  MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
  p_MapModelAssetData_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._MapModelAssetData_k__BackingField;
  v4 = MapModelAssetData_k__BackingField;
  if ( MapModelAssetData_k__BackingField )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39034872(v4, 0LL);
    p_MapModelAssetData_k__BackingField->klass = 0LL;
    sub_1C21DDC(p_MapModelAssetData_k__BackingField, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  MapModelManager_o *v2; // x19
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4BD926C & 1) == 0 )
  {
    this = (MapModelManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_ModelLineComponent__Clear__);
    byte_4BD926C = 1;
  }
  lineList = v2->fields.lineList;
  if ( !lineList )
    sub_1C22094(this, method);
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

  if ( (byte_4BD926B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD926B = 1;
  }
  MapModelObject_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(MapModelObject_k__BackingField, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v4, 0LL);
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
    sub_1C22094(0LL, layer);
  gameObject = UnityEngine_Component__get_gameObject(MapModelCamera_k__BackingField, 0LL);
  LocationPostion = MapModelManager__GetLocationPostion(this, layer, v7);
  GameObjectExtensions__SetLocalPosition(gameObject, LocationPostion, v8);
}


void __fastcall MapModelManager__UpdateLineDispAll(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *lineList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD9268 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_ModelLineComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    byte_4BD9268 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
    if ( !lineList )
      sub_1C22094(0LL, v3);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      lineList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
      if ( !v5 )
        break;
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_1C22094(v5, v6);
      if ( !v8.fields._current )
        sub_1C22094(0LL, v6);
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v8.fields._current,
        TerminalMap_k__BackingField->fields.currentMapLayerId,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
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

  if ( (byte_4BD9270 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9270 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( !v4 )
    return 1;
  v6 = this->fields.mapModelComponent;
  if ( !v6 )
    sub_1C22094(v4, v5);
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
    sub_1C22094(this, method);
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

  if ( (byte_4BD9271 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9271 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.mapModelComponent;
    if ( !v6 )
      sub_1C22094(v4, v5);
    p_mapCamera2DResetPosition = (struct UnityEngine_Vector3_StaticFields *)&v6->fields.mapCamera2DResetPosition;
    p_y = &v6->fields.mapCamera2DResetPosition.fields.y;
    p_z = &v6->fields.mapCamera2DResetPosition.fields.z;
  }
  else
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
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

  if ( (byte_4BD9272 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9272 = 1;
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
      sub_1C22094(v4, v5);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DispRoot_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._DispRoot_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MapModelAssetData_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._MapModelAssetData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MapModelCamera_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._MapModelCamera_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MapModelObject_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._MapModelObject_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MapModelScreen_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._MapModelScreen_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._RoadRoot_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._RoadRoot_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SpotModelCamera_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._SpotModelCamera_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SpotModelScreen_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._SpotModelScreen_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TerminalMap_k__BackingField = value;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t _4__this; // x0
  struct MapModelManager_o *v11; // x8
  Il2CppObject *Object_object__49880776; // x0
  struct MapModelManager_o *v13; // x20
  Il2CppObject *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct MapModelManager_o *v21; // x8
  struct MapModelManager_o *v22; // x8
  struct MapModelManager_o *v23; // x8
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  ScrTerminalMap_c *v25; // x0
  int32_t v26; // w21
  struct MapModelManager_o *v27; // x20
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct MapModelManager_o *v35; // x8
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x8
  int64_t v43; // x1
  struct MapModelManager_o *v44; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct MapModelManager_o *v52; // x8
  struct MapModelManager_o *v53; // x8
  __int64 v54; // x8
  int64_t v55; // x1
  struct MapModelManager_o *v56; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v58; // x8
  MapModelManager_o *v59; // x20

  if ( (byte_4BD927D & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
    sub_1C21E38(&MapModelManager_TypeInfo);
    sub_1C21E38(&NGUITools_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ScrTerminalMap_TypeInfo);
    sub_1C21E38(&StringLiteral_17461/*"bg_map"*/);
    byte_4BD927D = 1;
  }
  _4__this = (int64_t)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  *(_QWORD *)(_4__this + 24) = assetData;
  sub_1C21DDC((PartyOrganizationUtility_o *)(_4__this + 24), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_46;
  _4__this = (int64_t)v11->fields._MapModelAssetData_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              (AssetData_o *)_4__this,
                              (System_String_o *)StringLiteral_17461/*"bg_map"*/,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  v13 = this->fields.__4__this;
  v14 = Object_object__49880776;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (int64_t)UnityEngine_Object__Instantiate_object_(
                        v14,
                        (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v13 )
    goto LABEL_46;
  v13->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)_4__this;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v13->fields._MapModelObject_k__BackingField,
    _4__this,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_46;
  GameObjectExtensions__SetParent_34803496(
    v21->fields._MapModelObject_k__BackingField,
    v21->fields._DispRoot_k__BackingField,
    0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_46;
  GameObjectExtensions__ResetTransform(v22->fields._MapModelObject_k__BackingField, 0LL);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_46;
  MapModelObject_k__BackingField = v23->fields._MapModelObject_k__BackingField;
  v25 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v25 = ScrTerminalMap_TypeInfo;
  }
  v26 = UnityEngine_LayerMask__NameToLayer(v25->static_fields->MAP_DISP_LAYER_MODEL, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v26, 0LL);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_46;
  _4__this = (int64_t)v27->fields._MapModelObject_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  v27->fields.mapModelComponent = (struct MapModelComponent_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v27->fields.mapModelComponent,
    (int64_t)Component_object,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = this->fields.__4__this;
  if ( !v35 )
    goto LABEL_46;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35->fields.mapModelComponent, 0LL, 0LL) )
  {
    _4__this = (int64_t)this->fields.__4__this;
    if ( _4__this )
    {
      v42 = *(_QWORD *)(_4__this + 88);
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 32);
        *(_QWORD *)(_4__this + 40) = v43;
        sub_1C21DDC((PartyOrganizationUtility_o *)(_4__this + 40), v43, v36, v37, v38, v39, v40, v41);
        v44 = this->fields.__4__this;
        if ( v44 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v44->fields._MapModelCamera_k__BackingField;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          _4__this = UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL);
          if ( (_4__this & 1) != 0 )
          {
            v52 = this->fields.__4__this;
            if ( !v52 )
              goto LABEL_46;
            _4__this = (int64_t)v52->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            _4__this = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
            if ( !_4__this )
              goto LABEL_46;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
            v53 = this->fields.__4__this;
            if ( !v53 )
              goto LABEL_46;
            _4__this = (int64_t)v53->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            MapModelCamera__Setup((MapModelCamera_o *)_4__this, v53->fields._MapModelScreen_k__BackingField, 0LL);
          }
          _4__this = (int64_t)this->fields.__4__this;
          if ( _4__this )
          {
            v54 = *(_QWORD *)(_4__this + 88);
            if ( v54 )
            {
              v55 = *(_QWORD *)(v54 + 40);
              *(_QWORD *)(_4__this + 48) = v55;
              sub_1C21DDC((PartyOrganizationUtility_o *)(_4__this + 48), v55, v46, v47, v48, v49, v50, v51);
              v56 = this->fields.__4__this;
              if ( v56 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v56->fields._SpotModelCamera_k__BackingField;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                _4__this = UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0LL, 0LL);
                if ( (_4__this & 1) != 0 )
                {
                  v58 = this->fields.__4__this;
                  if ( !v58 )
                    goto LABEL_46;
                  _4__this = (int64_t)v58->fields._SpotModelCamera_k__BackingField;
                  if ( !_4__this )
                    goto LABEL_46;
                  MapModelCamera__Setup((MapModelCamera_o *)_4__this, v58->fields._SpotModelScreen_k__BackingField, 0LL);
                }
                v59 = this->fields.__4__this;
                _4__this = (int64_t)MapModelManager_TypeInfo;
                if ( !MapModelManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
                if ( v59 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v59,
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
    sub_1C22094(_4__this, assetData);
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
    sub_1C22094(this, method);
  }
  v5 = this;
  v6 = Easing__Func(v3->fields.startedPos, v3->fields.endedPos, easingObject->fields.mNow, 0, 0LL);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v5, v6, 0LL);
}