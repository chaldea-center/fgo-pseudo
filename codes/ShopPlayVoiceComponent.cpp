void __fastcall ShopPlayVoiceComponent___ctor(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall ShopPlayVoiceComponent__CheckVoiceFlag(
        ShopPlayVoiceComponent_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  return !this->fields.isPlayingVoice && (this->fields.voicePlayOnce & flag) == 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopPlayVoiceComponent__EndLoadVoice(
        ShopPlayVoiceComponent_o *this,
        int32_t state,
        bool isOverridePlayVoice,
        int32_t playVoiceState,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_String_o **p_voiceData; // x23
  System_String_o *voiceData; // x24
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_String_o *requestVoiceData; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  ShopPlayVoiceComponent_o *v29; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  System_String_o *BackVoiceMasterKey; // x21
  const MethodInfo *v33; // x1
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v35; // x3
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v37; // x2

  if ( (byte_4B12774 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, *(_QWORD *)&state, isOverridePlayVoice);
    sub_1BCA7E0(&StringLiteral_12248/*"SHOP_SCENE_VOICE_WELCOME"*/, v12, v13);
    byte_4B12774 = 1;
  }
  p_voiceData = &this->fields.voiceData;
  voiceData = this->fields.voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&state);
    SoundManager__releaseAudioAssetStorage(voiceData, 0LL);
    *p_voiceData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceData, 0LL, v16, v17, v18, v19, v20, v21);
  }
  requestVoiceData = this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = requestVoiceData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.voiceData,
      (int64_t)requestVoiceData,
      isOverridePlayVoice,
      playVoiceState,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.requestVoiceData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.requestVoiceData, 0LL, v23, v24, v25, v26, v27, v28);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v30);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v33);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v35);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v29, (System_String_o *)StringLiteral_12248/*"SHOP_SCENE_VOICE_WELCOME"*/, v31);
      ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v37);
    }
  }
}


System_String_o *__fastcall ShopPlayVoiceComponent__GetVoiceFromMaster(
        ShopPlayVoiceComponent_o *this,
        System_String_o *masterKey,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B12773 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantStrMaster___, masterKey, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B12773 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return ConstantStrMaster__GetRandomVoice((ConstantStrMaster_o *)Instance, masterKey, 0LL);
}


void __fastcall ShopPlayVoiceComponent__InitPlayVoice(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  this->fields.voicePlayOnce = 0;
  this->fields.isPlayingVoice = 0;
}


void __fastcall ShopPlayVoiceComponent__InvokedPlayVoiceList(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopPlayVoiceComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantVoiceData_array *voicePlayingList; // x8
  __int64 voicePlayingcnt; // x9
  int32_t m_CancellationTokenSource_high; // w20
  float FadeTime; // s0
  __int64 v12; // x2
  __int64 v13; // x3
  struct ServantVoiceData_array *v14; // x8
  __int64 v15; // x9
  ServantVoiceData_o *v16; // x8
  System_String_o *voiceData; // x20
  SoundManager_c *v18; // x0
  System_String_o *id; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v21; // x22
  SePlayer_o *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  v3 = this;
  if ( (byte_4B12771 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ShopPlayVoiceComponent_PlayVoiceList__, v4, v5);
    this = (ShopPlayVoiceComponent_o *)sub_1BCA7E0(&SoundManager_TypeInfo, v6, v7);
    byte_4B12771 = 1;
  }
  voicePlayingList = v3->fields.voicePlayingList;
  if ( !voicePlayingList )
    goto LABEL_13;
  voicePlayingcnt = v3->fields.voicePlayingcnt;
  if ( (unsigned int)voicePlayingcnt >= voicePlayingList->max_length )
    goto LABEL_14;
  this = (ShopPlayVoiceComponent_o *)voicePlayingList->m_Items[voicePlayingcnt];
  if ( !this
    || (m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource),
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL),
        (this = (ShopPlayVoiceComponent_o *)v3->fields.standFigureBack) == 0LL)
    || (StandFigureBack__SetFaceType((StandFigureBack_o *)this, m_CancellationTokenSource_high, FadeTime, 0, 0LL),
        (v14 = v3->fields.voicePlayingList) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(this, method);
  }
  v15 = v3->fields.voicePlayingcnt;
  if ( (unsigned int)v15 >= v14->max_length )
LABEL_14:
    sub_1BCAA44(this, method);
  v16 = v14->m_Items[v15];
  if ( !v16 )
    goto LABEL_13;
  voiceData = v3->fields.voiceData;
  v18 = SoundManager_TypeInfo;
  id = v16->fields.id;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    v18 = SoundManager_TypeInfo;
  }
  DEFAULT_VOLUME = v18->static_fields->DEFAULT_VOLUME;
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v12, v13);
  System_Action___ctor(v21, (Il2CppObject *)v3, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0LL);
  v22 = SoundManager__playVoice_39419392(voiceData, id, DEFAULT_VOLUME, v21, 0LL);
  v3->fields.voicePlayer = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.voicePlayer, (int64_t)v22, v23, v24, v25, v26, v27, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopPlayVoiceComponent__LoadVoice(
        ShopPlayVoiceComponent_o *this,
        int32_t figureSvtId,
        int32_t state,
        bool isOverridePlayVoice,
        int32_t playVoiceState,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_String_o **p_requestVoiceData; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_o *v42; // x19
  __int64 v43; // x1
  System_String_o *v44; // x20
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1276C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&figureSvtId, *(_QWORD *)&state);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&SoundManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__, v15, v16);
    sub_1BCA7E0(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_4532/*"ChrVoice_"*/, v19, v20);
    byte_4B1276C = 1;
  }
  v21 = sub_1BCAA2C(
          ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&figureSvtId,
          *(_QWORD *)&state,
          isOverridePlayVoice);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    sub_1BCAA3C(v22, v23);
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v21 + 24) = state;
  *(_BYTE *)(v21 + 28) = isOverridePlayVoice;
  *(_DWORD *)(v21 + 32) = playVoiceState;
  p_requestVoiceData = &this->fields.requestVoiceData;
  if ( !this->fields.requestVoiceData && !this->fields.voiceData )
  {
    v45 = figureSvtId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    v32 = System_String__Concat((Il2CppObject *)StringLiteral_4532/*"ChrVoice_"*/, v31, 0LL);
    *p_requestVoiceData = v32;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.requestVoiceData,
      (int64_t)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v21,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0LL);
    v44 = *p_requestVoiceData;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v43);
    SoundManager__loadAudioAssetStorage(v44, v42, 1, 0LL);
  }
}


void __fastcall ShopPlayVoiceComponent__PlayVoice(
        ShopPlayVoiceComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x1
  int32_t figureServantId; // w0
  int32_t SvtVoiceId; // w21
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t figureServantLimitCount; // w22
  ServantVoiceMaster_o *v20; // x23
  System_Collections_Generic_List_object__o *EntityShopCombine; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct ServantVoiceData_array *Item; // x1
  const MethodInfo *v29; // x1

  if ( (byte_4B1276F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, name, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_1241/*"0_"*/, v11, v12);
    byte_4B1276F = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v13);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          v20 = (ServantVoiceMaster_o *)MasterData_object,
          Instance = (DataManager_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_1241/*"0_"*/, name, 0LL),
          !v20) )
    {
      sub_1BCAA3C(Instance, v17);
    }
    EntityShopCombine = (System_Collections_Generic_List_object__o *)ServantVoiceMaster__getEntityShopCombine(
                                                                       v20,
                                                                       15,
                                                                       SvtVoiceId,
                                                                       figureServantLimitCount,
                                                                       (System_String_o *)Instance,
                                                                       0LL);
    if ( EntityShopCombine && EntityShopCombine->fields._size >= 1 )
      Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                EntityShopCombine,
                                                0,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    else
      Item = 0LL;
    this->fields.voicePlayingList = Item;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.voicePlayingList,
      (int64_t)Item,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    this->fields.voicePlayingcnt = -1;
    ShopPlayVoiceComponent__PlayVoiceList(this, v29);
  }
}


void __fastcall ShopPlayVoiceComponent__PlayVoiceFromMaster(
        ShopPlayVoiceComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v5; // x2

  VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(this, name, method);
  ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v5);
}


void __fastcall ShopPlayVoiceComponent__PlayVoiceList(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopPlayVoiceComponent_o *v3; // x19
  struct ServantVoiceData_array *voicePlayingList; // x8
  int v5; // w9
  int max_length; // w10
  ServantVoiceData_o *v7; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PartyOrganizationUtility_o *p_voicePlayer; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v3 = this;
  if ( (byte_4B12770 & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_1BCA7E0(&StringLiteral_8056/*"InvokedPlayVoiceList"*/, method, v2);
    byte_4B12770 = 1;
  }
  voicePlayingList = v3->fields.voicePlayingList;
  v5 = v3->fields.voicePlayingcnt + 1;
  v3->fields.voicePlayingcnt = v5;
  if ( voicePlayingList )
  {
    max_length = voicePlayingList->max_length;
    if ( v5 < max_length )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1BCAA44(this, method);
      v7 = voicePlayingList->m_Items[v5];
      if ( v7 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v3,
          (System_String_o *)StringLiteral_8056/*"InvokedPlayVoiceList"*/,
          v7->fields.delay,
          0LL);
        return;
      }
LABEL_10:
      sub_1BCAA3C(this, method);
    }
  }
  this = (ShopPlayVoiceComponent_o *)v3->fields.standFigureBack;
  if ( !this )
    goto LABEL_10;
  StandFigureBack__SetFaceType((StandFigureBack_o *)this, v3->fields.defaultFaceType, 0.0, 0, 0LL);
  v3->fields.voicePlayingList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.voicePlayingList, 0LL, v8, v9, v10, v11, v12, v13);
  v3->fields.voicePlayer = 0LL;
  p_voicePlayer = (PartyOrganizationUtility_o *)&v3->fields.voicePlayer;
  sub_1BCA784(p_voicePlayer, 0LL, v15, v16, v17, v18, v19, v20);
  LOBYTE(p_voicePlayer[-1].fields.temporaryPartyInfo) = 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopPlayVoiceComponent__PlayVoiceOnce(
        ShopPlayVoiceComponent_o *this,
        System_String_o *name,
        int32_t flag,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  ShopPlayVoiceComponent_o *v8; // x0
  const MethodInfo *v9; // x2
  bool result; // w0
  System_String_o *VoiceFromMaster; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4B1276E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, name, *(_QWORD *)&flag);
    byte_4B1276E = 1;
  }
  if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    return 0;
  ShopPlayVoiceComponent__StopVoice(this, v7);
  if ( this->fields.isPlayingVoice || (this->fields.voicePlayOnce & flag) != 0 )
    return 0;
  VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v8, name, v9);
  ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v12);
  result = 1;
  this->fields.voicePlayOnce |= flag;
  return result;
}


void __fastcall ShopPlayVoiceComponent__QuitShopVoice(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  PartyOrganizationUtility_o *p_voiceData; // x19
  System_String_o *v12; // x20
  struct System_String_o *voiceData; // t1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1276B & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B1276B = 1;
  }
  this->fields.requestVoiceData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.requestVoiceData, 0LL, v2, v3, v4, v5, v6, v7);
  ShopPlayVoiceComponent__StopVoice(this, v9);
  voiceData = this->fields.voiceData;
  p_voiceData = (PartyOrganizationUtility_o *)&this->fields.voiceData;
  v12 = voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v10);
    SoundManager__releaseAudioAssetStorage(v12, 0LL);
    p_voiceData->klass = 0LL;
    sub_1BCA784(p_voiceData, 0LL, v14, v15, v16, v17, v18, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopPlayVoiceComponent__ReloadVoice(
        ShopPlayVoiceComponent_o *this,
        StandFigureBack_o *standFigureBack,
        int32_t figureServantId,
        int32_t figureServantLimitCount,
        int32_t defaultFaceType,
        System_Action_o *endReload,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *v44; // x0
  struct System_String_o *v45; // x0
  struct System_String_o **p_requestVoiceData; // x19
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_String_o *v53; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_o *v57; // x20
  __int64 v58; // x1
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1276D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, standFigureBack, *(_QWORD *)&figureServantId);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&SoundManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__, v17, v18);
    sub_1BCA7E0(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_4532/*"ChrVoice_"*/, v21, v22);
    byte_4B1276D = 1;
  }
  v23 = sub_1BCAA2C(
          ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo,
          standFigureBack,
          *(_QWORD *)&figureServantId,
          *(_QWORD *)&figureServantLimitCount);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    sub_1BCAA3C(v24, v25);
  *(_QWORD *)(v23 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 24) = endReload;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)endReload, v32, v33, v34, v35, v36, v37);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v23 + 24), 0LL);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.standFigureBack,
      (int64_t)standFigureBack,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    this->fields.figureServantId = figureServantId;
    this->fields.figureServantLimitCount = figureServantLimitCount;
    this->fields.defaultFaceType = defaultFaceType;
    v59 = figureServantId;
    v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
    v45 = System_String__Concat((Il2CppObject *)StringLiteral_4532/*"ChrVoice_"*/, v44, 0LL);
    this->fields.requestVoiceData = v45;
    p_requestVoiceData = &this->fields.requestVoiceData;
    sub_1BCA784((PartyOrganizationUtility_o *)p_requestVoiceData, (int64_t)v45, v47, v48, v49, v50, v51, v52);
    v53 = *p_requestVoiceData;
    v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v55, v56);
    System_Action___ctor(
      v57,
      (Il2CppObject *)v23,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v58);
    SoundManager__loadAudioAssetStorage(v53, v57, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopPlayVoiceComponent__SetPlayVoiceComponent(
        ShopPlayVoiceComponent_o *this,
        StandFigureBack_o *standFigureBack,
        int32_t figureServantId,
        int32_t figureServantLimitCount,
        int32_t defaultFaceType,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct StandFigureBack_o **p_standFigureBack; // x22

  this->fields.standFigureBack = standFigureBack;
  p_standFigureBack = &this->fields.standFigureBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.standFigureBack,
    (int64_t)standFigureBack,
    *(int64_t *)&figureServantId,
    figureServantLimitCount,
    *(System_String_o **)&defaultFaceType,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  *((_DWORD *)p_standFigureBack + 2) = figureServantId;
  *((_DWORD *)p_standFigureBack + 3) = figureServantLimitCount;
  *((_DWORD *)p_standFigureBack + 4) = defaultFaceType;
}


void __fastcall ShopPlayVoiceComponent__SetVoiceFlag(
        ShopPlayVoiceComponent_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  this->fields.voicePlayOnce |= flag;
}


void __fastcall ShopPlayVoiceComponent__StopVoice(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SePlayer_o *voicePlayer; // x8
  StandFigureBack_o *standFigureBack; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B12772 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8056/*"InvokedPlayVoiceList"*/, method, v2);
    byte_4B12772 = 1;
  }
  voicePlayer = this->fields.voicePlayer;
  this->fields.isPlayingVoice = 0;
  if ( voicePlayer )
  {
    standFigureBack = this->fields.standFigureBack;
    if ( !standFigureBack
      || (StandFigureBack__SetFaceType(standFigureBack, this->fields.defaultFaceType, 0.0, 0, 0LL),
          (standFigureBack = (StandFigureBack_o *)this->fields.voicePlayer) == 0LL) )
    {
      sub_1BCAA3C(standFigureBack, method);
    }
    SePlayer__Destroy((SePlayer_o *)standFigureBack, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayer, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.voicePlayingList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayingList, 0LL, v12, v13, v14, v15, v16, v17);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_70138960(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_8056/*"InvokedPlayVoiceList"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70138824(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_8056/*"InvokedPlayVoiceList"*/,
      0LL);
  }
}


void __fastcall ShopPlayVoiceComponent___c__DisplayClass14_0___ctor(
        ShopPlayVoiceComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopPlayVoiceComponent___c__DisplayClass14_0___LoadVoice_b__0(
        ShopPlayVoiceComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  ShopPlayVoiceComponent__EndLoadVoice(
    this->fields.__4__this,
    this->fields.state,
    this->fields.isOverridePlayVoice,
    this->fields.playVoiceState,
    v2);
}


void __fastcall ShopPlayVoiceComponent___c__DisplayClass15_0___ctor(
        ShopPlayVoiceComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopPlayVoiceComponent___c__DisplayClass15_0___ReloadVoice_b__0(
        ShopPlayVoiceComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ShopPlayVoiceComponent_o *_4__this; // x0
  System_String_o *voiceData; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t requestVoiceData; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B12775 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B12775 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  voiceData = _4__this->fields.voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__releaseAudioAssetStorage(voiceData, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
    _4__this->fields.voiceData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.voiceData, 0LL, v11, v12, v13, v14, v15, v16);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
  }
  requestVoiceData = (int64_t)_4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = (struct System_String_o *)requestVoiceData;
    sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.voiceData, requestVoiceData, v2, v3, v4, v5, v6, v7);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.requestVoiceData = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.requestVoiceData, 0LL, v18, v19, v20, v21, v22, v23);
      ActionExtensions__Call(this->fields.endReload, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(_4__this, method);
  }
}