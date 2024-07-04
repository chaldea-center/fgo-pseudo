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
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_Dictionary_object__object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_Dictionary_object__object__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_48E4E68 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__, v3);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo, v4);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo, v8);
    sub_1B00CCC(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__, v10);
    byte_48E4E68 = 1;
  }
  this->fields.volume = 1.0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.playingList = (struct System_Collections_Generic_List_BattleSeManager_BattleSePlayer__o *)v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.playingList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v14,
    (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v14;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.loadInfos, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.assetStorageList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v20,
    (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v20;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.seToAssetTable, (int32_t)v20, v21, v22);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_35FC008 *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
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
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x0
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_48E4E64 & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, cat);
    sub_1B00CCC(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_2587/*"Audio/Battle"*/, v10);
    sub_1B00CCC(&StringLiteral_1071/*".acb.bytes"*/, v11);
    byte_48E4E64 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_1B00F28(0LL, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_308DA34 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_60337008(
          (System_String_o *)StringLiteral_2587/*"Audio/Battle"*/,
          cat,
          (System_String_o *)StringLiteral_1071/*".acb.bytes"*/,
          0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v13, v14, 1, 0LL);
}


void __fastcall BattleSeManager__Initialize(BattleSeManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_48E4E62 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_48E4E62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EffectMaster___);
  this->fields.effectMaster = (struct EffectMaster_o *)MasterData_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.effectMaster, (int32_t)MasterData_object, v7, v8);
}


void __fastcall BattleSeManager__LoadEndAsset(BattleSeManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  AssetData_o *v4; // x19
  BattleSeManager_o **v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v12; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleSeManager_o *v14; // x21
  unsigned __int64 v15; // x22
  Il2CppObject *Item; // x0

  v4 = data;
  v5 = (BattleSeManager_o **)this;
  if ( (byte_48E4E65 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__,
      data);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v7);
    this = (BattleSeManager_o *)sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, v8);
    byte_48E4E65 = 1;
  }
  if ( !v4 )
    goto LABEL_21;
  this = v5[8];
  if ( !this )
    goto LABEL_21;
  data = (AssetData_o *)v4->fields.name;
  v9 = *(_QWORD *)&this->fields.m_CachedPtr;
  v10 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v9 )
    goto LABEL_21;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v9 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = v9 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v12 + 32) = data;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)data, (int32_t)method, v3);
  }
  this = (BattleSeManager_o *)AssetData__GetObjectNameList(v4, 0LL);
  if ( !this )
    goto LABEL_21;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v14 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)m_CancellationTokenSource )
        sub_1B00F30(this, data);
      this = v5[9];
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)this,
        *((Il2CppObject **)&v14->fields.volume + v15),
        (Il2CppObject *)v4->fields.name,
        (const MethodInfo_308DA34 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(m_CancellationTokenSource) = v14->fields.m_CancellationTokenSource;
      if ( (__int64)++v15 >= (int)m_CancellationTokenSource )
        goto LABEL_15;
    }
LABEL_21:
    sub_1B00F28(this, data);
  }
LABEL_15:
  this = v5[6];
  if ( !this )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this,
         (Il2CppObject *)v4->fields.name,
         (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    this = v5[6];
    if ( !this )
      goto LABEL_21;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)v4->fields.name,
             (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
    if ( Item )
      ((void (__fastcall *)(Il2CppClass *, AssetData_o *, void *))Item[1].monitor)(Item[4].klass, v4, Item[2].monitor);
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
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x0
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_48E4E63 & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, cat);
    sub_1B00CCC(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_2587/*"Audio/Battle"*/, v10);
    sub_1B00CCC(&StringLiteral_1071/*".acb.bytes"*/, v11);
    byte_48E4E63 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_1B00F28(0LL, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_308DA34 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_60337008(
          (System_String_o *)StringLiteral_2587/*"Audio/Battle"*/,
          cat,
          (System_String_o *)StringLiteral_1071/*".acb.bytes"*/,
          0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *playingList; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_48E4E66 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__, seName);
    sub_1B00CCC(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo, v5);
    sub_1B00CCC(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__, v6);
    sub_1B00CCC(&BattleSeManager___c__DisplayClass14_0_TypeInfo, v7);
    byte_48E4E66 = 1;
  }
  v8 = sub_1B00F18(BattleSeManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = seName,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)seName, v11, v12),
        playingList = (System_Collections_Generic_List_object__o *)this->fields.playingList,
        v14 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v8,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          0LL),
        !playingList) )
  {
    sub_1B00F28(v9, v10);
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_object___Find(
                                               playingList,
                                               (System_Predicate_T__o *)v14,
                                               (const MethodInfo_33C2038 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
}


void __fastcall BattleSeManager__SetUp(BattleSeManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.effectMaster )
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
  const MethodInfo *v13; // x1
  BattleSeManager_BattleSePlayer_o *v14; // x23
  const MethodInfo *v15; // x5
  __int64 v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_48E4E67 & 1) == 0 )
  {
    sub_1B00CCC(&BattleSeManager_BattleSePlayer_TypeInfo, assetName);
    byte_48E4E67 = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, v13);
  v14 = (BattleSeManager_BattleSePlayer_o *)sub_1B00F18(BattleSeManager_BattleSePlayer_TypeInfo);
  BattleSeManager_BattleSePlayer___ctor(v14, this, assetName, seName, volume, callback, v15);
  if ( !v14 )
    sub_1B00F28(v16, v17);
  BattleSeManager_BattleSePlayer__Play(v14, v17);
  return v14;
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.manager = manager;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v12->fields, (int32_t)manager, v13, v14);
  v12->fields.assetName = assetName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v12->fields.assetName, (int32_t)assetName, v15, v16);
  v12->fields.seName = seName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v12->fields.seName, (int32_t)seName, v17, v18);
  v12->fields.callback = callback;
  v12 = (BattleSeManager_BattleSePlayer_o *)((char *)v12 + 48);
  *(float *)&v12[-1].fields.player = volume;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v12, (int32_t)callback, v19, v20);
}


void __fastcall BattleSeManager_BattleSePlayer__FinishCallback(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *callback; // x8

  if ( !this->fields.manager )
    sub_1B00F28(this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  this->fields.player = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.player, 0, v2, v3);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_48E4E69 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_BattleSeManager_BattleSePlayer_FinishCallback__, v3);
    sub_1B00CCC(&SoundManager_TypeInfo, v4);
    byte_48E4E69 = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v8 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v9 = SoundManager__playVoice_37481500(assetName, seName, volume, v8, 0LL);
  this->fields.player = v9;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.player, (int32_t)v9, v10, v11);
}


void __fastcall BattleSeManager_BattleSePlayer__Stop(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  SePlayer_o *player; // x0
  ServantStatusBattleListViewItem_o *p_player; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  p_player = (ServantStatusBattleListViewItem_o *)&this->fields.player;
  player = this->fields.player;
  if ( player )
  {
    SePlayer__StopSe(player, 0.0, 0LL);
    if ( !this->fields.manager )
      sub_1B00F28(v5, v6);
    p_player->klass = 0LL;
    sub_1B00C70(p_player, 0, v7, v8);
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
    sub_1B00F28(this, 0LL);
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0LL);
}