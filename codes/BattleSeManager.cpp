void __fastcall BattleSeManager___ctor(BattleSeManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v21; // x20

  if ( (byte_4211D48 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__, v11);
    byte_4211D48 = 1;
  }
  LODWORD(this->fields.playingList) = 1065353216;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v12;
  sub_B0D840(&this->fields.loadInfos, v12);
  v15 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo,
                                                                                        v13,
                                                                                        v14);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v15,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.effectMaster = (struct EffectMaster_o *)v15;
  sub_B0D840(&this->fields.effectMaster, v15);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v18;
  sub_B0D840(&this->fields.seToAssetTable, v18);
  v21 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                        v19,
                                                                                        v20);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v21,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this[1].klass = (BattleSeManager_c *)v21;
  sub_B0D840(&this[1], v21);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
}


void __fastcall BattleSeManager__DownloadSoundAsset(
        BattleSeManager_o *this,
        System_String_o *cat,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct EffectMaster_o *effectMaster; // x0
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_4211D44 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, cat);
    sub_B0D8A4(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_2196/*"Audio/Battle"*/, v10);
    sub_B0D8A4(&StringLiteral_834/*".acb.bytes"*/, v11);
    byte_4211D44 = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_43852188(
          (System_String_o *)StringLiteral_2196/*"Audio/Battle"*/,
          cat,
          (System_String_o *)StringLiteral_834/*".acb.bytes"*/,
          0LL);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v16, 1, 0LL);
}


void __fastcall BattleSeManager__Initialize(BattleSeManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4211D42 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4211D42 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EffectMaster___);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)MasterData_WarQuestSelectionMaster;
  sub_B0D840(&this->fields.assetStorageList, MasterData_WarQuestSelectionMaster);
}


void __fastcall BattleSeManager__LoadEndAsset(BattleSeManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  BattleSeManager_o **v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSeManager_BattleSePlayer__o *playingList; // x8
  BattleSeManager_o *v9; // x21
  unsigned __int64 v10; // x22
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v12; // x0

  v4 = (BattleSeManager_o **)this;
  if ( (byte_4211D45 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__,
      data);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v6);
    this = (BattleSeManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v7);
    byte_4211D45 = 1;
  }
  if ( !data )
    goto LABEL_17;
  this = v4[7];
  if ( !this )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data->fields.name,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  this = (BattleSeManager_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_17;
  playingList = this->fields.playingList;
  v9 = this;
  if ( (int)playingList >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)playingList )
      {
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      this = v4[8];
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
        *((System_Xml_XmlQualifiedName_o **)&v9->fields.loadInfos + v10),
        (System_Xml_Schema_XmlSchemaObject_o *)data->fields.name,
        (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(playingList) = v9->fields.playingList;
      if ( (__int64)++v10 >= (int)playingList )
        goto LABEL_11;
    }
LABEL_17:
    sub_B0D97C(this);
  }
LABEL_11:
  this = v4[5];
  if ( !this )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
         (System_Xml_XmlQualifiedName_o *)data->fields.name,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    this = v4[5];
    if ( !this )
      goto LABEL_17;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
             (System_Type_o *)data->fields.name,
             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
    if ( Item )
      AssetLoader_LoadEndDataHandler__Invoke((AssetLoader_LoadEndDataHandler_o *)Item, data, 0LL);
  }
}


void __fastcall BattleSeManager__LoadSoundAsset(
        BattleSeManager_o *this,
        System_String_o *cat,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct EffectMaster_o *effectMaster; // x0
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_4211D43 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, cat);
    sub_B0D8A4(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_2196/*"Audio/Battle"*/, v10);
    sub_B0D8A4(&StringLiteral_834/*".acb.bytes"*/, v11);
    byte_4211D43 = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_43852188(
          (System_String_o *)StringLiteral_2196/*"Audio/Battle"*/,
          cat,
          (System_String_o *)StringLiteral_834/*".acb.bytes"*/,
          0LL);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v16, 1, 0LL);
}


void __fastcall BattleSeManager__OnFinished(
        BattleSeManager_o *this,
        BattleSeManager_BattleSePlayer_o *player,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSeManager__PlaySeByEffect(
        BattleSeManager_o *this,
        System_String_o *effectName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ;
}


BattleSeManager_BattleSePlayer_o *__fastcall BattleSeManager__SearchPlayingSe(
        BattleSeManager_o *this,
        System_String_o *seName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleSeManager___c__DisplayClass14_0_o *v9; // x21
  __int64 v10; // x0
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4211D46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__, seName);
    sub_B0D8A4(&Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__, v7);
    sub_B0D8A4(&BattleSeManager___c__DisplayClass14_0_TypeInfo, v8);
    byte_4211D46 = 1;
  }
  v9 = (BattleSeManager___c__DisplayClass14_0_o *)sub_B0D974(
                                                    BattleSeManager___c__DisplayClass14_0_TypeInfo,
                                                    seName,
                                                    method);
  BattleSeManager___c__DisplayClass14_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.seName = seName,
        sub_B0D840(&v9->fields, seName),
        loadInfos = this->fields.loadInfos,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo,
                                                                         v12,
                                                                         v13),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__),
        !loadInfos) )
  {
    sub_B0D97C(v10);
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)loadInfos,
                                               (System_Predicate_T__o *)v14,
                                               (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
}


void __fastcall BattleSeManager__SetUp(BattleSeManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, method);
}


void __fastcall BattleSeManager__Start(BattleSeManager_o *this, const MethodInfo *method)
{
  ;
}


BattleSeManager_BattleSePlayer_o *__fastcall BattleSeManager__playBattleSe(
        BattleSeManager_o *this,
        System_String_o *assetName,
        System_String_o *seName,
        float volume,
        System_Action_o *callback,
        System_Action_BattleSeManager_BattleSePlayer__o *systemCallback,
        const MethodInfo *method)
{
  BattleSeManager_BattleSePlayer_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  BattleSeManager_BattleSePlayer_o *v15; // x23
  __int64 v16; // x0

  if ( (byte_4211D47 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSeManager_BattleSePlayer_TypeInfo, assetName);
    byte_4211D47 = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, 0LL);
  v15 = (BattleSeManager_BattleSePlayer_o *)sub_B0D974(BattleSeManager_BattleSePlayer_TypeInfo, v13, v14);
  BattleSeManager_BattleSePlayer___ctor(v15, this, assetName, seName, volume, callback, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  BattleSeManager_BattleSePlayer__Play(v15, 0LL);
  return v15;
}


void __fastcall BattleSeManager__playSeCallback(
        BattleSeManager_o *this,
        BattleSeManager_BattleSePlayer_o *player,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSeManager_BattleSePlayer___ctor(
        BattleSeManager_BattleSePlayer_o *this,
        BattleSeManager_o *manager,
        System_String_o *assetName,
        System_String_o *seName,
        float volume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleSeManager_BattleSePlayer_o *v12; // x23

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.manager = manager;
  sub_B0D840(&v12->fields, manager);
  v12->fields.assetName = assetName;
  sub_B0D840(&v12->fields.assetName, assetName);
  v12->fields.seName = seName;
  sub_B0D840(&v12->fields.seName, seName);
  v12->fields.callback = callback;
  v12 = (BattleSeManager_BattleSePlayer_o *)((char *)v12 + 48);
  *(float *)&v12[-1].fields.player = volume;
  sub_B0D840(v12, callback);
}


void __fastcall BattleSeManager_BattleSePlayer__FinishCallback(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  BattleSeManager_o *manager; // x0
  System_Action_o *callback; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  BattleSeManager__OnFinished(manager, this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  this->fields.player = 0LL;
  sub_B0D840(&this->fields.player, 0LL);
}


void __fastcall BattleSeManager_BattleSePlayer__Play(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *assetName; // x20
  System_String_o *seName; // x21
  float volume; // s8
  System_Action_o *v9; // x22
  struct SePlayer_o *v10; // x0

  if ( (byte_4211EEA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BattleSeManager_BattleSePlayer_FinishCallback__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4211EEA = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v10 = SoundManager__playVoice_24977528(assetName, seName, volume, v9, 0LL);
  this->fields.player = v10;
  sub_B0D840(&this->fields.player, v10);
}


void __fastcall BattleSeManager_BattleSePlayer__Stop(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  SePlayer_o *player; // x0
  struct SePlayer_o **p_player; // x20
  BattleSeManager_o *manager; // x0

  p_player = &this->fields.player;
  player = this->fields.player;
  if ( player )
  {
    SePlayer__StopSe(player, 0.0, 0LL);
    manager = this->fields.manager;
    if ( !manager )
      sub_B0D97C(0LL);
    BattleSeManager__OnFinished(manager, this, 0LL);
    this->fields.player = 0LL;
    sub_B0D840(p_player, 0LL);
  }
}


System_String_o *__fastcall BattleSeManager_BattleSePlayer__get_SeName(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  return this->fields.seName;
}


void __fastcall BattleSeManager_LocalAssetInfo___ctor(BattleSeManager_LocalAssetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSeManager___c__DisplayClass14_0___ctor(
        BattleSeManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSeManager___c__DisplayClass14_0___SearchPlayingSe_b__0(
        BattleSeManager___c__DisplayClass14_0_o *this,
        BattleSeManager_BattleSePlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0LL);
}