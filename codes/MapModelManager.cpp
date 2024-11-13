void __fastcall MapModelManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12FA2 & 1) == 0 )
  {
    sub_1BCA7E0(&MapModelManager_TypeInfo, v1, v2);
    byte_4B12FA2 = 1;
  }
  MapModelManager_TypeInfo->static_fields->LAYER_LOWER_ID = 1;
}


void __fastcall MapModelManager___ctor(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12FA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ModelLineComponent___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ModelLineComponent__TypeInfo, v5, v6);
    byte_4B12FA1 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ModelLineComponent__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ModelLineComponent___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_ModelLineComponent__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lineList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapModelManager__CreateModelLineBySpotId(
        MapModelManager_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        UnityEngine_GameObject_o *linePrefab,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x23
  int32_t MasterName_k__BackingField_high; // w25
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x24
  Il2CppObject *Entity; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *v28; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v33; // x8
  float v34; // s13
  float v35; // s14
  float w; // s11
  float v37; // s12
  Il2CppObject *v38; // x22
  const MethodInfo *v39; // x2
  Il2CppObject *Component_object; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v50; // x8
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v53; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B12F95 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SpotMaster___, spotRoadInfo, linePrefab);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ModelLineComponent__Add__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924664, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B12F95 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spotRoadInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)linePrefab, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SpotMaster___);
    if ( spotRoadInfo )
    {
      v22 = Master_object;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotRoadInfo__GetMine(spotRoadInfo, v21);
      if ( Master_object )
      {
        if ( v22 )
        {
          MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
          v24 = Master_object;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v22,
                     (int32_t)Master_object->fields._MasterName_k__BackingField,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          v28 = DataMasterBase_object__object__int___GetEntity(
                  v22,
                  MasterName_k__BackingField_high,
                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
          if ( !byte_4B109C1 )
          {
            sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v26, v27);
            byte_4B109C1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          x = static_fields->zeroVector.fields.x;
          y = static_fields->zeroVector.fields.y;
          z = static_fields->zeroVector.fields.z;
          if ( !byte_4B109C7 )
          {
            sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v26, v27);
            byte_4B109C7 = 1;
          }
          v33 = UnityEngine_Quaternion_TypeInfo->static_fields;
          v35 = v33->identityQuaternion.fields.x;
          v34 = v33->identityQuaternion.fields.y;
          v37 = v33->identityQuaternion.fields.z;
          w = v33->identityQuaternion.fields.w;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
          v52.fields.x = x;
          v52.fields.y = y;
          v52.fields.z = z;
          v53.fields.x = v35;
          v53.fields.y = v34;
          v53.fields.z = v37;
          v53.fields.w = w;
          v38 = UnityEngine_Object__Instantiate_object__49904120(
                  (Il2CppObject *)linePrefab,
                  v52,
                  v53,
                  (const MethodInfo_2F979F8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924664);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)srcLineSprite__GetGobjName(
                                                                          v24->fields._MasterKind_k__BackingField,
                                                                          0LL);
          if ( v38 )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v38, (System_String_o *)Master_object, 0LL);
            GameObjectExtensions__SafeSetParent_34336992(
              (UnityEngine_GameObject_o *)v38,
              this->fields._RoadRoot_k__BackingField,
              v39);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v38,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
              return;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.lineList;
            if ( Master_object )
            {
              v47 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
              v48 = Method_System_Collections_Generic_List_ModelLineComponent__Add__;
              ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
              if ( v47 )
              {
                MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
                if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v47 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)Master_object,
                    Component_object,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                }
                else
                {
                  v50 = v47 + 8 * MasterName_k__BackingField_low;
                  LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                  *(_QWORD *)(v50 + 32) = Component_object;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v50 + 32),
                    (int64_t)Component_object,
                    v41,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46);
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
                      (SpotEntity_o *)v28,
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
    sub_1BCAA3C(Master_object, v21);
  }
}


int32_t __fastcall MapModelManager__GetLayerBySpotPrefab(
        MapModelManager_o *this,
        SrcSpotBasePrefab_o *spotPrefab,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v7; // x1
  MapModelManager_c *v8; // x0
  int32_t Layer; // w0
  __int64 v11; // x1
  MapModelManager_c *v12; // x8
  int32_t v13; // w19
  int32_t LAYER_LOWER_ID; // w8

  if ( (byte_4B12F9C & 1) == 0 )
  {
    sub_1BCA7E0(&MapModelManager_TypeInfo, spotPrefab, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12F9C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spotPrefab);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)spotPrefab,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
  {
    v8 = MapModelManager_TypeInfo;
    if ( !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo, v7);
      v8 = MapModelManager_TypeInfo;
    }
    return v8->static_fields->LAYER_LOWER_ID;
  }
  else
  {
    if ( !spotPrefab || (mMapCtrl_SpotInfo = spotPrefab->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_1BCAA3C(mMapCtrl_SpotInfo, v7);
    Layer = MapControl_SpotInfo__GetLayer(mMapCtrl_SpotInfo, v7);
    v12 = MapModelManager_TypeInfo;
    v13 = Layer;
    if ( !MapModelManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo, v11);
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

  if ( (byte_4B12F9B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&layer, method);
    byte_4B12F9B = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&layer);
  if ( UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL) )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
      byte_4B109C1 = 1;
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
      sub_1BCAA3C(0LL, v6);
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
  __int64 v2; // x2
  UnityEngine_Object_o *mapModelComponent; // x20
  __int64 v5; // x1
  bool v6; // w8
  UnityEngine_GameObject_o *result; // x0
  struct MapModelComponent_o *v8; // x8

  if ( (byte_4B12F9D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12F9D = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v6 = UnityEngine_Object__op_Equality(mapModelComponent, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    v8 = this->fields.mapModelComponent;
    if ( !v8 )
      sub_1BCAA3C(0LL, v5);
    return v8->fields.mapModelGimmickRoot;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Action_o **v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // x1
  struct AssetData_o *MapModelAssetData_k__BackingField; // x8
  System_String_o *v41; // x22
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  AssetLoader_LoadEndDataHandler_o *v46; // x19
  __int64 v47; // x1
  int32_t v48; // [xsp+8h] [xbp-38h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B12F94 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&assetId, *(_QWORD *)&mapId);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__, v13, v14);
    sub_1BCA7E0(&MapModelManager___c__DisplayClass41_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_13758/*"Terminal/MapModels/{0:D4}_{1}"*/, v17, v18);
    byte_4B12F94 = 1;
  }
  v19 = sub_1BCAA2C(MapModelManager___c__DisplayClass41_0_TypeInfo, *(_QWORD *)&assetId, *(_QWORD *)&mapId, endFunc);
  MapModelManager___c__DisplayClass41_0___ctor((MapModelManager___c__DisplayClass41_0_o *)v19, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = endFunc;
  v28 = (System_Action_o **)(v19 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)endFunc, v29, v30, v31, v32, v33, v34);
  if ( MapModelManager__get_IsMapModel(this, v35) )
  {
    v49 = assetId;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
    v48 = mapId;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v38 = System_String__Format_62415592((System_String_o *)StringLiteral_13758/*"Terminal/MapModels/{0:D4}_{1}"*/, v36, v37, 0LL);
    MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
    v41 = v38;
    if ( MapModelAssetData_k__BackingField
      && System_String__op_Equality(MapModelAssetData_k__BackingField->fields.name, v38, 0LL) )
    {
      goto LABEL_10;
    }
    MapModelManager__ReleaseMapModelObject(this, v39);
    MapModelManager__ReleaseLineList(this, v42);
    v46 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v43, v44, v45);
    AssetLoader_LoadEndDataHandler___ctor(
      v46,
      (Il2CppObject *)v19,
      Method_MapModelManager___c__DisplayClass41_0__LoadMapModel_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v47);
    if ( !AssetManager__loadAssetStorage(v41, v46, 1, 0LL) )
LABEL_10:
      ActionExtensions__Call(*v28, 0LL);
  }
  else
  {
    ActionExtensions__Call(*v28, 0LL);
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x22
  UnityEngine_Component_o *v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Action_o *v48; // x21

  z = endedPos.fields.z;
  y = endedPos.fields.y;
  x = endedPos.fields.x;
  v14 = startedPos.fields.z;
  v15 = startedPos.fields.y;
  v16 = startedPos.fields.x;
  if ( (byte_4B12F97 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&targetLayer, *(_QWORD *)&easingType);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__, v22, v23);
    sub_1BCA7E0(&MapModelManager___c__DisplayClass45_0_TypeInfo, v24, v25);
    byte_4B12F97 = 1;
  }
  v26 = sub_1BCAA2C(
          MapModelManager___c__DisplayClass45_0_TypeInfo,
          *(_QWORD *)&targetLayer,
          *(_QWORD *)&easingType,
          endAction);
  MapModelManager___c__DisplayClass45_0___ctor((MapModelManager___c__DisplayClass45_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_13;
  *(_QWORD *)(v26 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)this, v29, v30, v31, v32, v33, v34);
  *(float *)(v26 + 24) = v16;
  *(float *)(v26 + 28) = v15;
  *(float *)(v26 + 32) = v14;
  *(float *)(v26 + 36) = x;
  *(float *)(v26 + 40) = y;
  *(float *)(v26 + 44) = z;
  if ( duration <= 0.0
    || (float)((float)((float)(v14 - z) * (float)(v14 - z))
             + (float)((float)((float)(v16 - x) * (float)(v16 - x)) + (float)((float)(v15 - y) * (float)(v15 - y)))) < 1.0e-10 )
  {
    goto LABEL_9;
  }
  MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Equality(MapModelCamera_k__BackingField, 0LL, 0LL) )
  {
LABEL_9:
    ActionExtensions__Call(endAction, 0LL);
    return;
  }
  v27 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
  if ( !v27
    || (gameObject = UnityEngine_Component__get_gameObject(v27, 0LL),
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             gameObject,
                             (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___),
        *(_QWORD *)(v26 + 48) = Component_object,
        sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 48), (int64_t)Component_object, v39, v40, v41, v42, v43, v44),
        v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v45, v46, v47),
        System_Action___ctor(
          v48,
          (Il2CppObject *)v26,
          Method_MapModelManager___c__DisplayClass45_0__MoveMapModelCamera_b__0__,
          0LL),
        (v27 = *(UnityEngine_Component_o **)(v26 + 48)) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(v27, v28);
  }
  EasingObject__Play((EasingObject_o *)v27, duration, v48, endAction, 0.0, easingType, 0LL);
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
    sub_1BCAA3C(0LL, animationName);
  MapModelComponent__PlayAnimation(mapModelComponent, animationName, endAction, method);
}


void __fastcall MapModelManager__ReleaseAsset(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_MapModelAssetData_k__BackingField; // x19
  AssetData_o *v5; // x20
  struct AssetData_o *MapModelAssetData_k__BackingField; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B12F98 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B12F98 = 1;
  }
  MapModelAssetData_k__BackingField = this->fields._MapModelAssetData_k__BackingField;
  p_MapModelAssetData_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._MapModelAssetData_k__BackingField;
  v5 = MapModelAssetData_k__BackingField;
  if ( MapModelAssetData_k__BackingField )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_38505704(v5, 0LL);
    p_MapModelAssetData_k__BackingField->klass = 0LL;
    sub_1BCA784(p_MapModelAssetData_k__BackingField, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall MapModelManager__ReleaseLineList(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MapModelManager_o *v3; // x19
  struct System_Collections_Generic_List_ModelLineComponent__o *lineList; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B12F9A & 1) == 0 )
  {
    this = (MapModelManager_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_List_ModelLineComponent__Clear__,
                                  method,
                                  v2);
    byte_4B12F9A = 1;
  }
  lineList = v3->fields.lineList;
  if ( !lineList )
    sub_1BCAA3C(this, method);
  size = lineList->fields._size;
  v6 = lineList->fields._version + 1;
  lineList->fields._size = 0;
  lineList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lineList->fields._items, 0, size, 0LL);
}


void __fastcall MapModelManager__ReleaseMapModelObject(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *MapModelObject_k__BackingField; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4B12F99 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12F99 = 1;
  }
  MapModelObject_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(MapModelObject_k__BackingField, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields._MapModelObject_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_70154244(v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, *(_QWORD *)&layer);
  gameObject = UnityEngine_Component__get_gameObject(MapModelCamera_k__BackingField, 0LL);
  LocationPostion = MapModelManager__GetLocationPostion(this, layer, v7);
  GameObjectExtensions__SetLocalPosition(gameObject, LocationPostion, v8);
}


void __fastcall MapModelManager__UpdateLineDispAll(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *lineList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct ScrTerminalMap_o *TerminalMap_k__BackingField; // x8
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12F96 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_ModelLineComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__, v10, v11);
    byte_4B12F96 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ModelLineComponent___) )
  {
    lineList = (System_Collections_Generic_List_object__o *)this->fields.lineList;
    if ( !lineList )
      sub_1BCAA3C(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      lineList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ModelLineComponent__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__MoveNext__);
      if ( !v14 )
        break;
      TerminalMap_k__BackingField = this->fields._TerminalMap_k__BackingField;
      if ( !TerminalMap_k__BackingField )
        sub_1BCAA3C(v14, v15);
      if ( !v17.fields._current )
        sub_1BCAA3C(0LL, v15);
      ModelLineComponent__UpdateDisp(
        (ModelLineComponent_o *)v17.fields._current,
        TerminalMap_k__BackingField->fields.currentMapLayerId,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ModelLineComponent__Dispose__);
  }
}


UnityEngine_GameObject_o *__fastcall MapModelManager__get_DispRoot(MapModelManager_o *this, const MethodInfo *method)
{
  return this->fields._DispRoot_k__BackingField;
}


bool __fastcall MapModelManager__get_IsMapCamera2DReset(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct MapModelComponent_o *v7; // x8

  if ( (byte_4B12F9E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12F9E = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( !v5 )
    return 1;
  v7 = this->fields.mapModelComponent;
  if ( !v7 )
    sub_1BCAA3C(v5, v6);
  return v7->fields.isMapCamera2DReset;
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
    sub_1BCAA3C(this, method);
  LOBYTE(mMapInfo) = MapEntity__IsMapModel((MapEntity_o *)this, 0LL);
  return (char)mMapInfo;
}


UnityEngine_Vector3_o __fastcall MapModelManager__get_MapCamera2DResetPosition(
        MapModelManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct MapModelComponent_o *v8; // x10
  struct UnityEngine_Vector3_StaticFields *p_mapCamera2DResetPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  float v12; // s2
  float v13; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12F9F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12F9F = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  if ( v5 )
  {
    v8 = this->fields.mapModelComponent;
    if ( !v8 )
      sub_1BCAA3C(v5, v6);
    p_mapCamera2DResetPosition = (struct UnityEngine_Vector3_StaticFields *)&v8->fields.mapCamera2DResetPosition;
    p_y = &v8->fields.mapCamera2DResetPosition.fields.y;
    p_z = &v8->fields.mapCamera2DResetPosition.fields.z;
  }
  else
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
      byte_4B109C1 = 1;
    }
    p_mapCamera2DResetPosition = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &p_mapCamera2DResetPosition->zeroVector.fields.y;
    p_z = &p_mapCamera2DResetPosition->zeroVector.fields.z;
  }
  v12 = *p_z;
  v13 = *p_y;
  x = p_mapCamera2DResetPosition->zeroVector.fields.x;
  result.fields.z = v12;
  result.fields.y = v13;
  result.fields.x = x;
  return result;
}


float __fastcall MapModelManager__get_MapCamera2DResetSize(MapModelManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mapModelComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct MapModelComponent_o *v8; // x8

  if ( (byte_4B12FA0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12FA0 = 1;
  }
  mapModelComponent = (UnityEngine_Object_o *)this->fields.mapModelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(mapModelComponent, 0LL, 0LL);
  result = 1.0;
  if ( v5 )
  {
    v8 = this->fields.mapModelComponent;
    if ( !v8 )
      sub_1BCAA3C(v5, v6);
    return v8->fields.mapCamera2DResetSize;
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t _4__this; // x0
  struct MapModelManager_o *v25; // x8
  Il2CppObject *Object_object__49237568; // x0
  __int64 v27; // x1
  struct MapModelManager_o *v28; // x20
  Il2CppObject *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct MapModelManager_o *v36; // x8
  struct MapModelManager_o *v37; // x8
  struct MapModelManager_o *v38; // x8
  UnityEngine_GameObject_o *MapModelObject_k__BackingField; // x20
  ScrTerminalMap_c *v40; // x0
  __int64 v41; // x1
  int32_t v42; // w21
  struct MapModelManager_o *v43; // x20
  Il2CppObject *Component_object; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct MapModelManager_o *v51; // x8
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x8
  int64_t v59; // x1
  struct MapModelManager_o *v60; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct MapModelManager_o *v68; // x8
  struct MapModelManager_o *v69; // x8
  __int64 v70; // x8
  int64_t v71; // x1
  struct MapModelManager_o *v72; // x8
  UnityEngine_Object_o *SpotModelCamera_k__BackingField; // x20
  struct MapModelManager_o *v74; // x8
  MapModelManager_o *v75; // x20

  if ( (byte_4B12FAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MapModelComponent___, v10, v11);
    sub_1BCA7E0(&MapModelManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NGUITools_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&ScrTerminalMap_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_17344/*"bg_map"*/, v22, v23);
    byte_4B12FAB = 1;
  }
  _4__this = (int64_t)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  *(_QWORD *)(_4__this + 24) = assetData;
  sub_1BCA784((PartyOrganizationUtility_o *)(_4__this + 24), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_46;
  _4__this = (int64_t)v25->fields._MapModelAssetData_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              (AssetData_o *)_4__this,
                              (System_String_o *)StringLiteral_17344/*"bg_map"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  v28 = this->fields.__4__this;
  v29 = Object_object__49237568;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  _4__this = (int64_t)UnityEngine_Object__Instantiate_object_(
                        v29,
                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v28 )
    goto LABEL_46;
  v28->fields._MapModelObject_k__BackingField = (struct UnityEngine_GameObject_o *)_4__this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v28->fields._MapModelObject_k__BackingField,
    _4__this,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_46;
  GameObjectExtensions__SetParent_34336872(
    v36->fields._MapModelObject_k__BackingField,
    v36->fields._DispRoot_k__BackingField,
    0LL);
  v37 = this->fields.__4__this;
  if ( !v37 )
    goto LABEL_46;
  GameObjectExtensions__ResetTransform(v37->fields._MapModelObject_k__BackingField, 0LL);
  v38 = this->fields.__4__this;
  if ( !v38 )
    goto LABEL_46;
  MapModelObject_k__BackingField = v38->fields._MapModelObject_k__BackingField;
  v40 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo, assetData);
    v40 = ScrTerminalMap_TypeInfo;
  }
  v42 = UnityEngine_LayerMask__NameToLayer(v40->static_fields->MAP_DISP_LAYER_MODEL, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v41);
  NGUITools__SetLayer(MapModelObject_k__BackingField, v42, 0LL);
  v43 = this->fields.__4__this;
  if ( !v43 )
    goto LABEL_46;
  _4__this = (int64_t)v43->fields._MapModelObject_k__BackingField;
  if ( !_4__this )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MapModelComponent___);
  v43->fields.mapModelComponent = (struct MapModelComponent_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v43->fields.mapModelComponent,
    (int64_t)Component_object,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = this->fields.__4__this;
  if ( !v51 )
    goto LABEL_46;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51->fields.mapModelComponent, 0LL, 0LL) )
  {
    _4__this = (int64_t)this->fields.__4__this;
    if ( _4__this )
    {
      v58 = *(_QWORD *)(_4__this + 88);
      if ( v58 )
      {
        v59 = *(_QWORD *)(v58 + 32);
        *(_QWORD *)(_4__this + 40) = v59;
        sub_1BCA784((PartyOrganizationUtility_o *)(_4__this + 40), v59, v52, v53, v54, v55, v56, v57);
        v60 = this->fields.__4__this;
        if ( v60 )
        {
          MapModelCamera_k__BackingField = (UnityEngine_Object_o *)v60->fields._MapModelCamera_k__BackingField;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, assetData);
          _4__this = UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL);
          if ( (_4__this & 1) != 0 )
          {
            v68 = this->fields.__4__this;
            if ( !v68 )
              goto LABEL_46;
            _4__this = (int64_t)v68->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            _4__this = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
            if ( !_4__this )
              goto LABEL_46;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
            v69 = this->fields.__4__this;
            if ( !v69 )
              goto LABEL_46;
            _4__this = (int64_t)v69->fields._MapModelCamera_k__BackingField;
            if ( !_4__this )
              goto LABEL_46;
            MapModelCamera__Setup((MapModelCamera_o *)_4__this, v69->fields._MapModelScreen_k__BackingField, 0LL);
          }
          _4__this = (int64_t)this->fields.__4__this;
          if ( _4__this )
          {
            v70 = *(_QWORD *)(_4__this + 88);
            if ( v70 )
            {
              v71 = *(_QWORD *)(v70 + 40);
              *(_QWORD *)(_4__this + 48) = v71;
              sub_1BCA784((PartyOrganizationUtility_o *)(_4__this + 48), v71, v62, v63, v64, v65, v66, v67);
              v72 = this->fields.__4__this;
              if ( v72 )
              {
                SpotModelCamera_k__BackingField = (UnityEngine_Object_o *)v72->fields._SpotModelCamera_k__BackingField;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, assetData);
                _4__this = UnityEngine_Object__op_Inequality(SpotModelCamera_k__BackingField, 0LL, 0LL);
                if ( (_4__this & 1) != 0 )
                {
                  v74 = this->fields.__4__this;
                  if ( !v74 )
                    goto LABEL_46;
                  _4__this = (int64_t)v74->fields._SpotModelCamera_k__BackingField;
                  if ( !_4__this )
                    goto LABEL_46;
                  MapModelCamera__Setup((MapModelCamera_o *)_4__this, v74->fields._SpotModelScreen_k__BackingField, 0LL);
                }
                v75 = this->fields.__4__this;
                _4__this = (int64_t)MapModelManager_TypeInfo;
                if ( !MapModelManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo, assetData);
                if ( v75 )
                {
                  MapModelManager__SetMapModelCameraPositionByLayer(
                    v75,
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
    sub_1BCAA3C(_4__this, assetData);
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
    sub_1BCAA3C(this, method);
  }
  v5 = this;
  v6 = Easing__Func(v3->fields.startedPos, v3->fields.endedPos, easingObject->fields.mNow, 0, 0LL);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v5, v6, 0LL);
}