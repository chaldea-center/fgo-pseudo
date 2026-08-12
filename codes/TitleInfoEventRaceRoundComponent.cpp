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
  bool v7; // w7
  void *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t PrioredID; // w0
  UISprite_o *baseWindow; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x21
  const MethodInfo *v21; // x2
  UISprite_o *roundNumSpr; // x19
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t v26; // [xsp+8h] [xbp-48h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF

  v27 = eventId;
  v26 = termId;
  if ( (byte_596F091 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MapMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_24118/*"race_mapname_round_"*/);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_24117/*"race_mapname_bg_"*/);
    byte_596F091 = 1;
  }
  this->fields.effectAssetData = effectAssetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectAssetData,
    (int32_t)effectAssetData,
    *(System_String_o **)&warId,
    *(System_String_o **)&mapId,
    termId,
    (int32_t)effectAssetData,
    (bool)method,
    v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapCondMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapMaster___)) == 0
    || (Instance = MapMaster__GetEntity((MapMaster_o *)Instance, mapId, warId, 0)) == 0
    || !MasterData_object )
  {
    sub_2213CDC(Instance, v13);
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
  v17 = System_Int32__ToString((int32_t)&v27, 0);
  v20 = System_String__Concat_75651716((System_String_o *)StringLiteral_24117/*"race_mapname_bg_"*/, v17, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18, v19);
  AtlasManager__SetEventUI(baseWindow, v20, 0);
  TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v21);
  roundNumSpr = this->fields.roundNumSpr;
  v23 = System_Int32__ToString((int32_t)&v27, 0);
  v24 = System_Int32__ToString((int32_t)&v26, 0);
  v25 = System_String__Concat_75696856(
          (System_String_o *)StringLiteral_24118/*"race_mapname_round_"*/,
          v23,
          (System_String_o *)StringLiteral_16746/*"_"*/,
          v24,
          0);
  AtlasManager__SetEventUI(roundNumSpr, v25, 0);
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
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x20
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = headerId;
  if ( (byte_596F092 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_24116/*"race_mapname_"*/);
    byte_596F092 = 1;
  }
  mapNameSpr = this->fields.mapNameSpr;
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_24116/*"race_mapname_"*/, v5, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetEventUI(mapNameSpr, v8, 0);
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
  UnityEngine_Object_o *Object_47472752; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  int32_t v20; // w22
  System_Action_o *v21; // x23
  const MethodInfo *v22; // x4
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  v23 = event_id;
  if ( (byte_596F093 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__);
    sub_2213A60(&StringLiteral_19712/*"ef_mapnamechange_"*/);
    byte_596F093 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    v7 = System_Int32__ToString((int32_t)&v23, 0);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_19712/*"ef_mapnamechange_"*/, v7, 0);
    Object_47472752 = AssetData__GetObject_47472752(effectAssetData, v8, 0);
    if ( Object_47472752 )
    {
      if ( (UnityEngine_GameObject_c *)Object_47472752->klass == UnityEngine_GameObject_TypeInfo )
        v12 = (Il2CppObject *)Object_47472752;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0) )
    {
      TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v14);
      ActionExtensions__Call(endCallback, 0);
    }
    else
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
      v15 = UnityEngine_Object__Instantiate_object_(
              v12,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v15
        || (v17 = (UnityEngine_GameObject_o *)v15,
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v15, 0),
            GameObjectExtensions__SafeSetParent_42897308(gameObject, this->fields.effectAttachRoot, 0),
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 v17,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___),
            v20 = v23,
            v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
            System_Action___ctor(
              v21,
              (Il2CppObject *)this,
              Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__,
              0),
            !Component_object) )
      {
        sub_2213CDC(v15, v16);
      }
      TitleInfoEventOpenHeaderEffect__setup(
        (TitleInfoEventOpenHeaderEffect_o *)Component_object,
        v20,
        v21,
        endCallback,
        v22);
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Component_object, 0);
    }
  }
  else
  {
    TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, (const MethodInfo *)endCallback);
    ActionExtensions__Call(endCallback, 0);
  }
}