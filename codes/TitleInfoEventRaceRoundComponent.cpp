void __fastcall TitleInfoEventRaceRoundComponent___ctor(
        TitleInfoEventRaceRoundComponent_o *this,
        const MethodInfo *method)
{
  LODWORD(this->fields.effectAssetData) = -1;
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
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *Instance; // x0
  __int64 v19; // x1
  MapCondMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t PrioredID; // w0
  UISprite_o *mapNameSpr; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  const MethodInfo *v25; // x2
  struct UnityEngine_GameObject_o *effectAttachRoot; // x19
  System_String_o *v27; // x20
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  int32_t v30; // [xsp+8h] [xbp-28h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-24h] BYREF

  v30 = termId;
  v31 = eventId;
  if ( (byte_418BA1D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_MapCondMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_MapMaster___, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_21668/*"race_mapname_round_"*/, v15);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v16);
    sub_B2C35C(&StringLiteral_21667/*"race_mapname_bg_"*/, v17);
    byte_418BA1D = 1;
  }
  this[1].klass = (TitleInfoEventRaceRoundComponent_c *)effectAssetData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)effectAssetData,
    *(System_String_array ***)&warId,
    *(System_String_array ***)&mapId,
    *(System_Boolean_array ***)&termId,
    (System_Int32_array **)effectAssetData,
    (System_Int32_array *)method,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MapCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapCondMaster___),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapMaster___)) == 0LL
    || (Instance = MapMaster__GetEntity((MapMaster_o *)Instance, mapId, warId, 0LL)) == 0LL
    || !MasterData_WarQuestSelectionMaster )
  {
    sub_B2C434(Instance, v19);
  }
  PrioredID = MapCondMaster__GetPrioredID(
                MasterData_WarQuestSelectionMaster,
                4,
                mapId,
                *((_DWORD *)Instance + 9),
                0,
                0,
                0LL);
  mapNameSpr = this->fields.mapNameSpr;
  LODWORD(this->fields.effectAssetData) = PrioredID;
  v23 = System_Int32__ToString((int32_t)&v31, 0LL);
  v24 = System_String__Concat_44305532((System_String_o *)StringLiteral_21667/*"race_mapname_bg_"*/, v23, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mapNameSpr, v24, 0LL);
  TitleInfoEventRaceRoundComponent__setHeaderImg(this, (int32_t)this->fields.effectAssetData, v25);
  effectAttachRoot = this->fields.effectAttachRoot;
  v27 = System_Int32__ToString((int32_t)&v31, 0LL);
  v28 = System_Int32__ToString((int32_t)&v30, 0LL);
  v29 = System_String__Concat_44308944(
          (System_String_o *)StringLiteral_21668/*"race_mapname_round_"*/,
          v27,
          (System_String_o *)StringLiteral_15905/*"_"*/,
          v28,
          0LL);
  AtlasManager__SetEventUI((UISprite_o *)effectAttachRoot, v29, 0LL);
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

  TitleInfoEventRaceRoundComponent__setHeaderImg(this, (int32_t)this->fields.effectAssetData, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaceRoundComponent__setHeaderImg(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t headerId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UISprite_o *roundNumSpr; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = headerId;
  if ( (byte_418BA1E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&headerId);
    sub_B2C35C(&StringLiteral_21666/*"race_mapname_"*/, v4);
    byte_418BA1E = 1;
  }
  roundNumSpr = this->fields.roundNumSpr;
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_21666/*"race_mapname_"*/, v6, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(roundNumSpr, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaceRoundComponent__setupNameChangeEffect(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t event_id,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TitleInfoEventRaceRoundComponent_c *klass; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  UnityEngine_Object_o *Object_30137720; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x21
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t v23; // w22
  TitleInfoEventOpenHeaderEffect_o *v24; // x21
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x4
  int32_t v27; // [xsp+Ch] [xbp-24h] BYREF

  v27 = event_id;
  if ( (byte_418BA1F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&event_id);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___, v6);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__, v10);
    sub_B2C35C(&StringLiteral_18194/*"ef_mapnamechange_"*/, v11);
    byte_418BA1F = 1;
  }
  klass = this[1].klass;
  if ( klass )
  {
    v13 = System_Int32__ToString((int32_t)&v27, 0LL);
    v14 = System_String__Concat_44305532((System_String_o *)StringLiteral_18194/*"ef_mapnamechange_"*/, v13, 0LL);
    Object_30137720 = AssetData__GetObject_30137720((AssetData_o *)klass, v14, 0LL);
    if ( Object_30137720 )
    {
      if ( (UnityEngine_GameObject_c *)Object_30137720->klass == UnityEngine_GameObject_TypeInfo )
        v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_30137720;
      else
        v16 = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
    {
      TitleInfoEventRaceRoundComponent__setHeaderImg(this, (int32_t)this->fields.effectAssetData, v17);
      ActionExtensions__Call(endCallback, 0LL);
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v16,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v18 )
        goto LABEL_21;
      v20 = v18;
      gameObject = UnityEngine_GameObject__get_gameObject(v18, 0LL);
      GameObjectExtensions__SafeSetParent_31331952(
        gameObject,
        *(UnityEngine_GameObject_o **)&this->fields.nowHeaderId,
        0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v20,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
      v23 = v27;
      v24 = (TitleInfoEventOpenHeaderEffect_o *)Component_srcLineSprite;
      v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__,
        0LL);
      if ( !v24 )
LABEL_21:
        sub_B2C434(v18, v19);
      TitleInfoEventOpenHeaderEffect__setup(v24, v23, v25, endCallback, v26);
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v24, 0LL);
    }
  }
  else
  {
    TitleInfoEventRaceRoundComponent__setHeaderImg(
      this,
      (int32_t)this->fields.effectAssetData,
      (const MethodInfo *)endCallback);
    ActionExtensions__Call(endCallback, 0LL);
  }
}