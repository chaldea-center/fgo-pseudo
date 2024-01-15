void __fastcall OptionManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  OptionManager_c *v31; // x8
  struct OptionManager_StaticFields *static_fields; // x0
  System_Int32_array **v33; // x1
  struct OptionManager_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct OptionManager_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct OptionManager_StaticFields *v50; // x0
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct OptionManager_StaticFields *v58; // x0
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct OptionManager_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct OptionManager_StaticFields *v74; // x0
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct OptionManager_StaticFields *v82; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct OptionManager_StaticFields *v90; // x0
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct OptionManager_StaticFields *v98; // x0
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  struct OptionManager_StaticFields *v106; // x0
  System_Int32_array **v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct OptionManager_StaticFields *v114; // x0
  System_Int32_array **v115; // x1
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  struct OptionManager_StaticFields *v122; // x0
  System_Int32_array **v123; // x1
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  struct OptionManager_StaticFields *v130; // x0
  System_Int32_array **v131; // x1
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct OptionManager_StaticFields *v138; // x0
  System_Int32_array **v139; // x1
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  struct OptionManager_StaticFields *v146; // x0
  System_Int32_array **v147; // x1
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  struct OptionManager_StaticFields *v154; // x0
  System_Int32_array **v155; // x1
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  struct OptionManager_StaticFields *v162; // x0
  System_Int32_array **v163; // x1
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  struct OptionManager_StaticFields *v170; // x0
  System_Int32_array **v171; // x1
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  struct OptionManager_StaticFields *v178; // x0
  System_Int32_array **v179; // x1
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  struct OptionManager_StaticFields *v186; // x0
  System_Int32_array **v187; // x1
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  struct OptionManager_StaticFields *v194; // x0
  System_Int32_array **v195; // x1
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  struct OptionManager_StaticFields *v202; // x0
  System_Int32_array **v203; // x1
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7

  if ( (byte_40F7FAA & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_10094/*"OptionMessageDisp"*/, v8);
    sub_B16FFC(&StringLiteral_10096/*"OptionNotiffication"*/, v9);
    sub_B16FFC(&StringLiteral_10107/*"OptionVoiceVolume"*/, v10);
    sub_B16FFC(&StringLiteral_10091/*"OptionFriendCostume"*/, v11);
    sub_B16FFC(&StringLiteral_10093/*"OptionLocalNotiffication"*/, v12);
    sub_B16FFC(&StringLiteral_10090/*"OptionBoostItemConfirm"*/, v13);
    sub_B16FFC(&StringLiteral_10101/*"OptionScenarioSpeed"*/, v14);
    sub_B16FFC(&StringLiteral_10098/*"OptionRaidNotiffication"*/, v15);
    sub_B16FFC(&StringLiteral_10104/*"OptionSeVolume"*/, v16);
    sub_B16FFC(&StringLiteral_10102/*"OptionScenarioText"*/, v17);
    sub_B16FFC(&StringLiteral_16207/*"adjustVolume"*/, v18);
    sub_B16FFC(&StringLiteral_10095/*"OptionNotPlayOpeningMovie"*/, v19);
    sub_B16FFC(&StringLiteral_10089/*"OptionBgmVolume"*/, v20);
    sub_B16FFC(&StringLiteral_10088/*"OptionBattle20220729"*/, v21);
    sub_B16FFC(&StringLiteral_10092/*"OptionFriendImageLimitCount"*/, v22);
    sub_B16FFC(&StringLiteral_10108/*"OptionVolumeMute"*/, v23);
    sub_B16FFC(&StringLiteral_10103/*"OptionScenarioTextSpeed"*/, v24);
    sub_B16FFC(&StringLiteral_10105/*"OptionSelectAdvantageClassAuto"*/, v25);
    sub_B16FFC(&StringLiteral_10099/*"OptionResolutionType"*/, v26);
    sub_B16FFC(&StringLiteral_10097/*"OptionPreBattleFormation"*/, v27);
    sub_B16FFC(&StringLiteral_10100/*"OptionScenarioScrollSpeed"*/, v28);
    sub_B16FFC(&StringLiteral_10087/*"OptionAutoSelectParty"*/, v29);
    sub_B16FFC(&StringLiteral_10106/*"OptionSvtRand"*/, v30);
    byte_40F7FAA = 1;
  }
  OptionManager_TypeInfo->static_fields->isModify = 0;
  OptionManager_TypeInfo->static_fields->isServerModify = 0;
  OptionManager_TypeInfo->static_fields->DEF_VOL = 0.7;
  v31 = OptionManager_TypeInfo;
  OptionManager_TypeInfo->static_fields->OLD_DEF_BGM_VOL = 4.0;
  v31->static_fields->OLD_DEF_SE_VOL = 9.0;
  v31->static_fields->OLD_DEF_VOICE_VOL = 10.0;
  v31->static_fields->DEF_MUTE = 0;
  v31->static_fields->KIND_COUNT_SAVE_SERVER = 6;
  static_fields = v31->static_fields;
  v33 = (System_Int32_array **)StringLiteral_10089/*"OptionBgmVolume"*/;
  static_fields->SAVE_KEY_BGM_VOLUME = (struct System_String_o *)StringLiteral_10089/*"OptionBgmVolume"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->SAVE_KEY_BGM_VOLUME, v33, v2, v3, v4, v5, v6, v7);
  v34 = OptionManager_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_10104/*"OptionSeVolume"*/;
  v34->SAVE_KEY_SE_VOLUME = (struct System_String_o *)StringLiteral_10104/*"OptionSeVolume"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v34->SAVE_KEY_SE_VOLUME, v35, v36, v37, v38, v39, v40, v41);
  v42 = OptionManager_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_10107/*"OptionVoiceVolume"*/;
  v42->SAVE_KEY_VOICE_VOLUME = (struct System_String_o *)StringLiteral_10107/*"OptionVoiceVolume"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v42->SAVE_KEY_VOICE_VOLUME, v43, v44, v45, v46, v47, v48, v49);
  v50 = OptionManager_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_16207/*"adjustVolume"*/;
  v50->SAVE_KEY_ADJUST_VOLUME = (struct System_String_o *)StringLiteral_16207/*"adjustVolume"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v50->SAVE_KEY_ADJUST_VOLUME, v51, v52, v53, v54, v55, v56, v57);
  v58 = OptionManager_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_10101/*"OptionScenarioSpeed"*/;
  v58->SAVE_KEY_SCENARIO_SPEED = (struct System_String_o *)StringLiteral_10101/*"OptionScenarioSpeed"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v58->SAVE_KEY_SCENARIO_SPEED, v59, v60, v61, v62, v63, v64, v65);
  v66 = OptionManager_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_10102/*"OptionScenarioText"*/;
  v66->SAVE_KEY_SCENARIO_TEXT_WAIT = (struct System_String_o *)StringLiteral_10102/*"OptionScenarioText"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v66->SAVE_KEY_SCENARIO_TEXT_WAIT, v67, v68, v69, v70, v71, v72, v73);
  v74 = OptionManager_TypeInfo->static_fields;
  v75 = (System_Int32_array **)StringLiteral_10103/*"OptionScenarioTextSpeed"*/;
  v74->SAVE_KEY_SCENARIO_TEXT_SPEED = (struct System_String_o *)StringLiteral_10103/*"OptionScenarioTextSpeed"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v74->SAVE_KEY_SCENARIO_TEXT_SPEED, v75, v76, v77, v78, v79, v80, v81);
  v82 = OptionManager_TypeInfo->static_fields;
  v83 = (System_Int32_array **)StringLiteral_10100/*"OptionScenarioScrollSpeed"*/;
  v82->SAVE_KEY_SCENARIO_SCROLL_SPEED = (struct System_String_o *)StringLiteral_10100/*"OptionScenarioScrollSpeed"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v82->SAVE_KEY_SCENARIO_SCROLL_SPEED, v83, v84, v85, v86, v87, v88, v89);
  v90 = OptionManager_TypeInfo->static_fields;
  v91 = (System_Int32_array **)StringLiteral_10096/*"OptionNotiffication"*/;
  v90->SAVE_KEY_NOTIFFICATION = (struct System_String_o *)StringLiteral_10096/*"OptionNotiffication"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v90->SAVE_KEY_NOTIFFICATION, v91, v92, v93, v94, v95, v96, v97);
  v98 = OptionManager_TypeInfo->static_fields;
  v99 = (System_Int32_array **)StringLiteral_10093/*"OptionLocalNotiffication"*/;
  v98->SAVE_KEY_LOCAL_NOTIFFICATION = (struct System_String_o *)StringLiteral_10093/*"OptionLocalNotiffication"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v98->SAVE_KEY_LOCAL_NOTIFFICATION,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v106 = OptionManager_TypeInfo->static_fields;
  v107 = (System_Int32_array **)StringLiteral_10098/*"OptionRaidNotiffication"*/;
  v106->SAVE_KEY_RAID_NOTIFFICATION = (struct System_String_o *)StringLiteral_10098/*"OptionRaidNotiffication"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v106->SAVE_KEY_RAID_NOTIFFICATION,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v114 = OptionManager_TypeInfo->static_fields;
  v115 = (System_Int32_array **)StringLiteral_10090/*"OptionBoostItemConfirm"*/;
  v114->SAVE_KEY_BOOST_ITEM_CONFIRM = (struct System_String_o *)StringLiteral_10090/*"OptionBoostItemConfirm"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v114->SAVE_KEY_BOOST_ITEM_CONFIRM,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v122 = OptionManager_TypeInfo->static_fields;
  v123 = (System_Int32_array **)StringLiteral_10092/*"OptionFriendImageLimitCount"*/;
  v122->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT = (struct System_String_o *)StringLiteral_10092/*"OptionFriendImageLimitCount"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v122->SAVE_KEY_FREND_IMAGE_LIMIT_COUNT,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  v130 = OptionManager_TypeInfo->static_fields;
  v131 = (System_Int32_array **)StringLiteral_10091/*"OptionFriendCostume"*/;
  v130->SAVE_KEY_FREND_COSTUME = (struct System_String_o *)StringLiteral_10091/*"OptionFriendCostume"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v130->SAVE_KEY_FREND_COSTUME, v131, v132, v133, v134, v135, v136, v137);
  v138 = OptionManager_TypeInfo->static_fields;
  v139 = (System_Int32_array **)StringLiteral_10106/*"OptionSvtRand"*/;
  v138->SAVE_KEY_SVT_RAND = (struct System_String_o *)StringLiteral_10106/*"OptionSvtRand"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v138->SAVE_KEY_SVT_RAND, v139, v140, v141, v142, v143, v144, v145);
  v146 = OptionManager_TypeInfo->static_fields;
  v147 = (System_Int32_array **)StringLiteral_10094/*"OptionMessageDisp"*/;
  v146->SAVE_KEY_MESSAGE_DISP = (struct System_String_o *)StringLiteral_10094/*"OptionMessageDisp"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v146->SAVE_KEY_MESSAGE_DISP, v147, v148, v149, v150, v151, v152, v153);
  v154 = OptionManager_TypeInfo->static_fields;
  v155 = (System_Int32_array **)StringLiteral_10108/*"OptionVolumeMute"*/;
  v154->SAVE_KEY_VOLUME_MUTE = (struct System_String_o *)StringLiteral_10108/*"OptionVolumeMute"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v154->SAVE_KEY_VOLUME_MUTE, v155, v156, v157, v158, v159, v160, v161);
  v162 = OptionManager_TypeInfo->static_fields;
  v163 = (System_Int32_array **)StringLiteral_10105/*"OptionSelectAdvantageClassAuto"*/;
  v162->SAVE_KEY_ADVANTAGE_CLASS_AUTO = (struct System_String_o *)StringLiteral_10105/*"OptionSelectAdvantageClassAuto"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v162->SAVE_KEY_ADVANTAGE_CLASS_AUTO,
    v163,
    v164,
    v165,
    v166,
    v167,
    v168,
    v169);
  v170 = OptionManager_TypeInfo->static_fields;
  v171 = (System_Int32_array **)StringLiteral_10095/*"OptionNotPlayOpeningMovie"*/;
  v170->SAVE_KEY_NOT_PLAY_OPENING_MOVIE = (struct System_String_o *)StringLiteral_10095/*"OptionNotPlayOpeningMovie"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v170->SAVE_KEY_NOT_PLAY_OPENING_MOVIE,
    v171,
    v172,
    v173,
    v174,
    v175,
    v176,
    v177);
  v178 = OptionManager_TypeInfo->static_fields;
  v179 = (System_Int32_array **)StringLiteral_10087/*"OptionAutoSelectParty"*/;
  v178->SAVE_KEY_AUTO_SELECT_PARTY = (struct System_String_o *)StringLiteral_10087/*"OptionAutoSelectParty"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v178->SAVE_KEY_AUTO_SELECT_PARTY,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  v186 = OptionManager_TypeInfo->static_fields;
  v187 = (System_Int32_array **)StringLiteral_10099/*"OptionResolutionType"*/;
  v186->SAVE_KEY_RESOLUTION_TYPE = (struct System_String_o *)StringLiteral_10099/*"OptionResolutionType"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v186->SAVE_KEY_RESOLUTION_TYPE, v187, v188, v189, v190, v191, v192, v193);
  v194 = OptionManager_TypeInfo->static_fields;
  v195 = (System_Int32_array **)StringLiteral_10097/*"OptionPreBattleFormation"*/;
  v194->SAVE_KEY_PREBATTLEFORMATION = (struct System_String_o *)StringLiteral_10097/*"OptionPreBattleFormation"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v194->SAVE_KEY_PREBATTLEFORMATION,
    v195,
    v196,
    v197,
    v198,
    v199,
    v200,
    v201);
  v202 = OptionManager_TypeInfo->static_fields;
  v203 = (System_Int32_array **)StringLiteral_10088/*"OptionBattle20220729"*/;
  v202->SAVE_KEY_BATTLE_FPS_SETTING = (struct System_String_o *)StringLiteral_10088/*"OptionBattle20220729"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v202->SAVE_KEY_BATTLE_FPS_SETTING,
    v203,
    v204,
    v205,
    v206,
    v207,
    v208,
    v209);
}


void __fastcall OptionManager___ctor(OptionManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F7FA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_OptionManager___ctor__, method);
    byte_40F7FA9 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_OptionManager___ctor__);
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

  if ( (byte_40F7F6E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F6E = 1;
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

  if ( (byte_40F7F6D & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F6D = 1;
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

  if ( (byte_40F7F67 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F67 = 1;
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

  if ( (byte_40F7F66 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F66 = 1;
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

  if ( (byte_40F7F68 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F68 = 1;
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

  if ( (byte_40F7F99 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F99 = 1;
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

  if ( (byte_40F7FA1 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7FA1 = 1;
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

  if ( (byte_40F7F71 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F71 = 1;
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

  if ( (byte_40F7F8A & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F8A = 1;
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

  if ( (byte_40F7F94 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F94 = 1;
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

  if ( (byte_40F7F97 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    byte_40F7F97 = 1;
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

  if ( (byte_40F7F95 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    byte_40F7F95 = 1;
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

  if ( (byte_40F7F96 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    byte_40F7F96 = 1;
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

  if ( (byte_40F7F7D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    byte_40F7F7D = 1;
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

  if ( (byte_40F7F93 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F93 = 1;
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
    sub_B170D4();
  return (BYTE1(SelfUserGame->fields.flag) >> 1) & 1;
}


bool __fastcall OptionManager__GetFriendImageLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  UserGameEntity_o *SelfUserGame; // x0
  OptionManager_c *v3; // x0

  if ( (byte_40F7F8C & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F8C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B170D4();
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

  if ( (byte_40F7F86 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F86 = 1;
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

  if ( (byte_40F7F91 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F91 = 1;
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

  if ( (byte_40F7F9E & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F9E = 1;
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

  if ( (byte_40F7F84 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F84 = 1;
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

  if ( (byte_40F7FA7 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7FA7 = 1;
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

  if ( (byte_40F7F88 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F88 = 1;
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
    sub_B170D4();
  return (BYTE2(SelfUserGame->fields.flag) >> 2) & 1;
}


bool __fastcall OptionManager__GetRandomLimitCountOwn(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B170D4();
  return (BYTE2(SelfUserGame->fields.flag) >> 1) & 1;
}


int32_t __fastcall OptionManager__GetResolutionType(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_40F7FA3 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7FA3 = 1;
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

  if ( (byte_40F7F82 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F82 = 1;
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

  if ( (byte_40F7F7B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F7B = 1;
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

  if ( (byte_40F7F80 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F80 = 1;
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

  if ( (byte_40F7F7E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F7E = 1;
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

  if ( (byte_40F7F74 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F74 = 1;
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
    sub_B170D4();
  return (BYTE2(SelfUserGame->fields.flag) >> 3) & 1;
}


bool __fastcall OptionManager__GetSvtRand(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_40F7F8F & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F8F = 1;
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
    sub_B170D4();
  return (BYTE1(SelfUserGame->fields.flag) >> 2) & 1;
}


float __fastcall OptionManager__GetVoiceVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  OptionManager_c *v2; // x0

  if ( (byte_40F7F77 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F77 = 1;
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

  if ( (byte_40F7F79 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F79 = 1;
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

  if ( (byte_40F7F69 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F69 = 1;
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

  if ( (byte_40F7FA5 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7FA5 = 1;
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

  if ( (byte_40F7F6A & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F6A = 1;
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

  if ( (byte_40F7F6C & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    sub_B16FFC(&ResolutionManager_TypeInfo, v2);
    byte_40F7F6C = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o **v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  OptionManager_c *v24; // x0
  struct OptionManager_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *v26; // x19
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  UserStatusFlagSetRequest_o *v28; // x19
  _BOOL8 FriendImageLimitCount; // x0
  int v30; // w20
  bool FriendCostume; // w8
  OptionManager_c *v32; // x0
  int v33; // w10
  _BOOL8 TDPlaySpeed; // x0
  int v35; // w20
  _BOOL8 RandomLimitCountOwn; // x0
  int v37; // w20
  _BOOL8 RandomLimitCountFriend; // x0
  int v39; // w20
  __int64 v40; // x2
  unsigned int v41; // w21
  const MethodInfo *v42; // x0
  System_Int32_array *v43; // x20
  _BOOL8 SpoilerSetting; // x0
  __int64 v45; // x1
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
  OptionManager_c *v56; // x0
  int32_t KIND_COUNT_SAVE_SERVER; // w8
  __int64 v58; // x21
  unsigned int v59; // w23
  OptionManager_c *v60; // x0
  __int64 v61; // x8
  OptionManager_c *v62; // x0
  __int64 v63; // x8
  OptionManager_c *v64; // x0
  __int64 v65; // x8
  OptionManager_c *v66; // x0
  __int64 v67; // x8
  OptionManager_c *v68; // x0
  System_Action_o *v69; // x0

  if ( (byte_40F7F6F & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&OptionManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_OptionManager___c__DisplayClass42_0__SaveData_b__0__, v10);
    sub_B16FFC(&OptionManager___c__DisplayClass42_0_TypeInfo, v11);
    byte_40F7F6F = 1;
  }
  v12 = sub_B170CC(OptionManager___c__DisplayClass42_0_TypeInfo, method, v2, v3, v4);
  OptionManager___c__DisplayClass42_0___ctor((OptionManager___c__DisplayClass42_0_o *)v12, 0LL);
  if ( !v12 )
LABEL_143:
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = callback;
  v19 = (System_Action_o **)(v12 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
  v24 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v24 = OptionManager_TypeInfo;
  }
  static_fields = v24->static_fields;
  if ( static_fields->isServerModify )
  {
    v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v20,
                                                   v21,
                                                   v22,
                                                   v23);
    NetworkManager_ResultCallbackFunc___ctor(
      v26,
      (Il2CppObject *)v12,
      Method_OptionManager___c__DisplayClass42_0__SaveData_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v26,
                                          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    v28 = (UserStatusFlagSetRequest_o *)Request_WarBoardWallAttackRequest;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendImageLimitCount = OptionManager__GetFriendImageLimitCount((const MethodInfo *)Request_WarBoardWallAttackRequest);
    v30 = FriendImageLimitCount;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendCostume = OptionManager__GetFriendCostume((const MethodInfo *)FriendImageLimitCount);
    v32 = OptionManager_TypeInfo;
    if ( v30 )
      v33 = 2;
    else
      v33 = 1;
    if ( FriendCostume )
      v30 = v33;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    TDPlaySpeed = OptionManager__GetTDPlaySpeed((const MethodInfo *)v32);
    v35 = v30 + TDPlaySpeed;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn((const MethodInfo *)TDPlaySpeed);
    v37 = v35 + RandomLimitCountOwn;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend((const MethodInfo *)RandomLimitCountOwn);
    v39 = v37 + RandomLimitCountFriend;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v41 = v39 + OptionManager__GetSpoilerSetting((const MethodInfo *)RandomLimitCountFriend);
    if ( v41 )
    {
      v42 = (const MethodInfo *)sub_B17014(int___TypeInfo, v41, v40);
      v43 = (System_Int32_array *)v42;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = OptionManager__GetFriendImageLimitCount(v42);
      if ( SpoilerSetting )
      {
        if ( !v43 )
          goto LABEL_143;
        if ( !v43->max_length )
          goto LABEL_144;
        v46 = 1;
        v43->m_Items[1] = 20;
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
      SpoilerSetting = OptionManager__GetFriendCostume((const MethodInfo *)v47);
      if ( SpoilerSetting )
      {
        if ( !v43 )
          goto LABEL_143;
        if ( v46 >= v43->max_length )
          goto LABEL_144;
        v48 = (char *)v43 + 4 * v46++;
        *((_DWORD *)v48 + 8) = 9;
      }
      v49 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = OptionManager__GetTDPlaySpeed((const MethodInfo *)v49);
      if ( SpoilerSetting )
      {
        if ( !v43 )
          goto LABEL_143;
        if ( v46 >= v43->max_length )
          goto LABEL_144;
        v50 = (char *)v43 + 4 * v46++;
        *((_DWORD *)v50 + 8) = 10;
      }
      v51 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v51);
      if ( SpoilerSetting )
      {
        if ( !v43 )
          goto LABEL_143;
        if ( v46 >= v43->max_length )
          goto LABEL_144;
        v52 = (char *)v43 + 4 * v46++;
        *((_DWORD *)v52 + 8) = 17;
      }
      v53 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v53);
      if ( SpoilerSetting )
      {
        if ( !v43 )
          goto LABEL_143;
        if ( v46 >= v43->max_length )
          goto LABEL_144;
        v54 = (char *)v43 + 4 * v46++;
        *((_DWORD *)v54 + 8) = 18;
      }
      v55 = OptionManager_TypeInfo;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = OptionManager__GetSpoilerSetting((const MethodInfo *)v55);
      if ( SpoilerSetting )
      {
        if ( !v43 )
          goto LABEL_143;
        if ( v46 >= v43->max_length )
          goto LABEL_144;
        v43->m_Items[v46 + 1] = 19;
      }
    }
    else
    {
      v43 = 0LL;
    }
    v56 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      v56 = OptionManager_TypeInfo;
    }
    KIND_COUNT_SAVE_SERVER = v56->static_fields->KIND_COUNT_SAVE_SERVER;
    if ( v41 == KIND_COUNT_SAVE_SERVER )
    {
      v58 = 0LL;
      if ( !v28 )
        goto LABEL_143;
      goto LABEL_138;
    }
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      KIND_COUNT_SAVE_SERVER = OptionManager_TypeInfo->static_fields->KIND_COUNT_SAVE_SERVER;
    }
    v58 = sub_B17014(int___TypeInfo, KIND_COUNT_SAVE_SERVER - v41, v40);
    SpoilerSetting = OptionManager__GetFriendImageLimitCount((const MethodInfo *)v58);
    if ( SpoilerSetting )
    {
      v59 = 0;
    }
    else
    {
      if ( !v58 )
        goto LABEL_143;
      if ( !*(_DWORD *)(v58 + 24) )
        goto LABEL_144;
      v59 = 1;
      *(_DWORD *)(v58 + 32) = 20;
    }
    v60 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = OptionManager__GetFriendCostume((const MethodInfo *)v60);
    if ( !SpoilerSetting )
    {
      if ( !v58 )
        goto LABEL_143;
      if ( v59 >= *(_DWORD *)(v58 + 24) )
        goto LABEL_144;
      v61 = v58 + 4LL * v59++;
      *(_DWORD *)(v61 + 32) = 9;
    }
    v62 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = OptionManager__GetTDPlaySpeed((const MethodInfo *)v62);
    if ( !SpoilerSetting )
    {
      if ( !v58 )
        goto LABEL_143;
      if ( v59 >= *(_DWORD *)(v58 + 24) )
        goto LABEL_144;
      v63 = v58 + 4LL * v59++;
      *(_DWORD *)(v63 + 32) = 10;
    }
    v64 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = OptionManager__GetRandomLimitCountOwn((const MethodInfo *)v64);
    if ( !SpoilerSetting )
    {
      if ( !v58 )
        goto LABEL_143;
      if ( v59 >= *(_DWORD *)(v58 + 24) )
        goto LABEL_144;
      v65 = v58 + 4LL * v59++;
      *(_DWORD *)(v65 + 32) = 17;
    }
    v66 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = OptionManager__GetRandomLimitCountFriend((const MethodInfo *)v66);
    if ( !SpoilerSetting )
    {
      if ( !v58 )
        goto LABEL_143;
      if ( v59 >= *(_DWORD *)(v58 + 24) )
        goto LABEL_144;
      v67 = v58 + 4LL * v59++;
      *(_DWORD *)(v67 + 32) = 18;
    }
    v68 = OptionManager_TypeInfo;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = OptionManager__GetSpoilerSetting((const MethodInfo *)v68);
    if ( SpoilerSetting )
    {
LABEL_137:
      if ( !v28 )
        goto LABEL_143;
LABEL_138:
      UserStatusFlagSetRequest__beginRequest(v28, v43, (System_Int32_array *)v58, 0LL);
LABEL_139:
      LOBYTE(v69) = 1;
      return (char)v69;
    }
    if ( !v58 )
      goto LABEL_143;
    if ( v59 < *(_DWORD *)(v58 + 24) )
    {
      *(_DWORD *)(v58 + 4LL * v59 + 32) = 19;
      goto LABEL_137;
    }
LABEL_144:
    sub_B17100(SpoilerSetting, v45, v40);
    sub_B170A0();
  }
  if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = OptionManager_TypeInfo;
    static_fields = OptionManager_TypeInfo->static_fields;
  }
  if ( static_fields->isModify )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = OptionManager_TypeInfo->static_fields;
    }
    static_fields->isModify = 0;
    UnityEngine_PlayerPrefs__Save(0LL);
    if ( *v19 )
      System_Action__Invoke(*v19, 0LL);
    goto LABEL_139;
  }
  v69 = *v19;
  if ( *v19 )
  {
    System_Action__Invoke(v69, 0LL);
    LOBYTE(v69) = 0;
  }
  return (char)v69;
}


void __fastcall OptionManager__SetAdvantageClassAuto(bool flag, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  OptionManager_c *v3; // x0
  OptionManager_c *v4; // x0

  v2 = flag;
  if ( (byte_40F7F9A & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F9A = 1;
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
  if ( (byte_40F7FA2 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7FA2 = 1;
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
  if ( (byte_40F7FA6 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7FA6 = 1;
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

  if ( (byte_40F7F72 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F72 = 1;
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
  if ( (byte_40F7F8B & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F8B = 1;
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
  if ( (byte_40F7F8E & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F8E = 1;
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
      sub_B170D4();
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
  if ( (byte_40F7F8D & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F8D = 1;
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
      sub_B170D4();
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
  if ( (byte_40F7F87 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F87 = 1;
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
  if ( (byte_40F7F92 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F92 = 1;
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
  if ( (byte_40F7F9F & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F9F = 1;
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
  if ( (byte_40F7F85 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, forceSend);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v6);
    byte_40F7F85 = 1;
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
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    {
      v11 = (AvalonNotificationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
      if ( !v11 )
        sub_B170D4();
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
  if ( (byte_40F7FA8 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7FA8 = 1;
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
  if ( (byte_40F7F89 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F89 = 1;
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
  if ( (byte_40F7F9C & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F9C = 1;
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
      sub_B170D4();
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
  if ( (byte_40F7F9B & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F9B = 1;
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
      sub_B170D4();
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

  if ( (byte_40F7FA4 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&ResolutionManager_TypeInfo, v3);
    byte_40F7FA4 = 1;
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

  if ( (byte_40F7F83 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F83 = 1;
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

  if ( (byte_40F7F7C & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F7C = 1;
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

  if ( (byte_40F7F81 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F81 = 1;
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

  if ( (byte_40F7F7F & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F7F = 1;
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

  if ( (byte_40F7F75 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F75 = 1;
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
  if ( (byte_40F7FA0 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7FA0 = 1;
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
      sub_B170D4();
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
  if ( (byte_40F7F90 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F90 = 1;
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
  if ( (byte_40F7F98 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F98 = 1;
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
      sub_B170D4();
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


void __fastcall OptionManager__SetVoiceVolume(float v, const MethodInfo *method)
{
  __int64 v2; // x1
  OptionManager_c *v4; // x0
  OptionManager_c *v5; // x0
  const MethodInfo *v6; // x0

  if ( (byte_40F7F78 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v2);
    byte_40F7F78 = 1;
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
  if ( (byte_40F7F7A & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F7F7A = 1;
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

  if ( (byte_40F7F6B & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    sub_B16FFC(&SoundManager_TypeInfo, v2);
    byte_40F7F6B = 1;
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

  if ( (byte_40F7F70 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, v2);
    byte_40F7F70 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetBgmMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestSeVolume(float v, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40F7F73 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, v2);
    byte_40F7F73 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__SetSeMasterVolume(v, 0LL);
}


void __fastcall OptionManager__TestVoiceVolume(float v, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40F7F76 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, v2);
    byte_40F7F76 = 1;
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

  if ( (byte_40F7F9D & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v1);
    byte_40F7F9D = 1;
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


void __fastcall OptionManager___c__DisplayClass42_0___ctor(
        OptionManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OptionManager___c__DisplayClass42_0___SaveData_b__0(
        OptionManager___c__DisplayClass42_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  OptionManager_c *v5; // x0
  bool FriendImageLimitCount; // w0
  System_Action_o *callback; // x0

  if ( (byte_40F8363 & 1) == 0 )
  {
    sub_B16FFC(&FollowerListRequest_TypeInfo, result);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    byte_40F8363 = 1;
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