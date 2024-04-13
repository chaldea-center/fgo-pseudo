void __fastcall BattleSeManager___ctor(BattleSeManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v30; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v32; // x20

  if ( (byte_42E579A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__, v26, v27, v28);
    byte_42E579A = 1;
  }
  LODWORD(this->fields.playingList) = 1065353216;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v29;
  sub_B5D560(&this->fields.loadInfos);
  v30 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v30,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.effectMaster = (struct EffectMaster_o *)v30;
  sub_B5D560(&this->fields.effectMaster);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v31;
  sub_B5D560(&this->fields.seToAssetTable);
  v32 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v32,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this[1].klass = (BattleSeManager_c *)v32;
  sub_B5D560(&this[1]);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
}


void __fastcall BattleSeManager__DownloadSoundAsset(
        BattleSeManager_o *this,
        System_String_o *cat,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  struct EffectMaster_o *effectMaster; // x0
  System_String_o *v23; // x20
  AssetLoader_LoadEndDataHandler_o *v24; // x21

  if ( (byte_42E5796 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)cat, (_DWORD)callbackFunc, method);
    sub_B5D5C4(&Method_BattleSeManager_LoadEndAsset__, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_2215/*"Audio/Battle"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_837/*".acb.bytes"*/, v19, v20, v21);
    byte_42E5796 = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B5D69C(0LL, cat);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v23 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_2215/*"Audio/Battle"*/,
          cat,
          (System_String_o *)StringLiteral_837/*".acb.bytes"*/,
          0LL);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v24, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v23, v24, 1, 0LL);
}


void __fastcall BattleSeManager__Initialize(BattleSeManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E5794 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EffectMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E5794 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EffectMaster___);
  sub_B5D560(&this->fields.assetStorageList);
}


void __fastcall BattleSeManager__LoadEndAsset(BattleSeManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v3; // x3
  BattleSeManager_o **v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_BattleSeManager_BattleSePlayer__o *playingList; // x8
  BattleSeManager_o *v16; // x21
  unsigned __int64 v17; // x22
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v19; // x0

  v5 = (BattleSeManager_o **)this;
  if ( (byte_42E5797 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v9, v10, v11);
    this = (BattleSeManager_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v12, v13, v14);
    byte_42E5797 = 1;
  }
  if ( !data )
    goto LABEL_17;
  this = v5[7];
  if ( !this )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data->fields.name,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  this = (BattleSeManager_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_17;
  playingList = this->fields.playingList;
  v16 = this;
  if ( (int)playingList >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)playingList )
      {
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
      }
      this = v5[8];
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
        *((System_Xml_XmlQualifiedName_o **)&v16->fields.loadInfos + v17),
        (System_Xml_Schema_XmlSchemaObject_o *)data->fields.name,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(playingList) = v16->fields.playingList;
      if ( (__int64)++v17 >= (int)playingList )
        goto LABEL_11;
    }
LABEL_17:
    sub_B5D69C(this, data);
  }
LABEL_11:
  this = v5[5];
  if ( !this )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
         (System_Xml_XmlQualifiedName_o *)data->fields.name,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    this = v5[5];
    if ( !this )
      goto LABEL_17;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
             (System_Type_o *)data->fields.name,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  struct EffectMaster_o *effectMaster; // x0
  System_String_o *v23; // x20
  AssetLoader_LoadEndDataHandler_o *v24; // x21

  if ( (byte_42E5795 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)cat, (_DWORD)callbackFunc, method);
    sub_B5D5C4(&Method_BattleSeManager_LoadEndAsset__, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_2215/*"Audio/Battle"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_837/*".acb.bytes"*/, v19, v20, v21);
    byte_42E5795 = 1;
  }
  if ( !this->fields.assetStorageList )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  effectMaster = this->fields.effectMaster;
  if ( !effectMaster )
    sub_B5D69C(0LL, cat);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)effectMaster,
    (System_Xml_XmlQualifiedName_o *)cat,
    (System_Xml_Schema_XmlSchemaObject_o *)callbackFunc,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v23 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_2215/*"Audio/Battle"*/,
          cat,
          (System_String_o *)StringLiteral_837/*".acb.bytes"*/,
          0LL);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v24, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v23, v24, 1, 0LL);
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
  BattleSeManager___c__DisplayClass14_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E5798 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__,
      (_DWORD)seName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleSeManager___c__DisplayClass14_0_TypeInfo, v15, v16, v17);
    byte_42E5798 = 1;
  }
  v18 = (BattleSeManager___c__DisplayClass14_0_o *)sub_B5D694(BattleSeManager___c__DisplayClass14_0_TypeInfo);
  BattleSeManager___c__DisplayClass14_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.seName = seName,
        sub_B5D560(&v18->fields),
        loadInfos = this->fields.loadInfos,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleSeManager_BattleSePlayer___ctor__),
        !loadInfos) )
  {
    sub_B5D69C(v19, v20);
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)loadInfos,
                                               (System_Predicate_T__o *)v22,
                                               (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
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

  if ( (byte_42E5799 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSeManager_BattleSePlayer_TypeInfo, (_DWORD)assetName, (_DWORD)seName, callback);
    byte_42E5799 = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, 0LL);
  v13 = (BattleSeManager_BattleSePlayer_o *)sub_B5D694(BattleSeManager_BattleSePlayer_TypeInfo);
  BattleSeManager_BattleSePlayer___ctor(v13, this, assetName, seName, volume, callback, 0LL);
  if ( !v13 )
    sub_B5D69C(v14, v15);
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
  sub_B5D560(&v12->fields);
  v12->fields.assetName = assetName;
  sub_B5D560(&v12->fields.assetName);
  v12->fields.seName = seName;
  sub_B5D560(&v12->fields.seName);
  v12->fields.callback = callback;
  v12 = (BattleSeManager_BattleSePlayer_o *)((char *)v12 + 48);
  *(float *)&v12[-1].fields.player = volume;
  sub_B5D560(v12);
}


void __fastcall BattleSeManager_BattleSePlayer__FinishCallback(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  BattleSeManager_o *manager; // x0
  System_Action_o *callback; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B5D69C(0LL, method);
  BattleSeManager__OnFinished(manager, this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  this->fields.player = 0LL;
  sub_B5D560(&this->fields.player);
}


void __fastcall BattleSeManager_BattleSePlayer__Play(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *assetName; // x20
  System_String_o *seName; // x21
  float volume; // s8
  System_Action_o *v14; // x22

  if ( (byte_42E60D6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleSeManager_BattleSePlayer_FinishCallback__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E60D6 = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  this->fields.player = SoundManager__playVoice_23391328(assetName, seName, volume, v14, 0LL);
  sub_B5D560(&this->fields.player);
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
      sub_B5D69C(0LL, v5);
    BattleSeManager__OnFinished(manager, this, 0LL);
    this->fields.player = 0LL;
    sub_B5D560(p_player);
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
    sub_B5D69C(this, 0LL);
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0LL);
}