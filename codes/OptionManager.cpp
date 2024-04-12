void __fastcall OptionManager___cctor(const MethodInfo *method)
{
  OptionManager_c *v1; // x8
  struct OptionManager_StaticFields *static_fields; // x0
  struct OptionManager_StaticFields *v3; // x0
  struct OptionManager_StaticFields *v4; // x0
  struct OptionManager_StaticFields *v5; // x0
  struct OptionManager_StaticFields *v6; // x0
  struct OptionManager_StaticFields *v7; // x0
  struct OptionManager_StaticFields *v8; // x0
  struct OptionManager_StaticFields *v9; // x0
  struct OptionManager_StaticFields *v10; // x0
  struct OptionManager_StaticFields *v11; // x0
  struct OptionManager_StaticFields *v12; // x0
  struct OptionManager_StaticFields *v13; // x0
  struct OptionManager_StaticFields *v14; // x0
  struct OptionManager_StaticFields *v15; // x0
  struct OptionManager_StaticFields *v16; // x0
  struct OptionManager_StaticFields *v17; // x0
  struct OptionManager_StaticFields *v18; // x0
  struct OptionManager_StaticFields *v19; // x0
  struct OptionManager_StaticFields *v20; // x0
  struct OptionManager_StaticFields *v21; // x0
  struct OptionManager_StaticFields *v22; // x0
  struct OptionManager_StaticFields *v23; // x0
  struct OptionManager_StaticFields *v24; // x0
  struct OptionManager_StaticFields *v25; // x0

  if ( (byte_42ADB7F & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&StringLiteral_10190/*"OptionMessageDisp"*/);
    sub_B52984(&StringLiteral_10203/*"OptionTouchSkipOpeningMovie"*/);
    sub_B52984(&StringLiteral_10192/*"OptionNotiffication"*/);
    sub_B52984(&StringLiteral_10204/*"OptionVoiceVolume"*/);
    sub_B52984(&StringLiteral_10187/*"OptionFriendCostume"*/);
    sub_B52984(&StringLiteral_10189/*"OptionLocalNotiffication"*/);
    sub_B52984(&StringLiteral_10186/*"OptionBoostItemConfirm"*/);
    sub_B52984(&StringLiteral_10197/*"OptionScenarioSpeed"*/);
    sub_B52984(&StringLiteral_10194/*"OptionRaidNotiffication"*/);
    sub_B52984(&StringLiteral_10200/*"OptionSeVolume"*/);
    sub_B52984(&StringLiteral_10198/*"OptionScenarioText"*/);
    sub_B52984(&StringLiteral_16384/*"adjustVolume"*/);
    sub_B52984(&StringLiteral_10191/*"OptionNotPlayOpeningMovie"*/);
    sub_B52984(&StringLiteral_10185/*"OptionBgmVolume"*/);
    sub_B52984(&StringLiteral_10184/*"OptionBattle20220729"*/);
    sub_B52984(&StringLiteral_10188/*"OptionFriendImageLimitCount"*/);
    sub_B52984(&StringLiteral_10205/*"OptionVolumeMute"*/);
    sub_B52984(&StringLiteral_10199/*"OptionScenarioTextSpeed"*/);
    sub_B52984(&StringLiteral_10201/*"OptionSelectAdvantageClassAuto"*/);
    sub_B52984(&StringLiteral_10195/*"OptionResolutionType"*/);
    sub_B52984(&StringLiteral_10193/*"OptionPreBattleFormation"*/);
    sub_B52984(&StringLiteral_10196/*"OptionScenarioScrollSpeed"*/);
    sub_B52984(&StringLiteral_10183/*"OptionAutoSelectParty"*/);
    sub_B52984(&StringLiteral_10202/*"OptionSvtRand"*/);
    byte_42ADB7F = 1;
  }
  OptionManager_TypeInfo->static_fields->isModify = 0;
  OptionManager_TypeInfo->static_fields->isServerModify = 0;
  OptionManager_TypeInfo->static_fields->DEF_VOL = 0.7;
  v1 = OptionManager_TypeInfo;
  OptionManager_TypeInfo->static_fields->OLD_DEF_BGM_VOL = 4.0;
  v1->static_fields->OLD_DEF_SE_VOL = 9.0;
  v1->static_fields->OLD_DEF_VOICE_VOL = 10.0;
  v1->static_fields->DEF_MUTE = 0;
  v1->static_fields->KIND_COUNT_SAVE_SERVER = 6;
  static_fields = v1->static_fields;
  static_fields->SAVE_KEY_BGM_VOLUME = (struct System_String_o *)StringLiteral_10185/*"OptionBgmVolume"*/;
  sub_B52920(&static_fields->SAVE_KEY_BGM_VOLUME);
  v3 = OptionManager_TypeInfo->static_fields;
  v3->SAVE_KEY_SE_VOLUME = (struct System_String_o *)StringLiteral_10200/*"OptionSeVolume"*/;
  sub_B52920(&v3->SAVE_KEY_SE_VOLUME);
  v4 = OptionManager_TypeInfo->static_fields;
  v4->SAVE_KEY_VOICE_VOLUME = (struct System_String_o *)StringLiteral_10204/*"OptionVoiceVolume"*/;
  sub_B52920(&v4->SAVE_KEY_VOICE_VOLUME);
  v5 = OptionManager_TypeInfo->static_fields;
  v5->SAVE_KEY_ADJUST_VOLUME = (struct System_String_o *)StringLiteral_16384/*"adjustVolume"*/;
  sub_B52920(&v5->SAVE_KEY_ADJUST_VOLUME);
  v6 = OptionManager_TypeInfo->static_fields;
  v6->SAVE_KEY_SCENARIO_SPEED = (struct System_String_o *)StringLiteral_10197/*"OptionScenarioSpeed"*/;
  sub_B52920(&v6->SAVE_KEY_SCENARIO_SPEED);
  v7 = OptionManager_TypeInfo->static_fields;
  v7->SAVE_KEY_SCENARIO_TEXT_WAIT = (struct System_String_o *)StringLiteral_10198/*"OptionScenarioText"*/;
  sub_B52920(&v7->SAVE_KEY_SCENARIO_TEXT_WAIT);
  v8 = OptionManager_TypeInfo->static_fields;
  v8->SAVE_KEY_SCENARIO_TEXT_SPEED = (struct System_String_o *)StringLiteral_10199/*"OptionScenarioTextSpeed"*/;
  sub_B52920(&v8->SAVE_KEY_SCENARIO_TEXT_SPEED);
  v9 = OptionManager_TypeInfo->static_fields;
  v9->SAVE_KEY_SCENARIO_SCROLL_SPEED = (struct System_String_o *)StringLiteral_10196/*"OptionScenarioScrollSpeed"*/;
  sub_B52920(&v9->SAVE_KEY_SCENARIO_SCROLL_SPEED);
  v10 = OptionManager_TypeInfo->static_fields;
  v10->SAVE_KEY_NOTIFFICATION = (struct System_String_o *)StringLiteral_10192/*"OptionNotiffication"*/;
  sub_B52920(&v10->SAVE_KEY_NOTIFFICATION);
  v11 = OptionManager_TypeInfo->static_fields;
  v11->SAVE_KEY_LOCAL_NOTIFFICATION = (struct System_String_o *)StringLiteral_10189/*"OptionLocalNotiffication"*/;
  sub_B52920(&v11->SAVE_KEY_LOCAL_NOTIFFICATION);
  v12 = OptionManager_TypeInfo->static_fields;
  v12->SAVE_KEY_RAID_NOTIFFICATION = (struct System_String_o *)StringLiteral_10194/*"OptionRaidNotiffication"*/;
  sub_B52920(&v12->SAVE_KEY_RAID_NOTIFFICATION);
  v13 = OptionManager_TypeInfo->static_fields;
  v13->SAVE_KEY_BOOST_ITEM_CONFIRM = (struct System_String_o *)StringLiteral_10186/*"OptionBoostItemConfirm"*/;
  sub_B52920(&v13->SAVE_KEY_BOOST_ITEM_CONFIRM);
  v14 = OptionManager_TypeInfo->static_fields;
  v14->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT = (struct System_String_o *)StringLiteral_10188/*"OptionFriendImageLimitCount"*/;
  sub_B52920(&v14->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT);
  v15 = OptionManager_TypeInfo->static_fields;
  v15->SAVE_KEY_FREND_COSTUME = (struct System_String_o *)StringLiteral_10187/*"OptionFriendCostume"*/;
  sub_B52920(&v15->SAVE_KEY_FREND_COSTUME);
  v16 = OptionManager_TypeInfo->static_fields;
  v16->SAVE_KEY_SVT_RAND = (struct System_String_o *)StringLiteral_10202/*"OptionSvtRand"*/;
  sub_B52920(&v16->SAVE_KEY_SVT_RAND);
  v17 = OptionManager_TypeInfo->static_fields;
  v17->SAVE_KEY_MESSAGE_DISP = (struct System_String_o *)StringLiteral_10190/*"OptionMessageDisp"*/;
  sub_B52920(&v17->SAVE_KEY_MESSAGE_DISP);
  v18 = OptionManager_TypeInfo->static_fields;
  v18->SAVE_KEY_VOLUME_MUTE = (struct System_String_o *)StringLiteral_10205/*"OptionVolumeMute"*/;
  sub_B52920(&v18->SAVE_KEY_VOLUME_MUTE);
  v19 = OptionManager_TypeInfo->static_fields;
  v19->SAVE_KEY_ADVANTAGE_CLASS_AUTO = (struct System_String_o *)StringLiteral_10201/*"OptionSelectAdvantageClassAuto"*/;
  sub_B52920(&v19->SAVE_KEY_ADVANTAGE_CLASS_AUTO);
  v20 = OptionManager_TypeInfo->static_fields;
  v20->SAVE_KEY_NOT_PLAY_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10191/*"OptionNotPlayOpeningMovie"*/;
  sub_B52920(&v20->SAVE_KEY_NOT_PLAY_OPENING_MOVIE);
  v21 = OptionManager_TypeInfo->static_fields;
  v21->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10203/*"OptionTouchSkipOpeningMovie"*/;
  sub_B52920(&v21->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE);
  v22 = OptionManager_TypeInfo->static_fields;
  v22->SAVE_KEY_AUTO_SELECT_PARTY = (struct System_String_o *)StringLiteral_10183/*"OptionAutoSelectParty"*/;
  sub_B52920(&v22->SAVE_KEY_AUTO_SELECT_PARTY);
  v23 = OptionManager_TypeInfo->static_fields;
  v23->SAVE_KEY_RESOLUTION_TYPE = (struct System_String_o *)StringLiteral_10195/*"OptionResolutionType"*/;
  sub_B52920(&v23->SAVE_KEY_RESOLUTION_TYPE);
  v24 = OptionManager_TypeInfo->static_fields;
  v24->SAVE_KEY_PREBATTLEFORMATION = (struct System_String_o *)StringLiteral_10193/*"OptionPreBattleFormation"*/;
  sub_B52920(&v24->SAVE_KEY_PREBATTLEFORMATION);
  v25 = OptionManager_TypeInfo->static_fields;
  v25->SAVE_KEY_BATTLE_FPS_SETTING = (struct System_String_o *)StringLiteral_10184/*"OptionBattle20220729"*/;
  sub_B52920(&v25->SAVE_KEY_BATTLE_FPS_SETTING);
}


void __fastcall OptionManager___ctor(OptionManager_o *this, const MethodInfo *method)
{
  if ( (byte_42ADB7E & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_OptionManager___ctor__);
    byte_42ADB7E = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_OptionManager___ctor__);
}


void __fastcall OptionManager__AdjustScenarioSpeedSetting(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  OptionManager_c *v2; // x0
  bool HasKey; // w0
  OptionManager_c *v4; // x8
  BalanceConfig_c *v5; // x0
  System_String_o *SAVE_KEY_SCENARIO_TEXT_WAIT; // x19
  float ScenarioTextWaitDefaultCn; // s0
  BalanceConfig_c *v8; // x0

  if ( (byte_42ADB41 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB41 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v1->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT, 0LL) )
  {
    v2 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v2 = OptionManager_TypeInfo;
    }
    HasKey = UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVE_KEY_ADJUST_VOLUME, 0LL);
    v4 = OptionManager_TypeInfo;
    if ( HasKey )
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v4 = OptionManager_TypeInfo;
      }
      v5 = BalanceConfig_TypeInfo;
      SAVE_KEY_SCENARIO_TEXT_WAIT = v4->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v5 = BalanceConfig_TypeInfo;
      }
      ScenarioTextWaitDefaultCn = v5->static_fields->ScenarioTextWaitDefaultCn;
    }
    else
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v4 = OptionManager_TypeInfo;
      }
      v8 = BalanceConfig_TypeInfo;
      SAVE_KEY_SCENARIO_TEXT_WAIT = v4->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v8 = BalanceConfig_TypeInfo;
      }
      ScenarioTextWaitDefaultCn = v8->static_fields->ScenarioTextWaitDefaultSt;
    }
    UnityEngine_PlayerPrefs__SetFloat(SAVE_KEY_SCENARIO_TEXT_WAIT, ScenarioTextWaitDefaultCn, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall OptionManager__AdjustVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  OptionManager_c *v2; // x0

  if ( (byte_42ADB40 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB40 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_ADJUST_VOLUME, 0, 0LL) )
  {
    v2 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v2 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v2->static_fields->SAVE_KEY_ADJUST_VOLUME, 1, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


bool __fastcall OptionManager__CheckOldLocal(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  OptionManager_c *v2; // x0
  const MethodInfo *v3; // x1
  bool v4; // w19
  OptionManager_c *v5; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  bool result; // w0

  if ( (byte_42ADB3A & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB3A = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v1->static_fields->SAVE_KEY_FREND_COSTUME, 0LL) )
    goto LABEL_15;
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_FREND_COSTUME, 0, 0LL) )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v4 = 1;
    OptionManager__SetFriendCostume(1, v3);
  }
  else
  {
LABEL_15:
    v4 = 0;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v5 = OptionManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  result = v4;
  static_fields->isModify = v4;
  OptionManager_TypeInfo->static_fields->isServerModify = v4;
  return result;
}


void __fastcall OptionManager__DeleteContinueData(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_42ADB39 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB39 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY_BGM_VOLUME, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_SE_VOLUME, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_VOICE_VOLUME, 0LL);
  UnityEngine_PlayerPrefs__SetInt(OptionManager_TypeInfo->static_fields->SAVE_KEY_ADJUST_VOLUME, 1, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_SCENARIO_SPEED, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_NOTIFFICATION, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_LOCAL_NOTIFFICATION, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_RAID_NOTIFFICATION, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_BOOST_ITEM_CONFIRM, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_COSTUME, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_SVT_RAND, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_MESSAGE_DISP, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_VOLUME_MUTE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_ADVANTAGE_CLASS_AUTO, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_AUTO_SELECT_PARTY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_RESOLUTION_TYPE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_PREBATTLEFORMATION, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_BATTLE_FPS_SETTING, 0LL);
  OptionManager__Initialize(v2);
}


void __fastcall OptionManager__DeleteOldLocal(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB3B & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB3B = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY_FREND_COSTUME, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall OptionManager__GetAdvantageClassAuto(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB6C & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB6C = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_ADVANTAGE_CLASS_AUTO, 1, 0LL) == 1;
}


bool __fastcall OptionManager__GetAutoSelectParty(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB76 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB76 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_AUTO_SELECT_PARTY, 1, 0LL) == 1;
}


float __fastcall OptionManager__GetBgmVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB44 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB44 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v1->static_fields->SAVE_KEY_BGM_VOLUME, v1->static_fields->DEF_VOL, 0LL);
}


bool __fastcall OptionManager__GetBoostItemUseConfirm(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB5D & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB5D = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_BOOST_ITEM_CONFIRM, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetDefaultMute(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB67 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB67 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return v1->static_fields->DEF_MUTE;
}


float __fastcall OptionManager__GetDefaultScenarioScrollSpeed(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_42ADB6A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42ADB6A = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->ScenarioScrollSpeedDefault;
}


float __fastcall OptionManager__GetDefaultScenarioSpeed(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_42ADB68 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42ADB68 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->ScenarioSpeedDefault;
}


float __fastcall OptionManager__GetDefaultScenarioTextSpeed(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_42ADB69 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42ADB69 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->ScenarioTextSpeedDefault;
}


float __fastcall OptionManager__GetDefaultScenarioWaitTimeSecond(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_42ADB50 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42ADB50 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->ScenarioTextWaitDefaultSt;
}


float __fastcall OptionManager__GetDefaultVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB66 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB66 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return v1->static_fields->DEF_VOL;
}


bool __fastcall OptionManager__GetFriendCostume(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B52A5C(0LL, v2);
  return (BYTE1(SelfUserGame->fields.flag) >> 1) & 1;
}


bool __fastcall OptionManager__GetFriendImageLimitCount(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1
  OptionManager_c *v3; // x0

  if ( (byte_42ADB5F & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB5F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B52A5C(0LL, v2);
  if ( (SelfUserGame->fields.flag & 0x100000) != 0 )
    return 1;
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  return v3->static_fields->isFriendImageLimitCount;
}


bool __fastcall OptionManager__GetLocalNotiffication(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB59 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB59 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_LOCAL_NOTIFFICATION, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetMessageDisp(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB64 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB64 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_MESSAGE_DISP, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetNotPlayOpeningMovie(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB71 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB71 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, 1, 0LL) == 1;
}


bool __fastcall OptionManager__GetNotiffication(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB57 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB57 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_NOTIFFICATION, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetPreBattleFormationSetting(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB7C & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB7C = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_PREBATTLEFORMATION, 1, 0LL) == 1;
}


bool __fastcall OptionManager__GetRaidNotiffication(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB5B & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB5B = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_RAID_NOTIFFICATION, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetRandomLimitCountFriend(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B52A5C(0LL, v2);
  return (BYTE2(SelfUserGame->fields.flag) >> 2) & 1;
}


bool __fastcall OptionManager__GetRandomLimitCountOwn(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B52A5C(0LL, v2);
  return (BYTE2(SelfUserGame->fields.flag) >> 1) & 1;
}


int32_t __fastcall OptionManager__GetResolutionType(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB78 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB78 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_RESOLUTION_TYPE, 0, 0LL);
}


float __fastcall OptionManager__GetScenarioScrollSpeed(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v2; // x8
  System_String_o *SAVE_KEY_SCENARIO_SCROLL_SPEED; // x19

  if ( (byte_42ADB55 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB55 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  v2 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_SCROLL_SPEED = v1->static_fields->SAVE_KEY_SCENARIO_SCROLL_SPEED;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(
           SAVE_KEY_SCENARIO_SCROLL_SPEED,
           v2->static_fields->ScenarioScrollSpeedDefault,
           0LL);
}


float __fastcall OptionManager__GetScenarioSpeed(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v2; // x8
  System_String_o *SAVE_KEY_SCENARIO_SPEED; // x19
  float Float; // s0
  BalanceConfig_c *v5; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedLow; // s1
  float v8; // s8

  if ( (byte_42ADB4E & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB4E = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  v2 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_SPEED = v1->static_fields->SAVE_KEY_SCENARIO_SPEED;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  Float = UnityEngine_PlayerPrefs__GetFloat(SAVE_KEY_SCENARIO_SPEED, v2->static_fields->ScenarioSpeedDefault, 0LL);
  v5 = BalanceConfig_TypeInfo;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  ScenarioSpeedLow = static_fields->ScenarioSpeedLow;
  if ( Float <= ScenarioSpeedLow )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      return BalanceConfig_TypeInfo->static_fields->ScenarioSpeedLow;
    }
  }
  else
  {
    v8 = Float;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    ScenarioSpeedLow = v8;
    if ( v8 >= static_fields->ScenarioSpeedHigh )
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        ScenarioSpeedLow = static_fields->ScenarioSpeedHigh;
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          return BalanceConfig_TypeInfo->static_fields->ScenarioSpeedHigh;
        }
      }
      else
      {
        return static_fields->ScenarioSpeedHigh;
      }
    }
  }
  return ScenarioSpeedLow;
}


float __fastcall OptionManager__GetScenarioTextSpeed(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v2; // x8
  System_String_o *SAVE_KEY_SCENARIO_TEXT_SPEED; // x19

  if ( (byte_42ADB53 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB53 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  v2 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_TEXT_SPEED = v1->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(
           SAVE_KEY_SCENARIO_TEXT_SPEED,
           v2->static_fields->ScenarioTextSpeedDefault,
           0LL);
}


float __fastcall OptionManager__GetScenarioTextWaitTimeSecond(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v2; // x8
  System_String_o *SAVE_KEY_SCENARIO_TEXT_WAIT; // x19
  float Float; // s0
  BalanceConfig_c *v5; // x0
  float ScenarioTextWaitLow; // s8

  if ( (byte_42ADB51 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB51 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  v2 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_TEXT_WAIT = v1->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  Float = UnityEngine_PlayerPrefs__GetFloat(
            SAVE_KEY_SCENARIO_TEXT_WAIT,
            v2->static_fields->ScenarioTextWaitDefaultSt,
            0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( Float <= BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
      ScenarioTextWaitLow = BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow;
    }
    else
    {
      ScenarioTextWaitLow = BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow;
    }
  }
  else
  {
    ScenarioTextWaitLow = Float;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( ScenarioTextWaitLow >= v5->static_fields->ScenarioTextWaitHigh )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ScenarioTextWaitLow = v5->static_fields->ScenarioTextWaitHigh;
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        return BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh;
      }
    }
    else
    {
      return v5->static_fields->ScenarioTextWaitHigh;
    }
  }
  return ScenarioTextWaitLow;
}


float __fastcall OptionManager__GetSeVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB47 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB47 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v1->static_fields->SAVE_KEY_SE_VOLUME, v1->static_fields->DEF_VOL, 0LL);
}


bool __fastcall OptionManager__GetSpoilerSetting(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B52A5C(0LL, v2);
  return (BYTE2(SelfUserGame->fields.flag) >> 3) & 1;
}


bool __fastcall OptionManager__GetSvtRand(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB62 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB62 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_SVT_RAND, 0, 0LL) != 0;
}


bool __fastcall OptionManager__GetTDPlaySpeed(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B52A5C(0LL, v2);
  return (BYTE1(SelfUserGame->fields.flag) >> 2) & 1;
}


bool __fastcall OptionManager__GetTouchSkipOpeningMovie(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB73 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB73 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, 0, 0LL) != 0;
}


float __fastcall OptionManager__GetVoiceVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB4A & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB4A = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v1->static_fields->SAVE_KEY_VOICE_VOLUME, v1->static_fields->DEF_VOL, 0LL);
}


bool __fastcall OptionManager__GetVolumeMute(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB4C & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB4C = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_VOLUME_MUTE, 0, 0LL) != 0;
}


void __fastcall OptionManager__Initialize(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  int32_t Int; // w0
  OptionManager_c *v3; // x8

  if ( (byte_42ADB3C & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB3C = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__Recover((const MethodInfo *)v1);
  Int = UnityEngine_PlayerPrefs__GetInt(OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT, 0, 0LL);
  v3 = OptionManager_TypeInfo;
  OptionManager_TypeInfo->static_fields->isFriendImageLimitCount = Int != 0;
  v3->static_fields->memoryMode = 0;
}


bool __fastcall OptionManager__IsBattleFpsHigh(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_42ADB7A & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB7A = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_BATTLE_FPS_SETTING, 0, 0LL) > 0;
}


void __fastcall OptionManager__Recover(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_42ADB3D & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB3D = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SoundRecover((const MethodInfo *)v1);
  OptionManager__ResolutionRecover(v2);
}


void __fastcall OptionManager__ResolutionRecover(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  int32_t ResolutionType; // w19

  if ( (byte_42ADB3F & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&ResolutionManager_TypeInfo);
    byte_42ADB3F = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  ResolutionType = OptionManager__GetResolutionType((const MethodInfo *)v1);
  if ( (BYTE3(ResolutionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  }
  ResolutionManager__SetResolutionType(ResolutionType, 0LL);
}


bool __fastcall OptionManager__SaveData(System_Action_o *callback, const MethodInfo *method)
{
  OptionManager___c__DisplayClass43_0_o *v3; // x21
  OptionManager_c *SpoilerSetting; // x0
  __int64 v5; // x1
  System_Action_o **p_callback; // x19
  OptionManager_c *v7; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *v9; // x19
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  UserStatusFlagSetRequest_o *v11; // x19
  _BOOL8 FriendImageLimitCount; // x0
  int v13; // w20
  bool FriendCostume; // w8
  OptionManager_c *v15; // x0
  int v16; // w10
  _BOOL8 TDPlaySpeed; // x0
  int v18; // w20
  _BOOL8 RandomLimitCountOwn; // x0
  int v20; // w20
  _BOOL8 RandomLimitCountFriend; // x0
  int v22; // w20
  unsigned int v23; // w21
  const MethodInfo *v24; // x0
  System_Int32_array *v25; // x20
  unsigned int v26; // w23
  OptionManager_c *v27; // x0
  char *v28; // x8
  OptionManager_c *v29; // x0
  char *v30; // x8
  OptionManager_c *v31; // x0
  char *v32; // x8
  OptionManager_c *v33; // x0
  char *v34; // x8
  OptionManager_c *v35; // x0
  int32_t KIND_COUNT_SAVE_SERVER; // w8
  __int64 v37; // x21
  unsigned int v38; // w23
  OptionManager_c *v39; // x0
  __int64 v40; // x8
  OptionManager_c *v41; // x0
  __int64 v42; // x8
  OptionManager_c *v43; // x0
  __int64 v44; // x8
  OptionManager_c *v45; // x0
  __int64 v46; // x8
  OptionManager_c *v47; // x0
  System_Action_o *v48; // x0
  __int64 v49; // x0

  if ( (byte_42ADB42 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_OptionManager___c__DisplayClass43_0__SaveData_b__0__);
    sub_B52984(&OptionManager___c__DisplayClass43_0_TypeInfo);
    byte_42ADB42 = 1;
  }
  v3 = (OptionManager___c__DisplayClass43_0_o *)sub_B52A54(OptionManager___c__DisplayClass43_0_TypeInfo);
  OptionManager___c__DisplayClass43_0___ctor(v3, 0LL);
  if ( !v3 )
LABEL_143:
    sub_B52A5C(SpoilerSetting, v5);
  v3->fields.callback = callback;
  p_callback = &v3->fields.callback;
  sub_B52920(&v3->fields);
  v7 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v7 = OptionManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->isServerModify )
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)v3,
      Method_OptionManager___c__DisplayClass43_0__SaveData_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v9,
                                          (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    v11 = (UserStatusFlagSetRequest_o *)Request_WarBoardWallAttackRequest;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendImageLimitCount = OptionManager__GetFriendImageLimitCount((const MethodInfo *)Request_WarBoardWallAttackRequest);
    v13 = FriendImageLimitCount;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendCostume = OptionManager__GetFriendCostume((const MethodInfo *)FriendImageLimitCount);
    v15 = OptionManager_TypeInfo;
    if ( v13 )
      v16 = 2;
    else
      v16 = 1;
    if ( FriendCostume )
      v13 = v16;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    TDPlaySpeed = OptionManager__GetTDPlaySpeed((const MethodInfo *)v15);
    v18 = v13 + TDPlaySpeed;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn((const MethodInfo *)TDPlaySpeed);
    v20 = v18 + RandomLimitCountOwn;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend((const MethodInfo *)RandomLimitCountOwn);
    v22 = v20 + RandomLimitCountFriend;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v23 = v22 + OptionManager__GetSpoilerSetting((const MethodInfo *)RandomLimitCountFriend);
    if ( v23 )
    {
      v24 = (const MethodInfo *)sub_B5299C(int___TypeInfo, v23);
      v25 = (System_Int32_array *)v24;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount(v24);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_143;
        if ( !v25->max_length )
          goto LABEL_144;
        v26 = 1;
        v25->m_Items[1] = 20;
      }
      else
      {
        v26 = 0;
      }
      v27 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v27);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_143;
        if ( v26 >= v25->max_length )
          goto LABEL_144;
        v28 = (char *)v25 + 4 * v26++;
        *((_DWORD *)v28 + 8) = 9;
      }
      v29 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v29);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_143;
        if ( v26 >= v25->max_length )
          goto LABEL_144;
        v30 = (char *)v25 + 4 * v26++;
        *((_DWORD *)v30 + 8) = 10;
      }
      v31 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v31);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_143;
        if ( v26 >= v25->max_length )
          goto LABEL_144;
        v32 = (char *)v25 + 4 * v26++;
        *((_DWORD *)v32 + 8) = 17;
      }
      v33 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v33);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_143;
        if ( v26 >= v25->max_length )
          goto LABEL_144;
        v34 = (char *)v25 + 4 * v26++;
        *((_DWORD *)v34 + 8) = 18;
      }
      v35 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetSpoilerSetting((const MethodInfo *)v35);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_143;
        if ( v26 >= v25->max_length )
          goto LABEL_144;
        v25->m_Items[v26 + 1] = 19;
      }
    }
    else
    {
      v25 = 0LL;
    }
    SpoilerSetting = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      SpoilerSetting = OptionManager_TypeInfo;
    }
    KIND_COUNT_SAVE_SERVER = SpoilerSetting->static_fields->KIND_COUNT_SAVE_SERVER;
    if ( v23 == KIND_COUNT_SAVE_SERVER )
    {
      v37 = 0LL;
      if ( !v11 )
        goto LABEL_143;
      goto LABEL_138;
    }
    if ( (BYTE3(SpoilerSetting->vtable._0_Equals.methodPtr) & 4) != 0 && !SpoilerSetting->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpoilerSetting);
      KIND_COUNT_SAVE_SERVER = OptionManager_TypeInfo->static_fields->KIND_COUNT_SAVE_SERVER;
    }
    v37 = sub_B5299C(int___TypeInfo, KIND_COUNT_SAVE_SERVER - v23);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount((const MethodInfo *)v37);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      v38 = 0;
    }
    else
    {
      if ( !v37 )
        goto LABEL_143;
      if ( !*(_DWORD *)(v37 + 24) )
        goto LABEL_144;
      v38 = 1;
      *(_DWORD *)(v37 + 32) = 20;
    }
    v39 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v39);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v37 )
        goto LABEL_143;
      if ( v38 >= *(_DWORD *)(v37 + 24) )
        goto LABEL_144;
      v40 = v37 + 4LL * v38++;
      *(_DWORD *)(v40 + 32) = 9;
    }
    v41 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v41);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v37 )
        goto LABEL_143;
      if ( v38 >= *(_DWORD *)(v37 + 24) )
        goto LABEL_144;
      v42 = v37 + 4LL * v38++;
      *(_DWORD *)(v42 + 32) = 10;
    }
    v43 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v43);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v37 )
        goto LABEL_143;
      if ( v38 >= *(_DWORD *)(v37 + 24) )
        goto LABEL_144;
      v44 = v37 + 4LL * v38++;
      *(_DWORD *)(v44 + 32) = 17;
    }
    v45 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v45);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v37 )
        goto LABEL_143;
      if ( v38 >= *(_DWORD *)(v37 + 24) )
        goto LABEL_144;
      v46 = v37 + 4LL * v38++;
      *(_DWORD *)(v46 + 32) = 18;
    }
    v47 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetSpoilerSetting((const MethodInfo *)v47);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
LABEL_137:
      if ( !v11 )
        goto LABEL_143;
LABEL_138:
      UserStatusFlagSetRequest__beginRequest(v11, v25, (System_Int32_array *)v37, 0LL);
LABEL_139:
      LOBYTE(v48) = 1;
      return (char)v48;
    }
    if ( !v37 )
      goto LABEL_143;
    if ( v38 < *(_DWORD *)(v37 + 24) )
    {
      *(_DWORD *)(v37 + 4LL * v38 + 32) = 19;
      goto LABEL_137;
    }
LABEL_144:
    v49 = sub_B52A88(SpoilerSetting);
    sub_B52A28(v49, 0LL);
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = OptionManager_TypeInfo;
    static_fields = OptionManager_TypeInfo->static_fields;
  }
  if ( static_fields->isModify )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = OptionManager_TypeInfo->static_fields;
    }
    static_fields->isModify = 0;
    UnityEngine_PlayerPrefs__Save(0LL);
    if ( *p_callback )
      System_Action__Invoke(*p_callback, 0LL);
    goto LABEL_139;
  }
  v48 = *p_callback;
  if ( *p_callback )
  {
    System_Action__Invoke(v48, 0LL);
    LOBYTE(v48) = 0;
  }
  return (char)v48;
}


void __fastcall OptionManager__SetAdvantageClassAuto(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  v2 = flag;
  if ( (byte_42ADB6D & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB6D = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetAdvantageClassAuto((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_ADVANTAGE_CLASS_AUTO, v2, 0LL);
  }
}


void __fastcall OptionManager__SetAutoSelectParty(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = flag;
  if ( (byte_42ADB77 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB77 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetAutoSelectParty((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_AUTO_SELECT_PARTY, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetBattleFpsHighOrNot(bool value, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = value;
  if ( (byte_42ADB7B & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB7B = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__IsBattleFpsHigh((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_BATTLE_FPS_SETTING, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetBgmVolume(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_42ADB45 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB45 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetBgmVolume((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_BGM_VOLUME, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    OptionManager__SoundRecover(v5);
  }
}


void __fastcall OptionManager__SetBoostItemUseConfirm(bool f, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = f;
  if ( (byte_42ADB5E & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB5E = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetBoostItemUseConfirm((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_BOOST_ITEM_CONFIRM, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetFriendCostume(bool f, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  int32_t flag; // w8
  int v7; // w9
  unsigned int v8; // w8
  OptionManager_c *v9; // x0

  v2 = f;
  if ( (byte_42ADB61 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB61 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetFriendCostume((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B52A5C(0LL, v5);
    flag = SelfUserGame->fields.flag;
    v7 = flag | 0x200;
    v8 = flag & 0xFFFFFDFF;
    if ( v2 )
      v8 = v7;
    SelfUserGame->fields.flag = v8;
    v9 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v9 = OptionManager_TypeInfo;
    }
    v9->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetFriendImageLimitCount(bool f, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  int32_t flag; // w8
  int v8; // w9
  unsigned int v9; // w8
  OptionManager_c *v10; // x0

  v2 = f;
  if ( (byte_42ADB60 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB60 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetFriendImageLimitCount((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    v4->static_fields->isFriendImageLimitCount = v2;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B52A5C(0LL, v6);
    flag = SelfUserGame->fields.flag;
    v8 = flag | 0x100000;
    v9 = flag & 0xFFEFFFFF;
    if ( v2 )
      v9 = v8;
    SelfUserGame->fields.flag = v9;
    v10 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v10 = OptionManager_TypeInfo;
    }
    v10->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetLocalNotiffication(bool f, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = f;
  if ( (byte_42ADB5A & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB5A = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetLocalNotiffication((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_LOCAL_NOTIFFICATION, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetMessageDisp(bool b, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = b;
  if ( (byte_42ADB65 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB65 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetMessageDisp((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_MESSAGE_DISP, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetNotPlayOpeningMovie(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = flag;
  if ( (byte_42ADB72 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB72 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetNotPlayOpeningMovie((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetNotiffication(bool f, bool forceSend, const MethodInfo *method)
{
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0
  UnityEngine_Object_o *Instance; // x20
  AvalonNotificationManager_o *v9; // x0
  __int64 v10; // x1

  v4 = f;
  if ( (byte_42ADB58 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    byte_42ADB58 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetNotiffication((const MethodInfo *)v5) ^ v4) & 1) != 0 || forceSend )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_NOTIFFICATION, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v9 = (AvalonNotificationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
      if ( !v9 )
        sub_B52A5C(0LL, v10);
      AvalonNotificationManager__SetRemotePushState(v9, v4, 0LL);
    }
  }
}


void __fastcall OptionManager__SetPreBattleFormationSetting(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = flag;
  if ( (byte_42ADB7D & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB7D = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetPreBattleFormationSetting((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_PREBATTLEFORMATION, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetRaidNotiffication(bool f, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = f;
  if ( (byte_42ADB5C & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB5C = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetRaidNotiffication((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_RAID_NOTIFFICATION, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetRandomLimitCountFriend(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  int32_t v6; // w8
  int v7; // w9
  unsigned int v8; // w8
  OptionManager_c *v9; // x0

  v2 = flag;
  if ( (byte_42ADB6F & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB6F = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B52A5C(0LL, v5);
    v6 = SelfUserGame->fields.flag;
    v7 = v6 | 0x40000;
    v8 = v6 & 0xFFFBFFFF;
    if ( v2 )
      v8 = v7;
    SelfUserGame->fields.flag = v8;
    v9 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v9 = OptionManager_TypeInfo;
    }
    v9->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetRandomLimitCountOwn(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  int32_t v6; // w8
  int v7; // w9
  unsigned int v8; // w8
  OptionManager_c *v9; // x0

  v2 = flag;
  if ( (byte_42ADB6E & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB6E = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B52A5C(0LL, v5);
    v6 = SelfUserGame->fields.flag;
    v7 = v6 | 0x20000;
    v8 = v6 & 0xFFFDFFFF;
    if ( v2 )
      v8 = v7;
    SelfUserGame->fields.flag = v8;
    v9 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v9 = OptionManager_TypeInfo;
    }
    v9->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetResolutionType(int32_t type, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_42ADB79 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&ResolutionManager_TypeInfo);
    byte_42ADB79 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetResolutionType((const MethodInfo *)v3) != type )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_RESOLUTION_TYPE, type, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    if ( (BYTE3(ResolutionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    }
    ResolutionManager__SetResolutionType(type, 0LL);
  }
}


void __fastcall OptionManager__SetScenarioScrollSpeed(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_42ADB56 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB56 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioScrollSpeed((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SCENARIO_SCROLL_SPEED, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetScenarioSpeed(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_42ADB4F & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB4F = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioSpeed((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SCENARIO_SPEED, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetScenarioTextSpeed(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_42ADB54 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB54 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioTextSpeed((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetScenarioTextWaitTimeSecond(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_42ADB52 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB52 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioTextWaitTimeSecond((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetSeVolume(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_42ADB48 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB48 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetSeVolume((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SE_VOLUME, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    OptionManager__SoundRecover(v5);
  }
}


void __fastcall OptionManager__SetSpoilerSetting(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  int32_t v6; // w8
  int v7; // w9
  unsigned int v8; // w8
  OptionManager_c *v9; // x0

  v2 = flag;
  if ( (byte_42ADB75 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB75 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetSpoilerSetting((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B52A5C(0LL, v5);
    v6 = SelfUserGame->fields.flag;
    v7 = v6 | 0x80000;
    v8 = v6 & 0xFFF7FFFF;
    if ( v2 )
      v8 = v7;
    SelfUserGame->fields.flag = v8;
    v9 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v9 = OptionManager_TypeInfo;
    }
    v9->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetSvtRand(bool f, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = f;
  if ( (byte_42ADB63 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB63 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetSvtRand((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_SVT_RAND, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetTDPlaySpeed(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  int32_t v6; // w8
  int v7; // w9
  unsigned int v8; // w8
  OptionManager_c *v9; // x0

  v2 = flag;
  if ( (byte_42ADB6B & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB6B = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetTDPlaySpeed((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B52A5C(0LL, v5);
    v6 = SelfUserGame->fields.flag;
    v7 = v6 | 0x400;
    v8 = v6 & 0xFFFFFBFF;
    if ( v2 )
      v8 = v7;
    SelfUserGame->fields.flag = v8;
    v9 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v9 = OptionManager_TypeInfo;
    }
    v9->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetTouchSkipOpeningMovie(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = flag;
  if ( (byte_42ADB74 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB74 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetTouchSkipOpeningMovie((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetVoiceVolume(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_42ADB4B & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB4B = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetVoiceVolume((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_VOICE_VOLUME, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    OptionManager__SoundRecover(v5);
  }
}


void __fastcall OptionManager__SetVolumeMute(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = flag;
  if ( (byte_42ADB4D & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB4D = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetVolumeMute((const MethodInfo *)v3) ^ v2) & 1) != 0 )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_VOLUME_MUTE, v2, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
    OptionManager__SoundRecover((const MethodInfo *)v5);
  }
}


void __fastcall OptionManager__SoundRecover(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  float VoiceVolume; // s0
  OptionManager_c *v3; // x0
  float BgmVolume; // s8
  const MethodInfo *v5; // x0
  float SeVolume; // s0
  const MethodInfo *v7; // x0

  if ( (byte_42ADB3E & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADB3E = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetVolumeMute((const MethodInfo *)v1) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__SetBgmMasterVolume(0.0, 0LL);
    SoundManager__SetSeMasterVolume(0.0, 0LL);
    VoiceVolume = 0.0;
  }
  else
  {
    v3 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    BgmVolume = OptionManager__GetBgmVolume((const MethodInfo *)v3);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__SetBgmMasterVolume(BgmVolume, 0LL);
    SeVolume = OptionManager__GetSeVolume(v5);
    SoundManager__SetSeMasterVolume(SeVolume, 0LL);
    VoiceVolume = OptionManager__GetVoiceVolume(v7);
  }
  SoundManager__SetVoiceMasterVolume(VoiceVolume, 0LL);
}


void __fastcall OptionManager__TestBgmVolume(float v, const MethodInfo *method)
{
  if ( (byte_42ADB43 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADB43 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetBgmMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestSeVolume(float v, const MethodInfo *method)
{
  if ( (byte_42ADB46 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADB46 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetSeMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestVoiceVolume(float v, const MethodInfo *method)
{
  if ( (byte_42ADB49 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADB49 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetVoiceMasterVolume(v, 0LL);
}


bool __fastcall OptionManager__isSavedMemoryMode(const MethodInfo *method)
{
  OptionManager_c *v1; // x8
  int32_t systemMemorySize; // w0
  int v3; // w9

  if ( (byte_42ADB70 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42ADB70 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  if ( !v1->static_fields->memoryMode )
  {
    systemMemorySize = UnityEngine_SystemInfo__get_systemMemorySize(0LL);
    v1 = OptionManager_TypeInfo;
    if ( systemMemorySize > 1199 )
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v1 = OptionManager_TypeInfo;
      }
      v3 = 2;
    }
    else
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v1 = OptionManager_TypeInfo;
      }
      v3 = 1;
    }
    v1->static_fields->memoryMode = v3;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = OptionManager_TypeInfo;
  }
  return v1->static_fields->memoryMode == 1;
}


void __fastcall OptionManager___c__DisplayClass43_0___ctor(
        OptionManager___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OptionManager___c__DisplayClass43_0___SaveData_b__0(
        OptionManager___c__DisplayClass43_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  OptionManager_c *v4; // x0
  bool FriendImageLimitCount; // w0
  System_Action_o *callback; // x0

  if ( (byte_42AD3FB & 1) == 0 )
  {
    sub_B52984(&FollowerListRequest_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42AD3FB = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  v4->static_fields->isModify = 0;
  OptionManager_TypeInfo->static_fields->isServerModify = 0;
  FriendImageLimitCount = OptionManager__GetFriendImageLimitCount(0LL);
  UnityEngine_PlayerPrefs__SetInt(
    OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT,
    FriendImageLimitCount,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
  }
  FollowerListRequest__clearRefreshRate(0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}