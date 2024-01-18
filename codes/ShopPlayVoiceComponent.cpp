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
  __int64 v12; // x1
  struct System_String_o **p_voiceData; // x23
  System_String_o *voiceData; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **requestVoiceData; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  ShopPlayVoiceComponent_o *v28; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  System_String_o *BackVoiceMasterKey; // x21
  const MethodInfo *v32; // x1
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v34; // x3
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v36; // x2

  if ( (byte_41891B2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&StringLiteral_12197/*"SHOP_SCENE_VOICE_WELCOME"*/, v12);
    byte_41891B2 = 1;
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voiceData, 0LL, v15, v16, v17, v18, v19, v20);
  }
  requestVoiceData = (System_Int32_array **)this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = (struct System_String_o *)requestVoiceData;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.voiceData,
      requestVoiceData,
      (System_String_array **)isOverridePlayVoice,
      *(System_String_array ***)&playVoiceState,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.requestVoiceData = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.requestVoiceData, 0LL, v22, v23, v24, v25, v26, v27);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v29);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v32);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v34);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v28, (System_String_o *)StringLiteral_12197/*"SHOP_SCENE_VOICE_WELCOME"*/, v30);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_41891B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantStrMaster___, masterKey);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_41891B1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
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
  int32_t standFigureBack_high; // w20
  float FadeTime; // s0
  struct ServantVoiceData_array *v9; // x8
  __int64 v10; // x9
  ServantVoiceData_o *v11; // x8
  System_String_o *voiceData; // x20
  System_String_o *id; // x21
  SoundManager_c *v14; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v16; // x22
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0

  v2 = this;
  if ( (byte_41891AF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ShopPlayVoiceComponent_PlayVoiceList__, v3);
    this = (ShopPlayVoiceComponent_o *)sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41891AF = 1;
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
        (v9 = v2->fields.voicePlayingList) == 0LL) )
  {
LABEL_14:
    sub_B2C434(this, method);
  }
  v10 = v2->fields.voicePlayingcnt;
  if ( (unsigned int)v10 >= v9->max_length )
  {
LABEL_15:
    v24 = sub_B2C460(this);
    sub_B2C400(v24, 0LL);
  }
  v11 = v9->m_Items[v10];
  if ( !v11 )
    goto LABEL_14;
  voiceData = v2->fields.voiceData;
  id = v11->fields.id;
  v14 = SoundManager_TypeInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v14 = SoundManager_TypeInfo;
  }
  DEFAULT_VOLUME = v14->static_fields->DEFAULT_VOLUME;
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v2, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0LL);
  v17 = (System_Int32_array **)SoundManager__playVoice_24786800(voiceData, id, DEFAULT_VOLUME, v16, 0LL);
  v2->fields.voicePlayer = (struct SePlayer_o *)v17;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.voicePlayer, v17, v18, v19, v20, v21, v22, v23);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_String_o **p_requestVoiceData; // x20
  Il2CppObject *v26; // x0
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Action_o *v34; // x19
  System_String_o *v35; // x20
  int32_t v36; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41891AA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&figureSvtId);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    sub_B2C35C(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__, v13);
    sub_B2C35C(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_3963/*"ChrVoice_"*/, v15);
    byte_41891AA = 1;
  }
  v16 = sub_B2C42C(ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
  ShopPlayVoiceComponent___c__DisplayClass14_0___ctor((ShopPlayVoiceComponent___c__DisplayClass14_0_o *)v16, 0LL);
  if ( !v16 )
    sub_B2C434(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 24) = state;
  *(_BYTE *)(v16 + 28) = isOverridePlayVoice;
  *(_DWORD *)(v16 + 32) = playVoiceState;
  p_requestVoiceData = &this->fields.requestVoiceData;
  if ( !this->fields.requestVoiceData && !this->fields.voiceData )
  {
    v36 = figureSvtId;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
    v27 = (System_Int32_array **)System_String__Concat((Il2CppObject *)StringLiteral_3963/*"ChrVoice_"*/, v26, 0LL);
    *p_requestVoiceData = (struct System_String_o *)v27;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.requestVoiceData, v27, v28, v29, v30, v31, v32, v33);
    v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v16,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0LL);
    v35 = *p_requestVoiceData;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v35, v34, 1, 0LL);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t figureServantLimitCount; // w22
  ServantVoiceMaster_o *v16; // x23
  System_Collections_Generic_List_ServantVoiceData____o *EntityShopCombine; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct ServantVoiceData_array *v24; // x1
  const MethodInfo *v25; // x1

  if ( (byte_41891AD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, name);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_985/*"0_"*/, v8);
    byte_41891AD = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v9);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 Instance,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          v16 = (ServantVoiceMaster_o *)MasterData_WarQuestSelectionMaster,
          Instance = (DataManager_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_985/*"0_"*/, name, 0LL),
          !v16) )
    {
      sub_B2C434(Instance, v13);
    }
    EntityShopCombine = ServantVoiceMaster__getEntityShopCombine(
                          v16,
                          15,
                          SvtVoiceId,
                          figureServantLimitCount,
                          (System_String_o *)Instance,
                          0LL);
    if ( EntityShopCombine && EntityShopCombine->fields._size >= 1 )
      v24 = EntityShopCombine->fields._items->m_Items[0];
    else
      v24 = 0LL;
    this->fields.voicePlayingList = v24;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.voicePlayingList,
      (System_Int32_array **)v24,
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
  if ( (byte_41891AE & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_B2C35C(&StringLiteral_8079/*"InvokedPlayVoiceList"*/, method);
    byte_41891AE = 1;
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
        v20 = sub_B2C460(this);
        sub_B2C400(v20, 0LL);
      }
      v6 = voicePlayingList->m_Items[v4];
      if ( v6 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v2,
          (System_String_o *)StringLiteral_8079/*"InvokedPlayVoiceList"*/,
          v6->fields.delay,
          0LL);
        return;
      }
LABEL_10:
      sub_B2C434(this, method);
    }
  }
  this = (ShopPlayVoiceComponent_o *)v2->fields.standFigureBack;
  if ( !this )
    goto LABEL_10;
  StandFigureBack__SetFaceType((StandFigureBack_o *)this, v2->fields.defaultFaceType, 0.0, 0, 0LL);
  v2->fields.voicePlayingList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.voicePlayingList, 0LL, v7, v8, v9, v10, v11, v12);
  v2->fields.voicePlayer = 0LL;
  p_voicePlayer = (BattleServantConfConponent_o *)&v2->fields.voicePlayer;
  sub_B2C2F8(p_voicePlayer, 0LL, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_41891AC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, name);
    byte_41891AC = 1;
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

  if ( (byte_41891A9 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41891A9 = 1;
  }
  this->fields.requestVoiceData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.requestVoiceData, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_voiceData, 0LL, v13, v14, v15, v16, v17, v18);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct StandFigureBack_o **p_standFigureBack; // x19
  Il2CppObject *v40; // x0
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *v48; // x19
  System_Action_o *v49; // x20
  int32_t v50; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_41891AB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, standFigureBack);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&SoundManager_TypeInfo, v14);
    sub_B2C35C(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__, v15);
    sub_B2C35C(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_3963/*"ChrVoice_"*/, v17);
    byte_41891AB = 1;
  }
  v18 = sub_B2C42C(ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
  ShopPlayVoiceComponent___c__DisplayClass15_0___ctor((ShopPlayVoiceComponent___c__DisplayClass15_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B2C434(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = endReload;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)endReload, v27, v28, v29, v30, v31, v32);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    p_standFigureBack = &this->fields.standFigureBack;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_standFigureBack,
      (System_Int32_array **)standFigureBack,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    *((_DWORD *)p_standFigureBack + 2) = figureServantId;
    *((_DWORD *)p_standFigureBack + 3) = figureServantLimitCount;
    *((_DWORD *)p_standFigureBack + 4) = defaultFaceType;
    v50 = figureServantId;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    v41 = (System_Int32_array **)System_String__Concat((Il2CppObject *)StringLiteral_3963/*"ChrVoice_"*/, v40, 0LL);
    p_standFigureBack[4] = (struct StandFigureBack_o *)v41;
    sub_B2C2F8((BattleServantConfConponent_o *)(p_standFigureBack + 4), v41, v42, v43, v44, v45, v46, v47);
    v48 = (System_String_o *)p_standFigureBack[4];
    v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v49,
      (Il2CppObject *)v18,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v48, v49, 1, 0LL);
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
  sub_B2C2F8(
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

  if ( (byte_41891B0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8079/*"InvokedPlayVoiceList"*/, method);
    byte_41891B0 = 1;
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
      sub_B2C434(standFigureBack, method);
    }
    SePlayer__Destroy((SePlayer_o *)standFigureBack, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.voicePlayingList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voicePlayingList, 0LL, v11, v12, v13, v14, v15, v16);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_35309156(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_8079/*"InvokedPlayVoiceList"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35308996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_8079/*"InvokedPlayVoiceList"*/,
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
    sub_B2C434(0LL, method);
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
  struct ShopPlayVoiceComponent_o *_4__this; // x0
  System_String_o *voiceData; // x20
  struct System_String_o *requestVoiceData; // x1

  if ( (byte_418544E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418544E = 1;
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
    sub_B2C2F8(&_4__this->fields.voiceData, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_14;
  }
  requestVoiceData = _4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = requestVoiceData;
    sub_B2C2F8(&_4__this->fields.voiceData, requestVoiceData);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.requestVoiceData = 0LL;
      sub_B2C2F8(&_4__this->fields.requestVoiceData, 0LL);
      ActionExtensions__Call(this->fields.endReload, 0LL);
      return;
    }
LABEL_14:
    sub_B2C434(_4__this, method);
  }
}