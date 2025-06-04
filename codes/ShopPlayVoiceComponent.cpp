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
  __int64 v9; // x1
  struct System_String_o **p_voiceData; // x23
  System_String_o *voiceData; // x24
  char v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_o *requestVoiceData; // x1
  char v15; // w2
  const MethodInfo *v16; // x3
  ShopPlayVoiceComponent_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  System_String_o *BackVoiceMasterKey; // x21
  const MethodInfo *v21; // x1
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v23; // x3
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v25; // x2

  if ( (byte_4AFE380 & 1) == 0 )
  {
    sub_1BC3008(&SoundManager_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&StringLiteral_12057/*"SHOP_SCENE_VOICE_WELCOME"*/, v9);
    byte_4AFE380 = 1;
  }
  p_voiceData = &this->fields.voiceData;
  voiceData = this->fields.voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(voiceData, 0LL);
    *p_voiceData = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voiceData, 0, v12, v13);
  }
  requestVoiceData = this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = requestVoiceData;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.voiceData,
      (int32_t)requestVoiceData,
      isOverridePlayVoice,
      *(const MethodInfo **)&playVoiceState);
    this->fields.requestVoiceData = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.requestVoiceData, 0, v15, v16);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v18);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v21);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v23);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v17, (System_String_o *)StringLiteral_12057/*"SHOP_SCENE_VOICE_WELCOME"*/, v19);
      ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v25);
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

  if ( (byte_4AFE37F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ConstantStrMaster___, masterKey);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4AFE37F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v6);
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
  __int64 v5; // x1
  struct ServantVoiceData_array *voicePlayingList; // x8
  __int64 voicePlayingcnt; // x9
  int32_t m_CancellationTokenSource_high; // w20
  float FadeTime; // s0
  struct ServantVoiceData_array *v10; // x8
  __int64 v11; // x9
  ServantVoiceData_o *v12; // x8
  System_String_o *voiceData; // x20
  SoundManager_c *v14; // x0
  System_String_o *id; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v17; // x22
  SePlayer_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  v3 = this;
  if ( (byte_4AFE37D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ShopPlayVoiceComponent_PlayVoiceList__, v4);
    this = (ShopPlayVoiceComponent_o *)sub_1BC3008(&SoundManager_TypeInfo, v5);
    byte_4AFE37D = 1;
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
        (v10 = v3->fields.voicePlayingList) == 0LL) )
  {
LABEL_13:
    sub_1BC3264(this, method);
  }
  v11 = v3->fields.voicePlayingcnt;
  if ( (unsigned int)v11 >= v10->max_length )
LABEL_14:
    sub_1BC326C(this, method, v2);
  v12 = v10->m_Items[v11];
  if ( !v12 )
    goto LABEL_13;
  voiceData = v3->fields.voiceData;
  v14 = SoundManager_TypeInfo;
  id = v12->fields.id;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v14 = SoundManager_TypeInfo;
  }
  DEFAULT_VOLUME = v14->static_fields->DEFAULT_VOLUME;
  v17 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v3, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0LL);
  v18 = SoundManager__playVoice_40538664(voiceData, id, DEFAULT_VOLUME, v17, 0, 0LL);
  v3->fields.voicePlayer = v18;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.voicePlayer, (int32_t)v18, v19, v20);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct System_String_o **p_requestVoiceData; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Action_o *v29; // x19
  System_String_o *v30; // x20
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4AFE378 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&figureSvtId);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&SoundManager_TypeInfo, v12);
    sub_1BC3008(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__, v13);
    sub_1BC3008(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_4386/*"ChrVoice_"*/, v15);
    byte_4AFE378 = 1;
  }
  v16 = sub_1BC3254(ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BC3264(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  *(_DWORD *)(v16 + 24) = state;
  *(_BYTE *)(v16 + 28) = isOverridePlayVoice;
  *(_DWORD *)(v16 + 32) = playVoiceState;
  p_requestVoiceData = &this->fields.requestVoiceData;
  if ( !this->fields.requestVoiceData && !this->fields.voiceData )
  {
    v31 = figureSvtId;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v21, v22, v23);
    v26 = System_String__Concat((Il2CppObject *)StringLiteral_4386/*"ChrVoice_"*/, v25, 0LL);
    *p_requestVoiceData = v26;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.requestVoiceData, (int32_t)v26, v27, v28);
    v29 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v16,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0LL);
    v30 = *p_requestVoiceData;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v30, v29, 1, 0LL);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ServantVoiceData_array *Item; // x1
  const MethodInfo *v21; // x1

  if ( (byte_4AFE37B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantVoiceMaster___, name);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BC3008(&StringLiteral_1142/*"0_"*/, v8);
    byte_4AFE37B = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v9);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          v16 = (ServantVoiceMaster_o *)MasterData_object,
          Instance = (DataManager_o *)System_String__Concat_62348648((System_String_o *)StringLiteral_1142/*"0_"*/, name, 0LL),
          !v16) )
    {
      sub_1BC3264(Instance, v13);
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
                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    else
      Item = 0LL;
    this->fields.voicePlayingList = Item;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voicePlayingList, (int32_t)Item, v18, v19);
    this->fields.voicePlayingcnt = -1;
    ShopPlayVoiceComponent__PlayVoiceList(this, v21);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_voicePlayer; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v3 = this;
  if ( (byte_4AFE37C & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_1BC3008(&StringLiteral_7879/*"InvokedPlayVoiceList"*/, method);
    byte_4AFE37C = 1;
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
        sub_1BC326C(this, method, v2);
      v7 = voicePlayingList->m_Items[v5];
      if ( v7 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v3,
          (System_String_o *)StringLiteral_7879/*"InvokedPlayVoiceList"*/,
          v7->fields.delay,
          0LL);
        return;
      }
LABEL_10:
      sub_1BC3264(this, method);
    }
  }
  this = (ShopPlayVoiceComponent_o *)v3->fields.standFigureBack;
  if ( !this )
    goto LABEL_10;
  StandFigureBack__SetFaceType((StandFigureBack_o *)this, v3->fields.defaultFaceType, 0.0, 0, 0LL);
  v3->fields.voicePlayingList = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.voicePlayingList, 0, v8, v9);
  v3->fields.voicePlayer = 0LL;
  p_voicePlayer = (CGThumbnailListItem_o *)&v3->fields.voicePlayer;
  sub_1BC2FAC(p_voicePlayer, 0, v11, v12);
  LOBYTE(p_voicePlayer[-1].fields._Id_k__BackingField) = 0;
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

  if ( (byte_4AFE37A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, name);
    byte_4AFE37A = 1;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  CGThumbnailListItem_o *p_voiceData; // x19
  System_String_o *v7; // x20
  struct System_String_o *voiceData; // t1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4AFE377 & 1) == 0 )
  {
    sub_1BC3008(&SoundManager_TypeInfo, method);
    byte_4AFE377 = 1;
  }
  this->fields.requestVoiceData = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.requestVoiceData, 0, v2, v3);
  ShopPlayVoiceComponent__StopVoice(this, v5);
  voiceData = this->fields.voiceData;
  p_voiceData = (CGThumbnailListItem_o *)&this->fields.voiceData;
  v7 = voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v7, 0LL);
    p_voiceData->klass = 0LL;
    sub_1BC2FAC(p_voiceData, 0, v9, v10);
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  struct System_String_o *v31; // x0
  struct System_String_o **p_requestVoiceData; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x19
  System_Action_o *v36; // x20
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4AFE379 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, standFigureBack);
    sub_1BC3008(&int_TypeInfo, v13);
    sub_1BC3008(&SoundManager_TypeInfo, v14);
    sub_1BC3008(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__, v15);
    sub_1BC3008(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo, v16);
    sub_1BC3008(&StringLiteral_4386/*"ChrVoice_"*/, v17);
    byte_4AFE379 = 1;
  }
  v18 = sub_1BC3254(ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1BC3264(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 24) = endReload;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 24), (int32_t)endReload, v23, v24);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.standFigureBack, (int32_t)standFigureBack, v25, v26);
    this->fields.figureServantId = figureServantId;
    this->fields.figureServantLimitCount = figureServantLimitCount;
    this->fields.defaultFaceType = defaultFaceType;
    v37 = figureServantId;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v27, v28, v29);
    v31 = System_String__Concat((Il2CppObject *)StringLiteral_4386/*"ChrVoice_"*/, v30, 0LL);
    this->fields.requestVoiceData = v31;
    p_requestVoiceData = &this->fields.requestVoiceData;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_requestVoiceData, (int32_t)v31, v33, v34);
    v35 = *p_requestVoiceData;
    v36 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v18,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v35, v36, 1, 0LL);
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
  struct StandFigureBack_o **p_standFigureBack; // x22

  this->fields.standFigureBack = standFigureBack;
  p_standFigureBack = &this->fields.standFigureBack;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.standFigureBack,
    (int32_t)standFigureBack,
    figureServantId,
    *(const MethodInfo **)&figureServantLimitCount);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4AFE37E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_7879/*"InvokedPlayVoiceList"*/, method);
    byte_4AFE37E = 1;
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
      sub_1BC3264(standFigureBack, method);
    }
    SePlayer__Destroy((SePlayer_o *)standFigureBack, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voicePlayer, 0, v5, v6);
    this->fields.voicePlayingList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voicePlayingList, 0, v7, v8);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_70019316(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_7879/*"InvokedPlayVoiceList"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70019180(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_7879/*"InvokedPlayVoiceList"*/,
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
    sub_1BC3264(this, method);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ShopPlayVoiceComponent_o *_4__this; // x0
  System_String_o *voiceData; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *requestVoiceData; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4AFE381 & 1) == 0 )
  {
    sub_1BC3008(&SoundManager_TypeInfo, method);
    byte_4AFE381 = 1;
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
    sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.voiceData, 0, v7, v8);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
  }
  requestVoiceData = _4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = requestVoiceData;
    sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.voiceData, (int32_t)requestVoiceData, v2, v3);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.requestVoiceData = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.requestVoiceData, 0, v10, v11);
      ActionExtensions__Call(this->fields.endReload, 0LL);
      return;
    }
LABEL_13:
    sub_1BC3264(_4__this, method);
  }
}