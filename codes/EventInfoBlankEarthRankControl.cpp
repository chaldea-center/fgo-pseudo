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

  if ( (byte_418912D & 1) == 0 )
  {
    sub_B2C35C(&EventInfoBlankEarthRankControl_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19595/*"img_rank_bg"*/, v8);
    sub_B2C35C(&StringLiteral_19594/*"img_rank_"*/, v9);
    sub_B2C35C(&StringLiteral_16785/*"bit_orderrank_change"*/, v10);
    sub_B2C35C(&StringLiteral_16786/*"bit_orderrank_change_{0:00}"*/, v11);
    byte_418912D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_19595/*"img_rank_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19595/*"img_rank_bg"*/;
  sub_B2C2F8(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19594/*"img_rank_"*/;
  v14->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_19594/*"img_rank_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->BLANK_EARTH_RANK_SP_NAME, v15, v16, v17, v18, v19, v20, v21);
  v22 = EventInfoBlankEarthRankControl_TypeInfo;
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->DEFALUT_RANK_ID = 1;
  v23 = v22->static_fields;
  v24 = (System_Int32_array **)StringLiteral_16785/*"bit_orderrank_change"*/;
  v23->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_16785/*"bit_orderrank_change"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->ORDERRANK_CHANGE_PREFAB_NAME, v24, v25, v26, v27, v28, v29, v30);
  v31 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_16786/*"bit_orderrank_change_{0:00}"*/;
  v31->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_16786/*"bit_orderrank_change_{0:00}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v31->ORDERRANK_CHANGE_ANIM_NAME, v32, v33, v34, v35, v36, v37, v38);
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

  if ( (byte_418912C & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418912C = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v6 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_24806704(v6, DEFAULT_VOLUME, fadeOutBgmTime, 0LL);
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
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v19; // x20
  EventInfoBlankEarthRankControl___c_c *v20; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  EventDelegate_Callback_o *_9__26_0; // x19
  Il2CppObject *v23; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t rankId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418912A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, v3);
    sub_B2C35C(&EventInfoBlankEarthRankControl_TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__26_0__, v6);
    sub_B2C35C(&EventInfoBlankEarthRankControl___c_TypeInfo, v7);
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, v8);
    sub_B2C35C(&StringLiteral_23496/*"{0:00}"*/, v9);
    byte_418912A = 1;
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
  v14 = System_String__Format((System_String_o *)StringLiteral_23496/*"{0:00}"*/, v13, 0LL);
  v15 = System_String__Concat_44305532(BLANK_EARTH_RANK_SP_NAME, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rankSprite, v15, 0LL);
  v17 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v17
    || (gameObject = UnityEngine_Component__get_gameObject(v17, 0LL),
        (v17 = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B2C434(v17, v16);
  }
  v19 = (UITweener_o *)v17;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 1, 0LL);
  v19[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v19->fields.style = this->fields.fadeMethod;
  v20 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v20 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__26_0 = static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(_9__26_0, v23, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__26_0__, 0LL);
    v24 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v24->__9__26_0 = _9__26_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v24->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  UITweener__SetOnFinished(v19, _9__26_0, 0LL);
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

  if ( (byte_418912B & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418912B = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v7 = BgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_24806704(v7, fadeBgmVolume, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v5; // x20

  if ( (byte_4189129 & 1) == 0 )
  {
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, method);
    byte_4189129 = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B2C434(rankSprite, method);
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

  if ( (byte_4189127 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4189127 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184731 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184731 = 1;
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
  if ( !byte_4184731 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184731 = 1;
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

  if ( (byte_4189123 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, entity);
    sub_B2C35C(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, v5);
    sub_B2C35C(&EventInfoBlankEarthRankControl___c_TypeInfo, v6);
    byte_4189123 = 1;
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
    _9__17_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__17_0, v10, Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, 0LL);
    v11 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v11->__9__17_0 = _9__17_0;
    sub_B2C2F8(
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
    sub_B2C434(v7, entity);
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
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o **v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  EventInfoBlankEarthRankControl_c *v34; // x0
  UnityEngine_Object_o *v35; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
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
  System_Action_o *v54; // x24
  System_Action_o *v55; // x24
  System_Action_o *v56; // x24
  System_Action_o *v57; // x24
  System_Action_o *v58; // x24
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  EventInfoBlankEarthRankControl_c *v65; // x0
  int32_t rankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v68; // x0
  System_String_o *v69; // x19
  UnityEngine_Object_o *v70; // x21
  UnityEngine_Object_o *Clip; // x22
  int32_t v72; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4189128 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&EventInfoBlankEarthRankControl_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__24_0__, v10);
    sub_B2C35C(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__1__, v11);
    sub_B2C35C(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__2__, v12);
    sub_B2C35C(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__3__, v13);
    sub_B2C35C(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__4__, v14);
    sub_B2C35C(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__5__, v15);
    sub_B2C35C(&EventInfoBlankEarthRankControl___c__DisplayClass24_0_TypeInfo, v16);
    sub_B2C35C(&EventInfoBlankEarthRankControl___c_TypeInfo, v17);
    byte_4189128 = 1;
  }
  v18 = sub_B2C42C(EventInfoBlankEarthRankControl___c__DisplayClass24_0_TypeInfo);
  EventInfoBlankEarthRankControl___c__DisplayClass24_0___ctor(
    (EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_40;
  *(_QWORD *)(v18 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  v27 = (System_Action_o **)(v18 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  v34 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v34 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v35 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  v34->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
                                  0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_31331952((UnityEngine_GameObject_o *)v35, gameObject, 0LL);
  if ( !v35 )
    goto LABEL_40;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v35,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
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
    _9__24_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__24_0, v46, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__24_0__, 0LL);
    v47 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v47->__9__24_0 = _9__24_0;
    sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mFSM,
    (System_Int32_array **)_9__24_0,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v54 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__1__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v54, 0LL);
  v55 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__2__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 1, v55, 0LL);
  v56 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__3__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 2, v56, 0LL);
  v57 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__4__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 3, v57, 0LL);
  v58 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__5__,
    0LL);
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v58;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v65 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  rankId = this->fields.rankId;
  ORDERRANK_CHANGE_ANIM_NAME = v65->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v72 = rankId;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
  v69 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v68, 0LL);
  v70 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)v35,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = (EventInfoBlankEarthRankControl___c_c *)UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
  if ( ((unsigned __int8)v19 & 1) == 0 )
    goto LABEL_38;
  if ( !v70 )
LABEL_40:
    sub_B2C434(v19, v20);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v70, v69, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v70, v69, 0LL);
    return;
  }
LABEL_38:
  ActionExtensions__Call(*v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4189126 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_4189126 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184720 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_4184720 = 1;
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

  if ( (byte_4189125 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&EventInfoBlankEarthRankControl_TypeInfo, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23496/*"{0:00}"*/, v8);
    byte_4189125 = 1;
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_20:
      sub_B2C434(Master_WarQuestSelectionMaster, v13);
    v15 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v16 = 0LL;
    while ( 1 )
    {
      max_length = commonReleaseIds->max_length;
      if ( (__int64)v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
      {
        v27 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v27, 0LL);
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
    v25 = System_String__Format((System_String_o *)StringLiteral_23496/*"{0:00}"*/, v24, 0LL);
    v26 = System_String__Concat_44305532(BLANK_EARTH_RANK_SP_NAME, v25, 0LL);
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

  if ( (byte_4189124 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, entity);
    sub_B2C35C(&EventInfoBlankEarthRankControl_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_16701/*"bgSprite"*/, v6);
    sub_B2C35C(&StringLiteral_21701/*"rankSprite"*/, v7);
    byte_4189124 = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_16701/*"bgSprite"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_21701/*"rankSprite"*/, 0LL);
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
  Il2CppObject *v2; // x19
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0

  if ( (byte_4184AED & 1) == 0 )
  {
    sub_B2C35C(&EventInfoBlankEarthRankControl___c_TypeInfo, v1);
    byte_4184AED = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoBlankEarthRankControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventInfoBlankEarthRankControl__FadeInBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__5(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventInfoBlankEarthRankControl__EndAction(_4__this, this->fields.callback, 0LL);
}