void __fastcall EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventRaceBoostEffect_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438BD1C & 1) == 0 )
  {
    sub_B775C4(&EventRaceBoostEffect_TypeInfo);
    sub_B775C4(&StringLiteral_22124/*"race_boost_effect_{0}"*/);
    sub_B775C4(&StringLiteral_6330/*"EventRaceBoostEffect_{0}"*/);
    byte_438BD1C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRaceBoostEffect_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22124/*"race_boost_effect_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22124/*"race_boost_effect_{0}"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventRaceBoostEffect_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6330/*"EventRaceBoostEffect_{0}"*/;
  v9->ANIM_NAME = (struct System_String_o *)StringLiteral_6330/*"EventRaceBoostEffect_{0}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->ANIM_NAME, v10, v11, v12, v13, v14, v15, v16);
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
  System_String_array *v5; // x1
  __int64 v7; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438BD19 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    byte_438BD19 = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_11;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_12;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !voiceStr || (v4 = System_String__Split(voiceStr, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_11:
    sub_B7769C(v4, v5);
  if ( !v4->max_length )
  {
LABEL_12:
    v7 = sub_B776C8(v4);
    sub_B77668(v7, 0LL);
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
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  int max_length; // w8
  __int64 v8; // x0

  if ( (byte_438BD1A & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    byte_438BD1A = 1;
  }
  v4 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_11;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_12;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !voiceStr || (v4 = System_String__Split(voiceStr, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_11:
    sub_B7769C(v4, v5);
  max_length = v4->max_length;
  if ( max_length >= 2 )
  {
    if ( max_length != 2 )
      return System_String__Concat_44904220(v4->m_Items[1], (System_String_o *)StringLiteral_16197/*"_"*/, v4->m_Items[2], 0LL);
LABEL_12:
    v8 = sub_B776C8(v4);
    sub_B77668(v8, 0LL);
  }
  return 0LL;
}


void __fastcall EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v5; // x19
  System_String_o *VoiceAssetName_30265396; // x0
  __int64 v7; // x1

  if ( (byte_438BD1B & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BD1B = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0LL);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v5 = (SoundManager_o *)Instance;
    VoiceAssetName_30265396 = ServantVoiceEntity__getVoiceAssetName_30265396(randvoiceSvt, 0LL);
    if ( !v5 )
      sub_B7769C(VoiceAssetName_30265396, v7);
    SoundManager__ReleaseAudioAssetStorage(v5, VoiceAssetName_30265396, 0LL);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  QuestRacePointEntity_o **v24; // x27
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
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v46; // x2
  struct System_String_o *VoiceId; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x6
  WebViewManager_o *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v57; // x19
  System_String_o *VoiceAssetName_30265396; // x21
  System_Action_o *v59; // x22

  if ( (byte_438BD15 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B775C4(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__);
    sub_B775C4(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
    byte_438BD15 = 1;
  }
  v15 = sub_B77694(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
  EventRaceBoostEffect___c__DisplayClass13_0___ctor((EventRaceBoostEffect___c__DisplayClass13_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = boostEnt;
  v24 = (QuestRacePointEntity_o **)(v15 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)boostEnt, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v15 + 48) = callback;
  *(_DWORD *)(v15 + 32) = boostGrade;
  *(_DWORD *)(v15 + 36) = boostPoint;
  *(_DWORD *)(v15 + 40) = itemImgId;
  sub_B77560((BattleServantConfConponent_o *)(v15 + 48), (System_Int32_array **)callback, v31, v32, v33, v34, v35, v36);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.randvoiceId, 0LL, v37, v38, v39, v40, v41, v42);
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
  RandVoice = QuestRacePointEntity__GetRandVoice(v16, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      (const MethodInfo *)v37);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v46);
  this->fields.randvoiceId = VoiceId;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.randvoiceId,
    (System_Int32_array **)VoiceId,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v57 = (SoundManager_o *)Instance;
  VoiceAssetName_30265396 = ServantVoiceEntity__getVoiceAssetName_30265396(randvoiceSvt, 0LL);
  v59 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v15,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0LL);
  if ( !v57 )
LABEL_12:
    sub_B7769C(v16, v17);
  SoundManager__LoadAudioAssetStorage(v57, VoiceAssetName_30265396, v59, 1, 0LL);
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

  if ( (byte_438BD17 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventRaceBoostEffect_afterVoice__);
    sub_B775C4(&SeManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_4090/*"ChrVoice_"*/);
    byte_438BD17 = 1;
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
      v4 = System_Int32__ToString((int)this + 60, 0LL);
      v5 = System_String__Concat_44901936((System_String_o *)StringLiteral_4090/*"ChrVoice_"*/, v4, 0LL);
      randvoiceId = this->fields.randvoiceId;
      v7 = v5;
      v8 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v8 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v8->static_fields->DEFAULT_VOLUME;
      v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_23512556(v7, randvoiceId, DEFAULT_VOLUME, v10, 0LL);
    }
  }
}


void __fastcall EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_438BD18 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BD18 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
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
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnPostFillCallback_c *v15; // x8
  __int64 v16; // x8
  System_Collections_Generic_List_UIAtlas__o *v17; // x25
  System_String_o *SP_NAME; // x24
  __int64 v19; // x2
  Il2CppObject *v20; // x0
  System_String_o *v21; // x24
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v23; // x25
  __int64 v24; // x28
  int max_length; // w9
  il2cpp_array_size_t v26; // w22
  struct UISprite_array *v27; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v29; // x24
  bool v30; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  __int64 v32; // x2
  UILabel_o *v33; // x23
  System_String_o *v34; // x24
  __int64 v35; // x2
  Il2CppObject *v36; // x0
  EventRaceBoostEffect_c *v37; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v39; // x0
  System_String_o *v40; // x21
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x23
  UnityEngine_Object_o *v42; // x22
  UISprite_c *klass; // x8
  UIAtlas_o *v44; // x21
  unsigned __int64 v45; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v47; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v50; // x1
  System_Action_o *v51; // x21
  __int64 v52; // x0
  int32_t v53; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v54; // [xsp+8h] [xbp-58h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438BD16 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B775C4(&Method_EventRaceBoostEffect__setupLocal_b__14_0__);
    sub_B775C4(&EventRaceBoostEffect_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SeManager_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&StringLiteral_5821/*"EVENT_RACE_BOOST_COUNT"*/);
    sub_B775C4(&StringLiteral_21682/*"onEndAnim"*/);
    byte_438BD16 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
    }
    UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    }
    v15 = *(UIWidget_OnPostFillCallback_c **)UIAtlasBySpriteName[2].monitor;
    if ( v15 )
    {
      v16 = *(_QWORD *)&v15->_2.static_fields_size;
      if ( v16 )
      {
        v17 = *(System_Collections_Generic_List_UIAtlas__o **)(v16 + 288);
        this->fields.callBack = callback;
        sub_B77560(
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
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor, v19);
          v21 = System_String__Format(SP_NAME, v20, 0LL);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v17, v21, 0LL);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v23 = UIAtlasBySpriteName;
            v24 = 4LL;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v26 = v24 - 4;
              if ( (int)v24 - 4 >= max_length )
                break;
              if ( v26 >= max_length )
                goto LABEL_84;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v24);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v23, 0LL);
                v27 = this->fields.effectSp;
                if ( v27 )
                {
                  if ( v26 >= v27->max_length )
                  {
LABEL_84:
                    v52 = sub_B776C8(UIAtlasBySpriteName);
                    sub_B77668(v52, 0LL);
                  }
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v27->obj.klass + v24);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v21, 0LL);
                    effectSp = this->fields.effectSp;
                    ++v24;
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
                v30 = 0;
              }
              else
              {
                v29 = this->fields.boostItemSp;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                v30 = AtlasManager__SetItem(v29, itemImgId, 0LL);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_83;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0LL);
              if ( !UIAtlasBySpriteName )
                goto LABEL_83;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v30, 0LL);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0LL, 0LL) )
            {
              v33 = this->fields.boostCntLb;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5821/*"EVENT_RACE_BOOST_COUNT"*/, 0LL);
              v54 = boostPoint;
              v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v35);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v34, v36, 0LL);
              if ( !v33 )
                goto LABEL_83;
              UILabel__set_text(v33, (System_String_o *)UIAtlasBySpriteName, 0LL);
            }
            v37 = EventRaceBoostEffect_TypeInfo;
            if ( (BYTE3(EventRaceBoostEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v37 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v37->static_fields->ANIM_NAME;
            v53 = boostGrade;
            v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v32);
            v40 = System_String__Format(ANIM_NAME, v39, 0LL);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                                       (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
              if ( UIAtlasBySpriteName )
              {
                v42 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
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
                    SimpleAnimation__Play_16815192((SimpleAnimation_o *)ComponentInChildren_UIWidget, v40, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_UIWidget,
                                                         v40,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      klass = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v44 = UIAtlasBySpriteName;
                      if ( *(_WORD *)&UIAtlasBySpriteName->klass->_2.bitflags1 )
                      {
                        v45 = 0LL;
                        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          ++v45;
                          p_offset += 2;
                          if ( v45 >= *(unsigned __int16 *)&UIAtlasBySpriteName->klass->_2.bitflags1 )
                            goto LABEL_65;
                        }
                        v47 = (__int64)(&klass->vtable._13_GetSides.method + 2 * *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_65:
                        v47 = sub_B0F4C0(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13LL);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
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
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_76;
                  if ( v42 )
                  {
                    UnityEngine_Animation__Play_51745976((UnityEngine_Animation_o *)v42, v40, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v42,
                                                         v40,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0LL);
LABEL_75:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_21682/*"onEndAnim"*/,
                        length,
                        0LL);
LABEL_76:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0LL);
                      if ( System_String__IsNullOrEmpty(Se, 0LL) )
                      {
                        EventRaceBoostEffect__afterSE(this, v50);
                      }
                      else
                      {
                        v51 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                        System_Action___ctor(
                          v51,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0LL);
                        if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SeManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                        }
                        SeManager__PlaySe(Se, 1.0, 0.0, v51, 0, 0LL);
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
    sub_B7769C(UIAtlasBySpriteName, boostEnt);
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
    sub_B7769C(0LL, method);
  EventRaceBoostEffect__setupLocal(
    _4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    0LL);
}