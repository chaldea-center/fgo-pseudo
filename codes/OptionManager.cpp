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

  if ( (byte_418518F & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_10126/*"OptionMessageDisp"*/, v2);
    sub_B2C35C(&StringLiteral_10139/*"OptionTouchSkipOpeningMovie"*/, v3);
    sub_B2C35C(&StringLiteral_10128/*"OptionNotiffication"*/, v4);
    sub_B2C35C(&StringLiteral_10140/*"OptionVoiceVolume"*/, v5);
    sub_B2C35C(&StringLiteral_10123/*"OptionFriendCostume"*/, v6);
    sub_B2C35C(&StringLiteral_10125/*"OptionLocalNotiffication"*/, v7);
    sub_B2C35C(&StringLiteral_10122/*"OptionBoostItemConfirm"*/, v8);
    sub_B2C35C(&StringLiteral_10133/*"OptionScenarioSpeed"*/, v9);
    sub_B2C35C(&StringLiteral_10130/*"OptionRaidNotiffication"*/, v10);
    sub_B2C35C(&StringLiteral_10136/*"OptionSeVolume"*/, v11);
    sub_B2C35C(&StringLiteral_10134/*"OptionScenarioText"*/, v12);
    sub_B2C35C(&StringLiteral_16272/*"adjustVolume"*/, v13);
    sub_B2C35C(&StringLiteral_10127/*"OptionNotPlayOpeningMovie"*/, v14);
    sub_B2C35C(&StringLiteral_10121/*"OptionBgmVolume"*/, v15);
    sub_B2C35C(&StringLiteral_10120/*"OptionBattle20220729"*/, v16);
    sub_B2C35C(&StringLiteral_10124/*"OptionFriendImageLimitCount"*/, v17);
    sub_B2C35C(&StringLiteral_10141/*"OptionVolumeMute"*/, v18);
    sub_B2C35C(&StringLiteral_10135/*"OptionScenarioTextSpeed"*/, v19);
    sub_B2C35C(&StringLiteral_10137/*"OptionSelectAdvantageClassAuto"*/, v20);
    sub_B2C35C(&StringLiteral_10131/*"OptionResolutionType"*/, v21);
    sub_B2C35C(&StringLiteral_10129/*"OptionPreBattleFormation"*/, v22);
    sub_B2C35C(&StringLiteral_10132/*"OptionScenarioScrollSpeed"*/, v23);
    sub_B2C35C(&StringLiteral_10119/*"OptionAutoSelectParty"*/, v24);
    sub_B2C35C(&StringLiteral_10138/*"OptionSvtRand"*/, v25);
    byte_418518F = 1;
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
  v28 = StringLiteral_10121/*"OptionBgmVolume"*/;
  static_fields->SAVE_KEY_BGM_VOLUME = (struct System_String_o *)StringLiteral_10121/*"OptionBgmVolume"*/;
  sub_B2C2F8(&static_fields->SAVE_KEY_BGM_VOLUME, v28);
  v29 = OptionManager_TypeInfo->static_fields;
  v30 = StringLiteral_10136/*"OptionSeVolume"*/;
  v29->SAVE_KEY_SE_VOLUME = (struct System_String_o *)StringLiteral_10136/*"OptionSeVolume"*/;
  sub_B2C2F8(&v29->SAVE_KEY_SE_VOLUME, v30);
  v31 = OptionManager_TypeInfo->static_fields;
  v32 = StringLiteral_10140/*"OptionVoiceVolume"*/;
  v31->SAVE_KEY_VOICE_VOLUME = (struct System_String_o *)StringLiteral_10140/*"OptionVoiceVolume"*/;
  sub_B2C2F8(&v31->SAVE_KEY_VOICE_VOLUME, v32);
  v33 = OptionManager_TypeInfo->static_fields;
  v34 = StringLiteral_16272/*"adjustVolume"*/;
  v33->SAVE_KEY_ADJUST_VOLUME = (struct System_String_o *)StringLiteral_16272/*"adjustVolume"*/;
  sub_B2C2F8(&v33->SAVE_KEY_ADJUST_VOLUME, v34);
  v35 = OptionManager_TypeInfo->static_fields;
  v36 = StringLiteral_10133/*"OptionScenarioSpeed"*/;
  v35->SAVE_KEY_SCENARIO_SPEED = (struct System_String_o *)StringLiteral_10133/*"OptionScenarioSpeed"*/;
  sub_B2C2F8(&v35->SAVE_KEY_SCENARIO_SPEED, v36);
  v37 = OptionManager_TypeInfo->static_fields;
  v38 = StringLiteral_10134/*"OptionScenarioText"*/;
  v37->SAVE_KEY_SCENARIO_TEXT_WAIT = (struct System_String_o *)StringLiteral_10134/*"OptionScenarioText"*/;
  sub_B2C2F8(&v37->SAVE_KEY_SCENARIO_TEXT_WAIT, v38);
  v39 = OptionManager_TypeInfo->static_fields;
  v40 = StringLiteral_10135/*"OptionScenarioTextSpeed"*/;
  v39->SAVE_KEY_SCENARIO_TEXT_SPEED = (struct System_String_o *)StringLiteral_10135/*"OptionScenarioTextSpeed"*/;
  sub_B2C2F8(&v39->SAVE_KEY_SCENARIO_TEXT_SPEED, v40);
  v41 = OptionManager_TypeInfo->static_fields;
  v42 = StringLiteral_10132/*"OptionScenarioScrollSpeed"*/;
  v41->SAVE_KEY_SCENARIO_SCROLL_SPEED = (struct System_String_o *)StringLiteral_10132/*"OptionScenarioScrollSpeed"*/;
  sub_B2C2F8(&v41->SAVE_KEY_SCENARIO_SCROLL_SPEED, v42);
  v43 = OptionManager_TypeInfo->static_fields;
  v44 = StringLiteral_10128/*"OptionNotiffication"*/;
  v43->SAVE_KEY_NOTIFFICATION = (struct System_String_o *)StringLiteral_10128/*"OptionNotiffication"*/;
  sub_B2C2F8(&v43->SAVE_KEY_NOTIFFICATION, v44);
  v45 = OptionManager_TypeInfo->static_fields;
  v46 = StringLiteral_10125/*"OptionLocalNotiffication"*/;
  v45->SAVE_KEY_LOCAL_NOTIFFICATION = (struct System_String_o *)StringLiteral_10125/*"OptionLocalNotiffication"*/;
  sub_B2C2F8(&v45->SAVE_KEY_LOCAL_NOTIFFICATION, v46);
  v47 = OptionManager_TypeInfo->static_fields;
  v48 = StringLiteral_10130/*"OptionRaidNotiffication"*/;
  v47->SAVE_KEY_RAID_NOTIFFICATION = (struct System_String_o *)StringLiteral_10130/*"OptionRaidNotiffication"*/;
  sub_B2C2F8(&v47->SAVE_KEY_RAID_NOTIFFICATION, v48);
  v49 = OptionManager_TypeInfo->static_fields;
  v50 = StringLiteral_10122/*"OptionBoostItemConfirm"*/;
  v49->SAVE_KEY_BOOST_ITEM_CONFIRM = (struct System_String_o *)StringLiteral_10122/*"OptionBoostItemConfirm"*/;
  sub_B2C2F8(&v49->SAVE_KEY_BOOST_ITEM_CONFIRM, v50);
  v51 = OptionManager_TypeInfo->static_fields;
  v52 = StringLiteral_10124/*"OptionFriendImageLimitCount"*/;
  v51->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT = (struct System_String_o *)StringLiteral_10124/*"OptionFriendImageLimitCount"*/;
  sub_B2C2F8(&v51->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT, v52);
  v53 = OptionManager_TypeInfo->static_fields;
  v54 = StringLiteral_10123/*"OptionFriendCostume"*/;
  v53->SAVE_KEY_FREND_COSTUME = (struct System_String_o *)StringLiteral_10123/*"OptionFriendCostume"*/;
  sub_B2C2F8(&v53->SAVE_KEY_FREND_COSTUME, v54);
  v55 = OptionManager_TypeInfo->static_fields;
  v56 = StringLiteral_10138/*"OptionSvtRand"*/;
  v55->SAVE_KEY_SVT_RAND = (struct System_String_o *)StringLiteral_10138/*"OptionSvtRand"*/;
  sub_B2C2F8(&v55->SAVE_KEY_SVT_RAND, v56);
  v57 = OptionManager_TypeInfo->static_fields;
  v58 = StringLiteral_10126/*"OptionMessageDisp"*/;
  v57->SAVE_KEY_MESSAGE_DISP = (struct System_String_o *)StringLiteral_10126/*"OptionMessageDisp"*/;
  sub_B2C2F8(&v57->SAVE_KEY_MESSAGE_DISP, v58);
  v59 = OptionManager_TypeInfo->static_fields;
  v60 = StringLiteral_10141/*"OptionVolumeMute"*/;
  v59->SAVE_KEY_VOLUME_MUTE = (struct System_String_o *)StringLiteral_10141/*"OptionVolumeMute"*/;
  sub_B2C2F8(&v59->SAVE_KEY_VOLUME_MUTE, v60);
  v61 = OptionManager_TypeInfo->static_fields;
  v62 = StringLiteral_10137/*"OptionSelectAdvantageClassAuto"*/;
  v61->SAVE_KEY_ADVANTAGE_CLASS_AUTO = (struct System_String_o *)StringLiteral_10137/*"OptionSelectAdvantageClassAuto"*/;
  sub_B2C2F8(&v61->SAVE_KEY_ADVANTAGE_CLASS_AUTO, v62);
  v63 = OptionManager_TypeInfo->static_fields;
  v64 = StringLiteral_10127/*"OptionNotPlayOpeningMovie"*/;
  v63->SAVE_KEY_NOT_PLAY_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10127/*"OptionNotPlayOpeningMovie"*/;
  sub_B2C2F8(&v63->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, v64);
  v65 = OptionManager_TypeInfo->static_fields;
  v66 = StringLiteral_10139/*"OptionTouchSkipOpeningMovie"*/;
  v65->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10139/*"OptionTouchSkipOpeningMovie"*/;
  sub_B2C2F8(&v65->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, v66);
  v67 = OptionManager_TypeInfo->static_fields;
  v68 = StringLiteral_10119/*"OptionAutoSelectParty"*/;
  v67->SAVE_KEY_AUTO_SELECT_PARTY = (struct System_String_o *)StringLiteral_10119/*"OptionAutoSelectParty"*/;
  sub_B2C2F8(&v67->SAVE_KEY_AUTO_SELECT_PARTY, v68);
  v69 = OptionManager_TypeInfo->static_fields;
  v70 = StringLiteral_10131/*"OptionResolutionType"*/;
  v69->SAVE_KEY_RESOLUTION_TYPE = (struct System_String_o *)StringLiteral_10131/*"OptionResolutionType"*/;
  sub_B2C2F8(&v69->SAVE_KEY_RESOLUTION_TYPE, v70);
  v71 = OptionManager_TypeInfo->static_fields;
  v72 = StringLiteral_10129/*"OptionPreBattleFormation"*/;
  v71->SAVE_KEY_PREBATTLEFORMATION = (struct System_String_o *)StringLiteral_10129/*"OptionPreBattleFormation"*/;
  sub_B2C2F8(&v71->SAVE_KEY_PREBATTLEFORMATION, v72);
  v73 = OptionManager_TypeInfo->static_fields;
  v74 = StringLiteral_10120/*"OptionBattle20220729"*/;
  v73->SAVE_KEY_BATTLE_FPS_SETTING = (struct System_String_o *)StringLiteral_10120/*"OptionBattle20220729"*/;
  sub_B2C2F8(&v73->SAVE_KEY_BATTLE_FPS_SETTING, v74);
}


void __fastcall OptionManager___ctor(OptionManager_o *this, const MethodInfo *method)
{
  if ( (byte_418518E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_OptionManager___ctor__, method);
    byte_418518E = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_OptionManager___ctor__);
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

  if ( (byte_4185151 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_4185151 = 1;
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

  if ( (byte_4185150 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185150 = 1;
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

  if ( (byte_418514A & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418514A = 1;
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

  if ( (byte_4185149 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185149 = 1;
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

  if ( (byte_418514B & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418514B = 1;
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

  if ( (byte_418517C & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418517C = 1;
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

  if ( (byte_4185186 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185186 = 1;
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

  if ( (byte_4185154 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185154 = 1;
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

  if ( (byte_418516D & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418516D = 1;
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

  if ( (byte_4185177 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185177 = 1;
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

  if ( (byte_418517A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    byte_418517A = 1;
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

  if ( (byte_4185178 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    byte_4185178 = 1;
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

  if ( (byte_4185179 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    byte_4185179 = 1;
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

  if ( (byte_4185160 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    byte_4185160 = 1;
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

  if ( (byte_4185176 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185176 = 1;
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
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B2C434(0LL, v2);
  return (BYTE1(SelfUserGame->fields.flag) >> 1) & 1;
}


bool __fastcall OptionManager__GetFriendImageLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v3; // x1
  OptionManager_c *v4; // x0

  if ( (byte_418516F & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418516F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B2C434(0LL, v3);
  if ( (SelfUserGame->fields.flag & 0x100000) != 0 )
    return 1;
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return v4->static_fields->isFriendImageLimitCount;
}


bool __fastcall OptionManager__GetLocalNotiffication(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4185169 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185169 = 1;
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

  if ( (byte_4185174 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185174 = 1;
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

  if ( (byte_4185181 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185181 = 1;
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

  if ( (byte_4185167 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185167 = 1;
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

  if ( (byte_418518C & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418518C = 1;
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

  if ( (byte_418516B & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418516B = 1;
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
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B2C434(0LL, v2);
  return (BYTE2(SelfUserGame->fields.flag) >> 2) & 1;
}


bool __fastcall OptionManager__GetRandomLimitCountOwn(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B2C434(0LL, v2);
  return (BYTE2(SelfUserGame->fields.flag) >> 1) & 1;
}


int32_t __fastcall OptionManager__GetResolutionType(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4185188 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185188 = 1;
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

  if ( (byte_4185165 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_4185165 = 1;
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

  if ( (byte_418515E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_418515E = 1;
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

  if ( (byte_4185163 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_4185163 = 1;
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

  if ( (byte_4185161 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_4185161 = 1;
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

  if ( (byte_4185157 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185157 = 1;
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
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B2C434(0LL, v2);
  return (BYTE2(SelfUserGame->fields.flag) >> 3) & 1;
}


bool __fastcall OptionManager__GetSvtRand(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4185172 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185172 = 1;
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
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B2C434(0LL, v2);
  return (BYTE1(SelfUserGame->fields.flag) >> 2) & 1;
}


bool __fastcall OptionManager__GetTouchSkipOpeningMovie(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_4185183 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185183 = 1;
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

  if ( (byte_418515A & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418515A = 1;
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

  if ( (byte_418515C & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418515C = 1;
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

  if ( (byte_418514C & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418514C = 1;
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

  if ( (byte_418518A & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418518A = 1;
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

  if ( (byte_418514D & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_418514D = 1;
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

  if ( (byte_418514F & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    sub_B2C35C(&ResolutionManager_TypeInfo, v2);
    byte_418514F = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  OptionManager___c__DisplayClass43_0_o *v9; // x21
  OptionManager_c *SpoilerSetting; // x0
  __int64 v11; // x1
  System_Action_o **p_callback; // x19
  OptionManager_c *v13; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *v15; // x19
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  UserStatusFlagSetRequest_o *v17; // x19
  _BOOL8 FriendImageLimitCount; // x0
  int v19; // w20
  bool FriendCostume; // w8
  OptionManager_c *v21; // x0
  int v22; // w10
  _BOOL8 TDPlaySpeed; // x0
  int v24; // w20
  _BOOL8 RandomLimitCountOwn; // x0
  int v26; // w20
  _BOOL8 RandomLimitCountFriend; // x0
  int v28; // w20
  unsigned int v29; // w21
  const MethodInfo *v30; // x0
  System_Int32_array *v31; // x20
  unsigned int v32; // w23
  OptionManager_c *v33; // x0
  char *v34; // x8
  OptionManager_c *v35; // x0
  char *v36; // x8
  OptionManager_c *v37; // x0
  char *v38; // x8
  OptionManager_c *v39; // x0
  char *v40; // x8
  OptionManager_c *v41; // x0
  int32_t KIND_COUNT_SAVE_SERVER; // w8
  __int64 v43; // x21
  unsigned int v44; // w23
  OptionManager_c *v45; // x0
  __int64 v46; // x8
  OptionManager_c *v47; // x0
  __int64 v48; // x8
  OptionManager_c *v49; // x0
  __int64 v50; // x8
  OptionManager_c *v51; // x0
  __int64 v52; // x8
  OptionManager_c *v53; // x0
  System_Action_o *v54; // x0
  __int64 v55; // x0

  if ( (byte_4185152 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_OptionManager___c__DisplayClass43_0__SaveData_b__0__, v7);
    sub_B2C35C(&OptionManager___c__DisplayClass43_0_TypeInfo, v8);
    byte_4185152 = 1;
  }
  v9 = (OptionManager___c__DisplayClass43_0_o *)sub_B2C42C(OptionManager___c__DisplayClass43_0_TypeInfo);
  OptionManager___c__DisplayClass43_0___ctor(v9, 0LL);
  if ( !v9 )
LABEL_143:
    sub_B2C434(SpoilerSetting, v11);
  v9->fields.callback = callback;
  p_callback = &v9->fields.callback;
  sub_B2C2F8(&v9->fields, callback);
  v13 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v13 = OptionManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( static_fields->isServerModify )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)v9,
      Method_OptionManager___c__DisplayClass43_0__SaveData_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v15,
                                          (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    v17 = (UserStatusFlagSetRequest_o *)Request_WarBoardWallAttackRequest;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendImageLimitCount = OptionManager__GetFriendImageLimitCount((const MethodInfo *)Request_WarBoardWallAttackRequest);
    v19 = FriendImageLimitCount;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendCostume = OptionManager__GetFriendCostume((const MethodInfo *)FriendImageLimitCount);
    v21 = OptionManager_TypeInfo;
    if ( v19 )
      v22 = 2;
    else
      v22 = 1;
    if ( FriendCostume )
      v19 = v22;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    TDPlaySpeed = OptionManager__GetTDPlaySpeed((const MethodInfo *)v21);
    v24 = v19 + TDPlaySpeed;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn((const MethodInfo *)TDPlaySpeed);
    v26 = v24 + RandomLimitCountOwn;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend((const MethodInfo *)RandomLimitCountOwn);
    v28 = v26 + RandomLimitCountFriend;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v29 = v28 + OptionManager__GetSpoilerSetting((const MethodInfo *)RandomLimitCountFriend);
    if ( v29 )
    {
      v30 = (const MethodInfo *)sub_B2C374(int___TypeInfo, v29);
      v31 = (System_Int32_array *)v30;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount(v30);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_143;
        if ( !v31->max_length )
          goto LABEL_144;
        v32 = 1;
        v31->m_Items[1] = 20;
      }
      else
      {
        v32 = 0;
      }
      v33 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v33);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_143;
        if ( v32 >= v31->max_length )
          goto LABEL_144;
        v34 = (char *)v31 + 4 * v32++;
        *((_DWORD *)v34 + 8) = 9;
      }
      v35 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v35);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_143;
        if ( v32 >= v31->max_length )
          goto LABEL_144;
        v36 = (char *)v31 + 4 * v32++;
        *((_DWORD *)v36 + 8) = 10;
      }
      v37 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v37);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_143;
        if ( v32 >= v31->max_length )
          goto LABEL_144;
        v38 = (char *)v31 + 4 * v32++;
        *((_DWORD *)v38 + 8) = 17;
      }
      v39 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v39);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_143;
        if ( v32 >= v31->max_length )
          goto LABEL_144;
        v40 = (char *)v31 + 4 * v32++;
        *((_DWORD *)v40 + 8) = 18;
      }
      v41 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetSpoilerSetting((const MethodInfo *)v41);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_143;
        if ( v32 >= v31->max_length )
          goto LABEL_144;
        v31->m_Items[v32 + 1] = 19;
      }
    }
    else
    {
      v31 = 0LL;
    }
    SpoilerSetting = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      SpoilerSetting = OptionManager_TypeInfo;
    }
    KIND_COUNT_SAVE_SERVER = SpoilerSetting->static_fields->KIND_COUNT_SAVE_SERVER;
    if ( v29 == KIND_COUNT_SAVE_SERVER )
    {
      v43 = 0LL;
      if ( !v17 )
        goto LABEL_143;
      goto LABEL_138;
    }
    if ( (BYTE3(SpoilerSetting->vtable._0_Equals.methodPtr) & 4) != 0 && !SpoilerSetting->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpoilerSetting);
      KIND_COUNT_SAVE_SERVER = OptionManager_TypeInfo->static_fields->KIND_COUNT_SAVE_SERVER;
    }
    v43 = sub_B2C374(int___TypeInfo, KIND_COUNT_SAVE_SERVER - v29);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount((const MethodInfo *)v43);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      v44 = 0;
    }
    else
    {
      if ( !v43 )
        goto LABEL_143;
      if ( !*(_DWORD *)(v43 + 24) )
        goto LABEL_144;
      v44 = 1;
      *(_DWORD *)(v43 + 32) = 20;
    }
    v45 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v45);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v43 )
        goto LABEL_143;
      if ( v44 >= *(_DWORD *)(v43 + 24) )
        goto LABEL_144;
      v46 = v43 + 4LL * v44++;
      *(_DWORD *)(v46 + 32) = 9;
    }
    v47 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v47);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v43 )
        goto LABEL_143;
      if ( v44 >= *(_DWORD *)(v43 + 24) )
        goto LABEL_144;
      v48 = v43 + 4LL * v44++;
      *(_DWORD *)(v48 + 32) = 10;
    }
    v49 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v49);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v43 )
        goto LABEL_143;
      if ( v44 >= *(_DWORD *)(v43 + 24) )
        goto LABEL_144;
      v50 = v43 + 4LL * v44++;
      *(_DWORD *)(v50 + 32) = 17;
    }
    v51 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v51);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v43 )
        goto LABEL_143;
      if ( v44 >= *(_DWORD *)(v43 + 24) )
        goto LABEL_144;
      v52 = v43 + 4LL * v44++;
      *(_DWORD *)(v52 + 32) = 18;
    }
    v53 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetSpoilerSetting((const MethodInfo *)v53);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
LABEL_137:
      if ( !v17 )
        goto LABEL_143;
LABEL_138:
      UserStatusFlagSetRequest__beginRequest(v17, v31, (System_Int32_array *)v43, 0LL);
LABEL_139:
      LOBYTE(v54) = 1;
      return (char)v54;
    }
    if ( !v43 )
      goto LABEL_143;
    if ( v44 < *(_DWORD *)(v43 + 24) )
    {
      *(_DWORD *)(v43 + 4LL * v44 + 32) = 19;
      goto LABEL_137;
    }
LABEL_144:
    v55 = sub_B2C460(SpoilerSetting);
    sub_B2C400(v55, 0LL);
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = OptionManager_TypeInfo;
    static_fields = OptionManager_TypeInfo->static_fields;
  }
  if ( static_fields->isModify )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = OptionManager_TypeInfo->static_fields;
    }
    static_fields->isModify = 0;
    UnityEngine_PlayerPrefs__Save(0LL);
    if ( *p_callback )
      System_Action__Invoke(*p_callback, 0LL);
    goto LABEL_139;
  }
  v54 = *p_callback;
  if ( *p_callback )
  {
    System_Action__Invoke(v54, 0LL);
    LOBYTE(v54) = 0;
  }
  return (char)v54;
}


void __fastcall OptionManager__SetAdvantageClassAuto(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  v2 = flag;
  if ( (byte_418517D & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418517D = 1;
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
  if ( (byte_4185187 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4185187 = 1;
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
  if ( (byte_418518B & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418518B = 1;
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

  if ( (byte_4185155 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_4185155 = 1;
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
  if ( (byte_418516E & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418516E = 1;
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
  if ( (byte_4185171 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4185171 = 1;
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
      sub_B2C434(0LL, v5);
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
  if ( (byte_4185170 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4185170 = 1;
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
      sub_B2C434(0LL, v6);
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
  if ( (byte_418516A & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418516A = 1;
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
  if ( (byte_4185175 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4185175 = 1;
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
  if ( (byte_4185182 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4185182 = 1;
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
  __int64 v12; // x1

  v4 = f;
  if ( (byte_4185168 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, forceSend);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v6);
    byte_4185168 = 1;
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
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v11 = (AvalonNotificationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
      if ( !v11 )
        sub_B2C434(0LL, v12);
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
  if ( (byte_418518D & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418518D = 1;
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
  if ( (byte_418516C & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418516C = 1;
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
  if ( (byte_418517F & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418517F = 1;
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
      sub_B2C434(0LL, v5);
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
  if ( (byte_418517E & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418517E = 1;
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
      sub_B2C434(0LL, v5);
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
  __int64 v3; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4185189 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&ResolutionManager_TypeInfo, v3);
    byte_4185189 = 1;
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

  if ( (byte_4185166 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_4185166 = 1;
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

  if ( (byte_418515F & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_418515F = 1;
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

  if ( (byte_4185164 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_4185164 = 1;
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

  if ( (byte_4185162 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_4185162 = 1;
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

  if ( (byte_4185158 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_4185158 = 1;
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
  __int64 v5; // x1
  int32_t v6; // w8
  int v7; // w9
  unsigned int v8; // w8
  OptionManager_c *v9; // x0

  v2 = flag;
  if ( (byte_4185185 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4185185 = 1;
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
      sub_B2C434(0LL, v5);
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
  if ( (byte_4185173 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4185173 = 1;
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
  if ( (byte_418517B & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418517B = 1;
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
      sub_B2C434(0LL, v5);
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
  if ( (byte_4185184 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_4185184 = 1;
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

  if ( (byte_418515B & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v2);
    byte_418515B = 1;
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
  if ( (byte_418515D & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418515D = 1;
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

  if ( (byte_418514E & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    sub_B2C35C(&SoundManager_TypeInfo, v2);
    byte_418514E = 1;
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

  if ( (byte_4185153 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, v2);
    byte_4185153 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetBgmMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestSeVolume(float v, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4185156 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, v2);
    byte_4185156 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetSeMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestVoiceVolume(float v, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4185159 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, v2);
    byte_4185159 = 1;
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

  if ( (byte_4185180 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, v1);
    byte_4185180 = 1;
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

  if ( (byte_4185279 & 1) == 0 )
  {
    sub_B2C35C(&FollowerListRequest_TypeInfo, result);
    sub_B2C35C(&OptionManager_TypeInfo, v4);
    byte_4185279 = 1;
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