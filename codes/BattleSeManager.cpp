void __fastcall BattleSeManager___ctor(BattleSeManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_Dictionary_object__object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5D7EC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
    byte_4A5D7EC = 1;
  }
  this->fields.volume = 1.0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.playingList = (struct System_Collections_Generic_List_BattleSeManager_BattleSePlayer__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playingList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadInfos, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetStorageList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seToAssetTable, (int32_t)v12, v13, v14);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
}


void __fastcall BattleSeManager__DownloadSoundAsset(
        BattleSeManager_o *this,
        System_String_o *cat,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x0
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_4A5D7E8 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_BattleSeManager_LoadEndAsset__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_2596/*"Audio/Battle"*/);
    sub_1B885B0(&StringLiteral_1074/*".acb.bytes"*/);
    byte_4A5D7E8 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_1B8880C(0LL, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v8 = System_String__Concat_61718292(
         (System_String_o *)StringLiteral_2596/*"Audio/Battle"*/,
         cat,
         (System_String_o *)StringLiteral_1074/*".acb.bytes"*/,
         0LL);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(v8, v9, 1, 0LL);
}


void __fastcall BattleSeManager__Initialize(BattleSeManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D7E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D7E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EffectMaster___);
  this->fields.effectMaster = (struct EffectMaster_o *)MasterData_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectMaster, (int32_t)MasterData_object, v6, v7);
}


void __fastcall BattleSeManager__LoadEndAsset(BattleSeManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  AssetData_o *v4; // x19
  BattleSeManager_o **v5; // x20
  __int64 v6; // x8
  _QWORD *v7; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v9; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleSeManager_o *v11; // x21
  unsigned __int64 v12; // x22
  Il2CppObject *Item; // x0

  v4 = data;
  v5 = (BattleSeManager_o **)this;
  if ( (byte_4A5D7E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    this = (BattleSeManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    byte_4A5D7E9 = 1;
  }
  if ( !v4 )
    goto LABEL_21;
  this = v5[8];
  if ( !this )
    goto LABEL_21;
  data = (AssetData_o *)v4->fields.name;
  v6 = *(_QWORD *)&this->fields.m_CachedPtr;
  v7 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v6 )
    goto LABEL_21;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v6 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = v6 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v9 + 32) = data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)data, (int32_t)method, v3);
  }
  this = (BattleSeManager_o *)AssetData__GetObjectNameList(v4, 0LL);
  if ( !this )
    goto LABEL_21;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(this, data);
      this = v5[9];
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)this,
        *((Il2CppObject **)&v11->fields.volume + v12),
        (Il2CppObject *)v4->fields.name,
        (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      if ( (__int64)++v12 >= (int)m_CancellationTokenSource )
        goto LABEL_15;
    }
LABEL_21:
    sub_1B8880C(this, data);
  }
LABEL_15:
  this = v5[6];
  if ( !this )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this,
         (Il2CppObject *)v4->fields.name,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    this = v5[6];
    if ( !this )
      goto LABEL_21;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)v4->fields.name,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
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
  struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *loadInfos; // x0
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_4A5D7E7 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_BattleSeManager_LoadEndAsset__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_2596/*"Audio/Battle"*/);
    sub_1B885B0(&StringLiteral_1074/*".acb.bytes"*/);
    byte_4A5D7E7 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_1B8880C(0LL, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v8 = System_String__Concat_61718292(
         (System_String_o *)StringLiteral_2596/*"Audio/Battle"*/,
         cat,
         (System_String_o *)StringLiteral_1074/*".acb.bytes"*/,
         0LL);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_BattleSeManager_LoadEndAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *playingList; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4A5D7EA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
    sub_1B885B0(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo);
    sub_1B885B0(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__);
    sub_1B885B0(&BattleSeManager___c__DisplayClass14_0_TypeInfo);
    byte_4A5D7EA = 1;
  }
  v5 = sub_1B887FC(BattleSeManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = seName,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)seName, v8, v9),
        playingList = (System_Collections_Generic_List_object__o *)this->fields.playingList,
        v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v5,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          0LL),
        !playingList) )
  {
    sub_1B8880C(v6, v7);
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_object___Find(
                                               playingList,
                                               (System_Predicate_T__o *)v11,
                                               (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
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

  if ( (byte_4A5D7EB & 1) == 0 )
  {
    sub_1B885B0(&BattleSeManager_BattleSePlayer_TypeInfo);
    byte_4A5D7EB = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, v13);
  v14 = (BattleSeManager_BattleSePlayer_o *)sub_1B887FC(BattleSeManager_BattleSePlayer_TypeInfo);
  BattleSeManager_BattleSePlayer___ctor(v14, this, assetName, seName, volume, callback, v15);
  if ( !v14 )
    sub_1B8880C(v16, v17);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields, (int32_t)manager, v13, v14);
  v12->fields.assetName = assetName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.assetName, (int32_t)assetName, v15, v16);
  v12->fields.seName = seName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.seName, (int32_t)seName, v17, v18);
  v12->fields.callback = callback;
  v12 = (BattleSeManager_BattleSePlayer_o *)((char *)v12 + 48);
  *(float *)&v12[-1].fields.player = volume;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v12, (int32_t)callback, v19, v20);
}


void __fastcall BattleSeManager_BattleSePlayer__FinishCallback(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *callback; // x8

  if ( !this->fields.manager )
    sub_1B8880C(this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  this->fields.player = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.player, 0, v2, v3);
}


void __fastcall BattleSeManager_BattleSePlayer__Play(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  System_String_o *assetName; // x20
  System_String_o *seName; // x21
  float volume; // s8
  System_Action_o *v6; // x22
  struct SePlayer_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D7ED & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleSeManager_BattleSePlayer_FinishCallback__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5D7ED = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v7 = SoundManager__playVoice_38702940(assetName, seName, volume, v6, 0LL);
  this->fields.player = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.player, (int32_t)v7, v8, v9);
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
      sub_1B8880C(v5, v6);
    p_player->klass = 0LL;
    sub_1B88554(p_player, 0, v7, v8);
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
    sub_1B8880C(this, 0LL);
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0LL);
}