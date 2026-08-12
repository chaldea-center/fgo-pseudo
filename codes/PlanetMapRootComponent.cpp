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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Object_object__58532980; // x20
  Il2CppObject *v10; // x20

  if ( (byte_596D14F & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarth___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D14F = 1;
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
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              PlanetMapAssetData_k__BackingField,
                              (System_String_o *)mapEntity,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__Instantiate_object_(
          Object_object__58532980,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0) )
    return 0;
  GameObjectExtensions__SafeSetParent_42897308((UnityEngine_GameObject_o *)v10, parentObject, 0);
  if ( !v10 )
LABEL_12:
    sub_2213CDC(mapEntity, parentObject);
  return (BlankEarth_o *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v10,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarth___);
}


void PlanetMapRootComponent__DestroyAll(PlanetMapRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Component_o **p_PlanetEarth_k__BackingField; // x20
  UnityEngine_Object_o *PlanetEarth_k__BackingField; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  AssetData_o *PlanetMapAssetData_k__BackingField; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_GameObject_o *v26; // x0

  if ( (byte_596D153 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D153 = 1;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.spotLabelObj, 0, 0);
  p_PlanetEarth_k__BackingField = (UnityEngine_Component_o **)&this->fields._PlanetEarth_k__BackingField;
  PlanetEarth_k__BackingField = (UnityEngine_Object_o *)this->fields._PlanetEarth_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(PlanetEarth_k__BackingField, 0, 0) )
  {
    BasicHelper__SetActiveSafely(*p_PlanetEarth_k__BackingField, 0, 0);
    if ( !*p_PlanetEarth_k__BackingField )
      sub_2213CDC(0, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_PlanetEarth_k__BackingField, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_PlanetEarth_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._PlanetEarth_k__BackingField,
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  PlanetMapAssetData_k__BackingField = this->fields._PlanetMapAssetData_k__BackingField;
  if ( PlanetMapAssetData_k__BackingField )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
    AssetManager__releaseAsset_47496972(PlanetMapAssetData_k__BackingField, 0);
    this->fields._PlanetMapAssetData_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._PlanetMapAssetData_k__BackingField,
      0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectHelper__SetActiveSafely(v26, 0, 0);
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

  if ( (byte_596D152 & 1) == 0 )
  {
    this = (PlanetMapRootComponent_o *)sub_2213A60(&StringLiteral_14260/*"Terminal/MapModels/{0:D4}_{1}"*/);
    byte_596D152 = 1;
  }
  if ( !mapEntity )
    sub_2213CDC(this, mapEntity);
  warId = mapEntity->fields.warId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &warId);
  PlanetMapAssetId = MapEntity__GetPlanetMapAssetId(mapEntity, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &PlanetMapAssetId);
  return System_String__Format_75697880((System_String_o *)StringLiteral_14260/*"Terminal/MapModels/{0:D4}_{1}"*/, v4, v5, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct MapEntity_o **p_mapEntity; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  PlanetMapRootComponent_o *v30; // x0
  const MethodInfo *v31; // x2
  System_String_o *PlanetMapAssetPath; // x19
  AssetLoader_LoadEndDataHandler_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2

  if ( (byte_596D14D & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_PlanetMapRootComponent___c__DisplayClass13_0__LoadAssetData_b__0__);
    sub_2213A60(&PlanetMapRootComponent___c__DisplayClass13_0_TypeInfo);
    byte_596D14D = 1;
  }
  v7 = sub_2213CCC(PlanetMapRootComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endAction;
  v16 = v7 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)endAction, v17, v18, v19, v20, v21, v22);
  this->fields.mapEntity = mapEnt;
  p_mapEntity = &this->fields.mapEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mapEntity, (int32_t)mapEnt, v24, v25, v26, v27, v28, v29);
  PlanetMapAssetPath = PlanetMapRootComponent__GetPlanetMapAssetPath(v30, *p_mapEntity, v31);
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v7,
    Method_PlanetMapRootComponent___c__DisplayClass13_0__LoadAssetData_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v34, v35);
  if ( !AssetManager__loadAssetStorage(PlanetMapAssetPath, v33, 1, 0, 0) )
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
        sub_2213CDC(0, PlanetMapAssetData_k__BackingField);
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
  __int64 v2; // x2
  UnityEngine_Object_o *PlanetEarth_k__BackingField; // x20
  __int64 v5; // x1
  struct MapEntity_o *mapEntity; // x8
  BlankEarth_o *v7; // x0

  if ( (byte_596D150 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D150 = 1;
  }
  PlanetEarth_k__BackingField = (UnityEngine_Object_o *)this->fields._PlanetEarth_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(PlanetEarth_k__BackingField, 0, 0) )
  {
    mapEntity = this->fields.mapEntity;
    if ( mapEntity )
    {
      v7 = this->fields._PlanetEarth_k__BackingField;
      if ( !v7 )
        sub_2213CDC(0, v5);
      BlankEarth__PutSpots(v7, mapEntity->fields.id, 0);
    }
  }
}


void PlanetMapRootComponent__Setup(PlanetMapRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MapEntity_o *mapEntity; // x0
  int32_t PrioredMapImageId; // w2
  PlanetMapBackground_o *planetMapBackground; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Component_o *mTerminalList; // x0
  UnityEngine_GameObject_o *gameObject; // x1
  struct BlankEarth_o *PlanetEarth; // x0
  struct BlankEarth_o **p_PlanetEarth_k__BackingField; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *PlanetEarth_k__BackingField; // x21

  if ( (byte_596D14E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D14E = 1;
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
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v9 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
        v9 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v9->static_fields->mInstance;
      if ( mInstance && (mTerminalList = (UnityEngine_Component_o *)mInstance->fields.mTerminalList) != 0 )
        gameObject = UnityEngine_Component__get_gameObject(mTerminalList, 0);
      else
        gameObject = 0;
      PlanetEarth = PlanetMapRootComponent__CreatePlanetEarth(this, gameObject, v8);
      this->fields._PlanetEarth_k__BackingField = PlanetEarth;
      p_PlanetEarth_k__BackingField = &this->fields._PlanetEarth_k__BackingField;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._PlanetEarth_k__BackingField,
        (int32_t)PlanetEarth,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      PlanetEarth_k__BackingField = (UnityEngine_Object_o *)this->fields._PlanetEarth_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
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
    sub_2213CDC(planetMapBackground, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void PlanetMapRootComponent__SwitchDispPlanetEarth(
        PlanetMapRootComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *PlanetEarth_k__BackingField; // x21
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_596D151 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D151 = 1;
  }
  PlanetEarth_k__BackingField = (UnityEngine_Object_o *)this->fields._PlanetEarth_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PlanetEarth_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PlanetEarth_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PlanetMapAssetData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PlanetMapAssetData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PlanetMapRootComponent_o *_4__this; // x0
  struct System_Action_o *endAction; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, data);
  _4__this->fields._PlanetMapAssetData_k__BackingField = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._PlanetMapAssetData_k__BackingField,
    (int32_t)data,
    (System_String_o *)method,
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