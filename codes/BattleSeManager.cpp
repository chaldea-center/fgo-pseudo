void BattleSeManager___ctor(BattleSeManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleSeManager_BattleSePlayer__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_Dictionary_object__object__o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_59735B5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
    byte_59735B5 = 1;
  }
  v3 = System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo;
  this->fields.volume = 1.0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.playingList = (struct System_Collections_Generic_List_BattleSeManager_BattleSePlayer__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playingList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadInfos, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetStorageList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v25,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seToAssetTable,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
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
  __int64 v10; // x1

  if ( (byte_59735B1 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BattleSeManager_LoadEndAsset__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&StringLiteral_2587/*"Audio/Battle"*/);
    sub_2213A60(&StringLiteral_1089/*".acb.bytes"*/);
    byte_59735B1 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_2213CDC(0, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v8 = System_String__Concat_75694928(
         (System_String_o *)StringLiteral_2587/*"Audio/Battle"*/,
         cat,
         (System_String_o *)StringLiteral_1089/*".acb.bytes"*/,
         0);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
  AssetManager__downloadAssetStorage(v8, v9, 1, 0);
}


void BattleSeManager__Initialize(BattleSeManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59735AF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59735AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EffectMaster___);
  this->fields.effectMaster = (struct EffectMaster_o *)MasterData_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectMaster,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  if ( (byte_59735B2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    this = (BattleSeManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    byte_59735B2 = 1;
  }
  if ( !v8 )
    goto LABEL_21;
  this = v9[8];
  if ( !this )
    goto LABEL_21;
  m_CachedPtr = this->fields.m_CachedPtr;
  data = (AssetData_o *)v8->fields.name;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v13 + 32) = data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v13 + 32),
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
        sub_2213CE4(this);
      this = v9[9];
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)this,
        *((Il2CppObject **)&v15->fields.volume + v16),
        (Il2CppObject *)v8->fields.name,
        (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
      if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
        goto LABEL_15;
    }
LABEL_21:
    sub_2213CDC(this, data);
  }
LABEL_15:
  this = v9[6];
  if ( !this )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this,
         (Il2CppObject *)v8->fields.name,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    this = v9[6];
    if ( !this )
      goto LABEL_21;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)v8->fields.name,
             (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
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
  __int64 v10; // x1

  if ( (byte_59735B0 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BattleSeManager_LoadEndAsset__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&StringLiteral_2587/*"Audio/Battle"*/);
    sub_2213A60(&StringLiteral_1089/*".acb.bytes"*/);
    byte_59735B0 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_2213CDC(0, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v8 = System_String__Concat_75694928(
         (System_String_o *)StringLiteral_2587/*"Audio/Battle"*/,
         cat,
         (System_String_o *)StringLiteral_1089/*".acb.bytes"*/,
         0);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *playingList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_59735B3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
    sub_2213A60(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo);
    sub_2213A60(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__);
    sub_2213A60(&BattleSeManager___c__DisplayClass14_0_TypeInfo);
    byte_59735B3 = 1;
  }
  v5 = sub_2213CCC(BattleSeManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = seName,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)seName, v8, v9, v10, v11, v12, v13),
        playingList = (System_Collections_Generic_List_object__o *)this->fields.playingList,
        v15 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          0),
        !playingList) )
  {
    sub_2213CDC(v6, v7);
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_object___Find(
                                               playingList,
                                               (System_Predicate_T__o *)v15,
                                               (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
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

  if ( (byte_59735B4 & 1) == 0 )
  {
    sub_2213A60(&BattleSeManager_BattleSePlayer_TypeInfo);
    byte_59735B4 = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, v13);
  v14 = (BattleSeManager_BattleSePlayer_o *)sub_2213CCC(BattleSeManager_BattleSePlayer_TypeInfo);
  BattleSeManager_BattleSePlayer___ctor(v14, this, assetName, seName, volume, callback, v15);
  if ( !v14 )
    sub_2213CDC(v16, v17);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.manager = manager;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)manager, v13, v14, v15, v16, v17, v18);
  this->fields.assetName = assetName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetName,
    (int32_t)assetName,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.seName = seName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.seName, (int32_t)seName, v25, v26, v27, v28, v29, v30);
  this->fields.callback = callback;
  this->fields.volume = volume;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callback,
    (int32_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void BattleSeManager_BattleSePlayer__FinishCallback(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *callback; // x8

  if ( !this->fields.manager )
    sub_2213CDC(this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  this->fields.player = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.player, 0, v2, v3, v4, v5, v6, v7);
}


void BattleSeManager_BattleSePlayer__Play(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  System_String_o *assetName; // x20
  System_String_o *seName; // x21
  float volume; // s8
  System_Action_o *v6; // x22
  __int64 v7; // x1
  struct SePlayer_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_59735B6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleSeManager_BattleSePlayer_FinishCallback__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_59735B6 = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
  v8 = SoundManager__playVoice_48511684(assetName, seName, volume, v6, 0, 0);
  this->fields.player = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.player, (int32_t)v8, v9, v10, v11, v12, v13, v14);
}


void BattleSeManager_BattleSePlayer__Stop(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  SePlayer_o *player; // x0
  MissionNaviTransitionBoardItem_o *p_player; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  p_player = (MissionNaviTransitionBoardItem_o *)&this->fields.player;
  player = this->fields.player;
  if ( player )
  {
    SePlayer__StopSe(player, 0.0, 0);
    if ( !this->fields.manager )
      sub_2213CDC(v5, v6);
    p_player->klass = 0;
    sub_2213A04(p_player, 0, v7, v8, v9, v10, v11, v12);
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
    sub_2213CDC(this, 0);
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0);
}