void ShopPlayVoiceComponent___ctor(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool ShopPlayVoiceComponent__CheckVoiceFlag(ShopPlayVoiceComponent_o *this, int32_t flag, const MethodInfo *method)
{
  return !this->fields.isPlayingVoice && (this->fields.voicePlayOnce & flag) == 0;
}


// local variable allocation has failed, the output may be wrong!
void ShopPlayVoiceComponent__EndLoadVoice(
        ShopPlayVoiceComponent_o *this,
        int32_t state,
        bool isOverridePlayVoice,
        int32_t playVoiceState,
        const MethodInfo *method)
{
  struct System_String_o **p_voiceData; // x23
  System_String_o *voiceData; // x24
  char v11; // w2
  const MethodInfo *v12; // x3
  struct System_String_o *requestVoiceData; // x1
  char v14; // w2
  const MethodInfo *v15; // x3
  ShopPlayVoiceComponent_o *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  System_String_o *BackVoiceMasterKey; // x21
  const MethodInfo *v20; // x1
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v22; // x3
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v24; // x2

  if ( (byte_4CB255A & 1) == 0 )
  {
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12171/*"SHOP_SCENE_VOICE_WELCOME"*/);
    byte_4CB255A = 1;
  }
  p_voiceData = &this->fields.voiceData;
  voiceData = this->fields.voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(voiceData, 0);
    *p_voiceData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.voiceData, 0, v11, v12);
  }
  requestVoiceData = this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = requestVoiceData;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.voiceData,
      (int32_t)requestVoiceData,
      isOverridePlayVoice,
      *(const MethodInfo **)&playVoiceState);
    this->fields.requestVoiceData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requestVoiceData, 0, v14, v15);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v17);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v20);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v22);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v16, (System_String_o *)StringLiteral_12171/*"SHOP_SCENE_VOICE_WELCOME"*/, v18);
      ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v24);
    }
  }
}


System_String_o *ShopPlayVoiceComponent__GetVoiceFromMaster(
        ShopPlayVoiceComponent_o *this,
        System_String_o *masterKey,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CB2559 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB2559 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v5);
  }
  return ConstantStrMaster__GetRandomVoice((ConstantStrMaster_o *)Instance, masterKey, 0);
}


void ShopPlayVoiceComponent__InitPlayVoice(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  this->fields.voicePlayOnce = 0;
  this->fields.isPlayingVoice = 0;
}


void ShopPlayVoiceComponent__InvokedPlayVoiceList(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *v2; // x19
  struct ServantVoiceData_array *voicePlayingList; // x8
  __int64 voicePlayingcnt; // x9
  int32_t m_CancellationTokenSource_high; // w20
  float FadeTime; // s0
  struct ServantVoiceData_array *v7; // x8
  __int64 v8; // x9
  ServantVoiceData_o *v9; // x8
  System_String_o *voiceData; // x20
  SoundManager_c *v11; // x0
  System_String_o *id; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v14; // x22
  SePlayer_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  v2 = this;
  if ( (byte_4CB2557 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ShopPlayVoiceComponent_PlayVoiceList__);
    this = (ShopPlayVoiceComponent_o *)sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB2557 = 1;
  }
  voicePlayingList = v2->fields.voicePlayingList;
  if ( !voicePlayingList )
    goto LABEL_13;
  voicePlayingcnt = v2->fields.voicePlayingcnt;
  if ( (unsigned int)voicePlayingcnt >= LODWORD(voicePlayingList->max_length) )
    goto LABEL_14;
  this = (ShopPlayVoiceComponent_o *)voicePlayingList->m_Items[voicePlayingcnt];
  if ( !this
    || (m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource),
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0),
        (this = (ShopPlayVoiceComponent_o *)v2->fields.standFigureBack) == 0)
    || (StandFigureBack__SetFaceType((StandFigureBack_o *)this, m_CancellationTokenSource_high, FadeTime, 0, 0),
        (v7 = v2->fields.voicePlayingList) == 0) )
  {
LABEL_13:
    sub_1C6BC60(this, method);
  }
  v8 = v2->fields.voicePlayingcnt;
  if ( (unsigned int)v8 >= LODWORD(v7->max_length) )
LABEL_14:
    sub_1C6BC68(this);
  v9 = v7->m_Items[v8];
  if ( !v9 )
    goto LABEL_13;
  voiceData = v2->fields.voiceData;
  v11 = SoundManager_TypeInfo;
  id = v9->fields.id;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v11 = SoundManager_TypeInfo;
  }
  DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
  v14 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v2, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0);
  v15 = SoundManager__playVoice_41752360(voiceData, id, DEFAULT_VOLUME, v14, 0, 0);
  v2->fields.voicePlayer = v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.voicePlayer, (int32_t)v15, v16, v17);
}


void ShopPlayVoiceComponent__LoadVoice(
        ShopPlayVoiceComponent_o *this,
        int32_t figureSvtId,
        int32_t state,
        bool isOverridePlayVoice,
        int32_t playVoiceState,
        const MethodInfo *method)
{
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_String_o **p_requestVoiceData; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Action_o *v21; // x19
  System_String_o *v22; // x20
  int32_t v23; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CB2552 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__);
    sub_1C6BA08(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_4414/*"ChrVoice_"*/);
    byte_4CB2552 = 1;
  }
  v11 = sub_1C6BC54(ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C6BC60(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_DWORD *)(v11 + 24) = state;
  *(_BYTE *)(v11 + 28) = isOverridePlayVoice;
  *(_DWORD *)(v11 + 32) = playVoiceState;
  p_requestVoiceData = &this->fields.requestVoiceData;
  if ( !this->fields.requestVoiceData && !this->fields.voiceData )
  {
    v23 = figureSvtId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v18 = System_String__Concat((Il2CppObject *)StringLiteral_4414/*"ChrVoice_"*/, v17, 0);
    *p_requestVoiceData = v18;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requestVoiceData, (int32_t)v18, v19, v20);
    v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v11,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0);
    v22 = *p_requestVoiceData;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v22, v21, 1, 0);
  }
}


void ShopPlayVoiceComponent__PlayVoice(ShopPlayVoiceComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t figureServantId; // w0
  int32_t SvtVoiceId; // w21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t figureServantLimitCount; // w22
  ServantVoiceMaster_o *v12; // x23
  System_Collections_Generic_List_object__o *EntityShopCombine; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct ServantVoiceData_array *Item; // x1
  const MethodInfo *v17; // x1

  if ( (byte_4CB2555 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_1144/*"0_"*/);
    byte_4CB2555 = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v5);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          v12 = (ServantVoiceMaster_o *)MasterData_object,
          Instance = (DataManager_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_1144/*"0_"*/, name, 0),
          !v12) )
    {
      sub_1C6BC60(Instance, v9);
    }
    EntityShopCombine = (System_Collections_Generic_List_object__o *)ServantVoiceMaster__getEntityShopCombine(
                                                                       v12,
                                                                       15,
                                                                       SvtVoiceId,
                                                                       figureServantLimitCount,
                                                                       (System_String_o *)Instance,
                                                                       0);
    if ( EntityShopCombine && EntityShopCombine->fields._size >= 1 )
      Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                EntityShopCombine,
                                                0,
                                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    else
      Item = 0;
    this->fields.voicePlayingList = Item;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.voicePlayingList, (int32_t)Item, v14, v15);
    this->fields.voicePlayingcnt = -1;
    ShopPlayVoiceComponent__PlayVoiceList(this, v17);
  }
}


void ShopPlayVoiceComponent__PlayVoiceFromMaster(
        ShopPlayVoiceComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v5; // x2

  VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(this, name, method);
  ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v5);
}


void ShopPlayVoiceComponent__PlayVoiceList(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *v2; // x19
  struct ServantVoiceData_array *voicePlayingList; // x8
  int v4; // w9
  int max_length; // w10
  ServantVoiceData_o *v6; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CGThumbnailListItem_o *p_voicePlayer; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v2 = this;
  if ( (byte_4CB2556 & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_1C6BA08(&StringLiteral_7954/*"InvokedPlayVoiceList"*/);
    byte_4CB2556 = 1;
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
        sub_1C6BC68(this);
      v6 = voicePlayingList->m_Items[v4];
      if ( v6 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v2,
          (System_String_o *)StringLiteral_7954/*"InvokedPlayVoiceList"*/,
          v6->fields.delay,
          0);
        return;
      }
LABEL_10:
      sub_1C6BC60(this, method);
    }
  }
  this = (ShopPlayVoiceComponent_o *)v2->fields.standFigureBack;
  if ( !this )
    goto LABEL_10;
  StandFigureBack__SetFaceType((StandFigureBack_o *)this, v2->fields.defaultFaceType, 0.0, 0, 0);
  v2->fields.voicePlayingList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.voicePlayingList, 0, v7, v8);
  v2->fields.voicePlayer = 0;
  p_voicePlayer = (CGThumbnailListItem_o *)&v2->fields.voicePlayer;
  sub_1C6B9AC(p_voicePlayer, 0, v10, v11);
  LOBYTE(p_voicePlayer[-1].fields._Id_k__BackingField) = 0;
}


bool ShopPlayVoiceComponent__PlayVoiceOnce(
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

  if ( (byte_4CB2554 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2554 = 1;
  }
  if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_1/*""*/, 0) )
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


void ShopPlayVoiceComponent__QuitShopVoice(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  CGThumbnailListItem_o *p_voiceData; // x19
  System_String_o *v7; // x20
  struct System_String_o *voiceData; // t1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB2551 & 1) == 0 )
  {
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB2551 = 1;
  }
  this->fields.requestVoiceData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requestVoiceData, 0, v2, v3);
  ShopPlayVoiceComponent__StopVoice(this, v5);
  voiceData = this->fields.voiceData;
  p_voiceData = (CGThumbnailListItem_o *)&this->fields.voiceData;
  v7 = voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v7, 0);
    p_voiceData->klass = 0;
    sub_1C6B9AC(p_voiceData, 0, v9, v10);
  }
}


void ShopPlayVoiceComponent__ReloadVoice(
        ShopPlayVoiceComponent_o *this,
        StandFigureBack_o *standFigureBack,
        int32_t figureServantId,
        int32_t figureServantLimitCount,
        int32_t defaultFaceType,
        System_Action_o *endReload,
        const MethodInfo *method)
{
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  struct System_String_o *v23; // x0
  struct System_String_o **p_requestVoiceData; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x19
  System_Action_o *v28; // x20
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CB2553 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__);
    sub_1C6BA08(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_4414/*"ChrVoice_"*/);
    byte_4CB2553 = 1;
  }
  v13 = sub_1C6BC54(ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    sub_1C6BC60(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = endReload;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)endReload, v18, v19);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 24), 0);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.standFigureBack, (int32_t)standFigureBack, v20, v21);
    this->fields.figureServantId = figureServantId;
    this->fields.figureServantLimitCount = figureServantLimitCount;
    this->fields.defaultFaceType = defaultFaceType;
    v29 = figureServantId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v23 = System_String__Concat((Il2CppObject *)StringLiteral_4414/*"ChrVoice_"*/, v22, 0);
    this->fields.requestVoiceData = v23;
    p_requestVoiceData = &this->fields.requestVoiceData;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_requestVoiceData, (int32_t)v23, v25, v26);
    v27 = *p_requestVoiceData;
    v28 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v13,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v27, v28, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopPlayVoiceComponent__SetPlayVoiceComponent(
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
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.standFigureBack,
    (int32_t)standFigureBack,
    figureServantId,
    *(const MethodInfo **)&figureServantLimitCount);
  *((_DWORD *)p_standFigureBack + 2) = figureServantId;
  *((_DWORD *)p_standFigureBack + 3) = figureServantLimitCount;
  *((_DWORD *)p_standFigureBack + 4) = defaultFaceType;
}


void ShopPlayVoiceComponent__SetVoiceFlag(ShopPlayVoiceComponent_o *this, int32_t flag, const MethodInfo *method)
{
  this->fields.voicePlayOnce |= flag;
}


void ShopPlayVoiceComponent__StopVoice(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  struct SePlayer_o *voicePlayer; // x8
  StandFigureBack_o *standFigureBack; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB2558 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_7954/*"InvokedPlayVoiceList"*/);
    byte_4CB2558 = 1;
  }
  voicePlayer = this->fields.voicePlayer;
  this->fields.isPlayingVoice = 0;
  if ( voicePlayer )
  {
    standFigureBack = this->fields.standFigureBack;
    if ( !standFigureBack
      || (StandFigureBack__SetFaceType(standFigureBack, this->fields.defaultFaceType, 0.0, 0, 0),
          (standFigureBack = (StandFigureBack_o *)this->fields.voicePlayer) == 0) )
    {
      sub_1C6BC60(standFigureBack, method);
    }
    SePlayer__Destroy((SePlayer_o *)standFigureBack, 0);
    this->fields.voicePlayer = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.voicePlayer, 0, v5, v6);
    this->fields.voicePlayingList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.voicePlayingList, 0, v7, v8);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_71644312(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_7954/*"InvokedPlayVoiceList"*/,
         0) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_71644176(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_7954/*"InvokedPlayVoiceList"*/,
      0);
  }
}


void ShopPlayVoiceComponent___c__DisplayClass14_0___ctor(
        ShopPlayVoiceComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopPlayVoiceComponent___c__DisplayClass14_0___LoadVoice_b__0(
        ShopPlayVoiceComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1C6BC60(this, method);
  ShopPlayVoiceComponent__EndLoadVoice(
    this->fields.__4__this,
    this->fields.state,
    this->fields.isOverridePlayVoice,
    this->fields.playVoiceState,
    v2);
}


void ShopPlayVoiceComponent___c__DisplayClass15_0___ctor(
        ShopPlayVoiceComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopPlayVoiceComponent___c__DisplayClass15_0___ReloadVoice_b__0(
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

  if ( (byte_4CB255B & 1) == 0 )
  {
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB255B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  voiceData = _4__this->fields.voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(voiceData, 0);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
    _4__this->fields.voiceData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.voiceData, 0, v7, v8);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
  }
  requestVoiceData = _4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = requestVoiceData;
    sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.voiceData, (int32_t)requestVoiceData, v2, v3);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.requestVoiceData = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.requestVoiceData, 0, v10, v11);
      ActionExtensions__Call(this->fields.endReload, 0);
      return;
    }
LABEL_13:
    sub_1C6BC60(_4__this, method);
  }
}