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
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_voiceData; // x23
  System_String_o *voiceData; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_String_o *requestVoiceData; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  ShopPlayVoiceComponent_o *v27; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  System_String_o *BackVoiceMasterKey; // x21
  const MethodInfo *v31; // x1
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v33; // x3
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v35; // x2

  if ( (byte_596C899 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_12688/*"SHOP_SCENE_VOICE_WELCOME"*/);
    byte_596C899 = 1;
  }
  p_voiceData = &this->fields.voiceData;
  voiceData = this->fields.voiceData;
  if ( voiceData )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&state, isOverridePlayVoice);
    SoundManager__releaseAudioAssetStorage(voiceData, 0);
    *p_voiceData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voiceData, 0, v14, v15, v16, v17, v18, v19);
  }
  requestVoiceData = this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = requestVoiceData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.voiceData,
      (int32_t)requestVoiceData,
      (System_String_o *)isOverridePlayVoice,
      *(System_String_o **)&playVoiceState,
      (int32_t)method,
      v5,
      v6,
      v7);
    this->fields.requestVoiceData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.requestVoiceData, 0, v21, v22, v23, v24, v25, v26);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v28);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v31);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v33);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v27, (System_String_o *)StringLiteral_12688/*"SHOP_SCENE_VOICE_WELCOME"*/, v29);
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

  if ( (byte_596C898 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C898 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v5);
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
  __int64 v7; // x2
  struct ServantVoiceData_array *v8; // x8
  __int64 v9; // x9
  ServantVoiceData_o *v10; // x8
  SoundManager_c *v11; // x0
  System_String_o *voiceData; // x20
  System_String_o *id; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v15; // x22
  SePlayer_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  v2 = this;
  if ( (byte_596C896 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopPlayVoiceComponent_PlayVoiceList__);
    this = (ShopPlayVoiceComponent_o *)sub_2213A60(&SoundManager_TypeInfo);
    byte_596C896 = 1;
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
        (v8 = v2->fields.voicePlayingList) == 0) )
  {
LABEL_13:
    sub_2213CDC(this, method);
  }
  v9 = v2->fields.voicePlayingcnt;
  if ( (unsigned int)v9 >= LODWORD(v8->max_length) )
LABEL_14:
    sub_2213CE4(this);
  v10 = v8->m_Items[v9];
  if ( !v10 )
    goto LABEL_13;
  v11 = SoundManager_TypeInfo;
  voiceData = v2->fields.voiceData;
  id = v10->fields.id;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v7);
    v11 = SoundManager_TypeInfo;
  }
  DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
  v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v2, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0);
  v16 = SoundManager__playVoice_48511684(voiceData, id, DEFAULT_VOLUME, v15, 0, 0);
  v2->fields.voicePlayer = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.voicePlayer, (int32_t)v16, v17, v18, v19, v20, v21, v22);
}


void ShopPlayVoiceComponent__LoadVoice(
        ShopPlayVoiceComponent_o *this,
        int32_t figureSvtId,
        int32_t state,
        bool isOverridePlayVoice,
        int32_t playVoiceState,
        const MethodInfo *method)
{
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  bool v20; // w26
  struct System_String_o *requestVoiceData; // x8
  struct System_String_o **p_requestVoiceData; // x24
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Action_o *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  System_String_o *v34; // x20
  int32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596C891 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__);
    sub_2213A60(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
    sub_2213A60(&StringLiteral_4596/*"ChrVoice_"*/);
    byte_596C891 = 1;
  }
  v11 = sub_2213CCC(ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  v20 = isOverridePlayVoice;
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = state;
  p_requestVoiceData = &this->fields.requestVoiceData;
  requestVoiceData = this->fields.requestVoiceData;
  *(_BYTE *)(v11 + 28) = v20;
  *(_DWORD *)(v11 + 32) = playVoiceState;
  if ( !requestVoiceData && !this->fields.voiceData )
  {
    v35 = figureSvtId;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v35);
    v24 = System_String__Concat((Il2CppObject *)StringLiteral_4596/*"ChrVoice_"*/, v23, 0);
    *p_requestVoiceData = v24;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.requestVoiceData,
      (int32_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v11,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0);
    v34 = *p_requestVoiceData;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v32, v33);
    SoundManager__loadAudioAssetStorage(v34, v31, 1, 0);
  }
}


void ShopPlayVoiceComponent__PlayVoice(ShopPlayVoiceComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t figureServantId; // w0
  int32_t SvtVoiceId; // w21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x23
  int32_t figureServantLimitCount; // w22
  System_Collections_Generic_List_object__o *EntityShopCombine; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct ServantVoiceData_array *Item; // x1
  const MethodInfo *v20; // x1

  if ( (byte_596C894 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1227/*"0_"*/);
    byte_596C894 = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v5);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          Instance = (DataManager_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_1227/*"0_"*/, name, 0),
          !MasterData_object) )
    {
      sub_2213CDC(Instance, v9);
    }
    EntityShopCombine = (System_Collections_Generic_List_object__o *)ServantVoiceMaster__getEntityShopCombine(
                                                                       (ServantVoiceMaster_o *)MasterData_object,
                                                                       15,
                                                                       SvtVoiceId,
                                                                       figureServantLimitCount,
                                                                       (System_String_o *)Instance,
                                                                       0);
    if ( EntityShopCombine && EntityShopCombine->fields._size >= 1 )
      Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                EntityShopCombine,
                                                0,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    else
      Item = 0;
    this->fields.voicePlayingList = Item;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayingList,
      (int32_t)Item,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this->fields.voicePlayingcnt = -1;
    ShopPlayVoiceComponent__PlayVoiceList(this, v20);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  MissionNaviTransitionBoardItem_o *p_voicePlayer; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  v2 = this;
  if ( (byte_596C895 & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_2213A60(&StringLiteral_8299/*"InvokedPlayVoiceList"*/);
    byte_596C895 = 1;
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
        sub_2213CE4(this);
      v6 = voicePlayingList->m_Items[v4];
      if ( v6 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v2,
          (System_String_o *)StringLiteral_8299/*"InvokedPlayVoiceList"*/,
          v6->fields.delay,
          0);
        return;
      }
LABEL_10:
      sub_2213CDC(this, method);
    }
  }
  this = (ShopPlayVoiceComponent_o *)v2->fields.standFigureBack;
  if ( !this )
    goto LABEL_10;
  StandFigureBack__SetFaceType((StandFigureBack_o *)this, v2->fields.defaultFaceType, 0.0, 0, 0);
  v2->fields.voicePlayingList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.voicePlayingList, 0, v7, v8, v9, v10, v11, v12);
  v2->fields.voicePlayer = 0;
  p_voicePlayer = (MissionNaviTransitionBoardItem_o *)&v2->fields.voicePlayer;
  sub_2213A04(p_voicePlayer, 0, v14, v15, v16, v17, v18, v19);
  LOBYTE(p_voicePlayer[-1].fields._ClosedMessage_k__BackingField) = 0;
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

  if ( (byte_596C893 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C893 = 1;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  MissionNaviTransitionBoardItem_o *p_voiceData; // x19
  System_String_o *v13; // x20
  struct System_String_o *voiceData; // t1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596C890 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596C890 = 1;
  }
  this->fields.requestVoiceData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.requestVoiceData, 0, v2, v3, v4, v5, v6, v7);
  ShopPlayVoiceComponent__StopVoice(this, v9);
  voiceData = this->fields.voiceData;
  p_voiceData = (MissionNaviTransitionBoardItem_o *)&this->fields.voiceData;
  v13 = voiceData;
  if ( voiceData )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v10, v11);
    SoundManager__releaseAudioAssetStorage(v13, 0);
    p_voiceData->klass = 0;
    sub_2213A04(p_voiceData, 0, v15, v16, v17, v18, v19, v20);
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
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x0
  struct System_String_o *v35; // x0
  struct System_String_o **p_requestVoiceData; // x19
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x19
  System_Action_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  int32_t v47; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596C892 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__);
    sub_2213A60(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
    sub_2213A60(&StringLiteral_4596/*"ChrVoice_"*/);
    byte_596C892 = 1;
  }
  v13 = sub_2213CCC(ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    sub_2213CDC(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endReload;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)endReload, v22, v23, v24, v25, v26, v27);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 24), 0);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.standFigureBack,
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
    v47 = figureServantId;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v47);
    v35 = System_String__Concat((Il2CppObject *)StringLiteral_4596/*"ChrVoice_"*/, v34, 0);
    this->fields.requestVoiceData = v35;
    p_requestVoiceData = &this->fields.requestVoiceData;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_requestVoiceData, (int32_t)v35, v37, v38, v39, v40, v41, v42);
    v43 = *p_requestVoiceData;
    v44 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v13,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v45, v46);
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
  bool v6; // w6
  bool v7; // w7
  struct StandFigureBack_o **p_standFigureBack; // x22

  this->fields.standFigureBack = standFigureBack;
  p_standFigureBack = &this->fields.standFigureBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.standFigureBack,
    (int32_t)standFigureBack,
    *(System_String_o **)&figureServantId,
    *(System_String_o **)&figureServantLimitCount,
    defaultFaceType,
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596C897 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8299/*"InvokedPlayVoiceList"*/);
    byte_596C897 = 1;
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
      sub_2213CDC(standFigureBack, method);
    }
    SePlayer__Destroy((SePlayer_o *)standFigureBack, 0);
    this->fields.voicePlayer = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer, 0, v5, v6, v7, v8, v9, v10);
    this->fields.voicePlayingList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayingList, 0, v11, v12, v13, v14, v15, v16);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_83443464(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_8299/*"InvokedPlayVoiceList"*/,
         0) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_83442996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_8299/*"InvokedPlayVoiceList"*/,
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
    sub_2213CDC(this, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ShopPlayVoiceComponent_o *_4__this; // x0
  System_String_o *voiceData; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_String_o *requestVoiceData; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596C89A & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596C89A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  voiceData = _4__this->fields.voiceData;
  if ( voiceData )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
    SoundManager__releaseAudioAssetStorage(voiceData, 0);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
    _4__this->fields.voiceData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.voiceData, 0, v11, v12, v13, v14, v15, v16);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
  }
  requestVoiceData = _4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = requestVoiceData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.voiceData,
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.requestVoiceData,
        0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      ActionExtensions__Call(this->fields.endReload, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(_4__this, method);
  }
}