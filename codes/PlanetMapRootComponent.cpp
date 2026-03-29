void PlanetMapRootComponent___ctor(PlanetMapRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


BlankEarth_o *PlanetMapRootComponent__CreatePlanetEarth(
        PlanetMapRootComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  MapEntity_o *mapEntity; // x0
  AssetData_o *PlanetMapAssetData_k__BackingField; // x8
  Il2CppObject *Object_object__51927708; // x20
  Il2CppObject *v8; // x20

  if ( (byte_4D2D482 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarth___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D482 = 1;
  }
  if ( !this->fields._PlanetMapAssetData_k__BackingField )
    return 0;
  mapEntity = this->fields.mapEntity;
  if ( !mapEntity )
    goto LABEL_12;
  mapEntity = (MapEntity_o *)MapEntity__GetPlanetPrefabName(mapEntity, 0);
  PlanetMapAssetData_k__BackingField = this->fields._PlanetMapAssetData_k__BackingField;
  if ( !PlanetMapAssetData_k__BackingField )
    goto LABEL_12;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              PlanetMapAssetData_k__BackingField,
                              (System_String_o *)mapEntity,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         Object_object__51927708,
         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0, 0) )
    return 0;
  GameObjectExtensions__SafeSetParent_36750960((UnityEngine_GameObject_o *)v8, parentObject, 0);
  if ( !v8 )
LABEL_12:
    sub_1C93D2C(mapEntity, parentObject);
  return (BlankEarth_o *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v8,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarth___);
}


void PlanetMapRootComponent__DestroyAll(PlanetMapRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_PlanetEarth_k__BackingField; // x20
  UnityEngine_Object_o *PlanetEarth_k__BackingField; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  AssetData_o *PlanetMapAssetData_k__BackingField; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_GameObject_o *v20; // x0

  if ( (byte_4D2D486 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D486 = 1;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.spotLabelObj, 0, 0);
  p_PlanetEarth_k__BackingField = (UnityEngine_Component_o **)&this->fields._PlanetEarth_k__BackingField;
  PlanetEarth_k__BackingField = (UnityEngine_Object_o *)this->fields._PlanetEarth_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(PlanetEarth_k__BackingField, 0, 0) )
  {
    BasicHelper__SetActiveSafely(*p_PlanetEarth_k__BackingField, 0, 0);
    if ( !*p_PlanetEarth_k__BackingField )
      sub_1C93D2C(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_PlanetEarth_k__BackingField, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    *p_PlanetEarth_k__BackingField = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._PlanetEarth_k__BackingField, 0, v7, v8, v9, v10, v11, v12);
  }
  PlanetMapAssetData_k__BackingField = this->fields._PlanetMapAssetData_k__BackingField;
  if ( PlanetMapAssetData_k__BackingField )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41247948(PlanetMapAssetData_k__BackingField, 0);
    this->fields._PlanetMapAssetData_k__BackingField = 0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields._PlanetMapAssetData_k__BackingField,
      0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectHelper__SetActiveSafely(v20, 0, 0);
}


System_String_o *PlanetMapRootComponent__GetPlanetMapAssetPath(
        PlanetMapRootComponent_o *this,
        MapEntity_o *mapEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  Il2CppObject *v5; // x0
  int32_t PlanetMapAssetId; // [xsp+8h] [xbp-28h] BYREF
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2D485 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    this = (PlanetMapRootComponent_o *)sub_1C93AD4(&StringLiteral_13789/*"Terminal/MapModels/{0:D4}_{1}"*/);
    byte_4D2D485 = 1;
  }
  if ( !mapEntity )
    sub_1C93D2C(this, mapEntity);
  warId = mapEntity->fields.warId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  PlanetMapAssetId = MapEntity__GetPlanetMapAssetId(mapEntity, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PlanetMapAssetId);
  return System_String__Format_64467032((System_String_o *)StringLiteral_13789/*"Terminal/MapModels/{0:D4}_{1}"*/, v4, v5, 0);
}


void PlanetMapRootComponent__LoadAssetData(
        PlanetMapRootComponent_o *this,
        MapEntity_o *mapEnt,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x23
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct MapEntity_o **p_mapEntity; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  PlanetMapRootComponent_o *v30; // x0
  const MethodInfo *v31; // x2
  System_String_o *PlanetMapAssetPath; // x19
  AssetLoader_LoadEndDataHandler_o *v33; // x20

  if ( (byte_4D2D480 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_PlanetMapRootComponent___c__DisplayClass13_0__LoadAssetData_b__0__);
    sub_1C93AD4(&PlanetMapRootComponent___c__DisplayClass13_0_TypeInfo);
    byte_4D2D480 = 1;
  }
  v7 = sub_1C93D20(PlanetMapRootComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endAction;
  v16 = v7 + 24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)endAction, v17, v18, v19, v20, v21, v22);
  this->fields.mapEntity = mapEnt;
  p_mapEntity = &this->fields.mapEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_mapEntity, (int32_t)mapEnt, v24, v25, v26, v27, v28, v29);
  PlanetMapAssetPath = PlanetMapRootComponent__GetPlanetMapAssetPath(v30, *p_mapEntity, v31);
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v7,
    Method_PlanetMapRootComponent___c__DisplayClass13_0__LoadAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(PlanetMapAssetPath, v33, 1, 0) )
  {
    if ( *(_QWORD *)v16 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v16 + 64LL),
        *(_QWORD *)(*(_QWORD *)v16 + 40LL));
  }
}


void PlanetMapRootComponent__PutGimmicks(PlanetMapRootComponent_o *this, const MethodInfo *method)
{
  AssetData_o *PlanetMapAssetData_k__BackingField; // x1
  struct MapEntity_o *mapEntity; // x8
  BlankEarth_o *PlanetEarth_k__BackingField; // x0

  PlanetMapAssetData_k__BackingField = this->fields._PlanetMapAssetData_k__BackingField;
  if ( PlanetMapAssetData_k__BackingField )
  {
    mapEntity = this->fields.mapEntity;
    if ( mapEntity )
    {
      PlanetEarth_k__BackingField = this->fields._PlanetEarth_k__BackingField;
      if ( !PlanetEarth_k__BackingField )
        sub_1C93D2C(0, PlanetMapAssetData_k__BackingField);
      BlankEarth__PutGimmicksByMapId(
        PlanetEarth_k__BackingField,
        PlanetMapAssetData_k__BackingField,
        mapEntity->fields.id,
        0);
    }
  }
}


void PlanetMapRootComponent__PutSpots(PlanetMapRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *PlanetEarth_k__BackingField; // x20
  __int64 v4; // x1
  struct MapEntity_o *mapEntity; // x8
  BlankEarth_o *v6; // x0

  if ( (byte_4D2D483 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D483 = 1;
  }
  PlanetEarth_k__BackingField = (UnityEngine_Object_o *)this->fields._PlanetEarth_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(PlanetEarth_k__BackingField, 0, 0) )
  {
    mapEntity = this->fields.mapEntity;
    if ( mapEntity )
    {
      v6 = this->fields._PlanetEarth_k__BackingField;
      if ( !v6 )
        sub_1C93D2C(0, v4);
      BlankEarth__PutSpots(v6, mapEntity->fields.id, 0);
    }
  }
}


void PlanetMapRootComponent__Setup(PlanetMapRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MapEntity_o *mapEntity; // x0
  int32_t PrioredMapImageId; // w2
  PlanetMapBackground_o *planetMapBackground; // x0
  const MethodInfo *v7; // x2
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Component_o *mTerminalList; // x0
  UnityEngine_GameObject_o *gameObject; // x1
  struct BlankEarth_o *PlanetEarth; // x0
  struct BlankEarth_o **p_PlanetEarth_k__BackingField; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *PlanetEarth_k__BackingField; // x21

  if ( (byte_4D2D481 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D481 = 1;
  }
  if ( this->fields._PlanetMapAssetData_k__BackingField )
  {
    mapEntity = this->fields.mapEntity;
    if ( mapEntity )
      PrioredMapImageId = MapEntity__GetPrioredMapImageId(mapEntity, 0);
    else
      PrioredMapImageId = 0;
    planetMapBackground = this->fields.planetMapBackground;
    if ( planetMapBackground )
    {
      PlanetMapBackground__Setup(
        planetMapBackground,
        this->fields._PlanetMapAssetData_k__BackingField,
        PrioredMapImageId,
        v2);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      v8 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v8 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v8->static_fields->mInstance;
      if ( mInstance && (mTerminalList = (UnityEngine_Component_o *)mInstance->fields.mTerminalList) != 0 )
        gameObject = UnityEngine_Component__get_gameObject(mTerminalList, 0);
      else
        gameObject = 0;
      PlanetEarth = PlanetMapRootComponent__CreatePlanetEarth(this, gameObject, v7);
      this->fields._PlanetEarth_k__BackingField = PlanetEarth;
      p_PlanetEarth_k__BackingField = &this->fields._PlanetEarth_k__BackingField;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields._PlanetEarth_k__BackingField,
        (int32_t)PlanetEarth,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      PlanetEarth_k__BackingField = (UnityEngine_Object_o *)this->fields._PlanetEarth_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(PlanetEarth_k__BackingField, 0, 0) )
      {
        planetMapBackground = (PlanetMapBackground_o *)*p_PlanetEarth_k__BackingField;
        if ( !*p_PlanetEarth_k__BackingField )
          goto LABEL_26;
        BlankEarth__Setup(
          (BlankEarth_o *)planetMapBackground,
          this->fields._PlanetMapAssetData_k__BackingField,
          this->fields.mapEntity,
          0);
      }
      planetMapBackground = (PlanetMapBackground_o *)this->fields.spotLabelObj;
      if ( planetMapBackground )
      {
        BlankEarthSpotLabelComponent__SetupNameBgSprite((BlankEarthSpotLabelComponent_o *)planetMapBackground, 0);
        return;
      }
    }
LABEL_26:
    sub_1C93D2C(planetMapBackground, method);
  }
}


void PlanetMapRootComponent__SwitchDispPlanetEarth(
        PlanetMapRootComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *PlanetEarth_k__BackingField; // x21
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4D2D484 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D484 = 1;
  }
  PlanetEarth_k__BackingField = (UnityEngine_Object_o *)this->fields._PlanetEarth_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(PlanetEarth_k__BackingField, 0, 0) )
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields._PlanetEarth_k__BackingField, isActive, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectHelper__SetActiveSafely(gameObject, isActive, 0);
}


BlankEarth_o *PlanetMapRootComponent__get_PlanetEarth(PlanetMapRootComponent_o *this, const MethodInfo *method)
{
  return this->fields._PlanetEarth_k__BackingField;
}


AssetData_o *PlanetMapRootComponent__get_PlanetMapAssetData(PlanetMapRootComponent_o *this, const MethodInfo *method)
{
  return this->fields._PlanetMapAssetData_k__BackingField;
}


BlankEarthSpotLabelComponent_o *PlanetMapRootComponent__get_SpotLabelObj(
        PlanetMapRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.spotLabelObj;
}


void PlanetMapRootComponent__set_PlanetEarth(
        PlanetMapRootComponent_o *this,
        BlankEarth_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PlanetEarth_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._PlanetEarth_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PlanetMapRootComponent__set_PlanetMapAssetData(
        PlanetMapRootComponent_o *this,
        AssetData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PlanetMapAssetData_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._PlanetMapAssetData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PlanetMapRootComponent___c__DisplayClass13_0___ctor(
        PlanetMapRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PlanetMapRootComponent___c__DisplayClass13_0___LoadAssetData_b__0(
        PlanetMapRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PlanetMapRootComponent_o *_4__this; // x0
  struct System_Action_o *endAction; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, data);
  _4__this->fields._PlanetMapAssetData_k__BackingField = data;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields._PlanetMapAssetData_k__BackingField,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  endAction = this->fields.endAction;
  if ( endAction )
    ((void (__fastcall *)(intptr_t, intptr_t))endAction->fields.invoke_impl)(
      endAction->fields.method_code,
      endAction->fields.method);
}