void EventInfoBlankEarthRankControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct EventInfoBlankEarthRankControl_StaticFields *v7; // x0
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct EventInfoBlankEarthRankControl_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB667E & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1C6BA08(&StringLiteral_20603/*"img_rank_bg"*/);
    sub_1C6BA08(&StringLiteral_20602/*"img_rank_"*/);
    sub_1C6BA08(&StringLiteral_17243/*"bit_orderrank_change"*/);
    sub_1C6BA08(&StringLiteral_17244/*"bit_orderrank_change_{0:00}"*/);
    byte_4CB667E = 1;
  }
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->BLANK_EARTH_RANK_BG_NAME = (struct System_String_o *)StringLiteral_20603/*"img_rank_bg"*/;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields,
    StringLiteral_20603/*"img_rank_bg"*/,
    v1,
    v2);
  v3 = StringLiteral_20602/*"img_rank_"*/;
  static_fields = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  static_fields->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_20602/*"img_rank_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->BLANK_EARTH_RANK_SP_NAME, v3, v5, v6);
  v7 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v7->DEFALUT_RANK_ID = 1;
  v8 = StringLiteral_17243/*"bit_orderrank_change"*/;
  v7->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_17243/*"bit_orderrank_change"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7->ORDERRANK_CHANGE_PREFAB_NAME, v8, v9, v10);
  v11 = StringLiteral_17244/*"bit_orderrank_change_{0:00}"*/;
  v12 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v12->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_17244/*"bit_orderrank_change_{0:00}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->ORDERRANK_CHANGE_ANIM_NAME, v11, v13, v14);
}


void EventInfoBlankEarthRankControl___ctor(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  unsigned __int64 v2; // d0

  v2 = vdup_n_s32(0x3E99999Au).n64_u64[0];
  this->fields.fadeMethod = 6;
  *(_QWORD *)&this->fields.fadeOutDurationTime = v2;
  *(_QWORD *)&this->fields.fadeOutBgmTime = v2;
  this->fields.fadeBgmVolume = 0.3;
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
  float fadeInBgmTime; // s8
  System_String_o *v5; // x19
  float DEFAULT_VOLUME; // s9

  if ( (byte_4CB667D & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB667D = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0);
  fadeInBgmTime = this->fields.fadeInBgmTime;
  v5 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_41746760(v5, DEFAULT_VOLUME, fadeInBgmTime, 0);
}


void EventInfoBlankEarthRankControl__FadeInSprite(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_c *v3; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v12; // x20
  EventInfoBlankEarthRankControl___c_c *v13; // x0
  EventDelegate_Callback_o *_9__27_0; // x19
  Il2CppObject *v15; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t currentRankId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB667B & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__);
    sub_1C6BA08(&EventInfoBlankEarthRankControl___c_TypeInfo);
    sub_1C6BA08(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C6BA08(&StringLiteral_25171/*"{0:00}"*/);
    byte_4CB667B = 1;
  }
  v3 = EventInfoBlankEarthRankControl_TypeInfo;
  rankSprite = this->fields.rankSprite;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v3 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  BLANK_EARTH_RANK_SP_NAME = v3->static_fields->BLANK_EARTH_RANK_SP_NAME;
  currentRankId = this->fields.currentRankId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentRankId);
  v7 = System_String__Format((System_String_o *)StringLiteral_25171/*"{0:00}"*/, v6, 0);
  v8 = System_String__Concat_63966792(BLANK_EARTH_RANK_SP_NAME, v7, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rankSprite, v8, 0);
  v10 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v10
    || (gameObject = UnityEngine_Component__get_gameObject(v10, 0),
        (v10 = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_3210C14 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
    sub_1C6BC60(v10, v9);
  }
  v12 = (UITweener_o *)v10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10, 1, 0);
  v12[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v12->fields.method = this->fields.fadeMethod;
  v13 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v13 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__27_0 = v13->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__27_0 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(_9__27_0, v15, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, 0);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = _9__27_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v17, v18);
  }
  UITweener__SetOnFinished(v12, _9__27_0, 0);
}


void EventInfoBlankEarthRankControl__FadeOutBgmVolume(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  System_String_o *BgmName; // x0
  float fadeBgmVolume; // s9
  float fadeOutBgmTime; // s8
  System_String_o *v6; // x19

  if ( (byte_4CB667C & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB667C = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v6 = BgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_41746760(v6, fadeBgmVolume, fadeOutBgmTime, 0);
}


void EventInfoBlankEarthRankControl__FadeOutSprite(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v5; // x20

  if ( (byte_4CB667A & 1) == 0 )
  {
    sub_1C6BA08(&Method_UITweener_Begin_TweenAlpha___);
    byte_4CB667A = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_3210C14 *)Method_UITweener_Begin_TweenAlpha___)) == 0) )
  {
    sub_1C6BC60(rankSprite, method);
  }
  v5 = (UITweener_o *)rankSprite;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rankSprite, 1, 0);
  v5[1].klass = (UITweener_c *)1065353216;
  v5->fields.method = this->fields.fadeMethod;
  UITweener__PlayForward(v5, 0);
}


int32_t EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4CB6678 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB6678 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB36E3 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB36E3 = 1;
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
  if ( !byte_4CB36E3 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB36E3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
  System_Action_o *_9__17_0; // x21
  Il2CppObject *v7; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB6673 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__);
    sub_1C6BA08(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_4CB6673 = 1;
  }
  v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__17_0 = v5->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__17_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__17_0, v7, Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, 0);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = _9__17_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v9, v10);
  }
  if ( !this )
    sub_1C6BC60(v5, entity);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, _9__17_0, 0);
}


bool EventInfoBlankEarthRankControl__IsAnimSkipRank(EventInfoBlankEarthRankControl_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4CB6676 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB6676 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2ACA )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2ACA = 1;
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
  if ( !byte_4CB02AF )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB02AF = 1;
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
bool EventInfoBlankEarthRankControl__IsChangedRank(
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
  EventInfoBlankEarthRankControl___c_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o **v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  EventInfoBlankEarthRankControl_c *v13; // x0
  UnityEngine_Object_o *v14; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_o *_9__25_0; // x24
  Il2CppObject *v20; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x24
  System_Action_o *v25; // x24
  System_Action_o *v26; // x24
  System_Action_o *v27; // x24
  System_Action_o *v28; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  EventInfoBlankEarthRankControl_c *v31; // x0
  int32_t currentRankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v34; // x0
  System_String_o *v35; // x19
  Il2CppObject *v36; // x21
  UnityEngine_Object_o *Clip; // x22
  int32_t v38; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB6679 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__);
    sub_1C6BA08(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__);
    sub_1C6BA08(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__);
    sub_1C6BA08(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__);
    sub_1C6BA08(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__);
    sub_1C6BA08(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__);
    sub_1C6BA08(&EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo);
    sub_1C6BA08(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_4CB6679 = 1;
  }
  v5 = sub_1C6BC54(EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  v10 = (System_Action_o **)(v5 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v11, v12);
  v13 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v13 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v14 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  v13->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
                                  0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v14, 0, 0) )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36361932((UnityEngine_GameObject_o *)v14, gameObject, 0);
  if ( !v14 )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v14,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_30;
  v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__25_0 = v6->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v6->static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v20, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, 0);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = _9__25_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v22, v23);
  }
  if ( !Component_object )
    goto LABEL_31;
  Component_object[2].klass = (Il2CppClass *)_9__25_0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&Component_object[2], (int32_t)_9__25_0, v17, v18);
  v24 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__,
    0);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v24, 0);
  v25 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__,
    0);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v25, 0);
  v26 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__,
    0);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 2, v26, 0);
  v27 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__,
    0);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 3, v27, 0);
  v28 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v5,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__,
    0);
  Component_object[2].monitor = v28;
  sub_1C6B9AC((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v28, v29, v30);
  v31 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v31 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  currentRankId = this->fields.currentRankId;
  ORDERRANK_CHANGE_ANIM_NAME = v31->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v38 = currentRankId;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v35 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v34, 0);
  v36 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v14,
          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (EventInfoBlankEarthRankControl___c_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
    goto LABEL_30;
  if ( !v36 )
LABEL_31:
    sub_1C6BC60(v6, v7);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v36, v35, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0, 0) )
  {
    UnityEngine_Animation__Play_71403152((UnityEngine_Animation_o *)v36, v35, 0);
    return;
  }
LABEL_30:
  ActionExtensions__Call(*v10, 0);
}


void EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4CB6677 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB6677 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB36DC )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB36DC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
  EventInfoBlankEarthRankControl_c *v4; // x0
  int32_t DEFALUT_RANK_ID; // w20
  Il2CppObject *Master_object; // x0
  const MethodInfo *v7; // x1
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v9; // x21
  unsigned __int64 v10; // x23
  unsigned __int64 max_length_low; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  EventInfoBlankEarthRankControl_c *v15; // x0
  UISprite_o *v16; // x19
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB6675 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_25171/*"{0:00}"*/);
    byte_4CB6675 = 1;
  }
  rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rankSprite, 0, 0) )
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_16:
      sub_1C6BC60(Master_object, v7);
    v9 = (CommonReleaseMaster_o *)Master_object;
    v10 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(commonReleaseIds->max_length);
      if ( (__int64)v10 >= (int)max_length_low )
        break;
      if ( v10 >= max_length_low )
        sub_1C6BC68(Master_object);
      if ( v9 )
      {
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v9, commonReleaseIds->m_Items[v10], 0, 0, 0);
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
    v15 = EventInfoBlankEarthRankControl_TypeInfo;
    v16 = this->fields.rankSprite;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v15 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_SP_NAME = v15->static_fields->BLANK_EARTH_RANK_SP_NAME;
    v21 = DEFALUT_RANK_ID;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v19 = System_String__Format((System_String_o *)StringLiteral_25171/*"{0:00}"*/, v18, 0);
    v20 = System_String__Concat_63966792(BLANK_EARTH_RANK_SP_NAME, v19, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v16, v20, 0);
  }
}


void EventInfoBlankEarthRankControl__Setup(
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

  if ( (byte_4CB6674 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&EventInfoBlankEarthRankControl_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17156/*"bgSprite"*/);
    sub_1C6BA08(&StringLiteral_23052/*"rankSprite"*/);
    byte_4CB6674 = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17156/*"bgSprite"*/, 0);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_23052/*"rankSprite"*/, 0);
  v5 = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
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
    AtlasManager__SetEventUI(v7, BLANK_EARTH_RANK_BG_NAME, 0);
  }
  EventInfoBlankEarthRankControl__SetBlankEarthRank(this, v6);
}


void EventInfoBlankEarthRankControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB667F & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoBlankEarthRankControl___c_TypeInfo);
    byte_4CB667F = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventInfoBlankEarthRankControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoBlankEarthRankControl___c_TypeInfo->static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventInfoBlankEarthRankControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(0, method);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, method);
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, method);
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, method);
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
  EventInfoBlankEarthRankControl__FadeInBgmVolume(_4__this, method);
}


void EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__5(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoBlankEarthRankControl_o *_4__this; // x8
  System_Action_o *callback; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(this, method);
  callback = this->fields.callback;
  EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
    (EventInfoBlankEarthRankControl_o *)this,
    _4__this->fields.currentRankId,
    v2);
  ActionExtensions__Call(callback, 0);
}