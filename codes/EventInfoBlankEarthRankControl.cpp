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

  if ( (byte_40FB6F1 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoBlankEarthRankControl_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19521, v8);
    sub_B16FFC(&StringLiteral_19520, v9);
    sub_B16FFC(&StringLiteral_16719, v10);
    sub_B16FFC(&StringLiteral_16720, v11);
    byte_40FB6F1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_19521;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19521;
  sub_B16F98(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19520;
  v14->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_19520;
  sub_B16F98((BattleServantConfConponent_o *)&v14->BLANK_EARTH_RANK_SP_NAME, v15, v16, v17, v18, v19, v20, v21);
  v22 = EventInfoBlankEarthRankControl_TypeInfo;
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->DEFALUT_RANK_ID = 1;
  v23 = v22->static_fields;
  v24 = (System_Int32_array **)StringLiteral_16719;
  v23->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_16719;
  sub_B16F98((BattleServantConfConponent_o *)&v23->ORDERRANK_CHANGE_PREFAB_NAME, v24, v25, v26, v27, v28, v29, v30);
  v31 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_16720;
  v31->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_16720;
  sub_B16F98((BattleServantConfConponent_o *)&v31->ORDERRANK_CHANGE_ANIM_NAME, v32, v33, v34, v35, v36, v37, v38);
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

  if ( (byte_40FB6F0 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FB6F0 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v6 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_24843908(v6, DEFAULT_VOLUME, fadeOutBgmTime, 0LL);
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
  UnityEngine_Behaviour_o *v18; // x0
  UITweener_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  EventInfoBlankEarthRankControl___c_c *v24; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  EventDelegate_Callback_o *_9__26_0; // x19
  Il2CppObject *v27; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t rankId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FB6EE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v3);
    sub_B16FFC(&EventInfoBlankEarthRankControl_TypeInfo, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__26_0__, v6);
    sub_B16FFC(&EventInfoBlankEarthRankControl___c_TypeInfo, v7);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v8);
    sub_B16FFC(&StringLiteral_23402, v9);
    byte_40FB6EE = 1;
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
  v14 = System_String__Format((System_String_o *)StringLiteral_23402, v13, 0LL);
  v15 = System_String__Concat_43743732(BLANK_EARTH_RANK_SP_NAME, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rankSprite, v15, 0LL);
  v16 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v16
    || (gameObject = UnityEngine_Component__get_gameObject(v16, 0LL),
        (v18 = (UnityEngine_Behaviour_o *)UITweener__Begin_TweenWidth_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B170D4();
  }
  v19 = (UITweener_o *)v18;
  UnityEngine_Behaviour__set_enabled(v18, 1, 0LL);
  v19[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v19->fields.style = this->fields.fadeMethod;
  v24 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v24 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__26_0 = static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v20, v21, v22, v23);
    EventDelegate_Callback___ctor(_9__26_0, v27, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__26_0__, 0LL);
    v28 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v28->__9__26_0 = _9__26_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v28->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
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

  if ( (byte_40FB6EF & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FB6EF = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v7 = BgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_24843908(v7, fadeBgmVolume, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *v5; // x0
  UITweener_o *v6; // x20

  if ( (byte_40FB6ED & 1) == 0 )
  {
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, method);
    byte_40FB6ED = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL),
        (v5 = (UnityEngine_Behaviour_o *)UITweener__Begin_TweenWidth_(
                                           gameObject,
                                           this->fields.fadeOutDurationTime,
                                           (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B170D4();
  }
  v6 = (UITweener_o *)v5;
  UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
  v6[1].klass = (UITweener_c *)1065353216;
  v6->fields.style = this->fields.fadeMethod;
  UITweener__Play(v6, 0LL);
}


int32_t __fastcall EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40FB6EB & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40FB6EB = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E40 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6E40 = 1;
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
  if ( !byte_40F6E40 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6E40 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  EventInfoBlankEarthRankControl___c_c *v9; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__17_0; // x21
  Il2CppObject *v12; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FB6E7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, v7);
    sub_B16FFC(&EventInfoBlankEarthRankControl___c_TypeInfo, v8);
    byte_40FB6E7 = 1;
  }
  v9 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v9 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__17_0 = static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, entity, method, v3, v4);
    System_Action___ctor(_9__17_0, v12, Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, 0LL);
    v13 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v13->__9__17_0 = _9__17_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v13->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !this )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x21
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
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  EventInfoBlankEarthRankControl___c_c *v45; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__24_0; // x24
  Il2CppObject *v48; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Action_o *v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Action_o *v65; // x24
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  System_Action_o *v70; // x24
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_Action_o *v75; // x24
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  System_Action_o *v80; // x24
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  EventInfoBlankEarthRankControl_c *v87; // x0
  int32_t rankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v90; // x0
  System_String_o *v91; // x19
  UnityEngine_Object_o *v92; // x21
  UnityEngine_Object_o *Clip; // x22
  int32_t v94; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FB6EC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&EventInfoBlankEarthRankControl_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__24_0__, v12);
    sub_B16FFC(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__1__, v13);
    sub_B16FFC(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__2__, v14);
    sub_B16FFC(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__3__, v15);
    sub_B16FFC(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__4__, v16);
    sub_B16FFC(&Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__5__, v17);
    sub_B16FFC(&EventInfoBlankEarthRankControl___c__DisplayClass24_0_TypeInfo, v18);
    sub_B16FFC(&EventInfoBlankEarthRankControl___c_TypeInfo, v19);
    byte_40FB6EC = 1;
  }
  v20 = sub_B170CC(EventInfoBlankEarthRankControl___c__DisplayClass24_0_TypeInfo, callback, method, v3, v4);
  EventInfoBlankEarthRankControl___c__DisplayClass24_0___ctor(
    (EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_40;
  *(_QWORD *)(v20 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v20 + 24) = callback;
  v27 = (System_Action_o **)(v20 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
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
  GameObjectExtensions__SafeSetParent_27425996((UnityEngine_GameObject_o *)v35, gameObject, 0LL);
  if ( !v35 )
    goto LABEL_40;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v35,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_38;
  v45 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v45 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__24_0 = static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__24_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v38, v39, v40, v41);
    System_Action___ctor(_9__24_0, v48, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__24_0__, 0LL);
    v49 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v49->__9__24_0 = _9__24_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v49->__9__24_0,
      (System_Int32_array **)_9__24_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !Component_srcLineSprite )
    goto LABEL_40;
  Component_srcLineSprite->fields.mFSM = (struct CStateManager_srcLineSprite__o *)_9__24_0;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mFSM,
    (System_Int32_array **)_9__24_0,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v20,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__1__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v60, 0LL);
  v65 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v61, v62, v63, v64);
  System_Action___ctor(
    v65,
    (Il2CppObject *)v20,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__2__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 1, v65, 0LL);
  v70 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v66, v67, v68, v69);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v20,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__3__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 2, v70, 0LL);
  v75 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v71, v72, v73, v74);
  System_Action___ctor(
    v75,
    (Il2CppObject *)v20,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__4__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 3, v75, 0LL);
  v80 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v76, v77, v78, v79);
  System_Action___ctor(
    v80,
    (Il2CppObject *)v20,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass24_0__PlayRankChangeAnim_b__5__,
    0LL);
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v80;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v87 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  rankId = this->fields.rankId;
  ORDERRANK_CHANGE_ANIM_NAME = v87->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v94 = rankId;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
  v91 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v90, 0LL);
  v92 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)v35,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
    goto LABEL_38;
  if ( !v92 )
LABEL_40:
    sub_B170D4();
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v92, v91, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v92, v91, 0LL);
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

  if ( (byte_40FB6EA & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_40FB6EA = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E30 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_40F6E30 = 1;
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
  __int64 v14; // x2
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v16; // x20
  unsigned __int64 v17; // x23
  unsigned __int64 max_length; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v20; // x2
  int32_t v21; // w20
  EventInfoBlankEarthRankControl_c *v22; // x0
  UISprite_o *v23; // x19
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB6E9 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&EventInfoBlankEarthRankControl_TypeInfo, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_23402, v8);
    byte_40FB6E9 = 1;
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_20:
      sub_B170D4();
    v16 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v17 = 0LL;
    while ( 1 )
    {
      max_length = commonReleaseIds->max_length;
      if ( (__int64)v17 >= (int)max_length )
        break;
      if ( v17 >= max_length )
      {
        sub_B17100(Master_WarQuestSelectionMaster, v13, v14);
        sub_B170A0();
      }
      if ( v16 )
      {
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CommonReleaseMaster__IsOpen(
                                                                        v16,
                                                                        commonReleaseIds->m_Items[v17 + 1],
                                                                        0LL,
                                                                        0,
                                                                        0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        commonReleaseIds = this->fields.commonReleaseIds;
        ++v17;
        if ( commonReleaseIds )
          continue;
      }
      goto LABEL_20;
    }
    this->fields.rankId = DEFALUT_RANK_ID + v17;
    CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                                                                  (EventInfoBlankEarthRankControl_o *)Master_WarQuestSelectionMaster,
                                                                  v13);
    v21 = DEFALUT_RANK_ID + v17;
    if ( (_DWORD)CurrentBlankEarthRank && (int)CurrentBlankEarthRank < DEFALUT_RANK_ID + (int)v17 )
    {
      CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
        CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      }
      if ( v21 > CurrentBlankEarthRank->static_fields->DEFALUT_RANK_ID )
      {
        v21 = DEFALUT_RANK_ID + v17 - 1;
        this->fields.isPlayAnim = 1;
      }
    }
    EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
      (EventInfoBlankEarthRankControl_o *)CurrentBlankEarthRank,
      v21,
      v20);
    v22 = EventInfoBlankEarthRankControl_TypeInfo;
    v23 = this->fields.rankSprite;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v22 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_SP_NAME = v22->static_fields->BLANK_EARTH_RANK_SP_NAME;
    v28 = v21;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v26 = System_String__Format((System_String_o *)StringLiteral_23402, v25, 0LL);
    v27 = System_String__Concat_43743732(BLANK_EARTH_RANK_SP_NAME, v26, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v23, v27, 0LL);
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

  if ( (byte_40FB6E8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entity);
    sub_B16FFC(&EventInfoBlankEarthRankControl_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_16637, v6);
    sub_B16FFC(&StringLiteral_21609, v7);
    byte_40FB6E8 = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_16637, 0LL);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_21609, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FBA & 1) == 0 )
  {
    sub_B16FFC(&EventInfoBlankEarthRankControl___c_TypeInfo, v1);
    byte_40F6FBA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoBlankEarthRankControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventInfoBlankEarthRankControl__FadeInBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass24_0___PlayRankChangeAnim_b__5(
        EventInfoBlankEarthRankControl___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventInfoBlankEarthRankControl__EndAction(_4__this, this->fields.callback, 0LL);
}