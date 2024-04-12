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
  void *Instance; // x0
  __int64 v13; // x1
  MapCondMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t PrioredID; // w0
  UISprite_o *mapNameSpr; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x21
  const MethodInfo *v19; // x2
  struct UnityEngine_GameObject_o *effectAttachRoot; // x19
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  int32_t v24; // [xsp+8h] [xbp-28h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-24h] BYREF

  v24 = termId;
  v25 = eventId;
  if ( (byte_42B443C & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_MapMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_21848/*"race_mapname_round_"*/);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    sub_B52984(&StringLiteral_21847/*"race_mapname_bg_"*/);
    byte_42B443C = 1;
  }
  this[1].klass = (TitleInfoEventRaceRoundComponent_c *)effectAssetData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)effectAssetData,
    *(System_String_array ***)&warId,
    *(System_String_array ***)&mapId,
    *(System_Boolean_array ***)&termId,
    (System_Int32_array **)effectAssetData,
    (System_Int32_array *)method,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MapCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapCondMaster___),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapMaster___)) == 0LL
    || (Instance = MapMaster__GetEntity((MapMaster_o *)Instance, mapId, warId, 0LL)) == 0LL
    || !MasterData_WarQuestSelectionMaster )
  {
    sub_B52A5C(Instance, v13);
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
  v17 = System_Int32__ToString((int32_t)&v25, 0LL);
  v18 = System_String__Concat_44568316((System_String_o *)StringLiteral_21847/*"race_mapname_bg_"*/, v17, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mapNameSpr, v18, 0LL);
  TitleInfoEventRaceRoundComponent__setHeaderImg(this, (int32_t)this->fields.effectAssetData, v19);
  effectAttachRoot = this->fields.effectAttachRoot;
  v21 = System_Int32__ToString((int32_t)&v25, 0LL);
  v22 = System_Int32__ToString((int32_t)&v24, 0LL);
  v23 = System_String__Concat_44571728(
          (System_String_o *)StringLiteral_21848/*"race_mapname_round_"*/,
          v21,
          (System_String_o *)StringLiteral_16011/*"_"*/,
          v22,
          0LL);
  AtlasManager__SetEventUI((UISprite_o *)effectAttachRoot, v23, 0LL);
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


void __fastcall TitleInfoEventRaceRoundComponent__setHeaderImg(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t headerId,
        const MethodInfo *method)
{
  UISprite_o *roundNumSpr; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x20
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = headerId;
  if ( (byte_42B443D & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_21846/*"race_mapname_"*/);
    byte_42B443D = 1;
  }
  roundNumSpr = this->fields.roundNumSpr;
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_44568316((System_String_o *)StringLiteral_21846/*"race_mapname_"*/, v5, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(roundNumSpr, v6, 0LL);
}


void __fastcall TitleInfoEventRaceRoundComponent__setupNameChangeEffect(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t event_id,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  TitleInfoEventRaceRoundComponent_c *klass; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  UnityEngine_Object_o *Object_30344972; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v10; // x21
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t v17; // w22
  TitleInfoEventOpenHeaderEffect_o *v18; // x21
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x4
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v21 = event_id;
  if ( (byte_42B443E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__);
    sub_B52984(&StringLiteral_18328/*"ef_mapnamechange_"*/);
    byte_42B443E = 1;
  }
  klass = this[1].klass;
  if ( klass )
  {
    v7 = System_Int32__ToString((int32_t)&v21, 0LL);
    v8 = System_String__Concat_44568316((System_String_o *)StringLiteral_18328/*"ef_mapnamechange_"*/, v7, 0LL);
    Object_30344972 = AssetData__GetObject_30344972((AssetData_o *)klass, v8, 0LL);
    if ( Object_30344972 )
    {
      if ( (UnityEngine_GameObject_c *)Object_30344972->klass == UnityEngine_GameObject_TypeInfo )
        v10 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_30344972;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
    {
      TitleInfoEventRaceRoundComponent__setHeaderImg(this, (int32_t)this->fields.effectAssetData, v11);
      ActionExtensions__Call(endCallback, 0LL);
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v10,
                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v12 )
        goto LABEL_21;
      v14 = v12;
      gameObject = UnityEngine_GameObject__get_gameObject(v12, 0LL);
      GameObjectExtensions__SafeSetParent_32091088(
        gameObject,
        *(UnityEngine_GameObject_o **)&this->fields.nowHeaderId,
        0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v14,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
      v17 = v21;
      v18 = (TitleInfoEventOpenHeaderEffect_o *)Component_srcLineSprite;
      v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__,
        0LL);
      if ( !v18 )
LABEL_21:
        sub_B52A5C(v12, v13);
      TitleInfoEventOpenHeaderEffect__setup(v18, v17, v19, endCallback, v20);
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v18, 0LL);
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