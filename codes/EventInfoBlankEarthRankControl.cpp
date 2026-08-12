void EventInfoBlankEarthRankControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventInfoBlankEarthRankControl_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EventInfoBlankEarthRankControl_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5970A71 & 1) == 0 )
  {
    sub_2213A60(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_2213A60(&StringLiteral_21532/*"img_rank_bg"*/);
    sub_2213A60(&StringLiteral_21531/*"img_rank_"*/);
    sub_2213A60(&StringLiteral_17968/*"bit_orderrank_change"*/);
    sub_2213A60(&StringLiteral_17969/*"bit_orderrank_change_{0:00}"*/);
    byte_5970A71 = 1;
  }
  v7 = StringLiteral_21532/*"img_rank_bg"*/;
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->BLANK_EARTH_RANK_BG_NAME = (struct System_String_o *)StringLiteral_21532/*"img_rank_bg"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21531/*"img_rank_"*/;
  static_fields = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  static_fields->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_21531/*"img_rank_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->BLANK_EARTH_RANK_SP_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_17968/*"bit_orderrank_change"*/;
  v17 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v17->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_17968/*"bit_orderrank_change"*/;
  v17 = (struct EventInfoBlankEarthRankControl_StaticFields *)((char *)v17 + 24);
  LODWORD(v17[-1].ORDERRANK_CHANGE_ANIM_NAME) = 1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v17, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_17969/*"bit_orderrank_change_{0:00}"*/;
  v25 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v25->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_17969/*"bit_orderrank_change_{0:00}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->ORDERRANK_CHANGE_ANIM_NAME, v24, v26, v27, v28, v29, v30, v31);
}


void EventInfoBlankEarthRankControl___ctor(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  unsigned __int64 v2; // d0

  this->fields.fadeMethod = 6;
  v2 = vdup_n_s32(0x3E99999Au).n64_u64[0];
  this->fields.fadeBgmVolume = 0.3;
  *(_QWORD *)&this->fields.fadeOutDurationTime = v2;
  *(_QWORD *)&this->fields.fadeOutBgmTime = v2;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoBlankEarthRankControl__Awake(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoBlankEarthRankControl__EndAction(
        EventInfoBlankEarthRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(this, this->fields.currentRankId, method);
  ActionExtensions__Call(callback, 0);
}


void EventInfoBlankEarthRankControl__FadeInBgmVolume(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  System_String_o *BgmName; // x0
  __int64 v4; // x1
  float fadeInBgmTime; // s9
  System_String_o *v6; // x19
  float DEFAULT_VOLUME; // s8

  if ( (byte_5970A70 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5970A70 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmName = BgmManager__GetBgmName(0);
  fadeInBgmTime = this->fields.fadeInBgmTime;
  v6 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4);
  SoundManager__playBgm_48506880(v6, DEFAULT_VOLUME, fadeInBgmTime, 0);
}


void EventInfoBlankEarthRankControl__FadeInSprite(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_c *v3; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v13; // x20
  __int64 v14; // x1
  EventInfoBlankEarthRankControl___c_c *v15; // x0
  int32_t fadeMethod; // w8
  int v17; // w9
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  EventDelegate_Callback_o *_9__27_0; // x19
  Il2CppObject *v20; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t currentRankId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5970A6E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_2213A60(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__);
    sub_2213A60(&EventInfoBlankEarthRankControl___c_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&StringLiteral_26441/*"{0:00}"*/);
    byte_5970A6E = 1;
  }
  v3 = EventInfoBlankEarthRankControl_TypeInfo;
  rankSprite = this->fields.rankSprite;
  if ( !*(&EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, method);
    v3 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  BLANK_EARTH_RANK_SP_NAME = v3->static_fields->BLANK_EARTH_RANK_SP_NAME;
  currentRankId = this->fields.currentRankId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &currentRankId);
  v7 = System_String__Format((System_String_o *)StringLiteral_26441/*"{0:00}"*/, v6, 0);
  v9 = System_String__Concat_75651716(BLANK_EARTH_RANK_SP_NAME, v7, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
  AtlasManager__SetEventUI(rankSprite, v9, 0);
  v11 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v11
    || (gameObject = UnityEngine_Component__get_gameObject(v11, 0),
        (v11 = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
    sub_2213CDC(v11, v10);
  }
  v13 = (UITweener_o *)v11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 1, 0);
  v15 = EventInfoBlankEarthRankControl___c_TypeInfo;
  fadeMethod = this->fields.fadeMethod;
  v17 = *(&EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished + 1);
  v13[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v13->fields.method = fadeMethod;
  if ( !v17 )
  {
    j_il2cpp_runtime_class_init_0(v15, v14);
    v15 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__27_0 = static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v14);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(_9__27_0, v20, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, 0);
    v21 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v21->__9__27_0 = _9__27_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__27_0, (int32_t)_9__27_0, v22, v23, v24, v25, v26, v27);
  }
  UITweener__SetOnFinished(v13, _9__27_0, 0);
}


void EventInfoBlankEarthRankControl__FadeOutBgmVolume(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  System_String_o *BgmName; // x0
  __int64 v4; // x1
  float fadeBgmVolume; // s8
  float fadeOutBgmTime; // s9
  System_String_o *v7; // x19

  if ( (byte_5970A6F & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5970A6F = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmName = BgmManager__GetBgmName(0);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v7 = BgmName;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4);
  SoundManager__playBgm_48506880(v7, fadeBgmVolume, fadeOutBgmTime, 0);
}


void EventInfoBlankEarthRankControl__FadeOutSprite(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v5; // x20
  int32_t fadeMethod; // w8

  if ( (byte_5970A6D & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    byte_5970A6D = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
    sub_2213CDC(rankSprite, method);
  }
  v5 = (UITweener_o *)rankSprite;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rankSprite, 1, 0);
  fadeMethod = this->fields.fadeMethod;
  v5[1].klass = (UITweener_c *)1065353216;
  v5->fields.method = fadeMethod;
  UITweener__PlayForward(v5, 0);
}


int32_t EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_5970A6B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5970A6B = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596DB53 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB53 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_BlankEarthRank_k__BackingField < 1 )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v2, method);
  if ( !byte_596DB53 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB53 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthRank_k__BackingField;
}


void EventInfoBlankEarthRankControl__Initialization(
        EventInfoBlankEarthRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl___c_c *v5; // x0
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__17_0; // x21
  Il2CppObject *v8; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5970A66 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__);
    sub_2213A60(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_5970A66 = 1;
  }
  v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !*(&EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo, entity);
    v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__17_0 = static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, entity);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__17_0, v8, Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, 0);
    v9 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v9->__9__17_0 = _9__17_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__17_0, (int32_t)_9__17_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !this )
    sub_2213CDC(v5, entity);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, _9__17_0, 0);
}


bool EventInfoBlankEarthRankControl__IsAnimSkipRank(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_5970A69 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5970A69 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596CDF6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDF6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( !v2->static_fields->_IsOrdealCallWarClear_k__BackingField )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v2, method);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestId_k__BackingField == 4000326;
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoBlankEarthRankControl__IsChangedRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t currentRankId,
        const MethodInfo *method)
{
  int32_t CurrentBlankEarthRank; // w0

  CurrentBlankEarthRank = EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                            this,
                            *(const MethodInfo **)&currentRankId);
  return CurrentBlankEarthRank && CurrentBlankEarthRank < currentRankId;
}


void EventInfoBlankEarthRankControl__PlayAnim(
        EventInfoBlankEarthRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( type == 1 && this->fields.isPlayAnim )
    EventInfoBlankEarthRankControl__PlayRankChangeAnim(this, callback, (const MethodInfo *)callback);
  else
    ActionExtensions__Call(callback, 0);
}


void EventInfoBlankEarthRankControl__PlayRankChangeAnim(
        EventInfoBlankEarthRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  void *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o **v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  EventInfoBlankEarthRankControl_c *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o **v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x23
  UnityEngine_GameObject_o *v33; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  Il2CppObject *Component_object; // x23
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x24
  Il2CppObject *v45; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Action_o *v53; // x24
  System_Action_o *v54; // x24
  System_Action_o *v55; // x24
  System_Action_o *v56; // x24
  System_Action_o *v57; // x24
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  __int64 v64; // x1
  EventInfoBlankEarthRankControl_c *v65; // x0
  int32_t currentRankId; // w10
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v68; // x0
  System_String_o *v69; // x19
  __int64 v70; // x1
  Il2CppObject *v71; // x21
  __int64 v72; // x1
  UnityEngine_Object_o *Clip; // x22
  int32_t v74; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5970A6C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__);
    sub_2213A60(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__);
    sub_2213A60(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__);
    sub_2213A60(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__);
    sub_2213A60(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__);
    sub_2213A60(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__);
    sub_2213A60(&EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo);
    sub_2213A60(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_5970A6C = 1;
  }
  v5 = sub_2213CCC(EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = callback;
  v14 = (System_Action_o **)(v5 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  v22 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !*(&EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v21);
    v22 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v23 = EventInfoUIBase__InstantiateFromEventUIAssetData(
          (EventInfoUIBase_o *)this,
          v22->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
          0);
  *(_QWORD *)(v5 + 24) = v23;
  v24 = (UnityEngine_GameObject_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v23, v25, v26, v27, v28, v29, v30);
  v32 = *(UnityEngine_Object_o **)(v5 + 24);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( !UnityEngine_Object__op_Inequality(v32, 0, 0) )
    goto LABEL_31;
  v33 = *v24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_42897308(v33, gameObject, 0);
  v6 = *v24;
  if ( !*v24 )
    goto LABEL_32;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v6,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_31;
  v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !*(&EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo, v7);
    v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  static_fields = (struct EventInfoBlankEarthRankControl___c_StaticFields *)*((_QWORD *)v6 + 23);
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !*((_DWORD *)v6 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v6, v7);
      static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v45, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, 0);
    v46 = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    v46->__9__25_0 = _9__25_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v46->__9__25_0, (int32_t)_9__25_0, v47, v48, v49, v50, v51, v52);
  }
  if ( !Component_object )
    goto LABEL_32;
  Component_object[2].klass = (Il2CppClass *)_9__25_0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&Component_object[2], (int32_t)_9__25_0, v37, v38, v39, v40, v41, v42);
  v53 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__,
    0);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v53, 0);
  v54 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__,
    0);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v54, 0);
  v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__,
    0);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 2, v55, 0);
  v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__,
    0);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 3, v56, 0);
  v57 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__,
    0);
  Component_object[2].monitor = v57;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
    (int32_t)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v65 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !*(&EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v64);
    v65 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  currentRankId = this->fields.currentRankId;
  ORDERRANK_CHANGE_ANIM_NAME = v65->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v74 = currentRankId;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v74);
  v6 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v68, 0);
  if ( !*v24 )
    goto LABEL_32;
  v69 = (System_String_o *)v6;
  v71 = UnityEngine_GameObject__GetComponent_object_(
          *v24,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
  v6 = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v71, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
    goto LABEL_31;
  if ( !v71 )
LABEL_32:
    sub_2213CDC(v6, v7);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v71, v69, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
  if ( UnityEngine_Object__op_Inequality(Clip, 0, 0) )
  {
    UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v71, v69, 0);
    return;
  }
LABEL_31:
  ActionExtensions__Call(*v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0

  if ( (byte_5970A6A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5970A6A = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
  if ( !byte_596DB4A )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BlankEarthRank_k__BackingField = rank;
  TerminalPramsManager__BlankEarthRank_SaveData(0);
}


void EventInfoBlankEarthRankControl__SetBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rankSprite; // x20
  __int64 v4; // x1
  EventInfoBlankEarthRankControl_c *v5; // x0
  int v6; // w8
  int32_t DEFALUT_RANK_ID; // w20
  Il2CppObject *Master_object; // x0
  const MethodInfo *v9; // x1
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v11; // x21
  unsigned __int64 v12; // x23
  unsigned __int64 max_length_low; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  EventInfoBlankEarthRankControl_c *v18; // x0
  UISprite_o *v19; // x19
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x8
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5970A68 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26441/*"{0:00}"*/);
    byte_5970A68 = 1;
  }
  rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(rankSprite, 0, 0) )
  {
    v5 = EventInfoBlankEarthRankControl_TypeInfo;
    v6 = *(&EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished + 1);
    this->fields.isPlayAnim = 0;
    if ( !v6 )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      v5 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    DEFALUT_RANK_ID = v5->static_fields->DEFALUT_RANK_ID;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_16:
      sub_2213CDC(Master_object, v9);
    v11 = (CommonReleaseMaster_o *)Master_object;
    v12 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(commonReleaseIds->max_length);
      if ( (__int64)v12 >= (int)max_length_low )
        break;
      if ( v12 >= max_length_low )
        sub_2213CE4(Master_object);
      if ( v11 )
      {
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v11, commonReleaseIds->m_Items[v12], 0, 0, 0);
        commonReleaseIds = this->fields.commonReleaseIds;
        ++v12;
        DEFALUT_RANK_ID += (unsigned __int8)Master_object & 1;
        if ( commonReleaseIds )
          continue;
      }
      goto LABEL_16;
    }
    this->fields.currentRankId = DEFALUT_RANK_ID;
    CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                                                                  (EventInfoBlankEarthRankControl_o *)Master_object,
                                                                  v9);
    if ( (_DWORD)CurrentBlankEarthRank && (int)CurrentBlankEarthRank < DEFALUT_RANK_ID )
    {
      CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      if ( !*(&EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v15);
        CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      }
      if ( DEFALUT_RANK_ID > CurrentBlankEarthRank->static_fields->DEFALUT_RANK_ID )
      {
        CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__IsAnimSkipRank(
                                                                      (EventInfoBlankEarthRankControl_o *)CurrentBlankEarthRank,
                                                                      v15);
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
      v16);
    v18 = EventInfoBlankEarthRankControl_TypeInfo;
    v19 = this->fields.rankSprite;
    if ( !*(&EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v17);
      v18 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    static_fields = v18->static_fields;
    v26 = DEFALUT_RANK_ID;
    BLANK_EARTH_RANK_SP_NAME = static_fields->BLANK_EARTH_RANK_SP_NAME;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v26);
    v23 = System_String__Format((System_String_o *)StringLiteral_26441/*"{0:00}"*/, v22, 0);
    v25 = System_String__Concat_75651716(BLANK_EARTH_RANK_SP_NAME, v23, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24);
    AtlasManager__SetEventUI(v19, v25, 0);
  }
}


void EventInfoBlankEarthRankControl__Setup(
        EventInfoBlankEarthRankControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  UISprite_o *bgSprite; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  const MethodInfo *v7; // x1
  UISprite_o *v8; // x20
  EventInfoBlankEarthRankControl_c *v9; // x0
  System_String_o *BLANK_EARTH_RANK_BG_NAME; // x21

  if ( (byte_5970A67 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17877/*"bgSprite"*/);
    sub_2213A60(&StringLiteral_24154/*"rankSprite"*/);
    byte_5970A67 = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, entity);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17877/*"bgSprite"*/, 0);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_24154/*"rankSprite"*/, 0);
  v6 = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    v8 = this->fields.bgSprite;
    v9 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( !*(&EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo, v7);
      v9 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_BG_NAME = v9->static_fields->BLANK_EARTH_RANK_BG_NAME;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
    AtlasManager__SetEventUI(v8, BLANK_EARTH_RANK_BG_NAME, 0);
  }
  EventInfoBlankEarthRankControl__SetBlankEarthRank(this, v7);
}


void EventInfoBlankEarthRankControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970A72 & 1) == 0 )
  {
    sub_2213A60(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_5970A72 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoBlankEarthRankControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoBlankEarthRankControl___c_TypeInfo->static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoBlankEarthRankControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoBlankEarthRankControl___c___ctor(EventInfoBlankEarthRankControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoBlankEarthRankControl___c___FadeInSprite_b__27_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoBlankEarthRankControl___c___Initialization_b__17_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoBlankEarthRankControl___c___PlayRankChangeAnim_b__25_0(
        EventInfoBlankEarthRankControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___ctor(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__1(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, method);
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, method);
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, method);
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventInfoBlankEarthRankControl__FadeInBgmVolume(_4__this, method);
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__5(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *animGameObject; // x20
  EventInfoBlankEarthRankControl_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct EventInfoBlankEarthRankControl_o *_4__this; // x8
  System_Action_o *callback; // x19

  if ( (byte_5970A73 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A73 = 1;
  }
  GameObjectHelper__SetActiveSafely(this->fields.animGameObject, 0, 0);
  animGameObject = (UnityEngine_Object_o *)this->fields.animGameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83459800(animGameObject, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(v5, v6);
  callback = this->fields.callback;
  EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(v5, _4__this->fields.currentRankId, v7);
  ActionExtensions__Call(callback, 0);
}