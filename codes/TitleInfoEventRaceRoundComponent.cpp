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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t PrioredID; // w0
  UISprite_o *baseWindow; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  const MethodInfo *v24; // x2
  UISprite_o *roundNumSpr; // x19
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int32_t v29; // [xsp+8h] [xbp-48h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF

  v29 = termId;
  v30 = eventId;
  if ( (byte_49FC5FB & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64870(&Method_DataManager_GetMasterData_MapCondMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_MapMaster___, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&StringLiteral_22659/*"race_mapname_round_"*/, v14);
    sub_1B64870(&StringLiteral_16056/*"_"*/, v15);
    sub_1B64870(&StringLiteral_22658/*"race_mapname_bg_"*/, v16);
    byte_49FC5FB = 1;
  }
  this->fields.effectAssetData = effectAssetData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.effectAssetData,
    (int32_t)effectAssetData,
    warId,
    mapId);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MapCondMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MapMaster___)) == 0LL
    || (Instance = MapMaster__GetEntity((MapMaster_o *)Instance, mapId, warId, 0LL)) == 0LL
    || !MasterData_object )
  {
    sub_1B64ACC(Instance, v18);
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
  v22 = System_Int32__ToString((int32_t)&v30, 0LL);
  v23 = System_String__Concat_61383576((System_String_o *)StringLiteral_22658/*"race_mapname_bg_"*/, v22, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseWindow, v23, 0LL);
  TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v24);
  roundNumSpr = this->fields.roundNumSpr;
  v26 = System_Int32__ToString((int32_t)&v30, 0LL);
  v27 = System_Int32__ToString((int32_t)&v29, 0LL);
  v28 = System_String__Concat_61396840(
          (System_String_o *)StringLiteral_22659/*"race_mapname_round_"*/,
          v26,
          (System_String_o *)StringLiteral_16056/*"_"*/,
          v27,
          0LL);
  AtlasManager__SetEventUI(roundNumSpr, v28, 0LL);
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
  UISprite_o *mapNameSpr; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = headerId;
  if ( (byte_49FC5FC & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&headerId);
    sub_1B64870(&StringLiteral_22657/*"race_mapname_"*/, v4);
    byte_49FC5FC = 1;
  }
  mapNameSpr = this->fields.mapNameSpr;
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_61383576((System_String_o *)StringLiteral_22657/*"race_mapname_"*/, v6, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mapNameSpr, v7, 0LL);
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
  AssetData_o *effectAssetData; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  UnityEngine_Object_o *Object_37459800; // x0
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x2
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v23; // w22
  TitleInfoEventOpenHeaderEffect_o *v24; // x21
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x4
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  v27 = event_id;
  if ( (byte_49FC5FD & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&event_id);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___, v6);
    sub_1B64870(&UnityEngine_GameObject_TypeInfo, v7);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__, v10);
    sub_1B64870(&StringLiteral_18769/*"ef_mapnamechange_"*/, v11);
    byte_49FC5FD = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    v13 = System_Int32__ToString((int32_t)&v27, 0LL);
    v14 = System_String__Concat_61383576((System_String_o *)StringLiteral_18769/*"ef_mapnamechange_"*/, v13, 0LL);
    Object_37459800 = AssetData__GetObject_37459800(effectAssetData, v14, 0LL);
    if ( Object_37459800 )
    {
      if ( (UnityEngine_GameObject_c *)Object_37459800->klass == UnityEngine_GameObject_TypeInfo )
        v16 = (Il2CppObject *)Object_37459800;
      else
        v16 = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
    {
      TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, v17);
      ActionExtensions__Call(endCallback, 0LL);
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v18 = UnityEngine_Object__Instantiate_object_(
              v16,
              (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v18 )
        goto LABEL_20;
      v20 = (UnityEngine_GameObject_o *)v18;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v18, 0LL);
      GameObjectExtensions__SafeSetParent_33382288(gameObject, this->fields.effectAttachRoot, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v20,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventOpenHeaderEffect___);
      v23 = v27;
      v24 = (TitleInfoEventOpenHeaderEffect_o *)Component_object;
      v25 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaceRoundComponent__setupNameChangeEffect_b__13_0__,
        0LL);
      if ( !v24 )
LABEL_20:
        sub_1B64ACC(v18, v19);
      TitleInfoEventOpenHeaderEffect__setup(v24, v23, v25, endCallback, v26);
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v24, 0LL);
    }
  }
  else
  {
    TitleInfoEventRaceRoundComponent__setHeaderImg(this, this->fields.nowHeaderId, (const MethodInfo *)endCallback);
    ActionExtensions__Call(endCallback, 0LL);
  }
}