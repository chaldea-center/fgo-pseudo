void __fastcall EventInfoBlankEarthRankControl___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventInfoBlankEarthRankControl_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  EventInfoBlankEarthRankControl_c *v17; // x8
  struct EventInfoBlankEarthRankControl_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct EventInfoBlankEarthRankControl_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42B1E3A & 1) == 0 )
  {
    sub_B52984(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_B52984(&StringLiteral_19742/*"img_rank_bg"*/);
    sub_B52984(&StringLiteral_19741/*"img_rank_"*/);
    sub_B52984(&StringLiteral_16900/*"bit_orderrank_change"*/);
    sub_B52984(&StringLiteral_16901/*"bit_orderrank_change_{0:00}"*/);
    byte_42B1E3A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19742/*"img_rank_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19742/*"img_rank_bg"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19741/*"img_rank_"*/;
  v9->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_19741/*"img_rank_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->BLANK_EARTH_RANK_SP_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = EventInfoBlankEarthRankControl_TypeInfo;
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->DEFALUT_RANK_ID = 1;
  v17->static_fields->ANIM_SKIP_RANK_ID = 3;
  v18 = v17->static_fields;
  v19 = (System_Int32_array **)StringLiteral_16900/*"bit_orderrank_change"*/;
  v18->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_16900/*"bit_orderrank_change"*/;
  sub_B52920((BattleServantConfConponent_o *)&v18->ORDERRANK_CHANGE_PREFAB_NAME, v19, v20, v21, v22, v23, v24, v25);
  v26 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_16901/*"bit_orderrank_change_{0:00}"*/;
  v26->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_16901/*"bit_orderrank_change_{0:00}"*/;
  sub_B52920((BattleServantConfConponent_o *)&v26->ORDERRANK_CHANGE_ANIM_NAME, v27, v28, v29, v30, v31, v32, v33);
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
  System_String_o *BgmName; // x0
  float fadeOutBgmTime; // s8
  System_String_o *v5; // x19
  float DEFAULT_VOLUME; // s9

  if ( (byte_42B1E39 & 1) == 0 )
  {
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1E39 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v5 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_23808096(v5, DEFAULT_VOLUME, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeInSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  UISprite_o *rankSprite; // x20
  EventInfoBlankEarthRankControl_c *v4; // x0
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v12; // x20
  EventInfoBlankEarthRankControl___c_c *v13; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  EventDelegate_Callback_o *_9__27_0; // x19
  Il2CppObject *v16; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t rankId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B1E37 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__);
    sub_B52984(&EventInfoBlankEarthRankControl___c_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenAlpha___);
    sub_B52984(&StringLiteral_23689/*"{0:00}"*/);
    byte_42B1E37 = 1;
  }
  rankSprite = this->fields.rankSprite;
  v4 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v4 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  BLANK_EARTH_RANK_SP_NAME = v4->static_fields->BLANK_EARTH_RANK_SP_NAME;
  rankId = this->fields.rankId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &rankId);
  v7 = System_String__Format((System_String_o *)StringLiteral_23689/*"{0:00}"*/, v6, 0LL);
  v8 = System_String__Concat_44568316(BLANK_EARTH_RANK_SP_NAME, v7, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rankSprite, v8, 0LL);
  v10 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v10
    || (gameObject = UnityEngine_Component__get_gameObject(v10, 0LL),
        (v10 = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B52A5C(v10, v9);
  }
  v12 = (UITweener_o *)v10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10, 1, 0LL);
  v12[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v12->fields.style = this->fields.fadeMethod;
  v13 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v13 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__27_0 = static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(_9__27_0, v16, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, 0LL);
    v17 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v17->__9__27_0 = _9__27_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v17->__9__27_0,
      (System_Int32_array **)_9__27_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  UITweener__SetOnFinished(v12, _9__27_0, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutBgmVolume(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  System_String_o *BgmName; // x0
  float fadeBgmVolume; // s9
  float fadeOutBgmTime; // s8
  System_String_o *v6; // x19

  if ( (byte_42B1E38 & 1) == 0 )
  {
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1E38 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v6 = BgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_23808096(v6, fadeBgmVolume, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v5; // x20

  if ( (byte_42B1E36 & 1) == 0 )
  {
    sub_B52984(&Method_UITweener_Begin_TweenAlpha___);
    byte_42B1E36 = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B52A5C(rankSprite, method);
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

  if ( (byte_42B1E34 & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B1E34 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD1A5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD1A5 = 1;
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
  if ( !byte_42AD1A5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD1A5 = 1;
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
  EventInfoBlankEarthRankControl___c_c *v5; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v8; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42B1E30 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__18_0__);
    sub_B52984(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_42B1E30 = 1;
  }
  v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__18_0 = static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__18_0, v8, Method_EventInfoBlankEarthRankControl___c__Initialization_b__18_0__, 0LL);
    v9 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v9->__9__18_0 = _9__18_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v9->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !this )
    sub_B52A5C(v5, entity);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, _9__18_0, 0LL);
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
  __int64 v5; // x21
  EventInfoBlankEarthRankControl___c_c *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  EventInfoBlankEarthRankControl_c *v21; // x0
  UnityEngine_Object_o *v22; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x24
  Il2CppObject *v33; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Action_o *v41; // x24
  System_Action_o *v42; // x24
  System_Action_o *v43; // x24
  System_Action_o *v44; // x24
  System_Action_o *v45; // x24
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  EventInfoBlankEarthRankControl_c *v52; // x0
  int32_t rankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v55; // x0
  System_String_o *v56; // x19
  UnityEngine_Object_o *v57; // x21
  UnityEngine_Object_o *Clip; // x22
  int32_t v59; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42B1E35 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__);
    sub_B52984(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__);
    sub_B52984(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__);
    sub_B52984(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__);
    sub_B52984(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__);
    sub_B52984(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__);
    sub_B52984(&EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo);
    sub_B52984(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_42B1E35 = 1;
  }
  v5 = sub_B52A54(EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo);
  EventInfoBlankEarthRankControl___c__DisplayClass25_0___ctor(
    (EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = (System_Action_o **)(v5 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  v21 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v21 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v22 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  v21->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
                                  0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32091088((UnityEngine_GameObject_o *)v22, gameObject, 0LL);
  if ( !v22 )
    goto LABEL_40;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v22,
                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_38;
  v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v33, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, 0LL);
    v34 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v34->__9__25_0 = _9__25_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v34->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !Component_srcLineSprite )
    goto LABEL_40;
  Component_srcLineSprite->fields.mFSM = (struct CStateManager_srcLineSprite__o *)_9__25_0;
  sub_B52920(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mFSM,
    (System_Int32_array **)_9__25_0,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v41 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v41, 0LL);
  v42 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 1, v42, 0LL);
  v43 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 2, v43, 0LL);
  v44 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 3, v44, 0LL);
  v45 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__,
    0LL);
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v45;
  sub_B52920(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v52 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  rankId = this->fields.rankId;
  ORDERRANK_CHANGE_ANIM_NAME = v52->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v59 = rankId;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v56 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v55, 0LL);
  v57 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)v22,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (EventInfoBlankEarthRankControl___c_c *)UnityEngine_Object__op_Inequality(v57, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
    goto LABEL_38;
  if ( !v57 )
LABEL_40:
    sub_B52A5C(v6, v7);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v57, v56, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)v57, v56, 0LL);
    return;
  }
LABEL_38:
  ActionExtensions__Call(*v14, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42B1E33 & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B1E33 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD195 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD195 = 1;
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
  UnityEngine_Object_o *rankSprite; // x20
  EventInfoBlankEarthRankControl_c *v4; // x0
  int32_t DEFALUT_RANK_ID; // w22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x1
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v9; // x20
  unsigned __int64 v10; // x23
  unsigned __int64 max_length; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w20
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x8
  EventInfoBlankEarthRankControl_c *v16; // x0
  UISprite_o *v17; // x19
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x20
  __int64 v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B1E32 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23689/*"{0:00}"*/);
    byte_42B1E32 = 1;
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
    v4 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v4 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    DEFALUT_RANK_ID = v4->static_fields->DEFALUT_RANK_ID;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_20:
      sub_B52A5C(Master_WarQuestSelectionMaster, v7);
    v9 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v10 = 0LL;
    while ( 1 )
    {
      max_length = commonReleaseIds->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
      {
        v22 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v22, 0LL);
      }
      if ( v9 )
      {
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CommonReleaseMaster__IsOpen(
                                                                        v9,
                                                                        commonReleaseIds->m_Items[v10 + 1],
                                                                        0LL,
                                                                        0,
                                                                        0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        commonReleaseIds = this->fields.commonReleaseIds;
        ++v10;
        if ( commonReleaseIds )
          continue;
      }
      goto LABEL_20;
    }
    this->fields.rankId = DEFALUT_RANK_ID + v10;
    CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                                                                  (EventInfoBlankEarthRankControl_o *)Master_WarQuestSelectionMaster,
                                                                  v7);
    v14 = DEFALUT_RANK_ID + v10;
    if ( (_DWORD)CurrentBlankEarthRank && (int)CurrentBlankEarthRank < v14 )
    {
      CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
        CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      }
      static_fields = CurrentBlankEarthRank->static_fields;
      if ( v14 > static_fields->DEFALUT_RANK_ID )
      {
        if ( (BYTE3(CurrentBlankEarthRank->vtable._0_Equals.methodPtr) & 4) != 0
          && !CurrentBlankEarthRank->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CurrentBlankEarthRank);
          static_fields = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
        }
        if ( DEFALUT_RANK_ID - static_fields->ANIM_SKIP_RANK_ID + (_DWORD)v10 )
        {
          v14 = DEFALUT_RANK_ID + v10 - 1;
          this->fields.isPlayAnim = 1;
        }
      }
    }
    EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
      (EventInfoBlankEarthRankControl_o *)CurrentBlankEarthRank,
      v14,
      v13);
    v16 = EventInfoBlankEarthRankControl_TypeInfo;
    v17 = this->fields.rankSprite;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v16 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_SP_NAME = v16->static_fields->BLANK_EARTH_RANK_SP_NAME;
    v23 = v14;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v20 = System_String__Format((System_String_o *)StringLiteral_23689/*"{0:00}"*/, v19, 0LL);
    v21 = System_String__Concat_44568316(BLANK_EARTH_RANK_SP_NAME, v20, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v17, v21, 0LL);
  }
}


void __fastcall EventInfoBlankEarthRankControl__Setup(
        EventInfoBlankEarthRankControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  UISprite_o *bgSprite; // x20
  UnityEngine_Object_o *v5; // x20
  const MethodInfo *v6; // x1
  UISprite_o *v7; // x20
  EventInfoBlankEarthRankControl_c *v8; // x0
  System_String_o *BLANK_EARTH_RANK_BG_NAME; // x21

  if ( (byte_42B1E31 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_16816/*"bgSprite"*/);
    sub_B52984(&StringLiteral_21881/*"rankSprite"*/);
    byte_42B1E31 = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_16816/*"bgSprite"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_21881/*"rankSprite"*/, 0LL);
  v5 = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = this->fields.bgSprite;
    v8 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v8 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_BG_NAME = v8->static_fields->BLANK_EARTH_RANK_BG_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v7, BLANK_EARTH_RANK_BG_NAME, 0LL);
  }
  EventInfoBlankEarthRankControl__SetBlankEarthRank(this, v6);
}


void __fastcall EventInfoBlankEarthRankControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0

  if ( (byte_42AD8E2 & 1) == 0 )
  {
    sub_B52984(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_42AD8E2 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventInfoBlankEarthRankControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall EventInfoBlankEarthRankControl___c___ctor(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c___FadeInSprite_b__27_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBlankEarthRankControl___c___Initialization_b__18_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBlankEarthRankControl___c___PlayRankChangeAnim_b__25_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___ctor(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__1(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EventInfoBlankEarthRankControl__FadeInBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__5(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EventInfoBlankEarthRankControl__EndAction(_4__this, this->fields.callback, 0LL);
}