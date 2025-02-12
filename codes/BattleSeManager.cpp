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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_Dictionary_object__object__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_Dictionary_object__object__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BB6E5D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo, v4);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_1C13D24(&System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo, v8);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BattleSeManager___ctor__, v10);
    byte_4BB6E5D = 1;
  }
  this->fields.volume = 1.0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleSeManager_BattleSePlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer___ctor__);
  this->fields.playingList = (struct System_Collections_Generic_List_BattleSeManager_BattleSePlayer__o *)v11;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.playingList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler___ctor__);
  this->fields.loadInfos = (struct System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__o *)v18;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.loadInfos, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetStorageList = (struct System_Collections_Generic_List_string__o *)v25;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.assetStorageList, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v32,
    (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.seToAssetTable = (struct System_Collections_Generic_Dictionary_string__string__o *)v32;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.seToAssetTable, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_BattleSeManager___ctor__);
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

  if ( (byte_4BB6E59 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, cat);
    sub_1C13D24(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_2626/*"Audio/"*/, v10);
    sub_1C13D24(&StringLiteral_1074/*".acb.bytes"*/, v11);
    byte_4BB6E59 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_1C13F80(0LL, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_62979204(
          (System_String_o *)StringLiteral_2626/*"Audio/"*/,
          cat,
          (System_String_o *)StringLiteral_1074/*".acb.bytes"*/,
          0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BB6E57 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BB6E57 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v5);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EffectMaster___);
  this->fields.effectMaster = (struct EffectMaster_o *)MasterData_object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.effectMaster,
    (int64_t)MasterData_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall BattleSeManager__LoadEndAsset(BattleSeManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetData_o *v8; // x19
  BattleSeManager_o **v9; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v16; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleSeManager_o *v18; // x21
  unsigned __int64 v19; // x22
  Il2CppObject *Item; // x0

  v8 = data;
  v9 = (BattleSeManager_o **)this;
  if ( (byte_4BB6E5A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__,
      data);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v11);
    this = (BattleSeManager_o *)sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, v12);
    byte_4BB6E5A = 1;
  }
  if ( !v8 )
    goto LABEL_21;
  this = v9[8];
  if ( !this )
    goto LABEL_21;
  data = (AssetData_o *)v8->fields.name;
  v13 = *(_QWORD *)&this->fields.m_CachedPtr;
  v14 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v13 )
    goto LABEL_21;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v13 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = v13 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v16 + 32) = data;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  }
  this = (BattleSeManager_o *)AssetData__GetObjectNameList(v8, 0LL);
  if ( !this )
    goto LABEL_21;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v18 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)m_CancellationTokenSource )
        sub_1C13F88(this, data);
      this = v9[9];
      if ( !this )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)this,
        *((Il2CppObject **)&v18->fields.volume + v19),
        (Il2CppObject *)v8->fields.name,
        (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      LODWORD(m_CancellationTokenSource) = v18->fields.m_CancellationTokenSource;
      if ( (__int64)++v19 >= (int)m_CancellationTokenSource )
        goto LABEL_15;
    }
LABEL_21:
    sub_1C13F80(this, data);
  }
LABEL_15:
  this = v9[6];
  if ( !this )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this,
         (Il2CppObject *)v8->fields.name,
         (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__ContainsKey__) )
  {
    this = v9[6];
    if ( !this )
      goto LABEL_21;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)v8->fields.name,
             (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__get_Item__);
    if ( Item )
      ((void (__fastcall *)(Il2CppClass *, AssetData_o *, void *))Item[1].monitor)(Item[4].klass, v8, Item[2].monitor);
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

  if ( (byte_4BB6E58 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, cat);
    sub_1C13D24(&Method_BattleSeManager_LoadEndAsset__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__, v8);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_2626/*"Audio/"*/, v10);
    sub_1C13D24(&StringLiteral_1074/*".acb.bytes"*/, v11);
    byte_4BB6E58 = 1;
  }
  if ( !this->fields.effectMaster )
    BattleSeManager__Initialize(this, (const MethodInfo *)cat);
  loadInfos = this->fields.loadInfos;
  if ( !loadInfos )
    sub_1C13F80(0LL, cat);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)loadInfos,
    (Il2CppObject *)cat,
    (Il2CppObject *)callbackFunc,
    (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__AssetLoader_LoadEndDataHandler__set_Item__);
  v13 = System_String__Concat_62979204(
          (System_String_o *)StringLiteral_2626/*"Audio/"*/,
          cat,
          (System_String_o *)StringLiteral_1074/*".acb.bytes"*/,
          0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *playingList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4BB6E5B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__, seName);
    sub_1C13D24(&System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo, v5);
    sub_1C13D24(&Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__, v6);
    sub_1C13D24(&BattleSeManager___c__DisplayClass14_0_TypeInfo, v7);
    byte_4BB6E5B = 1;
  }
  v8 = sub_1C13F70(BattleSeManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = seName,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)seName, v11, v12, v13, v14, v15, v16),
        playingList = (System_Collections_Generic_List_object__o *)this->fields.playingList,
        v18 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_BattleSeManager_BattleSePlayer__TypeInfo),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v8,
          Method_BattleSeManager___c__DisplayClass14_0__SearchPlayingSe_b__0__,
          0LL),
        !playingList) )
  {
    sub_1C13F80(v9, v10);
  }
  return (BattleSeManager_BattleSePlayer_o *)System_Collections_Generic_List_object___Find(
                                               playingList,
                                               (System_Predicate_T__o *)v18,
                                               (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_BattleSeManager_BattleSePlayer__Find__);
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

  if ( (byte_4BB6E5C & 1) == 0 )
  {
    sub_1C13D24(&BattleSeManager_BattleSePlayer_TypeInfo, assetName);
    byte_4BB6E5C = 1;
  }
  v12 = BattleSeManager__SearchPlayingSe(this, seName, (const MethodInfo *)seName);
  if ( v12 )
    BattleSeManager_BattleSePlayer__Stop(v12, v13);
  v14 = (BattleSeManager_BattleSePlayer_o *)sub_1C13F70(BattleSeManager_BattleSePlayer_TypeInfo);
  BattleSeManager_BattleSePlayer___ctor(v14, this, assetName, seName, volume, callback, v15);
  if ( !v14 )
    sub_1C13F80(v16, v17);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.manager = manager;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v12->fields, (int64_t)manager, v13, v14, v15, v16, v17, v18);
  v12->fields.assetName = assetName;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v12->fields.assetName, (int64_t)assetName, v19, v20, v21, v22, v23, v24);
  v12->fields.seName = seName;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v12->fields.seName, (int64_t)seName, v25, v26, v27, v28, v29, v30);
  v12->fields.callback = callback;
  v12 = (BattleSeManager_BattleSePlayer_o *)((char *)v12 + 48);
  *(float *)&v12[-1].fields.player = volume;
  sub_1C13CC8((PartyOrganizationUtility_o *)v12, (int64_t)callback, v31, v32, v33, v34, v35, v36);
}


void __fastcall BattleSeManager_BattleSePlayer__FinishCallback(
        BattleSeManager_BattleSePlayer_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *callback; // x8

  if ( !this->fields.manager )
    sub_1C13F80(this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  this->fields.player = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.player, 0LL, v2, v3, v4, v5, v6, v7);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BB6E5E & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_BattleSeManager_BattleSePlayer_FinishCallback__, v3);
    sub_1C13D24(&SoundManager_TypeInfo, v4);
    byte_4BB6E5E = 1;
  }
  assetName = this->fields.assetName;
  seName = this->fields.seName;
  volume = this->fields.volume;
  v8 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleSeManager_BattleSePlayer_FinishCallback__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v9 = SoundManager__playVoice_39857168(assetName, seName, volume, v8, 0, 0LL);
  this->fields.player = v9;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.player, (int64_t)v9, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleSeManager_BattleSePlayer__Stop(BattleSeManager_BattleSePlayer_o *this, const MethodInfo *method)
{
  SePlayer_o *player; // x0
  PartyOrganizationUtility_o *p_player; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  p_player = (PartyOrganizationUtility_o *)&this->fields.player;
  player = this->fields.player;
  if ( player )
  {
    SePlayer__StopSe(player, 0.0, 0LL);
    if ( !this->fields.manager )
      sub_1C13F80(v5, v6);
    p_player->klass = 0LL;
    sub_1C13CC8(p_player, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_1C13F80(this, 0LL);
  return System_String__op_Equality(x->fields.seName, this->fields.seName, 0LL);
}