void __fastcall OptionManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  OptionManager_c *v76; // x8
  struct OptionManager_StaticFields *static_fields; // x0
  struct OptionManager_StaticFields *v78; // x0
  struct OptionManager_StaticFields *v79; // x0
  struct OptionManager_StaticFields *v80; // x0
  struct OptionManager_StaticFields *v81; // x0
  struct OptionManager_StaticFields *v82; // x0
  struct OptionManager_StaticFields *v83; // x0
  struct OptionManager_StaticFields *v84; // x0
  struct OptionManager_StaticFields *v85; // x0
  struct OptionManager_StaticFields *v86; // x0
  struct OptionManager_StaticFields *v87; // x0
  struct OptionManager_StaticFields *v88; // x0
  struct OptionManager_StaticFields *v89; // x0
  struct OptionManager_StaticFields *v90; // x0
  struct OptionManager_StaticFields *v91; // x0
  struct OptionManager_StaticFields *v92; // x0
  struct OptionManager_StaticFields *v93; // x0
  struct OptionManager_StaticFields *v94; // x0
  struct OptionManager_StaticFields *v95; // x0
  struct OptionManager_StaticFields *v96; // x0
  struct OptionManager_StaticFields *v97; // x0
  struct OptionManager_StaticFields *v98; // x0
  struct OptionManager_StaticFields *v99; // x0
  struct OptionManager_StaticFields *v100; // x0

  if ( (byte_42E6316 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_10232/*"OptionMessageDisp"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_10245/*"OptionTouchSkipOpeningMovie"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_10234/*"OptionNotiffication"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_10246/*"OptionVoiceVolume"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_10229/*"OptionFriendCostume"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10231/*"OptionLocalNotiffication"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10228/*"OptionBoostItemConfirm"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_10239/*"OptionScenarioSpeed"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_10236/*"OptionRaidNotiffication"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_10242/*"OptionSeVolume"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_10240/*"OptionScenarioText"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_16470/*"adjustVolume"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_10233/*"OptionNotPlayOpeningMovie"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_10227/*"OptionBgmVolume"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_10226/*"OptionBattle20220729"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_10230/*"OptionFriendImageLimitCount"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_10247/*"OptionVolumeMute"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_10241/*"OptionScenarioTextSpeed"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_10243/*"OptionSelectAdvantageClassAuto"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_10237/*"OptionResolutionType"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_10235/*"OptionPreBattleFormation"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_10238/*"OptionScenarioScrollSpeed"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_10225/*"OptionAutoSelectParty"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_10244/*"OptionSvtRand"*/, v73, v74, v75);
    byte_42E6316 = 1;
  }
  OptionManager_TypeInfo->static_fields->isModify = 0;
  OptionManager_TypeInfo->static_fields->isServerModify = 0;
  OptionManager_TypeInfo->static_fields->DEF_VOL = 0.7;
  v76 = OptionManager_TypeInfo;
  OptionManager_TypeInfo->static_fields->OLD_DEF_BGM_VOL = 4.0;
  v76->static_fields->OLD_DEF_SE_VOL = 9.0;
  v76->static_fields->OLD_DEF_VOICE_VOL = 10.0;
  v76->static_fields->DEF_MUTE = 0;
  v76->static_fields->KIND_COUNT_SAVE_SERVER = 6;
  static_fields = v76->static_fields;
  static_fields->SAVE_KEY_BGM_VOLUME = (struct System_String_o *)StringLiteral_10227/*"OptionBgmVolume"*/;
  sub_B5D560(&static_fields->SAVE_KEY_BGM_VOLUME);
  v78 = OptionManager_TypeInfo->static_fields;
  v78->SAVE_KEY_SE_VOLUME = (struct System_String_o *)StringLiteral_10242/*"OptionSeVolume"*/;
  sub_B5D560(&v78->SAVE_KEY_SE_VOLUME);
  v79 = OptionManager_TypeInfo->static_fields;
  v79->SAVE_KEY_VOICE_VOLUME = (struct System_String_o *)StringLiteral_10246/*"OptionVoiceVolume"*/;
  sub_B5D560(&v79->SAVE_KEY_VOICE_VOLUME);
  v80 = OptionManager_TypeInfo->static_fields;
  v80->SAVE_KEY_ADJUST_VOLUME = (struct System_String_o *)StringLiteral_16470/*"adjustVolume"*/;
  sub_B5D560(&v80->SAVE_KEY_ADJUST_VOLUME);
  v81 = OptionManager_TypeInfo->static_fields;
  v81->SAVE_KEY_SCENARIO_SPEED = (struct System_String_o *)StringLiteral_10239/*"OptionScenarioSpeed"*/;
  sub_B5D560(&v81->SAVE_KEY_SCENARIO_SPEED);
  v82 = OptionManager_TypeInfo->static_fields;
  v82->SAVE_KEY_SCENARIO_TEXT_WAIT = (struct System_String_o *)StringLiteral_10240/*"OptionScenarioText"*/;
  sub_B5D560(&v82->SAVE_KEY_SCENARIO_TEXT_WAIT);
  v83 = OptionManager_TypeInfo->static_fields;
  v83->SAVE_KEY_SCENARIO_TEXT_SPEED = (struct System_String_o *)StringLiteral_10241/*"OptionScenarioTextSpeed"*/;
  sub_B5D560(&v83->SAVE_KEY_SCENARIO_TEXT_SPEED);
  v84 = OptionManager_TypeInfo->static_fields;
  v84->SAVE_KEY_SCENARIO_SCROLL_SPEED = (struct System_String_o *)StringLiteral_10238/*"OptionScenarioScrollSpeed"*/;
  sub_B5D560(&v84->SAVE_KEY_SCENARIO_SCROLL_SPEED);
  v85 = OptionManager_TypeInfo->static_fields;
  v85->SAVE_KEY_NOTIFFICATION = (struct System_String_o *)StringLiteral_10234/*"OptionNotiffication"*/;
  sub_B5D560(&v85->SAVE_KEY_NOTIFFICATION);
  v86 = OptionManager_TypeInfo->static_fields;
  v86->SAVE_KEY_LOCAL_NOTIFFICATION = (struct System_String_o *)StringLiteral_10231/*"OptionLocalNotiffication"*/;
  sub_B5D560(&v86->SAVE_KEY_LOCAL_NOTIFFICATION);
  v87 = OptionManager_TypeInfo->static_fields;
  v87->SAVE_KEY_RAID_NOTIFFICATION = (struct System_String_o *)StringLiteral_10236/*"OptionRaidNotiffication"*/;
  sub_B5D560(&v87->SAVE_KEY_RAID_NOTIFFICATION);
  v88 = OptionManager_TypeInfo->static_fields;
  v88->SAVE_KEY_BOOST_ITEM_CONFIRM = (struct System_String_o *)StringLiteral_10228/*"OptionBoostItemConfirm"*/;
  sub_B5D560(&v88->SAVE_KEY_BOOST_ITEM_CONFIRM);
  v89 = OptionManager_TypeInfo->static_fields;
  v89->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT = (struct System_String_o *)StringLiteral_10230/*"OptionFriendImageLimitCount"*/;
  sub_B5D560(&v89->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT);
  v90 = OptionManager_TypeInfo->static_fields;
  v90->SAVE_KEY_FREND_COSTUME = (struct System_String_o *)StringLiteral_10229/*"OptionFriendCostume"*/;
  sub_B5D560(&v90->SAVE_KEY_FREND_COSTUME);
  v91 = OptionManager_TypeInfo->static_fields;
  v91->SAVE_KEY_SVT_RAND = (struct System_String_o *)StringLiteral_10244/*"OptionSvtRand"*/;
  sub_B5D560(&v91->SAVE_KEY_SVT_RAND);
  v92 = OptionManager_TypeInfo->static_fields;
  v92->SAVE_KEY_MESSAGE_DISP = (struct System_String_o *)StringLiteral_10232/*"OptionMessageDisp"*/;
  sub_B5D560(&v92->SAVE_KEY_MESSAGE_DISP);
  v93 = OptionManager_TypeInfo->static_fields;
  v93->SAVE_KEY_VOLUME_MUTE = (struct System_String_o *)StringLiteral_10247/*"OptionVolumeMute"*/;
  sub_B5D560(&v93->SAVE_KEY_VOLUME_MUTE);
  v94 = OptionManager_TypeInfo->static_fields;
  v94->SAVE_KEY_ADVANTAGE_CLASS_AUTO = (struct System_String_o *)StringLiteral_10243/*"OptionSelectAdvantageClassAuto"*/;
  sub_B5D560(&v94->SAVE_KEY_ADVANTAGE_CLASS_AUTO);
  v95 = OptionManager_TypeInfo->static_fields;
  v95->SAVE_KEY_NOT_PLAY_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10233/*"OptionNotPlayOpeningMovie"*/;
  sub_B5D560(&v95->SAVE_KEY_NOT_PLAY_OPENING_MOVIE);
  v96 = OptionManager_TypeInfo->static_fields;
  v96->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10245/*"OptionTouchSkipOpeningMovie"*/;
  sub_B5D560(&v96->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE);
  v97 = OptionManager_TypeInfo->static_fields;
  v97->SAVE_KEY_AUTO_SELECT_PARTY = (struct System_String_o *)StringLiteral_10225/*"OptionAutoSelectParty"*/;
  sub_B5D560(&v97->SAVE_KEY_AUTO_SELECT_PARTY);
  v98 = OptionManager_TypeInfo->static_fields;
  v98->SAVE_KEY_RESOLUTION_TYPE = (struct System_String_o *)StringLiteral_10237/*"OptionResolutionType"*/;
  sub_B5D560(&v98->SAVE_KEY_RESOLUTION_TYPE);
  v99 = OptionManager_TypeInfo->static_fields;
  v99->SAVE_KEY_PREBATTLEFORMATION = (struct System_String_o *)StringLiteral_10235/*"OptionPreBattleFormation"*/;
  sub_B5D560(&v99->SAVE_KEY_PREBATTLEFORMATION);
  v100 = OptionManager_TypeInfo->static_fields;
  v100->SAVE_KEY_BATTLE_FPS_SETTING = (struct System_String_o *)StringLiteral_10226/*"OptionBattle20220729"*/;
  sub_B5D560(&v100->SAVE_KEY_BATTLE_FPS_SETTING);
}


void __fastcall OptionManager___ctor(OptionManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6315 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_OptionManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E6315 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_OptionManager___ctor__);
}


void __fastcall OptionManager__AdjustScenarioSpeedSetting(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  OptionManager_c *v7; // x0
  OptionManager_c *v8; // x0
  bool HasKey; // w0
  OptionManager_c *v10; // x8
  BalanceConfig_c *v11; // x0
  System_String_o *SAVE_KEY_SCENARIO_TEXT_WAIT; // x19
  float ScenarioTextWaitDefaultCn; // s0
  BalanceConfig_c *v14; // x0

  if ( (byte_42E62D8 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v4, v5, v6);
    byte_42E62D8 = 1;
  }
  v7 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v7 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v7->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT, 0LL) )
  {
    v8 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v8 = OptionManager_TypeInfo;
    }
    HasKey = UnityEngine_PlayerPrefs__HasKey(v8->static_fields->SAVE_KEY_ADJUST_VOLUME, 0LL);
    v10 = OptionManager_TypeInfo;
    if ( HasKey )
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v10 = OptionManager_TypeInfo;
      }
      v11 = BalanceConfig_TypeInfo;
      SAVE_KEY_SCENARIO_TEXT_WAIT = v10->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v11 = BalanceConfig_TypeInfo;
      }
      ScenarioTextWaitDefaultCn = v11->static_fields->ScenarioTextWaitDefaultCn;
    }
    else
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v10 = OptionManager_TypeInfo;
      }
      v14 = BalanceConfig_TypeInfo;
      SAVE_KEY_SCENARIO_TEXT_WAIT = v10->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      ScenarioTextWaitDefaultCn = v14->static_fields->ScenarioTextWaitDefaultSt;
    }
    UnityEngine_PlayerPrefs__SetFloat(SAVE_KEY_SCENARIO_TEXT_WAIT, ScenarioTextWaitDefaultCn, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall OptionManager__AdjustVolume(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_42E62D7 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62D7 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_ADJUST_VOLUME, 0, 0LL) )
  {
    v5 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY_ADJUST_VOLUME, 1, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


bool __fastcall OptionManager__CheckOldLocal(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0
  const MethodInfo *v6; // x1
  bool v7; // w19
  OptionManager_c *v8; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  bool result; // w0

  if ( (byte_42E62D1 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62D1 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v4->static_fields->SAVE_KEY_FREND_COSTUME, 0LL) )
    goto LABEL_15;
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v5 = OptionManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY_FREND_COSTUME, 0, 0LL) )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v7 = 1;
    OptionManager__SetFriendCostume(1, v6);
  }
  else
  {
LABEL_15:
    v7 = 0;
  }
  v8 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = OptionManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  result = v7;
  static_fields->isModify = v7;
  OptionManager_TypeInfo->static_fields->isServerModify = v7;
  return result;
}


void __fastcall OptionManager__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_42E62D0 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62D0 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVE_KEY_BGM_VOLUME, 0LL);
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
  OptionManager__Initialize(v5);
}


void __fastcall OptionManager__DeleteOldLocal(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62D2 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62D2 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVE_KEY_FREND_COSTUME, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall OptionManager__GetAdvantageClassAuto(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E6303 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E6303 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_ADVANTAGE_CLASS_AUTO, 1, 0LL) == 1;
}


bool __fastcall OptionManager__GetAutoSelectParty(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E630D & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E630D = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_AUTO_SELECT_PARTY, 1, 0LL) == 1;
}


float __fastcall OptionManager__GetBgmVolume(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62DB & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62DB = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v4->static_fields->SAVE_KEY_BGM_VOLUME, v4->static_fields->DEF_VOL, 0LL);
}


bool __fastcall OptionManager__GetBoostItemUseConfirm(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62F4 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62F4 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_BOOST_ITEM_CONFIRM, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetDefaultMute(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62FE & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62FE = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return v4->static_fields->DEF_MUTE;
}


float __fastcall OptionManager__GetDefaultScenarioScrollSpeed(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_42E6301 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    byte_42E6301 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return v4->static_fields->ScenarioScrollSpeedDefault;
}


float __fastcall OptionManager__GetDefaultScenarioSpeed(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_42E62FF & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    byte_42E62FF = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return v4->static_fields->ScenarioSpeedDefault;
}


float __fastcall OptionManager__GetDefaultScenarioTextSpeed(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_42E6300 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    byte_42E6300 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return v4->static_fields->ScenarioTextSpeedDefault;
}


float __fastcall OptionManager__GetDefaultScenarioWaitTimeSecond(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_42E62E7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    byte_42E62E7 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return v4->static_fields->ScenarioTextWaitDefaultSt;
}


float __fastcall OptionManager__GetDefaultVolume(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62FD & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62FD = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return v4->static_fields->DEF_VOL;
}


bool __fastcall OptionManager__GetFriendCostume(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v2);
  return (BYTE1(SelfUserGame->fields.flag) >> 1) & 1;
}


bool __fastcall OptionManager__GetFriendImageLimitCount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  OptionManager_c *v6; // x0

  if ( (byte_42E62F6 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62F6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v5);
  if ( (SelfUserGame->fields.flag & 0x100000) != 0 )
    return 1;
  v6 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v6 = OptionManager_TypeInfo;
  }
  return v6->static_fields->isFriendImageLimitCount;
}


bool __fastcall OptionManager__GetLocalNotiffication(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62F0 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62F0 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_LOCAL_NOTIFFICATION, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetMessageDisp(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62FB & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62FB = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_MESSAGE_DISP, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetNotPlayOpeningMovie(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E6308 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E6308 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, 1, 0LL) == 1;
}


bool __fastcall OptionManager__GetNotiffication(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62EE & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62EE = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_NOTIFFICATION, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetPreBattleFormationSetting(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E6313 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E6313 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_PREBATTLEFORMATION, 1, 0LL) == 1;
}


bool __fastcall OptionManager__GetRaidNotiffication(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62F2 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62F2 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_RAID_NOTIFFICATION, 1, 0LL) != 0;
}


bool __fastcall OptionManager__GetRandomLimitCountFriend(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v2);
  return (BYTE2(SelfUserGame->fields.flag) >> 2) & 1;
}


bool __fastcall OptionManager__GetRandomLimitCountOwn(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v2);
  return (BYTE2(SelfUserGame->fields.flag) >> 1) & 1;
}


int32_t __fastcall OptionManager__GetResolutionType(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E630F & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E630F = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_RESOLUTION_TYPE, 0, 0LL);
}


float __fastcall OptionManager__GetScenarioScrollSpeed(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  OptionManager_c *v7; // x0
  BalanceConfig_c *v8; // x8
  System_String_o *SAVE_KEY_SCENARIO_SCROLL_SPEED; // x19

  if ( (byte_42E62EC & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v4, v5, v6);
    byte_42E62EC = 1;
  }
  v7 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v7 = OptionManager_TypeInfo;
  }
  v8 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_SCROLL_SPEED = v7->static_fields->SAVE_KEY_SCENARIO_SCROLL_SPEED;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(
           SAVE_KEY_SCENARIO_SCROLL_SPEED,
           v8->static_fields->ScenarioScrollSpeedDefault,
           0LL);
}


float __fastcall OptionManager__GetScenarioSpeed(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  OptionManager_c *v7; // x0
  BalanceConfig_c *v8; // x8
  System_String_o *SAVE_KEY_SCENARIO_SPEED; // x19
  float Float; // s0
  BalanceConfig_c *v11; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedLow; // s1
  float v14; // s8

  if ( (byte_42E62E5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v4, v5, v6);
    byte_42E62E5 = 1;
  }
  v7 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v7 = OptionManager_TypeInfo;
  }
  v8 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_SPEED = v7->static_fields->SAVE_KEY_SCENARIO_SPEED;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  Float = UnityEngine_PlayerPrefs__GetFloat(SAVE_KEY_SCENARIO_SPEED, v8->static_fields->ScenarioSpeedDefault, 0LL);
  v11 = BalanceConfig_TypeInfo;
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
    v14 = Float;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    ScenarioSpeedLow = v14;
    if ( v14 >= static_fields->ScenarioSpeedHigh )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        ScenarioSpeedLow = static_fields->ScenarioSpeedHigh;
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  OptionManager_c *v7; // x0
  BalanceConfig_c *v8; // x8
  System_String_o *SAVE_KEY_SCENARIO_TEXT_SPEED; // x19

  if ( (byte_42E62EA & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v4, v5, v6);
    byte_42E62EA = 1;
  }
  v7 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v7 = OptionManager_TypeInfo;
  }
  v8 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_TEXT_SPEED = v7->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(
           SAVE_KEY_SCENARIO_TEXT_SPEED,
           v8->static_fields->ScenarioTextSpeedDefault,
           0LL);
}


float __fastcall OptionManager__GetScenarioTextWaitTimeSecond(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  OptionManager_c *v7; // x0
  BalanceConfig_c *v8; // x8
  System_String_o *SAVE_KEY_SCENARIO_TEXT_WAIT; // x19
  float Float; // s0
  BalanceConfig_c *v11; // x0
  float ScenarioTextWaitLow; // s8

  if ( (byte_42E62E8 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v4, v5, v6);
    byte_42E62E8 = 1;
  }
  v7 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v7 = OptionManager_TypeInfo;
  }
  v8 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_TEXT_WAIT = v7->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  Float = UnityEngine_PlayerPrefs__GetFloat(
            SAVE_KEY_SCENARIO_TEXT_WAIT,
            v8->static_fields->ScenarioTextWaitDefaultSt,
            0LL);
  v11 = BalanceConfig_TypeInfo;
  if ( Float <= BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
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
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( ScenarioTextWaitLow >= v11->static_fields->ScenarioTextWaitHigh )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ScenarioTextWaitLow = v11->static_fields->ScenarioTextWaitHigh;
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        return BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh;
      }
    }
    else
    {
      return v11->static_fields->ScenarioTextWaitHigh;
    }
  }
  return ScenarioTextWaitLow;
}


float __fastcall OptionManager__GetSeVolume(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62DE & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62DE = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v4->static_fields->SAVE_KEY_SE_VOLUME, v4->static_fields->DEF_VOL, 0LL);
}


bool __fastcall OptionManager__GetSpoilerSetting(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v2);
  return (BYTE2(SelfUserGame->fields.flag) >> 3) & 1;
}


bool __fastcall OptionManager__GetSvtRand(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62F9 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62F9 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_SVT_RAND, 0, 0LL) != 0;
}


bool __fastcall OptionManager__GetTDPlaySpeed(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v2);
  return (BYTE1(SelfUserGame->fields.flag) >> 2) & 1;
}


bool __fastcall OptionManager__GetTouchSkipOpeningMovie(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E630A & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E630A = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, 0, 0LL) != 0;
}


float __fastcall OptionManager__GetVoiceVolume(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62E1 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62E1 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v4->static_fields->SAVE_KEY_VOICE_VOLUME, v4->static_fields->DEF_VOL, 0LL);
}


bool __fastcall OptionManager__GetVolumeMute(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E62E3 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62E3 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_VOLUME_MUTE, 0, 0LL) != 0;
}


void __fastcall OptionManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0
  int32_t Int; // w0
  OptionManager_c *v6; // x8

  if ( (byte_42E62D3 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62D3 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__Recover((const MethodInfo *)v4);
  Int = UnityEngine_PlayerPrefs__GetInt(OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT, 0, 0LL);
  v6 = OptionManager_TypeInfo;
  OptionManager_TypeInfo->static_fields->isFriendImageLimitCount = Int != 0;
  v6->static_fields->memoryMode = 0;
}


bool __fastcall OptionManager__IsBattleFpsHigh(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0

  if ( (byte_42E6311 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E6311 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_BATTLE_FPS_SETTING, 0, 0LL) > 0;
}


void __fastcall OptionManager__Recover(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_42E62D4 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E62D4 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SoundRecover((const MethodInfo *)v4);
  OptionManager__ResolutionRecover(v5);
}


void __fastcall OptionManager__ResolutionRecover(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  OptionManager_c *v7; // x0
  int32_t ResolutionType; // w19

  if ( (byte_42E62D6 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ResolutionManager_TypeInfo, v4, v5, v6);
    byte_42E62D6 = 1;
  }
  v7 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  ResolutionType = OptionManager__GetResolutionType((const MethodInfo *)v7);
  if ( (BYTE3(ResolutionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResolutionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  }
  ResolutionManager__SetResolutionType(ResolutionType, 0LL);
}


bool __fastcall OptionManager__SaveData(System_Action_o *callback, const MethodInfo *method)
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
  OptionManager___c__DisplayClass43_0_o *v23; // x21
  OptionManager_c *SpoilerSetting; // x0
  __int64 v25; // x1
  System_Action_o **p_callback; // x19
  OptionManager_c *v27; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *v29; // x19
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  UserStatusFlagSetRequest_o *v31; // x19
  _BOOL8 FriendImageLimitCount; // x0
  int v33; // w20
  bool FriendCostume; // w8
  OptionManager_c *v35; // x0
  int v36; // w10
  _BOOL8 TDPlaySpeed; // x0
  int v38; // w20
  _BOOL8 RandomLimitCountOwn; // x0
  int v40; // w20
  _BOOL8 RandomLimitCountFriend; // x0
  int v42; // w20
  unsigned int v43; // w21
  const MethodInfo *v44; // x0
  System_Int32_array *v45; // x20
  unsigned int v46; // w23
  OptionManager_c *v47; // x0
  char *v48; // x8
  OptionManager_c *v49; // x0
  char *v50; // x8
  OptionManager_c *v51; // x0
  char *v52; // x8
  OptionManager_c *v53; // x0
  char *v54; // x8
  OptionManager_c *v55; // x0
  int32_t KIND_COUNT_SAVE_SERVER; // w8
  __int64 v57; // x21
  unsigned int v58; // w23
  OptionManager_c *v59; // x0
  __int64 v60; // x8
  OptionManager_c *v61; // x0
  __int64 v62; // x8
  OptionManager_c *v63; // x0
  __int64 v64; // x8
  OptionManager_c *v65; // x0
  __int64 v66; // x8
  OptionManager_c *v67; // x0
  System_Action_o *v68; // x0
  __int64 v69; // x0

  if ( (byte_42E62D9 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&OptionManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_OptionManager___c__DisplayClass43_0__SaveData_b__0__, v17, v18, v19);
    sub_B5D5C4(&OptionManager___c__DisplayClass43_0_TypeInfo, v20, v21, v22);
    byte_42E62D9 = 1;
  }
  v23 = (OptionManager___c__DisplayClass43_0_o *)sub_B5D694(OptionManager___c__DisplayClass43_0_TypeInfo);
  OptionManager___c__DisplayClass43_0___ctor(v23, 0LL);
  if ( !v23 )
LABEL_143:
    sub_B5D69C(SpoilerSetting, v25);
  v23->fields.callback = callback;
  p_callback = &v23->fields.callback;
  sub_B5D560(&v23->fields);
  v27 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v27 = OptionManager_TypeInfo;
  }
  static_fields = v27->static_fields;
  if ( static_fields->isServerModify )
  {
    v29 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v29,
      (Il2CppObject *)v23,
      Method_OptionManager___c__DisplayClass43_0__SaveData_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v29,
                                          (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    v31 = (UserStatusFlagSetRequest_o *)Request_WarBoardWallAttackRequest;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendImageLimitCount = OptionManager__GetFriendImageLimitCount((const MethodInfo *)Request_WarBoardWallAttackRequest);
    v33 = FriendImageLimitCount;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendCostume = OptionManager__GetFriendCostume((const MethodInfo *)FriendImageLimitCount);
    v35 = OptionManager_TypeInfo;
    if ( v33 )
      v36 = 2;
    else
      v36 = 1;
    if ( FriendCostume )
      v33 = v36;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    TDPlaySpeed = OptionManager__GetTDPlaySpeed((const MethodInfo *)v35);
    v38 = v33 + TDPlaySpeed;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn((const MethodInfo *)TDPlaySpeed);
    v40 = v38 + RandomLimitCountOwn;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend((const MethodInfo *)RandomLimitCountOwn);
    v42 = v40 + RandomLimitCountFriend;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v43 = v42 + OptionManager__GetSpoilerSetting((const MethodInfo *)RandomLimitCountFriend);
    if ( v43 )
    {
      v44 = (const MethodInfo *)sub_B5D5DC(int___TypeInfo, v43);
      v45 = (System_Int32_array *)v44;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount(v44);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_143;
        if ( !v45->max_length )
          goto LABEL_144;
        v46 = 1;
        v45->m_Items[1] = 20;
      }
      else
      {
        v46 = 0;
      }
      v47 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v47);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_143;
        if ( v46 >= v45->max_length )
          goto LABEL_144;
        v48 = (char *)v45 + 4 * v46++;
        *((_DWORD *)v48 + 8) = 9;
      }
      v49 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v49);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_143;
        if ( v46 >= v45->max_length )
          goto LABEL_144;
        v50 = (char *)v45 + 4 * v46++;
        *((_DWORD *)v50 + 8) = 10;
      }
      v51 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v51);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_143;
        if ( v46 >= v45->max_length )
          goto LABEL_144;
        v52 = (char *)v45 + 4 * v46++;
        *((_DWORD *)v52 + 8) = 17;
      }
      v53 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v53);
      if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_143;
        if ( v46 >= v45->max_length )
          goto LABEL_144;
        v54 = (char *)v45 + 4 * v46++;
        *((_DWORD *)v54 + 8) = 18;
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
        if ( !v45 )
          goto LABEL_143;
        if ( v46 >= v45->max_length )
          goto LABEL_144;
        v45->m_Items[v46 + 1] = 19;
      }
    }
    else
    {
      v45 = 0LL;
    }
    SpoilerSetting = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      SpoilerSetting = OptionManager_TypeInfo;
    }
    KIND_COUNT_SAVE_SERVER = SpoilerSetting->static_fields->KIND_COUNT_SAVE_SERVER;
    if ( v43 == KIND_COUNT_SAVE_SERVER )
    {
      v57 = 0LL;
      if ( !v31 )
        goto LABEL_143;
      goto LABEL_138;
    }
    if ( (BYTE3(SpoilerSetting->vtable._0_Equals.methodPtr) & 4) != 0 && !SpoilerSetting->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpoilerSetting);
      KIND_COUNT_SAVE_SERVER = OptionManager_TypeInfo->static_fields->KIND_COUNT_SAVE_SERVER;
    }
    v57 = sub_B5D5DC(int___TypeInfo, KIND_COUNT_SAVE_SERVER - v43);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount((const MethodInfo *)v57);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      v58 = 0;
    }
    else
    {
      if ( !v57 )
        goto LABEL_143;
      if ( !*(_DWORD *)(v57 + 24) )
        goto LABEL_144;
      v58 = 1;
      *(_DWORD *)(v57 + 32) = 20;
    }
    v59 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v59);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v57 )
        goto LABEL_143;
      if ( v58 >= *(_DWORD *)(v57 + 24) )
        goto LABEL_144;
      v60 = v57 + 4LL * v58++;
      *(_DWORD *)(v60 + 32) = 9;
    }
    v61 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v61);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v57 )
        goto LABEL_143;
      if ( v58 >= *(_DWORD *)(v57 + 24) )
        goto LABEL_144;
      v62 = v57 + 4LL * v58++;
      *(_DWORD *)(v62 + 32) = 10;
    }
    v63 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v63);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v57 )
        goto LABEL_143;
      if ( v58 >= *(_DWORD *)(v57 + 24) )
        goto LABEL_144;
      v64 = v57 + 4LL * v58++;
      *(_DWORD *)(v64 + 32) = 17;
    }
    v65 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v65);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v57 )
        goto LABEL_143;
      if ( v58 >= *(_DWORD *)(v57 + 24) )
        goto LABEL_144;
      v66 = v57 + 4LL * v58++;
      *(_DWORD *)(v66 + 32) = 18;
    }
    v67 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (OptionManager_c *)OptionManager__GetSpoilerSetting((const MethodInfo *)v67);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
LABEL_137:
      if ( !v31 )
        goto LABEL_143;
LABEL_138:
      UserStatusFlagSetRequest__beginRequest(v31, v45, (System_Int32_array *)v57, 0LL);
LABEL_139:
      LOBYTE(v68) = 1;
      return (char)v68;
    }
    if ( !v57 )
      goto LABEL_143;
    if ( v58 < *(_DWORD *)(v57 + 24) )
    {
      *(_DWORD *)(v57 + 4LL * v58 + 32) = 19;
      goto LABEL_137;
    }
LABEL_144:
    v69 = sub_B5D6C8(SpoilerSetting);
    sub_B5D668(v69, 0LL);
  }
  if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v27 = OptionManager_TypeInfo;
    static_fields = OptionManager_TypeInfo->static_fields;
  }
  if ( static_fields->isModify )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = OptionManager_TypeInfo->static_fields;
    }
    static_fields->isModify = 0;
    UnityEngine_PlayerPrefs__Save(0LL);
    if ( *p_callback )
      System_Action__Invoke(*p_callback, 0LL);
    goto LABEL_139;
  }
  v68 = *p_callback;
  if ( *p_callback )
  {
    System_Action__Invoke(v68, 0LL);
    LOBYTE(v68) = 0;
  }
  return (char)v68;
}


void __fastcall OptionManager__SetAdvantageClassAuto(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0

  v4 = flag;
  if ( (byte_42E6304 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6304 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetAdvantageClassAuto((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_ADVANTAGE_CLASS_AUTO, v4, 0LL);
  }
}


void __fastcall OptionManager__SetAutoSelectParty(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = flag;
  if ( (byte_42E630E & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E630E = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetAutoSelectParty((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_AUTO_SELECT_PARTY, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetBattleFpsHighOrNot(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = value;
  if ( (byte_42E6312 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6312 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__IsBattleFpsHigh((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_BATTLE_FPS_SETTING, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetBgmVolume(float v, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0
  const MethodInfo *v8; // x0

  if ( (byte_42E62DC & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v2, v3, v4);
    byte_42E62DC = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetBgmVolume((const MethodInfo *)v6) != v )
  {
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v7->static_fields->SAVE_KEY_BGM_VOLUME, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    OptionManager__SoundRecover(v8);
  }
}


void __fastcall OptionManager__SetBoostItemUseConfirm(bool f, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = f;
  if ( (byte_42E62F5 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62F5 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetBoostItemUseConfirm((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_BOOST_ITEM_CONFIRM, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetFriendCostume(bool f, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t flag; // w8
  int v9; // w9
  unsigned int v10; // w8
  OptionManager_c *v11; // x0

  v4 = f;
  if ( (byte_42E62F8 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62F8 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetFriendCostume((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B5D69C(0LL, v7);
    flag = SelfUserGame->fields.flag;
    v9 = flag | 0x200;
    v10 = flag & 0xFFFFFDFF;
    if ( v4 )
      v10 = v9;
    SelfUserGame->fields.flag = v10;
    v11 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v11 = OptionManager_TypeInfo;
    }
    v11->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetFriendImageLimitCount(bool f, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v8; // x1
  int32_t flag; // w8
  int v10; // w9
  unsigned int v11; // w8
  OptionManager_c *v12; // x0

  v4 = f;
  if ( (byte_42E62F7 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62F7 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetFriendImageLimitCount((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    v6->static_fields->isFriendImageLimitCount = v4;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B5D69C(0LL, v8);
    flag = SelfUserGame->fields.flag;
    v10 = flag | 0x100000;
    v11 = flag & 0xFFEFFFFF;
    if ( v4 )
      v11 = v10;
    SelfUserGame->fields.flag = v11;
    v12 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v12 = OptionManager_TypeInfo;
    }
    v12->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetLocalNotiffication(bool f, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = f;
  if ( (byte_42E62F1 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62F1 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetLocalNotiffication((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_LOCAL_NOTIFFICATION, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetMessageDisp(bool b, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = b;
  if ( (byte_42E62FC & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62FC = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetMessageDisp((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_MESSAGE_DISP, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetNotPlayOpeningMovie(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = flag;
  if ( (byte_42E6309 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6309 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetNotPlayOpeningMovie((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetNotiffication(bool f, bool forceSend, const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL4 v5; // w19
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  OptionManager_c *v12; // x0
  OptionManager_c *v13; // x0
  OptionManager_c *v14; // x0
  UnityEngine_Object_o *Instance; // x20
  AvalonNotificationManager_o *v16; // x0
  __int64 v17; // x1

  v5 = f;
  if ( (byte_42E62EF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, forceSend, (_DWORD)method, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v9, v10, v11);
    byte_42E62EF = 1;
  }
  v12 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetNotiffication((const MethodInfo *)v12) ^ v5) & 1) != 0 || forceSend )
  {
    v13 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v13 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v13->static_fields->SAVE_KEY_NOTIFFICATION, v5, 0LL);
    v14 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v14 = OptionManager_TypeInfo;
    }
    v14->static_fields->isModify = 1;
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v16 = (AvalonNotificationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
      if ( !v16 )
        sub_B5D69C(0LL, v17);
      AvalonNotificationManager__SetRemotePushState(v16, v5, 0LL);
    }
  }
}


void __fastcall OptionManager__SetPreBattleFormationSetting(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = flag;
  if ( (byte_42E6314 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6314 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetPreBattleFormationSetting((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_PREBATTLEFORMATION, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetRaidNotiffication(bool f, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = f;
  if ( (byte_42E62F3 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62F3 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetRaidNotiffication((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_RAID_NOTIFFICATION, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetRandomLimitCountFriend(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t v8; // w8
  int v9; // w9
  unsigned int v10; // w8
  OptionManager_c *v11; // x0

  v4 = flag;
  if ( (byte_42E6306 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6306 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B5D69C(0LL, v7);
    v8 = SelfUserGame->fields.flag;
    v9 = v8 | 0x40000;
    v10 = v8 & 0xFFFBFFFF;
    if ( v4 )
      v10 = v9;
    SelfUserGame->fields.flag = v10;
    v11 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v11 = OptionManager_TypeInfo;
    }
    v11->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetRandomLimitCountOwn(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t v8; // w8
  int v9; // w9
  unsigned int v10; // w8
  OptionManager_c *v11; // x0

  v4 = flag;
  if ( (byte_42E6305 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6305 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B5D69C(0LL, v7);
    v8 = SelfUserGame->fields.flag;
    v9 = v8 | 0x20000;
    v10 = v8 & 0xFFFDFFFF;
    if ( v4 )
      v10 = v9;
    SelfUserGame->fields.flag = v10;
    v11 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v11 = OptionManager_TypeInfo;
    }
    v11->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetResolutionType(int32_t type, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  OptionManager_c *v8; // x0
  OptionManager_c *v9; // x0

  if ( (byte_42E6310 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ResolutionManager_TypeInfo, v5, v6, v7);
    byte_42E6310 = 1;
  }
  v8 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetResolutionType((const MethodInfo *)v8) != type )
  {
    v9 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v9 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_RESOLUTION_TYPE, type, 0LL);
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
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  if ( (byte_42E62ED & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v2, v3, v4);
    byte_42E62ED = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioScrollSpeed((const MethodInfo *)v6) != v )
  {
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v7->static_fields->SAVE_KEY_SCENARIO_SCROLL_SPEED, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetScenarioSpeed(float v, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  if ( (byte_42E62E6 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v2, v3, v4);
    byte_42E62E6 = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioSpeed((const MethodInfo *)v6) != v )
  {
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v7->static_fields->SAVE_KEY_SCENARIO_SPEED, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetScenarioTextSpeed(float v, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  if ( (byte_42E62EB & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v2, v3, v4);
    byte_42E62EB = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioTextSpeed((const MethodInfo *)v6) != v )
  {
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v7->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetScenarioTextWaitTimeSecond(float v, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  if ( (byte_42E62E9 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v2, v3, v4);
    byte_42E62E9 = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetScenarioTextWaitTimeSecond((const MethodInfo *)v6) != v )
  {
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v7->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetSeVolume(float v, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0
  const MethodInfo *v8; // x0

  if ( (byte_42E62DF & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v2, v3, v4);
    byte_42E62DF = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetSeVolume((const MethodInfo *)v6) != v )
  {
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v7->static_fields->SAVE_KEY_SE_VOLUME, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    OptionManager__SoundRecover(v8);
  }
}


void __fastcall OptionManager__SetSpoilerSetting(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t v8; // w8
  int v9; // w9
  unsigned int v10; // w8
  OptionManager_c *v11; // x0

  v4 = flag;
  if ( (byte_42E630C & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E630C = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetSpoilerSetting((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B5D69C(0LL, v7);
    v8 = SelfUserGame->fields.flag;
    v9 = v8 | 0x80000;
    v10 = v8 & 0xFFF7FFFF;
    if ( v4 )
      v10 = v9;
    SelfUserGame->fields.flag = v10;
    v11 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v11 = OptionManager_TypeInfo;
    }
    v11->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetSvtRand(bool f, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = f;
  if ( (byte_42E62FA & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62FA = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetSvtRand((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_SVT_RAND, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetTDPlaySpeed(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t v8; // w8
  int v9; // w9
  unsigned int v10; // w8
  OptionManager_c *v11; // x0

  v4 = flag;
  if ( (byte_42E6302 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6302 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetTDPlaySpeed((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B5D69C(0LL, v7);
    v8 = SelfUserGame->fields.flag;
    v9 = v8 | 0x400;
    v10 = v8 & 0xFFFFFBFF;
    if ( v4 )
      v10 = v9;
    SelfUserGame->fields.flag = v10;
    v11 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v11 = OptionManager_TypeInfo;
    }
    v11->static_fields->isModify = 1;
    OptionManager_TypeInfo->static_fields->isServerModify = 1;
  }
}


void __fastcall OptionManager__SetTouchSkipOpeningMovie(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = flag;
  if ( (byte_42E630B & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E630B = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetTouchSkipOpeningMovie((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
  }
}


void __fastcall OptionManager__SetVoiceVolume(float v, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0
  const MethodInfo *v8; // x0

  if ( (byte_42E62E2 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v2, v3, v4);
    byte_42E62E2 = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetVoiceVolume((const MethodInfo *)v6) != v )
  {
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v7->static_fields->SAVE_KEY_VOICE_VOLUME, v, 0LL);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    OptionManager__SoundRecover(v8);
  }
}


void __fastcall OptionManager__SetVolumeMute(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0

  v4 = flag;
  if ( (byte_42E62E4 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62E4 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( ((OptionManager__GetVolumeMute((const MethodInfo *)v5) ^ v4) & 1) != 0 )
  {
    v6 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_VOLUME_MUTE, v4, 0LL);
    v7 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
    OptionManager__SoundRecover((const MethodInfo *)v7);
  }
}


void __fastcall OptionManager__SoundRecover(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  OptionManager_c *v7; // x0
  float VoiceVolume; // s0
  OptionManager_c *v9; // x0
  float BgmVolume; // s8
  const MethodInfo *v11; // x0
  float SeVolume; // s0
  const MethodInfo *v13; // x0

  if ( (byte_42E62D5 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v4, v5, v6);
    byte_42E62D5 = 1;
  }
  v7 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetVolumeMute((const MethodInfo *)v7) )
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
    v9 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    BgmVolume = OptionManager__GetBgmVolume((const MethodInfo *)v9);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__SetBgmMasterVolume(BgmVolume, 0LL);
    SeVolume = OptionManager__GetSeVolume(v11);
    SoundManager__SetSeMasterVolume(SeVolume, 0LL);
    VoiceVolume = OptionManager__GetVoiceVolume(v13);
  }
  SoundManager__SetVoiceMasterVolume(VoiceVolume, 0LL);
}


void __fastcall OptionManager__TestBgmVolume(float v, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3

  if ( (byte_42E62DA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, v2, v3, v4);
    byte_42E62DA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetBgmMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestSeVolume(float v, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3

  if ( (byte_42E62DD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, v2, v3, v4);
    byte_42E62DD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetSeMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestVoiceVolume(float v, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3

  if ( (byte_42E62E0 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, v2, v3, v4);
    byte_42E62E0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetVoiceMasterVolume(v, 0LL);
}


bool __fastcall OptionManager__isSavedMemoryMode(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  OptionManager_c *v4; // x8
  int32_t systemMemorySize; // w0
  int v6; // w9

  if ( (byte_42E6307 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, v1, v2, v3);
    byte_42E6307 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  if ( !v4->static_fields->memoryMode )
  {
    systemMemorySize = UnityEngine_SystemInfo__get_systemMemorySize(0LL);
    v4 = OptionManager_TypeInfo;
    if ( systemMemorySize > 2399 )
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v4 = OptionManager_TypeInfo;
      }
      v6 = 2;
    }
    else
    {
      if ( (WORD1(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v4 = OptionManager_TypeInfo;
      }
      v6 = 1;
    }
    v4->static_fields->memoryMode = v6;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = OptionManager_TypeInfo;
  }
  return v4->static_fields->memoryMode == 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  OptionManager_c *v8; // x0
  bool FriendImageLimitCount; // w0
  System_Action_o *callback; // x0

  if ( (byte_42E5A6C & 1) == 0 )
  {
    sub_B5D5C4(&FollowerListRequest_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    byte_42E5A6C = 1;
  }
  v8 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = OptionManager_TypeInfo;
  }
  v8->static_fields->isModify = 0;
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