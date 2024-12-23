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
  struct System_String_o **p_voiceData; // x23
  System_String_o *voiceData; // x24
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_String_o *requestVoiceData; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  ShopPlayVoiceComponent_o *v28; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  System_String_o *BackVoiceMasterKey; // x21
  const MethodInfo *v32; // x1
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v34; // x3
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v36; // x2

  if ( (byte_4B630D1 & 1) == 0 )
  {
    sub_1BE4ACC(&SoundManager_TypeInfo, *(_QWORD *)&state);
    sub_1BE4ACC(&StringLiteral_12280/*"SHOP_SCENE_VOICE_WELCOME"*/, v12);
    byte_4B630D1 = 1;
  }
  p_voiceData = &this->fields.voiceData;
  voiceData = this->fields.voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(voiceData, 0LL);
    *p_voiceData = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voiceData, 0LL, v15, v16, v17, v18, v19, v20);
  }
  requestVoiceData = this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = requestVoiceData;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.voiceData,
      (int64_t)requestVoiceData,
      isOverridePlayVoice,
      playVoiceState,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.requestVoiceData = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.requestVoiceData, 0LL, v22, v23, v24, v25, v26, v27);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v29);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v32);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v34);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v28, (System_String_o *)StringLiteral_12280/*"SHOP_SCENE_VOICE_WELCOME"*/, v30);
      ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v36);
    }
  }
}


System_String_o *__fastcall ShopPlayVoiceComponent__GetVoiceFromMaster(
        ShopPlayVoiceComponent_o *this,
        System_String_o *masterKey,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B630D0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ConstantStrMaster___, masterKey);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B630D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v6);
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
  ShopPlayVoiceComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantVoiceData_array *voicePlayingList; // x8
  __int64 voicePlayingcnt; // x9
  int32_t m_CancellationTokenSource_high; // w20
  float FadeTime; // s0
  struct ServantVoiceData_array *v9; // x8
  __int64 v10; // x9
  ServantVoiceData_o *v11; // x8
  System_String_o *voiceData; // x20
  SoundManager_c *v13; // x0
  System_String_o *id; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v16; // x22
  SePlayer_o *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  v2 = this;
  if ( (byte_4B630CE & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ShopPlayVoiceComponent_PlayVoiceList__, v3);
    this = (ShopPlayVoiceComponent_o *)sub_1BE4ACC(&SoundManager_TypeInfo, v4);
    byte_4B630CE = 1;
  }
  voicePlayingList = v2->fields.voicePlayingList;
  if ( !voicePlayingList )
    goto LABEL_13;
  voicePlayingcnt = v2->fields.voicePlayingcnt;
  if ( (unsigned int)voicePlayingcnt >= voicePlayingList->max_length )
    goto LABEL_14;
  this = (ShopPlayVoiceComponent_o *)voicePlayingList->m_Items[voicePlayingcnt];
  if ( !this
    || (m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource),
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL),
        (this = (ShopPlayVoiceComponent_o *)v2->fields.standFigureBack) == 0LL)
    || (StandFigureBack__SetFaceType((StandFigureBack_o *)this, m_CancellationTokenSource_high, FadeTime, 0, 0LL),
        (v9 = v2->fields.voicePlayingList) == 0LL) )
  {
LABEL_13:
    sub_1BE4D28(this, method);
  }
  v10 = v2->fields.voicePlayingcnt;
  if ( (unsigned int)v10 >= v9->max_length )
LABEL_14:
    sub_1BE4D30(this, method);
  v11 = v9->m_Items[v10];
  if ( !v11 )
    goto LABEL_13;
  voiceData = v2->fields.voiceData;
  v13 = SoundManager_TypeInfo;
  id = v11->fields.id;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v13 = SoundManager_TypeInfo;
  }
  DEFAULT_VOLUME = v13->static_fields->DEFAULT_VOLUME;
  v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v2, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0LL);
  v17 = SoundManager__playVoice_39615552(voiceData, id, DEFAULT_VOLUME, v16, 0LL);
  v2->fields.voicePlayer = v17;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.voicePlayer, (int64_t)v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct System_String_o **p_requestVoiceData; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Action_o *v37; // x19
  System_String_o *v38; // x20
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B630C9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&figureSvtId);
    sub_1BE4ACC(&int_TypeInfo, v11);
    sub_1BE4ACC(&SoundManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__, v13);
    sub_1BE4ACC(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo, v14);
    sub_1BE4ACC(&StringLiteral_4543/*"ChrVoice_"*/, v15);
    byte_4B630C9 = 1;
  }
  v16 = sub_1BE4D18(ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BE4D28(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 24) = state;
  *(_BYTE *)(v16 + 28) = isOverridePlayVoice;
  *(_DWORD *)(v16 + 32) = playVoiceState;
  p_requestVoiceData = &this->fields.requestVoiceData;
  if ( !this->fields.requestVoiceData && !this->fields.voiceData )
  {
    v39 = figureSvtId;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v25, v26, v27);
    v30 = System_String__Concat((Il2CppObject *)StringLiteral_4543/*"ChrVoice_"*/, v29, 0LL);
    *p_requestVoiceData = v30;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.requestVoiceData,
      (int64_t)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    v37 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v16,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0LL);
    v38 = *p_requestVoiceData;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v38, v37, 1, 0LL);
  }
}


void __fastcall ShopPlayVoiceComponent__PlayVoice(
        ShopPlayVoiceComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  int32_t figureServantId; // w0
  int32_t SvtVoiceId; // w21
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t figureServantLimitCount; // w22
  ServantVoiceMaster_o *v16; // x23
  System_Collections_Generic_List_object__o *EntityShopCombine; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct ServantVoiceData_array *Item; // x1
  const MethodInfo *v25; // x1

  if ( (byte_4B630CC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, name);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BE4ACC(&StringLiteral_1241/*"0_"*/, v8);
    byte_4B630CC = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v9);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          v16 = (ServantVoiceMaster_o *)MasterData_object,
          Instance = (DataManager_o *)System_String__Concat_62698808((System_String_o *)StringLiteral_1241/*"0_"*/, name, 0LL),
          !v16) )
    {
      sub_1BE4D28(Instance, v13);
    }
    EntityShopCombine = (System_Collections_Generic_List_object__o *)ServantVoiceMaster__getEntityShopCombine(
                                                                       v16,
                                                                       15,
                                                                       SvtVoiceId,
                                                                       figureServantLimitCount,
                                                                       (System_String_o *)Instance,
                                                                       0LL);
    if ( EntityShopCombine && EntityShopCombine->fields._size >= 1 )
      Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                EntityShopCombine,
                                                0,
                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    else
      Item = 0LL;
    this->fields.voicePlayingList = Item;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.voicePlayingList,
      (int64_t)Item,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    this->fields.voicePlayingcnt = -1;
    ShopPlayVoiceComponent__PlayVoiceList(this, v25);
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
  ShopPlayVoiceComponent_o *v2; // x19
  struct ServantVoiceData_array *voicePlayingList; // x8
  int v4; // w9
  int max_length; // w10
  ServantVoiceData_o *v6; // x8
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  PartyOrganizationUtility_o *p_voicePlayer; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  v2 = this;
  if ( (byte_4B630CD & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_1BE4ACC(&StringLiteral_8075/*"InvokedPlayVoiceList"*/, method);
    byte_4B630CD = 1;
  }
  voicePlayingList = v2->fields.voicePlayingList;
  v4 = v2->fields.voicePlayingcnt + 1;
  v2->fields.voicePlayingcnt = v4;
  if ( voicePlayingList )
  {
    max_length = voicePlayingList->max_length;
    if ( v4 < max_length )
    {
      if ( v4 >= (unsigned int)max_length )
        sub_1BE4D30(this, method);
      v6 = voicePlayingList->m_Items[v4];
      if ( v6 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v2,
          (System_String_o *)StringLiteral_8075/*"InvokedPlayVoiceList"*/,
          v6->fields.delay,
          0LL);
        return;
      }
LABEL_10:
      sub_1BE4D28(this, method);
    }
  }
  this = (ShopPlayVoiceComponent_o *)v2->fields.standFigureBack;
  if ( !this )
    goto LABEL_10;
  StandFigureBack__SetFaceType((StandFigureBack_o *)this, v2->fields.defaultFaceType, 0.0, 0, 0LL);
  v2->fields.voicePlayingList = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.voicePlayingList, 0LL, v7, v8, v9, v10, v11, v12);
  v2->fields.voicePlayer = 0LL;
  p_voicePlayer = (PartyOrganizationUtility_o *)&v2->fields.voicePlayer;
  sub_1BE4A70(p_voicePlayer, 0LL, v14, v15, v16, v17, v18, v19);
  LOBYTE(p_voicePlayer[-1].fields.temporaryPartyInfo) = 0;
}


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

  if ( (byte_4B630CB & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, name);
    byte_4B630CB = 1;
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
  PartyOrganizationUtility_o *p_voiceData; // x19
  System_String_o *v11; // x20
  struct System_String_o *voiceData; // t1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B630C8 & 1) == 0 )
  {
    sub_1BE4ACC(&SoundManager_TypeInfo, method);
    byte_4B630C8 = 1;
  }
  this->fields.requestVoiceData = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.requestVoiceData, 0LL, v2, v3, v4, v5, v6, v7);
  ShopPlayVoiceComponent__StopVoice(this, v9);
  voiceData = this->fields.voiceData;
  p_voiceData = (PartyOrganizationUtility_o *)&this->fields.voiceData;
  v11 = voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v11, 0LL);
    p_voiceData->klass = 0LL;
    sub_1BE4A70(p_voiceData, 0LL, v13, v14, v15, v16, v17, v18);
  }
}


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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  struct System_String_o *v43; // x0
  struct System_String_o **p_requestVoiceData; // x19
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_String_o *v51; // x19
  System_Action_o *v52; // x20
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B630CA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, standFigureBack);
    sub_1BE4ACC(&int_TypeInfo, v13);
    sub_1BE4ACC(&SoundManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__, v15);
    sub_1BE4ACC(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo, v16);
    sub_1BE4ACC(&StringLiteral_4543/*"ChrVoice_"*/, v17);
    byte_4B630CA = 1;
  }
  v18 = sub_1BE4D18(ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1BE4D28(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = endReload;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)endReload, v27, v28, v29, v30, v31, v32);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.standFigureBack,
      (int64_t)standFigureBack,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    this->fields.figureServantId = figureServantId;
    this->fields.figureServantLimitCount = figureServantLimitCount;
    this->fields.defaultFaceType = defaultFaceType;
    v53 = figureServantId;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v39, v40, v41);
    v43 = System_String__Concat((Il2CppObject *)StringLiteral_4543/*"ChrVoice_"*/, v42, 0LL);
    this->fields.requestVoiceData = v43;
    p_requestVoiceData = &this->fields.requestVoiceData;
    sub_1BE4A70((PartyOrganizationUtility_o *)p_requestVoiceData, (int64_t)v43, v45, v46, v47, v48, v49, v50);
    v51 = *p_requestVoiceData;
    v52 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v18,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v51, v52, 1, 0LL);
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
  sub_1BE4A70(
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
  struct SePlayer_o *voicePlayer; // x8
  StandFigureBack_o *standFigureBack; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B630CF & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_8075/*"InvokedPlayVoiceList"*/, method);
    byte_4B630CF = 1;
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
      sub_1BE4D28(standFigureBack, method);
    }
    SePlayer__Destroy((SePlayer_o *)standFigureBack, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voicePlayer, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.voicePlayingList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voicePlayingList, 0LL, v11, v12, v13, v14, v15, v16);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_70436716(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_8075/*"InvokedPlayVoiceList"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70436580(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_8075/*"InvokedPlayVoiceList"*/,
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
    sub_1BE4D28(this, method);
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

  if ( (byte_4B630D2 & 1) == 0 )
  {
    sub_1BE4ACC(&SoundManager_TypeInfo, method);
    byte_4B630D2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  voiceData = _4__this->fields.voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(voiceData, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
    _4__this->fields.voiceData = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this->fields.voiceData, 0LL, v11, v12, v13, v14, v15, v16);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
  }
  requestVoiceData = (int64_t)_4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = (struct System_String_o *)requestVoiceData;
    sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this->fields.voiceData, requestVoiceData, v2, v3, v4, v5, v6, v7);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.requestVoiceData = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this->fields.requestVoiceData, 0LL, v18, v19, v20, v21, v22, v23);
      ActionExtensions__Call(this->fields.endReload, 0LL);
      return;
    }
LABEL_13:
    sub_1BE4D28(_4__this, method);
  }
}