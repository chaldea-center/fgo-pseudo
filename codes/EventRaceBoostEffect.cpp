void EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct EventRaceBoostEffect_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC3DEE & 1) == 0 )
  {
    sub_1C713B0(&EventRaceBoostEffect_TypeInfo);
    sub_1C713B0(&StringLiteral_23034/*"race_boost_effect_{0}"*/);
    sub_1C713B0(&StringLiteral_6231/*"EventRaceBoostEffect_{0}"*/);
    byte_4CC3DEE = 1;
  }
  EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME = (struct System_String_o *)StringLiteral_23034/*"race_boost_effect_{0}"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventRaceBoostEffect_TypeInfo->static_fields,
    StringLiteral_23034/*"race_boost_effect_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_6231/*"EventRaceBoostEffect_{0}"*/;
  static_fields = EventRaceBoostEffect_TypeInfo->static_fields;
  static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_6231/*"EventRaceBoostEffect_{0}"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->ANIM_NAME, v7, v9, v10, v11, v12, v13, v14);
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
    sub_1C71608(this, voiceStr);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1C71610(this);
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

  if ( (byte_4CC3DEC & 1) == 0 )
  {
    this = (EventRaceBoostEffect_o *)sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CC3DEC = 1;
  }
  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0)) == 0 )
    sub_1C71608(this, voiceStr);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 2 )
    return 0;
  if ( m_CancellationTokenSource == 2 )
    sub_1C71610(this);
  return System_String__Concat_64069988(
           (System_String_o *)this->fields.boostItemSp,
           (System_String_o *)StringLiteral_16109/*"_"*/,
           (System_String_o *)this->fields.boostCntLb,
           0);
}


void EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v5; // x19
  System_String_o *VoiceAssetName_43081620; // x0
  __int64 v7; // x1

  if ( (byte_4CC3DED & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C713B0(&SoundManager_TypeInfo);
    byte_4CC3DED = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v5 = (SoundManager_o *)Instance;
    VoiceAssetName_43081620 = ServantVoiceEntity__getVoiceAssetName_43081620(randvoiceSvt, 0);
    if ( !v5 )
      sub_1C71608(VoiceAssetName_43081620, v7);
    SoundManager__ReleaseAudioAssetStorage(v5, VoiceAssetName_43081620, 0);
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  QuestRacePointEntity_o **v24; // x27
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v46; // x2
  struct System_String_o *VoiceId; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  const MethodInfo *v54; // x6
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v57; // x19
  System_String_o *VoiceAssetName_43081620; // x21
  System_Action_o *v59; // x22

  if ( (byte_4CC3DE8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C713B0(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__);
    sub_1C713B0(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
    byte_4CC3DE8 = 1;
  }
  v15 = sub_1C715FC(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = boostEnt;
  v24 = (QuestRacePointEntity_o **)(v15 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 24), (int32_t)boostEnt, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v15 + 48) = callback;
  *(_DWORD *)(v15 + 32) = boostGrade;
  *(_DWORD *)(v15 + 36) = boostPoint;
  *(_DWORD *)(v15 + 40) = itemImgId;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 48), (int32_t)callback, v31, v32, v33, v34, v35, v36);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.randvoiceId, 0, (int32_t)v37, v38, v39, v40, v41, v42);
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
                                      v37);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v46);
  this->fields.randvoiceId = VoiceId;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.randvoiceId, (int32_t)VoiceId, v48, v49, v50, v51, v52, v53);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v57 = (SoundManager_o *)Instance;
  VoiceAssetName_43081620 = ServantVoiceEntity__getVoiceAssetName_43081620(randvoiceSvt, 0);
  v59 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v15,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0);
  if ( !v57 )
LABEL_12:
    sub_1C71608(v16, v17);
  SoundManager__LoadAudioAssetStorage(v57, VoiceAssetName_43081620, v59, 1, 0);
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

  if ( (byte_4CC3DEA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventRaceBoostEffect_afterVoice__);
    sub_1C713B0(&SeManager_TypeInfo);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&StringLiteral_4417/*"ChrVoice_"*/);
    byte_4CC3DEA = 1;
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
      v5 = System_String__Concat_64031724((System_String_o *)StringLiteral_4417/*"ChrVoice_"*/, v4, 0);
      randvoiceId = this->fields.randvoiceId;
      v7 = v5;
      v8 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v8 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v8->static_fields->DEFAULT_VOLUME;
      v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playVoice_41795520(v7, randvoiceId, DEFAULT_VOLUME, v10, 0, 0);
    }
  }
}


void EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CC3DEB & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3DEB = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
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
  System_String_o *v7; // x7
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v16; // x8
  System_Collections_Generic_List_UIAtlas__o *v17; // x25
  System_String_o *SP_NAME; // x24
  Il2CppObject *v19; // x0
  System_String_o *v20; // x24
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v22; // x25
  __int64 v23; // x28
  int max_length; // w9
  unsigned int v25; // w22
  struct UISprite_array *v26; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v28; // x24
  bool v29; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  UILabel_o *v31; // x23
  System_String_o *v32; // x24
  Il2CppObject *v33; // x0
  EventRaceBoostEffect_c *v34; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v36; // x0
  System_String_o *v37; // x21
  Il2CppObject *ComponentInChildren_object__51649344; // x23
  Il2CppObject *v39; // x22
  UISprite_c *v40; // x8
  UIAtlas_o *v41; // x21
  __int64 v42; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v44; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v47; // x1
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x21
  System_Action_o *v50; // x22
  int32_t v51; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v52; // [xsp+8h] [xbp-68h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CC3DE9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C713B0(&Method_EventRaceBoostEffect__setupLocal_b__14_0__);
    sub_1C713B0(&Method_EventRaceBoostEffect_setupLocal__);
    sub_1C713B0(&EventRaceBoostEffect_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_5658/*"EVENT_RACE_BOOST_COUNT"*/);
    sub_1C713B0(&StringLiteral_22512/*"onEndAnim"*/);
    byte_4CC3DE9 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CC12CE )
    {
      sub_1C713B0(&TerminalSceneComponent_TypeInfo);
      byte_4CC12CE = 1;
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
      v16 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( v16 )
      {
        v17 = *(System_Collections_Generic_List_UIAtlas__o **)(v16 + 304);
        this->fields.callBack = callback;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.callBack,
          (int32_t)callback,
          boostGrade,
          boostPoint,
          *(System_String_o **)&itemImgId,
          (int32_t)callback,
          (int64_t)method,
          v7);
        UIAtlasBySpriteName = (UIAtlas_o *)EventRaceBoostEffect_TypeInfo;
        if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
        if ( boostEnt )
        {
          SP_NAME = EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME;
          BoostTypeColor = QuestRacePointEntity__GetBoostTypeColor(boostEnt, 0);
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor);
          v20 = System_String__Format(SP_NAME, v19, 0);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v17, v20, 0);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v22 = UIAtlasBySpriteName;
            v23 = 4;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v25 = v23 - 4;
              if ( (int)v23 - 4 >= max_length )
                break;
              if ( v25 >= max_length )
                goto LABEL_73;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v23);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v22, 0);
                v26 = this->fields.effectSp;
                if ( v26 )
                {
                  if ( v25 >= LODWORD(v26->max_length) )
LABEL_73:
                    sub_1C71610(UIAtlasBySpriteName);
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v26->obj.klass + v23);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v20, 0);
                    effectSp = this->fields.effectSp;
                    ++v23;
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
                v29 = 0;
              }
              else
              {
                v28 = this->fields.boostItemSp;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                v29 = AtlasManager__SetItem(v28, itemImgId, 0);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0);
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v29, 0);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0, 0) )
            {
              v31 = this->fields.boostCntLb;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5658/*"EVENT_RACE_BOOST_COUNT"*/, 0);
              v52 = boostPoint;
              v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v32, v33, 0);
              if ( !v31 )
                goto LABEL_72;
              UILabel__set_text(v31, (System_String_o *)UIAtlasBySpriteName, 0);
            }
            v34 = EventRaceBoostEffect_TypeInfo;
            if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v34 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v34->static_fields->ANIM_NAME;
            v51 = boostGrade;
            v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
            v37 = System_String__Format(ANIM_NAME, v36, 0);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_object__51649344 = UnityEngine_Component__GetComponentInChildren_object__51649344(
                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                       (const MethodInfo_3141B40 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
              if ( UIAtlasBySpriteName )
              {
                v39 = UnityEngine_Component__GetComponentInChildren_object__51649344(
                        (UnityEngine_Component_o *)UIAtlasBySpriteName,
                        (const MethodInfo_3141B40 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)ComponentInChildren_object__51649344,
                                                     0,
                                                     0);
                if ( ((unsigned __int8)UIAtlasBySpriteName & 1) != 0 )
                {
                  if ( ComponentInChildren_object__51649344 )
                  {
                    SimpleAnimation__Play_66976788((SimpleAnimation_o *)ComponentInChildren_object__51649344, v37, 0);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_object__51649344,
                                                         v37,
                                                         0);
                    if ( UIAtlasBySpriteName )
                    {
                      v40 = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v41 = UIAtlasBySpriteName;
                      v42 = *(unsigned __int16 *)&UIAtlasBySpriteName->klass->_2.rank;
                      if ( *(_WORD *)&UIAtlasBySpriteName->klass->_2.rank )
                      {
                        p_offset = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          --v42;
                          p_offset += 2;
                          if ( !v42 )
                            goto LABEL_56;
                        }
                        v44 = (__int64)(&v40->vtable._13_GetSides + *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_56:
                        v44 = sub_1C47738(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
                      goto LABEL_65;
                    }
                  }
                }
                else
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v39,
                                                       0,
                                                       0);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_66;
                  if ( v39 )
                  {
                    UnityEngine_Animation__Play_71468084((UnityEngine_Animation_o *)v39, v37, 0);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v39,
                                                         v37,
                                                         0);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0);
LABEL_65:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_22512/*"onEndAnim"*/,
                        length,
                        0);
LABEL_66:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0);
                      if ( System_String__IsNullOrEmpty(Se, 0) )
                      {
                        EventRaceBoostEffect__afterSE(this, v47);
                      }
                      else
                      {
                        v48 = Method_EventRaceBoostEffect_setupLocal__;
                        if ( (*((_BYTE *)Method_EventRaceBoostEffect_setupLocal__ + 83) & 2) != 0 )
                          v48 = (_QWORD *)sub_1C713C8(Method_EventRaceBoostEffect_setupLocal__);
                        v49 = (System_Reflection_MethodBase_o *)sub_1C71394(v48, v48[4]);
                        v50 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                        System_Action___ctor(
                          v50,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0);
                        OverwriteAssetSoundName__PlaySe_41696616(v49, Se, 1.0, v50, 0, 0);
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
    sub_1C71608(UIAtlasBySpriteName, boostEnt);
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
    sub_1C71608(this, method);
  EventRaceBoostEffect__setupLocal(
    this->fields.__4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    v2);
}