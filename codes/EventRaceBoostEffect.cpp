void __fastcall EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct EventRaceBoostEffect_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FACA2 & 1) == 0 )
  {
    sub_B16FFC(&EventRaceBoostEffect_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_21573/*"race_boost_effect_{0}"*/, v8);
    sub_B16FFC(&StringLiteral_6164/*"EventRaceBoostEffect_{0}"*/, v9);
    byte_40FACA2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRaceBoostEffect_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_21573/*"race_boost_effect_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21573/*"race_boost_effect_{0}"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventRaceBoostEffect_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_6164/*"EventRaceBoostEffect_{0}"*/;
  v12->ANIM_NAME = (struct System_String_o *)StringLiteral_6164/*"EventRaceBoostEffect_{0}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->ANIM_NAME, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventRaceBoostEffect___ctor(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRaceBoostEffect__CheckCallback(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  if ( !this->fields.destroyedBeforeVoiceStop && this->fields.animEnded && this->fields.seEnded )
    ActionExtensions__Call(this->fields.callBack, 0LL);
}


int32_t __fastcall EventRaceBoostEffect__GetSvtId(
        EventRaceBoostEffect_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  __int64 v5; // x2
  System_String_array *v6; // x1
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FAC9F & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, voiceStr);
    byte_40FAC9F = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v4 )
    goto LABEL_11;
  v6 = v4;
  if ( !v4->max_length )
    goto LABEL_12;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !voiceStr || (v4 = System_String__Split(voiceStr, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_11:
    sub_B170D4();
  if ( !v4->max_length )
  {
LABEL_12:
    sub_B17100(v4, v6, v5);
    sub_B170A0();
  }
  if ( System_Int32__TryParse(v4->m_Items[0], &result, 0LL) )
    return result;
  else
    return 0;
}


System_String_o *__fastcall EventRaceBoostEffect__GetVoiceId(
        EventRaceBoostEffect_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x0
  __int64 v6; // x2
  System_String_array *v7; // x1
  int max_length; // w8

  if ( (byte_40FACA0 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, voiceStr);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v4);
    byte_40FACA0 = 1;
  }
  v5 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  if ( !v5->max_length )
    goto LABEL_12;
  LOWORD(v5->m_Items[0]) = 95;
  if ( !voiceStr || (v5 = System_String__Split(voiceStr, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_11:
    sub_B170D4();
  max_length = v5->max_length;
  if ( max_length >= 2 )
  {
    if ( max_length != 2 )
      return System_String__Concat_43746016(v5->m_Items[1], (System_String_o *)StringLiteral_15842/*"_"*/, v5->m_Items[2], 0LL);
LABEL_12:
    sub_B17100(v5, v7, v6);
    sub_B170A0();
  }
  return 0LL;
}


void __fastcall EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  int32_t randvoiceSvt; // w20
  SoundManager_o *v7; // x19
  System_String_o *VoiceAssetName_30033140; // x0

  if ( (byte_40FACA1 & 1) == 0 )
  {
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FACA1 = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0LL);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v7 = (SoundManager_o *)Instance;
    if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
    }
    VoiceAssetName_30033140 = ServantVoiceEntity__getVoiceAssetName_30033140(randvoiceSvt, 0LL);
    if ( !v7 )
      sub_B170D4();
    SoundManager__ReleaseAudioAssetStorage(v7, VoiceAssetName_30033140, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceBoostEffect__SetUpAndPlay(
        EventRaceBoostEffect_o *this,
        QuestRacePointEntity_o *boostEnt,
        int32_t boostGrade,
        int32_t boostPoint,
        int32_t itemImgId,
        bool playVoice,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  QuestRacePointEntity_o **v26; // x27
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
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v48; // x2
  struct System_String_o *VoiceId; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x6
  WebViewManager_o *Instance; // x0
  int32_t randvoiceSvt; // w21
  SoundManager_o *v59; // x19
  System_String_o *VoiceAssetName_30033140; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Action_o *v65; // x22

  if ( (byte_40FAC9B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, boostEnt);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v16);
    sub_B16FFC(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__, v17);
    sub_B16FFC(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo, v18);
    byte_40FAC9B = 1;
  }
  v19 = sub_B170CC(
          EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo,
          boostEnt,
          *(_QWORD *)&boostGrade,
          *(_QWORD *)&boostPoint,
          *(_QWORD *)&itemImgId);
  EventRaceBoostEffect___c__DisplayClass13_0___ctor((EventRaceBoostEffect___c__DisplayClass13_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_15;
  *(_QWORD *)(v19 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v19 + 24) = boostEnt;
  v26 = (QuestRacePointEntity_o **)(v19 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)boostEnt, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v19 + 48) = callback;
  *(_DWORD *)(v19 + 32) = boostGrade;
  *(_DWORD *)(v19 + 36) = boostPoint;
  *(_DWORD *)(v19 + 40) = itemImgId;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 48), (System_Int32_array **)callback, v33, v34, v35, v36, v37, v38);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.randvoiceId, 0LL, v39, v40, v41, v42, v43, v44);
    EventRaceBoostEffect__setupLocal(
      this,
      *(QuestRacePointEntity_o **)(v19 + 24),
      *(_DWORD *)(v19 + 32),
      *(_DWORD *)(v19 + 36),
      *(_DWORD *)(v19 + 40),
      *(System_Action_o **)(v19 + 48),
      v56);
    return;
  }
  if ( !*v26 )
    goto LABEL_15;
  RandVoice = QuestRacePointEntity__GetRandVoice(*v26, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      (const MethodInfo *)v39);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v48);
  this->fields.randvoiceId = VoiceId;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.randvoiceId,
    (System_Int32_array **)VoiceId,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v59 = (SoundManager_o *)Instance;
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  VoiceAssetName_30033140 = ServantVoiceEntity__getVoiceAssetName_30033140(randvoiceSvt, 0LL);
  v65 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v61, v62, v63, v64);
  System_Action___ctor(
    v65,
    (Il2CppObject *)v19,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0LL);
  if ( !v59 )
LABEL_15:
    sub_B170D4();
  SoundManager__LoadAudioAssetStorage(v59, VoiceAssetName_30033140, v65, 1, 0LL);
}


void __fastcall EventRaceBoostEffect__afterSE(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_String_o *randvoiceId; // x20
  System_String_o *v15; // x21
  SeManager_c *v16; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v18; // x22

  if ( (byte_40FAC9D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventRaceBoostEffect_afterVoice__, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3947/*"ChrVoice_"*/, v6);
    byte_40FAC9D = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    this->fields.seEnded = 1;
    EventRaceBoostEffect__CheckCallback(this, method);
    if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    {
      EventRaceBoostEffect__afterVoice(this, v7);
    }
    else
    {
      v8 = System_Int32__ToString((int)this + 60, 0LL);
      v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_3947/*"ChrVoice_"*/, v8, 0LL);
      randvoiceId = this->fields.randvoiceId;
      v15 = v9;
      v16 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v16 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v16->static_fields->DEFAULT_VOLUME;
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_24824004(v15, randvoiceId, DEFAULT_VOLUME, v18, 0LL);
    }
  }
}


void __fastcall EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FAC9E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAC9E = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
}


void __fastcall EventRaceBoostEffect__onEndAnim(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    this->fields.animEnded = 1;
    EventRaceBoostEffect__CheckCallback(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceBoostEffect__setupLocal(
        EventRaceBoostEffect_o *this,
        QuestRacePointEntity_o *boostEnt,
        int32_t boostGrade,
        int32_t boostPoint,
        int32_t itemImgId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  TerminalSceneComponent_c *v27; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Collections_Generic_List_UIAtlas__o *spotList; // x25
  System_String_o *SP_NAME; // x24
  Il2CppObject *v32; // x0
  System_String_o *v33; // x24
  UIAtlas_o *UIAtlasBySpriteName; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v38; // x25
  __int64 v39; // x28
  int max_length; // w9
  il2cpp_array_size_t v41; // w22
  UISprite_o *v42; // x0
  struct UISprite_array *v43; // x8
  UISprite_o *v44; // x0
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v46; // x24
  bool v47; // w23
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *boostCntLb; // x23
  UILabel_o *v51; // x23
  System_String_o *v52; // x24
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  EventRaceBoostEffect_c *v55; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v57; // x0
  System_String_o *v58; // x21
  UnityEngine_Component_o *transform; // x0
  SimpleAnimation_o *ComponentInChildren_UIWidget; // x23
  UnityEngine_Component_o *v61; // x0
  UnityEngine_Object_o *v62; // x22
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v65; // x21
  unsigned __int64 v66; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_AnimationState_o *v69; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Action_o *v76; // x21
  int32_t v77; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v78; // [xsp+8h] [xbp-58h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FAC9C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, boostEnt);
    sub_B16FFC(&AtlasManager_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v15);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v16);
    sub_B16FFC(&Method_EventRaceBoostEffect__setupLocal_b__14_0__, v17);
    sub_B16FFC(&EventRaceBoostEffect_TypeInfo, v18);
    sub_B16FFC(&int_TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&SeManager_TypeInfo, v22);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v23);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_5661/*"EVENT_RACE_BOOST_COUNT"*/, v25);
    sub_B16FFC(&StringLiteral_21153/*"onEndAnim"*/, v26);
    byte_40FAC9C = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, boostEnt);
      byte_40F6042 = 1;
    }
    v27 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v27 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v27->static_fields->mInstance;
    if ( mInstance )
    {
      mTerminalMap = mInstance->fields.mTerminalMap;
      if ( mTerminalMap )
      {
        spotList = (System_Collections_Generic_List_UIAtlas__o *)mTerminalMap->fields.spotList;
        this->fields.callBack = callback;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.callBack,
          (System_Int32_array **)callback,
          *(System_String_array ***)&boostGrade,
          *(System_String_array ***)&boostPoint,
          *(System_Boolean_array ***)&itemImgId,
          (System_Int32_array **)callback,
          (System_Int32_array *)method,
          v7);
        if ( (BYTE3(EventRaceBoostEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
        }
        if ( boostEnt )
        {
          SP_NAME = EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME;
          BoostTypeColor = QuestRacePointEntity__GetBoostTypeColor(boostEnt, 0LL);
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor);
          v33 = System_String__Format(SP_NAME, v32, 0LL);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(spotList, v33, 0LL);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v38 = UIAtlasBySpriteName;
            v39 = 4LL;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v41 = v39 - 4;
              if ( (int)v39 - 4 >= max_length )
                break;
              if ( v41 >= max_length )
                goto LABEL_84;
              v42 = (UISprite_o *)*((_QWORD *)&effectSp->obj.klass + v39);
              if ( v42 )
              {
                UISprite__set_atlas(v42, v38, 0LL);
                v43 = this->fields.effectSp;
                if ( v43 )
                {
                  if ( v41 >= v43->max_length )
                  {
LABEL_84:
                    sub_B17100(UIAtlasBySpriteName, v35, v36);
                    sub_B170A0();
                  }
                  v44 = (UISprite_o *)*((_QWORD *)&v43->obj.klass + v39);
                  if ( v44 )
                  {
                    UISprite__set_spriteName(v44, v33, 0LL);
                    effectSp = this->fields.effectSp;
                    ++v39;
                    if ( effectSp )
                      continue;
                  }
                }
              }
              goto LABEL_83;
            }
            boostItemSp = (UnityEngine_Object_o *)this->fields.boostItemSp;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(boostItemSp, 0LL, 0LL) )
            {
              if ( itemImgId < 1 )
              {
                v47 = 0;
              }
              else
              {
                v46 = this->fields.boostItemSp;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                v47 = AtlasManager__SetItem(v46, itemImgId, 0LL);
              }
              v48 = (UnityEngine_Component_o *)this->fields.boostItemSp;
              if ( !v48 )
                goto LABEL_83;
              gameObject = UnityEngine_Component__get_gameObject(v48, 0LL);
              if ( !gameObject )
                goto LABEL_83;
              UnityEngine_GameObject__SetActive(gameObject, v47, 0LL);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0LL, 0LL) )
            {
              v51 = this->fields.boostCntLb;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v52 = LocalizationManager__Get((System_String_o *)StringLiteral_5661/*"EVENT_RACE_BOOST_COUNT"*/, 0LL);
              v78 = boostPoint;
              v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
              v54 = System_String__Format(v52, v53, 0LL);
              if ( !v51 )
                goto LABEL_83;
              UILabel__set_text(v51, v54, 0LL);
            }
            v55 = EventRaceBoostEffect_TypeInfo;
            if ( (BYTE3(EventRaceBoostEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v55 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v55->static_fields->ANIM_NAME;
            v77 = boostGrade;
            v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
            v58 = System_String__Format(ANIM_NAME, v57, 0LL);
            transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( transform )
            {
              ComponentInChildren_UIWidget = (SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                    transform,
                                                                    (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              v61 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( v61 )
              {
                v62 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                v61,
                                                (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_UIWidget, 0LL, 0LL) )
                {
                  if ( ComponentInChildren_UIWidget )
                  {
                    SimpleAnimation__Play_16380456(ComponentInChildren_UIWidget, v58, 0LL);
                    Item = SimpleAnimation__get_Item(ComponentInChildren_UIWidget, v58, 0LL);
                    if ( Item )
                    {
                      klass = Item->klass;
                      v65 = Item;
                      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
                      {
                        v66 = 0LL;
                        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          ++v66;
                          p_offset += 2;
                          if ( v66 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                            goto LABEL_65;
                        }
                        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
                      }
                      else
                      {
LABEL_65:
                        p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 13LL);
                      }
                      length = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v65,
                                 *(_QWORD *)(p_method + 8));
                      goto LABEL_75;
                    }
                  }
                }
                else
                {
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( !UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
                    goto LABEL_76;
                  if ( v62 )
                  {
                    UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v62, v58, 0LL);
                    v69 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v62, v58, 0LL);
                    if ( v69 )
                    {
                      length = UnityEngine_AnimationState__get_length(v69, 0LL);
LABEL_75:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_21153/*"onEndAnim"*/,
                        length,
                        0LL);
LABEL_76:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0LL);
                      if ( System_String__IsNullOrEmpty(Se, 0LL) )
                      {
                        EventRaceBoostEffect__afterSE(this, v72);
                      }
                      else
                      {
                        v76 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
                        System_Action___ctor(
                          v76,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0LL);
                        if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SeManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                        }
                        SeManager__PlaySe(Se, 1.0, 0.0, v76, 0, 0LL);
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_83:
    sub_B170D4();
  }
}


void __fastcall EventRaceBoostEffect___c__DisplayClass13_0___ctor(
        EventRaceBoostEffect___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRaceBoostEffect___c__DisplayClass13_0___SetUpAndPlay_b__0(
        EventRaceBoostEffect___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventRaceBoostEffect_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventRaceBoostEffect__setupLocal(
    _4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    0LL);
}