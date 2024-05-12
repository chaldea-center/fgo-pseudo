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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_voiceData; // x23
  System_String_o *voiceData; // x24
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **requestVoiceData; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  ShopPlayVoiceComponent_o *v27; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  System_String_o *BackVoiceMasterKey; // x21
  const MethodInfo *v31; // x1
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v33; // x3
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v35; // x2

  if ( (byte_438CFA3 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_12429/*"SHOP_SCENE_VOICE_WELCOME"*/);
    byte_438CFA3 = 1;
  }
  p_voiceData = &this->fields.voiceData;
  voiceData = this->fields.voiceData;
  if ( voiceData )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(voiceData, 0LL);
    *p_voiceData = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.voiceData, 0LL, v14, v15, v16, v17, v18, v19);
  }
  requestVoiceData = (System_Int32_array **)this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = (struct System_String_o *)requestVoiceData;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.voiceData,
      requestVoiceData,
      (System_String_array **)isOverridePlayVoice,
      *(System_String_array ***)&playVoiceState,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.requestVoiceData = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.requestVoiceData, 0LL, v21, v22, v23, v24, v25, v26);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v28);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v31);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v33);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v27, (System_String_o *)StringLiteral_12429/*"SHOP_SCENE_VOICE_WELCOME"*/, v29);
      ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v35);
    }
  }
}


System_String_o *__fastcall ShopPlayVoiceComponent__GetVoiceFromMaster(
        ShopPlayVoiceComponent_o *this,
        System_String_o *masterKey,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438CFA2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438CFA2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v5);
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
  struct ServantVoiceData_array *voicePlayingList; // x8
  __int64 voicePlayingcnt; // x9
  int32_t standFigureBack_high; // w20
  float FadeTime; // s0
  struct ServantVoiceData_array *v7; // x8
  __int64 v8; // x9
  ServantVoiceData_o *v9; // x8
  System_String_o *voiceData; // x20
  System_String_o *id; // x21
  SoundManager_c *v12; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v14; // x22
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0

  v2 = this;
  if ( (byte_438CFA0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ShopPlayVoiceComponent_PlayVoiceList__);
    this = (ShopPlayVoiceComponent_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438CFA0 = 1;
  }
  voicePlayingList = v2->fields.voicePlayingList;
  if ( !voicePlayingList )
    goto LABEL_14;
  voicePlayingcnt = v2->fields.voicePlayingcnt;
  if ( (unsigned int)voicePlayingcnt >= voicePlayingList->max_length )
    goto LABEL_15;
  this = (ShopPlayVoiceComponent_o *)voicePlayingList->m_Items[voicePlayingcnt];
  if ( !this
    || (standFigureBack_high = HIDWORD(this->fields.standFigureBack),
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL),
        (this = (ShopPlayVoiceComponent_o *)v2->fields.standFigureBack) == 0LL)
    || (StandFigureBack__SetFaceType((StandFigureBack_o *)this, standFigureBack_high, FadeTime, 0, 0LL),
        (v7 = v2->fields.voicePlayingList) == 0LL) )
  {
LABEL_14:
    sub_B7769C(this, method);
  }
  v8 = v2->fields.voicePlayingcnt;
  if ( (unsigned int)v8 >= v7->max_length )
  {
LABEL_15:
    v22 = sub_B776C8(this);
    sub_B77668(v22, 0LL);
  }
  v9 = v7->m_Items[v8];
  if ( !v9 )
    goto LABEL_14;
  voiceData = v2->fields.voiceData;
  id = v9->fields.id;
  v12 = SoundManager_TypeInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v12 = SoundManager_TypeInfo;
  }
  DEFAULT_VOLUME = v12->static_fields->DEFAULT_VOLUME;
  v14 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v2, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0LL);
  v15 = (System_Int32_array **)SoundManager__playVoice_23512556(voiceData, id, DEFAULT_VOLUME, v14, 0LL);
  v2->fields.voicePlayer = (struct SePlayer_o *)v15;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.voicePlayer, v15, v16, v17, v18, v19, v20, v21);
}


void __fastcall ShopPlayVoiceComponent__LoadVoice(
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x2
  struct System_String_o **p_requestVoiceData; // x20
  Il2CppObject *v22; // x0
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o *v30; // x19
  System_String_o *v31; // x20
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438CF9B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__);
    sub_B775C4(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
    sub_B775C4(&StringLiteral_4090/*"ChrVoice_"*/);
    byte_438CF9B = 1;
  }
  v11 = sub_B77694(ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
  ShopPlayVoiceComponent___c__DisplayClass14_0___ctor((ShopPlayVoiceComponent___c__DisplayClass14_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B7769C(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = state;
  *(_BYTE *)(v11 + 28) = isOverridePlayVoice;
  *(_DWORD *)(v11 + 32) = playVoiceState;
  p_requestVoiceData = &this->fields.requestVoiceData;
  if ( !this->fields.requestVoiceData && !this->fields.voiceData )
  {
    v32 = figureSvtId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v20);
    v23 = (System_Int32_array **)System_String__Concat((Il2CppObject *)StringLiteral_4090/*"ChrVoice_"*/, v22, 0LL);
    *p_requestVoiceData = (struct System_String_o *)v23;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.requestVoiceData, v23, v24, v25, v26, v27, v28, v29);
    v30 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v11,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0LL);
    v31 = *p_requestVoiceData;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v31, v30, 1, 0LL);
  }
}


void __fastcall ShopPlayVoiceComponent__PlayVoice(
        ShopPlayVoiceComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t figureServantId; // w0
  int32_t SvtVoiceId; // w21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t figureServantLimitCount; // w22
  ServantVoiceMaster_o *v12; // x23
  System_Collections_Generic_List_ServantVoiceData____o *EntityShopCombine; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct ServantVoiceData_array *v20; // x1
  const MethodInfo *v21; // x1

  if ( (byte_438CF9E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1012/*"0_"*/);
    byte_438CF9E = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v5);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 Instance,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          v12 = (ServantVoiceMaster_o *)MasterData_WarQuestSelectionMaster,
          Instance = (DataManager_o *)System_String__Concat_44901936((System_String_o *)StringLiteral_1012/*"0_"*/, name, 0LL),
          !v12) )
    {
      sub_B7769C(Instance, v9);
    }
    EntityShopCombine = ServantVoiceMaster__getEntityShopCombine(
                          v12,
                          15,
                          SvtVoiceId,
                          figureServantLimitCount,
                          (System_String_o *)Instance,
                          0LL);
    if ( EntityShopCombine && EntityShopCombine->fields._size >= 1 )
      v20 = EntityShopCombine->fields._items->m_Items[0];
    else
      v20 = 0LL;
    this->fields.voicePlayingList = v20;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.voicePlayingList,
      (System_Int32_array **)v20,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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
  ShopPlayVoiceComponent_o *v2; // x19
  struct ServantVoiceData_array *voicePlayingList; // x8
  int v4; // w9
  int max_length; // w10
  ServantVoiceData_o *v6; // x8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleServantConfConponent_o *p_voicePlayer; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0

  v2 = this;
  if ( (byte_438CF9F & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_B775C4(&StringLiteral_8234/*"InvokedPlayVoiceList"*/);
    byte_438CF9F = 1;
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
      {
        v20 = sub_B776C8(this);
        sub_B77668(v20, 0LL);
      }
      v6 = voicePlayingList->m_Items[v4];
      if ( v6 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v2,
          (System_String_o *)StringLiteral_8234/*"InvokedPlayVoiceList"*/,
          v6->fields.delay,
          0LL);
        return;
      }
LABEL_10:
      sub_B7769C(this, method);
    }
  }
  this = (ShopPlayVoiceComponent_o *)v2->fields.standFigureBack;
  if ( !this )
    goto LABEL_10;
  StandFigureBack__SetFaceType((StandFigureBack_o *)this, v2->fields.defaultFaceType, 0.0, 0, 0LL);
  v2->fields.voicePlayingList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.voicePlayingList, 0LL, v7, v8, v9, v10, v11, v12);
  v2->fields.voicePlayer = 0LL;
  p_voicePlayer = (BattleServantConfConponent_o *)&v2->fields.voicePlayer;
  sub_B77560(p_voicePlayer, 0LL, v14, v15, v16, v17, v18, v19);
  p_voicePlayer[-1].fields.isEquip = 0;
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

  if ( (byte_438CF9D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CF9D = 1;
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  BattleServantConfConponent_o *p_voiceData; // x19
  System_String_o *v11; // x20
  struct System_String_o *voiceData; // t1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438CF9A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438CF9A = 1;
  }
  this->fields.requestVoiceData = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.requestVoiceData, 0LL, v2, v3, v4, v5, v6, v7);
  ShopPlayVoiceComponent__StopVoice(this, v9);
  voiceData = this->fields.voiceData;
  p_voiceData = (BattleServantConfConponent_o *)&this->fields.voiceData;
  v11 = voiceData;
  if ( voiceData )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v11, 0LL);
    p_voiceData->klass = 0LL;
    sub_B77560(p_voiceData, 0LL, v13, v14, v15, v16, v17, v18);
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
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct StandFigureBack_o **p_standFigureBack; // x19
  __int64 v35; // x2
  Il2CppObject *v36; // x0
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_o *v44; // x19
  System_Action_o *v45; // x20
  int32_t v46; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438CF9C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__);
    sub_B775C4(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
    sub_B775C4(&StringLiteral_4090/*"ChrVoice_"*/);
    byte_438CF9C = 1;
  }
  v13 = sub_B77694(ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
  ShopPlayVoiceComponent___c__DisplayClass15_0___ctor((ShopPlayVoiceComponent___c__DisplayClass15_0_o *)v13, 0LL);
  if ( !v13 )
    sub_B7769C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endReload;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)endReload, v22, v23, v24, v25, v26, v27);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 24), 0LL);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    p_standFigureBack = &this->fields.standFigureBack;
    sub_B77560(
      (BattleServantConfConponent_o *)p_standFigureBack,
      (System_Int32_array **)standFigureBack,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    *((_DWORD *)p_standFigureBack + 2) = figureServantId;
    *((_DWORD *)p_standFigureBack + 3) = figureServantLimitCount;
    *((_DWORD *)p_standFigureBack + 4) = defaultFaceType;
    v46 = figureServantId;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v35);
    v37 = (System_Int32_array **)System_String__Concat((Il2CppObject *)StringLiteral_4090/*"ChrVoice_"*/, v36, 0LL);
    p_standFigureBack[4] = (struct StandFigureBack_o *)v37;
    sub_B77560((BattleServantConfConponent_o *)(p_standFigureBack + 4), v37, v38, v39, v40, v41, v42, v43);
    v44 = (System_String_o *)p_standFigureBack[4];
    v45 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v13,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v44, v45, 1, 0LL);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct StandFigureBack_o **p_standFigureBack; // x22

  this->fields.standFigureBack = standFigureBack;
  p_standFigureBack = &this->fields.standFigureBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.standFigureBack,
    (System_Int32_array **)standFigureBack,
    *(System_String_array ***)&figureServantId,
    *(System_String_array ***)&figureServantLimitCount,
    *(System_Boolean_array ***)&defaultFaceType,
    (System_Int32_array **)method,
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438CFA1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_8234/*"InvokedPlayVoiceList"*/);
    byte_438CFA1 = 1;
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
      sub_B7769C(standFigureBack, method);
    }
    SePlayer__Destroy((SePlayer_o *)standFigureBack, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.voicePlayingList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.voicePlayingList, 0LL, v11, v12, v13, v14, v15, v16);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_36304240(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_8234/*"InvokedPlayVoiceList"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_36304080(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_8234/*"InvokedPlayVoiceList"*/,
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
  ShopPlayVoiceComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  ShopPlayVoiceComponent__EndLoadVoice(
    _4__this,
    this->fields.state,
    this->fields.isOverridePlayVoice,
    this->fields.playVoiceState,
    0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ShopPlayVoiceComponent_o *_4__this; // x0
  System_String_o *voiceData; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **requestVoiceData; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4388E7D & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388E7D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  voiceData = _4__this->fields.voiceData;
  if ( voiceData )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(voiceData, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_14;
    _4__this->fields.voiceData = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&_4__this->fields.voiceData, 0LL, v11, v12, v13, v14, v15, v16);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_14;
  }
  requestVoiceData = (System_Int32_array **)_4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = (struct System_String_o *)requestVoiceData;
    sub_B77560((BattleServantConfConponent_o *)&_4__this->fields.voiceData, requestVoiceData, v2, v3, v4, v5, v6, v7);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.requestVoiceData = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&_4__this->fields.requestVoiceData, 0LL, v18, v19, v20, v21, v22, v23);
      ActionExtensions__Call(this->fields.endReload, 0LL);
      return;
    }
LABEL_14:
    sub_B7769C(_4__this, method);
  }
}