void BattleSeManager___ctor(BattleSeManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_object__object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CCA018 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
    byte_4CCA018 = 1;
  }
  this->fields.volume = 1.0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.playingList = (struct System_Collections_Generic_List_BattleSeManager_BattleSePlayer__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.playingList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.loadInfos, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.assetStorageList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v24,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.seToAssetTable, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A5F640 *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
}


void BattleSeManager__DownloadSoundAsset(
        BattleSeManager_o *this,
        System_String_o *cat,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x0
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_4CCA014 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_BattleSeManager_LoadEndAsset__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&StringLiteral_2470/*"Audio/Battle"*/);
    sub_1C713B0(&StringLiteral_1006/*".acb.bytes"*/);
    byte_4CCA014 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_1C71608(0, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v8 = System_String__Concat_64069988(
         (System_String_o *)StringLiteral_2470/*"Audio/Battle"*/,
         cat,
         (System_String_o *)StringLiteral_1006/*".acb.bytes"*/,
         0);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v8, v9, 1, 0);
}


void BattleSeManager__Initialize(BattleSeManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCA012 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA012 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EffectMaster___);
  this->fields.effectMaster = (struct EffectMaster_o *)MasterData_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.effectMaster,
    (int32_t)MasterData_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void BattleSeManager__LoadEndAsset(BattleSeManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *v8; // x19
  BattleSeManager_o **v9; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v11; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v13; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleSeManager_o *v15; // x21
  unsigned __int64 v16; // x22
  Il2CppObject *Item; // x0

  v8 = data;
  v9 = (BattleSeManager_o **)this;
  if ( (byte_4CCA015 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    this = (BattleSeManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    byte_4CCA015 = 1;
  }
  if ( !v8 )
    goto LABEL_21;
  this = v9[8];
  if ( !this )
    goto LABEL_21;
  data = (AssetData_o *)v8->fields.name;
  m_CachedPtr = this->fields.m_CachedPtr;
  v11 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_21;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v13 + 32) = data;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  }
  this = (BattleSeManager_o *)AssetData__GetObjectNameList(v8, 0);
  if ( !this )
    goto LABEL_21;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v15 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)m_CancellationTokenSource )
        sub_1C71610(this);
      this = v9[9];
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)this,
        *((Il2CppObject **)&v15->fields.volume + v16),
        (Il2CppObject *)v8->fields.name,
        (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
      if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
        goto LABEL_15;
    }
LABEL_21:
    sub_1C71608(this, data);
  }
LABEL_15:
  this = v9[6];
  if ( !this )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this,
         (Il2CppObject *)v8->fields.name,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    this = v9[6];
    if ( !this )
      goto LABEL_21;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)v8->fields.name,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
    if ( Item )
      ((void (__fastcall *)(Il2CppClass *, AssetData_o *, void *))Item[1].monitor)(Item[4].klass, v8, Item[2].monitor);
  }
}


void BattleSeManager__LoadSoundAsset(
        BattleSeManager_o *this,
        System_String_o *cat,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x0
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_4CCA013 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_BattleSeManager_LoadEndAsset__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&StringLiteral_2470/*"Audio/Battle"*/);
    sub_1C713B0(&StringLiteral_1006/*".acb.bytes"*/);
    byte_4CCA013 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_1C71608(0, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v8 = System_String__Concat_64069988(
         (System_String_o *)StringLiteral_2470/*"Audio/Battle"*/,
         cat,
         (System_String_o *)StringLiteral_1006/*".acb.bytes"*/,
         0);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v8, v9, 1, 0);
}


void BattleSeManager__OnFinished(
        BattleSeManager_o *this,
        BattleSeManager_BattleSePlayer_o *player,
        const MethodInfo *method)
{
  ;
}


void BattleSeManager__PlaySeByEffect(
        BattleSeManager_o *this,
        System_String_o *effectName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ;
}


BattleSeManager_BattleSePlayer_o *BattleSeManager__SearchPlayingSe(
        BattleSeManager_o *this,
        System_String_o *seName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *playingList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4CCA016 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
    sub_1C713B0(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo);
    sub_1C713B0(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__);
    sub_1C713B0(&BattleSeManager___c__DisplayClass14_0_TypeInfo);
    byte_4CCA016 = 1;
  }
  v5 = sub_1C715FC(BattleSeManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = seName,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)seName, v8, v9, v10, v11, v12, v13),
        playingList = (System_Collections_Generic_List_object__o *)this->fields.playingList,
        v15 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          0),
        !playingList) )
  {
    sub_1C71608(v6, v7);
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_object___Find(
                                               playingList,
                                               (System_Predicate_T__o *)v15,
                                               (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
}


void BattleSeManager__SetUp(BattleSeManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, method);
}


void BattleSeManager__Start(BattleSeManager_o *this, const MethodInfo *method)
{
  ;
}


BattleSeManager_BattleSePlayer_o *BattleSeManager__playBattleSe(
        BattleSeManager_o *this,
        System_String_o *assetName,
        System_String_o *seName,
        float volume,
        System_Action_o *callback,
        System_Action_BattleSeManager_BattleSePlayer__o *systemCallback,
        const MethodInfo *method)
{
  BattleSeManager_BattleSePlayer_o *v12; // x0
  const MethodInfo *v13; // x1
  BattleSeManager_BattleSePlayer_o *v14; // x23
  const MethodInfo *v15; // x5
  __int64 v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4CCA017 & 1) == 0 )
  {
    sub_1C713B0(&BattleSeManager_BattleSePlayer_TypeInfo);
    byte_4CCA017 = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, v13);
  v14 = (BattleSeManager_BattleSePlayer_o *)sub_1C715FC(BattleSeManager_BattleSePlayer_TypeInfo);
  BattleSeManager_BattleSePlayer___ctor(v14, this, assetName, seName, volume, callback, v15);
  if ( !v14 )
    sub_1C71608(v16, v17);
  BattleSeManager_BattleSePlayer__Play(v14, v17);
  return v14;
}


void BattleSeManager__playSeCallback(
        BattleSeManager_o *this,
        BattleSeManager_BattleSePlayer_o *player,
        const MethodInfo *method)
{
  ;
}


void BattleSeManager_BattleSePlayer___ctor(
        BattleSeManager_BattleSePlayer_o *this,
        BattleSeManager_o *manager,
        System_String_o *assetName,
        System_String_o *seName,
        float volume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleSeManager_BattleSePlayer_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields.manager = manager;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->fields, (int32_t)manager, v13, v14, v15, v16, v17, v18);
  v12->fields.assetName = assetName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->fields.assetName, (int32_t)assetName, v19, v20, v21, v22, v23, v24);
  v12->fields.seName = seName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->fields.seName, (int32_t)seName, v25, v26, v27, v28, v29, v30);
  v12->fields.callback = callback;
  v12 = (BattleSeManager_BattleSePlayer_o *)((char *)v12 + 48);
  *(float *)&v12[-1].fields.player = volume;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v12, (int32_t)callback, v31, v32, v33, v34, v35, v36);
}


void BattleSeManager_BattleSePlayer__FinishCallback(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *callback; // x8

  if ( !this->fields.manager )
    sub_1C71608(this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  this->fields.player = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.player, 0, v2, v3, v4, v5, v6, v7);
}


void BattleSeManager_BattleSePlayer__Play(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  System_String_o *assetName; // x20
  System_String_o *seName; // x21
  float volume; // s8
  System_Action_o *v6; // x22
  struct SePlayer_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCA019 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BattleSeManager_BattleSePlayer_FinishCallback__);
    sub_1C713B0(&SoundManager_TypeInfo);
    byte_4CCA019 = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v7 = SoundManager__playVoice_41795520(assetName, seName, volume, v6, 0, 0);
  this->fields.player = v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.player, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


void BattleSeManager_BattleSePlayer__Stop(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  SePlayer_o *player; // x0
  GrandQuestFolderBoardItem_o *p_player; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  p_player = (GrandQuestFolderBoardItem_o *)&this->fields.player;
  player = this->fields.player;
  if ( player )
  {
    SePlayer__StopSe(player, 0.0, 0);
    if ( !this->fields.manager )
      sub_1C71608(v5, v6);
    p_player->klass = 0;
    sub_1C71354(p_player, 0, v7, v8, v9, v10, v11, v12);
  }
}


System_String_o *BattleSeManager_BattleSePlayer__get_SeName(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  return this->fields.seName;
}


void BattleSeManager_LocalAssetInfo___ctor(BattleSeManager_LocalAssetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSeManager___c__DisplayClass14_0___ctor(
        BattleSeManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSeManager___c__DisplayClass14_0___SearchPlayingSe_b__0(
        BattleSeManager___c__DisplayClass14_0_o *this,
        BattleSeManager_BattleSePlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0);
}