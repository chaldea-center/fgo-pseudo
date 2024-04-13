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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_String_o **p_voiceData; // x23
  System_String_o *voiceData; // x24
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **requestVoiceData; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  ShopPlayVoiceComponent_o *v30; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  System_String_o *BackVoiceMasterKey; // x21
  const MethodInfo *v34; // x1
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v36; // x3
  System_String_o *VoiceFromMaster; // x1
  const MethodInfo *v38; // x2

  if ( (byte_42EA698 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, state, isOverridePlayVoice, *(_QWORD *)&playVoiceState);
    sub_B5D5C4(&StringLiteral_12344/*"SHOP_SCENE_VOICE_WELCOME"*/, v12, v13, v14);
    byte_42EA698 = 1;
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voiceData, 0LL, v17, v18, v19, v20, v21, v22);
  }
  requestVoiceData = (System_Int32_array **)this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = (struct System_String_o *)requestVoiceData;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.voiceData,
      requestVoiceData,
      (System_String_array **)isOverridePlayVoice,
      *(System_String_array ***)&playVoiceState,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.requestVoiceData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.requestVoiceData, 0LL, v24, v25, v26, v27, v28, v29);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v31);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v34);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v36);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v30, (System_String_o *)StringLiteral_12344/*"SHOP_SCENE_VOICE_WELCOME"*/, v32);
      ShopPlayVoiceComponent__PlayVoice(this, VoiceFromMaster, v38);
    }
  }
}


System_String_o *__fastcall ShopPlayVoiceComponent__GetVoiceFromMaster(
        ShopPlayVoiceComponent_o *this,
        System_String_o *masterKey,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EA697 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, (_DWORD)masterKey, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EA697 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
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
  int v2; // w2
  __int64 v3; // x3
  ShopPlayVoiceComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ServantVoiceData_array *voicePlayingList; // x8
  __int64 voicePlayingcnt; // x9
  int32_t standFigureBack_high; // w20
  float FadeTime; // s0
  struct ServantVoiceData_array *v15; // x8
  __int64 v16; // x9
  ServantVoiceData_o *v17; // x8
  System_String_o *voiceData; // x20
  System_String_o *id; // x21
  SoundManager_c *v20; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v22; // x22
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0

  v4 = this;
  if ( (byte_42EA695 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ShopPlayVoiceComponent_PlayVoiceList__, v5, v6, v7);
    this = (ShopPlayVoiceComponent_o *)sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EA695 = 1;
  }
  voicePlayingList = v4->fields.voicePlayingList;
  if ( !voicePlayingList )
    goto LABEL_14;
  voicePlayingcnt = v4->fields.voicePlayingcnt;
  if ( (unsigned int)voicePlayingcnt >= voicePlayingList->max_length )
    goto LABEL_15;
  this = (ShopPlayVoiceComponent_o *)voicePlayingList->m_Items[voicePlayingcnt];
  if ( !this
    || (standFigureBack_high = HIDWORD(this->fields.standFigureBack),
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL),
        (this = (ShopPlayVoiceComponent_o *)v4->fields.standFigureBack) == 0LL)
    || (StandFigureBack__SetFaceType((StandFigureBack_o *)this, standFigureBack_high, FadeTime, 0, 0LL),
        (v15 = v4->fields.voicePlayingList) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(this, method);
  }
  v16 = v4->fields.voicePlayingcnt;
  if ( (unsigned int)v16 >= v15->max_length )
  {
LABEL_15:
    v30 = sub_B5D6C8(this);
    sub_B5D668(v30, 0LL);
  }
  v17 = v15->m_Items[v16];
  if ( !v17 )
    goto LABEL_14;
  voiceData = v4->fields.voiceData;
  id = v17->fields.id;
  v20 = SoundManager_TypeInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v20 = SoundManager_TypeInfo;
  }
  DEFAULT_VOLUME = v20->static_fields->DEFAULT_VOLUME;
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v4, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0LL);
  v23 = (System_Int32_array **)SoundManager__playVoice_23391328(voiceData, id, DEFAULT_VOLUME, v22, 0LL);
  v4->fields.voicePlayer = (struct SePlayer_o *)v23;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.voicePlayer, v23, v24, v25, v26, v27, v28, v29);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_String_o **p_requestVoiceData; // x20
  Il2CppObject *v36; // x0
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Action_o *v44; // x19
  System_String_o *v45; // x20
  int32_t v46; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA690 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, figureSvtId, state, isOverridePlayVoice);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__, v17, v18, v19);
    sub_B5D5C4(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_4030/*"ChrVoice_"*/, v23, v24, v25);
    byte_42EA690 = 1;
  }
  v26 = sub_B5D694(ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo);
  ShopPlayVoiceComponent___c__DisplayClass14_0___ctor((ShopPlayVoiceComponent___c__DisplayClass14_0_o *)v26, 0LL);
  if ( !v26 )
    sub_B5D69C(v27, v28);
  *(_QWORD *)(v26 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v26 + 24) = state;
  *(_BYTE *)(v26 + 28) = isOverridePlayVoice;
  *(_DWORD *)(v26 + 32) = playVoiceState;
  p_requestVoiceData = &this->fields.requestVoiceData;
  if ( !this->fields.requestVoiceData && !this->fields.voiceData )
  {
    v46 = figureSvtId;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    v37 = (System_Int32_array **)System_String__Concat((Il2CppObject *)StringLiteral_4030/*"ChrVoice_"*/, v36, 0LL);
    *p_requestVoiceData = (struct System_String_o *)v37;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.requestVoiceData, v37, v38, v39, v40, v41, v42, v43);
    v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v26,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0LL);
    v45 = *p_requestVoiceData;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v45, v44, 1, 0LL);
  }
}


void __fastcall ShopPlayVoiceComponent__PlayVoice(
        ShopPlayVoiceComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  const MethodInfo *v18; // x1
  int32_t figureServantId; // w0
  int32_t SvtVoiceId; // w21
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t figureServantLimitCount; // w22
  ServantVoiceMaster_o *v25; // x23
  System_Collections_Generic_List_ServantVoiceData____o *EntityShopCombine; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct ServantVoiceData_array *v33; // x1
  const MethodInfo *v34; // x1

  if ( (byte_42EA693 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1005/*"0_"*/, v15, v16, v17);
    byte_42EA693 = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v18);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 Instance,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          v25 = (ServantVoiceMaster_o *)MasterData_WarQuestSelectionMaster,
          Instance = (DataManager_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_1005/*"0_"*/, name, 0LL),
          !v25) )
    {
      sub_B5D69C(Instance, v22);
    }
    EntityShopCombine = ServantVoiceMaster__getEntityShopCombine(
                          v25,
                          15,
                          SvtVoiceId,
                          figureServantLimitCount,
                          (System_String_o *)Instance,
                          0LL);
    if ( EntityShopCombine && EntityShopCombine->fields._size >= 1 )
      v33 = EntityShopCombine->fields._items->m_Items[0];
    else
      v33 = 0LL;
    this->fields.voicePlayingList = v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.voicePlayingList,
      (System_Int32_array **)v33,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    this->fields.voicePlayingcnt = -1;
    ShopPlayVoiceComponent__PlayVoiceList(this, v34);
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
  int v2; // w2
  __int64 v3; // x3
  ShopPlayVoiceComponent_o *v4; // x19
  struct ServantVoiceData_array *voicePlayingList; // x8
  int v6; // w9
  int max_length; // w10
  ServantVoiceData_o *v8; // x8
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleServantConfConponent_o *p_voicePlayer; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0

  v4 = this;
  if ( (byte_42EA694 & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_B5D5C4(&StringLiteral_8163/*"InvokedPlayVoiceList"*/, (_DWORD)method, v2, v3);
    byte_42EA694 = 1;
  }
  voicePlayingList = v4->fields.voicePlayingList;
  v6 = v4->fields.voicePlayingcnt + 1;
  v4->fields.voicePlayingcnt = v6;
  if ( voicePlayingList )
  {
    max_length = voicePlayingList->max_length;
    if ( v6 < max_length )
    {
      if ( v6 >= (unsigned int)max_length )
      {
        v22 = sub_B5D6C8(this);
        sub_B5D668(v22, 0LL);
      }
      v8 = voicePlayingList->m_Items[v6];
      if ( v8 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v4,
          (System_String_o *)StringLiteral_8163/*"InvokedPlayVoiceList"*/,
          v8->fields.delay,
          0LL);
        return;
      }
LABEL_10:
      sub_B5D69C(this, method);
    }
  }
  this = (ShopPlayVoiceComponent_o *)v4->fields.standFigureBack;
  if ( !this )
    goto LABEL_10;
  StandFigureBack__SetFaceType((StandFigureBack_o *)this, v4->fields.defaultFaceType, 0.0, 0, 0LL);
  v4->fields.voicePlayingList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.voicePlayingList, 0LL, v9, v10, v11, v12, v13, v14);
  v4->fields.voicePlayer = 0LL;
  p_voicePlayer = (BattleServantConfConponent_o *)&v4->fields.voicePlayer;
  sub_B5D560(p_voicePlayer, 0LL, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_42EA692 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)name, flag, method);
    byte_42EA692 = 1;
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

  if ( (byte_42EA68F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EA68F = 1;
  }
  this->fields.requestVoiceData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.requestVoiceData, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_voiceData, 0LL, v13, v14, v15, v16, v17, v18);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x23
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct StandFigureBack_o **p_standFigureBack; // x19
  Il2CppObject *v50; // x0
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_o *v58; // x19
  System_Action_o *v59; // x20
  int32_t v60; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EA691 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)standFigureBack, figureServantId, *(_QWORD *)&figureServantLimitCount);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SoundManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__, v19, v20, v21);
    sub_B5D5C4(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_4030/*"ChrVoice_"*/, v25, v26, v27);
    byte_42EA691 = 1;
  }
  v28 = sub_B5D694(ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo);
  ShopPlayVoiceComponent___c__DisplayClass15_0___ctor((ShopPlayVoiceComponent___c__DisplayClass15_0_o *)v28, 0LL);
  if ( !v28 )
    sub_B5D69C(v29, v30);
  *(_QWORD *)(v28 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v28 + 24) = endReload;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)endReload, v37, v38, v39, v40, v41, v42);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v28 + 24), 0LL);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    p_standFigureBack = &this->fields.standFigureBack;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_standFigureBack,
      (System_Int32_array **)standFigureBack,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    *((_DWORD *)p_standFigureBack + 2) = figureServantId;
    *((_DWORD *)p_standFigureBack + 3) = figureServantLimitCount;
    *((_DWORD *)p_standFigureBack + 4) = defaultFaceType;
    v60 = figureServantId;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v51 = (System_Int32_array **)System_String__Concat((Il2CppObject *)StringLiteral_4030/*"ChrVoice_"*/, v50, 0LL);
    p_standFigureBack[4] = (struct StandFigureBack_o *)v51;
    sub_B5D560((BattleServantConfConponent_o *)(p_standFigureBack + 4), v51, v52, v53, v54, v55, v56, v57);
    v58 = (System_String_o *)p_standFigureBack[4];
    v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)v28,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v58, v59, 1, 0LL);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  struct SePlayer_o *voicePlayer; // x8
  StandFigureBack_o *standFigureBack; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EA696 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8163/*"InvokedPlayVoiceList"*/, (_DWORD)method, v2, v3);
    byte_42EA696 = 1;
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
      sub_B5D69C(standFigureBack, method);
    }
    SePlayer__Destroy((SePlayer_o *)standFigureBack, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.voicePlayingList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voicePlayingList, 0LL, v13, v14, v15, v16, v17, v18);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_35614496(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_8163/*"InvokedPlayVoiceList"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_8163/*"InvokedPlayVoiceList"*/,
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  struct ShopPlayVoiceComponent_o *_4__this; // x0
  System_String_o *voiceData; // x20
  struct System_String_o *requestVoiceData; // x1

  if ( (byte_42E5DCA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5DCA = 1;
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
    sub_B5D560(&_4__this->fields.voiceData);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_14;
  }
  requestVoiceData = _4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = requestVoiceData;
    sub_B5D560(&_4__this->fields.voiceData);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.requestVoiceData = 0LL;
      sub_B5D560(&_4__this->fields.requestVoiceData);
      ActionExtensions__Call(this->fields.endReload, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(_4__this, method);
  }
}