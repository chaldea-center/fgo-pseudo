void __fastcall BattleSeManager___ctor(BattleSeManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v29; // x20

  if ( (byte_40F752F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__, v13);
    byte_40F752F = 1;
  }
  LODWORD(this->fields.playingList) = 1065353216;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v14;
  sub_B16F98(&this->fields.loadInfos, v14);
  v19 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo,
                                                                                        v15,
                                                                                        v16,
                                                                                        v17,
                                                                                        v18);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v19,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.effectMaster = (struct EffectMaster_o *)v19;
  sub_B16F98(&this->fields.effectMaster, v19);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v24;
  sub_B16F98(&this->fields.seToAssetTable, v24);
  v29 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                        v25,
                                                                                        v26,
                                                                                        v27,
                                                                                        v28);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v29,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this[1].klass = (BattleSeManager_c *)v29;
  sub_B16F98(&this[1], v29);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
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
  __int64 v16; // x3
  __int64 v17; // x4
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_40F752B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, cat);
    sub_B16FFC(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_2180, v10);
    sub_B16FFC(&StringLiteral_826, v11);
    byte_40F752B = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_2180,
          cat,
          (System_String_o *)StringLiteral_826,
          0LL);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15, v16, v17);
  AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v18, 1, 0LL);
}


void __fastcall BattleSeManager__Initialize(BattleSeManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F7529 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F7529 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EffectMaster___);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)MasterData_WarQuestSelectionMaster;
  sub_B16F98(&this->fields.assetStorageList, MasterData_WarQuestSelectionMaster);
}


void __fastcall BattleSeManager__LoadEndAsset(BattleSeManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *seToAssetTable; // x0
  System_String_array *ObjectNameList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  System_String_array *v13; // x21
  unsigned __int64 v14; // x22
  BattleSeManager_c *klass; // x0
  struct EffectMaster_o *effectMaster; // x0
  struct EffectMaster_o *v17; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0

  if ( (byte_40F752C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__,
      data);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v7);
    byte_40F752C = 1;
  }
  if ( !data )
    goto LABEL_17;
  seToAssetTable = this->fields.seToAssetTable;
  if ( !seToAssetTable )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seToAssetTable,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data->fields.name,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  ObjectNameList = AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_17;
  v12 = *(_QWORD *)&ObjectNameList->max_length;
  v13 = ObjectNameList;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
      {
        sub_B17100(ObjectNameList, v10, v11);
        sub_B170A0();
      }
      klass = this[1].klass;
      if ( !klass )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)klass,
        (System_Xml_XmlQualifiedName_o *)v13->m_Items[v14],
        (System_Xml_Schema_XmlSchemaObject_o *)data->fields.name,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(v12) = v13->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_11;
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_11:
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
         (System_Xml_XmlQualifiedName_o *)data->fields.name,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    v17 = this->fields.effectMaster;
    if ( !v17 )
      goto LABEL_17;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v17,
             (System_Type_o *)data->fields.name,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
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
  __int64 v16; // x3
  __int64 v17; // x4
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_40F752A & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, cat);
    sub_B16FFC(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_2180, v10);
    sub_B16FFC(&StringLiteral_826, v11);
    byte_40F752A = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_2180,
          cat,
          (System_String_o *)StringLiteral_826,
          0LL);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15, v16, v17);
  AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v18, 1, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleSeManager___c__DisplayClass14_0_o *v11; // x21
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F752D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__, seName);
    sub_B16FFC(&Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo, v8);
    sub_B16FFC(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__, v9);
    sub_B16FFC(&BattleSeManager___c__DisplayClass14_0_TypeInfo, v10);
    byte_40F752D = 1;
  }
  v11 = (BattleSeManager___c__DisplayClass14_0_o *)sub_B170CC(
                                                     BattleSeManager___c__DisplayClass14_0_TypeInfo,
                                                     seName,
                                                     method,
                                                     v3,
                                                     v4);
  BattleSeManager___c__DisplayClass14_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.seName = seName,
        sub_B16F98(&v11->fields, seName),
        loadInfos = this->fields.loadInfos,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo,
                                                                         v13,
                                                                         v14,
                                                                         v15,
                                                                         v16),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__),
        !loadInfos) )
  {
    sub_B170D4();
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)loadInfos,
                                               (System_Predicate_T__o *)v17,
                                               (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
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
  __int64 v15; // x3
  __int64 v16; // x4
  BattleSeManager_BattleSePlayer_o *v17; // x23

  if ( (byte_40F752E & 1) == 0 )
  {
    sub_B16FFC(&BattleSeManager_BattleSePlayer_TypeInfo, assetName);
    byte_40F752E = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, 0LL);
  v17 = (BattleSeManager_BattleSePlayer_o *)sub_B170CC(BattleSeManager_BattleSePlayer_TypeInfo, v13, v14, v15, v16);
  BattleSeManager_BattleSePlayer___ctor(v17, this, assetName, seName, volume, callback, 0LL);
  if ( !v17 )
    sub_B170D4();
  BattleSeManager_BattleSePlayer__Play(v17, 0LL);
  return v17;
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
  sub_B16F98(&v12->fields, manager);
  v12->fields.assetName = assetName;
  sub_B16F98(&v12->fields.assetName, assetName);
  v12->fields.seName = seName;
  sub_B16F98(&v12->fields.seName, seName);
  v12->fields.callback = callback;
  v12 = (BattleSeManager_BattleSePlayer_o *)((char *)v12 + 48);
  *(float *)&v12[-1].fields.player = volume;
  sub_B16F98(v12, callback);
}


void __fastcall BattleSeManager_BattleSePlayer__FinishCallback(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  BattleSeManager_o *manager; // x0
  System_Action_o *callback; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B170D4();
  BattleSeManager__OnFinished(manager, this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  this->fields.player = 0LL;
  sub_B16F98(&this->fields.player, 0LL);
}


void __fastcall BattleSeManager_BattleSePlayer__Play(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *assetName; // x20
  System_String_o *seName; // x21
  float volume; // s8
  System_Action_o *v11; // x22
  struct SePlayer_o *v12; // x0

  if ( (byte_40F71B4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleSeManager_BattleSePlayer_FinishCallback__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40F71B4 = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v12 = SoundManager__playVoice_24824004(assetName, seName, volume, v11, 0LL);
  this->fields.player = v12;
  sub_B16F98(&this->fields.player, v12);
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
      sub_B170D4();
    BattleSeManager__OnFinished(manager, this, 0LL);
    this->fields.player = 0LL;
    sub_B16F98(p_player, 0LL);
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
    sub_B170D4();
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0LL);
}