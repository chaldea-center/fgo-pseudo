void EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventRaceBoostEffect_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5934EDE & 1) == 0 )
  {
    sub_21FFC50(&EventRaceBoostEffect_TypeInfo);
    sub_21FFC50(&StringLiteral_24068/*"race_boost_effect_{0}"*/);
    sub_21FFC50(&StringLiteral_6491/*"EventRaceBoostEffect_{0}"*/);
    byte_5934EDE = 1;
  }
  v7 = StringLiteral_24068/*"race_boost_effect_{0}"*/;
  EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME = (struct System_String_o *)StringLiteral_24068/*"race_boost_effect_{0}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventRaceBoostEffect_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_6491/*"EventRaceBoostEffect_{0}"*/;
  static_fields = EventRaceBoostEffect_TypeInfo->static_fields;
  static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_6491/*"EventRaceBoostEffect_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->ANIM_NAME, v8, v10, v11, v12, v13, v14, v15);
}


void EventRaceBoostEffect___ctor(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRaceBoostEffect__CheckCallback(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  if ( !this->fields.destroyedBeforeVoiceStop && this->fields.animEnded && this->fields.seEnded )
    ActionExtensions__Call(this->fields.callBack, 0);
}


int32_t EventRaceBoostEffect__GetSvtId(
        EventRaceBoostEffect_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0), result = 0, !this) )
    sub_21FFECC(this, voiceStr);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_21FFED4(this);
  if ( System_Int32__TryParse((System_String_o *)this->fields.effectSp, &result, 0) )
    return result;
  else
    return 0;
}


System_String_o *EventRaceBoostEffect__GetVoiceId(
        EventRaceBoostEffect_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8

  if ( (byte_5934EDC & 1) == 0 )
  {
    this = (EventRaceBoostEffect_o *)sub_21FFC50(&StringLiteral_16714/*"_"*/);
    byte_5934EDC = 1;
  }
  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0)) == 0 )
    sub_21FFECC(this, voiceStr);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 2 )
    return 0;
  if ( m_CancellationTokenSource == 2 )
    sub_21FFED4(this);
  return System_String__Concat_75481624(
           (System_String_o *)this->fields.boostItemSp,
           (System_String_o *)StringLiteral_16714/*"_"*/,
           (System_String_o *)this->fields.boostCntLb,
           0);
}


void EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SoundManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v7; // x19
  System_String_o *VoiceAssetName_49754652; // x0
  __int64 v9; // x1

  if ( (byte_5934EDD & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5934EDD = 1;
  }
  v4 = SoundManager_TypeInfo;
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  SoundManager__stopVoiceAll(0.0, 0);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v7 = (SoundManager_o *)Instance;
    VoiceAssetName_49754652 = ServantVoiceEntity__getVoiceAssetName_49754652(randvoiceSvt, 0);
    if ( !v7 )
      sub_21FFECC(VoiceAssetName_49754652, v9);
    SoundManager__ReleaseAudioAssetStorage(v7, VoiceAssetName_49754652, 0);
  }
}


void EventRaceBoostEffect__SetUpAndPlay(
        EventRaceBoostEffect_o *this,
        QuestRacePointEntity_o *boostEnt,
        int32_t boostGrade,
        int32_t boostPoint,
        int32_t itemImgId,
        bool playVoice,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x20
  QuestRacePointEntity_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  QuestRacePointEntity_o **v24; // x27
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v46; // x2
  struct System_String_o *VoiceId; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  const MethodInfo *v54; // x6
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v57; // x19
  System_String_o *VoiceAssetName_49754652; // x21
  System_Action_o *v59; // x22

  if ( (byte_5934ED8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__);
    sub_21FFC50(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
    byte_5934ED8 = 1;
  }
  v15 = sub_21FFEBC(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = boostEnt;
  v24 = (QuestRacePointEntity_o **)(v15 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 24), (int32_t)boostEnt, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v15 + 48) = callback;
  *(_DWORD *)(v15 + 32) = boostGrade;
  *(_DWORD *)(v15 + 36) = boostPoint;
  *(_DWORD *)(v15 + 40) = itemImgId;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 48), (int32_t)callback, v31, v32, v33, v34, v35, v36);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.randvoiceId, 0, v37, v38, v39, v40, v41, v42);
    EventRaceBoostEffect__setupLocal(
      this,
      *(QuestRacePointEntity_o **)(v15 + 24),
      *(_DWORD *)(v15 + 32),
      *(_DWORD *)(v15 + 36),
      *(_DWORD *)(v15 + 40),
      *(System_Action_o **)(v15 + 48),
      v54);
    return;
  }
  v16 = *v24;
  if ( !*v24 )
    goto LABEL_12;
  RandVoice = QuestRacePointEntity__GetRandVoice(v16, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      (const MethodInfo *)v37);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v46);
  this->fields.randvoiceId = VoiceId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.randvoiceId,
    (int32_t)VoiceId,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v57 = (SoundManager_o *)Instance;
  VoiceAssetName_49754652 = ServantVoiceEntity__getVoiceAssetName_49754652(randvoiceSvt, 0);
  v59 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v15,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0);
  if ( !v57 )
LABEL_12:
    sub_21FFECC(v16, v17);
  SoundManager__LoadAudioAssetStorage(v57, VoiceAssetName_49754652, v59, 1, 0);
}


void EventRaceBoostEffect__afterSE(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x21
  System_String_o *randvoiceId; // x20
  SeManager_c *v9; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_5934EDA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventRaceBoostEffect_afterVoice__);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_4588/*"ChrVoice_"*/);
    byte_5934EDA = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    this->fields.seEnded = 1;
    EventRaceBoostEffect__CheckCallback(this, method);
    if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0) )
    {
      EventRaceBoostEffect__afterVoice(this, v3);
    }
    else
    {
      v4 = System_Int32__ToString((int)this + 68, 0);
      v7 = System_String__Concat_75438412((System_String_o *)StringLiteral_4588/*"ChrVoice_"*/, v4, 0);
      randvoiceId = this->fields.randvoiceId;
      v9 = SeManager_TypeInfo;
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v5, v6);
        v9 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v9->static_fields->DEFAULT_VOLUME;
      v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12, v13);
      SoundManager__playVoice_48465348(v7, randvoiceId, DEFAULT_VOLUME, v11, 0, 0);
    }
  }
}


void EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5934EDB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934EDB = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
}


void EventRaceBoostEffect__onEndAnim(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    this->fields.animEnded = 1;
    EventRaceBoostEffect__CheckCallback(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRaceBoostEffect__setupLocal(
        EventRaceBoostEffect_o *this,
        QuestRacePointEntity_o *boostEnt,
        int32_t boostGrade,
        int32_t boostPoint,
        int32_t itemImgId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool v7; // w7
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v16; // x8
  System_Collections_Generic_List_UIAtlas__o *v17; // x25
  __int64 v18; // x2
  System_String_o *SP_NAME; // x24
  Il2CppObject *v20; // x0
  System_String_o *v21; // x24
  __int64 v22; // x2
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v24; // x25
  __int64 v25; // x28
  int max_length; // w9
  unsigned int v27; // w22
  struct UISprite_array *v28; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  __int64 v30; // x2
  UISprite_o *v31; // x24
  bool v32; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *v36; // x23
  System_String_o *v37; // x24
  Il2CppObject *v38; // x0
  EventRaceBoostEffect_c *v39; // x0
  struct EventRaceBoostEffect_StaticFields *static_fields; // x8
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v42; // x0
  System_String_o *v43; // x21
  Il2CppObject *ComponentInChildren_object__58644924; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  Il2CppObject *v47; // x22
  __int64 v48; // x2
  UISprite_c *v49; // x8
  UIAtlas_o *v50; // x21
  __int64 v51; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v53; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v56; // x1
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x21
  System_Action_o *v59; // x22
  int32_t v60; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v61; // [xsp+8h] [xbp-68h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5934ED9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_21FFC50(&Method_EventRaceBoostEffect__setupLocal_b__14_0__);
    sub_21FFC50(&Method_EventRaceBoostEffect_setupLocal__);
    sub_21FFC50(&EventRaceBoostEffect_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_5884/*"EVENT_RACE_BOOST_COUNT"*/);
    sub_21FFC50(&StringLiteral_23495/*"onEndAnim"*/);
    byte_5934ED9 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, boostEnt, *(_QWORD *)&boostGrade);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, boostEnt, *(_QWORD *)&boostGrade);
      UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = (UIWidget_OnDimensionsChanged_c *)UIAtlasBySpriteName[1].fields.mSpriteIndices->klass;
    if ( klass )
    {
      v16 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( v16 )
      {
        v17 = *(System_Collections_Generic_List_UIAtlas__o **)(v16 + 304);
        this->fields.callBack = callback;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.callBack,
          (int32_t)callback,
          *(System_String_o **)&boostGrade,
          *(System_String_o **)&boostPoint,
          itemImgId,
          (int32_t)callback,
          (bool)method,
          v7);
        UIAtlasBySpriteName = (UIAtlas_o *)EventRaceBoostEffect_TypeInfo;
        if ( !*(&EventRaceBoostEffect_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo, boostEnt, v18);
        if ( boostEnt )
        {
          SP_NAME = EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME;
          BoostTypeColor = QuestRacePointEntity__GetBoostTypeColor(boostEnt, 0);
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &BoostTypeColor);
          v21 = System_String__Format(SP_NAME, v20, 0);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v17, v21, 0);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v24 = UIAtlasBySpriteName;
            v25 = 4;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v27 = v25 - 4;
              if ( (int)v25 - 4 >= max_length )
                break;
              if ( v27 >= max_length )
                goto LABEL_72;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v25);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v24, 0);
                v28 = this->fields.effectSp;
                if ( v28 )
                {
                  if ( v27 >= LODWORD(v28->max_length) )
LABEL_72:
                    sub_21FFED4(UIAtlasBySpriteName);
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v28->obj.klass + v25);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v21, 0);
                    effectSp = this->fields.effectSp;
                    ++v25;
                    if ( effectSp )
                      continue;
                  }
                }
              }
              goto LABEL_24;
            }
            boostItemSp = (UnityEngine_Object_o *)this->fields.boostItemSp;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boostEnt, v22);
            if ( UnityEngine_Object__op_Inequality(boostItemSp, 0, 0) )
            {
              if ( itemImgId < 1 )
              {
                v32 = 0;
              }
              else
              {
                v31 = this->fields.boostItemSp;
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, boostEnt, v30);
                v32 = AtlasManager__SetItem(v31, itemImgId, 0);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_24;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0);
              if ( !UIAtlasBySpriteName )
                goto LABEL_24;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v32, 0);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boostEnt, v30);
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0, 0) )
            {
              v36 = this->fields.boostCntLb;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
              v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5884/*"EVENT_RACE_BOOST_COUNT"*/, 0);
              v61 = boostPoint;
              v38 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v61);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v37, v38, 0);
              if ( !v36 )
                goto LABEL_24;
              UILabel__set_text(v36, (System_String_o *)UIAtlasBySpriteName, 0);
            }
            v39 = EventRaceBoostEffect_TypeInfo;
            if ( !*(&EventRaceBoostEffect_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo, v34, v35);
              v39 = EventRaceBoostEffect_TypeInfo;
            }
            static_fields = v39->static_fields;
            v60 = boostGrade;
            ANIM_NAME = static_fields->ANIM_NAME;
            v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v60);
            v43 = System_String__Format(ANIM_NAME, v42, 0);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                       (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
              if ( UIAtlasBySpriteName )
              {
                v47 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                        (UnityEngine_Component_o *)UIAtlasBySpriteName,
                        (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
                UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)ComponentInChildren_object__58644924,
                                                     0,
                                                     0);
                if ( ((unsigned __int8)UIAtlasBySpriteName & 1) != 0 )
                {
                  if ( ComponentInChildren_object__58644924 )
                  {
                    SimpleAnimation__Play_78338864((SimpleAnimation_o *)ComponentInChildren_object__58644924, v43, 0);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_object__58644924,
                                                         v43,
                                                         0);
                    if ( UIAtlasBySpriteName )
                    {
                      v49 = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v50 = UIAtlasBySpriteName;
                      v51 = *(unsigned __int16 *)&UIAtlasBySpriteName->klass->_2.rank;
                      if ( *(_WORD *)&UIAtlasBySpriteName->klass->_2.rank )
                      {
                        p_offset = (SimpleAnimation_State_c **)&v49->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          --v51;
                          p_offset += 2;
                          if ( !v51 )
                            goto LABEL_56;
                        }
                        v53 = (__int64)(&v49->vtable._13_GetSides + *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_56:
                        v53 = sub_2237E2C(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
                      goto LABEL_65;
                    }
                  }
                }
                else
                {
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boostEnt, v48);
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v47,
                                                       0,
                                                       0);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_66;
                  if ( v47 )
                  {
                    UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)v47, v43, 0);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v47,
                                                         v43,
                                                         0);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0);
LABEL_65:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_23495/*"onEndAnim"*/,
                        length,
                        0);
LABEL_66:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0);
                      if ( System_String__IsNullOrEmpty(Se, 0) )
                      {
                        EventRaceBoostEffect__afterSE(this, v56);
                      }
                      else
                      {
                        v57 = Method_EventRaceBoostEffect_setupLocal__;
                        if ( (*((_BYTE *)Method_EventRaceBoostEffect_setupLocal__ + 83) & 2) != 0 )
                          v57 = (_QWORD *)sub_21FFC68(Method_EventRaceBoostEffect_setupLocal__);
                        v58 = (System_Reflection_MethodBase_o *)sub_21FFC34(v57, v57[4]);
                        v59 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                        System_Action___ctor(
                          v59,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0);
                        OverwriteAssetSoundName__PlaySe_48366436(v58, Se, 1.0, v59, 0, 0);
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
LABEL_24:
    sub_21FFECC(UIAtlasBySpriteName, boostEnt);
  }
}


void EventRaceBoostEffect___c__DisplayClass13_0___ctor(
        EventRaceBoostEffect___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRaceBoostEffect___c__DisplayClass13_0___SetUpAndPlay_b__0(
        EventRaceBoostEffect___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  EventRaceBoostEffect__setupLocal(
    this->fields.__4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    v2);
}