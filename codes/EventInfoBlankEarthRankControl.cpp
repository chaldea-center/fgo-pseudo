void __fastcall EventInfoBlankEarthRankControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct EventInfoBlankEarthRankControl_StaticFields *v7; // x0
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct EventInfoBlankEarthRankControl_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5BA9C & 1) == 0 )
  {
    sub_1B885B0(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1B885B0(&StringLiteral_20430/*"img_rank_bg"*/);
    sub_1B885B0(&StringLiteral_20429/*"img_rank_"*/);
    sub_1B885B0(&StringLiteral_17256/*"bit_orderrank_change"*/);
    sub_1B885B0(&StringLiteral_17257/*"bit_orderrank_change_{0:00}"*/);
    byte_4A5BA9C = 1;
  }
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->BLANK_EARTH_RANK_BG_NAME = (struct System_String_o *)StringLiteral_20430/*"img_rank_bg"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields,
    StringLiteral_20430/*"img_rank_bg"*/,
    v1,
    v2);
  v3 = StringLiteral_20429/*"img_rank_"*/;
  static_fields = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  static_fields->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_20429/*"img_rank_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->BLANK_EARTH_RANK_SP_NAME, v3, v5, v6);
  v7 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  *(_QWORD *)&v7->DEFALUT_RANK_ID = 0x300000001LL;
  v8 = StringLiteral_17256/*"bit_orderrank_change"*/;
  v7->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_17256/*"bit_orderrank_change"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->ORDERRANK_CHANGE_PREFAB_NAME, v8, v9, v10);
  v11 = StringLiteral_17257/*"bit_orderrank_change_{0:00}"*/;
  v12 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v12->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_17257/*"bit_orderrank_change_{0:00}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->ORDERRANK_CHANGE_ANIM_NAME, v11, v13, v14);
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
  System_String_o *BgmName; // x0
  float fadeOutBgmTime; // s8
  System_String_o *v5; // x19
  float DEFAULT_VOLUME; // s9

  if ( (byte_4A5BA9B & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5BA9B = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v5 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_38697464(v5, DEFAULT_VOLUME, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeInSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  EventInfoBlankEarthRankControl_c *v6; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x21
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v15; // x20
  EventInfoBlankEarthRankControl___c_c *v16; // x0
  EventDelegate_Callback_o *_9__28_0; // x19
  Il2CppObject *v18; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t currentRankId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5BA99 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__28_0__);
    sub_1B885B0(&EventInfoBlankEarthRankControl___c_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenAlpha___);
    sub_1B885B0(&StringLiteral_24941/*"{0:00}"*/);
    byte_4A5BA99 = 1;
  }
  v6 = EventInfoBlankEarthRankControl_TypeInfo;
  rankSprite = this->fields.rankSprite;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v6 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  BLANK_EARTH_RANK_SP_NAME = v6->static_fields->BLANK_EARTH_RANK_SP_NAME;
  currentRankId = this->fields.currentRankId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentRankId, v2, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_24941/*"{0:00}"*/, v9, 0LL);
  v11 = System_String__Concat_61707032(BLANK_EARTH_RANK_SP_NAME, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rankSprite, v11, 0LL);
  v13 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v13
    || (gameObject = UnityEngine_Component__get_gameObject(v13, 0LL),
        (v13 = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_1B8880C(v13, v12);
  }
  v15 = (UITweener_o *)v13;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 1, 0LL);
  v15[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v15->fields.method = this->fields.fadeMethod;
  v16 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v16 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__28_0 = v16->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__28_0 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(_9__28_0, v18, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__28_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = _9__28_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v20, v21);
  }
  UITweener__SetOnFinished(v15, _9__28_0, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutBgmVolume(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  System_String_o *BgmName; // x0
  float fadeBgmVolume; // s9
  float fadeOutBgmTime; // s8
  System_String_o *v6; // x19

  if ( (byte_4A5BA9A & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5BA9A = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v6 = BgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_38697464(v6, fadeBgmVolume, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v5; // x20

  if ( (byte_4A5BA98 & 1) == 0 )
  {
    sub_1B885B0(&Method_UITweener_Begin_TweenAlpha___);
    byte_4A5BA98 = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_1B8880C(rankSprite, method);
  }
  v5 = (UITweener_o *)rankSprite;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rankSprite, 1, 0LL);
  v5[1].klass = (UITweener_c *)1065353216;
  v5->fields.method = this->fields.fadeMethod;
  UITweener__Play(v5, 0LL);
}


int32_t __fastcall EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A5BA96 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5BA96 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588E2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_BlankEarthRank_k__BackingField < 1 )
    return 0;
  if ( !v2->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v2);
  if ( !byte_4A588E2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v7; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5BA91 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__18_0__);
    sub_1B885B0(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_4A5BA91 = 1;
  }
  v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__18_0 = v5->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__18_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__18_0, v7, Method_EventInfoBlankEarthRankControl___c__Initialization_b__18_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = _9__18_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v9, v10);
  }
  if ( !this )
    sub_1B8880C(v5, entity);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, _9__18_0, 0LL);
}


bool __fastcall EventInfoBlankEarthRankControl__IsAnimSkipRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A5BA94 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5BA94 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( !v2->static_fields->_IsOrdealCallWarClear_k__BackingField )
    return 0;
  if ( !v2->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v2);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestId_k__BackingField == 4000326;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o **v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  EventInfoBlankEarthRankControl_c *v13; // x0
  UnityEngine_Object_o *v14; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_Action_o *_9__26_0; // x24
  Il2CppObject *v20; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Action_o *v24; // x24
  System_Action_o *v25; // x24
  System_Action_o *v26; // x24
  System_Action_o *v27; // x24
  System_Action_o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  EventInfoBlankEarthRankControl_c *v34; // x0
  int32_t currentRankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v37; // x0
  System_String_o *v38; // x19
  Il2CppObject *v39; // x21
  UnityEngine_Object_o *Clip; // x22
  int32_t v41; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5BA97 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__26_0__);
    sub_1B885B0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__1__);
    sub_1B885B0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__2__);
    sub_1B885B0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__3__);
    sub_1B885B0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__4__);
    sub_1B885B0(&Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__5__);
    sub_1B885B0(&EventInfoBlankEarthRankControl___c__DisplayClass26_0_TypeInfo);
    sub_1B885B0(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_4A5BA97 = 1;
  }
  v5 = sub_1B887FC(EventInfoBlankEarthRankControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  v10 = (System_Action_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v11, v12);
  v13 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v13 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v14 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  v13->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
                                  0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v14, gameObject, 0LL);
  if ( !v14 )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v14,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    goto LABEL_30;
  v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__26_0 = v6->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v6->static_fields->__9;
    _9__26_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__26_0, v20, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__26_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = _9__26_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v22, v23);
  }
  if ( !Component_object )
    goto LABEL_31;
  Component_object[2].klass = (Il2CppClass *)_9__26_0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[2], (int32_t)_9__26_0, v17, v18);
  v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__1__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v24, 0LL);
  v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__2__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v25, 0LL);
  v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__3__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 2, v26, 0LL);
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__4__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 3, v27, 0LL);
  v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass26_0__PlayRankChangeAnim_b__5__,
    0LL);
  Component_object[2].monitor = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v28, v29, v30);
  v34 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v34 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  currentRankId = this->fields.currentRankId;
  ORDERRANK_CHANGE_ANIM_NAME = v34->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v41 = currentRankId;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v31, v32, v33);
  v38 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v37, 0LL);
  v39 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v14,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (EventInfoBlankEarthRankControl___c_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
    goto LABEL_30;
  if ( !v39 )
LABEL_31:
    sub_1B8880C(v6, v7);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v39, v38, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v39, v38, 0LL);
    return;
  }
LABEL_30:
  ActionExtensions__Call(*v10, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4A5BA95 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5BA95 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588DA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  int32_t DEFALUT_RANK_ID; // w20
  Il2CppObject *Master_object; // x0
  const MethodInfo *v7; // x1
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v9; // x21
  unsigned __int64 v10; // x23
  unsigned __int64 max_length; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  EventInfoBlankEarthRankControl_c *v18; // x0
  UISprite_o *v19; // x19
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x20
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5BA93 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24941/*"{0:00}"*/);
    byte_4A5BA93 = 1;
  }
  rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rankSprite, 0LL, 0LL) )
  {
    this->fields.isPlayAnim = 0;
    v4 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v4 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    DEFALUT_RANK_ID = v4->static_fields->DEFALUT_RANK_ID;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_16:
      sub_1B8880C(Master_object, v7);
    v9 = (CommonReleaseMaster_o *)Master_object;
    v10 = 0LL;
    while ( 1 )
    {
      max_length = commonReleaseIds->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        sub_1B88814(Master_object, v7);
      if ( v9 )
      {
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v9, commonReleaseIds->m_Items[v10 + 1], 0LL, 0, 0LL);
        commonReleaseIds = this->fields.commonReleaseIds;
        DEFALUT_RANK_ID += (unsigned __int8)Master_object & 1;
        ++v10;
        if ( commonReleaseIds )
          continue;
      }
      goto LABEL_16;
    }
    this->fields.currentRankId = DEFALUT_RANK_ID;
    CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                                                                  (EventInfoBlankEarthRankControl_o *)Master_object,
                                                                  v7);
    if ( (_DWORD)CurrentBlankEarthRank && (int)CurrentBlankEarthRank < DEFALUT_RANK_ID )
    {
      CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
        CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      }
      if ( DEFALUT_RANK_ID > CurrentBlankEarthRank->static_fields->DEFALUT_RANK_ID )
      {
        CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__IsAnimSkipRank(
                                                                      (EventInfoBlankEarthRankControl_o *)CurrentBlankEarthRank,
                                                                      v13);
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
      v14);
    v18 = EventInfoBlankEarthRankControl_TypeInfo;
    v19 = this->fields.rankSprite;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v18 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_SP_NAME = v18->static_fields->BLANK_EARTH_RANK_SP_NAME;
    v24 = DEFALUT_RANK_ID;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v15, v16, v17);
    v22 = System_String__Format((System_String_o *)StringLiteral_24941/*"{0:00}"*/, v21, 0LL);
    v23 = System_String__Concat_61707032(BLANK_EARTH_RANK_SP_NAME, v22, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v19, v23, 0LL);
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

  if ( (byte_4A5BA92 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17170/*"bgSprite"*/);
    sub_1B885B0(&StringLiteral_22783/*"rankSprite"*/);
    byte_4A5BA92 = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17170/*"bgSprite"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_22783/*"rankSprite"*/, 0LL);
  v5 = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = this->fields.bgSprite;
    v8 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v8 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_BG_NAME = v8->static_fields->BLANK_EARTH_RANK_BG_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v7, BLANK_EARTH_RANK_BG_NAME, 0LL);
  }
  EventInfoBlankEarthRankControl__SetBlankEarthRank(this, v6);
}


void __fastcall EventInfoBlankEarthRankControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BA9D & 1) == 0 )
  {
    sub_1B885B0(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_4A5BA9D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoBlankEarthRankControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoBlankEarthRankControl___c_TypeInfo->static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoBlankEarthRankControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventInfoBlankEarthRankControl___c___ctor(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c___FadeInSprite_b__28_0(
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


void __fastcall EventInfoBlankEarthRankControl___c___PlayRankChangeAnim_b__26_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass26_0___ctor(
        EventInfoBlankEarthRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass26_0___PlayRankChangeAnim_b__1(
        EventInfoBlankEarthRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass26_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass26_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass26_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventInfoBlankEarthRankControl__FadeInBgmVolume(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass26_0___PlayRankChangeAnim_b__5(
        EventInfoBlankEarthRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoBlankEarthRankControl_o *_4__this; // x8
  System_Action_o *callback; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  callback = this->fields.callback;
  EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
    (EventInfoBlankEarthRankControl_o *)this,
    _4__this->fields.currentRankId,
    v2);
  ActionExtensions__Call(callback, 0LL);
}