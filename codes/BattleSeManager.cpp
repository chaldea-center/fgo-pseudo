void __fastcall BattleSeManager___ctor(BattleSeManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v6; // x20

  if ( (byte_434EC8A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
    byte_434EC8A = 1;
  }
  LODWORD(this->fields.playingList) = 1065353216;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v3;
  sub_B70630(&this->fields.loadInfos);
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.effectMaster = (struct EffectMaster_o *)v4;
  sub_B70630(&this->fields.effectMaster);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v5;
  sub_B70630(&this->fields.seToAssetTable);
  v6 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v6,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this[1].klass = (BattleSeManager_c *)v6;
  sub_B70630(&this[1]);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
}


void __fastcall BattleSeManager__DownloadSoundAsset(
        BattleSeManager_o *this,
        System_String_o *cat,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  struct EffectMaster_o *effectMaster; // x0
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_434EC86 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_BattleSeManager_LoadEndAsset__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&StringLiteral_2220/*"Audio/Battle"*/);
    sub_B70694(&StringLiteral_842/*".acb.bytes"*/);
    byte_434EC86 = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B7076C(0LL, cat);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v8 = System_String__Concat_44760452(
         (System_String_o *)StringLiteral_2220/*"Audio/Battle"*/,
         cat,
         (System_String_o *)StringLiteral_842/*".acb.bytes"*/,
         0LL);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v8, v9, 1, 0LL);
}


void __fastcall BattleSeManager__Initialize(BattleSeManager_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_434EC84 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434EC84 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EffectMaster___);
  sub_B70630(&this->fields.assetStorageList);
}


void __fastcall BattleSeManager__LoadEndAsset(BattleSeManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  BattleSeManager_o **v4; // x20
  struct System_Collections_Generic_List_BattleSeManager_BattleSePlayer__o *playingList; // x8
  BattleSeManager_o *v6; // x21
  unsigned __int64 v7; // x22
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v9; // x0

  v4 = (BattleSeManager_o **)this;
  if ( (byte_434EC87 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    this = (BattleSeManager_o *)sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    byte_434EC87 = 1;
  }
  if ( !data )
    goto LABEL_17;
  this = v4[7];
  if ( !this )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data->fields.name,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  this = (BattleSeManager_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_17;
  playingList = this->fields.playingList;
  v6 = this;
  if ( (int)playingList >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)playingList )
      {
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
      }
      this = v4[8];
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
        *((System_Xml_XmlQualifiedName_o **)&v6->fields.loadInfos + v7),
        (System_Xml_Schema_XmlSchemaObject_o *)data->fields.name,
        (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(playingList) = v6->fields.playingList;
      if ( (__int64)++v7 >= (int)playingList )
        goto LABEL_11;
    }
LABEL_17:
    sub_B7076C(this, data);
  }
LABEL_11:
  this = v4[5];
  if ( !this )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
         (System_Xml_XmlQualifiedName_o *)data->fields.name,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    this = v4[5];
    if ( !this )
      goto LABEL_17;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
             (System_Type_o *)data->fields.name,
             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
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
  struct EffectMaster_o *effectMaster; // x0
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_434EC85 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_BattleSeManager_LoadEndAsset__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&StringLiteral_2220/*"Audio/Battle"*/);
    sub_B70694(&StringLiteral_842/*".acb.bytes"*/);
    byte_434EC85 = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B7076C(0LL, cat);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v8 = System_String__Concat_44760452(
         (System_String_o *)StringLiteral_2220/*"Audio/Battle"*/,
         cat,
         (System_String_o *)StringLiteral_842/*".acb.bytes"*/,
         0LL);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v8, v9, 1, 0LL);
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
  BattleSeManager___c__DisplayClass14_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_434EC88 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
    sub_B70694(&Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__);
    sub_B70694(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo);
    sub_B70694(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__);
    sub_B70694(&BattleSeManager___c__DisplayClass14_0_TypeInfo);
    byte_434EC88 = 1;
  }
  v5 = (BattleSeManager___c__DisplayClass14_0_o *)sub_B70764(BattleSeManager___c__DisplayClass14_0_TypeInfo);
  BattleSeManager___c__DisplayClass14_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.seName = seName,
        sub_B70630(&v5->fields),
        loadInfos = this->fields.loadInfos,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__),
        !loadInfos) )
  {
    sub_B7076C(v6, v7);
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)loadInfos,
                                               (System_Predicate_T__o *)v9,
                                               (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
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

  if ( (byte_434EC89 & 1) == 0 )
  {
    sub_B70694(&BattleSeManager_BattleSePlayer_TypeInfo);
    byte_434EC89 = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, 0LL);
  v13 = (BattleSeManager_BattleSePlayer_o *)sub_B70764(BattleSeManager_BattleSePlayer_TypeInfo);
  BattleSeManager_BattleSePlayer___ctor(v13, this, assetName, seName, volume, callback, 0LL);
  if ( !v13 )
    sub_B7076C(v14, v15);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.manager = manager;
  sub_B70630((BattleServantConfConponent_o *)&v12->fields, (System_Int32_array **)manager, v13, v14, v15, v16, v17, v18);
  v12->fields.assetName = assetName;
  sub_B70630(
    (BattleServantConfConponent_o *)&v12->fields.assetName,
    (System_Int32_array **)assetName,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v12->fields.seName = seName;
  sub_B70630(
    (BattleServantConfConponent_o *)&v12->fields.seName,
    (System_Int32_array **)seName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v12->fields.callback = callback;
  v12 = (BattleSeManager_BattleSePlayer_o *)((char *)v12 + 48);
  *(float *)&v12[-1].fields.player = volume;
  sub_B70630((BattleServantConfConponent_o *)v12, (System_Int32_array **)callback, v31, v32, v33, v34, v35, v36);
}


void __fastcall BattleSeManager_BattleSePlayer__FinishCallback(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  BattleSeManager_o *manager; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Action_o *callback; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B7076C(0LL, method);
  BattleSeManager__OnFinished(manager, this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  this->fields.player = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.player, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattleSeManager_BattleSePlayer__Play(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  System_String_o *assetName; // x20
  System_String_o *seName; // x21
  float volume; // s8
  System_Action_o *v6; // x22
  struct SePlayer_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_434F838 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattleSeManager_BattleSePlayer_FinishCallback__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434F838 = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v7 = SoundManager__playVoice_23183232(assetName, seName, volume, v6, 0LL);
  this->fields.player = v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.player,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall BattleSeManager_BattleSePlayer__Stop(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  SePlayer_o *player; // x0
  struct SePlayer_o **p_player; // x20
  __int64 v5; // x1
  BattleSeManager_o *manager; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  p_player = &this->fields.player;
  player = this->fields.player;
  if ( player )
  {
    SePlayer__StopSe(player, 0.0, 0LL);
    manager = this->fields.manager;
    if ( !manager )
      sub_B7076C(0LL, v5);
    BattleSeManager__OnFinished(manager, this, 0LL);
    this->fields.player = 0LL;
    sub_B70630((BattleServantConfConponent_o *)p_player, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_B7076C(this, 0LL);
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0LL);
}