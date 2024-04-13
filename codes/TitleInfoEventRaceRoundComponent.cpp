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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  void *Instance; // x0
  __int64 v31; // x1
  MapCondMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t PrioredID; // w0
  UISprite_o *mapNameSpr; // x20
  System_String_o *v35; // x0
  System_String_o *v36; // x21
  const MethodInfo *v37; // x2
  struct UnityEngine_GameObject_o *effectAttachRoot; // x19
  System_String_o *v39; // x20
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  int32_t v42; // [xsp+8h] [xbp-28h] BYREF
  int32_t v43; // [xsp+Ch] [xbp-24h] BYREF

  v42 = termId;
  v43 = eventId;
  if ( (byte_42ECC0A & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, warId, *(_QWORD *)&mapId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapCondMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_21961/*"race_mapname_round_"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21960/*"race_mapname_bg_"*/, v27, v28, v29);
    byte_42ECC0A = 1;
  }
  this[1].klass = (TitleInfoEventRaceRoundComponent_c *)effectAssetData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)effectAssetData,
    *(System_String_array ***)&warId,
    *(System_String_array ***)&mapId,
    *(System_Boolean_array ***)&termId,
    (System_Int32_array **)effectAssetData,
    (System_Int32_array *)method,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MapCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapCondMaster___),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapMaster___)) == 0LL
    || (Instance = MapMaster__GetEntity((MapMaster_o *)Instance, mapId, warId, 0LL)) == 0LL
    || !MasterData_WarQuestSelectionMaster )
  {
    sub_B5D69C(Instance, v31);
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
  v35 = System_Int32__ToString((int32_t)&v43, 0LL);
  v36 = System_String__Concat_44577788((System_String_o *)StringLiteral_21960/*"race_mapname_bg_"*/, v35, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mapNameSpr, v36, 0LL);
  TitleInfoEventRaceRoundComponent__setHeaderImg(this, (int32_t)this->fields.effectAssetData, v37);
  effectAttachRoot = this->fields.effectAttachRoot;
  v39 = System_Int32__ToString((int32_t)&v43, 0LL);
  v40 = System_Int32__ToString((int32_t)&v42, 0LL);
  v41 = System_String__Concat_44581200(
          (System_String_o *)StringLiteral_21961/*"race_mapname_round_"*/,
          v39,
          (System_String_o *)StringLiteral_16096/*"_"*/,
          v40,
          0LL);
  AtlasManager__SetEventUI((UISprite_o *)effectAttachRoot, v41, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UISprite_o *roundNumSpr; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x20
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = headerId;
  if ( (byte_42ECC0B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, headerId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21959/*"race_mapname_"*/, v5, v6, v7);
    byte_42ECC0B = 1;
  }
  roundNumSpr = this->fields.roundNumSpr;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_44577788((System_String_o *)StringLiteral_21959/*"race_mapname_"*/, v9, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(roundNumSpr, v10, 0LL);
}


void __fastcall TitleInfoEventRaceRoundComponent__setupNameChangeEffect(
        TitleInfoEventRaceRoundComponent_o *this,
        int32_t event_id,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  TitleInfoEventRaceRoundComponent_c *klass; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  UnityEngine_Object_o *Object_30642600; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v28; // x21
  const MethodInfo *v29; // x2
  UnityEngine_GameObject_o *v30; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *v32; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t v35; // w22
  TitleInfoEventOpenHeaderEffect_o *v36; // x21
  System_Action_o *v37; // x23
  const MethodInfo *v38; // x4
  int32_t v39; // [xsp+Ch] [xbp-24h] BYREF

  v39 = event_id;
  if ( (byte_42ECC0C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, event_id, (_DWORD)endCallback, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_18422/*"ef_mapnamechange_"*/, v21, v22, v23);
    byte_42ECC0C = 1;
  }
  klass = this[1].klass;
  if ( klass )
  {
    v25 = System_Int32__ToString((int32_t)&v39, 0LL);
    v26 = System_String__Concat_44577788((System_String_o *)StringLiteral_18422/*"ef_mapnamechange_"*/, v25, 0LL);
    Object_30642600 = AssetData__GetObject_30642600((AssetData_o *)klass, v26, 0LL);
    if ( Object_30642600 )
    {
      if ( (UnityEngine_GameObject_c *)Object_30642600->klass == UnityEngine_GameObject_TypeInfo )
        v28 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_30642600;
      else
        v28 = 0LL;
    }
    else
    {
      v28 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v28, 0LL, 0LL) )
    {
      TitleInfoEventRaceRoundComponent__setHeaderImg(this, (int32_t)this->fields.effectAssetData, v29);
      ActionExtensions__Call(endCallback, 0LL);
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v30 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v28,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v30 )
        goto LABEL_21;
      v32 = v30;
      gameObject = UnityEngine_GameObject__get_gameObject(v30, 0LL);
      GameObjectExtensions__SafeSetParent_32436524(
        gameObject,
        *(UnityEngine_GameObject_o **)&this->fields.nowHeaderId,
        0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v32,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
      v35 = v39;
      v36 = (TitleInfoEventOpenHeaderEffect_o *)Component_srcLineSprite;
      v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v37,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__,
        0LL);
      if ( !v36 )
LABEL_21:
        sub_B5D69C(v30, v31);
      TitleInfoEventOpenHeaderEffect__setup(v36, v35, v37, endCallback, v38);
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v36, 0LL);
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