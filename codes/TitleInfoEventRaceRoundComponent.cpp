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
  WebViewManager_o *Instance; // x0
  MapCondMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v20; // x0
  MapMaster_o *v21; // x0
  MapEntity_o *Entity; // x0
  int32_t PrioredID; // w0
  UISprite_o *mapNameSpr; // x20
  System_String_o *v25; // x0
  System_String_o *v26; // x21
  const MethodInfo *v27; // x2
  struct UnityEngine_GameObject_o *effectAttachRoot; // x19
  System_String_o *v29; // x20
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  int32_t v32; // [xsp+8h] [xbp-28h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF

  v32 = termId;
  v33 = eventId;
  if ( (byte_40FDFE2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_MapCondMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_MapMaster___, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_21576/*"race_mapname_round_"*/, v15);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v16);
    sub_B16FFC(&StringLiteral_21575/*"race_mapname_bg_"*/, v17);
    byte_40FDFE2 = 1;
  }
  this[1].klass = (TitleInfoEventRaceRoundComponent_c *)effectAssetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)effectAssetData,
    *(System_String_array ***)&warId,
    *(System_String_array ***)&mapId,
    *(System_Boolean_array ***)&termId,
    (System_Int32_array **)effectAssetData,
    (System_Int32_array *)method,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MapCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapCondMaster___),
        (v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v21 = (MapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v20,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapMaster___)) == 0LL
    || (Entity = MapMaster__GetEntity(v21, mapId, warId, 0LL)) == 0LL
    || !MasterData_WarQuestSelectionMaster )
  {
    sub_B170D4();
  }
  PrioredID = MapCondMaster__GetPrioredID(
                MasterData_WarQuestSelectionMaster,
                4,
                mapId,
                Entity->fields.headerImageId,
                0,
                0,
                0LL);
  mapNameSpr = this->fields.mapNameSpr;
  LODWORD(this->fields.effectAssetData) = PrioredID;
  v25 = System_Int32__ToString((int32_t)&v33, 0LL);
  v26 = System_String__Concat_43743732((System_String_o *)StringLiteral_21575/*"race_mapname_bg_"*/, v25, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mapNameSpr, v26, 0LL);
  TitleInfoEventRaceRoundComponent__setHeaderImg(this, (int32_t)this->fields.effectAssetData, v27);
  effectAttachRoot = this->fields.effectAttachRoot;
  v29 = System_Int32__ToString((int32_t)&v33, 0LL);
  v30 = System_Int32__ToString((int32_t)&v32, 0LL);
  v31 = System_String__Concat_43747144(
          (System_String_o *)StringLiteral_21576/*"race_mapname_round_"*/,
          v29,
          (System_String_o *)StringLiteral_15842/*"_"*/,
          v30,
          0LL);
  AtlasManager__SetEventUI((UISprite_o *)effectAttachRoot, v31, 0LL);
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
  if ( (byte_40FDFE3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&headerId);
    sub_B16FFC(&StringLiteral_21574/*"race_mapname_"*/, v4);
    byte_40FDFE3 = 1;
  }
  roundNumSpr = this->fields.roundNumSpr;
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_21574/*"race_mapname_"*/, v6, 0LL);
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
  UnityEngine_Object_o *Object_29932412; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x21
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t v22; // w22
  TitleInfoEventOpenHeaderEffect_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x4
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  v30 = event_id;
  if ( (byte_40FDFE4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&event_id);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___, v6);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__, v10);
    sub_B16FFC(&StringLiteral_18126/*"ef_mapnamechange_"*/, v11);
    byte_40FDFE4 = 1;
  }
  klass = this[1].klass;
  if ( klass )
  {
    v13 = System_Int32__ToString((int32_t)&v30, 0LL);
    v14 = System_String__Concat_43743732((System_String_o *)StringLiteral_18126/*"ef_mapnamechange_"*/, v13, 0LL);
    Object_29932412 = AssetData__GetObject_29932412((AssetData_o *)klass, v14, 0LL);
    if ( Object_29932412 )
    {
      if ( (UnityEngine_GameObject_c *)Object_29932412->klass == UnityEngine_GameObject_TypeInfo )
        v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_29932412;
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
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v18 )
        goto LABEL_21;
      v19 = v18;
      gameObject = UnityEngine_GameObject__get_gameObject(v18, 0LL);
      GameObjectExtensions__SafeSetParent_27425996(
        gameObject,
        *(UnityEngine_GameObject_o **)&this->fields.nowHeaderId,
        0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v19,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
      v22 = v30;
      v23 = (TitleInfoEventOpenHeaderEffect_o *)Component_srcLineSprite;
      v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
      System_Action___ctor(
        v28,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__,
        0LL);
      if ( !v23 )
LABEL_21:
        sub_B170D4();
      TitleInfoEventOpenHeaderEffect__setup(v23, v22, v28, endCallback, v29);
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v23, 0LL);
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