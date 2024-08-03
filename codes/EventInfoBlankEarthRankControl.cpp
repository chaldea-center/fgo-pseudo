void __fastcall EventInfoBlankEarthRankControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct EventInfoBlankEarthRankControl_StaticFields *v12; // x0
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  struct EventInfoBlankEarthRankControl_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FCF32 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoBlankEarthRankControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20350/*"img_rank_bg"*/, v4);
    sub_1B640C8(&StringLiteral_20349/*"img_rank_"*/, v5);
    sub_1B640C8(&StringLiteral_17187/*"bit_orderrank_change"*/, v6);
    sub_1B640C8(&StringLiteral_17188/*"bit_orderrank_change_{0:00}"*/, v7);
    byte_49FCF32 = 1;
  }
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->BLANK_EARTH_RANK_BG_NAME = (struct System_String_o *)StringLiteral_20350/*"img_rank_bg"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields,
    StringLiteral_20350/*"img_rank_bg"*/,
    v2,
    v3);
  v8 = StringLiteral_20349/*"img_rank_"*/;
  static_fields = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  static_fields->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_20349/*"img_rank_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->BLANK_EARTH_RANK_SP_NAME, v8, v10, v11);
  v12 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  *(_QWORD *)&v12->DEFALUT_RANK_ID = 0x300000001LL;
  v13 = StringLiteral_17187/*"bit_orderrank_change"*/;
  v12->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_17187/*"bit_orderrank_change"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->ORDERRANK_CHANGE_PREFAB_NAME, v13, v14, v15);
  v16 = StringLiteral_17188/*"bit_orderrank_change_{0:00}"*/;
  v17 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v17->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_17188/*"bit_orderrank_change_{0:00}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->ORDERRANK_CHANGE_ANIM_NAME, v16, v18, v19);
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

  if ( (byte_49FCF31 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    byte_49FCF31 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v6 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_38381580(v6, DEFAULT_VOLUME, fadeOutBgmTime, 0LL);
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
  EventInfoBlankEarthRankControl_c *v10; // x0
  UISprite_o *rankSprite; // x20
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
  EventDelegate_Callback_o *_9__27_0; // x19
  Il2CppObject *v23; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t rankId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FCF2F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v3);
    sub_1B640C8(&EventInfoBlankEarthRankControl_TypeInfo, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, v6);
    sub_1B640C8(&EventInfoBlankEarthRankControl___c_TypeInfo, v7);
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, v8);
    sub_1B640C8(&StringLiteral_24841/*"{0:00}"*/, v9);
    byte_49FCF2F = 1;
  }
  v10 = EventInfoBlankEarthRankControl_TypeInfo;
  rankSprite = this->fields.rankSprite;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v10 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  BLANK_EARTH_RANK_SP_NAME = v10->static_fields->BLANK_EARTH_RANK_SP_NAME;
  rankId = this->fields.rankId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &rankId);
  v14 = System_String__Format((System_String_o *)StringLiteral_24841/*"{0:00}"*/, v13, 0LL);
  v15 = System_String__Concat_61375396(BLANK_EARTH_RANK_SP_NAME, v14, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rankSprite, v15, 0LL);
  v16 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v16
    || (gameObject = UnityEngine_Component__get_gameObject(v16, 0LL),
        (v16 = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_1B64324(v16);
  }
  v18 = (UITweener_o *)v16;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v16, 1, 0LL);
  v18[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v18->fields.method = this->fields.fadeMethod;
  v21 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v21 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__27_0 = v21->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__27_0 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v19, v20);
    EventDelegate_Callback___ctor(_9__27_0, v23, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = _9__27_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v25, v26);
  }
  UITweener__SetOnFinished(v18, _9__27_0, 0LL);
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

  if ( (byte_49FCF30 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    byte_49FCF30 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v7 = BgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_38381580(v7, fadeBgmVolume, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v5; // x20

  if ( (byte_49FCF2E & 1) == 0 )
  {
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, method);
    byte_49FCF2E = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_1B64324(rankSprite);
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

  if ( (byte_49FCF2C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49FCF2C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AD2 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9AD2 = 1;
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
  if ( !byte_49F9AD2 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9AD2 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  EventInfoBlankEarthRankControl___c_c *v7; // x0
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v9; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FCF28 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__18_0__, v5);
    sub_1B640C8(&EventInfoBlankEarthRankControl___c_TypeInfo, v6);
    byte_49FCF28 = 1;
  }
  v7 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v7 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__18_0 = v7->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__18_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, entity, method);
    System_Action___ctor(_9__18_0, v9, Method_EventInfoBlankEarthRankControl___c__Initialization_b__18_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = _9__18_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v11, v12);
  }
  if ( !this )
    sub_1B64324(v7);
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_Action_o **v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  EventInfoBlankEarthRankControl_c *v25; // x0
  UnityEngine_Object_o *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  int32_t v31; // w3
  System_Action_o *_9__25_0; // x24
  Il2CppObject *v33; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x24
  __int64 v46; // x1
  __int64 v47; // x2
  System_Action_o *v48; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x24
  int32_t v52; // w2
  int32_t v53; // w3
  EventInfoBlankEarthRankControl_c *v54; // x0
  int32_t rankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v57; // x0
  System_String_o *v58; // x19
  Il2CppObject *v59; // x21
  UnityEngine_Object_o *Clip; // x22
  int32_t v61; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FCF2D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&EventInfoBlankEarthRankControl_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, v10);
    sub_1B640C8(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__, v11);
    sub_1B640C8(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__, v12);
    sub_1B640C8(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__, v13);
    sub_1B640C8(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__, v14);
    sub_1B640C8(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__, v15);
    sub_1B640C8(&EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo, v16);
    sub_1B640C8(&EventInfoBlankEarthRankControl___c_TypeInfo, v17);
    byte_49FCF2D = 1;
  }
  v18 = sub_1B64314(EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_31;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v18 + 24) = callback;
  v22 = (System_Action_o **)(v18 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)callback, v23, v24);
  v25 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v25 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v26 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  v25->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
                                  0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v26, gameObject, 0LL);
  if ( !v26 )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v26,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    goto LABEL_30;
  v19 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v19 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__25_0 = v19->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v19->static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
    System_Action___ctor(_9__25_0, v33, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = _9__25_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v35, v36);
  }
  if ( !Component_object )
    goto LABEL_31;
  Component_object[2].klass = (Il2CppClass *)_9__25_0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2], (int32_t)_9__25_0, v30, v31);
  v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v39, 0LL);
  v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v40, v41);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v42, 0LL);
  v45 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v43, v44);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 2, v45, 0LL);
  v48 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v46, v47);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 3, v48, 0LL);
  v51 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v49, v50);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__,
    0LL);
  Component_object[2].monitor = v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v51, v52, v53);
  v54 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v54 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  rankId = this->fields.rankId;
  ORDERRANK_CHANGE_ANIM_NAME = v54->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v61 = rankId;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
  v58 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v57, 0LL);
  v59 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v26,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = (EventInfoBlankEarthRankControl___c_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0LL, 0LL);
  if ( ((unsigned __int8)v19 & 1) == 0 )
    goto LABEL_30;
  if ( !v59 )
LABEL_31:
    sub_1B64324(v19);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v59, v58, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v59, v58, 0LL);
    return;
  }
LABEL_30:
  ActionExtensions__Call(*v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0

  if ( (byte_49FCF2B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_49FCF2B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ACA )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_49F9ACA = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *rankSprite; // x20
  EventInfoBlankEarthRankControl_c *v10; // x0
  int32_t DEFALUT_RANK_ID; // w22
  Il2CppObject *Master_object; // x0
  const MethodInfo *v13; // x1
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v15; // x20
  unsigned __int64 v16; // x23
  unsigned __int64 max_length; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w20
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x8
  EventInfoBlankEarthRankControl_c *v22; // x0
  UISprite_o *v23; // x19
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FCF2A & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&EventInfoBlankEarthRankControl_TypeInfo, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_24841/*"{0:00}"*/, v8);
    byte_49FCF2A = 1;
  }
  rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rankSprite, 0LL, 0LL) )
  {
    this->fields.isPlayAnim = 0;
    v10 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v10 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    DEFALUT_RANK_ID = v10->static_fields->DEFALUT_RANK_ID;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_17:
      sub_1B64324(Master_object);
    v15 = (CommonReleaseMaster_o *)Master_object;
    v16 = 0LL;
    while ( 1 )
    {
      max_length = commonReleaseIds->max_length;
      if ( (__int64)v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
        sub_1B6432C(Master_object, v13);
      if ( v15 )
      {
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(
                                          v15,
                                          commonReleaseIds->m_Items[v16 + 1],
                                          0LL,
                                          0,
                                          0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        commonReleaseIds = this->fields.commonReleaseIds;
        ++v16;
        if ( commonReleaseIds )
          continue;
      }
      goto LABEL_17;
    }
    this->fields.rankId = DEFALUT_RANK_ID + v16;
    CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                                                                  (EventInfoBlankEarthRankControl_o *)Master_object,
                                                                  v13);
    v20 = DEFALUT_RANK_ID + v16;
    if ( (_DWORD)CurrentBlankEarthRank && (int)CurrentBlankEarthRank < v20 )
    {
      CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
        CurrentBlankEarthRank = EventInfoBlankEarthRankControl_TypeInfo;
      }
      static_fields = CurrentBlankEarthRank->static_fields;
      if ( v20 > static_fields->DEFALUT_RANK_ID )
      {
        if ( !CurrentBlankEarthRank->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CurrentBlankEarthRank);
          static_fields = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
        }
        if ( DEFALUT_RANK_ID - static_fields->ANIM_SKIP_RANK_ID + (_DWORD)v16 )
        {
          v20 = DEFALUT_RANK_ID + v16 - 1;
          this->fields.isPlayAnim = 1;
        }
      }
    }
    EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
      (EventInfoBlankEarthRankControl_o *)CurrentBlankEarthRank,
      v20,
      v19);
    v22 = EventInfoBlankEarthRankControl_TypeInfo;
    v23 = this->fields.rankSprite;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v22 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_SP_NAME = v22->static_fields->BLANK_EARTH_RANK_SP_NAME;
    v28 = v20;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v26 = System_String__Format((System_String_o *)StringLiteral_24841/*"{0:00}"*/, v25, 0LL);
    v27 = System_String__Concat_61375396(BLANK_EARTH_RANK_SP_NAME, v26, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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

  if ( (byte_49FCF29 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, entity);
    sub_1B640C8(&EventInfoBlankEarthRankControl_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_17102/*"bgSprite"*/, v6);
    sub_1B640C8(&StringLiteral_22690/*"rankSprite"*/, v7);
    byte_49FCF29 = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17102/*"bgSprite"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_22690/*"rankSprite"*/, 0LL);
  v9 = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    v11 = this->fields.bgSprite;
    v12 = EventInfoBlankEarthRankControl_TypeInfo;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v12 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_BG_NAME = v12->static_fields->BLANK_EARTH_RANK_BG_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v11, BLANK_EARTH_RANK_BG_NAME, 0LL);
  }
  EventInfoBlankEarthRankControl__SetBlankEarthRank(this, v10);
}


void __fastcall EventInfoBlankEarthRankControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCF33 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoBlankEarthRankControl___c_TypeInfo, v1);
    byte_49FCF33 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoBlankEarthRankControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoBlankEarthRankControl___c_TypeInfo->static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoBlankEarthRankControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(0LL);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  callback = this->fields.callback;
  EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
    (EventInfoBlankEarthRankControl_o *)this,
    _4__this->fields.rankId,
    v2);
  ActionExtensions__Call(callback, 0LL);
}