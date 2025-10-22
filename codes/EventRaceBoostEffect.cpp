void EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct EventRaceBoostEffect_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C5378B & 1) == 0 )
  {
    sub_1C3E564(&EventRaceBoostEffect_TypeInfo);
    sub_1C3E564(&StringLiteral_22942/*"race_boost_effect_{0}"*/);
    sub_1C3E564(&StringLiteral_6239/*"EventRaceBoostEffect_{0}"*/);
    byte_4C5378B = 1;
  }
  EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME = (struct System_String_o *)StringLiteral_22942/*"race_boost_effect_{0}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)EventRaceBoostEffect_TypeInfo->static_fields, StringLiteral_22942/*"race_boost_effect_{0}"*/, v1, v2);
  v3 = StringLiteral_6239/*"EventRaceBoostEffect_{0}"*/;
  static_fields = EventRaceBoostEffect_TypeInfo->static_fields;
  static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_6239/*"EventRaceBoostEffect_{0}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->ANIM_NAME, v3, v5, v6);
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

  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0), result = 0, !this) )
    sub_1C3E7C0(this, voiceStr);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1C3E7C8(this, voiceStr);
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

  if ( (byte_4C53789 & 1) == 0 )
  {
    this = (EventRaceBoostEffect_o *)sub_1C3E564(&StringLiteral_16119/*"_"*/);
    byte_4C53789 = 1;
  }
  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0)) == 0 )
    sub_1C3E7C0(this, voiceStr);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 2 )
    return 0;
  if ( m_CancellationTokenSource == 2 )
    sub_1C3E7C8(this, voiceStr);
  return System_String__Concat_63674716(
           (System_String_o *)this->fields.boostItemSp,
           (System_String_o *)StringLiteral_16119/*"_"*/,
           (System_String_o *)this->fields.boostCntLb,
           0);
}


void EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v5; // x19
  System_String_o *VoiceAssetName_42847476; // x0
  __int64 v7; // x1

  if ( (byte_4C5378A & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    byte_4C5378A = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v5 = (SoundManager_o *)Instance;
    VoiceAssetName_42847476 = ServantVoiceEntity__getVoiceAssetName_42847476(randvoiceSvt, 0);
    if ( !v5 )
      sub_1C3E7C0(VoiceAssetName_42847476, v7);
    SoundManager__ReleaseAudioAssetStorage(v5, VoiceAssetName_42847476, 0);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  QuestRacePointEntity_o **v20; // x27
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v30; // x2
  struct System_String_o *VoiceId; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x6
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v37; // x19
  System_String_o *VoiceAssetName_42847476; // x21
  System_Action_o *v39; // x22

  if ( (byte_4C53785 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C3E564(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__);
    sub_1C3E564(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
    byte_4C53785 = 1;
  }
  v15 = sub_1C3E7B0(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 24) = boostEnt;
  v20 = (QuestRacePointEntity_o **)(v15 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)(v15 + 24), (int32_t)boostEnt, v21, v22);
  *(_QWORD *)(v15 + 48) = callback;
  *(_DWORD *)(v15 + 32) = boostGrade;
  *(_DWORD *)(v15 + 36) = boostPoint;
  *(_DWORD *)(v15 + 40) = itemImgId;
  sub_1C3E508((CGThumbnailListItem_o *)(v15 + 48), (int32_t)callback, v23, v24);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.randvoiceId, 0, (int32_t)v25, v26);
    EventRaceBoostEffect__setupLocal(
      this,
      *(QuestRacePointEntity_o **)(v15 + 24),
      *(_DWORD *)(v15 + 32),
      *(_DWORD *)(v15 + 36),
      *(_DWORD *)(v15 + 40),
      *(System_Action_o **)(v15 + 48),
      v34);
    return;
  }
  v16 = *v20;
  if ( !*v20 )
    goto LABEL_12;
  RandVoice = QuestRacePointEntity__GetRandVoice(v16, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      v25);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v30);
  this->fields.randvoiceId = VoiceId;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.randvoiceId, (int32_t)VoiceId, v32, v33);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v37 = (SoundManager_o *)Instance;
  VoiceAssetName_42847476 = ServantVoiceEntity__getVoiceAssetName_42847476(randvoiceSvt, 0);
  v39 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v15,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0);
  if ( !v37 )
LABEL_12:
    sub_1C3E7C0(v16, v17);
  SoundManager__LoadAudioAssetStorage(v37, VoiceAssetName_42847476, v39, 1, 0);
}


void EventRaceBoostEffect__afterSE(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  System_String_o *randvoiceId; // x20
  System_String_o *v7; // x21
  SeManager_c *v8; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v10; // x22

  if ( (byte_4C53787 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EventRaceBoostEffect_afterVoice__);
    sub_1C3E564(&SeManager_TypeInfo);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&StringLiteral_4424/*"ChrVoice_"*/);
    byte_4C53787 = 1;
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
      v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_4424/*"ChrVoice_"*/, v4, 0);
      randvoiceId = this->fields.randvoiceId;
      v7 = v5;
      v8 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v8 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v8->static_fields->DEFAULT_VOLUME;
      v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playVoice_41566940(v7, randvoiceId, DEFAULT_VOLUME, v10, 0, 0);
    }
  }
}


void EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C53788 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53788 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(gameObject, 0);
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
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v15; // x8
  System_Collections_Generic_List_UIAtlas__o *v16; // x25
  System_String_o *SP_NAME; // x24
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  System_String_o *v25; // x24
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v27; // x25
  __int64 v28; // x28
  int max_length; // w9
  unsigned int v30; // w22
  struct UISprite_array *v31; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v33; // x24
  bool v34; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  UILabel_o *v42; // x23
  System_String_o *v43; // x24
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x0
  EventRaceBoostEffect_c *v51; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v53; // x0
  System_String_o *v54; // x21
  Il2CppObject *ComponentInChildren_object__51315876; // x23
  Il2CppObject *v56; // x22
  UISprite_c *v57; // x8
  UIAtlas_o *v58; // x21
  __int64 v59; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v61; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v64; // x1
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x21
  System_Action_o *v67; // x22
  int32_t v68; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v69; // [xsp+8h] [xbp-68h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C53786 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C3E564(&Method_EventRaceBoostEffect__setupLocal_b__14_0__);
    sub_1C3E564(&Method_EventRaceBoostEffect_setupLocal__);
    sub_1C3E564(&EventRaceBoostEffect_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_5665/*"EVENT_RACE_BOOST_COUNT"*/);
    sub_1C3E564(&StringLiteral_22427/*"onEndAnim"*/);
    byte_4C53786 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C50C86 )
    {
      sub_1C3E564(&TerminalSceneComponent_TypeInfo);
      byte_4C50C86 = 1;
    }
    UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = (UIWidget_OnDimensionsChanged_c *)UIAtlasBySpriteName[1].fields.mSpriteIndices->klass;
    if ( klass )
    {
      v15 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( v15 )
      {
        v16 = *(System_Collections_Generic_List_UIAtlas__o **)(v15 + 304);
        this->fields.callBack = callback;
        sub_1C3E508(
          (CGThumbnailListItem_o *)&this->fields.callBack,
          (int32_t)callback,
          boostGrade,
          *(const MethodInfo **)&boostPoint);
        UIAtlasBySpriteName = (UIAtlas_o *)EventRaceBoostEffect_TypeInfo;
        if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
        if ( boostEnt )
        {
          SP_NAME = EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME;
          BoostTypeColor = QuestRacePointEntity__GetBoostTypeColor(boostEnt, 0);
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor, v18, v19, v20, v21, v22, v23);
          v25 = System_String__Format(SP_NAME, v24, 0);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v16, v25, 0);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v27 = UIAtlasBySpriteName;
            v28 = 4;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v30 = v28 - 4;
              if ( (int)v28 - 4 >= max_length )
                break;
              if ( v30 >= max_length )
                goto LABEL_73;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v28);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v27, 0);
                v31 = this->fields.effectSp;
                if ( v31 )
                {
                  if ( v30 >= LODWORD(v31->max_length) )
LABEL_73:
                    sub_1C3E7C8(UIAtlasBySpriteName, boostEnt);
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v31->obj.klass + v28);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v25, 0);
                    effectSp = this->fields.effectSp;
                    ++v28;
                    if ( effectSp )
                      continue;
                  }
                }
              }
              goto LABEL_72;
            }
            boostItemSp = (UnityEngine_Object_o *)this->fields.boostItemSp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(boostItemSp, 0, 0) )
            {
              if ( itemImgId < 1 )
              {
                v34 = 0;
              }
              else
              {
                v33 = this->fields.boostItemSp;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                v34 = AtlasManager__SetItem(v33, itemImgId, 0);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0);
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v34, 0);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0, 0) )
            {
              v42 = this->fields.boostCntLb;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5665/*"EVENT_RACE_BOOST_COUNT"*/, 0);
              v69 = boostPoint;
              v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v44, v45, v46, v47, v48, v49);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v43, v50, 0);
              if ( !v42 )
                goto LABEL_72;
              UILabel__set_text(v42, (System_String_o *)UIAtlasBySpriteName, 0);
            }
            v51 = EventRaceBoostEffect_TypeInfo;
            if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v51 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v51->static_fields->ANIM_NAME;
            v68 = boostGrade;
            v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v36, v37, v38, v39, v40, v41);
            v54 = System_String__Format(ANIM_NAME, v53, 0);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_object__51315876 = UnityEngine_Component__GetComponentInChildren_object__51315876(
                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                       (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
              if ( UIAtlasBySpriteName )
              {
                v56 = UnityEngine_Component__GetComponentInChildren_object__51315876(
                        (UnityEngine_Component_o *)UIAtlasBySpriteName,
                        (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)ComponentInChildren_object__51315876,
                                                     0,
                                                     0);
                if ( ((unsigned __int8)UIAtlasBySpriteName & 1) != 0 )
                {
                  if ( ComponentInChildren_object__51315876 )
                  {
                    SimpleAnimation__Play_66582224((SimpleAnimation_o *)ComponentInChildren_object__51315876, v54, 0);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_object__51315876,
                                                         v54,
                                                         0);
                    if ( UIAtlasBySpriteName )
                    {
                      v57 = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v58 = UIAtlasBySpriteName;
                      v59 = *(unsigned __int16 *)&UIAtlasBySpriteName->klass->_2.rank;
                      if ( *(_WORD *)&UIAtlasBySpriteName->klass->_2.rank )
                      {
                        p_offset = (SimpleAnimation_State_c **)&v57->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          --v59;
                          p_offset += 2;
                          if ( !v59 )
                            goto LABEL_56;
                        }
                        v61 = (__int64)(&v57->vtable._13_GetSides + *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_56:
                        v61 = sub_1C8ED7C(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v61)(v58, *(_QWORD *)(v61 + 8));
                      goto LABEL_65;
                    }
                  }
                }
                else
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v56,
                                                       0,
                                                       0);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_66;
                  if ( v56 )
                  {
                    UnityEngine_Animation__Play_71086848((UnityEngine_Animation_o *)v56, v54, 0);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v56,
                                                         v54,
                                                         0);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0);
LABEL_65:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_22427/*"onEndAnim"*/,
                        length,
                        0);
LABEL_66:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0);
                      if ( System_String__IsNullOrEmpty(Se, 0) )
                      {
                        EventRaceBoostEffect__afterSE(this, v64);
                      }
                      else
                      {
                        v65 = Method_EventRaceBoostEffect_setupLocal__;
                        if ( (*((_BYTE *)Method_EventRaceBoostEffect_setupLocal__ + 83) & 2) != 0 )
                          v65 = (_QWORD *)sub_1C3E57C(Method_EventRaceBoostEffect_setupLocal__);
                        v66 = (System_Reflection_MethodBase_o *)sub_1C3E548(v65, v65[4]);
                        v67 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
                        System_Action___ctor(
                          v67,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0);
                        OverwriteAssetSoundName__PlaySe_41468588(v66, Se, 1.0, v67, 0, 0);
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
    sub_1C3E7C0(UIAtlasBySpriteName, boostEnt);
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
    sub_1C3E7C0(this, method);
  EventRaceBoostEffect__setupLocal(
    this->fields.__4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    v2);
}