void TitleInfoEventRaceRoundComponent___ctor(TitleInfoEventRaceRoundComponent_o *this, const MethodInfo *method)
{
  this->fields.nowHeaderId = -1;
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoEventRaceRoundComponent__Destroy(TitleInfoEventRaceRoundComponent_o *this, const MethodInfo *method)
{
  ;
}


bool TitleInfoEventRaceRoundComponent__IsDispPossible(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventRaceRoundComponent__IsEventRaidBoss(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void TitleInfoEventRaceRoundComponent__OnDestroy(TitleInfoEventRaceRoundComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventRaceRoundComponent__Setup(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t eventId,
        int32_t warId,
        int32_t mapId,
        int32_t termId,
        AssetData_o *effectAssetData,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t PrioredID; // w0
  UISprite_o *baseWindow; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  const MethodInfo *v18; // x2
  UISprite_o *roundNumSpr; // x19
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  v23 = termId;
  v24 = eventId;
  if ( (byte_4C55666 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_22945/*"race_mapname_round_"*/);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_22944/*"race_mapname_bg_"*/);
    byte_4C55666 = 1;
  }
  this->fields.effectAssetData = effectAssetData;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.effectAssetData,
    (int32_t)effectAssetData,
    warId,
    *(const MethodInfo **)&mapId);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_MapCondMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_MapMaster___)) == 0
    || (Instance = MapMaster__GetEntity((MapMaster_o *)Instance, mapId, warId, 0)) == 0
    || !MasterData_object )
  {
    sub_1C3E7C0(Instance, v12);
  }
  PrioredID = MapCondMaster__GetPrioredID(
                (MapCondMaster_o *)MasterData_object,
                4,
                mapId,
                *((_DWORD *)Instance + 9),
                0,
                0,
                0);
  baseWindow = this->fields.baseWindow;
  this->fields.nowHeaderId = PrioredID;
  v16 = System_Int32__ToString((int32_t)&v24, 0);
  v17 = System_String__Concat_63636468((System_String_o *)StringLiteral_22944/*"race_mapname_bg_"*/, v16, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseWindow, v17, 0);
  TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v18);
  roundNumSpr = this->fields.roundNumSpr;
  v20 = System_Int32__ToString((int32_t)&v24, 0);
  v21 = System_Int32__ToString((int32_t)&v23, 0);
  v22 = System_String__Concat_63676720(
          (System_String_o *)StringLiteral_22945/*"race_mapname_round_"*/,
          v20,
          (System_String_o *)StringLiteral_16119/*"_"*/,
          v21,
          0);
  AtlasManager__SetEventUI(roundNumSpr, v22, 0);
}


void TitleInfoEventRaceRoundComponent__UpdateDisp(TitleInfoEventRaceRoundComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaceRoundComponent___setupNameChangeEffect_b__13_0(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v2);
}


void TitleInfoEventRaceRoundComponent__setHeaderImg(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t headerId,
        const MethodInfo *method)
{
  UISprite_o *mapNameSpr; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = headerId;
  if ( (byte_4C55667 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&StringLiteral_22943/*"race_mapname_"*/);
    byte_4C55667 = 1;
  }
  mapNameSpr = this->fields.mapNameSpr;
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  v6 = System_String__Concat_63636468((System_String_o *)StringLiteral_22943/*"race_mapname_"*/, v5, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mapNameSpr, v6, 0);
}


void TitleInfoEventRaceRoundComponent__setupNameChangeEffect(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t event_id,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  UnityEngine_Object_o *Object_40556856; // x0
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w22
  TitleInfoEventOpenHeaderEffect_o *v18; // x21
  System_Action_o *v19; // x23
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  v20 = event_id;
  if ( (byte_4C55668 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__);
    sub_1C3E564(&StringLiteral_18864/*"ef_mapnamechange_"*/);
    byte_4C55668 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    v7 = System_Int32__ToString((int32_t)&v20, 0);
    v8 = System_String__Concat_63636468((System_String_o *)StringLiteral_18864/*"ef_mapnamechange_"*/, v7, 0);
    Object_40556856 = AssetData__GetObject_40556856(effectAssetData, v8, 0);
    if ( Object_40556856 )
    {
      if ( (UnityEngine_GameObject_c *)Object_40556856->klass == UnityEngine_GameObject_TypeInfo )
        v10 = (Il2CppObject *)Object_40556856;
      else
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0) )
    {
      TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v11);
      ActionExtensions__Call(endCallback, 0);
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__Instantiate_object_(
              v10,
              (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v12 )
        goto LABEL_20;
      v14 = (UnityEngine_GameObject_o *)v12;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v12, 0);
      GameObjectExtensions__SafeSetParent_36182084(gameObject, this->fields.effectAttachRoot, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v14,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
      v17 = v20;
      v18 = (TitleInfoEventOpenHeaderEffect_o *)Component_object;
      v19 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__,
        0);
      if ( !v18 )
LABEL_20:
        sub_1C3E7C0(v12, v13);
      TitleInfoEventOpenHeaderEffect__setup(v18, v17, v19, endCallback, 0);
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v18, 0);
    }
  }
  else
  {
    TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, (const MethodInfo *)endCallback);
    ActionExtensions__Call(endCallback, 0);
  }
}