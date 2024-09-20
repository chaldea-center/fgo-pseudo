void __fastcall EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct EventRaceBoostEffect_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A57EE8 & 1) == 0 )
  {
    sub_1B885B0(&EventRaceBoostEffect_TypeInfo);
    sub_1B885B0(&StringLiteral_22746/*"race_boost_effect_{0}"*/);
    sub_1B885B0(&StringLiteral_6199/*"EventRaceBoostEffect_{0}"*/);
    byte_4A57EE8 = 1;
  }
  EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME = (struct System_String_o *)StringLiteral_22746/*"race_boost_effect_{0}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventRaceBoostEffect_TypeInfo->static_fields,
    StringLiteral_22746/*"race_boost_effect_{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_6199/*"EventRaceBoostEffect_{0}"*/;
  static_fields = EventRaceBoostEffect_TypeInfo->static_fields;
  static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_6199/*"EventRaceBoostEffect_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->ANIM_NAME, v3, v5, v6);
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
    sub_1B8880C(this, voiceStr);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1B88814(this, voiceStr);
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

  if ( (byte_4A57EE6 & 1) == 0 )
  {
    this = (EventRaceBoostEffect_o *)sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A57EE6 = 1;
  }
  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1B8880C(this, voiceStr);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 2 )
    return 0LL;
  if ( m_CancellationTokenSource == 2 )
    sub_1B88814(this, voiceStr);
  return System_String__Concat_61718292(
           (System_String_o *)this->fields.boostItemSp,
           (System_String_o *)StringLiteral_16123/*"_"*/,
           (System_String_o *)this->fields.boostCntLb,
           0LL);
}


void __fastcall EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v5; // x19
  System_String_o *VoiceAssetName_39766344; // x0
  __int64 v7; // x1

  if ( (byte_4A57EE7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A57EE7 = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0LL);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v5 = (SoundManager_o *)Instance;
    VoiceAssetName_39766344 = ServantVoiceEntity__getVoiceAssetName_39766344(randvoiceSvt, 0LL);
    if ( !v5 )
      sub_1B8880C(VoiceAssetName_39766344, v7);
    SoundManager__ReleaseAudioAssetStorage(v5, VoiceAssetName_39766344, 0LL);
  }
}


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
  __int64 v15; // x20
  QuestRacePointEntity_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  QuestRacePointEntity_o **v20; // x27
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x2
  int32_t v26; // w3
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v30; // x2
  struct System_String_o *VoiceId; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x6
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v37; // x19
  System_String_o *VoiceAssetName_39766344; // x21
  System_Action_o *v39; // x22

  if ( (byte_4A57EE2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__);
    sub_1B885B0(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
    byte_4A57EE2 = 1;
  }
  v15 = sub_1B887FC(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 24) = boostEnt;
  v20 = (QuestRacePointEntity_o **)(v15 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)boostEnt, v21, v22);
  *(_QWORD *)(v15 + 48) = callback;
  *(_DWORD *)(v15 + 32) = boostGrade;
  *(_DWORD *)(v15 + 36) = boostPoint;
  *(_DWORD *)(v15 + 40) = itemImgId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 48), (int32_t)callback, v23, v24);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randvoiceId, 0, (int32_t)v25, v26);
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
  RandVoice = QuestRacePointEntity__GetRandVoice(v16, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      v25);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v30);
  this->fields.randvoiceId = VoiceId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randvoiceId, (int32_t)VoiceId, v32, v33);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v37 = (SoundManager_o *)Instance;
  VoiceAssetName_39766344 = ServantVoiceEntity__getVoiceAssetName_39766344(randvoiceSvt, 0LL);
  v39 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v15,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0LL);
  if ( !v37 )
LABEL_12:
    sub_1B8880C(v16, v17);
  SoundManager__LoadAudioAssetStorage(v37, VoiceAssetName_39766344, v39, 1, 0LL);
}


void __fastcall EventRaceBoostEffect__afterSE(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  System_String_o *randvoiceId; // x20
  System_String_o *v7; // x21
  SeManager_c *v8; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v10; // x22

  if ( (byte_4A57EE4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventRaceBoostEffect_afterVoice__);
    sub_1B885B0(&SeManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&StringLiteral_4464/*"ChrVoice_"*/);
    byte_4A57EE4 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    this->fields.seEnded = 1;
    EventRaceBoostEffect__CheckCallback(this, method);
    if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    {
      EventRaceBoostEffect__afterVoice(this, v3);
    }
    else
    {
      v4 = System_Int32__ToString((int)this + 68, 0LL);
      v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_4464/*"ChrVoice_"*/, v4, 0LL);
      randvoiceId = this->fields.randvoiceId;
      v7 = v5;
      v8 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v8 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v8->static_fields->DEFAULT_VOLUME;
      v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playVoice_38702940(v7, randvoiceId, DEFAULT_VOLUME, v10, 0LL);
    }
  }
}


void __fastcall EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A57EE5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57EE5 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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


void __fastcall EventRaceBoostEffect__setupLocal(
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
  Il2CppObject *v21; // x0
  System_String_o *v22; // x24
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v24; // x25
  __int64 v25; // x28
  int max_length; // w9
  il2cpp_array_size_t v27; // w22
  struct UISprite_array *v28; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v30; // x24
  bool v31; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  UILabel_o *v36; // x23
  System_String_o *v37; // x24
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  EventRaceBoostEffect_c *v42; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v44; // x0
  System_String_o *v45; // x21
  Il2CppObject *ComponentInChildren_object__48719376; // x23
  Il2CppObject *v47; // x22
  UISprite_c *v48; // x8
  UIAtlas_o *v49; // x21
  __int64 v50; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v52; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v55; // x1
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x21
  System_Action_o *v58; // x22
  int32_t v59; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v60; // [xsp+8h] [xbp-68h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A57EE3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&Method_EventRaceBoostEffect__setupLocal_b__14_0__);
    sub_1B885B0(&Method_EventRaceBoostEffect_setupLocal__);
    sub_1B885B0(&EventRaceBoostEffect_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_5670/*"EVENT_RACE_BOOST_COUNT"*/);
    sub_1B885B0(&StringLiteral_22252/*"onEndAnim"*/);
    byte_4A57EE3 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
      v15 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( v15 )
      {
        v16 = *(System_Collections_Generic_List_UIAtlas__o **)(v15 + 296);
        this->fields.callBack = callback;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.callBack,
          (int32_t)callback,
          boostGrade,
          boostPoint);
        UIAtlasBySpriteName = (UIAtlas_o *)EventRaceBoostEffect_TypeInfo;
        if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
        if ( boostEnt )
        {
          SP_NAME = EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME;
          BoostTypeColor = QuestRacePointEntity__GetBoostTypeColor(boostEnt, 0LL);
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor, v18, v19, v20);
          v22 = System_String__Format(SP_NAME, v21, 0LL);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v16, v22, 0LL);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v24 = UIAtlasBySpriteName;
            v25 = 4LL;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v27 = v25 - 4;
              if ( (int)v25 - 4 >= max_length )
                break;
              if ( v27 >= max_length )
                goto LABEL_73;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v25);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v24, 0LL);
                v28 = this->fields.effectSp;
                if ( v28 )
                {
                  if ( v27 >= v28->max_length )
LABEL_73:
                    sub_1B88814(UIAtlasBySpriteName, boostEnt);
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v28->obj.klass + v25);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v22, 0LL);
                    effectSp = this->fields.effectSp;
                    ++v25;
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
            if ( UnityEngine_Object__op_Inequality(boostItemSp, 0LL, 0LL) )
            {
              if ( itemImgId < 1 )
              {
                v31 = 0;
              }
              else
              {
                v30 = this->fields.boostItemSp;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                v31 = AtlasManager__SetItem(v30, itemImgId, 0LL);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0LL);
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v31, 0LL);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0LL, 0LL) )
            {
              v36 = this->fields.boostCntLb;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5670/*"EVENT_RACE_BOOST_COUNT"*/, 0LL);
              v60 = boostPoint;
              v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v38, v39, v40);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v37, v41, 0LL);
              if ( !v36 )
                goto LABEL_72;
              UILabel__set_text(v36, (System_String_o *)UIAtlasBySpriteName, 0LL);
            }
            v42 = EventRaceBoostEffect_TypeInfo;
            if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v42 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v42->static_fields->ANIM_NAME;
            v59 = boostGrade;
            v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v33, v34, v35);
            v45 = System_String__Format(ANIM_NAME, v44, 0LL);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                       (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
              if ( UIAtlasBySpriteName )
              {
                v47 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                        (UnityEngine_Component_o *)UIAtlasBySpriteName,
                        (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)ComponentInChildren_object__48719376,
                                                     0LL,
                                                     0LL);
                if ( ((unsigned __int8)UIAtlasBySpriteName & 1) != 0 )
                {
                  if ( ComponentInChildren_object__48719376 )
                  {
                    SimpleAnimation__Play_63844704((SimpleAnimation_o *)ComponentInChildren_object__48719376, v45, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_object__48719376,
                                                         v45,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      v48 = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v49 = UIAtlasBySpriteName;
                      v50 = *(unsigned __int16 *)(&UIAtlasBySpriteName->klass->_2.bitflags2 + 3);
                      if ( *(_WORD *)(&UIAtlasBySpriteName->klass->_2.bitflags2 + 3) )
                      {
                        p_offset = (SimpleAnimation_State_c **)&v48->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          --v50;
                          p_offset += 2;
                          if ( !v50 )
                            goto LABEL_56;
                        }
                        v52 = (__int64)(&v48->vtable._13_GetSides.method + 2 * *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_56:
                        v52 = sub_1BDA590(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13LL);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v52)(v49, *(_QWORD *)(v52 + 8));
                      goto LABEL_65;
                    }
                  }
                }
                else
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v47,
                                                       0LL,
                                                       0LL);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_66;
                  if ( v47 )
                  {
                    UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v47, v45, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v47,
                                                         v45,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0LL);
LABEL_65:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_22252/*"onEndAnim"*/,
                        length,
                        0LL);
LABEL_66:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0LL);
                      if ( System_String__IsNullOrEmpty(Se, 0LL) )
                      {
                        EventRaceBoostEffect__afterSE(this, v55);
                      }
                      else
                      {
                        v56 = Method_EventRaceBoostEffect_setupLocal__;
                        if ( (*((_BYTE *)Method_EventRaceBoostEffect_setupLocal__ + 83) & 2) != 0 )
                          v56 = (_QWORD *)sub_1B885C8(Method_EventRaceBoostEffect_setupLocal__);
                        v57 = (System_Reflection_MethodBase_o *)sub_1B88594(v56, v56[4]);
                        v58 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                        System_Action___ctor(
                          v58,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0LL);
                        OverwriteAssetSoundName__PlaySe_38530716(v57, Se, 1.0, v58, 0LL);
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
    sub_1B8880C(UIAtlasBySpriteName, boostEnt);
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
    sub_1B8880C(this, method);
  EventRaceBoostEffect__setupLocal(
    this->fields.__4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    v2);
}