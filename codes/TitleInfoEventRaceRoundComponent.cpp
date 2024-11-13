void __fastcall TitleInfoEventRaceRoundComponent___ctor(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  this->fields.nowHeaderId = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventRaceRoundComponent__Destroy(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall TitleInfoEventRaceRoundComponent__IsDispPossible(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventRaceRoundComponent__IsEventRaidBoss(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall TitleInfoEventRaceRoundComponent__OnDestroy(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaceRoundComponent__Setup(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t eventId,
        int32_t warId,
        int32_t mapId,
        int32_t termId,
        AssetData_o *effectAssetData,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
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
  void *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t PrioredID; // w0
  UISprite_o *baseWindow; // x20
  System_String_o *v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x21
  const MethodInfo *v32; // x2
  UISprite_o *roundNumSpr; // x19
  System_String_o *v34; // x20
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  int32_t v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  v37 = termId;
  v38 = eventId;
  if ( (byte_4B14517 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&warId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapCondMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapMaster___, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_22993/*"race_mapname_round_"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22992/*"race_mapname_bg_"*/, v22, v23);
    byte_4B14517 = 1;
  }
  this->fields.effectAssetData = effectAssetData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.effectAssetData,
    (int64_t)effectAssetData,
    *(int64_t *)&warId,
    mapId,
    *(System_String_o **)&termId,
    (BattleSetupInfo_o *)effectAssetData,
    (FollowerInfo_o *)method,
    v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapCondMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapMaster___)) == 0LL
    || (Instance = MapMaster__GetEntity((MapMaster_o *)Instance, mapId, warId, 0LL)) == 0LL
    || !MasterData_object )
  {
    sub_1BCAA3C(Instance, v25);
  }
  PrioredID = MapCondMaster__GetPrioredID(
                (MapCondMaster_o *)MasterData_object,
                4,
                mapId,
                *((_DWORD *)Instance + 9),
                0,
                0,
                0LL);
  baseWindow = this->fields.baseWindow;
  this->fields.nowHeaderId = PrioredID;
  v29 = System_Int32__ToString((int32_t)&v38, 0LL);
  v31 = System_String__Concat_62401220((System_String_o *)StringLiteral_22992/*"race_mapname_bg_"*/, v29, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
  AtlasManager__SetEventUI(baseWindow, v31, 0LL);
  TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v32);
  roundNumSpr = this->fields.roundNumSpr;
  v34 = System_Int32__ToString((int32_t)&v38, 0LL);
  v35 = System_Int32__ToString((int32_t)&v37, 0LL);
  v36 = System_String__Concat_62414484(
          (System_String_o *)StringLiteral_22993/*"race_mapname_round_"*/,
          v34,
          (System_String_o *)StringLiteral_16290/*"_"*/,
          v35,
          0LL);
  AtlasManager__SetEventUI(roundNumSpr, v36, 0LL);
}


void __fastcall TitleInfoEventRaceRoundComponent__UpdateDisp(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaceRoundComponent___setupNameChangeEffect_b__13_0(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaceRoundComponent__setHeaderImg(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t headerId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UISprite_o *mapNameSpr; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = headerId;
  if ( (byte_4B14518 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&headerId, method);
    sub_1BCA7E0(&StringLiteral_22991/*"race_mapname_"*/, v4, v5);
    byte_4B14518 = 1;
  }
  mapNameSpr = this->fields.mapNameSpr;
  v7 = System_Int32__ToString((int32_t)&v10, 0LL);
  v9 = System_String__Concat_62401220((System_String_o *)StringLiteral_22991/*"race_mapname_"*/, v7, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
  AtlasManager__SetEventUI(mapNameSpr, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaceRoundComponent__setupNameChangeEffect(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t event_id,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  AssetData_o *effectAssetData; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  UnityEngine_Object_o *Object_38483832; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x21
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v31; // w22
  TitleInfoEventOpenHeaderEffect_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x23
  const MethodInfo *v37; // x4
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  v38 = event_id;
  if ( (byte_4B14519 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&event_id, endCallback);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___, v6, v7);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__, v14, v15);
    sub_1BCA7E0(&StringLiteral_19034/*"ef_mapnamechange_"*/, v16, v17);
    byte_4B14519 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    v19 = System_Int32__ToString((int32_t)&v38, 0LL);
    v20 = System_String__Concat_62401220((System_String_o *)StringLiteral_19034/*"ef_mapnamechange_"*/, v19, 0LL);
    Object_38483832 = AssetData__GetObject_38483832(effectAssetData, v20, 0LL);
    if ( Object_38483832 )
    {
      if ( (UnityEngine_GameObject_c *)Object_38483832->klass == UnityEngine_GameObject_TypeInfo )
        v23 = (Il2CppObject *)Object_38483832;
      else
        v23 = 0LL;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
    {
      TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v25);
      ActionExtensions__Call(endCallback, 0LL);
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      v26 = UnityEngine_Object__Instantiate_object_(
              v23,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v26 )
        goto LABEL_20;
      v28 = (UnityEngine_GameObject_o *)v26;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v26, 0LL);
      GameObjectExtensions__SafeSetParent_34336992(gameObject, this->fields.effectAttachRoot, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v28,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
      v31 = v38;
      v32 = (TitleInfoEventOpenHeaderEffect_o *)Component_object;
      v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
      System_Action___ctor(
        v36,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__,
        0LL);
      if ( !v32 )
LABEL_20:
        sub_1BCAA3C(v26, v27);
      TitleInfoEventOpenHeaderEffect__setup(v32, v31, v36, endCallback, v37);
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v32, 0LL);
    }
  }
  else
  {
    TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, (const MethodInfo *)endCallback);
    ActionExtensions__Call(endCallback, 0LL);
  }
}