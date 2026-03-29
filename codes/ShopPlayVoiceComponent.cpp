void ShopPlayVoiceComponent___ctor(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool ShopPlayVoiceComponent__CheckVoiceFlag(ShopPlayVoiceComponent_o *this, int32_t flag, const MethodInfo *method)
{
  return !this->fields.isPlayingVoice && (this->fields.voicePlayOnce & flag) == 0;
}


void ShopPlayVoiceComponent__EndLoadVoice(
        ShopPlayVoiceComponent_o *this,
        int32_t state,
        bool isOverridePlayVoice,
        int32_t playVoiceState,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o **p_voiceData; // x23
  System_String_o *voiceData; // x24
  char v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_String_o *requestVoiceData; // x1
  char v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  ShopPlayVoiceComponent_o *v27; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  System_String_o *BackVoiceMasterKey; // x21
  const MethodInfo *v31; // x1
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v33; // x3
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v35; // x2

  if ( (byte_4D2CB8A & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12259/*"SHOP_SCENE_VOICE_WELCOME"*/);
    byte_4D2CB8A = 1;
  }
  p_voiceData = &this->fields.voiceData;
  voiceData = this->fields.voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(voiceData, 0);
    *p_voiceData = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceData, 0, v14, v15, v16, v17, v18, v19);
  }
  requestVoiceData = this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = requestVoiceData;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.voiceData,
      (int32_t)requestVoiceData,
      isOverridePlayVoice,
      playVoiceState,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.requestVoiceData = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.requestVoiceData, 0, v21, v22, v23, v24, v25, v26);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v28);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v31);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v33);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v27, (System_String_o *)StringLiteral_12259/*"SHOP_SCENE_VOICE_WELCOME"*/, v29);
      ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v35);
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

  if ( (byte_4D2CB89 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CB89 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v5);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  v2 = this;
  if ( (byte_4D2CB87 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ShopPlayVoiceComponent_PlayVoiceList__);
    this = (ShopPlayVoiceComponent_o *)sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2CB87 = 1;
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
    sub_1C93D2C(this, method);
  }
  v8 = v2->fields.voicePlayingcnt;
  if ( (unsigned int)v8 >= LODWORD(v7->max_length) )
LABEL_14:
    sub_1C93D34(this);
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
  v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v2, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0);
  v15 = SoundManager__playVoice_42249560(voiceData, id, DEFAULT_VOLUME, v14, 0, 0);
  v2->fields.voicePlayer = v15;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.voicePlayer, (int32_t)v15, v16, v17, v18, v19, v20, v21);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_String_o **p_requestVoiceData; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Action_o *v29; // x19
  System_String_o *v30; // x20
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2CB82 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__);
    sub_1C93AD4(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_4444/*"ChrVoice_"*/);
    byte_4D2CB82 = 1;
  }
  v11 = sub_1C93D20(ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C93D2C(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = state;
  *(_BYTE *)(v11 + 28) = isOverridePlayVoice;
  *(_DWORD *)(v11 + 32) = playVoiceState;
  p_requestVoiceData = &this->fields.requestVoiceData;
  if ( !this->fields.requestVoiceData && !this->fields.voiceData )
  {
    v31 = figureSvtId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v22 = System_String__Concat((Il2CppObject *)StringLiteral_4444/*"ChrVoice_"*/, v21, 0);
    *p_requestVoiceData = v22;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.requestVoiceData,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v11,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0);
    v30 = *p_requestVoiceData;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v30, v29, 1, 0);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct ServantVoiceData_array *Item; // x1
  const MethodInfo *v21; // x1

  if ( (byte_4D2CB85 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1145/*"0_"*/);
    byte_4D2CB85 = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v5);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          v12 = (ServantVoiceMaster_o *)MasterData_object,
          Instance = (DataManager_o *)System_String__Concat_64425724((System_String_o *)StringLiteral_1145/*"0_"*/, name, 0),
          !v12) )
    {
      sub_1C93D2C(Instance, v9);
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
                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    else
      Item = 0;
    this->fields.voicePlayingList = Item;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.voicePlayingList,
      (int32_t)Item,
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  GrandQuestFolderBoardItem_o *p_voicePlayer; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  v2 = this;
  if ( (byte_4D2CB86 & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_1C93AD4(&StringLiteral_8001/*"InvokedPlayVoiceList"*/);
    byte_4D2CB86 = 1;
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
        sub_1C93D34(this);
      v6 = voicePlayingList->m_Items[v4];
      if ( v6 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v2,
          (System_String_o *)StringLiteral_8001/*"InvokedPlayVoiceList"*/,
          v6->fields.delay,
          0);
        return;
      }
LABEL_10:
      sub_1C93D2C(this, method);
    }
  }
  this = (ShopPlayVoiceComponent_o *)v2->fields.standFigureBack;
  if ( !this )
    goto LABEL_10;
  StandFigureBack__SetFaceType((StandFigureBack_o *)this, v2->fields.defaultFaceType, 0.0, 0, 0);
  v2->fields.voicePlayingList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.voicePlayingList, 0, v7, v8, v9, v10, v11, v12);
  v2->fields.voicePlayer = 0;
  p_voicePlayer = (GrandQuestFolderBoardItem_o *)&v2->fields.voicePlayer;
  sub_1C93A78(p_voicePlayer, 0, v14, v15, v16, v17, v18, v19);
  LOBYTE(p_voicePlayer[-1].fields._IconId_k__BackingField) = 0;
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
  System_String_o *VoiceFromMaster; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4D2CB84 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CB84 = 1;
  }
  if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_1/*""*/, 0) )
    return 0;
  ShopPlayVoiceComponent__StopVoice(this, v7);
  if ( this->fields.isPlayingVoice || (this->fields.voicePlayOnce & flag) != 0 )
    return 0;
  VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v8, name, v9);
  ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v12);
  this->fields.voicePlayOnce |= flag;
  return 1;
}


void ShopPlayVoiceComponent__QuitShopVoice(ShopPlayVoiceComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1
  GrandQuestFolderBoardItem_o *p_voiceData; // x19
  System_String_o *v11; // x20
  struct System_String_o *voiceData; // t1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D2CB81 & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2CB81 = 1;
  }
  this->fields.requestVoiceData = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.requestVoiceData, 0, v2, v3, v4, v5, v6, v7);
  ShopPlayVoiceComponent__StopVoice(this, v9);
  voiceData = this->fields.voiceData;
  p_voiceData = (GrandQuestFolderBoardItem_o *)&this->fields.voiceData;
  v11 = voiceData;
  if ( voiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v11, 0);
    p_voiceData->klass = 0;
    sub_1C93A78(p_voiceData, 0, v13, v14, v15, v16, v17, v18);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x0
  struct System_String_o *v35; // x0
  struct System_String_o **p_requestVoiceData; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_String_o *v43; // x19
  System_Action_o *v44; // x20
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2CB83 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__);
    sub_1C93AD4(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_4444/*"ChrVoice_"*/);
    byte_4D2CB83 = 1;
  }
  v13 = sub_1C93D20(ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    sub_1C93D2C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endReload;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)endReload, v22, v23, v24, v25, v26, v27);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 24), 0);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.standFigureBack,
      (int32_t)standFigureBack,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    this->fields.figureServantId = figureServantId;
    this->fields.figureServantLimitCount = figureServantLimitCount;
    this->fields.defaultFaceType = defaultFaceType;
    v45 = figureServantId;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    v35 = System_String__Concat((Il2CppObject *)StringLiteral_4444/*"ChrVoice_"*/, v34, 0);
    this->fields.requestVoiceData = v35;
    p_requestVoiceData = &this->fields.requestVoiceData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_requestVoiceData, (int32_t)v35, v37, v38, v39, v40, v41, v42);
    v43 = *p_requestVoiceData;
    v44 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v13,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v43, v44, 1, 0);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct StandFigureBack_o **p_standFigureBack; // x22

  this->fields.standFigureBack = standFigureBack;
  p_standFigureBack = &this->fields.standFigureBack;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.standFigureBack,
    (int32_t)standFigureBack,
    figureServantId,
    figureServantLimitCount,
    *(System_String_o **)&defaultFaceType,
    (int32_t)method,
    v6,
    v7);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2CB88 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8001/*"InvokedPlayVoiceList"*/);
    byte_4D2CB88 = 1;
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
      sub_1C93D2C(standFigureBack, method);
    }
    SePlayer__Destroy((SePlayer_o *)standFigureBack, 0);
    this->fields.voicePlayer = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayer, 0, v5, v6, v7, v8, v9, v10);
    this->fields.voicePlayingList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayingList, 0, v11, v12, v13, v14, v15, v16);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_72104544(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_8001/*"InvokedPlayVoiceList"*/,
         0) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_72104408(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_8001/*"InvokedPlayVoiceList"*/,
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
    sub_1C93D2C(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ShopPlayVoiceComponent_o *_4__this; // x0
  System_String_o *voiceData; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_String_o *requestVoiceData; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2CB8B & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2CB8B = 1;
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&_4__this->fields.voiceData, 0, v11, v12, v13, v14, v15, v16);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
  }
  requestVoiceData = _4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = requestVoiceData;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.voiceData,
      (int32_t)requestVoiceData,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.requestVoiceData = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&_4__this->fields.requestVoiceData, 0, v18, v19, v20, v21, v22, v23);
      ActionExtensions__Call(this->fields.endReload, 0);
      return;
    }
LABEL_13:
    sub_1C93D2C(_4__this, method);
  }
}