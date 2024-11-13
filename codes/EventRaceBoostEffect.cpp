void __fastcall EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct EventRaceBoostEffect_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B12E99 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRaceBoostEffect_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_22990/*"race_boost_effect_{0}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_6319/*"EventRaceBoostEffect_{0}"*/, v10, v11);
    byte_4B12E99 = 1;
  }
  EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME = (struct System_String_o *)StringLiteral_22990/*"race_boost_effect_{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRaceBoostEffect_TypeInfo->static_fields,
    StringLiteral_22990/*"race_boost_effect_{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_6319/*"EventRaceBoostEffect_{0}"*/;
  static_fields = EventRaceBoostEffect_TypeInfo->static_fields;
  static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_6319/*"EventRaceBoostEffect_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->ANIM_NAME, v12, v14, v15, v16, v17, v18, v19);
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
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0LL), result = 0, !this) )
    sub_1BCAA3C(this, voiceStr);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1BCAA44(this, voiceStr);
  if ( System_Int32__TryParse((System_String_o *)this->fields.effectSp, &result, 0LL) )
    return result;
  else
    return 0;
}


System_String_o *__fastcall EventRaceBoostEffect__GetVoiceId(
        EventRaceBoostEffect_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8

  if ( (byte_4B12E97 & 1) == 0 )
  {
    this = (EventRaceBoostEffect_o *)sub_1BCA7E0(&StringLiteral_16290/*"_"*/, voiceStr, method);
    byte_4B12E97 = 1;
  }
  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1BCAA3C(this, voiceStr);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 2 )
    return 0LL;
  if ( m_CancellationTokenSource == 2 )
    sub_1BCAA44(this, voiceStr);
  return System_String__Concat_62412480(
           (System_String_o *)this->fields.boostItemSp,
           (System_String_o *)StringLiteral_16290/*"_"*/,
           (System_String_o *)this->fields.boostCntLb,
           0LL);
}


void __fastcall EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v8; // x19
  System_String_o *VoiceAssetName_40580584; // x0
  __int64 v10; // x1

  if ( (byte_4B12E98 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    byte_4B12E98 = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__stopVoiceAll(0.0, 0LL);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v8 = (SoundManager_o *)Instance;
    VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(randvoiceSvt, 0LL);
    if ( !v8 )
      sub_1BCAA3C(VoiceAssetName_40580584, v10);
    SoundManager__ReleaseAudioAssetStorage(v8, VoiceAssetName_40580584, 0LL);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  QuestRacePointEntity_o *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  QuestRacePointEntity_o **v30; // x27
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v52; // x2
  struct System_String_o *VoiceId; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  const MethodInfo *v60; // x6
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v63; // x19
  System_String_o *VoiceAssetName_40580584; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_o *v68; // x22

  if ( (byte_4B12E93 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, boostEnt, *(_QWORD *)&boostGrade);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__, v17, v18);
    sub_1BCA7E0(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo, v19, v20);
    byte_4B12E93 = 1;
  }
  v21 = sub_1BCAA2C(
          EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo,
          boostEnt,
          *(_QWORD *)&boostGrade,
          *(_QWORD *)&boostPoint);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_12;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = boostEnt;
  v30 = (QuestRacePointEntity_o **)(v21 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)boostEnt, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v21 + 48) = callback;
  *(_DWORD *)(v21 + 32) = boostGrade;
  *(_DWORD *)(v21 + 36) = boostPoint;
  *(_DWORD *)(v21 + 40) = itemImgId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 48), (int64_t)callback, v37, v38, v39, v40, v41, v42);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randvoiceId, 0LL, (int64_t)v43, v44, v45, v46, v47, v48);
    EventRaceBoostEffect__setupLocal(
      this,
      *(QuestRacePointEntity_o **)(v21 + 24),
      *(_DWORD *)(v21 + 32),
      *(_DWORD *)(v21 + 36),
      *(_DWORD *)(v21 + 40),
      *(System_Action_o **)(v21 + 48),
      v60);
    return;
  }
  v22 = *v30;
  if ( !*v30 )
    goto LABEL_12;
  RandVoice = QuestRacePointEntity__GetRandVoice(v22, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      v43);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v52);
  this->fields.randvoiceId = VoiceId;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randvoiceId, (int64_t)VoiceId, v54, v55, v56, v57, v58, v59);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v63 = (SoundManager_o *)Instance;
  VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(randvoiceSvt, 0LL);
  v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v66, v67);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v21,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0LL);
  if ( !v63 )
LABEL_12:
    sub_1BCAA3C(v22, v23);
  SoundManager__LoadAudioAssetStorage(v63, VoiceAssetName_40580584, v68, 1, 0LL);
}


void __fastcall EventRaceBoostEffect__afterSE(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_String_o *randvoiceId; // x20
  System_String_o *v19; // x21
  SeManager_c *v20; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v22; // x22
  __int64 v23; // x1

  if ( (byte_4B12E95 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventRaceBoostEffect_afterVoice__, v4, v5);
    sub_1BCA7E0(&SeManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_4532/*"ChrVoice_"*/, v10, v11);
    byte_4B12E95 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    this->fields.seEnded = 1;
    EventRaceBoostEffect__CheckCallback(this, method);
    if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    {
      EventRaceBoostEffect__afterVoice(this, v12);
    }
    else
    {
      v13 = System_Int32__ToString((int)this + 68, 0LL);
      v14 = System_String__Concat_62401220((System_String_o *)StringLiteral_4532/*"ChrVoice_"*/, v13, 0LL);
      randvoiceId = this->fields.randvoiceId;
      v19 = v14;
      v20 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v15);
        v20 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v20->static_fields->DEFAULT_VOLUME;
      v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v23);
      SoundManager__playVoice_39419392(v19, randvoiceId, DEFAULT_VOLUME, v22, 0LL);
    }
  }
}


void __fastcall EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B12E96 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12E96 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v42; // x8
  System_Collections_Generic_List_UIAtlas__o *v43; // x25
  System_String_o *SP_NAME; // x24
  Il2CppObject *v45; // x0
  System_String_o *v46; // x24
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v48; // x25
  __int64 v49; // x28
  int max_length; // w9
  il2cpp_array_size_t v51; // w22
  struct UISprite_array *v52; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v54; // x24
  bool v55; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  __int64 v57; // x1
  UILabel_o *v58; // x23
  System_String_o *v59; // x24
  Il2CppObject *v60; // x0
  EventRaceBoostEffect_c *v61; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v63; // x0
  System_String_o *v64; // x21
  Il2CppObject *ComponentInChildren_object__49322392; // x23
  __int64 v66; // x1
  Il2CppObject *v67; // x22
  UISprite_c *v68; // x8
  UIAtlas_o *v69; // x21
  __int64 v70; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v72; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v75; // x1
  _QWORD *v76; // x0
  System_Reflection_MethodBase_o *v77; // x21
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Action_o *v81; // x22
  int32_t v82; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v83; // [xsp+8h] [xbp-68h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B12E94 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, boostEnt, *(_QWORD *)&boostGrade);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v18, v19);
    sub_1BCA7E0(&Method_EventRaceBoostEffect__setupLocal_b__14_0__, v20, v21);
    sub_1BCA7E0(&Method_EventRaceBoostEffect_setupLocal__, v22, v23);
    sub_1BCA7E0(&EventRaceBoostEffect_TypeInfo, v24, v25);
    sub_1BCA7E0(&int_TypeInfo, v26, v27);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v30, v31);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v32, v33);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_5754/*"EVENT_RACE_BOOST_COUNT"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_22492/*"onEndAnim"*/, v38, v39);
    byte_4B12E94 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, boostEnt);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, boostEnt, *(_QWORD *)&boostGrade);
      byte_4B10F83 = 1;
    }
    UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, boostEnt);
      UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = (UIWidget_OnDimensionsChanged_c *)UIAtlasBySpriteName[1].fields.mSpriteIndices->klass;
    if ( klass )
    {
      v42 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( v42 )
      {
        v43 = *(System_Collections_Generic_List_UIAtlas__o **)(v42 + 304);
        this->fields.callBack = callback;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.callBack,
          (int64_t)callback,
          *(int64_t *)&boostGrade,
          boostPoint,
          *(System_String_o **)&itemImgId,
          (BattleSetupInfo_o *)callback,
          (FollowerInfo_o *)method,
          v7);
        UIAtlasBySpriteName = (UIAtlas_o *)EventRaceBoostEffect_TypeInfo;
        if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo, boostEnt);
        if ( boostEnt )
        {
          SP_NAME = EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME;
          BoostTypeColor = QuestRacePointEntity__GetBoostTypeColor(boostEnt, 0LL);
          v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor);
          v46 = System_String__Format(SP_NAME, v45, 0LL);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v43, v46, 0LL);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v48 = UIAtlasBySpriteName;
            v49 = 4LL;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v51 = v49 - 4;
              if ( (int)v49 - 4 >= max_length )
                break;
              if ( v51 >= max_length )
                goto LABEL_73;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v49);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v48, 0LL);
                v52 = this->fields.effectSp;
                if ( v52 )
                {
                  if ( v51 >= v52->max_length )
LABEL_73:
                    sub_1BCAA44(UIAtlasBySpriteName, boostEnt);
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v52->obj.klass + v49);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v46, 0LL);
                    effectSp = this->fields.effectSp;
                    ++v49;
                    if ( effectSp )
                      continue;
                  }
                }
              }
              goto LABEL_72;
            }
            boostItemSp = (UnityEngine_Object_o *)this->fields.boostItemSp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boostEnt);
            if ( UnityEngine_Object__op_Inequality(boostItemSp, 0LL, 0LL) )
            {
              if ( itemImgId < 1 )
              {
                v55 = 0;
              }
              else
              {
                v54 = this->fields.boostItemSp;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, boostEnt);
                v55 = AtlasManager__SetItem(v54, itemImgId, 0LL);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0LL);
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v55, 0LL);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boostEnt);
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0LL, 0LL) )
            {
              v58 = this->fields.boostCntLb;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
              v59 = LocalizationManager__Get((System_String_o *)StringLiteral_5754/*"EVENT_RACE_BOOST_COUNT"*/, 0LL);
              v83 = boostPoint;
              v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v59, v60, 0LL);
              if ( !v58 )
                goto LABEL_72;
              UILabel__set_text(v58, (System_String_o *)UIAtlasBySpriteName, 0LL);
            }
            v61 = EventRaceBoostEffect_TypeInfo;
            if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo, v57);
              v61 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v61->static_fields->ANIM_NAME;
            v82 = boostGrade;
            v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
            v64 = System_String__Format(ANIM_NAME, v63, 0LL);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                       (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
              if ( UIAtlasBySpriteName )
              {
                v67 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                        (UnityEngine_Component_o *)UIAtlasBySpriteName,
                        (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
                UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)ComponentInChildren_object__49322392,
                                                     0LL,
                                                     0LL);
                if ( ((unsigned __int8)UIAtlasBySpriteName & 1) != 0 )
                {
                  if ( ComponentInChildren_object__49322392 )
                  {
                    SimpleAnimation__Play_64539336((SimpleAnimation_o *)ComponentInChildren_object__49322392, v64, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_object__49322392,
                                                         v64,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      v68 = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v69 = UIAtlasBySpriteName;
                      v70 = *(unsigned __int16 *)(&UIAtlasBySpriteName->klass->_2.bitflags2 + 3);
                      if ( *(_WORD *)(&UIAtlasBySpriteName->klass->_2.bitflags2 + 3) )
                      {
                        p_offset = (SimpleAnimation_State_c **)&v68->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          --v70;
                          p_offset += 2;
                          if ( !v70 )
                            goto LABEL_56;
                        }
                        v72 = (__int64)(&v68->vtable._13_GetSides.method + 2 * *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_56:
                        v72 = sub_1C1C7C0(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13LL);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v72)(v69, *(_QWORD *)(v72 + 8));
                      goto LABEL_65;
                    }
                  }
                }
                else
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boostEnt);
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v67,
                                                       0LL,
                                                       0LL);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_66;
                  if ( v67 )
                  {
                    UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v67, v64, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v67,
                                                         v64,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0LL);
LABEL_65:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_22492/*"onEndAnim"*/,
                        length,
                        0LL);
LABEL_66:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0LL);
                      if ( System_String__IsNullOrEmpty(Se, 0LL) )
                      {
                        EventRaceBoostEffect__afterSE(this, v75);
                      }
                      else
                      {
                        v76 = Method_EventRaceBoostEffect_setupLocal__;
                        if ( (*((_BYTE *)Method_EventRaceBoostEffect_setupLocal__ + 83) & 2) != 0 )
                          v76 = (_QWORD *)sub_1BCA7F8(Method_EventRaceBoostEffect_setupLocal__);
                        v77 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v76, v76[4]);
                        v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v78, v79, v80);
                        System_Action___ctor(
                          v81,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0LL);
                        OverwriteAssetSoundName__PlaySe_39322040(v77, Se, 1.0, v81, 0LL);
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
LABEL_72:
    sub_1BCAA3C(UIAtlasBySpriteName, boostEnt);
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
  const MethodInfo *v2; // x6

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  EventRaceBoostEffect__setupLocal(
    this->fields.__4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    v2);
}