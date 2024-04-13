void __fastcall EventInfoBlankEarthRankControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v21; // x1
  struct EventInfoBlankEarthRankControl_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  EventInfoBlankEarthRankControl_c *v30; // x8
  struct EventInfoBlankEarthRankControl_StaticFields *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct EventInfoBlankEarthRankControl_StaticFields *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42E9FC6 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoBlankEarthRankControl_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19844/*"img_rank_bg"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19843/*"img_rank_"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16991/*"bit_orderrank_change"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16992/*"bit_orderrank_change_{0:00}"*/, v17, v18, v19);
    byte_42E9FC6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_19844/*"img_rank_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19844/*"img_rank_bg"*/;
  sub_B5D560(static_fields, v21, v2, v3, v4, v5, v6, v7);
  v22 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19843/*"img_rank_"*/;
  v22->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_19843/*"img_rank_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->BLANK_EARTH_RANK_SP_NAME, v23, v24, v25, v26, v27, v28, v29);
  v30 = EventInfoBlankEarthRankControl_TypeInfo;
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->DEFALUT_RANK_ID = 1;
  v30->static_fields->ANIM_SKIP_RANK_ID = 3;
  v31 = v30->static_fields;
  v32 = (System_Int32_array **)StringLiteral_16991/*"bit_orderrank_change"*/;
  v31->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_16991/*"bit_orderrank_change"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v31->ORDERRANK_CHANGE_PREFAB_NAME, v32, v33, v34, v35, v36, v37, v38);
  v39 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v40 = (System_Int32_array **)StringLiteral_16992/*"bit_orderrank_change_{0:00}"*/;
  v39->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_16992/*"bit_orderrank_change_{0:00}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v39->ORDERRANK_CHANGE_ANIM_NAME, v40, v41, v42, v43, v44, v45, v46);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *BgmName; // x0
  float fadeOutBgmTime; // s8
  System_String_o *v10; // x19
  float DEFAULT_VOLUME; // s9

  if ( (byte_42E9FC5 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E9FC5 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v10 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_23411288(v10, DEFAULT_VOLUME, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeInSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UISprite_o *rankSprite; // x20
  EventInfoBlankEarthRankControl_c *v27; // x0
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  __int64 v32; // x1
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v35; // x20
  EventInfoBlankEarthRankControl___c_c *v36; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  EventDelegate_Callback_o *_9__27_0; // x19
  Il2CppObject *v39; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int32_t rankId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9FC3 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&EventInfoBlankEarthRankControl_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, v14, v15, v16);
    sub_B5D5C4(&EventInfoBlankEarthRankControl___c_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23807/*"{0:00}"*/, v23, v24, v25);
    byte_42E9FC3 = 1;
  }
  rankSprite = this->fields.rankSprite;
  v27 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v27 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  BLANK_EARTH_RANK_SP_NAME = v27->static_fields->BLANK_EARTH_RANK_SP_NAME;
  rankId = this->fields.rankId;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &rankId);
  v30 = System_String__Format((System_String_o *)StringLiteral_23807/*"{0:00}"*/, v29, 0LL);
  v31 = System_String__Concat_44577788(BLANK_EARTH_RANK_SP_NAME, v30, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rankSprite, v31, 0LL);
  v33 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v33
    || (gameObject = UnityEngine_Component__get_gameObject(v33, 0LL),
        (v33 = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B5D69C(v33, v32);
  }
  v35 = (UITweener_o *)v33;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v33, 1, 0LL);
  v35[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v35->fields.style = this->fields.fadeMethod;
  v36 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v36 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__27_0 = static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(_9__27_0, v39, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, 0LL);
    v40 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v40->__9__27_0 = _9__27_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__27_0,
      (System_Int32_array **)_9__27_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  UITweener__SetOnFinished(v35, _9__27_0, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutBgmVolume(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *BgmName; // x0
  float fadeBgmVolume; // s9
  float fadeOutBgmTime; // s8
  System_String_o *v11; // x19

  if ( (byte_42E9FC4 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E9FC4 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v11 = BgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_23411288(v11, fadeBgmVolume, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v7; // x20

  if ( (byte_42E9FC2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, (_DWORD)method, v2, v3);
    byte_42E9FC2 = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_B5D69C(rankSprite, method);
  }
  v7 = (UITweener_o *)rankSprite;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rankSprite, 1, 0LL);
  v7[1].klass = (UITweener_c *)1065353216;
  v7->fields.style = this->fields.fadeMethod;
  UITweener__Play(v7, 0LL);
}


int32_t __fastcall EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E9FC0 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9FC0 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CDE )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CDE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_BlankEarthRank_k__BackingField < 1 )
    return 0;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  if ( !byte_42E5CDE )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CDE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return v5->static_fields->_BlankEarthRank_k__BackingField;
}


void __fastcall EventInfoBlankEarthRankControl__Initialization(
        EventInfoBlankEarthRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventInfoBlankEarthRankControl___c_c *v12; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v15; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42E9FBC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__18_0__, v6, v7, v8);
    sub_B5D5C4(&EventInfoBlankEarthRankControl___c_TypeInfo, v9, v10, v11);
    byte_42E9FBC = 1;
  }
  v12 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v12 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__18_0 = static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__18_0, v15, Method_EventInfoBlankEarthRankControl___c__Initialization_b__18_0__, 0LL);
    v16 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v16->__9__18_0 = _9__18_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v16->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !this )
    sub_B5D69C(v12, entity);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  __int64 v45; // x21
  EventInfoBlankEarthRankControl___c_c *v46; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Action_o **v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  EventInfoBlankEarthRankControl_c *v61; // x0
  UnityEngine_Object_o *v62; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x24
  Il2CppObject *v73; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Action_o *v81; // x24
  System_Action_o *v82; // x24
  System_Action_o *v83; // x24
  System_Action_o *v84; // x24
  System_Action_o *v85; // x24
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  EventInfoBlankEarthRankControl_c *v92; // x0
  int32_t rankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v95; // x0
  System_String_o *v96; // x19
  UnityEngine_Object_o *v97; // x21
  UnityEngine_Object_o *Clip; // x22
  int32_t v99; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E9FC1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&EventInfoBlankEarthRankControl_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, v21, v22, v23);
    sub_B5D5C4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__, v24, v25, v26);
    sub_B5D5C4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__, v27, v28, v29);
    sub_B5D5C4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__, v30, v31, v32);
    sub_B5D5C4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__, v33, v34, v35);
    sub_B5D5C4(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__, v36, v37, v38);
    sub_B5D5C4(&EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&EventInfoBlankEarthRankControl___c_TypeInfo, v42, v43, v44);
    byte_42E9FC1 = 1;
  }
  v45 = sub_B5D694(EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo);
  EventInfoBlankEarthRankControl___c__DisplayClass25_0___ctor(
    (EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_40;
  *(_QWORD *)(v45 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)this, v48, v49, v50, v51, v52, v53);
  *(_QWORD *)(v45 + 24) = callback;
  v54 = (System_Action_o **)(v45 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)callback, v55, v56, v57, v58, v59, v60);
  v61 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v61 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v62 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  v61->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
                                  0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32436524((UnityEngine_GameObject_o *)v62, gameObject, 0LL);
  if ( !v62 )
    goto LABEL_40;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v62,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_38;
  v46 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v46 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v73 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v73, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, 0LL);
    v74 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v74->__9__25_0 = _9__25_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v74->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
  }
  if ( !Component_srcLineSprite )
    goto LABEL_40;
  Component_srcLineSprite->fields.mFSM = (struct CStateManager_srcLineSprite__o *)_9__25_0;
  sub_B5D560(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mFSM,
    (System_Int32_array **)_9__25_0,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v81 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v81,
    (Il2CppObject *)v45,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v81, 0LL);
  v82 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v82,
    (Il2CppObject *)v45,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 1, v82, 0LL);
  v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v83,
    (Il2CppObject *)v45,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 2, v83, 0LL);
  v84 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v84,
    (Il2CppObject *)v45,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 3, v84, 0LL);
  v85 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v85,
    (Il2CppObject *)v45,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__,
    0LL);
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v85;
  sub_B5D560(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v92 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v92 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  rankId = this->fields.rankId;
  ORDERRANK_CHANGE_ANIM_NAME = v92->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v99 = rankId;
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99);
  v96 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v95, 0LL);
  v97 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)v62,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v46 = (EventInfoBlankEarthRankControl___c_c *)UnityEngine_Object__op_Inequality(v97, 0LL, 0LL);
  if ( ((unsigned __int8)v46 & 1) == 0 )
    goto LABEL_38;
  if ( !v97 )
LABEL_40:
    sub_B5D69C(v46, v47);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v97, v96, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v97, v96, 0LL);
    return;
  }
LABEL_38:
  ActionExtensions__Call(*v54, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E9FBF & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, rank, (_DWORD)method, v3);
    byte_42E9FBF = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CCE )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, rank, (_DWORD)method, v3);
    byte_42E5CCE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_BlankEarthRank_k__BackingField = rank;
  TerminalPramsManager__BlankEarthRank_SaveData(0LL);
}


void __fastcall EventInfoBlankEarthRankControl__SetBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *rankSprite; // x20
  EventInfoBlankEarthRankControl_c *v24; // x0
  int32_t DEFALUT_RANK_ID; // w22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v27; // x1
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v29; // x20
  unsigned __int64 v30; // x23
  unsigned __int64 max_length; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v33; // x2
  int32_t v34; // w20
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x8
  EventInfoBlankEarthRankControl_c *v36; // x0
  UISprite_o *v37; // x19
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x20
  __int64 v42; // x0
  int32_t v43; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9FBE & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&EventInfoBlankEarthRankControl_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23807/*"{0:00}"*/, v20, v21, v22);
    byte_42E9FBE = 1;
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
    v24 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v24 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    DEFALUT_RANK_ID = v24->static_fields->DEFALUT_RANK_ID;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_20:
      sub_B5D69C(Master_WarQuestSelectionMaster, v27);
    v29 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v30 = 0LL;
    while ( 1 )
    {
      max_length = commonReleaseIds->max_length;
      if ( (__int64)v30 >= (int)max_length )
        break;
      if ( v30 >= max_length )
      {
        v42 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v42, 0LL);
      }
      if ( v29 )
      {
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CommonReleaseMaster__IsOpen(
                                                                        v29,
                                                                        commonReleaseIds->m_Items[v30 + 1],
                                                                        0LL,
                                                                        0,
                                                                        0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        commonReleaseIds = this->fields.commonReleaseIds;
        ++v30;
        if ( commonReleaseIds )
          continue;
      }
      goto LABEL_20;
    }
    this->fields.rankId = DEFALUT_RANK_ID + v30;
    CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                                                                  (EventInfoBlankEarthRankControl_o *)Master_WarQuestSelectionMaster,
                                                                  v27);
    v34 = DEFALUT_RANK_ID + v30;
    if ( (_DWORD)CurrentBlankEarthRank && (int)CurrentBlankEarthRank < v34 )
    {
      CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
        CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      }
      static_fields = CurrentBlankEarthRank->static_fields;
      if ( v34 > static_fields->DEFALUT_RANK_ID )
      {
        if ( (BYTE3(CurrentBlankEarthRank->vtable._0_Equals.methodPtr) & 4) != 0
          && !CurrentBlankEarthRank->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CurrentBlankEarthRank);
          static_fields = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
        }
        if ( DEFALUT_RANK_ID - static_fields->ANIM_SKIP_RANK_ID + (_DWORD)v30 )
        {
          v34 = DEFALUT_RANK_ID + v30 - 1;
          this->fields.isPlayAnim = 1;
        }
      }
    }
    EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
      (EventInfoBlankEarthRankControl_o *)CurrentBlankEarthRank,
      v34,
      v33);
    v36 = EventInfoBlankEarthRankControl_TypeInfo;
    v37 = this->fields.rankSprite;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v36 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_SP_NAME = v36->static_fields->BLANK_EARTH_RANK_SP_NAME;
    v43 = v34;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
    v40 = System_String__Format((System_String_o *)StringLiteral_23807/*"{0:00}"*/, v39, 0LL);
    v41 = System_String__Concat_44577788(BLANK_EARTH_RANK_SP_NAME, v40, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v37, v41, 0LL);
  }
}


void __fastcall EventInfoBlankEarthRankControl__Setup(
        EventInfoBlankEarthRankControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UISprite_o *bgSprite; // x20
  UnityEngine_Object_o *v18; // x20
  const MethodInfo *v19; // x1
  UISprite_o *v20; // x20
  EventInfoBlankEarthRankControl_c *v21; // x0
  System_String_o *BLANK_EARTH_RANK_BG_NAME; // x21

  if ( (byte_42E9FBD & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&EventInfoBlankEarthRankControl_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16907/*"bgSprite"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21994/*"rankSprite"*/, v14, v15, v16);
    byte_42E9FBD = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_16907/*"bgSprite"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_21994/*"rankSprite"*/, 0LL);
  v18 = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    v20 = this->fields.bgSprite;
    v21 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( (BYTE3(EventInfoBlankEarthRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v21 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_BG_NAME = v21->static_fields->BLANK_EARTH_RANK_BG_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v20, BLANK_EARTH_RANK_BG_NAME, 0LL);
  }
  EventInfoBlankEarthRankControl__SetBlankEarthRank(this, v19);
}


void __fastcall EventInfoBlankEarthRankControl___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E6520 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoBlankEarthRankControl___c_TypeInfo, v1, v2, v3);
    byte_42E6520 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoBlankEarthRankControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventInfoBlankEarthRankControl__FadeInBgmVolume(_4__this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__5(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventInfoBlankEarthRankControl__EndAction(_4__this, this->fields.callback, 0LL);
}