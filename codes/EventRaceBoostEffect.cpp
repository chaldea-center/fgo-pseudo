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

  if ( (byte_42149AB & 1) == 0 )
  {
    sub_B0D8A4(&EventRaceBoostEffect_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_21735/*"race_boost_effect_{0}"*/, v8);
    sub_B0D8A4(&StringLiteral_6199/*"EventRaceBoostEffect_{0}"*/, v9);
    byte_42149AB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRaceBoostEffect_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_21735/*"race_boost_effect_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21735/*"race_boost_effect_{0}"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventRaceBoostEffect_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_6199/*"EventRaceBoostEffect_{0}"*/;
  v12->ANIM_NAME = (struct System_String_o *)StringLiteral_6199/*"EventRaceBoostEffect_{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->ANIM_NAME, v13, v14, v15, v16, v17, v18, v19);
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
  __int64 v6; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42149A8 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, voiceStr);
    byte_42149A8 = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_11;
  if ( !v4->max_length )
    goto LABEL_12;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !voiceStr || (v4 = System_String__Split(voiceStr, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_11:
    sub_B0D97C(v4);
  if ( !v4->max_length )
  {
LABEL_12:
    v6 = sub_B0D9A8(v4);
    sub_B0D948(v6, 0LL);
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
  int max_length; // w8
  __int64 v8; // x0

  if ( (byte_42149A9 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, voiceStr);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v4);
    byte_42149A9 = 1;
  }
  v5 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_11;
  if ( !v5->max_length )
    goto LABEL_12;
  LOWORD(v5->m_Items[0]) = 95;
  if ( !voiceStr || (v5 = System_String__Split(voiceStr, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_11:
    sub_B0D97C(v5);
  max_length = v5->max_length;
  if ( max_length >= 2 )
  {
    if ( max_length != 2 )
      return System_String__Concat_43852188(v5->m_Items[1], (System_String_o *)StringLiteral_15952/*"_"*/, v5->m_Items[2], 0LL);
LABEL_12:
    v8 = sub_B0D9A8(v5);
    sub_B0D948(v8, 0LL);
  }
  return 0LL;
}


void __fastcall EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v6; // x19
  System_String_o *VoiceAssetName_29941680; // x0

  if ( (byte_42149AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42149AA = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0LL);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v6 = (SoundManager_o *)Instance;
    VoiceAssetName_29941680 = ServantVoiceEntity__getVoiceAssetName_29941680(randvoiceSvt, 0LL);
    if ( !v6 )
      sub_B0D97C(VoiceAssetName_29941680);
    SoundManager__ReleaseAudioAssetStorage(v6, VoiceAssetName_29941680, 0LL);
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
  __int64 v18; // x20
  QuestRacePointEntity_o *v19; // x0
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
  int32_t randvoiceSvt; // w8
  SoundManager_o *v59; // x19
  System_String_o *VoiceAssetName_29941680; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  System_Action_o *v63; // x22

  if ( (byte_42149A4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, boostEnt);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v15);
    sub_B0D8A4(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__, v16);
    sub_B0D8A4(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo, v17);
    byte_42149A4 = 1;
  }
  v18 = sub_B0D974(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo, boostEnt, *(_QWORD *)&boostGrade);
  EventRaceBoostEffect___c__DisplayClass13_0___ctor((EventRaceBoostEffect___c__DisplayClass13_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_QWORD *)(v18 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v18 + 24) = boostEnt;
  v26 = (QuestRacePointEntity_o **)(v18 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)boostEnt, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v18 + 48) = callback;
  *(_DWORD *)(v18 + 32) = boostGrade;
  *(_DWORD *)(v18 + 36) = boostPoint;
  *(_DWORD *)(v18 + 40) = itemImgId;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 48), (System_Int32_array **)callback, v33, v34, v35, v36, v37, v38);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.randvoiceId, 0LL, v39, v40, v41, v42, v43, v44);
    EventRaceBoostEffect__setupLocal(
      this,
      *(QuestRacePointEntity_o **)(v18 + 24),
      *(_DWORD *)(v18 + 32),
      *(_DWORD *)(v18 + 36),
      *(_DWORD *)(v18 + 40),
      *(System_Action_o **)(v18 + 48),
      v56);
    return;
  }
  v19 = *v26;
  if ( !*v26 )
    goto LABEL_12;
  RandVoice = QuestRacePointEntity__GetRandVoice(v19, 0LL);
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
  sub_B0D840(
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v59 = (SoundManager_o *)Instance;
  VoiceAssetName_29941680 = ServantVoiceEntity__getVoiceAssetName_29941680(randvoiceSvt, 0LL);
  v63 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v61, v62);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v18,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0LL);
  if ( !v59 )
LABEL_12:
    sub_B0D97C(v19);
  SoundManager__LoadAudioAssetStorage(v59, VoiceAssetName_29941680, v63, 1, 0LL);
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
  System_String_o *randvoiceId; // x20
  System_String_o *v13; // x21
  SeManager_c *v14; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v16; // x22

  if ( (byte_42149A6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventRaceBoostEffect_afterVoice__, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_3976/*"ChrVoice_"*/, v6);
    byte_42149A6 = 1;
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
      v9 = System_String__Concat_43849904((System_String_o *)StringLiteral_3976/*"ChrVoice_"*/, v8, 0LL);
      randvoiceId = this->fields.randvoiceId;
      v13 = v9;
      v14 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v14 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v14->static_fields->DEFAULT_VOLUME;
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_24977528(v13, randvoiceId, DEFAULT_VOLUME, v16, 0LL);
    }
  }
}


void __fastcall EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42149A7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42149A7 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnPostFillCallback_c *v28; // x8
  __int64 v29; // x8
  System_Collections_Generic_List_UIAtlas__o *v30; // x25
  System_String_o *SP_NAME; // x24
  Il2CppObject *v32; // x0
  System_String_o *v33; // x24
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v35; // x25
  __int64 v36; // x28
  int max_length; // w9
  il2cpp_array_size_t v38; // w22
  struct UISprite_array *v39; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v41; // x24
  bool v42; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  UILabel_o *v44; // x23
  System_String_o *v45; // x24
  Il2CppObject *v46; // x0
  EventRaceBoostEffect_c *v47; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v49; // x0
  System_String_o *v50; // x21
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x23
  UnityEngine_Object_o *v52; // x22
  UISprite_c *klass; // x8
  UIAtlas_o *v54; // x21
  unsigned __int64 v55; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v57; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v60; // x1
  __int64 v61; // x2
  System_Action_o *v62; // x21
  __int64 v63; // x0
  int32_t v64; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v65; // [xsp+8h] [xbp-58h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42149A5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, boostEnt);
    sub_B0D8A4(&AtlasManager_TypeInfo, v14);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v15);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v16);
    sub_B0D8A4(&Method_EventRaceBoostEffect__setupLocal_b__14_0__, v17);
    sub_B0D8A4(&EventRaceBoostEffect_TypeInfo, v18);
    sub_B0D8A4(&int_TypeInfo, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    sub_B0D8A4(&SeManager_TypeInfo, v22);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v23);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v24);
    sub_B0D8A4(&StringLiteral_5693/*"EVENT_RACE_BOOST_COUNT"*/, v25);
    sub_B0D8A4(&StringLiteral_21312/*"onEndAnim"*/, v26);
    byte_42149A5 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, boostEnt);
      byte_421083D = 1;
    }
    UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    }
    v28 = *(UIWidget_OnPostFillCallback_c **)UIAtlasBySpriteName[2].monitor;
    if ( v28 )
    {
      v29 = *(_QWORD *)&v28->_2.static_fields_size;
      if ( v29 )
      {
        v30 = *(System_Collections_Generic_List_UIAtlas__o **)(v29 + 288);
        this->fields.callBack = callback;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.callBack,
          (System_Int32_array **)callback,
          *(System_String_array ***)&boostGrade,
          *(System_String_array ***)&boostPoint,
          *(System_Boolean_array ***)&itemImgId,
          (System_Int32_array **)callback,
          (System_Int32_array *)method,
          v7);
        UIAtlasBySpriteName = (UIAtlas_o *)EventRaceBoostEffect_TypeInfo;
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
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v30, v33, 0LL);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v35 = UIAtlasBySpriteName;
            v36 = 4LL;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v38 = v36 - 4;
              if ( (int)v36 - 4 >= max_length )
                break;
              if ( v38 >= max_length )
                goto LABEL_84;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v36);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v35, 0LL);
                v39 = this->fields.effectSp;
                if ( v39 )
                {
                  if ( v38 >= v39->max_length )
                  {
LABEL_84:
                    v63 = sub_B0D9A8(UIAtlasBySpriteName);
                    sub_B0D948(v63, 0LL);
                  }
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v39->obj.klass + v36);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v33, 0LL);
                    effectSp = this->fields.effectSp;
                    ++v36;
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
                v42 = 0;
              }
              else
              {
                v41 = this->fields.boostItemSp;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                v42 = AtlasManager__SetItem(v41, itemImgId, 0LL);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_83;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0LL);
              if ( !UIAtlasBySpriteName )
                goto LABEL_83;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v42, 0LL);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0LL, 0LL) )
            {
              v44 = this->fields.boostCntLb;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5693/*"EVENT_RACE_BOOST_COUNT"*/, 0LL);
              v65 = boostPoint;
              v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v45, v46, 0LL);
              if ( !v44 )
                goto LABEL_83;
              UILabel__set_text(v44, (System_String_o *)UIAtlasBySpriteName, 0LL);
            }
            v47 = EventRaceBoostEffect_TypeInfo;
            if ( (BYTE3(EventRaceBoostEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v47 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v47->static_fields->ANIM_NAME;
            v64 = boostGrade;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
            v50 = System_String__Format(ANIM_NAME, v49, 0LL);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                                       (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
              if ( UIAtlasBySpriteName )
              {
                v52 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                     ComponentInChildren_UIWidget,
                                                     0LL,
                                                     0LL);
                if ( ((unsigned __int8)UIAtlasBySpriteName & 1) != 0 )
                {
                  if ( ComponentInChildren_UIWidget )
                  {
                    SimpleAnimation__Play_50482404((SimpleAnimation_o *)ComponentInChildren_UIWidget, v50, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_UIWidget,
                                                         v50,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      klass = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v54 = UIAtlasBySpriteName;
                      if ( *(_WORD *)&UIAtlasBySpriteName->klass->_2.bitflags1 )
                      {
                        v55 = 0LL;
                        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          ++v55;
                          p_offset += 2;
                          if ( v55 >= *(unsigned __int16 *)&UIAtlasBySpriteName->klass->_2.bitflags1 )
                            goto LABEL_65;
                        }
                        v57 = (__int64)(&klass->vtable._13_GetSides.method + 2 * *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_65:
                        v57 = sub_AA67A0(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13LL);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
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
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_76;
                  if ( v52 )
                  {
                    UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)v52, v50, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v52,
                                                         v50,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0LL);
LABEL_75:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_21312/*"onEndAnim"*/,
                        length,
                        0LL);
LABEL_76:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0LL);
                      if ( System_String__IsNullOrEmpty(Se, 0LL) )
                      {
                        EventRaceBoostEffect__afterSE(this, v60);
                      }
                      else
                      {
                        v62 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v60, v61);
                        System_Action___ctor(
                          v62,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0LL);
                        if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SeManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                        }
                        SeManager__PlaySe(Se, 1.0, 0.0, v62, 0, 0LL);
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
    sub_B0D97C(UIAtlasBySpriteName);
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
    sub_B0D97C(0LL);
  EventRaceBoostEffect__setupLocal(
    _4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    0LL);
}