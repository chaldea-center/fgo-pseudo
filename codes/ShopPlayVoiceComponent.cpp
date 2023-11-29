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

  if ( (byte_40FB776 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&StringLiteral_12144, v12);
    byte_40FB776 = 1;
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voiceData, 0LL, v15, v16, v17, v18, v19, v20);
  }
  requestVoiceData = (System_Int32_array **)this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    *p_voiceData = (struct System_String_o *)requestVoiceData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.voiceData,
      requestVoiceData,
      (System_String_array **)isOverridePlayVoice,
      *(System_String_array ***)&playVoiceState,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.requestVoiceData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.requestVoiceData, 0LL, v22, v23, v24, v25, v26, v27);
    if ( isOverridePlayVoice )
    {
      BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(playVoiceState, v29);
      BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(playVoiceState, v32);
      ShopPlayVoiceComponent__PlayVoiceOnce(this, BackVoiceMasterKey, BackVoiceFlag, v34);
    }
    else if ( state != 9 )
    {
      VoiceFromMaster = ShopPlayVoiceComponent__GetVoiceFromMaster(v28, (System_String_o *)StringLiteral_12144, v30);
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
  WebViewManager_o *Instance; // x0
  ConstantStrMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FB775 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, masterKey);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FB775 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ConstantStrMaster__GetRandomVoice(MasterData_WarQuestSelectionMaster, masterKey, 0LL);
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
  ServantVoiceData_o *v8; // x0
  int32_t face; // w20
  float FadeTime; // s0
  StandFigureBack_o *standFigureBack; // x0
  __int64 v12; // x3
  __int64 v13; // x4
  struct ServantVoiceData_array *v14; // x8
  __int64 v15; // x9
  ServantVoiceData_o *v16; // x8
  System_String_o *voiceData; // x20
  System_String_o *id; // x21
  SoundManager_c *v19; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v21; // x22
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  v3 = this;
  if ( (byte_40FB773 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ShopPlayVoiceComponent_PlayVoiceList__, v4);
    this = (ShopPlayVoiceComponent_o *)sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FB773 = 1;
  }
  voicePlayingList = v3->fields.voicePlayingList;
  if ( !voicePlayingList )
    goto LABEL_14;
  voicePlayingcnt = v3->fields.voicePlayingcnt;
  if ( (unsigned int)voicePlayingcnt >= voicePlayingList->max_length )
    goto LABEL_15;
  v8 = voicePlayingList->m_Items[voicePlayingcnt];
  if ( !v8
    || (face = v8->fields.face,
        FadeTime = ServantVoiceData__GetFadeTime(v8, 0LL),
        (standFigureBack = v3->fields.standFigureBack) == 0LL)
    || (StandFigureBack__SetFaceType(standFigureBack, face, FadeTime, 0, 0LL), (v14 = v3->fields.voicePlayingList) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v15 = v3->fields.voicePlayingcnt;
  if ( (unsigned int)v15 >= v14->max_length )
  {
LABEL_15:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v16 = v14->m_Items[v15];
  if ( !v16 )
    goto LABEL_14;
  voiceData = v3->fields.voiceData;
  id = v16->fields.id;
  v19 = SoundManager_TypeInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v19 = SoundManager_TypeInfo;
  }
  DEFAULT_VOLUME = v19->static_fields->DEFAULT_VOLUME;
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v12, v13);
  System_Action___ctor(v21, (Il2CppObject *)v3, Method_ShopPlayVoiceComponent_PlayVoiceList__, 0LL);
  v22 = (System_Int32_array **)SoundManager__playVoice_24824004(voiceData, id, DEFAULT_VOLUME, v21, 0LL);
  v3->fields.voicePlayer = (struct SePlayer_o *)v22;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.voicePlayer, v22, v23, v24, v25, v26, v27, v28);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_String_o **p_requestVoiceData; // x20
  Il2CppObject *v24; // x0
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *v36; // x19
  System_String_o *v37; // x20
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB76E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&figureSvtId);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    sub_B16FFC(&Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__, v13);
    sub_B16FFC(&ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_3947, v15);
    byte_40FB76E = 1;
  }
  v16 = sub_B170CC(
          ShopPlayVoiceComponent___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&figureSvtId,
          *(_QWORD *)&state,
          isOverridePlayVoice,
          *(_QWORD *)&playVoiceState);
  ShopPlayVoiceComponent___c__DisplayClass14_0___ctor((ShopPlayVoiceComponent___c__DisplayClass14_0_o *)v16, 0LL);
  if ( !v16 )
    sub_B170D4();
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v16 + 24) = state;
  *(_BYTE *)(v16 + 28) = isOverridePlayVoice;
  *(_DWORD *)(v16 + 32) = playVoiceState;
  p_requestVoiceData = &this->fields.requestVoiceData;
  if ( !this->fields.requestVoiceData && !this->fields.voiceData )
  {
    v38 = figureSvtId;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v25 = (System_Int32_array **)System_String__Concat((Il2CppObject *)StringLiteral_3947, v24, 0LL);
    *p_requestVoiceData = (struct System_String_o *)v25;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.requestVoiceData, v25, v26, v27, v28, v29, v30, v31);
    v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v16,
      Method_ShopPlayVoiceComponent___c__DisplayClass14_0__LoadVoice_b__0__,
      0LL);
    v37 = *p_requestVoiceData;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v37, v36, 1, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t figureServantLimitCount; // w22
  ServantVoiceMaster_o *v15; // x23
  System_String_o *v16; // x0
  System_Collections_Generic_List_ServantVoiceData____o *EntityShopCombine; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct ServantVoiceData_array *v24; // x1
  const MethodInfo *v25; // x1

  if ( (byte_40FB771 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, name);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_983, v8);
    byte_40FB771 = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) && this->fields.voiceData )
  {
    ShopPlayVoiceComponent__StopVoice(this, v9);
    figureServantId = this->fields.figureServantId;
    this->fields.isPlayingVoice = 1;
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(figureServantId, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
          figureServantLimitCount = this->fields.figureServantLimitCount,
          v15 = (ServantVoiceMaster_o *)MasterData_WarQuestSelectionMaster,
          v16 = System_String__Concat_43743732((System_String_o *)StringLiteral_983, name, 0LL),
          !v15) )
    {
      sub_B170D4();
    }
    EntityShopCombine = ServantVoiceMaster__getEntityShopCombine(v15, 15, SvtVoiceId, figureServantLimitCount, v16, 0LL);
    if ( EntityShopCombine && EntityShopCombine->fields._size >= 1 )
      v24 = EntityShopCombine->fields._items->m_Items[0];
    else
      v24 = 0LL;
    this->fields.voicePlayingList = v24;
    sub_B16F98(
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
  __int64 v2; // x2
  ShopPlayVoiceComponent_o *v3; // x19
  struct ServantVoiceData_array *voicePlayingList; // x8
  int v5; // w9
  int max_length; // w10
  ServantVoiceData_o *v7; // x8
  StandFigureBack_o *standFigureBack; // x0
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

  v3 = this;
  if ( (byte_40FB772 & 1) == 0 )
  {
    this = (ShopPlayVoiceComponent_o *)sub_B16FFC(&StringLiteral_8050, method);
    byte_40FB772 = 1;
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
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = voicePlayingList->m_Items[v5];
      if ( v7 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v3,
          (System_String_o *)StringLiteral_8050,
          v7->fields.delay,
          0LL);
        return;
      }
LABEL_10:
      sub_B170D4();
    }
  }
  standFigureBack = v3->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_10;
  StandFigureBack__SetFaceType(standFigureBack, v3->fields.defaultFaceType, 0.0, 0, 0LL);
  v3->fields.voicePlayingList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.voicePlayingList, 0LL, v9, v10, v11, v12, v13, v14);
  v3->fields.voicePlayer = 0LL;
  p_voicePlayer = (BattleServantConfConponent_o *)&v3->fields.voicePlayer;
  sub_B16F98(p_voicePlayer, 0LL, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_40FB770 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, name);
    byte_40FB770 = 1;
  }
  if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_1, 0LL) )
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

  if ( (byte_40FB76D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB76D = 1;
  }
  this->fields.requestVoiceData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.requestVoiceData, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B16F98(p_voiceData, 0LL, v13, v14, v15, v16, v17, v18);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct StandFigureBack_o **p_standFigureBack; // x19
  Il2CppObject *v38; // x0
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_o *v46; // x19
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Action_o *v51; // x20
  int32_t v52; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FB76F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, standFigureBack);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&SoundManager_TypeInfo, v14);
    sub_B16FFC(&Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__, v15);
    sub_B16FFC(&ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_3947, v17);
    byte_40FB76F = 1;
  }
  v18 = sub_B170CC(
          ShopPlayVoiceComponent___c__DisplayClass15_0_TypeInfo,
          standFigureBack,
          *(_QWORD *)&figureServantId,
          *(_QWORD *)&figureServantLimitCount,
          *(_QWORD *)&defaultFaceType);
  ShopPlayVoiceComponent___c__DisplayClass15_0___ctor((ShopPlayVoiceComponent___c__DisplayClass15_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B170D4();
  *(_QWORD *)(v18 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 24) = endReload;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)endReload, v25, v26, v27, v28, v29, v30);
  if ( this->fields.figureServantId == figureServantId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
  }
  else
  {
    this->fields.standFigureBack = standFigureBack;
    p_standFigureBack = &this->fields.standFigureBack;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_standFigureBack,
      (System_Int32_array **)standFigureBack,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    *((_DWORD *)p_standFigureBack + 2) = figureServantId;
    *((_DWORD *)p_standFigureBack + 3) = figureServantLimitCount;
    *((_DWORD *)p_standFigureBack + 4) = defaultFaceType;
    v52 = figureServantId;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
    v39 = (System_Int32_array **)System_String__Concat((Il2CppObject *)StringLiteral_3947, v38, 0LL);
    p_standFigureBack[4] = (struct StandFigureBack_o *)v39;
    sub_B16F98((BattleServantConfConponent_o *)(p_standFigureBack + 4), v39, v40, v41, v42, v43, v44, v45);
    v46 = (System_String_o *)p_standFigureBack[4];
    v51 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v47, v48, v49, v50);
    System_Action___ctor(
      v51,
      (Il2CppObject *)v18,
      Method_ShopPlayVoiceComponent___c__DisplayClass15_0__ReloadVoice_b__0__,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(v46, v51, 1, 0LL);
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
  sub_B16F98(
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
  SePlayer_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FB774 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8050, method);
    byte_40FB774 = 1;
  }
  voicePlayer = this->fields.voicePlayer;
  this->fields.isPlayingVoice = 0;
  if ( voicePlayer )
  {
    standFigureBack = this->fields.standFigureBack;
    if ( !standFigureBack
      || (StandFigureBack__SetFaceType(standFigureBack, this->fields.defaultFaceType, 0.0, 0, 0LL),
          (v5 = this->fields.voicePlayer) == 0LL) )
    {
      sub_B170D4();
    }
    SePlayer__Destroy(v5, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.voicePlayingList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voicePlayingList, 0LL, v12, v13, v14, v15, v16, v17);
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_34803724(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_8050,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_8050,
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
    sub_B170D4();
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
  struct ShopPlayVoiceComponent_o *v17; // x0
  System_Int32_array **requestVoiceData; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct ShopPlayVoiceComponent_o *v25; // x0

  if ( (byte_40F79ED & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F79ED = 1;
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
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_14;
    v17->fields.voiceData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v17->fields.voiceData, 0LL, v11, v12, v13, v14, v15, v16);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_14;
  }
  requestVoiceData = (System_Int32_array **)_4__this->fields.requestVoiceData;
  if ( requestVoiceData )
  {
    _4__this->fields.voiceData = (struct System_String_o *)requestVoiceData;
    sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.voiceData, requestVoiceData, v2, v3, v4, v5, v6, v7);
    v25 = this->fields.__4__this;
    if ( v25 )
    {
      v25->fields.requestVoiceData = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&v25->fields.requestVoiceData, 0LL, v19, v20, v21, v22, v23, v24);
      ActionExtensions__Call(this->fields.endReload, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
}