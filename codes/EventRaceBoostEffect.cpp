void __fastcall EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct EventRaceBoostEffect_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B41572 & 1) == 0 )
  {
    sub_1BDB878(&EventRaceBoostEffect_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_22944/*"race_boost_effect_{0}"*/, v4);
    sub_1BDB878(&StringLiteral_6247/*"EventRaceBoostEffect_{0}"*/, v5);
    byte_4B41572 = 1;
  }
  EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME = (struct System_String_o *)StringLiteral_22944/*"race_boost_effect_{0}"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)EventRaceBoostEffect_TypeInfo->static_fields, StringLiteral_22944/*"race_boost_effect_{0}"*/, v2, v3);
  v6 = StringLiteral_6247/*"EventRaceBoostEffect_{0}"*/;
  static_fields = EventRaceBoostEffect_TypeInfo->static_fields;
  static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_6247/*"EventRaceBoostEffect_{0}"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->ANIM_NAME, v6, v8, v9);
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
  __int64 v3; // x2
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0LL), result = 0, !this) )
    sub_1BDBAD4(this, voiceStr);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1BDBADC(this, voiceStr, v3);
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
  __int64 v4; // x2
  int m_CancellationTokenSource; // w8

  if ( (byte_4B41570 & 1) == 0 )
  {
    this = (EventRaceBoostEffect_o *)sub_1BDB878(&StringLiteral_16088/*"_"*/, voiceStr);
    byte_4B41570 = 1;
  }
  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1BDBAD4(this, voiceStr);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 2 )
    return 0LL;
  if ( m_CancellationTokenSource == 2 )
    sub_1BDBADC(this, voiceStr, v4);
  return System_String__Concat_62610508(
           (System_String_o *)this->fields.boostItemSp,
           (System_String_o *)StringLiteral_16088/*"_"*/,
           (System_String_o *)this->fields.boostCntLb,
           0LL);
}


void __fastcall EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v6; // x19
  System_String_o *VoiceAssetName_41738660; // x0
  __int64 v8; // x1

  if ( (byte_4B41571 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    sub_1BDB878(&SoundManager_TypeInfo, v3);
    byte_4B41571 = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0LL);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v6 = (SoundManager_o *)Instance;
    VoiceAssetName_41738660 = ServantVoiceEntity__getVoiceAssetName_41738660(randvoiceSvt, 0LL);
    if ( !v6 )
      sub_1BDBAD4(VoiceAssetName_41738660, v8);
    SoundManager__ReleaseAudioAssetStorage(v6, VoiceAssetName_41738660, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  QuestRacePointEntity_o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  QuestRacePointEntity_o **v23; // x27
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v33; // x2
  struct System_String_o *VoiceId; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x6
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v40; // x19
  System_String_o *VoiceAssetName_41738660; // x21
  System_Action_o *v42; // x22

  if ( (byte_4B4156C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, boostEnt);
    sub_1BDB878(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v15);
    sub_1BDB878(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__, v16);
    sub_1BDB878(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo, v17);
    byte_4B4156C = 1;
  }
  v18 = sub_1BDBAC4(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 24) = boostEnt;
  v23 = (QuestRacePointEntity_o **)(v18 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 24), (int32_t)boostEnt, v24, v25);
  *(_QWORD *)(v18 + 48) = callback;
  *(_DWORD *)(v18 + 32) = boostGrade;
  *(_DWORD *)(v18 + 36) = boostPoint;
  *(_DWORD *)(v18 + 40) = itemImgId;
  sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 48), (int32_t)callback, v26, v27);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.randvoiceId, 0, (int32_t)v28, v29);
    EventRaceBoostEffect__setupLocal(
      this,
      *(QuestRacePointEntity_o **)(v18 + 24),
      *(_DWORD *)(v18 + 32),
      *(_DWORD *)(v18 + 36),
      *(_DWORD *)(v18 + 40),
      *(System_Action_o **)(v18 + 48),
      v37);
    return;
  }
  v19 = *v23;
  if ( !*v23 )
    goto LABEL_12;
  RandVoice = QuestRacePointEntity__GetRandVoice(v19, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      v28);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v33);
  this->fields.randvoiceId = VoiceId;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.randvoiceId, (int32_t)VoiceId, v35, v36);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v40 = (SoundManager_o *)Instance;
  VoiceAssetName_41738660 = ServantVoiceEntity__getVoiceAssetName_41738660(randvoiceSvt, 0LL);
  v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v18,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0LL);
  if ( !v40 )
LABEL_12:
    sub_1BDBAD4(v19, v20);
  SoundManager__LoadAudioAssetStorage(v40, VoiceAssetName_41738660, v42, 1, 0LL);
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
  System_String_o *randvoiceId; // x20
  System_String_o *v11; // x21
  SeManager_c *v12; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v14; // x22

  if ( (byte_4B4156E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventRaceBoostEffect_afterVoice__, v3);
    sub_1BDB878(&SeManager_TypeInfo, v4);
    sub_1BDB878(&SoundManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_4463/*"ChrVoice_"*/, v6);
    byte_4B4156E = 1;
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
      v8 = System_Int32__ToString((int)this + 68, 0LL);
      v9 = System_String__Concat_62572260((System_String_o *)StringLiteral_4463/*"ChrVoice_"*/, v8, 0LL);
      randvoiceId = this->fields.randvoiceId;
      v11 = v9;
      v12 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v12 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v12->static_fields->DEFAULT_VOLUME;
      v14 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playVoice_40520012(v11, randvoiceId, DEFAULT_VOLUME, v14, 0, 0LL);
    }
  }
}


void __fastcall EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B4156F & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4156F = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
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
  __int64 v13; // x1
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
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v28; // x8
  System_Collections_Generic_List_UIAtlas__o *v29; // x25
  System_String_o *SP_NAME; // x24
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x24
  __int64 v36; // x2
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v38; // x25
  __int64 v39; // x28
  int max_length; // w9
  il2cpp_array_size_t v41; // w22
  struct UISprite_array *v42; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v44; // x24
  bool v45; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  UILabel_o *v50; // x23
  System_String_o *v51; // x24
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  EventRaceBoostEffect_c *v56; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v58; // x0
  System_String_o *v59; // x21
  Il2CppObject *ComponentInChildren_object__50504592; // x23
  Il2CppObject *v61; // x22
  UISprite_c *v62; // x8
  UIAtlas_o *v63; // x21
  __int64 v64; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v66; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v69; // x1
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x21
  System_Action_o *v72; // x22
  int32_t v73; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v74; // [xsp+8h] [xbp-68h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B4156D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, boostEnt);
    sub_1BDB878(&AtlasManager_TypeInfo, v13);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v14);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v15);
    sub_1BDB878(&Method_EventRaceBoostEffect__setupLocal_b__14_0__, v16);
    sub_1BDB878(&Method_EventRaceBoostEffect_setupLocal__, v17);
    sub_1BDB878(&EventRaceBoostEffect_TypeInfo, v18);
    sub_1BDB878(&int_TypeInfo, v19);
    sub_1BDB878(&LocalizationManager_TypeInfo, v20);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v21);
    sub_1BDB878(&SimpleAnimation_State_TypeInfo, v22);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v23);
    sub_1BDB878(&StringLiteral_5689/*"EVENT_RACE_BOOST_COUNT"*/, v24);
    sub_1BDB878(&StringLiteral_22428/*"onEndAnim"*/, v25);
    byte_4B4156D = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B3EEEF )
    {
      sub_1BDB878(&TerminalSceneComponent_TypeInfo, boostEnt);
      byte_4B3EEEF = 1;
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
      v28 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( v28 )
      {
        v29 = *(System_Collections_Generic_List_UIAtlas__o **)(v28 + 304);
        this->fields.callBack = callback;
        sub_1BDB81C(
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
          BoostTypeColor = QuestRacePointEntity__GetBoostTypeColor(boostEnt, 0LL);
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor, v31, v32, v33);
          v35 = System_String__Format(SP_NAME, v34, 0LL);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v29, v35, 0LL);
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
                goto LABEL_73;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v39);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v38, 0LL);
                v42 = this->fields.effectSp;
                if ( v42 )
                {
                  if ( v41 >= v42->max_length )
LABEL_73:
                    sub_1BDBADC(UIAtlasBySpriteName, boostEnt, v36);
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v42->obj.klass + v39);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v35, 0LL);
                    effectSp = this->fields.effectSp;
                    ++v39;
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
                v45 = 0;
              }
              else
              {
                v44 = this->fields.boostItemSp;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                v45 = AtlasManager__SetItem(v44, itemImgId, 0LL);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0LL);
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v45, 0LL);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0LL, 0LL) )
            {
              v50 = this->fields.boostCntLb;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EVENT_RACE_BOOST_COUNT"*/, 0LL);
              v74 = boostPoint;
              v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, v52, v53, v54);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v51, v55, 0LL);
              if ( !v50 )
                goto LABEL_72;
              UILabel__set_text(v50, (System_String_o *)UIAtlasBySpriteName, 0LL);
            }
            v56 = EventRaceBoostEffect_TypeInfo;
            if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v56 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v56->static_fields->ANIM_NAME;
            v73 = boostGrade;
            v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v47, v48, v49);
            v59 = System_String__Format(ANIM_NAME, v58, 0LL);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_object__50504592 = UnityEngine_Component__GetComponentInChildren_object__50504592(
                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                       (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
              if ( UIAtlasBySpriteName )
              {
                v61 = UnityEngine_Component__GetComponentInChildren_object__50504592(
                        (UnityEngine_Component_o *)UIAtlasBySpriteName,
                        (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)ComponentInChildren_object__50504592,
                                                     0LL,
                                                     0LL);
                if ( ((unsigned __int8)UIAtlasBySpriteName & 1) != 0 )
                {
                  if ( ComponentInChildren_object__50504592 )
                  {
                    SimpleAnimation__Play_65523240((SimpleAnimation_o *)ComponentInChildren_object__50504592, v59, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_object__50504592,
                                                         v59,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      v62 = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v63 = UIAtlasBySpriteName;
                      v64 = *(unsigned __int16 *)(&UIAtlasBySpriteName->klass->_2.bitflags2 + 3);
                      if ( *(_WORD *)(&UIAtlasBySpriteName->klass->_2.bitflags2 + 3) )
                      {
                        p_offset = (SimpleAnimation_State_c **)&v62->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          --v64;
                          p_offset += 2;
                          if ( !v64 )
                            goto LABEL_56;
                        }
                        v66 = (__int64)(&v62->vtable._13_GetSides.method + 2 * *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_56:
                        v66 = sub_1C2C00C(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13LL);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v66)(v63, *(_QWORD *)(v66 + 8));
                      goto LABEL_65;
                    }
                  }
                }
                else
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v61,
                                                       0LL,
                                                       0LL);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_66;
                  if ( v61 )
                  {
                    UnityEngine_Animation__Play_70027660((UnityEngine_Animation_o *)v61, v59, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v61,
                                                         v59,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0LL);
LABEL_65:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_22428/*"onEndAnim"*/,
                        length,
                        0LL);
LABEL_66:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0LL);
                      if ( System_String__IsNullOrEmpty(Se, 0LL) )
                      {
                        EventRaceBoostEffect__afterSE(this, v69);
                      }
                      else
                      {
                        v70 = Method_EventRaceBoostEffect_setupLocal__;
                        if ( (*((_BYTE *)Method_EventRaceBoostEffect_setupLocal__ + 83) & 2) != 0 )
                          v70 = (_QWORD *)sub_1BDB890(Method_EventRaceBoostEffect_setupLocal__);
                        v71 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v70, v70[4]);
                        v72 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                        System_Action___ctor(
                          v72,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0LL);
                        OverwriteAssetSoundName__PlaySe_40422948(v71, Se, 1.0, v72, 0, 0LL);
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
    sub_1BDBAD4(UIAtlasBySpriteName, boostEnt);
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
    sub_1BDBAD4(this, method);
  EventRaceBoostEffect__setupLocal(
    this->fields.__4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    v2);
}