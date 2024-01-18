void __fastcall BattleSeManager___ctor(BattleSeManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v12; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v14; // x20

  if ( (byte_4184E19 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__, v10);
    byte_4184E19 = 1;
  }
  LODWORD(this->fields.playingList) = 1065353216;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v11;
  sub_B2C2F8(&this->fields.loadInfos, v11);
  v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v12,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.effectMaster = (struct EffectMaster_o *)v12;
  sub_B2C2F8(&this->fields.effectMaster, v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v13;
  sub_B2C2F8(&this->fields.seToAssetTable, v13);
  v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v14,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this[1].klass = (BattleSeManager_c *)v14;
  sub_B2C2F8(&this[1], v14);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
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
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_4184E15 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, cat);
    sub_B2C35C(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_2186/*"Audio/Battle"*/, v10);
    sub_B2C35C(&StringLiteral_827/*".acb.bytes"*/, v11);
    byte_4184E15 = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B2C434(0LL, cat);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_44307816(
          (System_String_o *)StringLiteral_2186/*"Audio/Battle"*/,
          cat,
          (System_String_o *)StringLiteral_827/*".acb.bytes"*/,
          0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v14, 1, 0LL);
}


void __fastcall BattleSeManager__Initialize(BattleSeManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4184E13 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4184E13 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EffectMaster___);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(&this->fields.assetStorageList, MasterData_WarQuestSelectionMaster);
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
  if ( (byte_4184E16 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__,
      data);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v6);
    this = (BattleSeManager_o *)sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v7);
    byte_4184E16 = 1;
  }
  if ( !data )
    goto LABEL_17;
  this = v4[7];
  if ( !this )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data->fields.name,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
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
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
      this = v4[8];
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
        *((System_Xml_XmlQualifiedName_o **)&v9->fields.loadInfos + v10),
        (System_Xml_Schema_XmlSchemaObject_o *)data->fields.name,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(playingList) = v9->fields.playingList;
      if ( (__int64)++v10 >= (int)playingList )
        goto LABEL_11;
    }
LABEL_17:
    sub_B2C434(this, data);
  }
LABEL_11:
  this = v4[5];
  if ( !this )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
         (System_Xml_XmlQualifiedName_o *)data->fields.name,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    this = v4[5];
    if ( !this )
      goto LABEL_17;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
             (System_Type_o *)data->fields.name,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
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
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_4184E14 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, cat);
    sub_B2C35C(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_2186/*"Audio/Battle"*/, v10);
    sub_B2C35C(&StringLiteral_827/*".acb.bytes"*/, v11);
    byte_4184E14 = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B2C434(0LL, cat);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_44307816(
          (System_String_o *)StringLiteral_2186/*"Audio/Battle"*/,
          cat,
          (System_String_o *)StringLiteral_827/*".acb.bytes"*/,
          0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v14, 1, 0LL);
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
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_4184E17 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__, seName);
    sub_B2C35C(&Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__, v5);
    sub_B2C35C(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo, v6);
    sub_B2C35C(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__, v7);
    sub_B2C35C(&BattleSeManager___c__DisplayClass14_0_TypeInfo, v8);
    byte_4184E17 = 1;
  }
  v9 = (BattleSeManager___c__DisplayClass14_0_o *)sub_B2C42C(BattleSeManager___c__DisplayClass14_0_TypeInfo);
  BattleSeManager___c__DisplayClass14_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.seName = seName,
        sub_B2C2F8(&v9->fields, seName),
        loadInfos = this->fields.loadInfos,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__),
        !loadInfos) )
  {
    sub_B2C434(v10, v11);
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)loadInfos,
                                               (System_Predicate_T__o *)v13,
                                               (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
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
  BattleSeManager_BattleSePlayer_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4184E18 & 1) == 0 )
  {
    sub_B2C35C(&BattleSeManager_BattleSePlayer_TypeInfo, assetName);
    byte_4184E18 = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, 0LL);
  v13 = (BattleSeManager_BattleSePlayer_o *)sub_B2C42C(BattleSeManager_BattleSePlayer_TypeInfo);
  BattleSeManager_BattleSePlayer___ctor(v13, this, assetName, seName, volume, callback, 0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
  BattleSeManager_BattleSePlayer__Play(v13, 0LL);
  return v13;
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
  sub_B2C2F8(&v12->fields, manager);
  v12->fields.assetName = assetName;
  sub_B2C2F8(&v12->fields.assetName, assetName);
  v12->fields.seName = seName;
  sub_B2C2F8(&v12->fields.seName, seName);
  v12->fields.callback = callback;
  v12 = (BattleSeManager_BattleSePlayer_o *)((char *)v12 + 48);
  *(float *)&v12[-1].fields.player = volume;
  sub_B2C2F8(v12, callback);
}


void __fastcall BattleSeManager_BattleSePlayer__FinishCallback(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  BattleSeManager_o *manager; // x0
  System_Action_o *callback; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B2C434(0LL, method);
  BattleSeManager__OnFinished(manager, this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  this->fields.player = 0LL;
  sub_B2C2F8(&this->fields.player, 0LL);
}


void __fastcall BattleSeManager_BattleSePlayer__Play(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *assetName; // x20
  System_String_o *seName; // x21
  float volume; // s8
  System_Action_o *v8; // x22
  struct SePlayer_o *v9; // x0

  if ( (byte_41850BE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleSeManager_BattleSePlayer_FinishCallback__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41850BE = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v9 = SoundManager__playVoice_24786800(assetName, seName, volume, v8, 0LL);
  this->fields.player = v9;
  sub_B2C2F8(&this->fields.player, v9);
}


void __fastcall BattleSeManager_BattleSePlayer__Stop(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  SePlayer_o *player; // x0
  struct SePlayer_o **p_player; // x20
  __int64 v5; // x1
  BattleSeManager_o *manager; // x0

  p_player = &this->fields.player;
  player = this->fields.player;
  if ( player )
  {
    SePlayer__StopSe(player, 0.0, 0LL);
    manager = this->fields.manager;
    if ( !manager )
      sub_B2C434(0LL, v5);
    BattleSeManager__OnFinished(manager, this, 0LL);
    this->fields.player = 0LL;
    sub_B2C2F8(p_player, 0LL);
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
    sub_B2C434(this, 0LL);
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0LL);
}