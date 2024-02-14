void __fastcall OptionManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  OptionManager_c *v26; // x8
  struct OptionManager_StaticFields *static_fields; // x0
  __int64 v28; // x1
  struct OptionManager_StaticFields *v29; // x0
  __int64 v30; // x1
  struct OptionManager_StaticFields *v31; // x0
  __int64 v32; // x1
  struct OptionManager_StaticFields *v33; // x0
  __int64 v34; // x1
  struct OptionManager_StaticFields *v35; // x0
  __int64 v36; // x1
  struct OptionManager_StaticFields *v37; // x0
  __int64 v38; // x1
  struct OptionManager_StaticFields *v39; // x0
  __int64 v40; // x1
  struct OptionManager_StaticFields *v41; // x0
  __int64 v42; // x1
  struct OptionManager_StaticFields *v43; // x0
  __int64 v44; // x1
  struct OptionManager_StaticFields *v45; // x0
  __int64 v46; // x1
  struct OptionManager_StaticFields *v47; // x0
  __int64 v48; // x1
  struct OptionManager_StaticFields *v49; // x0
  __int64 v50; // x1
  struct OptionManager_StaticFields *v51; // x0
  __int64 v52; // x1
  struct OptionManager_StaticFields *v53; // x0
  __int64 v54; // x1
  struct OptionManager_StaticFields *v55; // x0
  __int64 v56; // x1
  struct OptionManager_StaticFields *v57; // x0
  __int64 v58; // x1
  struct OptionManager_StaticFields *v59; // x0
  __int64 v60; // x1
  struct OptionManager_StaticFields *v61; // x0
  __int64 v62; // x1
  struct OptionManager_StaticFields *v63; // x0
  __int64 v64; // x1
  struct OptionManager_StaticFields *v65; // x0
  __int64 v66; // x1
  struct OptionManager_StaticFields *v67; // x0
  __int64 v68; // x1
  struct OptionManager_StaticFields *v69; // x0
  __int64 v70; // x1
  struct OptionManager_StaticFields *v71; // x0
  __int64 v72; // x1
  struct OptionManager_StaticFields *v73; // x0
  __int64 v74; // x1

  if ( (byte_4212079 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_10150/*"OptionMessageDisp"*/, v2);
    sub_B0D8A4(&StringLiteral_10163/*"OptionTouchSkipOpeningMovie"*/, v3);
    sub_B0D8A4(&StringLiteral_10152/*"OptionNotiffication"*/, v4);
    sub_B0D8A4(&StringLiteral_10164/*"OptionVoiceVolume"*/, v5);
    sub_B0D8A4(&StringLiteral_10147/*"OptionFriendCostume"*/, v6);
    sub_B0D8A4(&StringLiteral_10149/*"OptionLocalNotiffication"*/, v7);
    sub_B0D8A4(&StringLiteral_10146/*"OptionBoostItemConfirm"*/, v8);
    sub_B0D8A4(&StringLiteral_10157/*"OptionScenarioSpeed"*/, v9);
    sub_B0D8A4(&StringLiteral_10154/*"OptionRaidNotiffication"*/, v10);
    sub_B0D8A4(&StringLiteral_10160/*"OptionSeVolume"*/, v11);
    sub_B0D8A4(&StringLiteral_10158/*"OptionScenarioText"*/, v12);
    sub_B0D8A4(&StringLiteral_16321/*"adjustVolume"*/, v13);
    sub_B0D8A4(&StringLiteral_10151/*"OptionNotPlayOpeningMovie"*/, v14);
    sub_B0D8A4(&StringLiteral_10145/*"OptionBgmVolume"*/, v15);
    sub_B0D8A4(&StringLiteral_10144/*"OptionBattle20220729"*/, v16);
    sub_B0D8A4(&StringLiteral_10148/*"OptionFriendImageLimitCount"*/, v17);
    sub_B0D8A4(&StringLiteral_10165/*"OptionVolumeMute"*/, v18);
    sub_B0D8A4(&StringLiteral_10159/*"OptionScenarioTextSpeed"*/, v19);
    sub_B0D8A4(&StringLiteral_10161/*"OptionSelectAdvantageClassAuto"*/, v20);
    sub_B0D8A4(&StringLiteral_10155/*"OptionResolutionType"*/, v21);
    sub_B0D8A4(&StringLiteral_10153/*"OptionPreBattleFormation"*/, v22);
    sub_B0D8A4(&StringLiteral_10156/*"OptionScenarioScrollSpeed"*/, v23);
    sub_B0D8A4(&StringLiteral_10143/*"OptionAutoSelectParty"*/, v24);
    sub_B0D8A4(&StringLiteral_10162/*"OptionSvtRand"*/, v25);
    byte_4212079 = 1;
  }
  OptionManager_TypeInfo->static_fields->isModify = 0;
  OptionManager_TypeInfo->static_fields->isServerModify = 0;
  OptionManager_TypeInfo->static_fields->DEF_VOL = 0.7;
  v26 = OptionManager_TypeInfo;
  OptionManager_TypeInfo->static_fields->OLD_DEF_BGM_VOL = 4.0;
  v26->static_fields->OLD_DEF_SE_VOL = 9.0;
  v26->static_fields->OLD_DEF_VOICE_VOL = 10.0;
  v26->static_fields->DEF_MUTE = 0;
  v26->static_fields->KIND_COUNT_SAVE_SERVER = 6;
  static_fields = v26->static_fields;
  v28 = StringLiteral_10145/*"OptionBgmVolume"*/;
  static_fields->SAVE_KEY_BGM_VOLUME = (struct System_String_o *)StringLiteral_10145/*"OptionBgmVolume"*/;
  sub_B0D840(&static_fields->SAVE_KEY_BGM_VOLUME, v28);
  v29 = OptionManager_TypeInfo->static_fields;
  v30 = StringLiteral_10160/*"OptionSeVolume"*/;
  v29->SAVE_KEY_SE_VOLUME = (struct System_String_o *)StringLiteral_10160/*"OptionSeVolume"*/;
  sub_B0D840(&v29->SAVE_KEY_SE_VOLUME, v30);
  v31 = OptionManager_TypeInfo->static_fields;
  v32 = StringLiteral_10164/*"OptionVoiceVolume"*/;
  v31->SAVE_KEY_VOICE_VOLUME = (struct System_String_o *)StringLiteral_10164/*"OptionVoiceVolume"*/;
  sub_B0D840(&v31->SAVE_KEY_VOICE_VOLUME, v32);
  v33 = OptionManager_TypeInfo->static_fields;
  v34 = StringLiteral_16321/*"adjustVolume"*/;
  v33->SAVE_KEY_ADJUST_VOLUME = (struct System_String_o *)StringLiteral_16321/*"adjustVolume"*/;
  sub_B0D840(&v33->SAVE_KEY_ADJUST_VOLUME, v34);
  v35 = OptionManager_TypeInfo->static_fields;
  v36 = StringLiteral_10157/*"OptionScenarioSpeed"*/;
  v35->SAVE_KEY_SCENARIO_SPEED = (struct System_String_o *)StringLiteral_10157/*"OptionScenarioSpeed"*/;
  sub_B0D840(&v35->SAVE_KEY_SCENARIO_SPEED, v36);
  v37 = OptionManager_TypeInfo->static_fields;
  v38 = StringLiteral_10158/*"OptionScenarioText"*/;
  v37->SAVE_KEY_SCENARIO_TEXT_WAIT = (struct System_String_o *)StringLiteral_10158/*"OptionScenarioText"*/;
  sub_B0D840(&v37->SAVE_KEY_SCENARIO_TEXT_WAIT, v38);
  v39 = OptionManager_TypeInfo->static_fields;
  v40 = StringLiteral_10159/*"OptionScenarioTextSpeed"*/;
  v39->SAVE_KEY_SCENARIO_TEXT_SPEED = (struct System_String_o *)StringLiteral_10159/*"OptionScenarioTextSpeed"*/;
  sub_B0D840(&v39->SAVE_KEY_SCENARIO_TEXT_SPEED, v40);
  v41 = OptionManager_TypeInfo->static_fields;
  v42 = StringLiteral_10156/*"OptionScenarioScrollSpeed"*/;
  v41->SAVE_KEY_SCENARIO_SCROLL_SPEED = (struct System_String_o *)StringLiteral_10156/*"OptionScenarioScrollSpeed"*/;
  sub_B0D840(&v41->SAVE_KEY_SCENARIO_SCROLL_SPEED, v42);
  v43 = OptionManager_TypeInfo->static_fields;
  v44 = StringLiteral_10152/*"OptionNotiffication"*/;
  v43->SAVE_KEY_NOTIFFICATION = (struct System_String_o *)StringLiteral_10152/*"OptionNotiffication"*/;
  sub_B0D840(&v43->SAVE_KEY_NOTIFFICATION, v44);
  v45 = OptionManager_TypeInfo->static_fields;
  v46 = StringLiteral_10149/*"OptionLocalNotiffication"*/;
  v45->SAVE_KEY_LOCAL_NOTIFFICATION = (struct System_String_o *)StringLiteral_10149/*"OptionLocalNotiffication"*/;
  sub_B0D840(&v45->SAVE_KEY_LOCAL_NOTIFFICATION, v46);
  v47 = OptionManager_TypeInfo->static_fields;
  v48 = StringLiteral_10154/*"OptionRaidNotiffication"*/;
  v47->SAVE_KEY_RAID_NOTIFFICATION = (struct System_String_o *)StringLiteral_10154/*"OptionRaidNotiffication"*/;
  sub_B0D840(&v47->SAVE_KEY_RAID_NOTIFFICATION, v48);
  v49 = OptionManager_TypeInfo->static_fields;
  v50 = StringLiteral_10146/*"OptionBoostItemConfirm"*/;
  v49->SAVE_KEY_BOOST_ITEM_CONFIRM = (struct System_String_o *)StringLiteral_10146/*"OptionBoostItemConfirm"*/;
  sub_B0D840(&v49->SAVE_KEY_BOOST_ITEM_CONFIRM, v50);
  v51 = OptionManager_TypeInfo->static_fields;
  v52 = StringLiteral_10148/*"OptionFriendImageLimitCount"*/;
  v51->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT = (struct System_String_o *)StringLiteral_10148/*"OptionFriendImageLimitCount"*/;
  sub_B0D840(&v51->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT, v52);
  v53 = OptionManager_TypeInfo->static_fields;
  v54 = StringLiteral_10147/*"OptionFriendCostume"*/;
  v53->SAVE_KEY_FREND_COSTUME = (struct System_String_o *)StringLiteral_10147/*"OptionFriendCostume"*/;
  sub_B0D840(&v53->SAVE_KEY_FREND_COSTUME, v54);
  v55 = OptionManager_TypeInfo->static_fields;
  v56 = StringLiteral_10162/*"OptionSvtRand"*/;
  v55->SAVE_KEY_SVT_RAND = (struct System_String_o *)StringLiteral_10162/*"OptionSvtRand"*/;
  sub_B0D840(&v55->SAVE_KEY_SVT_RAND, v56);
  v57 = OptionManager_TypeInfo->static_fields;
  v58 = StringLiteral_10150/*"OptionMessageDisp"*/;
  v57->SAVE_KEY_MESSAGE_DISP = (struct System_String_o *)StringLiteral_10150/*"OptionMessageDisp"*/;
  sub_B0D840(&v57->SAVE_KEY_MESSAGE_DISP, v58);
  v59 = OptionManager_TypeInfo->static_fields;
  v60 = StringLiteral_10165/*"OptionVolumeMute"*/;
  v59->SAVE_KEY_VOLUME_MUTE = (struct System_String_o *)StringLiteral_10165/*"OptionVolumeMute"*/;
  sub_B0D840(&v59->SAVE_KEY_VOLUME_MUTE, v60);
  v61 = OptionManager_TypeInfo->static_fields;
  v62 = StringLiteral_10161/*"OptionSelectAdvantageClassAuto"*/;
  v61->SAVE_KEY_ADVANTAGE_CLASS_AUTO = (struct System_String_o *)StringLiteral_10161/*"OptionSelectAdvantageClassAuto"*/;
  sub_B0D840(&v61->SAVE_KEY_ADVANTAGE_CLASS_AUTO, v62);
  v63 = OptionManager_TypeInfo->static_fields;
  v64 = StringLiteral_10151/*"OptionNotPlayOpeningMovie"*/;
  v63->SAVE_KEY_NOT_PLAY_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10151/*"OptionNotPlayOpeningMovie"*/;
  sub_B0D840(&v63->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, v64);
  v65 = OptionManager_TypeInfo->static_fields;
  v66 = StringLiteral_10163/*"OptionTouchSkipOpeningMovie"*/;
  v65->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10163/*"OptionTouchSkipOpeningMovie"*/;
  sub_B0D840(&v65->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, v66);
  v67 = OptionManager_TypeInfo->static_fields;
  v68 = StringLiteral_10143/*"OptionAutoSelectParty"*/;
  v67->SAVE_KEY_AUTO_SELECT_PARTY = (struct System_String_o *)StringLiteral_10143/*"OptionAutoSelectParty"*/;
  sub_B0D840(&v67->SAVE_KEY_AUTO_SELECT_PARTY, v68);
  v69 = OptionManager_TypeInfo->static_fields;
  v70 = StringLiteral_10155/*"OptionResolutionType"*/;
  v69->SAVE_KEY_RESOLUTION_TYPE = (struct System_String_o *)StringLiteral_10155/*"OptionResolutionType"*/;
  sub_B0D840(&v69->SAVE_KEY_RESOLUTION_TYPE, v70);
  v71 = OptionManager_TypeInfo->static_fields;
  v72 = StringLiteral_10153/*"OptionPreBattleFormation"*/;
  v71->SAVE_KEY_PREBATTLEFORMATION = (struct System_String_o *)StringLiteral_10153/*"OptionPreBattleFormation"*/;
  sub_B0D840(&v71->SAVE_KEY_PREBATTLEFORMATION, v72);
  v73 = OptionManager_TypeInfo->static_fields;
  v74 = StringLiteral_10144/*"OptionBattle20220729"*/;
  v73->SAVE_KEY_BATTLE_FPS_SETTING = (struct System_String_o *)StringLiteral_10144/*"OptionBattle20220729"*/;
  sub_B0D840(&v73->SAVE_KEY_BATTLE_FPS_SETTING, v74);
}


void __fastcall OptionManager___ctor(OptionManager_o *this, const MethodInfo *method)
{
  if ( (byte_4212078 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_OptionManager___ctor__, method);
    byte_4212078 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_OptionManager___ctor__);
}


void __fastcall OptionManager__AdjustScenarioSpeedSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  bool HasKey; // w0
  OptionManager_c *v6; // x8
  BalanceConfig_c *v7; // x0
  System_String_o *SAVE_KEY_SCENARIO_TEXT_WAIT; // x19
  float ScenarioTextWaitDefaultCn; // s0
  BalanceConfig_c *v10; // x0

  if ( (byte_421203B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_421203B = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v3->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT, 0LL) )
  {
    v4 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    HasKey = UnityEngine_PlayerPrefs__HasKey(v4->static_fields->SAVE_KEY_ADJUST_VOLUME, 0LL);
    v6 = OptionManager_TypeInfo;
    if ( HasKey )
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v6 = OptionManager_TypeInfo;
      }
      v7 = BalanceConfig_TypeInfo;
      SAVE_KEY_SCENARIO_TEXT_WAIT = v6->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v7 = BalanceConfig_TypeInfo;
      }
      ScenarioTextWaitDefaultCn = v7->static_fields->ScenarioTextWaitDefaultCn;
    }
    else
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v6 = OptionManager_TypeInfo;
      }
      v10 = BalanceConfig_TypeInfo;
      SAVE_KEY_SCENARIO_TEXT_WAIT = v6->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v10 = BalanceConfig_TypeInfo;
      }
      ScenarioTextWaitDefaultCn = v10->static_fields->ScenarioTextWaitDefaultSt;
    }
    UnityEngine_PlayerPrefs__SetFloat(SAVE_KEY_SCENARIO_TEXT_WAIT, ScenarioTextWaitDefaultCn, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall OptionManager__AdjustVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0
  OptionManager_c *v3; // x0

  if ( (byte_421203A & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_421203A = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_ADJUST_VOLUME, 0, 0LL) )
  {
    v3 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v3 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_ADJUST_VOLUME, 1, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


bool __fastcall OptionManager__CheckOldLocal(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0
  OptionManager_c *v3; // x0
  const MethodInfo *v4; // x1
  bool v5; // w19
  OptionManager_c *v6; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  bool result; // w0

  if ( (byte_4212034 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212034 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVE_KEY_FREND_COSTUME, 0LL) )
    goto LABEL_15;
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_FREND_COSTUME, 0, 0LL) )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v5 = 1;
    OptionManager__SetFriendCostume(1, v4);
  }
  else
  {
LABEL_15:
    v5 = 0;
  }
  v6 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v6 = OptionManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  result = v5;
  static_fields->isModify = v5;
  OptionManager_TypeInfo->static_fields->isServerModify = v5;
  return result;
}


void __fastcall OptionManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4212033 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212033 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY_BGM_VOLUME, 0LL);
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
  OptionManager__Initialize(v3);
}


void __fastcall OptionManager__DeleteOldLocal(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212035 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212035 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY_FREND_COSTUME, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall OptionManager__GetAdvantageClassAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212066 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212066 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_ADVANTAGE_CLASS_AUTO, 1, 0LL) == 1;
}


bool __fastcall OptionManager__GetAutoSelectParty(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212070 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212070 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_AUTO_SELECT_PARTY, 1, 0LL) == 1;
}


float __fastcall OptionManager__GetBgmVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_421203E & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_421203E = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v2->static_fields->SAVE_KEY_BGM_VOLUME, v2->static_fields->DEF_VOL, 0LL);
}


bool __fastcall OptionManager__GetBoostItemUseConfirm(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212057 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212057 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_BOOST_ITEM_CONFIRM, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetDefaultMute(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212061 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212061 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return v2->static_fields->DEF_MUTE;
}


float __fastcall OptionManager__GetDefaultScenarioScrollSpeed(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0

  if ( (byte_4212064 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    byte_4212064 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->ScenarioScrollSpeedDefault;
}


float __fastcall OptionManager__GetDefaultScenarioSpeed(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0

  if ( (byte_4212062 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    byte_4212062 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->ScenarioSpeedDefault;
}


float __fastcall OptionManager__GetDefaultScenarioTextSpeed(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0

  if ( (byte_4212063 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    byte_4212063 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->ScenarioTextSpeedDefault;
}


float __fastcall OptionManager__GetDefaultScenarioWaitTimeSecond(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0

  if ( (byte_421204A & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    byte_421204A = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->ScenarioTextWaitDefaultSt;
}


float __fastcall OptionManager__GetDefaultVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212060 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212060 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return v2->static_fields->DEF_VOL;
}


bool __fastcall OptionManager__GetFriendCostume(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B0D97C(0LL);
  return (BYTE1(SelfUserGame->fields.flag) >> 1) & 1;
}


bool __fastcall OptionManager__GetFriendImageLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  UserGameEntity_o *SelfUserGame; // x0
  OptionManager_c *v3; // x0

  if ( (byte_4212059 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212059 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B0D97C(0LL);
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
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212053 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212053 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_LOCAL_NOTIFFICATION, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetMessageDisp(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_421205E & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_421205E = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_MESSAGE_DISP, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetNotPlayOpeningMovie(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_421206B & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_421206B = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, 1, 0LL) == 1;
}


bool __fastcall OptionManager__GetNotiffication(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212051 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212051 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_NOTIFFICATION, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetPreBattleFormationSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212076 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212076 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_PREBATTLEFORMATION, 1, 0LL) == 1;
}


bool __fastcall OptionManager__GetRaidNotiffication(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212055 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212055 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_RAID_NOTIFFICATION, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetRandomLimitCountFriend(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B0D97C(0LL);
  return (BYTE2(SelfUserGame->fields.flag) >> 2) & 1;
}


bool __fastcall OptionManager__GetRandomLimitCountOwn(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B0D97C(0LL);
  return (BYTE2(SelfUserGame->fields.flag) >> 1) & 1;
}


int32_t __fastcall OptionManager__GetResolutionType(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212072 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212072 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_RESOLUTION_TYPE, 0, 0LL);
}


float __fastcall OptionManager__GetScenarioScrollSpeed(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  OptionManager_c *v3; // x0
  BalanceConfig_c *v4; // x8
  System_String_o *SAVE_KEY_SCENARIO_SCROLL_SPEED; // x19

  if ( (byte_421204F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_421204F = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  v4 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_SCROLL_SPEED = v3->static_fields->SAVE_KEY_SCENARIO_SCROLL_SPEED;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(
           SAVE_KEY_SCENARIO_SCROLL_SPEED,
           v4->static_fields->ScenarioScrollSpeedDefault,
           0LL);
}


float __fastcall OptionManager__GetScenarioSpeed(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  OptionManager_c *v3; // x0
  BalanceConfig_c *v4; // x8
  System_String_o *SAVE_KEY_SCENARIO_SPEED; // x19
  float Float; // s0
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedLow; // s1
  float v10; // s8

  if ( (byte_4212048 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_4212048 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  v4 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_SPEED = v3->static_fields->SAVE_KEY_SCENARIO_SPEED;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  Float = UnityEngine_PlayerPrefs__GetFloat(SAVE_KEY_SCENARIO_SPEED, v4->static_fields->ScenarioSpeedDefault, 0LL);
  v7 = BalanceConfig_TypeInfo;
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
    v10 = Float;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    ScenarioSpeedLow = v10;
    if ( v10 >= static_fields->ScenarioSpeedHigh )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        ScenarioSpeedLow = static_fields->ScenarioSpeedHigh;
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7);
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
  __int64 v1; // x1
  __int64 v2; // x1
  OptionManager_c *v3; // x0
  BalanceConfig_c *v4; // x8
  System_String_o *SAVE_KEY_SCENARIO_TEXT_SPEED; // x19

  if ( (byte_421204D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_421204D = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  v4 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_TEXT_SPEED = v3->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(
           SAVE_KEY_SCENARIO_TEXT_SPEED,
           v4->static_fields->ScenarioTextSpeedDefault,
           0LL);
}


float __fastcall OptionManager__GetScenarioTextWaitTimeSecond(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  OptionManager_c *v3; // x0
  BalanceConfig_c *v4; // x8
  System_String_o *SAVE_KEY_SCENARIO_TEXT_WAIT; // x19
  float Float; // s0
  BalanceConfig_c *v7; // x0
  float ScenarioTextWaitLow; // s8

  if ( (byte_421204B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_421204B = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  v4 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_TEXT_WAIT = v3->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  Float = UnityEngine_PlayerPrefs__GetFloat(
            SAVE_KEY_SCENARIO_TEXT_WAIT,
            v4->static_fields->ScenarioTextWaitDefaultSt,
            0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( Float <= BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
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
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( ScenarioTextWaitLow >= v7->static_fields->ScenarioTextWaitHigh )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ScenarioTextWaitLow = v7->static_fields->ScenarioTextWaitHigh;
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        return BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh;
      }
    }
    else
    {
      return v7->static_fields->ScenarioTextWaitHigh;
    }
  }
  return ScenarioTextWaitLow;
}


float __fastcall OptionManager__GetSeVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212041 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212041 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v2->static_fields->SAVE_KEY_SE_VOLUME, v2->static_fields->DEF_VOL, 0LL);
}


bool __fastcall OptionManager__GetSpoilerSetting(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B0D97C(0LL);
  return (BYTE2(SelfUserGame->fields.flag) >> 3) & 1;
}


bool __fastcall OptionManager__GetSvtRand(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_421205C & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_421205C = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_SVT_RAND, 0, 0LL) != 0;
}


bool __fastcall OptionManager__GetTDPlaySpeed(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B0D97C(0LL);
  return (BYTE1(SelfUserGame->fields.flag) >> 2) & 1;
}


bool __fastcall OptionManager__GetTouchSkipOpeningMovie(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_421206D & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_421206D = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, 0, 0LL) != 0;
}


float __fastcall OptionManager__GetVoiceVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212044 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212044 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v2->static_fields->SAVE_KEY_VOICE_VOLUME, v2->static_fields->DEF_VOL, 0LL);
}


bool __fastcall OptionManager__GetVolumeMute(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212046 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212046 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_VOLUME_MUTE, 0, 0LL) != 0;
}


void __fastcall OptionManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0
  int32_t Int; // w0
  OptionManager_c *v4; // x8

  if ( (byte_4212036 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212036 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__Recover((const MethodInfo *)v2);
  Int = UnityEngine_PlayerPrefs__GetInt(OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT, 0, 0LL);
  v4 = OptionManager_TypeInfo;
  OptionManager_TypeInfo->static_fields->isFriendImageLimitCount = Int != 0;
  v4->static_fields->memoryMode = 0;
}


bool __fastcall OptionManager__IsBattleFpsHigh(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4212074 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212074 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_BATTLE_FPS_SETTING, 0, 0LL) > 0;
}


void __fastcall OptionManager__Recover(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4212037 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_4212037 = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SoundRecover((const MethodInfo *)v2);
  OptionManager__ResolutionRecover(v3);
}


void __fastcall OptionManager__ResolutionRecover(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  OptionManager_c *v3; // x0
  int32_t ResolutionType; // w19

  if ( (byte_4212039 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    sub_B0D8A4(&ResolutionManager_TypeInfo, v2);
    byte_4212039 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  ResolutionType = OptionManager__GetResolutionType((const MethodInfo *)v3);
  if ( (BYTE3(ResolutionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  }
  ResolutionManager__SetResolutionType(ResolutionType, 0LL);
}


bool __fastcall OptionManager__SaveData(System_Action_o *callback, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  OptionManager___c__DisplayClass43_0_o *v10; // x21
  OptionManager_c *SpoilerSetting; // x0
  System_Action_o **p_callback; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  OptionManager_c *v15; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *v17; // x19
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  UserStatusFlagSetRequest_o *v19; // x19
  _BOOL8 FriendImageLimitCount; // x0
  int v21; // w20
  bool FriendCostume; // w8
  OptionManager_c *v23; // x0
  int v24; // w10
  _BOOL8 TDPlaySpeed; // x0
  int v26; // w20
  _BOOL8 RandomLimitCountOwn; // x0
  int v28; // w20
  _BOOL8 RandomLimitCountFriend; // x0
  int v30; // w20
  unsigned int v31; // w21
  const MethodInfo *v32; // x0
  System_Int32_array *v33; // x20
  unsigned int v34; // w23
  OptionManager_c *v35; // x0
  char *v36; // x8
  OptionManager_c *v37; // x0
  char *v38; // x8
  OptionManager_c *v39; // x0
  char *v40; // x8
  OptionManager_c *v41; // x0
  char *v42; // x8
  OptionManager_c *v43; // x0
  int32_t KIND_COUNT_SAVE_SERVER; // w8
  __int64 v45; // x21
  unsigned int v46; // w23
  OptionManager_c *v47; // x0
  __int64 v48; // x8
  OptionManager_c *v49; // x0
  __int64 v50; // x8
  OptionManager_c *v51; // x0
  __int64 v52; // x8
  OptionManager_c *v53; // x0
  __int64 v54; // x8
  OptionManager_c *v55; // x0
  System_Action_o *v56; // x0
  __int64 v57; // x0

  if ( (byte_421203C & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&OptionManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&Method_OptionManager___c__DisplayClass43_0__SaveData_b__0__, v8);
    sub_B0D8A4(&OptionManager___c__DisplayClass43_0_TypeInfo, v9);
    byte_421203C = 1;
  }
  v10 = (OptionManager___c__DisplayClass43_0_o *)sub_B0D974(OptionManager___c__DisplayClass43_0_TypeInfo, method, v2);
  OptionManager___c__DisplayClass43_0___ctor(v10, 0LL);
  if ( !v10 )
LABEL_143:
    sub_B0D97C(SpoilerSetting);
  v10->fields.callback = callback;
  p_callback = &v10->fields.callback;
  sub_B0D840(&v10->fields, callback);
  v15 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v15 = OptionManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  if ( static_fields->isServerModify )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)v10,
      Method_OptionManager___c__DisplayClass43_0__SaveData_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v17,
                                          (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    v19 = (UserStatusFlagSetRequest_o *)Request_WarBoardWallAttackRequest;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendImageLimitCount = OptionManager__GetFriendImageLimitCount((const MethodInfo *)Request_WarBoardWallAttackRequest);
    v21 = FriendImageLimitCount;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendCostume = OptionManager__GetFriendCostume((const MethodInfo *)FriendImageLimitCount);
    v23 = OptionManager_TypeInfo;
    if ( v21 )
      v24 = 2;
    else
      v24 = 1;
    if ( FriendCostume )
      v21 = v24;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    TDPlaySpeed = OptionManager__GetTDPlaySpeed((const MethodInfo *)v23);
    v26 = v21 + TDPlaySpeed;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn((const MethodInfo *)TDPlaySpeed);
    v28 = v26 + RandomLimitCountOwn;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend((const MethodInfo *)RandomLimitCountOwn);
    v30 = v28 + RandomLimitCountFriend;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v31 = v30 + OptionManager__GetSpoilerSetting((const MethodInfo *)RandomLimitCountFriend);
    if ( v31 )
    {
      v32 = (const MethodInfo *)sub_B0D8BC(int___TypeInfo, v31);
      v33 = (System_Int32_array *)v32;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount(v32);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_143;
        if ( !v33->max_length )
          goto LABEL_144;
        v34 = 1;
        v33->m_Items[1] = 20;
      }
      else
      {
        v34 = 0;
      }
      v35 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v35);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_143;
        if ( v34 >= v33->max_length )
          goto LABEL_144;
        v36 = (char *)v33 + 4 * v34++;
        *((_DWORD *)v36 + 8) = 9;
      }
      v37 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v37);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_143;
        if ( v34 >= v33->max_length )
          goto LABEL_144;
        v38 = (char *)v33 + 4 * v34++;
        *((_DWORD *)v38 + 8) = 10;
      }
      v39 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v39);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_143;
        if ( v34 >= v33->max_length )
          goto LABEL_144;
        v40 = (char *)v33 + 4 * v34++;
        *((_DWORD *)v40 + 8) = 17;
      }
      v41 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v41);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_143;
        if ( v34 >= v33->max_length )
          goto LABEL_144;
        v42 = (char *)v33 + 4 * v34++;
        *((_DWORD *)v42 + 8) = 18;
      }
      v43 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetSpoilerSetting((const MethodInfo *)v43);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_143;
        if ( v34 >= v33->max_length )
          goto LABEL_144;
        v33->m_Items[v34 + 1] = 19;
      }
    }
    else
    {
      v33 = 0LL;
    }
    SpoilerSetting = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      SpoilerSetting = OptionManager_TypeInfo;
    }
    KIND_COUNT_SAVE_SERVER = SpoilerSetting->static_fields->KIND_COUNT_SAVE_SERVER;
    if ( v31 == KIND_COUNT_SAVE_SERVER )
    {
      v45 = 0LL;
      if ( !v19 )
        goto LABEL_143;
      goto LABEL_138;
    }
    if ( (BYTE3(SpoilerSetting->vtable._0_Equals.methodPtr) & 4) != 0 && !SpoilerSetting->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpoilerSetting);
      KIND_COUNT_SAVE_SERVER = OptionManager_TypeInfo->static_fields->KIND_COUNT_SAVE_SERVER;
    }
    v45 = sub_B0D8BC(int___TypeInfo, KIND_COUNT_SAVE_SERVER - v31);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount((const MethodInfo *)v45);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      v46 = 0;
    }
    else
    {
      if ( !v45 )
        goto LABEL_143;
      if ( !*(_DWORD *)(v45 + 24) )
        goto LABEL_144;
      v46 = 1;
      *(_DWORD *)(v45 + 32) = 20;
    }
    v47 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v47);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v45 )
        goto LABEL_143;
      if ( v46 >= *(_DWORD *)(v45 + 24) )
        goto LABEL_144;
      v48 = v45 + 4LL * v46++;
      *(_DWORD *)(v48 + 32) = 9;
    }
    v49 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v49);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v45 )
        goto LABEL_143;
      if ( v46 >= *(_DWORD *)(v45 + 24) )
        goto LABEL_144;
      v50 = v45 + 4LL * v46++;
      *(_DWORD *)(v50 + 32) = 10;
    }
    v51 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v51);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v45 )
        goto LABEL_143;
      if ( v46 >= *(_DWORD *)(v45 + 24) )
        goto LABEL_144;
      v52 = v45 + 4LL * v46++;
      *(_DWORD *)(v52 + 32) = 17;
    }
    v53 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v53);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v45 )
        goto LABEL_143;
      if ( v46 >= *(_DWORD *)(v45 + 24) )
        goto LABEL_144;
      v54 = v45 + 4LL * v46++;
      *(_DWORD *)(v54 + 32) = 18;
    }
    v55 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetSpoilerSetting((const MethodInfo *)v55);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
LABEL_137:
      if ( !v19 )
        goto LABEL_143;
LABEL_138:
      UserStatusFlagSetRequest__beginRequest(v19, v33, (System_Int32_array *)v45, 0LL);
LABEL_139:
      LOBYTE(v56) = 1;
      return (char)v56;
    }
    if ( !v45 )
      goto LABEL_143;
    if ( v46 < *(_DWORD *)(v45 + 24) )
    {
      *(_DWORD *)(v45 + 4LL * v46 + 32) = 19;
      goto LABEL_137;
    }
LABEL_144:
    v57 = sub_B0D9A8(SpoilerSetting);
    sub_B0D948(v57, 0LL);
  }
  if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = OptionManager_TypeInfo;
    static_fields = OptionManager_TypeInfo->static_fields;
  }
  if ( static_fields->isModify )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = OptionManager_TypeInfo->static_fields;
    }
    static_fields->isModify = 0;
    UnityEngine_PlayerPrefs__Save(0LL);
    if ( *p_callback )
      System_Action__Invoke(*p_callback, 0LL);
    goto LABEL_139;
  }
  v56 = *p_callback;
  if ( *p_callback )
  {
    System_Action__Invoke(v56, 0LL);
    LOBYTE(v56) = 0;
  }
  return (char)v56;
}


void __fastcall OptionManager__SetAdvantageClassAuto(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  v2 = flag;
  if ( (byte_4212067 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212067 = 1;
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
  if ( (byte_4212071 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212071 = 1;
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
  if ( (byte_4212075 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212075 = 1;
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
  __int64 v2; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0
  const MethodInfo *v6; // x0

  if ( (byte_421203F & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_421203F = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetBgmVolume((const MethodInfo *)v4) != v )
  {
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v5->static_fields->SAVE_KEY_BGM_VOLUME, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    OptionManager__SoundRecover(v6);
  }
}


void __fastcall OptionManager__SetBoostItemUseConfirm(bool f, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = f;
  if ( (byte_4212058 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212058 = 1;
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
  int32_t flag; // w8
  int v6; // w9
  unsigned int v7; // w8
  OptionManager_c *v8; // x0

  v2 = f;
  if ( (byte_421205B & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_421205B = 1;
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
      sub_B0D97C(0LL);
    flag = SelfUserGame->fields.flag;
    v6 = flag | 0x200;
    v7 = flag & 0xFFFFFDFF;
    if ( v2 )
      v7 = v6;
    SelfUserGame->fields.flag = v7;
    v8 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v8 = OptionManager_TypeInfo;
    }
    v8->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetFriendImageLimitCount(bool f, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int32_t flag; // w8
  int v7; // w9
  unsigned int v8; // w8
  OptionManager_c *v9; // x0

  v2 = f;
  if ( (byte_421205A & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_421205A = 1;
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
      sub_B0D97C(0LL);
    flag = SelfUserGame->fields.flag;
    v7 = flag | 0x100000;
    v8 = flag & 0xFFEFFFFF;
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


void __fastcall OptionManager__SetLocalNotiffication(bool f, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = f;
  if ( (byte_4212054 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212054 = 1;
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
  if ( (byte_421205F & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_421205F = 1;
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
  if ( (byte_421206C & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_421206C = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall OptionManager__SetNotiffication(bool f, bool forceSend, const MethodInfo *method)
{
  _BOOL4 v4; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  OptionManager_c *v7; // x0
  OptionManager_c *v8; // x0
  OptionManager_c *v9; // x0
  UnityEngine_Object_o *Instance; // x20
  AvalonNotificationManager_o *v11; // x0

  v4 = f;
  if ( (byte_4212052 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, forceSend);
    sub_B0D8A4(&OptionManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v6);
    byte_4212052 = 1;
  }
  v7 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetNotiffication((const MethodInfo *)v7) ^ v4) & 1) != 0 || forceSend )
  {
    v8 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v8 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_NOTIFFICATION, v4, 0LL);
    v9 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v9 = OptionManager_TypeInfo;
    }
    v9->static_fields->isModify = 1;
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v11 = (AvalonNotificationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
      if ( !v11 )
        sub_B0D97C(0LL);
      AvalonNotificationManager__SetRemotePushState(v11, v4, 0LL);
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
  if ( (byte_4212077 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212077 = 1;
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
  if ( (byte_4212056 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212056 = 1;
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
  int32_t v5; // w8
  int v6; // w9
  unsigned int v7; // w8
  OptionManager_c *v8; // x0

  v2 = flag;
  if ( (byte_4212069 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212069 = 1;
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
      sub_B0D97C(0LL);
    v5 = SelfUserGame->fields.flag;
    v6 = v5 | 0x40000;
    v7 = v5 & 0xFFFBFFFF;
    if ( v2 )
      v7 = v6;
    SelfUserGame->fields.flag = v7;
    v8 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v8 = OptionManager_TypeInfo;
    }
    v8->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetRandomLimitCountOwn(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int32_t v5; // w8
  int v6; // w9
  unsigned int v7; // w8
  OptionManager_c *v8; // x0

  v2 = flag;
  if ( (byte_4212068 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212068 = 1;
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
      sub_B0D97C(0LL);
    v5 = SelfUserGame->fields.flag;
    v6 = v5 | 0x20000;
    v7 = v5 & 0xFFFDFFFF;
    if ( v2 )
      v7 = v6;
    SelfUserGame->fields.flag = v7;
    v8 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v8 = OptionManager_TypeInfo;
    }
    v8->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetResolutionType(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4212073 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    sub_B0D8A4(&ResolutionManager_TypeInfo, v3);
    byte_4212073 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetResolutionType((const MethodInfo *)v4) != type )
  {
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY_RESOLUTION_TYPE, type, 0LL);
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
  __int64 v2; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4212050 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_4212050 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioScrollSpeed((const MethodInfo *)v4) != v )
  {
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v5->static_fields->SAVE_KEY_SCENARIO_SCROLL_SPEED, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetScenarioSpeed(float v, const MethodInfo *method)
{
  __int64 v2; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4212049 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_4212049 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioSpeed((const MethodInfo *)v4) != v )
  {
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v5->static_fields->SAVE_KEY_SCENARIO_SPEED, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetScenarioTextSpeed(float v, const MethodInfo *method)
{
  __int64 v2; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_421204E & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_421204E = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioTextSpeed((const MethodInfo *)v4) != v )
  {
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v5->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetScenarioTextWaitTimeSecond(float v, const MethodInfo *method)
{
  __int64 v2; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_421204C & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_421204C = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioTextWaitTimeSecond((const MethodInfo *)v4) != v )
  {
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v5->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetSeVolume(float v, const MethodInfo *method)
{
  __int64 v2; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0
  const MethodInfo *v6; // x0

  if ( (byte_4212042 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_4212042 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetSeVolume((const MethodInfo *)v4) != v )
  {
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v5->static_fields->SAVE_KEY_SE_VOLUME, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    OptionManager__SoundRecover(v6);
  }
}


void __fastcall OptionManager__SetSpoilerSetting(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int32_t v5; // w8
  int v6; // w9
  unsigned int v7; // w8
  OptionManager_c *v8; // x0

  v2 = flag;
  if ( (byte_421206F & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_421206F = 1;
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
      sub_B0D97C(0LL);
    v5 = SelfUserGame->fields.flag;
    v6 = v5 | 0x80000;
    v7 = v5 & 0xFFF7FFFF;
    if ( v2 )
      v7 = v6;
    SelfUserGame->fields.flag = v7;
    v8 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v8 = OptionManager_TypeInfo;
    }
    v8->static_fields->isModify = 1;
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
  if ( (byte_421205D & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_421205D = 1;
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
  int32_t v5; // w8
  int v6; // w9
  unsigned int v7; // w8
  OptionManager_c *v8; // x0

  v2 = flag;
  if ( (byte_4212065 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212065 = 1;
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
      sub_B0D97C(0LL);
    v5 = SelfUserGame->fields.flag;
    v6 = v5 | 0x400;
    v7 = v5 & 0xFFFFFBFF;
    if ( v2 )
      v7 = v6;
    SelfUserGame->fields.flag = v7;
    v8 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v8 = OptionManager_TypeInfo;
    }
    v8->static_fields->isModify = 1;
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
  if ( (byte_421206E & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_421206E = 1;
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
  __int64 v2; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0
  const MethodInfo *v6; // x0

  if ( (byte_4212045 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v2);
    byte_4212045 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetVoiceVolume((const MethodInfo *)v4) != v )
  {
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v5->static_fields->SAVE_KEY_VOICE_VOLUME, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    OptionManager__SoundRecover(v6);
  }
}


void __fastcall OptionManager__SetVolumeMute(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  v2 = flag;
  if ( (byte_4212047 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4212047 = 1;
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
  __int64 v1; // x1
  __int64 v2; // x1
  OptionManager_c *v3; // x0
  float VoiceVolume; // s0
  OptionManager_c *v5; // x0
  float BgmVolume; // s8
  const MethodInfo *v7; // x0
  float SeVolume; // s0
  const MethodInfo *v9; // x0

  if ( (byte_4212038 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    sub_B0D8A4(&SoundManager_TypeInfo, v2);
    byte_4212038 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetVolumeMute((const MethodInfo *)v3) )
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
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    BgmVolume = OptionManager__GetBgmVolume((const MethodInfo *)v5);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__SetBgmMasterVolume(BgmVolume, 0LL);
    SeVolume = OptionManager__GetSeVolume(v7);
    SoundManager__SetSeMasterVolume(SeVolume, 0LL);
    VoiceVolume = OptionManager__GetVoiceVolume(v9);
  }
  SoundManager__SetVoiceMasterVolume(VoiceVolume, 0LL);
}


void __fastcall OptionManager__TestBgmVolume(float v, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_421203D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, v2);
    byte_421203D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetBgmMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestSeVolume(float v, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4212040 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, v2);
    byte_4212040 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetSeMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestVoiceVolume(float v, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4212043 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, v2);
    byte_4212043 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetVoiceMasterVolume(v, 0LL);
}


bool __fastcall OptionManager__isSavedMemoryMode(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x8
  int32_t systemMemorySize; // w0
  int v4; // w9

  if ( (byte_421206A & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, v1);
    byte_421206A = 1;
  }
  v2 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  if ( !v2->static_fields->memoryMode )
  {
    systemMemorySize = UnityEngine_SystemInfo__get_systemMemorySize(0LL);
    v2 = OptionManager_TypeInfo;
    if ( systemMemorySize > 1199 )
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v2 = OptionManager_TypeInfo;
      }
      v4 = 2;
    }
    else
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v2 = OptionManager_TypeInfo;
      }
      v4 = 1;
    }
    v2->static_fields->memoryMode = v4;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = OptionManager_TypeInfo;
  }
  return v2->static_fields->memoryMode == 1;
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
  __int64 v4; // x1
  OptionManager_c *v5; // x0
  bool FriendImageLimitCount; // w0
  System_Action_o *callback; // x0

  if ( (byte_4212167 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerListRequest_TypeInfo, result);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    byte_4212167 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v5 = OptionManager_TypeInfo;
  }
  v5->static_fields->isModify = 0;
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