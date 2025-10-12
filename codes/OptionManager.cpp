void OptionManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct OptionManager_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct OptionManager_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct OptionManager_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct OptionManager_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct OptionManager_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct OptionManager_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct OptionManager_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  struct OptionManager_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  struct OptionManager_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct OptionManager_StaticFields *v37; // x0
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct OptionManager_StaticFields *v41; // x0
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct OptionManager_StaticFields *v45; // x0
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct OptionManager_StaticFields *v49; // x0
  int32_t v50; // w1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct OptionManager_StaticFields *v53; // x0
  int32_t v54; // w1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct OptionManager_StaticFields *v57; // x0
  int32_t v58; // w1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct OptionManager_StaticFields *v61; // x0
  int32_t v62; // w1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  CGThumbnailListItem_o *v65; // x0
  int32_t v66; // w1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct OptionManager_StaticFields *v69; // x0
  int32_t v70; // w1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct OptionManager_StaticFields *v73; // x0
  int32_t v74; // w1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct OptionManager_StaticFields *v77; // x0
  int32_t v78; // w1
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct OptionManager_StaticFields *v81; // x0
  int32_t v82; // w1
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct OptionManager_StaticFields *v85; // x0
  int32_t v86; // w1
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct OptionManager_StaticFields *v89; // x0
  int32_t v90; // w1
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct OptionManager_StaticFields *v93; // x0
  int32_t v94; // w1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct OptionManager_StaticFields *v97; // x0
  int32_t v98; // w1
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  struct OptionManager_StaticFields *v101; // x0
  int32_t v102; // w1
  int32_t v103; // w2
  const MethodInfo *v104; // x3

  if ( (byte_4C37253 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10034/*"OptionMessageDisp"*/);
    sub_1C32C20(&StringLiteral_10048/*"OptionTouchSkipOpeningMovie"*/);
    sub_1C32C20(&StringLiteral_10036/*"OptionNotiffication"*/);
    sub_1C32C20(&StringLiteral_10049/*"OptionVoiceVolume"*/);
    sub_1C32C20(&StringLiteral_10031/*"OptionFriendCostume"*/);
    sub_1C32C20(&StringLiteral_10033/*"OptionLocalNotiffication"*/);
    sub_1C32C20(&StringLiteral_10030/*"OptionBoostItemConfirm"*/);
    sub_1C32C20(&StringLiteral_10042/*"OptionScenarioSpeed"*/);
    sub_1C32C20(&StringLiteral_10038/*"OptionRaidNotiffication"*/);
    sub_1C32C20(&StringLiteral_10045/*"OptionSeVolume"*/);
    sub_1C32C20(&StringLiteral_10043/*"OptionScenarioText"*/);
    sub_1C32C20(&StringLiteral_16690/*"adjustVolume"*/);
    sub_1C32C20(&StringLiteral_10035/*"OptionNotPlayOpeningMovie"*/);
    sub_1C32C20(&StringLiteral_10029/*"OptionBgmVolume"*/);
    sub_1C32C20(&StringLiteral_10026/*"OptionAutoOpenAutoOrganizationDialog"*/);
    sub_1C32C20(&StringLiteral_10028/*"OptionBattle20220729"*/);
    sub_1C32C20(&StringLiteral_10032/*"OptionFriendImageLimitCount"*/);
    sub_1C32C20(&StringLiteral_10050/*"OptionVolumeMute"*/);
    sub_1C32C20(&StringLiteral_10044/*"OptionScenarioTextSpeed"*/);
    sub_1C32C20(&StringLiteral_10046/*"OptionSelectAdvantageClassAuto"*/);
    sub_1C32C20(&StringLiteral_10040/*"OptionScenarioAutoWaitTimeValue"*/);
    sub_1C32C20(&StringLiteral_10039/*"OptionResolutionType"*/);
    sub_1C32C20(&StringLiteral_10037/*"OptionPreBattleFormation"*/);
    sub_1C32C20(&StringLiteral_10041/*"OptionScenarioScrollSpeed"*/);
    sub_1C32C20(&StringLiteral_10027/*"OptionAutoSelectParty"*/);
    sub_1C32C20(&StringLiteral_10047/*"OptionSvtRand"*/);
    byte_4C37253 = 1;
  }
  static_fields = OptionManager_TypeInfo->static_fields;
  *(_WORD *)&static_fields->isModify = 0;
  strcpy((char *)&static_fields->DEF_VOL, "333?");
  static_fields->KIND_COUNT_SAVE_SERVER = 6;
  v4 = StringLiteral_10029/*"OptionBgmVolume"*/;
  static_fields->SAVE_KEY_BGM_VOLUME = (struct System_String_o *)StringLiteral_10029/*"OptionBgmVolume"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->SAVE_KEY_BGM_VOLUME, v4, v1, v2);
  v5 = StringLiteral_10045/*"OptionSeVolume"*/;
  v6 = OptionManager_TypeInfo->static_fields;
  v6->SAVE_KEY_SE_VOLUME = (struct System_String_o *)StringLiteral_10045/*"OptionSeVolume"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->SAVE_KEY_SE_VOLUME, v5, v7, v8);
  v9 = StringLiteral_10049/*"OptionVoiceVolume"*/;
  v10 = OptionManager_TypeInfo->static_fields;
  v10->SAVE_KEY_VOICE_VOLUME = (struct System_String_o *)StringLiteral_10049/*"OptionVoiceVolume"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->SAVE_KEY_VOICE_VOLUME, v9, v11, v12);
  v13 = StringLiteral_16690/*"adjustVolume"*/;
  v14 = OptionManager_TypeInfo->static_fields;
  v14->SAVE_KEY_ADJUST_VOLUME = (struct System_String_o *)StringLiteral_16690/*"adjustVolume"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->SAVE_KEY_ADJUST_VOLUME, v13, v15, v16);
  v17 = StringLiteral_10042/*"OptionScenarioSpeed"*/;
  v18 = OptionManager_TypeInfo->static_fields;
  v18->SAVE_KEY_SCENARIO_SPEED = (struct System_String_o *)StringLiteral_10042/*"OptionScenarioSpeed"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v18->SAVE_KEY_SCENARIO_SPEED, v17, v19, v20);
  v21 = StringLiteral_10043/*"OptionScenarioText"*/;
  v22 = OptionManager_TypeInfo->static_fields;
  v22->SAVE_KEY_SCENARIO_TEXT_WAIT = (struct System_String_o *)StringLiteral_10043/*"OptionScenarioText"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v22->SAVE_KEY_SCENARIO_TEXT_WAIT, v21, v23, v24);
  v25 = StringLiteral_10044/*"OptionScenarioTextSpeed"*/;
  v26 = OptionManager_TypeInfo->static_fields;
  v26->SAVE_KEY_SCENARIO_TEXT_SPEED = (struct System_String_o *)StringLiteral_10044/*"OptionScenarioTextSpeed"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v26->SAVE_KEY_SCENARIO_TEXT_SPEED, v25, v27, v28);
  v29 = StringLiteral_10041/*"OptionScenarioScrollSpeed"*/;
  v30 = OptionManager_TypeInfo->static_fields;
  v30->SAVE_KEY_SCENARIO_SCROLL_SPEED = (struct System_String_o *)StringLiteral_10041/*"OptionScenarioScrollSpeed"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v30->SAVE_KEY_SCENARIO_SCROLL_SPEED, v29, v31, v32);
  v33 = StringLiteral_10040/*"OptionScenarioAutoWaitTimeValue"*/;
  v34 = OptionManager_TypeInfo->static_fields;
  v34->SAVE_KEY_SCENARIO_AUTO_WAIT_TIME = (struct System_String_o *)StringLiteral_10040/*"OptionScenarioAutoWaitTimeValue"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v34->SAVE_KEY_SCENARIO_AUTO_WAIT_TIME, v33, v35, v36);
  v37 = OptionManager_TypeInfo->static_fields;
  v38 = StringLiteral_10036/*"OptionNotiffication"*/;
  v37->SAVE_KEY_NOTIFFICATION = (struct System_String_o *)StringLiteral_10036/*"OptionNotiffication"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v37->SAVE_KEY_NOTIFFICATION, v38, v39, v40);
  v41 = OptionManager_TypeInfo->static_fields;
  v42 = StringLiteral_10033/*"OptionLocalNotiffication"*/;
  v41->SAVE_KEY_LOCAL_NOTIFFICATION = (struct System_String_o *)StringLiteral_10033/*"OptionLocalNotiffication"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v41->SAVE_KEY_LOCAL_NOTIFFICATION, v42, v43, v44);
  v45 = OptionManager_TypeInfo->static_fields;
  v46 = StringLiteral_10038/*"OptionRaidNotiffication"*/;
  v45->SAVE_KEY_RAID_NOTIFFICATION = (struct System_String_o *)StringLiteral_10038/*"OptionRaidNotiffication"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v45->SAVE_KEY_RAID_NOTIFFICATION, v46, v47, v48);
  v49 = OptionManager_TypeInfo->static_fields;
  v50 = StringLiteral_10030/*"OptionBoostItemConfirm"*/;
  v49->SAVE_KEY_BOOST_ITEM_CONFIRM = (struct System_String_o *)StringLiteral_10030/*"OptionBoostItemConfirm"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v49->SAVE_KEY_BOOST_ITEM_CONFIRM, v50, v51, v52);
  v53 = OptionManager_TypeInfo->static_fields;
  v54 = StringLiteral_10032/*"OptionFriendImageLimitCount"*/;
  v53->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT = (struct System_String_o *)StringLiteral_10032/*"OptionFriendImageLimitCount"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v53->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT, v54, v55, v56);
  v57 = OptionManager_TypeInfo->static_fields;
  v58 = StringLiteral_10031/*"OptionFriendCostume"*/;
  v57->SAVE_KEY_FREND_COSTUME = (struct System_String_o *)StringLiteral_10031/*"OptionFriendCostume"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v57->SAVE_KEY_FREND_COSTUME, v58, v59, v60);
  v61 = OptionManager_TypeInfo->static_fields;
  v62 = StringLiteral_10047/*"OptionSvtRand"*/;
  v61->SAVE_KEY_SVT_RAND = (struct System_String_o *)StringLiteral_10047/*"OptionSvtRand"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v61->SAVE_KEY_SVT_RAND, v62, v63, v64);
  v65 = (CGThumbnailListItem_o *)OptionManager_TypeInfo->static_fields;
  v66 = StringLiteral_10034/*"OptionMessageDisp"*/;
  v65[1].klass = (CGThumbnailListItem_c *)StringLiteral_10034/*"OptionMessageDisp"*/;
  sub_1C32BC4(v65 + 1, v66, v67, v68);
  v69 = OptionManager_TypeInfo->static_fields;
  v70 = StringLiteral_10050/*"OptionVolumeMute"*/;
  v69->SAVE_KEY_VOLUME_MUTE = (struct System_String_o *)StringLiteral_10050/*"OptionVolumeMute"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v69->SAVE_KEY_VOLUME_MUTE, v70, v71, v72);
  v73 = OptionManager_TypeInfo->static_fields;
  v74 = StringLiteral_10046/*"OptionSelectAdvantageClassAuto"*/;
  v73->SAVE_KEY_ADVANTAGE_CLASS_AUTO = (struct System_String_o *)StringLiteral_10046/*"OptionSelectAdvantageClassAuto"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v73->SAVE_KEY_ADVANTAGE_CLASS_AUTO, v74, v75, v76);
  v77 = OptionManager_TypeInfo->static_fields;
  v78 = StringLiteral_10035/*"OptionNotPlayOpeningMovie"*/;
  v77->SAVE_KEY_NOT_PLAY_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10035/*"OptionNotPlayOpeningMovie"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v77->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, v78, v79, v80);
  v81 = OptionManager_TypeInfo->static_fields;
  v82 = StringLiteral_10048/*"OptionTouchSkipOpeningMovie"*/;
  v81->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10048/*"OptionTouchSkipOpeningMovie"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v81->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, v82, v83, v84);
  v85 = OptionManager_TypeInfo->static_fields;
  v86 = StringLiteral_10027/*"OptionAutoSelectParty"*/;
  v85->SAVE_KEY_AUTO_SELECT_PARTY = (struct System_String_o *)StringLiteral_10027/*"OptionAutoSelectParty"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v85->SAVE_KEY_AUTO_SELECT_PARTY, v86, v87, v88);
  v89 = OptionManager_TypeInfo->static_fields;
  v90 = StringLiteral_10039/*"OptionResolutionType"*/;
  v89->SAVE_KEY_RESOLUTION_TYPE = (struct System_String_o *)StringLiteral_10039/*"OptionResolutionType"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v89->SAVE_KEY_RESOLUTION_TYPE, v90, v91, v92);
  v93 = OptionManager_TypeInfo->static_fields;
  v94 = StringLiteral_10037/*"OptionPreBattleFormation"*/;
  v93->SAVE_KEY_PREBATTLEFORMATION = (struct System_String_o *)StringLiteral_10037/*"OptionPreBattleFormation"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v93->SAVE_KEY_PREBATTLEFORMATION, v94, v95, v96);
  v97 = OptionManager_TypeInfo->static_fields;
  v98 = StringLiteral_10028/*"OptionBattle20220729"*/;
  v97->SAVE_KEY_BATTLE_FPS_SETTING = (struct System_String_o *)StringLiteral_10028/*"OptionBattle20220729"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v97->SAVE_KEY_BATTLE_FPS_SETTING, v98, v99, v100);
  v101 = OptionManager_TypeInfo->static_fields;
  v102 = StringLiteral_10026/*"OptionAutoOpenAutoOrganizationDialog"*/;
  v101->SAVE_KEY_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG = (struct System_String_o *)StringLiteral_10026/*"OptionAutoOpenAutoOrganizationDialog"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v101->SAVE_KEY_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG, v102, v103, v104);
}


void OptionManager___ctor(OptionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OptionManager__AdjustScenarioSpeedSetting(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  OptionManager_c *v2; // x0
  bool HasKey; // w0
  OptionManager_c *v4; // x8
  bool v5; // w19
  BalanceConfig_c *v6; // x0
  System_String_o *SAVE_KEY_SCENARIO_TEXT_WAIT; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  float *p_ScenarioTextWaitDefaultCn; // x9
  float *p_ScenarioTextWaitDefaultSt; // x8

  if ( (byte_4C3720F & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3720F = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v1->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT, 0) )
  {
    v2 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v2 = OptionManager_TypeInfo;
    }
    HasKey = UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVE_KEY_ADJUST_VOLUME, 0);
    v4 = OptionManager_TypeInfo;
    v5 = HasKey;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    v6 = BalanceConfig_TypeInfo;
    SAVE_KEY_SCENARIO_TEXT_WAIT = v4->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    static_fields = v6->static_fields;
    p_ScenarioTextWaitDefaultCn = &static_fields->ScenarioTextWaitDefaultCn;
    p_ScenarioTextWaitDefaultSt = &static_fields->ScenarioTextWaitDefaultSt;
    if ( v5 )
      p_ScenarioTextWaitDefaultSt = p_ScenarioTextWaitDefaultCn;
    UnityEngine_PlayerPrefs__SetFloat(SAVE_KEY_SCENARIO_TEXT_WAIT, *p_ScenarioTextWaitDefaultSt, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void OptionManager__AdjustVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  OptionManager_c *v2; // x0

  if ( (byte_4C3720E & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3720E = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_ADJUST_VOLUME, 0, 0) )
  {
    v2 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v2 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v2->static_fields->SAVE_KEY_ADJUST_VOLUME, 1, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


bool OptionManager__CheckOldLocal(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  OptionManager_c *v2; // x0
  const MethodInfo *v3; // x1
  bool v4; // w19
  OptionManager_c *v5; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  bool result; // w0

  if ( (byte_4C37208 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37208 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v1->static_fields->SAVE_KEY_FREND_COSTUME, 0) )
    goto LABEL_12;
  v2 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_FREND_COSTUME, 0, 0) )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = 1;
    OptionManager__SetFriendCostume(1, v3);
  }
  else
  {
LABEL_12:
    v4 = 0;
  }
  v5 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v5 = OptionManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  result = v4;
  static_fields->isModify = v4;
  static_fields->isServerModify = v4;
  return result;
}


void OptionManager__DeleteContinueData(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4C37207 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37207 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY_BGM_VOLUME, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_SE_VOLUME, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_VOICE_VOLUME, 0);
  UnityEngine_PlayerPrefs__SetInt(OptionManager_TypeInfo->static_fields->SAVE_KEY_ADJUST_VOLUME, 1, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_SCENARIO_SPEED, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_SCENARIO_AUTO_WAIT_TIME, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_NOTIFFICATION, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_LOCAL_NOTIFFICATION, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_RAID_NOTIFFICATION, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_BOOST_ITEM_CONFIRM, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_COSTUME, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_SVT_RAND, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_MESSAGE_DISP, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_VOLUME_MUTE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_ADVANTAGE_CLASS_AUTO, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_AUTO_SELECT_PARTY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_RESOLUTION_TYPE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_PREBATTLEFORMATION, 0);
  UnityEngine_PlayerPrefs__DeleteKey(OptionManager_TypeInfo->static_fields->SAVE_KEY_BATTLE_FPS_SETTING, 0);
  OptionManager__Initialize(v2);
}


void OptionManager__DeleteOldLocal(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37209 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37209 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY_FREND_COSTUME, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool OptionManager__GetAdvantageClassAuto(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C3723D & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3723D = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_ADVANTAGE_CLASS_AUTO, 1, 0) == 1;
}


bool OptionManager__GetAutoOpenAutoOrganizationDialog(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37251 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37251 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG, 1, 0) == 1;
}


bool OptionManager__GetAutoSelectParty(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37248 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37248 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_AUTO_SELECT_PARTY, 1, 0) == 1;
}


float OptionManager__GetBgmVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37212 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37212 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v1->static_fields->SAVE_KEY_BGM_VOLUME, v1->static_fields->DEF_VOL, 0);
}


bool OptionManager__GetBoostItemUseConfirm(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C3722E & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3722E = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_BOOST_ITEM_CONFIRM, 1, 0) != 0;
}


bool OptionManager__GetDefaultMute(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37238 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37238 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return v1->static_fields->DEF_MUTE;
}


float OptionManager__GetDefaultScenarioAutoWaitTime(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_4C37227 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C37227 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->ScenarioAutoWaitTimeDefault;
}


float OptionManager__GetDefaultScenarioScrollSpeed(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_4C3723B & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C3723B = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->ScenarioScrollSpeedDefault;
}


float OptionManager__GetDefaultScenarioSpeed(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_4C37239 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C37239 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->ScenarioSpeedDefault;
}


float OptionManager__GetDefaultScenarioTextSpeed(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_4C3723A & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C3723A = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->ScenarioTextSpeedDefault;
}


float OptionManager__GetDefaultScenarioWaitTimeSecond(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_4C3721E & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C3721E = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->ScenarioTextWaitDefaultSt;
}


float OptionManager__GetDefaultVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37237 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37237 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return v1->static_fields->DEF_VOL;
}


bool OptionManager__GetFriendCostume(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C32E7C(0);
  return (BYTE1(SelfUserGame->fields.flag) >> 1) & 1;
}


bool OptionManager__GetFriendImageLimitCount(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  OptionManager_c *v2; // x0

  if ( (byte_4C37230 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37230 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C32E7C(0);
  if ( (SelfUserGame->fields.flag & 0x100000) != 0 )
    return 1;
  v2 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v2 = OptionManager_TypeInfo;
  }
  return v2->static_fields->isFriendImageLimitCount;
}


bool OptionManager__GetLocalNotiffication(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C3722A & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3722A = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_LOCAL_NOTIFFICATION, 1, 0) != 0;
}


bool OptionManager__GetMessageDisp(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37235 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37235 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_MESSAGE_DISP, 1, 0) != 0;
}


bool OptionManager__GetNotPlayOpeningMovie(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37243 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37243 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, 1, 0) == 1;
}


bool OptionManager__GetNotiffication(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37228 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37228 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_NOTIFFICATION, 1, 0) != 0;
}


bool OptionManager__GetPreBattleFormationSetting(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C3724E & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3724E = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_PREBATTLEFORMATION, 1, 0) == 1;
}


bool OptionManager__GetRaidNotiffication(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C3722C & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3722C = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_RAID_NOTIFFICATION, 1, 0) != 0;
}


bool OptionManager__GetRandomLimitCountFriend(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C32E7C(0);
  return (BYTE2(SelfUserGame->fields.flag) >> 2) & 1;
}


bool OptionManager__GetRandomLimitCountOwn(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C32E7C(0);
  return (BYTE2(SelfUserGame->fields.flag) >> 1) & 1;
}


int32_t OptionManager__GetResolutionType(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C3724A & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3724A = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_RESOLUTION_TYPE, 0, 0);
}


float OptionManager__GetScenarioAutoWaitTime(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v2; // x8
  System_String_o *SAVE_KEY_SCENARIO_AUTO_WAIT_TIME; // x19

  if ( (byte_4C37225 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37225 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  v2 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_AUTO_WAIT_TIME = v1->static_fields->SAVE_KEY_SCENARIO_AUTO_WAIT_TIME;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(
           SAVE_KEY_SCENARIO_AUTO_WAIT_TIME,
           v2->static_fields->ScenarioAutoWaitTimeDefault,
           0);
}


float OptionManager__GetScenarioScrollSpeed(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v2; // x8
  System_String_o *SAVE_KEY_SCENARIO_SCROLL_SPEED; // x19

  if ( (byte_4C37223 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37223 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  v2 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_SCROLL_SPEED = v1->static_fields->SAVE_KEY_SCENARIO_SCROLL_SPEED;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(
           SAVE_KEY_SCENARIO_SCROLL_SPEED,
           v2->static_fields->ScenarioScrollSpeedDefault,
           0);
}


float OptionManager__GetScenarioSpeed(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v2; // x8
  System_String_o *SAVE_KEY_SCENARIO_SPEED; // x19
  float Float; // s0
  BalanceConfig_c *v5; // x0
  float ScenarioSpeedHigh; // s8
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedLow; // s9

  if ( (byte_4C3721C & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3721C = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  v2 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_SPEED = v1->static_fields->SAVE_KEY_SCENARIO_SPEED;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  Float = UnityEngine_PlayerPrefs__GetFloat(SAVE_KEY_SCENARIO_SPEED, v2->static_fields->ScenarioSpeedDefault, 0);
  v5 = BalanceConfig_TypeInfo;
  ScenarioSpeedHigh = Float;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  ScenarioSpeedLow = static_fields->ScenarioSpeedLow;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( ScenarioSpeedHigh <= ScenarioSpeedLow )
    return static_fields->ScenarioSpeedLow;
  if ( ScenarioSpeedHigh >= static_fields->ScenarioSpeedHigh )
  {
    ScenarioSpeedHigh = static_fields->ScenarioSpeedHigh;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      return BalanceConfig_TypeInfo->static_fields->ScenarioSpeedHigh;
    }
  }
  return ScenarioSpeedHigh;
}


float OptionManager__GetScenarioTextSpeed(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v2; // x8
  System_String_o *SAVE_KEY_SCENARIO_TEXT_SPEED; // x19

  if ( (byte_4C37221 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37221 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  v2 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_TEXT_SPEED = v1->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(SAVE_KEY_SCENARIO_TEXT_SPEED, v2->static_fields->ScenarioTextSpeedDefault, 0);
}


float OptionManager__GetScenarioTextWaitTimeSecond(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v2; // x8
  System_String_o *SAVE_KEY_SCENARIO_TEXT_WAIT; // x19
  float Float; // s0
  BalanceConfig_c *v5; // x0
  float ScenarioTextWaitLow; // s8

  if ( (byte_4C3721F & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3721F = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  v2 = BalanceConfig_TypeInfo;
  SAVE_KEY_SCENARIO_TEXT_WAIT = v1->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  Float = UnityEngine_PlayerPrefs__GetFloat(
            SAVE_KEY_SCENARIO_TEXT_WAIT,
            v2->static_fields->ScenarioTextWaitDefaultSt,
            0);
  v5 = BalanceConfig_TypeInfo;
  if ( Float <= BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    ScenarioTextWaitLow = BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow;
  }
  else
  {
    ScenarioTextWaitLow = Float;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( ScenarioTextWaitLow >= v5->static_fields->ScenarioTextWaitHigh )
  {
    ScenarioTextWaitLow = v5->static_fields->ScenarioTextWaitHigh;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      return BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh;
    }
  }
  return ScenarioTextWaitLow;
}


float OptionManager__GetSeVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37215 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37215 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v1->static_fields->SAVE_KEY_SE_VOLUME, v1->static_fields->DEF_VOL, 0);
}


bool OptionManager__GetSpoilerSetting(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C32E7C(0);
  return (BYTE2(SelfUserGame->fields.flag) >> 3) & 1;
}


bool OptionManager__GetSvtRand(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37233 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37233 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_SVT_RAND, 0, 0) != 0;
}


bool OptionManager__GetTDPlaySpeed(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C32E7C(0);
  return (BYTE1(SelfUserGame->fields.flag) >> 2) & 1;
}


bool OptionManager__GetTouchSkipOpeningMovie(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37245 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37245 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, 0, 0) != 0;
}


float OptionManager__GetVoiceVolume(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C37218 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37218 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetFloat(v1->static_fields->SAVE_KEY_VOICE_VOLUME, v1->static_fields->DEF_VOL, 0);
}


bool OptionManager__GetVolumeMute(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C3721A & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3721A = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_VOLUME_MUTE, 0, 0) != 0;
}


void OptionManager__Initialize(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  int32_t Int; // w0
  struct OptionManager_StaticFields *static_fields; // x8

  if ( (byte_4C3720A & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3720A = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__Recover((const MethodInfo *)v1);
  Int = UnityEngine_PlayerPrefs__GetInt(OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT, 0, 0);
  static_fields = OptionManager_TypeInfo->static_fields;
  static_fields->isFriendImageLimitCount = Int != 0;
  static_fields->memoryMode = 0;
}


bool OptionManager__IsBattleFpsHigh(const MethodInfo *method)
{
  OptionManager_c *v1; // x0

  if ( (byte_4C3724C & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3724C = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_BATTLE_FPS_SETTING, 0, 0) > 0;
}


bool OptionManager__IsSavedBattleMemoryMode(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  BalanceConfig_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_4C37242 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37242 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode((const MethodInfo *)v1) )
    return 1;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( !v3->static_fields->IsEnableSavedMemoryBattle )
    return 0;
  v4 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  return v4->static_fields->memoryMode == 2;
}


void OptionManager__Recover(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4C3720B & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3720B = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SoundRecover((const MethodInfo *)v1);
  OptionManager__ResolutionRecover(v2);
}


void OptionManager__ResolutionRecover(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  int32_t ResolutionType; // w19

  if ( (byte_4C3720D & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&ResolutionManager_TypeInfo);
    byte_4C3720D = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  ResolutionType = OptionManager__GetResolutionType((const MethodInfo *)v1);
  if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
  ResolutionManager__SetResolutionType(ResolutionType, 0);
}


bool OptionManager__SaveData(System_Action_o *callback, const MethodInfo *method)
{
  __int64 v3; // x21
  OptionManager_c *SpoilerSetting; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x19
  OptionManager_c *v8; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *v10; // x19
  const MethodInfo *v11; // x3
  Il2CppObject *Request_object; // x0
  UserStatusFlagSetRequest_o *v13; // x19
  _BOOL8 FriendImageLimitCount; // x0
  int v15; // w20
  bool FriendCostume; // w8
  OptionManager_c *v17; // x0
  int v18; // w10
  _BOOL8 TDPlaySpeed; // x0
  _BOOL4 v20; // w21
  int v21; // w20
  _BOOL8 RandomLimitCountOwn; // x0
  _BOOL4 v23; // w21
  int v24; // w20
  _BOOL8 RandomLimitCountFriend; // x0
  _BOOL4 v26; // w21
  unsigned int v27; // w21
  const MethodInfo *v28; // x0
  MethodInfo *v29; // x20
  unsigned int v30; // w24
  OptionManager_c *v31; // x0
  char *v32; // x8
  OptionManager_c *v33; // x0
  char *v34; // x8
  OptionManager_c *v35; // x0
  char *v36; // x8
  OptionManager_c *v37; // x0
  char *v38; // x8
  OptionManager_c *v39; // x0
  int32_t KIND_COUNT_SAVE_SERVER; // w8
  __int64 v42; // x21
  unsigned int v43; // w23
  OptionManager_c *v44; // x0
  __int64 v45; // x8
  OptionManager_c *v46; // x0
  __int64 v47; // x8
  OptionManager_c *v48; // x0
  __int64 v49; // x8
  OptionManager_c *v50; // x0
  __int64 v51; // x8
  OptionManager_c *v52; // x0

  if ( (byte_4C37210 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_OptionManager___c__DisplayClass45_0__SaveData_b__0__);
    sub_1C32C20(&OptionManager___c__DisplayClass45_0_TypeInfo);
    byte_4C37210 = 1;
  }
  v3 = sub_1C32E6C(OptionManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_121;
  *(_QWORD *)(v3 + 16) = callback;
  v7 = v3 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)callback, v5, v6);
  v8 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = OptionManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->isServerModify )
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)v3,
      Method_OptionManager___c__DisplayClass45_0__SaveData_b__0__,
      v11);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v10,
                       (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    v13 = (UserStatusFlagSetRequest_o *)Request_object;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    FriendImageLimitCount = OptionManager__GetFriendImageLimitCount((const MethodInfo *)Request_object);
    v15 = FriendImageLimitCount;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    FriendCostume = OptionManager__GetFriendCostume((const MethodInfo *)FriendImageLimitCount);
    v17 = OptionManager_TypeInfo;
    if ( v15 )
      v18 = 2;
    else
      v18 = 1;
    if ( FriendCostume )
      v15 = v18;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    TDPlaySpeed = OptionManager__GetTDPlaySpeed((const MethodInfo *)v17);
    v20 = TDPlaySpeed;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v21 = v15 + v20;
    RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn((const MethodInfo *)TDPlaySpeed);
    v23 = RandomLimitCountOwn;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v24 = v21 + v23;
    RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend((const MethodInfo *)RandomLimitCountOwn);
    v26 = RandomLimitCountFriend;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v27 = v24 + v26;
    if ( OptionManager__GetSpoilerSetting((const MethodInfo *)RandomLimitCountFriend) )
    {
      ++v27;
    }
    else if ( !v27 )
    {
      v29 = 0;
      goto LABEL_77;
    }
    v28 = (const MethodInfo *)sub_1C32CC8(int___TypeInfo, v27);
    v29 = (MethodInfo *)v28;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount(v28);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_121;
      if ( !LODWORD(v29->name) )
        goto LABEL_122;
      v30 = 1;
      LODWORD(v29->klass) = 20;
    }
    else
    {
      v30 = 0;
    }
    v31 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v31);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_121;
      if ( v30 >= LODWORD(v29->name) )
        goto LABEL_122;
      v32 = (char *)v29 + 4 * v30++;
      *((_DWORD *)v32 + 8) = 9;
    }
    v33 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v33);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_121;
      if ( v30 >= LODWORD(v29->name) )
        goto LABEL_122;
      v34 = (char *)v29 + 4 * v30++;
      *((_DWORD *)v34 + 8) = 10;
    }
    v35 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v35);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_121;
      if ( v30 >= LODWORD(v29->name) )
        goto LABEL_122;
      v36 = (char *)v29 + 4 * v30++;
      *((_DWORD *)v36 + 8) = 17;
    }
    v37 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v37);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_121;
      if ( v30 >= LODWORD(v29->name) )
        goto LABEL_122;
      v38 = (char *)v29 + 4 * v30++;
      *((_DWORD *)v38 + 8) = 18;
    }
    v39 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetSpoilerSetting((const MethodInfo *)v39);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_121;
      if ( v30 >= LODWORD(v29->name) )
        goto LABEL_122;
      *((_DWORD *)&v29->klass + v30) = 19;
    }
LABEL_77:
    SpoilerSetting = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      SpoilerSetting = OptionManager_TypeInfo;
    }
    KIND_COUNT_SAVE_SERVER = SpoilerSetting->static_fields->KIND_COUNT_SAVE_SERVER;
    if ( v27 == KIND_COUNT_SAVE_SERVER )
    {
      v42 = 0;
      goto LABEL_118;
    }
    if ( !SpoilerSetting->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpoilerSetting);
      KIND_COUNT_SAVE_SERVER = OptionManager_TypeInfo->static_fields->KIND_COUNT_SAVE_SERVER;
    }
    v42 = sub_1C32CC8(int___TypeInfo, KIND_COUNT_SAVE_SERVER - v27);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendImageLimitCount((const MethodInfo *)v42);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
      v43 = 0;
    }
    else
    {
      if ( !v42 )
        goto LABEL_121;
      if ( !*(_DWORD *)(v42 + 24) )
        goto LABEL_122;
      v43 = 1;
      *(_DWORD *)(v42 + 32) = 20;
    }
    v44 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetFriendCostume((const MethodInfo *)v44);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v42 )
        goto LABEL_121;
      if ( v43 >= *(_DWORD *)(v42 + 24) )
        goto LABEL_122;
      v45 = v42 + 4LL * v43++;
      *(_DWORD *)(v45 + 32) = 9;
    }
    v46 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetTDPlaySpeed((const MethodInfo *)v46);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v42 )
        goto LABEL_121;
      if ( v43 >= *(_DWORD *)(v42 + 24) )
        goto LABEL_122;
      v47 = v42 + 4LL * v43++;
      *(_DWORD *)(v47 + 32) = 10;
    }
    v48 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v48);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v42 )
        goto LABEL_121;
      if ( v43 >= *(_DWORD *)(v42 + 24) )
        goto LABEL_122;
      v49 = v42 + 4LL * v43++;
      *(_DWORD *)(v49 + 32) = 17;
    }
    v50 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v50);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      if ( !v42 )
        goto LABEL_121;
      if ( v43 >= *(_DWORD *)(v42 + 24) )
        goto LABEL_122;
      v51 = v42 + 4LL * v43++;
      *(_DWORD *)(v51 + 32) = 18;
    }
    v52 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (OptionManager_c *)OptionManager__GetSpoilerSetting((const MethodInfo *)v52);
    if ( ((unsigned __int8)SpoilerSetting & 1) != 0 )
    {
LABEL_118:
      if ( v13 )
      {
        UserStatusFlagSetRequest__beginRequest(v13, (System_Int32_array *)v29, (System_Int32_array *)v42, 0);
        return 1;
      }
LABEL_121:
      sub_1C32E7C(SpoilerSetting);
    }
    if ( !v42 )
      goto LABEL_121;
    if ( v43 < *(_DWORD *)(v42 + 24) )
    {
      *(_DWORD *)(v42 + 4LL * v43 + 32) = 19;
      goto LABEL_118;
    }
LABEL_122:
    sub_1C32E84(SpoilerSetting);
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = OptionManager_TypeInfo;
    static_fields = OptionManager_TypeInfo->static_fields;
  }
  if ( static_fields->isModify )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = OptionManager_TypeInfo->static_fields;
    }
    static_fields->isModify = 0;
    UnityEngine_PlayerPrefs__Save(0);
    if ( *(_QWORD *)v7 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v7 + 64LL),
        *(_QWORD *)(*(_QWORD *)v7 + 40LL));
    return 1;
  }
  if ( *(_QWORD *)v7 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v7 + 64LL),
      *(_QWORD *)(*(_QWORD *)v7 + 40LL));
  return 0;
}


void OptionManager__SetAdvantageClassAuto(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_4C3723E & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3723E = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetAdvantageClassAuto((const MethodInfo *)v3) != flag )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_ADVANTAGE_CLASS_AUTO, flag, 0);
  }
}


void OptionManager__SetAutoOpenAutoOrganizationDialog(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C37252 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37252 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetAutoOpenAutoOrganizationDialog((const MethodInfo *)v3) != flag )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_AUTO_OPEN_AUTO_ORGANIZATION_DIALOG, flag, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetAutoSelectParty(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C37249 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37249 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetAutoSelectParty((const MethodInfo *)v3) != flag )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_AUTO_SELECT_PARTY, flag, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetBattleFpsHighOrNot(bool value, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C3724D & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3724D = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__IsBattleFpsHigh((const MethodInfo *)v3) != value )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_BATTLE_FPS_SETTING, value, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetBgmVolume(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4C37213 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37213 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  if ( (v3->static_fields->soundMask & 4) == 0 )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( OptionManager__GetBgmVolume((const MethodInfo *)v3) != v )
    {
      v4 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v4 = OptionManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_BGM_VOLUME, v, 0);
      OptionManager_TypeInfo->static_fields->isModify = 1;
      OptionManager__SoundRecover(v5);
    }
  }
}


void OptionManager__SetBoostItemUseConfirm(bool f, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C3722F & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3722F = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetBoostItemUseConfirm((const MethodInfo *)v3) != f )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_BOOST_ITEM_CONFIRM, f, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetFriendCostume(bool f, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int v5; // w9
  OptionManager_c *v6; // x0

  if ( (byte_4C37232 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37232 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetFriendCostume((const MethodInfo *)v3) != f )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_1C32E7C(0);
    if ( f )
      v5 = 512;
    else
      v5 = 0;
    SelfUserGame->fields.flag = SelfUserGame->fields.flag & 0xFFFFFDFF | v5;
    v6 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    *(_WORD *)v6->static_fields = 257;
  }
}


void OptionManager__SetFriendImageLimitCount(bool f, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int v6; // w9
  OptionManager_c *v7; // x0

  if ( (byte_4C37231 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37231 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetFriendImageLimitCount((const MethodInfo *)v3) != f )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    v4->static_fields->isFriendImageLimitCount = f;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_1C32E7C(0);
    if ( f )
      v6 = 0x100000;
    else
      v6 = 0;
    SelfUserGame->fields.flag = SelfUserGame->fields.flag & 0xFFEFFFFF | v6;
    v7 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    *(_WORD *)v7->static_fields = 257;
  }
}


void OptionManager__SetLocalNotiffication(bool f, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C3722B & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3722B = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetLocalNotiffication((const MethodInfo *)v3) != f )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_LOCAL_NOTIFFICATION, f, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetMessageDisp(bool b, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C37236 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37236 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetMessageDisp((const MethodInfo *)v3) != b )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_MESSAGE_DISP, b, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetNotPlayOpeningMovie(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C37244 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37244 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetNotPlayOpeningMovie((const MethodInfo *)v3) != flag )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_NOT_PLAY_OPENING_MOVIE, flag, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetNotiffication(bool f, bool forceSend, const MethodInfo *method)
{
  _BOOL4 v4; // w19
  OptionManager_c *v5; // x0
  OptionManager_c *v6; // x0
  OptionManager_c *v7; // x0
  Il2CppObject *Instance; // x20
  Il2CppObject *v9; // x0

  v4 = f;
  if ( (byte_4C37229 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    byte_4C37229 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( ((OptionManager__GetNotiffication((const MethodInfo *)v5) ^ v4) & 1) != 0 || forceSend )
  {
    v6 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_NOTIFFICATION, v4, 0);
    v7 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v7 = OptionManager_TypeInfo;
    }
    v7->static_fields->isModify = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    {
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
      if ( !v9 )
        sub_1C32E7C(0);
      AvalonNotificationManager__SetRemotePushState((AvalonNotificationManager_o *)v9, v4, 0);
    }
  }
}


void OptionManager__SetPreBattleFormationSetting(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C3724F & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3724F = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetPreBattleFormationSetting((const MethodInfo *)v3) != flag )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_PREBATTLEFORMATION, flag, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetRaidNotiffication(bool f, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C3722D & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3722D = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetRaidNotiffication((const MethodInfo *)v3) != f )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_RAID_NOTIFFICATION, f, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetRandomLimitCountFriend(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int v5; // w9
  OptionManager_c *v6; // x0

  if ( (byte_4C37240 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37240 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v3) != flag )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_1C32E7C(0);
    if ( flag )
      v5 = 0x40000;
    else
      v5 = 0;
    SelfUserGame->fields.flag = SelfUserGame->fields.flag & 0xFFFBFFFF | v5;
    v6 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    *(_WORD *)v6->static_fields = 257;
  }
}


void OptionManager__SetRandomLimitCountOwn(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int v5; // w9
  OptionManager_c *v6; // x0

  if ( (byte_4C3723F & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3723F = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v3) != flag )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_1C32E7C(0);
    if ( flag )
      v5 = 0x20000;
    else
      v5 = 0;
    SelfUserGame->fields.flag = SelfUserGame->fields.flag & 0xFFFDFFFF | v5;
    v6 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    *(_WORD *)v6->static_fields = 257;
  }
}


void OptionManager__SetResolutionType(int32_t type, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_4C3724B & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&ResolutionManager_TypeInfo);
    byte_4C3724B = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetResolutionType((const MethodInfo *)v3) != type )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_RESOLUTION_TYPE, type, 0);
    OptionManager_TypeInfo->static_fields->isModify = 1;
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    ResolutionManager__SetResolutionType(type, 0);
  }
}


void OptionManager__SetScenarioAutoWaitTime(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_4C37226 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37226 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetScenarioAutoWaitTime((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SCENARIO_AUTO_WAIT_TIME, v, 0);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void OptionManager__SetScenarioScrollSpeed(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_4C37224 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37224 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetScenarioScrollSpeed((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SCENARIO_SCROLL_SPEED, v, 0);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void OptionManager__SetScenarioSpeed(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_4C3721D & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3721D = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetScenarioSpeed((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SCENARIO_SPEED, v, 0);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void OptionManager__SetScenarioTextSpeed(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_4C37222 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37222 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetScenarioTextSpeed((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SCENARIO_TEXT_SPEED, v, 0);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void OptionManager__SetScenarioTextWaitTimeSecond(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  if ( (byte_4C37220 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37220 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetScenarioTextWaitTimeSecond((const MethodInfo *)v3) != v )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SCENARIO_TEXT_WAIT, v, 0);
    OptionManager_TypeInfo->static_fields->isModify = 1;
  }
}


void OptionManager__SetSeVolume(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4C37216 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37216 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  if ( (v3->static_fields->soundMask & 1) == 0 )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( OptionManager__GetSeVolume((const MethodInfo *)v3) != v )
    {
      v4 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v4 = OptionManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_SE_VOLUME, v, 0);
      OptionManager_TypeInfo->static_fields->isModify = 1;
      OptionManager__SoundRecover(v5);
    }
  }
}


void OptionManager__SetSoundMask(int32_t mask, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  float SeVolume; // s0
  SoundManager_c *v6; // x0
  float v7; // s8
  const MethodInfo *v8; // x0
  OptionManager_c *v9; // x0
  float VoiceVolume; // s0
  SoundManager_c *v11; // x0
  float v12; // s8
  OptionManager_c *v13; // x0
  float BgmVolume; // s0
  SoundManager_c *v15; // x0
  float v16; // s8
  OptionManager_c *v17; // x0

  if ( (byte_4C37250 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C37250 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  if ( (mask & 1) == 0 && (v3->static_fields->soundMask & 1) != 0 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopSe(0.0, 0);
    v3 = OptionManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OptionManager_TypeInfo;
  }
  if ( (mask & 2) == 0 && (v3->static_fields->soundMask & 2) != 0 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0);
    v3 = OptionManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OptionManager_TypeInfo;
  }
  if ( (mask & 4) == 0 && (v3->static_fields->soundMask & 4) != 0 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0);
  }
  if ( mask )
  {
    if ( (mask & 1) != 0 )
    {
      v6 = SoundManager_TypeInfo;
      v7 = 0.0;
    }
    else
    {
      v4 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v4 = OptionManager_TypeInfo;
      }
      if ( (v4->static_fields->soundMask & 1) == 0 )
      {
LABEL_39:
        if ( (mask & 2) != 0 )
        {
          v11 = SoundManager_TypeInfo;
          v12 = 0.0;
        }
        else
        {
          v9 = OptionManager_TypeInfo;
          if ( !OptionManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            v9 = OptionManager_TypeInfo;
          }
          if ( (v9->static_fields->soundMask & 2) == 0 )
          {
LABEL_50:
            if ( (mask & 4) != 0 )
            {
              v15 = SoundManager_TypeInfo;
              v16 = 0.0;
            }
            else
            {
              v13 = OptionManager_TypeInfo;
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                v13 = OptionManager_TypeInfo;
              }
              if ( (v13->static_fields->soundMask & 4) == 0 )
                goto LABEL_61;
              if ( !v13->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v13);
              BgmVolume = OptionManager__GetBgmVolume((const MethodInfo *)v13);
              v15 = SoundManager_TypeInfo;
              v16 = BgmVolume;
            }
            if ( !v15->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v15);
            SoundManager__SetBgmMasterVolume(v16, 0);
LABEL_61:
            v17 = OptionManager_TypeInfo;
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              v17 = OptionManager_TypeInfo;
            }
            v17->static_fields->soundMask = mask;
            return;
          }
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          VoiceVolume = OptionManager__GetVoiceVolume((const MethodInfo *)v9);
          v11 = SoundManager_TypeInfo;
          v12 = VoiceVolume;
        }
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11);
        SoundManager__SetVoiceMasterVolume(v12, 0);
        goto LABEL_50;
      }
      if ( !v4->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v4);
      SeVolume = OptionManager__GetSeVolume((const MethodInfo *)v4);
      v6 = SoundManager_TypeInfo;
      v7 = SeVolume;
    }
    if ( !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    SoundManager__SetSeMasterVolume(v7, 0);
    goto LABEL_39;
  }
  v8 = (const MethodInfo *)OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = (const MethodInfo *)OptionManager_TypeInfo;
  }
  *((_DWORD *)v8[2].virtualMethodPointer + 58) = 0;
  OptionManager__SoundRecover(v8);
}


void OptionManager__SetSpoilerSetting(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int v5; // w9
  OptionManager_c *v6; // x0

  if ( (byte_4C37247 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37247 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetSpoilerSetting((const MethodInfo *)v3) != flag )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_1C32E7C(0);
    if ( flag )
      v5 = 0x80000;
    else
      v5 = 0;
    SelfUserGame->fields.flag = SelfUserGame->fields.flag & 0xFFF7FFFF | v5;
    v6 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    *(_WORD *)v6->static_fields = 257;
  }
}


void OptionManager__SetSvtRand(bool f, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C37234 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37234 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetSvtRand((const MethodInfo *)v3) != f )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_SVT_RAND, f, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetTDPlaySpeed(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int v5; // w9
  OptionManager_c *v6; // x0

  if ( (byte_4C3723C & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3723C = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetTDPlaySpeed((const MethodInfo *)v3) != flag )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_1C32E7C(0);
    if ( flag )
      v5 = 1024;
    else
      v5 = 0;
    SelfUserGame->fields.flag = SelfUserGame->fields.flag & 0xFFFFFBFF | v5;
    v6 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v6 = OptionManager_TypeInfo;
    }
    *(_WORD *)v6->static_fields = 257;
  }
}


void OptionManager__SetTouchSkipOpeningMovie(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C37246 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37246 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetTouchSkipOpeningMovie((const MethodInfo *)v3) != flag )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_TOUCH_SKIP_OPENING_MOVIE, flag, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
  }
}


void OptionManager__SetVoiceVolume(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4C37219 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37219 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  if ( (v3->static_fields->soundMask & 2) == 0 )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( OptionManager__GetVoiceVolume((const MethodInfo *)v3) != v )
    {
      v4 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v4 = OptionManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetFloat(v4->static_fields->SAVE_KEY_VOICE_VOLUME, v, 0);
      OptionManager_TypeInfo->static_fields->isModify = 1;
      OptionManager__SoundRecover(v5);
    }
  }
}


void OptionManager__SetVolumeMute(bool flag, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0

  if ( (byte_4C3721B & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C3721B = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetVolumeMute((const MethodInfo *)v3) != flag )
  {
    v4 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v4 = OptionManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_VOLUME_MUTE, flag, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v5 = OptionManager_TypeInfo;
    }
    v5->static_fields->isModify = 1;
    OptionManager__SoundRecover((const MethodInfo *)v5);
  }
}


void OptionManager__SoundRecover(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  _BOOL8 VolumeMute; // x0
  OptionManager_c *v3; // x8
  bool v4; // w19
  int32_t soundMask; // w9
  float v6; // s0
  float BgmVolume; // s8
  float SeVolume; // s8
  float VoiceVolume; // s8

  if ( (byte_4C3720C & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C3720C = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  VolumeMute = OptionManager__GetVolumeMute((const MethodInfo *)v1);
  v3 = OptionManager_TypeInfo;
  v4 = VolumeMute;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  soundMask = v3->static_fields->soundMask;
  if ( v4 )
  {
    if ( (soundMask & 4) == 0 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__SetBgmMasterVolume(0.0, 0);
      v3 = OptionManager_TypeInfo;
    }
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = OptionManager_TypeInfo;
    }
    if ( (v3->static_fields->soundMask & 1) == 0 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__SetSeMasterVolume(0.0, 0);
      v3 = OptionManager_TypeInfo;
    }
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = OptionManager_TypeInfo;
    }
    if ( (v3->static_fields->soundMask & 2) == 0 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v6 = 0.0;
LABEL_46:
      SoundManager__SetVoiceMasterVolume(v6, 0);
    }
  }
  else
  {
    if ( (soundMask & 4) == 0 )
    {
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      BgmVolume = OptionManager__GetBgmVolume((const MethodInfo *)VolumeMute);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__SetBgmMasterVolume(BgmVolume, 0);
      v3 = OptionManager_TypeInfo;
    }
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = OptionManager_TypeInfo;
    }
    if ( (v3->static_fields->soundMask & 1) == 0 )
    {
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      SeVolume = OptionManager__GetSeVolume((const MethodInfo *)VolumeMute);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__SetSeMasterVolume(SeVolume, 0);
      v3 = OptionManager_TypeInfo;
    }
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = OptionManager_TypeInfo;
    }
    if ( (v3->static_fields->soundMask & 2) == 0 )
    {
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      VoiceVolume = OptionManager__GetVoiceVolume((const MethodInfo *)VolumeMute);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v6 = VoiceVolume;
      goto LABEL_46;
    }
  }
}


void OptionManager__TestBgmVolume(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0

  if ( (byte_4C37211 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C37211 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  if ( (v3->static_fields->soundMask & 4) == 0 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__SetBgmMasterVolume(v, 0);
  }
}


void OptionManager__TestSeVolume(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0

  if ( (byte_4C37214 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C37214 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  if ( (v3->static_fields->soundMask & 1) == 0 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__SetSeMasterVolume(v, 0);
  }
}


void OptionManager__TestVoiceVolume(float v, const MethodInfo *method)
{
  OptionManager_c *v3; // x0

  if ( (byte_4C37217 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C37217 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  if ( (v3->static_fields->soundMask & 2) == 0 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__SetVoiceMasterVolume(v, 0);
  }
}


bool OptionManager__isSavedMemoryMode(const MethodInfo *method)
{
  OptionManager_c *v1; // x0
  int32_t systemMemorySize; // w0
  int v3; // w19
  struct OptionManager_StaticFields *static_fields; // x8
  int v5; // w9

  if ( (byte_4C37241 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37241 = 1;
  }
  v1 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v1 = OptionManager_TypeInfo;
  }
  if ( !v1->static_fields->memoryMode )
  {
    systemMemorySize = UnityEngine_SystemInfo__get_systemMemorySize(0);
    if ( systemMemorySize <= 2399 )
    {
      v1 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v1 = OptionManager_TypeInfo;
      }
      static_fields = v1->static_fields;
      v5 = 1;
    }
    else
    {
      v3 = systemMemorySize;
      v1 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        v1 = OptionManager_TypeInfo;
      }
      static_fields = v1->static_fields;
      if ( v3 <= 4399 )
        v5 = 2;
      else
        v5 = 3;
    }
    static_fields->memoryMode = v5;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = OptionManager_TypeInfo;
  }
  return v1->static_fields->memoryMode == 1;
}


void OptionManager___c__DisplayClass45_0___ctor(OptionManager___c__DisplayClass45_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OptionManager___c__DisplayClass45_0___SaveData_b__0(
        OptionManager___c__DisplayClass45_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  OptionManager_c *v4; // x0
  bool FriendImageLimitCount; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4C37254 & 1) == 0 )
  {
    sub_1C32C20(&FollowerListRequest_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C37254 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  *(_WORD *)v4->static_fields = 0;
  FriendImageLimitCount = OptionManager__GetFriendImageLimitCount((const MethodInfo *)v4);
  UnityEngine_PlayerPrefs__SetInt(
    OptionManager_TypeInfo->static_fields->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT,
    FriendImageLimitCount,
    0);
  UnityEngine_PlayerPrefs__Save(0);
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
  FollowerListRequest__clearRefreshRate(0);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}