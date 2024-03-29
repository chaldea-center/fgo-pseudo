void __fastcall EventInfoBlankEarthRankControl___cctor(const MethodInfo *method)
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
  __int64 v10; // x1
  __int64 v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v13; // x1
  struct EventInfoBlankEarthRankControl_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EventInfoBlankEarthRankControl_c *v22; // x8
  struct EventInfoBlankEarthRankControl_StaticFields *v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct EventInfoBlankEarthRankControl_StaticFields *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_421621D & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoBlankEarthRankControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19657/*"img_rank_bg"*/, v8);
    sub_B0D8A4(&StringLiteral_19656/*"img_rank_"*/, v9);
    sub_B0D8A4(&StringLiteral_16834/*"bit_orderrank_change"*/, v10);
    sub_B0D8A4(&StringLiteral_16835/*"bit_orderrank_change_{0:00}"*/, v11);
    byte_421621D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_19657/*"img_rank_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19657/*"img_rank_bg"*/;
  sub_B0D840(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19656/*"img_rank_"*/;
  v14->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_19656/*"img_rank_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v14->BLANK_EARTH_RANK_SP_NAME, v15, v16, v17, v18, v19, v20, v21);
  v22 = EventInfoBlankEarthRankControl_TypeInfo;
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->DEFALUT_RANK_ID = 1;
  v23 = v22->static_fields;
  v24 = (System_Int32_array **)StringLiteral_16834/*"bit_orderrank_change"*/;
  v23->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_16834/*"bit_orderrank_change"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v23->ORDERRANK_CHANGE_PREFAB_NAME, v24, v25, v26, v27, v28, v29, v30);
  v31 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_16835/*"bit_orderrank_change_{0:00}"*/;
  v31->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_16835/*"bit_orderrank_change_{0:00}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v31->ORDERRANK_CHANGE_ANIM_NAME, v32, v33, v34, v35, v36, v37, v38);
}


void __fastcall EventInfoBlankEarthRankControl___ctor(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  unsigned __int64 v2; // d0

  v2 = vdup_n_s32(0x3E99999Au).n64_u64[0];
  this->fields.fadeMethod = 6;
  *(_QWORD *)&this->fields.fadeOutDurationTime = v2;
  *(_QWORD *)&this->fields.fadeOutBgmTime = v2;
  this->fields.fadeBgmVolume = 0.3;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__Awake(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBlankEarthRankControl__EndAction(
        EventInfoBlankEarthRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(this, this->fields.rankId, method);
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeInBgmVolume(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *BgmName; // x0
  float fadeOutBgmTime; // s8
  System_String_o *v6; // x19
  float DEFAULT_VOLUME; // s9

  if ( (byte_421621C & 1) == 0 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_421621C = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v6 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_24997432(v6, DEFAULT_VOLUME, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeInSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UISprite_o *rankSprite; // x20
  EventInfoBlankEarthRankControl_c *v11; // x0
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x21
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  EventInfoBlankEarthRankControl___c_c *v21; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  EventDelegate_Callback_o *_9__26_0; // x19
  Il2CppObject *v24; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t rankId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421621A & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v3);
    sub_B0D8A4(&EventInfoBlankEarthRankControl_TypeInfo, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__26_0__, v6);
    sub_B0D8A4(&EventInfoBlankEarthRankControl___c_TypeInfo, v7);
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, v8);
    sub_B0D8A4(&StringLiteral_23574/*"{0:00}"*/, v9);
    byte_421621A = 1;
  }
  rankSprite = this->fields.rankSprite;
  v11 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v11 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  BLANK_EARTH_RANK_SP_NAME = v11->static_fields->BLANK_EARTH_RANK_SP_NAME;
  rankId = this->fields.rankId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &rankId);
  v14 = System_String__Format((System_String_o *)StringLiteral_23574/*"{0:00}"*/, v13, 0LL);
  v15 = System_String__Concat_43849904(BLANK_EARTH_RANK_SP_NAME, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rankSprite, v15, 0LL);
  v16 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v16
    || (gameObject = UnityEngine_Component__get_gameObject(v16, 0LL),
        (v16 = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B0D97C(v16);
  }
  v18 = (UITweener_o *)v16;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v16, 1, 0LL);
  v18[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v18->fields.style = this->fields.fadeMethod;
  v21 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v21 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__26_0 = static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v19, v20);
    EventDelegate_Callback___ctor(_9__26_0, v24, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__26_0__, 0LL);
    v25 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v25->__9__26_0 = _9__26_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  UITweener__SetOnFinished(v18, _9__26_0, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutBgmVolume(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *BgmName; // x0
  float fadeBgmVolume; // s9
  float fadeOutBgmTime; // s8
  System_String_o *v7; // x19

  if ( (byte_421621B & 1) == 0 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_421621B = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v7 = BgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_24997432(v7, fadeBgmVolume, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v5; // x20

  if ( (byte_4216219 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, method);
    byte_4216219 = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B0D97C(rankSprite);
  }
  v5 = (UITweener_o *)rankSprite;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rankSprite, 1, 0LL);
  v5[1].klass = (UITweener_c *)1065353216;
  v5->fields.style = this->fields.fadeMethod;
  UITweener__Play(v5, 0LL);
}


int32_t __fastcall EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4216217 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4216217 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211ADC )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211ADC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_BlankEarthRank_k__BackingField < 1 )
    return 0;
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v2);
  if ( !byte_4211ADC )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211ADC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthRank_k__BackingField;
}


void __fastcall EventInfoBlankEarthRankControl__Initialization(
        EventInfoBlankEarthRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventInfoBlankEarthRankControl___c_c *v7; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__17_0; // x21
  Il2CppObject *v10; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4216213 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, entity);
    sub_B0D8A4(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, v5);
    sub_B0D8A4(&EventInfoBlankEarthRankControl___c_TypeInfo, v6);
    byte_4216213 = 1;
  }
  v7 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v7 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__17_0 = static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, entity, method);
    System_Action___ctor(_9__17_0, v10, Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, 0LL);
    v11 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v11->__9__17_0 = _9__17_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v11->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !this )
    sub_B0D97C(v7);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, _9__17_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoBlankEarthRankControl__IsChangedRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t currentRankId,
        const MethodInfo *method)
{
  int32_t CurrentBlankEarthRank; // w0

  CurrentBlankEarthRank = EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                            this,
                            *(const MethodInfo **)&currentRankId);
  if ( CurrentBlankEarthRank )
    LOBYTE(CurrentBlankEarthRank) = CurrentBlankEarthRank < currentRankId;
  return CurrentBlankEarthRank;
}


void __fastcall EventInfoBlankEarthRankControl__PlayAnim(
        EventInfoBlankEarthRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( type == 1 && this->fields.isPlayAnim )
    EventInfoBlankEarthRankControl__PlayRankChangeAnim(this, callback, (const MethodInfo *)callback);
  else
    ActionExtensions__Call(callback, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__PlayRankChangeAnim(
        EventInfoBlankEarthRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x21
  EventInfoBlankEarthRankControl___c_c *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Action_o **v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  EventInfoBlankEarthRankControl_c *v33; // x0
  UnityEngine_Object_o *v34; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__24_0; // x24
  Il2CppObject *v46; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x24
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_o *v59; // x24
  __int64 v60; // x1
  __int64 v61; // x2
  System_Action_o *v62; // x24
  __int64 v63; // x1
  __int64 v64; // x2
  System_Action_o *v65; // x24
  __int64 v66; // x1
  __int64 v67; // x2
  System_Action_o *v68; // x24
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  EventInfoBlankEarthRankControl_c *v75; // x0
  int32_t rankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v78; // x0
  System_String_o *v79; // x19
  UnityEngine_Object_o *v80; // x21
  UnityEngine_Object_o *Clip; // x22
  int32_t v82; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4216218 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&EventInfoBlankEarthRankControl_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__24_0__, v10);
    sub_B0D8A4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__1__, v11);
    sub_B0D8A4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__2__, v12);
    sub_B0D8A4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__3__, v13);
    sub_B0D8A4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__4__, v14);
    sub_B0D8A4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__5__, v15);
    sub_B0D8A4(&EventInfoBlankEarthRankControl___c__DisplayClass24_0_TypeInfo, v16);
    sub_B0D8A4(&EventInfoBlankEarthRankControl___c_TypeInfo, v17);
    byte_4216218 = 1;
  }
  v18 = sub_B0D974(EventInfoBlankEarthRankControl___c__DisplayClass24_0_TypeInfo, callback, method);
  EventInfoBlankEarthRankControl___c__DisplayClass24_0___ctor(
    (EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_40;
  *(_QWORD *)(v18 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v18 + 24) = callback;
  v26 = (System_Action_o **)(v18 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  v33 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v33 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v34 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  v33->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
                                  0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_31184716((UnityEngine_GameObject_o *)v34, gameObject, 0LL);
  if ( !v34 )
    goto LABEL_40;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v34,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_38;
  v19 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v19 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__24_0 = static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__24_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v37, v38);
    System_Action___ctor(_9__24_0, v46, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__24_0__, 0LL);
    v47 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v47->__9__24_0 = _9__24_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v47->__9__24_0,
      (System_Int32_array **)_9__24_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !Component_srcLineSprite )
    goto LABEL_40;
  Component_srcLineSprite->fields.mFSM = (struct CStateManager_srcLineSprite__o *)_9__24_0;
  sub_B0D840(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mFSM,
    (System_Int32_array **)_9__24_0,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v56 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v54, v55);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__1__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v56, 0LL);
  v59 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v57, v58);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__2__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 1, v59, 0LL);
  v62 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v60, v61);
  System_Action___ctor(
    v62,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__3__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 2, v62, 0LL);
  v65 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v63, v64);
  System_Action___ctor(
    v65,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__4__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 3, v65, 0LL);
  v68 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v66, v67);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__5__,
    0LL);
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v68;
  sub_B0D840(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v75 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  rankId = this->fields.rankId;
  ORDERRANK_CHANGE_ANIM_NAME = v75->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v82 = rankId;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  v79 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v78, 0LL);
  v80 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)v34,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = (EventInfoBlankEarthRankControl___c_c *)UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
  if ( ((unsigned __int8)v19 & 1) == 0 )
    goto LABEL_38;
  if ( !v80 )
LABEL_40:
    sub_B0D97C(v19);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v80, v79, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)v80, v79, 0LL);
    return;
  }
LABEL_38:
  ActionExtensions__Call(*v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4216216 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_4216216 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211ACD )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_4211ACD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BlankEarthRank_k__BackingField = rank;
  TerminalPramsManager__BlankEarthRank_SaveData(0LL);
}


void __fastcall EventInfoBlankEarthRankControl__SetBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *rankSprite; // x20
  EventInfoBlankEarthRankControl_c *v10; // x0
  int32_t DEFALUT_RANK_ID; // w22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v13; // x1
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v15; // x20
  unsigned __int64 v16; // x23
  unsigned __int64 max_length; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w20
  EventInfoBlankEarthRankControl_c *v21; // x0
  UISprite_o *v22; // x19
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x20
  __int64 v27; // x0
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4216215 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&EventInfoBlankEarthRankControl_TypeInfo, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_23574/*"{0:00}"*/, v8);
    byte_4216215 = 1;
  }
  rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(rankSprite, 0LL, 0LL) )
  {
    this->fields.isPlayAnim = 0;
    v10 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v10 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    DEFALUT_RANK_ID = v10->static_fields->DEFALUT_RANK_ID;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_20:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    v15 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v16 = 0LL;
    while ( 1 )
    {
      max_length = commonReleaseIds->max_length;
      if ( (__int64)v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
      {
        v27 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v27, 0LL);
      }
      if ( v15 )
      {
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CommonReleaseMaster__IsOpen(
                                                                        v15,
                                                                        commonReleaseIds->m_Items[v16 + 1],
                                                                        0LL,
                                                                        0,
                                                                        0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        commonReleaseIds = this->fields.commonReleaseIds;
        ++v16;
        if ( commonReleaseIds )
          continue;
      }
      goto LABEL_20;
    }
    this->fields.rankId = DEFALUT_RANK_ID + v16;
    CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                                                                  (EventInfoBlankEarthRankControl_o *)Master_WarQuestSelectionMaster,
                                                                  v13);
    v20 = DEFALUT_RANK_ID + v16;
    if ( (_DWORD)CurrentBlankEarthRank && (int)CurrentBlankEarthRank < DEFALUT_RANK_ID + (int)v16 )
    {
      CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
        CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      }
      if ( v20 > CurrentBlankEarthRank->static_fields->DEFALUT_RANK_ID )
      {
        v20 = DEFALUT_RANK_ID + v16 - 1;
        this->fields.isPlayAnim = 1;
      }
    }
    EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
      (EventInfoBlankEarthRankControl_o *)CurrentBlankEarthRank,
      v20,
      v19);
    v21 = EventInfoBlankEarthRankControl_TypeInfo;
    v22 = this->fields.rankSprite;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v21 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_SP_NAME = v21->static_fields->BLANK_EARTH_RANK_SP_NAME;
    v28 = v20;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v25 = System_String__Format((System_String_o *)StringLiteral_23574/*"{0:00}"*/, v24, 0LL);
    v26 = System_String__Concat_43849904(BLANK_EARTH_RANK_SP_NAME, v25, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v22, v26, 0LL);
  }
}


void __fastcall EventInfoBlankEarthRankControl__Setup(
        EventInfoBlankEarthRankControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UISprite_o *bgSprite; // x20
  UnityEngine_Object_o *v9; // x20
  const MethodInfo *v10; // x1
  UISprite_o *v11; // x20
  EventInfoBlankEarthRankControl_c *v12; // x0
  System_String_o *BLANK_EARTH_RANK_BG_NAME; // x21

  if ( (byte_4216214 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, entity);
    sub_B0D8A4(&EventInfoBlankEarthRankControl_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_16750/*"bgSprite"*/, v6);
    sub_B0D8A4(&StringLiteral_21771/*"rankSprite"*/, v7);
    byte_4216214 = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_16750/*"bgSprite"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_21771/*"rankSprite"*/, 0LL);
  v9 = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    v11 = this->fields.bgSprite;
    v12 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v12 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_BG_NAME = v12->static_fields->BLANK_EARTH_RANK_BG_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v11, BLANK_EARTH_RANK_BG_NAME, 0LL);
  }
  EventInfoBlankEarthRankControl__SetBlankEarthRank(this, v10);
}


void __fastcall EventInfoBlankEarthRankControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211B4C & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoBlankEarthRankControl___c_TypeInfo, v1);
    byte_4211B4C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoBlankEarthRankControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventInfoBlankEarthRankControl___c___ctor(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c___FadeInSprite_b__26_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBlankEarthRankControl___c___Initialization_b__17_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBlankEarthRankControl___c___PlayRankChangeAnim_b__24_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___ctor(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__1(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventInfoBlankEarthRankControl__FadeInBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__5(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventInfoBlankEarthRankControl__EndAction(_4__this, this->fields.callback, 0LL);
}