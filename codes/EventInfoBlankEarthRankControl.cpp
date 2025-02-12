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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  struct EventInfoBlankEarthRankControl_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct EventInfoBlankEarthRankControl_StaticFields *v20; // x0
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct EventInfoBlankEarthRankControl_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BB4EA4 & 1) == 0 )
  {
    sub_1C13D24(&EventInfoBlankEarthRankControl_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_20767/*"img_questboard_main_"*/, v8);
    sub_1C13D24(&StringLiteral_20766/*"img_questboard_knockdown"*/, v9);
    sub_1C13D24(&StringLiteral_17520/*"bit_incoming"*/, v10);
    sub_1C13D24(&StringLiteral_17521/*"bit_incoming_end"*/, v11);
    byte_4BB4EA4 = 1;
  }
  EventInfoBlankEarthRankControl_TypeInfo->static_fields->BLANK_EARTH_RANK_BG_NAME = (struct System_String_o *)StringLiteral_20767/*"img_questboard_main_"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventInfoBlankEarthRankControl_TypeInfo->static_fields,
    StringLiteral_20767/*"img_questboard_main_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_20766/*"img_questboard_knockdown"*/;
  static_fields = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  static_fields->BLANK_EARTH_RANK_SP_NAME = (struct System_String_o *)StringLiteral_20766/*"img_questboard_knockdown"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->BLANK_EARTH_RANK_SP_NAME, v12, v14, v15, v16, v17, v18, v19);
  v20 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v20->DEFALUT_RANK_ID = 1;
  v21 = StringLiteral_17520/*"bit_incoming"*/;
  v20->ORDERRANK_CHANGE_PREFAB_NAME = (struct System_String_o *)StringLiteral_17520/*"bit_incoming"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v20->ORDERRANK_CHANGE_PREFAB_NAME, v21, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_17521/*"bit_incoming_end"*/;
  v29 = EventInfoBlankEarthRankControl_TypeInfo->static_fields;
  v29->ORDERRANK_CHANGE_ANIM_NAME = (struct System_String_o *)StringLiteral_17521/*"bit_incoming_end"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->ORDERRANK_CHANGE_ANIM_NAME, v28, v30, v31, v32, v33, v34, v35);
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
  __int64 v3; // x1
  System_String_o *BgmName; // x0
  float fadeInBgmTime; // s8
  System_String_o *v6; // x19
  float DEFAULT_VOLUME; // s9

  if ( (byte_4BB4EA3 & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, method);
    sub_1C13D24(&SoundManager_TypeInfo, v3);
    byte_4BB4EA3 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeInBgmTime = this->fields.fadeInBgmTime;
  v6 = BgmName;
  DEFAULT_VOLUME = BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_39851568(v6, DEFAULT_VOLUME, fadeInBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeInSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  EventInfoBlankEarthRankControl_c *v13; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x21
  __int64 v19; // x1
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v22; // x20
  EventInfoBlankEarthRankControl___c_c *v23; // x0
  EventDelegate_Callback_o *_9__27_0; // x19
  Il2CppObject *v25; // x21
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int32_t currentRankId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB4EA1 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&EventDelegate_Callback_TypeInfo, v6);
    sub_1C13D24(&EventInfoBlankEarthRankControl_TypeInfo, v7);
    sub_1C13D24(&int_TypeInfo, v8);
    sub_1C13D24(&Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, v9);
    sub_1C13D24(&EventInfoBlankEarthRankControl___c_TypeInfo, v10);
    sub_1C13D24(&Method_UITweener_Begin_TweenAlpha___, v11);
    sub_1C13D24(&StringLiteral_25341/*"{\"id\":"*/, v12);
    byte_4BB4EA1 = 1;
  }
  v13 = EventInfoBlankEarthRankControl_TypeInfo;
  rankSprite = this->fields.rankSprite;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v13 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  BLANK_EARTH_RANK_SP_NAME = v13->static_fields->BLANK_EARTH_RANK_SP_NAME;
  currentRankId = this->fields.currentRankId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentRankId, v2, v3, v4);
  v17 = System_String__Format((System_String_o *)StringLiteral_25341/*"{\"id\":"*/, v16, 0LL);
  v18 = System_String__Concat_62967944(BLANK_EARTH_RANK_SP_NAME, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rankSprite, v18, 0LL);
  v20 = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !v20
    || (gameObject = UnityEngine_Component__get_gameObject(v20, 0LL),
        (v20 = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                            gameObject,
                                            this->fields.fadeInDurationTime,
                                            (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_1C13F80(v20, v19);
  }
  v22 = (UITweener_o *)v20;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v20, 1, 0LL);
  v22[1].klass = (UITweener_c *)0x3F80000000000000LL;
  v22->fields.method = this->fields.fadeMethod;
  v23 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v23 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__27_0 = v23->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__27_0 = (EventDelegate_Callback_o *)sub_1C13F70(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(_9__27_0, v25, Method_EventInfoBlankEarthRankControl___c__FadeInSprite_b__27_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = _9__27_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
      (int64_t)_9__27_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  UITweener__SetOnFinished(v22, _9__27_0, 0LL);
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

  if ( (byte_4BB4EA2 & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, method);
    sub_1C13D24(&SoundManager_TypeInfo, v3);
    byte_4BB4EA2 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  fadeBgmVolume = this->fields.fadeBgmVolume;
  fadeOutBgmTime = this->fields.fadeOutBgmTime;
  v7 = BgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_39851568(v7, fadeBgmVolume, fadeOutBgmTime, 0LL);
}


void __fastcall EventInfoBlankEarthRankControl__FadeOutSprite(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *rankSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v5; // x20

  if ( (byte_4BB4EA0 & 1) == 0 )
  {
    sub_1C13D24(&Method_UITweener_Begin_TweenAlpha___, method);
    byte_4BB4EA0 = 1;
  }
  rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
  if ( !rankSprite
    || (gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL),
        (rankSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                   gameObject,
                                                   this->fields.fadeOutDurationTime,
                                                   (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenAlpha___)) == 0LL) )
  {
    sub_1C13F80(rankSprite, method);
  }
  v5 = (UITweener_o *)rankSprite;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rankSprite, 1, 0LL);
  v5[1].klass = (UITweener_c *)1065353216;
  v5->fields.method = this->fields.fadeMethod;
  UITweener__PlayForward(v5, 0LL);
}


int32_t __fastcall EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB4E9E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB4E9E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CAB )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1CAB = 1;
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
  if ( !byte_4BB1CAB )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1CAB = 1;
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
  System_Action_o *_9__17_0; // x21
  Il2CppObject *v9; // x22
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB4E99 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, entity);
    sub_1C13D24(&Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, v5);
    sub_1C13D24(&EventInfoBlankEarthRankControl___c_TypeInfo, v6);
    byte_4BB4E99 = 1;
  }
  v7 = EventInfoBlankEarthRankControl___c_TypeInfo;
  if ( !EventInfoBlankEarthRankControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl___c_TypeInfo);
    v7 = EventInfoBlankEarthRankControl___c_TypeInfo;
  }
  _9__17_0 = v7->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventInfoBlankEarthRankControl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__17_0 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(_9__17_0, v9, Method_EventInfoBlankEarthRankControl___c__Initialization_b__17_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = _9__17_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
      (int64_t)_9__17_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !this )
    sub_1C13F80(v7, entity);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, _9__17_0, 0LL);
}


bool __fastcall EventInfoBlankEarthRankControl__IsAnimSkipRank(
        EventInfoBlankEarthRankControl_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB4E9C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB4E9C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB116C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB116C = 1;
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
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BAF44D = 1;
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Action_o **v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  EventInfoBlankEarthRankControl_c *v34; // x0
  UnityEngine_Object_o *v35; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x23
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Action_o *_9__25_0; // x24
  Il2CppObject *v45; // x25
  struct EventInfoBlankEarthRankControl___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Action_o *v53; // x24
  System_Action_o *v54; // x24
  System_Action_o *v55; // x24
  System_Action_o *v56; // x24
  System_Action_o *v57; // x24
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  EventInfoBlankEarthRankControl_c *v67; // x0
  int32_t currentRankId; // w9
  System_String_o *ORDERRANK_CHANGE_ANIM_NAME; // x19
  Il2CppObject *v70; // x0
  System_String_o *v71; // x19
  Il2CppObject *v72; // x21
  UnityEngine_Object_o *Clip; // x22
  int32_t v74; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BB4E9F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&EventInfoBlankEarthRankControl_TypeInfo, v5);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_1C13D24(&int_TypeInfo, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    sub_1C13D24(&Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, v10);
    sub_1C13D24(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__, v11);
    sub_1C13D24(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__, v12);
    sub_1C13D24(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__, v13);
    sub_1C13D24(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__, v14);
    sub_1C13D24(&Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__, v15);
    sub_1C13D24(&EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo, v16);
    sub_1C13D24(&EventInfoBlankEarthRankControl___c_TypeInfo, v17);
    byte_4BB4E9F = 1;
  }
  v18 = sub_1C13F70(EventInfoBlankEarthRankControl___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_31;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  v27 = (System_Action_o **)(v18 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)callback, v28, v29, v30, v31, v32, v33);
  v34 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v34 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  v35 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                  (EventInfoUIBase_o *)this,
                                  v34->static_fields->ORDERRANK_CHANGE_PREFAB_NAME,
                                  0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34717732((UnityEngine_GameObject_o *)v35, gameObject, 0LL);
  if ( !v35 )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v35,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
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
    v45 = (Il2CppObject *)v19->static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v45, Method_EventInfoBlankEarthRankControl___c__PlayRankChangeAnim_b__25_0__, 0LL);
    static_fields = EventInfoBlankEarthRankControl___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = _9__25_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
      (int64_t)_9__25_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  if ( !Component_object )
    goto LABEL_31;
  Component_object[2].klass = (Il2CppClass *)_9__25_0;
  sub_1C13CC8((PartyOrganizationUtility_o *)&Component_object[2], (int64_t)_9__25_0, v38, v39, v40, v41, v42, v43);
  v53 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__1__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v53, 0LL);
  v54 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__2__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v54, 0LL);
  v55 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__3__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 2, v55, 0LL);
  v56 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__4__,
    0LL);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 3, v56, 0LL);
  v57 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v18,
    Method_EventInfoBlankEarthRankControl___c__DisplayClass25_0__PlayRankChangeAnim_b__5__,
    0LL);
  Component_object[2].monitor = v57;
  sub_1C13CC8((PartyOrganizationUtility_o *)&Component_object[2].monitor, (int64_t)v57, v58, v59, v60, v61, v62, v63);
  v67 = EventInfoBlankEarthRankControl_TypeInfo;
  if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
    v67 = EventInfoBlankEarthRankControl_TypeInfo;
  }
  currentRankId = this->fields.currentRankId;
  ORDERRANK_CHANGE_ANIM_NAME = v67->static_fields->ORDERRANK_CHANGE_ANIM_NAME;
  v74 = currentRankId;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, v64, v65, v66);
  v71 = System_String__Format(ORDERRANK_CHANGE_ANIM_NAME, v70, 0LL);
  v72 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v35,
          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = (EventInfoBlankEarthRankControl___c_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v72, 0LL, 0LL);
  if ( ((unsigned __int8)v19 & 1) == 0 )
    goto LABEL_30;
  if ( !v72 )
LABEL_31:
    sub_1C13F80(v19, v20);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v72, v71, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_70466396((UnityEngine_Animation_o *)v72, v71, 0LL);
    return;
  }
LABEL_30:
  ActionExtensions__Call(*v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
        EventInfoBlankEarthRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4BB4E9D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_4BB4E9D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CA4 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, *(_QWORD *)&rank);
    byte_4BB1CA4 = 1;
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
  int32_t DEFALUT_RANK_ID; // w20
  Il2CppObject *Master_object; // x0
  const MethodInfo *v13; // x1
  struct System_Int32_array *commonReleaseIds; // x8
  CommonReleaseMaster_o *v15; // x21
  unsigned __int64 v16; // x23
  unsigned __int64 max_length; // x9
  EventInfoBlankEarthRankControl_c *CurrentBlankEarthRank; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  EventInfoBlankEarthRankControl_c *v24; // x0
  UISprite_o *v25; // x19
  System_String_o *BLANK_EARTH_RANK_SP_NAME; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB4E9B & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&EventInfoBlankEarthRankControl_TypeInfo, v5);
    sub_1C13D24(&int_TypeInfo, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_25341/*"{\"id\":"*/, v8);
    byte_4BB4E9B = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    commonReleaseIds = this->fields.commonReleaseIds;
    if ( !commonReleaseIds )
LABEL_16:
      sub_1C13F80(Master_object, v13);
    v15 = (CommonReleaseMaster_o *)Master_object;
    v16 = 0LL;
    while ( 1 )
    {
      max_length = commonReleaseIds->max_length;
      if ( (__int64)v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
        sub_1C13F88(Master_object, v13);
      if ( v15 )
      {
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(
                                          v15,
                                          commonReleaseIds->m_Items[v16 + 1],
                                          0LL,
                                          0,
                                          0LL);
        commonReleaseIds = this->fields.commonReleaseIds;
        DEFALUT_RANK_ID += (unsigned __int8)Master_object & 1;
        ++v16;
        if ( commonReleaseIds )
          continue;
      }
      goto LABEL_16;
    }
    this->fields.currentRankId = DEFALUT_RANK_ID;
    CurrentBlankEarthRank = (EventInfoBlankEarthRankControl_c *)EventInfoBlankEarthRankControl__GetCurrentBlankEarthRank(
                                                                  (EventInfoBlankEarthRankControl_o *)Master_object,
                                                                  v13);
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
                                                                      v19);
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
      v20);
    v24 = EventInfoBlankEarthRankControl_TypeInfo;
    v25 = this->fields.rankSprite;
    if ( !EventInfoBlankEarthRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoBlankEarthRankControl_TypeInfo);
      v24 = EventInfoBlankEarthRankControl_TypeInfo;
    }
    BLANK_EARTH_RANK_SP_NAME = v24->static_fields->BLANK_EARTH_RANK_SP_NAME;
    v30 = DEFALUT_RANK_ID;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v21, v22, v23);
    v28 = System_String__Format((System_String_o *)StringLiteral_25341/*"{\"id\":"*/, v27, 0LL);
    v29 = System_String__Concat_62967944(BLANK_EARTH_RANK_SP_NAME, v28, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v25, v29, 0LL);
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

  if ( (byte_4BB4E9A & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, entity);
    sub_1C13D24(&EventInfoBlankEarthRankControl_TypeInfo, v4);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_17433/*"beforeLimitUpEffectMessageIds"*/, v6);
    sub_1C13D24(&StringLiteral_23158/*"raid_boss_status_lose_"*/, v7);
    byte_4BB4E9A = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17433/*"beforeLimitUpEffectMessageIds"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.rankSprite, (System_String_o *)StringLiteral_23158/*"raid_boss_status_lose_"*/, 0LL);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4EA5 & 1) == 0 )
  {
    sub_1C13D24(&EventInfoBlankEarthRankControl___c_TypeInfo, v1);
    byte_4BB4EA5 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventInfoBlankEarthRankControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoBlankEarthRankControl___c_TypeInfo->static_fields->__9 = (struct EventInfoBlankEarthRankControl___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventInfoBlankEarthRankControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutSprite(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__2(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
  EventInfoBlankEarthRankControl__FadeInSprite(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__3(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
  EventInfoBlankEarthRankControl__FadeOutBgmVolume(_4__this, method);
}


void __fastcall EventInfoBlankEarthRankControl___c__DisplayClass25_0___PlayRankChangeAnim_b__4(
        EventInfoBlankEarthRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventInfoBlankEarthRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(this, method);
  callback = this->fields.callback;
  EventInfoBlankEarthRankControl__SaveCurrentBlankEarthRank(
    (EventInfoBlankEarthRankControl_o *)this,
    _4__this->fields.currentRankId,
    v2);
  ActionExtensions__Call(callback, 0LL);
}