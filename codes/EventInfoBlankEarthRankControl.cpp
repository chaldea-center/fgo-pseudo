void __fastcall EventInfoBlankEarthRankControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x1
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct EventInfoBlankEarthRankControl_StaticFields *v24; // x0
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct EventInfoBlankEarthRankControl_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B169C9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoBlankEarthRankControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20649/*"img_rank_bg"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20648/*"img_rank_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17430/*"bit_orderrank_change"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17431/*"bit_orderrank_change_{0:00}"*/, v14, v15);
    byte_4B169C9 = 1;
  }
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->BLANK_EARTH_RANK_BG_NAME = (struct System_String_o *)StringLiteral_20649/*"img_rank_bg"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields,
    StringLiteral_20649/*"img_rank_bg"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_20648/*"img_rank_"*/;
  static_fields = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  static_fields->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_20648/*"img_rank_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->BLANK_EARTH_RANK_SP_NAME, v16, v18, v19, v20, v21, v22, v23);
  v24 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v24->DEFALUT_RANK_ID = 1;
  v25 = StringLiteral_17430/*"bit_orderrank_change"*/;
  v24->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_17430/*"bit_orderrank_change"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v24->ORDERRANK_CHANGE_PREFAB_NAME, v25, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_17431/*"bit_orderrank_change_{0:00}"*/;
  v33 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v33->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_17431/*"bit_orderrank_change_{0:00}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->ORDERRANK_CHANGE_ANIM_NAME, v32, v34, v35, v36, v37, v38, v39);
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
  EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(this, this->fields.currentRankId, method);
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeInBgmVolume(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *BgmName; // x0
  __int64 v7; // x1
  float fadeOutBgmTime; // s8
  System_String_o *v9; // x19
  float DEFAULT_VOLUME; // s9

  if ( (byte_4B169C8 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    byte_4B169C8 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v9 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
  SoundManager__playBgm_39413916(v9, DEFAULT_VOLUME, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeInSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  EventInfoBlankEarthRankControl_c *v18; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x21
  __int64 v25; // x1
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  EventInfoBlankEarthRankControl___c_c *v32; // x0
  EventDelegate_Callback_o *_9__27_0; // x19
  Il2CppObject *v34; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int32_t currentRankId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B169C6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v4, v5);
    sub_1BCA7E0(&EventInfoBlankEarthRankControl_TypeInfo, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, v10, v11);
    sub_1BCA7E0(&EventInfoBlankEarthRankControl___c_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v14, v15);
    sub_1BCA7E0(&StringLiteral_25196/*"{0:00}"*/, v16, v17);
    byte_4B169C6 = 1;
  }
  v18 = EventInfoBlankEarthRankControl_TypeInfo;
  rankSprite = this->fields.rankSprite;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, method);
    v18 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  BLANK_EARTH_RANK_SP_NAME = v18->static_fields->BLANK_EARTH_RANK_SP_NAME;
  currentRankId = this->fields.currentRankId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentRankId);
  v22 = System_String__Format((System_String_o *)StringLiteral_25196/*"{0:00}"*/, v21, 0LL);
  v24 = System_String__Concat_62401220(BLANK_EARTH_RANK_SP_NAME, v22, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23);
  AtlasManager__SetEventUI(rankSprite, v24, 0LL);
  v26 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v26
    || (gameObject = UnityEngine_Component__get_gameObject(v26, 0LL),
        (v26 = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_1BCAA3C(v26, v25);
  }
  v28 = (UITweener_o *)v26;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v26, 1, 0LL);
  v28[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v28->fields.method = this->fields.fadeMethod;
  v32 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo, v29);
    v32 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__27_0 = v32->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v29);
      v32 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__27_0 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v29, v30, v31);
    EventDelegate_Callback___ctor(_9__27_0, v34, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = _9__27_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
      (int64_t)_9__27_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  UITweener__SetOnFinished(v28, _9__27_0, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutBgmVolume(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *BgmName; // x0
  __int64 v7; // x1
  float fadeBgmVolume; // s9
  float fadeOutBgmTime; // s8
  System_String_o *v10; // x19

  if ( (byte_4B169C7 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    byte_4B169C7 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v10 = BgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
  SoundManager__playBgm_39413916(v10, fadeBgmVolume, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v6; // x20

  if ( (byte_4B169C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, method, v2);
    byte_4B169C5 = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_1BCAA3C(rankSprite, method);
  }
  v6 = (UITweener_o *)rankSprite;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rankSprite, 1, 0LL);
  v6[1].klass = (UITweener_c *)1065353216;
  v6->fields.method = this->fields.fadeMethod;
  UITweener__Play(v6, 0LL);
}


int32_t __fastcall EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B169C3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B169C3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13814 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13814 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_BlankEarthRank_k__BackingField < 1 )
    return 0;
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( !byte_4B13814 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13814 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BlankEarthRank_k__BackingField;
}


void __fastcall EventInfoBlankEarthRankControl__Initialization(
        EventInfoBlankEarthRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventInfoBlankEarthRankControl___c_c *v10; // x0
  System_Action_o *_9__17_0; // x21
  Il2CppObject *v12; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B169BE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, v6, v7);
    sub_1BCA7E0(&EventInfoBlankEarthRankControl___c_TypeInfo, v8, v9);
    byte_4B169BE = 1;
  }
  v10 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo, entity);
    v10 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__17_0 = v10->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10, entity);
      v10 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__17_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, entity, method, v3);
    System_Action___ctor(_9__17_0, v12, Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = _9__17_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
      (int64_t)_9__17_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !this )
    sub_1BCAA3C(v10, entity);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, _9__17_0, 0LL);
}


bool __fastcall EventInfoBlankEarthRankControl__IsAnimSkipRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B169C1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B169C1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12CE1 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12CE1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsOrdealCallWarClear_k__BackingField )
    return 0;
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_QuestId_k__BackingField == 4000326;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x21
  EventInfoBlankEarthRankControl___c_c *v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Action_o **v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  EventInfoBlankEarthRankControl_c *v49; // x0
  __int64 v50; // x1
  UnityEngine_Object_o *v51; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v53; // x1
  Il2CppObject *Component_object; // x23
  int64_t v55; // x2
  __int64 v56; // x3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Action_o *_9__25_0; // x24
  Il2CppObject *v62; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Action_o *v73; // x24
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_o *v77; // x24
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Action_o *v81; // x24
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Action_o *v85; // x24
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Action_o *v89; // x24
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x1
  EventInfoBlankEarthRankControl_c *v97; // x0
  int32_t currentRankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v100; // x0
  System_String_o *v101; // x19
  __int64 v102; // x1
  Il2CppObject *v103; // x21
  __int64 v104; // x1
  UnityEngine_Object_o *Clip; // x22
  int32_t v106; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B169C4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&EventInfoBlankEarthRankControl_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, v16, v17);
    sub_1BCA7E0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__, v18, v19);
    sub_1BCA7E0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__, v20, v21);
    sub_1BCA7E0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__, v22, v23);
    sub_1BCA7E0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__, v24, v25);
    sub_1BCA7E0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__, v26, v27);
    sub_1BCA7E0(&EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&EventInfoBlankEarthRankControl___c_TypeInfo, v30, v31);
    byte_4B169C4 = 1;
  }
  v32 = sub_1BCAA2C(EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_31;
  *(_QWORD *)(v32 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)this, v35, v36, v37, v38, v39, v40);
  *(_QWORD *)(v32 + 24) = callback;
  v41 = (System_Action_o **)(v32 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 24), (int64_t)callback, v42, v43, v44, v45, v46, v47);
  v49 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v48);
    v49 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v51 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  v49->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
                                  0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
  if ( !UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v51, gameObject, 0LL);
  if ( !v51 )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v51,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    goto LABEL_30;
  v33 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo, v34);
    v33 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__25_0 = v33->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v34);
      v33 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v33->static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v55, v56);
    System_Action___ctor(_9__25_0, v62, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = _9__25_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
      (int64_t)_9__25_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !Component_object )
    goto LABEL_31;
  Component_object[2].klass = (Il2CppClass *)_9__25_0;
  sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[2], (int64_t)_9__25_0, v55, v56, v57, v58, v59, v60);
  v73 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v70, v71, v72);
  System_Action___ctor(
    v73,
    (Il2CppObject *)v32,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v73, 0LL);
  v77 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v75, v76);
  System_Action___ctor(
    v77,
    (Il2CppObject *)v32,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v77, 0LL);
  v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v78, v79, v80);
  System_Action___ctor(
    v81,
    (Il2CppObject *)v32,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 2, v81, 0LL);
  v85 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v82, v83, v84);
  System_Action___ctor(
    v85,
    (Il2CppObject *)v32,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 3, v85, 0LL);
  v89 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v86, v87, v88);
  System_Action___ctor(
    v89,
    (Il2CppObject *)v32,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__,
    0LL);
  Component_object[2].monitor = v89;
  sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[2].monitor, (int64_t)v89, v90, v91, v92, v93, v94, v95);
  v97 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v96);
    v97 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  currentRankId = this->fields.currentRankId;
  ORDERRANK_CHANGE_ANIM_NAME = v97->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v106 = currentRankId;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
  v101 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v100, 0LL);
  v103 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)v51,
           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
  v33 = (EventInfoBlankEarthRankControl___c_c *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)v103,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)v33 & 1) == 0 )
    goto LABEL_30;
  if ( !v103 )
LABEL_31:
    sub_1BCAA3C(v33, v34);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v103, v101, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v104);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v103, v101, 0LL);
    return;
  }
LABEL_30:
  ActionExtensions__Call(*v41, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B169C2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank, method);
    byte_4B169C2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
  if ( !byte_4B1380C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank, method);
    byte_4B1380C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BlankEarthRank_k__BackingField = rank;
  TerminalPramsManager__BlankEarthRank_SaveData(0LL);
}


void __fastcall EventInfoBlankEarthRankControl__SetBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *rankSprite; // x20
  __int64 v17; // x1
  EventInfoBlankEarthRankControl_c *v18; // x0
  int32_t DEFALUT_RANK_ID; // w20
  Il2CppObject *Master_object; // x0
  const MethodInfo *v21; // x1
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v23; // x21
  unsigned __int64 v24; // x23
  unsigned __int64 max_length; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x1
  EventInfoBlankEarthRankControl_c *v30; // x0
  UISprite_o *v31; // x19
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x20
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B169C0 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&EventInfoBlankEarthRankControl_TypeInfo, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_25196/*"{0:00}"*/, v14, v15);
    byte_4B169C0 = 1;
  }
  rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(rankSprite, 0LL, 0LL) )
  {
    this->fields.isPlayAnim = 0;
    v18 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v17);
      v18 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    DEFALUT_RANK_ID = v18->static_fields->DEFALUT_RANK_ID;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_16:
      sub_1BCAA3C(Master_object, v21);
    v23 = (CommonReleaseMaster_o *)Master_object;
    v24 = 0LL;
    while ( 1 )
    {
      max_length = commonReleaseIds->max_length;
      if ( (__int64)v24 >= (int)max_length )
        break;
      if ( v24 >= max_length )
        sub_1BCAA44(Master_object, v21);
      if ( v23 )
      {
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(
                                          v23,
                                          commonReleaseIds->m_Items[v24 + 1],
                                          0LL,
                                          0,
                                          0LL);
        commonReleaseIds = this->fields.commonReleaseIds;
        DEFALUT_RANK_ID += (unsigned __int8)Master_object & 1;
        ++v24;
        if ( commonReleaseIds )
          continue;
      }
      goto LABEL_16;
    }
    this->fields.currentRankId = DEFALUT_RANK_ID;
    CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                                                                  (EventInfoBlankEarthRankControl_o *)Master_object,
                                                                  v21);
    if ( (_DWORD)CurrentBlankEarthRank && (int)CurrentBlankEarthRank < DEFALUT_RANK_ID )
    {
      CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v27);
        CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      }
      if ( DEFALUT_RANK_ID > CurrentBlankEarthRank->static_fields->DEFALUT_RANK_ID )
      {
        CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__IsAnimSkipRank(
                                                                      (EventInfoBlankEarthRankControl_o *)CurrentBlankEarthRank,
                                                                      v27);
        if ( ((unsigned __int8)CurrentBlankEarthRank & 1) == 0 )
        {
          --DEFALUT_RANK_ID;
          this->fields.isPlayAnim = 1;
        }
      }
    }
    EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
      (EventInfoBlankEarthRankControl_o *)CurrentBlankEarthRank,
      DEFALUT_RANK_ID,
      v28);
    v30 = EventInfoBlankEarthRankControl_TypeInfo;
    v31 = this->fields.rankSprite;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v29);
      v30 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_SP_NAME = v30->static_fields->BLANK_EARTH_RANK_SP_NAME;
    v37 = DEFALUT_RANK_ID;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
    v34 = System_String__Format((System_String_o *)StringLiteral_25196/*"{0:00}"*/, v33, 0LL);
    v36 = System_String__Concat_62401220(BLANK_EARTH_RANK_SP_NAME, v34, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35);
    AtlasManager__SetEventUI(v31, v36, 0LL);
  }
}


void __fastcall EventInfoBlankEarthRankControl__Setup(
        EventInfoBlankEarthRankControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UISprite_o *bgSprite; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  const MethodInfo *v15; // x1
  UISprite_o *v16; // x20
  EventInfoBlankEarthRankControl_c *v17; // x0
  System_String_o *BLANK_EARTH_RANK_BG_NAME; // x21

  if ( (byte_4B169BF & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, entity, method);
    sub_1BCA7E0(&EventInfoBlankEarthRankControl_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_17343/*"bgSprite"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_23027/*"rankSprite"*/, v10, v11);
    byte_4B169BF = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, entity);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17343/*"bgSprite"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_23027/*"rankSprite"*/, 0LL);
  v14 = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    v16 = this->fields.bgSprite;
    v17 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v15);
      v17 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_BG_NAME = v17->static_fields->BLANK_EARTH_RANK_BG_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
    AtlasManager__SetEventUI(v16, BLANK_EARTH_RANK_BG_NAME, 0LL);
  }
  EventInfoBlankEarthRankControl__SetBlankEarthRank(this, v15);
}


void __fastcall EventInfoBlankEarthRankControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B169CA & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoBlankEarthRankControl___c_TypeInfo, v1, v2);
    byte_4B169CA = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoBlankEarthRankControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoBlankEarthRankControl___c_TypeInfo->static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoBlankEarthRankControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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


void __fastcall EventInfoBlankEarthRankControl___c___Initialization_b__17_0(
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
    sub_1BCAA3C(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventInfoBlankEarthRankControl__FadeInBgmVolume(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__5(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoBlankEarthRankControl_o *_4__this; // x8
  System_Action_o *callback; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  callback = this->fields.callback;
  EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
    (EventInfoBlankEarthRankControl_o *)this,
    _4__this->fields.currentRankId,
    v2);
  ActionExtensions__Call(callback, 0LL);
}