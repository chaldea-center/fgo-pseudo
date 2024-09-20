void __fastcall QuestBoardListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  QuestBoardListViewItemDraw_c *v3; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v5; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v6; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v7; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v8; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v9; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v10; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v11; // x0
  int32_t v12; // w1
  int32_t v13; // w1
  struct QuestBoardListViewItemDraw_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  QuestBoardListViewItemDraw_c *v17; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v18; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v19; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v20; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v21; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v22; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v23; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v24; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v25; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v26; // x8
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  ServantStatusBattleListViewItem_o *p_COST_BG_QP; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  QuestBoardListViewItemDraw_c *v34; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v35; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v36; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v37; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v38; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v39; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v40; // x9
  int32_t v41; // w1
  ServantStatusBattleListViewItem_o *p_SHOHI_SP_NAME; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  ServantStatusBattleListViewItem_o *p_SHOHI_SP_NAME_WAR_BOARD; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  QuestBoardListViewItemDraw_c *v51; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v52; // x10
  UnityEngine_Vector3_c *v53; // x9
  struct UnityEngine_Vector3_StaticFields *v54; // x11
  float z; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v56; // x10
  struct UnityEngine_Vector3_StaticFields *v57; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v58; // x11
  float v59; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v60; // x11
  struct QuestBoardListViewItemDraw_StaticFields *v61; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v62; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v63; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v64; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v65; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v66; // x10
  struct UnityEngine_Vector3_StaticFields *v67; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v68; // x10
  float v69; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v70; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v71; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v72; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v73; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v74; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v75; // x9
  int32_t v76; // w1
  ServantStatusBattleListViewItem_o *p_EVENT_WAR_SPNAME_PREFIX; // x0
  int32_t v78; // w1
  ServantStatusBattleListViewItem_o *p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w1
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_SPNAME_PREFIX; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w1
  ServantStatusBattleListViewItem_o *p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  int32_t v90; // w1
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_ICON_SPNAME_PREFIX; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  int32_t v94; // w1
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_MASK_SPNAME_PREFIX; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  int32_t v98; // w1
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_AP_SPNAME_PREFIX; // x0
  int32_t v103; // w1
  int32_t v104; // w2
  int32_t v105; // w3
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_DAMAGE_RECODE_NAME; // x0
  int32_t v107; // w1
  int32_t v108; // w2
  int32_t v109; // w3
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_PREV_ICON_NAME; // x0
  int32_t v111; // w1
  int32_t v112; // w2
  int32_t v113; // w3
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x0
  int32_t v115; // w1
  int32_t v116; // w2
  int32_t v117; // w3
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_ICON_TEXTURE_PATH; // x0
  int32_t v119; // w1
  int32_t v120; // w2
  int32_t v121; // w3
  int32_t v122; // w1
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_ICON_TEXTURE_PREFIX; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  ServantStatusBattleListViewItem_o *p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x0
  int32_t v127; // w1
  int32_t v128; // w2
  int32_t v129; // w3
  struct QuestBoardListViewItemDraw_StaticFields *v130; // x8
  int32_t v131; // w1
  int32_t v132; // w2
  int32_t v133; // w3
  ServantStatusBattleListViewItem_o *p_BANNER_POINT_SPNAME_OFF; // x0
  int32_t v135; // w1
  int32_t v136; // w2
  int32_t v137; // w3
  struct QuestBoardListViewItemDraw_StaticFields *v138; // x8
  int32_t v139; // w1
  int32_t v140; // w2
  int32_t v141; // w3
  ServantStatusBattleListViewItem_o *p_QUEST_STORY_FACE_MASK_SPNAME; // x0
  int32_t v143; // w1
  int32_t v144; // w2
  int32_t v145; // w3
  ServantStatusBattleListViewItem_o *p_QUEST_MAIN_FACE_MASK_SPNAME; // x0
  int32_t v147; // w1
  int32_t v148; // w2
  int32_t v149; // w3
  ServantStatusBattleListViewItem_o *p_QUEST_EVENT_FACE_MASK_SPNAME; // x0
  int32_t v151; // w1
  int32_t v152; // w2
  int32_t v153; // w3
  __int64 v154; // x0
  __int64 v155; // x1
  int32_t v156; // w2
  int32_t v157; // w3
  __int64 v158; // x19
  int32_t v159; // w1
  int32_t v160; // w2
  int32_t v161; // w3
  int32_t v162; // w1
  ServantStatusBattleListViewItem_o *p_RP_SPNAME_FRAME; // x0
  int32_t v164; // w2
  int32_t v165; // w3
  int32_t v166; // w2
  int32_t v167; // w3
  __int64 v168; // x19
  int32_t v169; // w1
  int32_t v170; // w2
  int32_t v171; // w3
  int32_t v172; // w1
  ServantStatusBattleListViewItem_o *p_RP_SPNAME_POINT; // x0
  int32_t v174; // w2
  int32_t v175; // w3
  QuestBoardListViewItemDraw_c *v176; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v177; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v178; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v179; // x8
  int32_t v180; // w1
  int32_t v181; // w2
  int32_t v182; // w3
  int32_t v183; // w1
  ServantStatusBattleListViewItem_o *p_QBOARD_CAP_CLOSED; // x0
  int32_t v185; // w2
  int32_t v186; // w3
  int32_t v187; // w1
  ServantStatusBattleListViewItem_o *p_QBOARD_CAP_CLOSED_FORMAT; // x0
  int32_t v189; // w2
  int32_t v190; // w3
  int32_t v191; // w1
  ServantStatusBattleListViewItem_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  int32_t v193; // w2
  int32_t v194; // w3
  int32_t v195; // w1
  ServantStatusBattleListViewItem_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  int32_t v197; // w2
  int32_t v198; // w3
  int32_t v199; // w1
  ServantStatusBattleListViewItem_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  int32_t v201; // w2
  int32_t v202; // w3
  int32_t v203; // w1
  ServantStatusBattleListViewItem_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  int32_t v205; // w2
  int32_t v206; // w3
  int32_t v207; // w2
  int32_t v208; // w3
  __int64 v209; // x19
  int32_t v210; // w1
  int32_t v211; // w2
  int32_t v212; // w3
  int32_t v213; // w1
  int32_t v214; // w2
  int32_t v215; // w3
  int32_t v216; // w1
  int32_t v217; // w2
  int32_t v218; // w3
  int32_t v219; // w1
  int32_t v220; // w2
  int32_t v221; // w3
  int32_t v222; // w1
  int32_t v223; // w2
  int32_t v224; // w3
  int32_t v225; // w1
  int32_t v226; // w2
  int32_t v227; // w3
  int32_t v228; // w1
  ServantStatusBattleListViewItem_o *p_msQBoardL1Names; // x0
  int32_t v230; // w2
  int32_t v231; // w3
  int32_t v232; // w1
  ServantStatusBattleListViewItem_o *p_msQBoardL2Name_Story; // x0
  int32_t v234; // w2
  int32_t v235; // w3
  int32_t v236; // w1
  ServantStatusBattleListViewItem_o *p_msQBoardL2Name_Hero; // x0
  int32_t v238; // w2
  int32_t v239; // w3
  int32_t v240; // w2
  int32_t v241; // w3
  __int64 v242; // x19
  int32_t v243; // w1
  int32_t v244; // w2
  int32_t v245; // w3
  int32_t v246; // w1
  int32_t v247; // w2
  int32_t v248; // w3
  int32_t v249; // w1
  int32_t v250; // w2
  int32_t v251; // w3
  int32_t v252; // w1
  int32_t v253; // w2
  int32_t v254; // w3
  int32_t v255; // w1
  int32_t v256; // w2
  int32_t v257; // w3
  int32_t v258; // w1
  int32_t v259; // w2
  int32_t v260; // w3
  int32_t v261; // w1
  ServantStatusBattleListViewItem_o *p_msQBoardL3Names; // x0
  int32_t v263; // w2
  int32_t v264; // w3
  int32_t v265; // w2
  int32_t v266; // w3
  __int64 v267; // x19
  int32_t v268; // w1
  int32_t v269; // w2
  int32_t v270; // w3
  int32_t v271; // w1
  int32_t v272; // w2
  int32_t v273; // w3
  int32_t v274; // w1
  int32_t v275; // w2
  int32_t v276; // w3
  int32_t v277; // w1
  int32_t v278; // w2
  int32_t v279; // w3
  int32_t v280; // w1
  int32_t v281; // w2
  int32_t v282; // w3
  int32_t v283; // w1
  int32_t v284; // w2
  int32_t v285; // w3
  int32_t v286; // w1
  ServantStatusBattleListViewItem_o *p_msLabelMainSprNames; // x0
  int32_t v288; // w2
  int32_t v289; // w3
  int32_t v290; // w2
  int32_t v291; // w3
  __int64 v292; // x19
  int32_t v293; // w1
  int32_t v294; // w2
  int32_t v295; // w3
  int32_t v296; // w1
  int32_t v297; // w2
  int32_t v298; // w3
  int32_t v299; // w1
  int32_t v300; // w2
  int32_t v301; // w3
  int32_t v302; // w1
  int32_t v303; // w2
  int32_t v304; // w3
  int32_t v305; // w1
  int32_t v306; // w2
  int32_t v307; // w3
  int32_t v308; // w1
  int32_t v309; // w2
  int32_t v310; // w3
  int32_t v311; // w1
  int32_t v312; // w2
  int32_t v313; // w3
  int32_t v314; // w1
  ServantStatusBattleListViewItem_o *p_QuestBoardApSpNames; // x0
  int32_t v316; // w2
  int32_t v317; // w3
  int32_t v318; // w1
  ServantStatusBattleListViewItem_o *p_msPhaseSprName_ArrowOff; // x0
  int32_t v320; // w2
  int32_t v321; // w3
  int32_t v322; // w1
  ServantStatusBattleListViewItem_o *p_msPhaseSprName_ArrowOn; // x0
  int32_t v324; // w2
  int32_t v325; // w3
  int32_t v326; // w1
  ServantStatusBattleListViewItem_o *p_msPhaseSprName_ExArrowOff; // x0
  int32_t v328; // w2
  int32_t v329; // w3
  int32_t v330; // w1
  ServantStatusBattleListViewItem_o *p_msPhaseSprName_ExArrowOn; // x0
  int32_t v332; // w2
  int32_t v333; // w3
  int32_t v334; // w1
  ServantStatusBattleListViewItem_o *p_msPhaseSprName_LoopOff; // x0
  int32_t v336; // w2
  int32_t v337; // w3
  int32_t v338; // w1
  ServantStatusBattleListViewItem_o *p_msPhaseSprName_LoopOn; // x0
  int32_t v340; // w2
  int32_t v341; // w3
  int32_t v342; // w1
  ServantStatusBattleListViewItem_o *p_msPhaseSprName_LoopFirstOff; // x0
  int32_t v344; // w2
  int32_t v345; // w3
  int32_t v346; // w1
  ServantStatusBattleListViewItem_o *p_CHAPTER_SP_BASE_NAME; // x0
  int32_t v348; // w2
  int32_t v349; // w3
  int32_t v350; // w1
  ServantStatusBattleListViewItem_o *p_CHAPTER_SP_UNIT_NAME; // x0
  int32_t v352; // w2
  int32_t v353; // w3
  int32_t v354; // w1
  ServantStatusBattleListViewItem_o *p_PRE_BATTLE_ORGANIZATION; // x0
  int32_t v356; // w2
  int32_t v357; // w3

  if ( (byte_4A580CF & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_22697/*"quest_board_icon_"*/);
    sub_1B885B0(&StringLiteral_20172/*"icon_reward_step{0}"*/);
    sub_1B885B0(&StringLiteral_22708/*"questboard_cap_closed"*/);
    sub_1B885B0(&StringLiteral_20468/*"img_slider_on"*/);
    sub_1B885B0(&StringLiteral_20353/*"img_loop_off"*/);
    sub_1B885B0(&StringLiteral_20417/*"img_questboard_story01"*/);
    sub_1B885B0(&StringLiteral_22719/*"questboard_shohi_bg_01"*/);
    sub_1B885B0(&StringLiteral_22705/*"questboard_ap_free"*/);
    sub_1B885B0(&StringLiteral_22717/*"questboard_icon_cap{0:D2}"*/);
    sub_1B885B0(&StringLiteral_20421/*"img_questboard_story03mask"*/);
    sub_1B885B0(&StringLiteral_20400/*"img_quest_spend"*/);
    sub_1B885B0(&StringLiteral_20405/*"img_questarrow_off"*/);
    sub_1B885B0(&StringLiteral_17801/*"chaldea_category_{0}"*/);
    sub_1B885B0(&StringLiteral_20419/*"img_questboard_story02mask"*/);
    sub_1B885B0(&StringLiteral_20406/*"img_questarrow_on"*/);
    sub_1B885B0(&StringLiteral_20416/*"img_questboard_main_"*/);
    sub_1B885B0(&StringLiteral_20398/*"img_quest_pre_organization"*/);
    sub_1B885B0(&StringLiteral_20399/*"img_quest_save"*/);
    sub_1B885B0(&StringLiteral_19292/*"event_war_"*/);
    sub_1B885B0(&StringLiteral_22706/*"questboard_ap_main"*/);
    sub_1B885B0(&StringLiteral_20423/*"img_questboard_story05mask"*/);
    sub_1B885B0(&StringLiteral_22720/*"questboard_shohi_bg_02"*/);
    sub_1B885B0(&StringLiteral_20414/*"img_questboard_hero03"*/);
    sub_1B885B0(&StringLiteral_22711/*"questboard_cap_closed_special_3"*/);
    sub_1B885B0(&StringLiteral_20415/*"img_questboard_knockdown"*/);
    sub_1B885B0(&StringLiteral_22772/*"raid_point_old"*/);
    sub_1B885B0(&StringLiteral_22769/*"raid_point"*/);
    sub_1B885B0(&StringLiteral_22710/*"questboard_cap_closed_special_2"*/);
    sub_1B885B0(&StringLiteral_20413/*"img_questboard_hero02"*/);
    sub_1B885B0(&StringLiteral_20184/*"icon_spot_next"*/);
    sub_1B885B0(&StringLiteral_22696/*"quest_board_"*/);
    sub_1B885B0(&StringLiteral_22718/*"questboard_shohi_"*/);
    sub_1B885B0(&StringLiteral_22770/*"raid_point_frame"*/);
    sub_1B885B0(&StringLiteral_20411/*"img_questboard_free_"*/);
    sub_1B885B0(&StringLiteral_22771/*"raid_point_frame_old"*/);
    sub_1B885B0(&StringLiteral_20409/*"img_questboard_damage"*/);
    sub_1B885B0(&StringLiteral_22698/*"quest_board_mask_"*/);
    sub_1B885B0(&StringLiteral_6236/*"EventUI/QuestBoardIcon/"*/);
    sub_1B885B0(&StringLiteral_20410/*"img_questboard_event{0:D3}"*/);
    sub_1B885B0(&StringLiteral_20422/*"img_questboard_story04mask"*/);
    sub_1B885B0(&StringLiteral_20425/*"img_questloop_on"*/);
    sub_1B885B0(&StringLiteral_20424/*"img_questloop_off"*/);
    sub_1B885B0(&StringLiteral_20428/*"img_questtxt_free"*/);
    sub_1B885B0(&StringLiteral_22714/*"questboard_cap{0:D3}"*/);
    sub_1B885B0(&StringLiteral_20420/*"img_questboard_story03"*/);
    sub_1B885B0(&StringLiteral_20407/*"img_questboard_"*/);
    sub_1B885B0(&StringLiteral_20402/*"img_quest_unit_{0:D2}"*/);
    sub_1B885B0(&StringLiteral_22709/*"questboard_cap_closed_special"*/);
    sub_1B885B0(&StringLiteral_20427/*"img_questtxt_event"*/);
    sub_1B885B0(&StringLiteral_20412/*"img_questboard_hero01"*/);
    sub_1B885B0(&StringLiteral_20403/*"img_questarrow1_off"*/);
    sub_1B885B0(&StringLiteral_22707/*"questboard_ap_story"*/);
    sub_1B885B0(&StringLiteral_20467/*"img_slider_off"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_20401/*"img_quest_spend2"*/);
    sub_1B885B0(&StringLiteral_20397/*"img_quest_lasttime"*/);
    sub_1B885B0(&StringLiteral_20404/*"img_questarrow1_on"*/);
    sub_1B885B0(&StringLiteral_22712/*"questboard_cap_closed_special_{0}"*/);
    sub_1B885B0(&StringLiteral_20418/*"img_questboard_story02"*/);
    sub_1B885B0(&StringLiteral_22740/*"qyestboard_ap_free"*/);
    sub_1B885B0(&StringLiteral_20183/*"icon_spot_free"*/);
    sub_1B885B0(&StringLiteral_22704/*"questboard_ap_"*/);
    sub_1B885B0(&StringLiteral_22713/*"questboard_cap_closed_{0}"*/);
    byte_4A580CF = 1;
  }
  v3 = QuestBoardListViewItemDraw_TypeInfo;
  static_fields = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->POS_Y_ITVL_AREA = xmmword_BB5B90;
  *(_OWORD *)&static_fields->CLIP_W_AREA = xmmword_BB52B0;
  static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  *(_OWORD *)&static_fields->PHASE_EXTRA_MAX = xmmword_BB5BA0;
  *(_OWORD *)&static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = xmmword_BB4000;
  static_fields->CAMPAIGN_COST_COLOR.fields.a = 1.0;
  v3->static_fields->OVER_COST_COLOR = (struct UnityEngine_Color_o)xmmword_BB4290;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->NEW_POS_AREA.fields.x = 0x41D80000C3420000LL;
  v5->NEW_POS_AREA.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->NEW_POS_SHORTCUT.fields.x = 0x423C0000C3530000LL;
  v6->NEW_POS_SHORTCUT.fields.z = 0.0;
  v7 = v3->static_fields;
  *(_QWORD *)&v7->NEW_POS_QUEST.fields.x = 0x423C0000C3530000LL;
  v7->NEW_POS_QUEST.fields.z = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->NEW_POS_QUEST_NEXT.fields.x = 0x42640000C2D20000LL;
  v8->NEW_POS_QUEST_NEXT.fields.z = 0.0;
  v9 = v3->static_fields;
  *(_OWORD *)&v9->NEW_W_DEFAULT = xmmword_BB41B0;
  *(_QWORD *)&v9->CLEAR_POS_AREA.fields.x = 0xC2500000431B0000LL;
  v9->CLEAR_POS_AREA.fields.z = 0.0;
  v10 = v3->static_fields;
  *(_QWORD *)&v10->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v10->CLEAR_POS_QUEST.fields.z = 0.0;
  v11 = v3->static_fields;
  *(_OWORD *)&v11->NEXT_POS_X_AREA_L = xmmword_BB4010;
  v12 = StringLiteral_20184/*"icon_spot_next"*/;
  v11->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20184/*"icon_spot_next"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->NEXT_ICON_SPRITE_NAME, v12, v1, v2);
  v13 = StringLiteral_20183/*"icon_spot_free"*/;
  v14 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v14->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20183/*"icon_spot_free"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->FREE_ICON_SPRITE_NAME, v13, v15, v16);
  v17 = QuestBoardListViewItemDraw_TypeInfo;
  v18 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v18->PREV_POS_QUEST_PREV.fields.x = 0x42300000C35C0000LL;
  v18->PREV_POS_QUEST_PREV.fields.z = 0.0;
  v19 = v17->static_fields;
  *(_QWORD *)&v19->PREV_POS_QUEST_PREV_NEXT.fields.x = 0x426C0000C2DC0000LL;
  v19->PREV_POS_QUEST_PREV_NEXT.fields.z = 0.0;
  v20 = v17->static_fields;
  *(_QWORD *)&v20->PREV_POS_QUEST_INTERRUPT.fields.x = 0x42300000C3520000LL;
  v20->PREV_POS_QUEST_INTERRUPT.fields.z = 0.0;
  v21 = v17->static_fields;
  *(_QWORD *)&v21->PREV_POS_QUEST_INTERRUPT_NEXT.fields.x = 0x426C0000C2C80000LL;
  v21->PREV_POS_QUEST_INTERRUPT_NEXT.fields.z = 0.0;
  v22 = v17->static_fields;
  *(_QWORD *)&v22->LINE_ST_POS_AREA.fields.x = 0xC0A00000C3570000LL;
  v22->LINE_ST_POS_AREA.fields.z = 0.0;
  v23 = v17->static_fields;
  *(_QWORD *)&v23->LINE_ST_POS_SHORTCUT.fields.x = 0xC0A00000C3700000LL;
  v23->LINE_ST_POS_SHORTCUT.fields.z = 0.0;
  v24 = v17->static_fields;
  *(_QWORD *)&v24->COST_OBJ_POS.fields.x = 0xC1C00000C2F00000LL;
  v24->COST_OBJ_POS.fields.z = 0.0;
  v25 = v17->static_fields;
  *(_QWORD *)&v25->COST_OBJ_POS_WAR_BOARD.fields.x = 0xC1E00000C2F20000LL;
  v25->COST_OBJ_POS_WAR_BOARD.fields.z = 0.0;
  v26 = v17->static_fields;
  *(_OWORD *)&v26->COST_BG_WIDTH_SINGLE = xmmword_BB43A0;
  v26->COST_BG_WIDTH_DOUBLE_QP = 186;
  v27 = StringLiteral_22719/*"questboard_shohi_bg_01"*/;
  v26->COST_BG_ITEM = (struct System_String_o *)StringLiteral_22719/*"questboard_shohi_bg_01"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->COST_BG_ITEM, v27, v28, v29);
  v30 = StringLiteral_22720/*"questboard_shohi_bg_02"*/;
  p_COST_BG_QP = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22720/*"questboard_shohi_bg_02"*/;
  sub_1B88554(p_COST_BG_QP, v30, v32, v33);
  v34 = QuestBoardListViewItemDraw_TypeInfo;
  v35 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v35->COST_1_ICON_AP_POS.fields.x = 1098907648LL;
  v35->COST_1_ICON_AP_POS.fields.z = 0.0;
  v36 = v34->static_fields;
  *(_QWORD *)&v36->COST_1_ICON_AP_POS_WAR_BOARD.fields.x = 1099956224LL;
  v36->COST_1_ICON_AP_POS_WAR_BOARD.fields.z = 0.0;
  v37 = v34->static_fields;
  *(_QWORD *)&v37->COST_1_LABEL_AP_POS.fields.x = 1103888384LL;
  v37->COST_1_LABEL_AP_POS.fields.z = 0.0;
  v38 = v34->static_fields;
  *(_QWORD *)&v38->COST_1_LABEL_AP_POS_WAR_BOARD.fields.x = 1104936960LL;
  v38->COST_1_LABEL_AP_POS_WAR_BOARD.fields.z = 0.0;
  v39 = v34->static_fields;
  *(_OWORD *)&v39->COST_2_ICON_NORMAL_POSITION_X = xmmword_BB5100;
  *(_OWORD *)&v39->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_BB5710;
  *(_OWORD *)&v39->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_BB5630;
  v39->COST_LABEL_WIDTH_FOR_THREE_ITEM = 30.4;
  *(_QWORD *)&v39->COST_LABEL_DEFAULT_SPACING = 0x800000009LL;
  *(_QWORD *)&v39->SHOHI_SP_POS.fields.x = 0x41C0000041800000LL;
  v39->SHOHI_SP_POS.fields.z = 0.0;
  v40 = v34->static_fields;
  *(_QWORD *)&v40->SHOHI_SP_POS_WAR_BOARD.fields.x = 0x41C8000041900000LL;
  v40->SHOHI_SP_POS_WAR_BOARD.fields.z = 0.0;
  v41 = StringLiteral_20400/*"img_quest_spend"*/;
  p_SHOHI_SP_NAME = (ServantStatusBattleListViewItem_o *)&v34->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20400/*"img_quest_spend"*/;
  sub_1B88554(p_SHOHI_SP_NAME, v41, v43, v44);
  v45 = StringLiteral_20401/*"img_quest_spend2"*/;
  p_SHOHI_SP_NAME_WAR_BOARD = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20401/*"img_quest_spend2"*/;
  sub_1B88554(p_SHOHI_SP_NAME_WAR_BOARD, v45, v47, v48);
  v51 = QuestBoardListViewItemDraw_TypeInfo;
  v52 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&v52->QUEST_BOARD_PHASE_INTERVAL = xmmword_BB4E20;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    v51 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4A55CE1 = 1;
    v52 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  }
  v53 = UnityEngine_Vector3_TypeInfo;
  v54 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v54->zeroVector.fields.z;
  *(_QWORD *)&v52->CHALLENGE_OBJ_POS_SINGLE.fields.x = *(_QWORD *)&v54->zeroVector.fields.x;
  v52->CHALLENGE_OBJ_POS_SINGLE.fields.z = z;
  v56 = v51->static_fields;
  *(_QWORD *)&v56->CHALLENGE_OBJ_POS_DOUBLE.fields.x = 1115160576LL;
  v56->CHALLENGE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v57 = v53->static_fields;
  v58 = v51->static_fields;
  v59 = v57->zeroVector.fields.z;
  *(_QWORD *)&v58->PHASE_OBJ_POS_SINGLE.fields.x = *(_QWORD *)&v57->zeroVector.fields.x;
  v58->PHASE_OBJ_POS_SINGLE.fields.z = v59;
  v60 = v51->static_fields;
  *(_QWORD *)&v60->PHASE_OBJ_POS_DOUBLE.fields.x = 1116995584LL;
  v60->PHASE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v61 = v51->static_fields;
  *(_QWORD *)&v61->PHASE_OBJ_POS_DOUBLE_QP.fields.x = 1117782016LL;
  v61->PHASE_OBJ_POS_DOUBLE_QP.fields.z = 0.0;
  v62 = v51->static_fields;
  *(_QWORD *)&v62->PHASE_OBJ_POS_TRIPLE_ITEM.fields.x = 1118699520LL;
  v62->PHASE_OBJ_POS_TRIPLE_ITEM.fields.z = 0.0;
  v63 = v51->static_fields;
  *(_QWORD *)&v63->PHASE_STR_POS_SINGLE.fields.x = 1116602368LL;
  v63->PHASE_STR_POS_SINGLE.fields.z = 0.0;
  v64 = v51->static_fields;
  *(_QWORD *)&v64->PHASE_STR_POS_DOUBLE.fields.x = 1113063424LL;
  v64->PHASE_STR_POS_DOUBLE.fields.z = 0.0;
  v65 = v51->static_fields;
  *(_QWORD *)&v65->PHASE_STR_POS_DOUBLE_QP.fields.x = 1111228416LL;
  v65->PHASE_STR_POS_DOUBLE_QP.fields.z = 0.0;
  v66 = v51->static_fields;
  *(_QWORD *)&v66->PHASE_STR_POS_TRIPLE_ITEM.fields.x = 1109393408LL;
  v66->PHASE_STR_POS_TRIPLE_ITEM.fields.z = 0.0;
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    v53 = UnityEngine_Vector3_TypeInfo;
    v51 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4A55CE6 = 1;
  }
  v67 = v53->static_fields;
  v68 = v51->static_fields;
  v69 = v67->oneVector.fields.z;
  *(_QWORD *)&v68->PHASE_STR_SCL_SINGLE.fields.x = *(_QWORD *)&v67->oneVector.fields.x;
  v68->PHASE_STR_SCL_SINGLE.fields.z = v69;
  v70 = v51->static_fields;
  *(_QWORD *)&v70->PHASE_STR_SCL_DOUBLE.fields.x = 0x3F8000003F4CCCCDLL;
  v70->PHASE_STR_SCL_DOUBLE.fields.z = 1.0;
  v71 = v51->static_fields;
  *(_QWORD *)&v71->PHASE_STR_SCL_DOUBLE_QP.fields.x = 0x3F8000003F4CCCCDLL;
  v71->PHASE_STR_SCL_DOUBLE_QP.fields.z = 1.0;
  v72 = v51->static_fields;
  *(_QWORD *)&v72->PHASE_STR_SCL_TRIPLE_ITEM.fields.x = 0x3F8000003F333333LL;
  v72->PHASE_STR_SCL_TRIPLE_ITEM.fields.z = 1.0;
  v73 = v51->static_fields;
  v73->BOARD_MESSAGE_MAX_WITDH = 170;
  *(_QWORD *)&v73->BLACK_MARK_OBJ_POS.fields.x = 0x4284000000000000LL;
  v73->BLACK_MARK_OBJ_POS.fields.z = 0.0;
  v74 = v51->static_fields;
  *(_QWORD *)&v74->BLACK_MARK_OBJ_POS_CENTER.fields.x = 0LL;
  v74->BLACK_MARK_OBJ_POS_CENTER.fields.z = 0.0;
  v75 = v51->static_fields;
  *(_QWORD *)&v75->WHITE_MARK_OBJ_UNDER_POS.fields.x = 0xC284000000000000LL;
  v75->WHITE_MARK_OBJ_UNDER_POS.fields.z = 0.0;
  v76 = StringLiteral_19292/*"event_war_"*/;
  p_EVENT_WAR_SPNAME_PREFIX = (ServantStatusBattleListViewItem_o *)&v51->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_19292/*"event_war_"*/;
  sub_1B88554(p_EVENT_WAR_SPNAME_PREFIX, v76, v49, v50);
  v78 = StringLiteral_17801/*"chaldea_category_{0}"*/;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_17801/*"chaldea_category_{0}"*/;
  sub_1B88554(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v78, v80, v81);
  v82 = StringLiteral_22696/*"quest_board_"*/;
  p_QUEST_BOARD_SPNAME_PREFIX = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22696/*"quest_board_"*/;
  sub_1B88554(p_QUEST_BOARD_SPNAME_PREFIX, v82, v84, v85);
  v86 = StringLiteral_20407/*"img_questboard_"*/;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20407/*"img_questboard_"*/;
  sub_1B88554(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v86, v88, v89);
  v90 = StringLiteral_22697/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22697/*"quest_board_icon_"*/;
  sub_1B88554(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v90, v92, v93);
  v94 = StringLiteral_22698/*"quest_board_mask_"*/;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22698/*"quest_board_mask_"*/;
  sub_1B88554(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v94, v96, v97);
  v98 = StringLiteral_22718/*"questboard_shohi_"*/;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22718/*"questboard_shohi_"*/;
  sub_1B88554(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v98, v100, v101);
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v103 = StringLiteral_22704/*"questboard_ap_"*/;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22704/*"questboard_ap_"*/;
  sub_1B88554(p_QUEST_BOARD_AP_SPNAME_PREFIX, v103, v104, v105);
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  v107 = StringLiteral_20409/*"img_questboard_damage"*/;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20409/*"img_questboard_damage"*/;
  sub_1B88554(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v107, v108, v109);
  p_QUEST_BOARD_PREV_ICON_NAME = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  v111 = StringLiteral_20397/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20397/*"img_quest_lasttime"*/;
  sub_1B88554(p_QUEST_BOARD_PREV_ICON_NAME, v111, v112, v113);
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  v115 = StringLiteral_20415/*"img_questboard_knockdown"*/;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20415/*"img_questboard_knockdown"*/;
  sub_1B88554(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v115, v116, v117);
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  v119 = StringLiteral_6236/*"EventUI/QuestBoardIcon/"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_6236/*"EventUI/QuestBoardIcon/"*/;
  sub_1B88554(p_QUEST_BOARD_ICON_TEXTURE_PATH, v119, v120, v121);
  v122 = StringLiteral_22697/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22697/*"quest_board_icon_"*/;
  sub_1B88554(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v122, v124, v125);
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
  v127 = StringLiteral_20172/*"icon_reward_step{0}"*/;
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20172/*"icon_reward_step{0}"*/;
  sub_1B88554(p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v127, v128, v129);
  v130 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v130->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 0x300000004ELL;
  *(_QWORD *)&v130->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 0x4000000000000013LL;
  v131 = StringLiteral_20468/*"img_slider_on"*/;
  v130->BANNER_POINT_SPNAME_ON = (struct System_String_o *)StringLiteral_20468/*"img_slider_on"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v130->BANNER_POINT_SPNAME_ON, v131, v132, v133);
  p_BANNER_POINT_SPNAME_OFF = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  v135 = StringLiteral_20467/*"img_slider_off"*/;
  p_BANNER_POINT_SPNAME_OFF->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20467/*"img_slider_off"*/;
  sub_1B88554(p_BANNER_POINT_SPNAME_OFF, v135, v136, v137);
  v138 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v138->SHORTCUT_FACE_MASK_SP_W = 0x7C00000088LL;
  v139 = StringLiteral_20419/*"img_questboard_story02mask"*/;
  v138->SHORTCUT_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20419/*"img_questboard_story02mask"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v138->SHORTCUT_FACE_MASK_SPNAME, v139, v140, v141);
  p_QUEST_STORY_FACE_MASK_SPNAME = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  v143 = StringLiteral_20421/*"img_questboard_story03mask"*/;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20421/*"img_questboard_story03mask"*/;
  sub_1B88554(p_QUEST_STORY_FACE_MASK_SPNAME, v143, v144, v145);
  p_QUEST_MAIN_FACE_MASK_SPNAME = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  v147 = StringLiteral_20422/*"img_questboard_story04mask"*/;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20422/*"img_questboard_story04mask"*/;
  sub_1B88554(p_QUEST_MAIN_FACE_MASK_SPNAME, v147, v148, v149);
  p_QUEST_EVENT_FACE_MASK_SPNAME = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  v151 = StringLiteral_20423/*"img_questboard_story05mask"*/;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20423/*"img_questboard_story05mask"*/;
  sub_1B88554(p_QUEST_EVENT_FACE_MASK_SPNAME, v151, v152, v153);
  v154 = sub_1B88658(string___TypeInfo, 2LL);
  if ( !v154 )
    goto LABEL_48;
  v158 = v154;
  if ( !*(_DWORD *)(v154 + 24) )
    goto LABEL_47;
  v159 = StringLiteral_22771/*"raid_point_frame_old"*/;
  *(_QWORD *)(v154 + 32) = StringLiteral_22771/*"raid_point_frame_old"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v154 + 32), v159, v156, v157);
  if ( *(_DWORD *)(v158 + 24) <= 1u )
    goto LABEL_47;
  v162 = StringLiteral_22770/*"raid_point_frame"*/;
  *(_QWORD *)(v158 + 40) = StringLiteral_22770/*"raid_point_frame"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v158 + 40), v162, v160, v161);
  p_RP_SPNAME_FRAME = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (ServantStatusBattleListViewItem_c *)v158;
  sub_1B88554(p_RP_SPNAME_FRAME, v158, v164, v165);
  v154 = sub_1B88658(string___TypeInfo, 2LL);
  if ( !v154 )
    goto LABEL_48;
  v168 = v154;
  if ( !*(_DWORD *)(v154 + 24) )
    goto LABEL_47;
  v169 = StringLiteral_22772/*"raid_point_old"*/;
  *(_QWORD *)(v154 + 32) = StringLiteral_22772/*"raid_point_old"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v154 + 32), v169, v166, v167);
  if ( *(_DWORD *)(v168 + 24) <= 1u )
    goto LABEL_47;
  v172 = StringLiteral_22769/*"raid_point"*/;
  *(_QWORD *)(v168 + 40) = StringLiteral_22769/*"raid_point"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v168 + 40), v172, v170, v171);
  p_RP_SPNAME_POINT = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (ServantStatusBattleListViewItem_c *)v168;
  sub_1B88554(p_RP_SPNAME_POINT, v168, v174, v175);
  v176 = QuestBoardListViewItemDraw_TypeInfo;
  v177 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v177->RESTRICTION_FONT_SPACING_MIN = -1;
  *(_QWORD *)&v177->RESTRICTION_DEFAULT_FONT_SIZE = 18LL;
  *(_QWORD *)&v177->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v177->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v178 = v176->static_fields;
  *(_QWORD *)&v178->RESTRICTION_FONT_SIZE_ALLOUT = 0x700000000ELL;
  *(_QWORD *)&v178->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v178->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v179 = v176->static_fields;
  *(_QWORD *)&v179->BANNER_ENTORY_EFFECT_DURATION = 0x41F000003F000000LL;
  v180 = StringLiteral_20399/*"img_quest_save"*/;
  v179->QUEST_BOARD_PREV_PAUSE_ICON_NAME = (struct System_String_o *)StringLiteral_20399/*"img_quest_save"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v179->QUEST_BOARD_PREV_PAUSE_ICON_NAME, v180, v181, v182);
  v183 = StringLiteral_22708/*"questboard_cap_closed"*/;
  p_QBOARD_CAP_CLOSED = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22708/*"questboard_cap_closed"*/;
  sub_1B88554(p_QBOARD_CAP_CLOSED, v183, v185, v186);
  v187 = StringLiteral_22713/*"questboard_cap_closed_{0}"*/;
  p_QBOARD_CAP_CLOSED_FORMAT = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
  p_QBOARD_CAP_CLOSED_FORMAT->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22713/*"questboard_cap_closed_{0}"*/;
  sub_1B88554(p_QBOARD_CAP_CLOSED_FORMAT, v187, v189, v190);
  v191 = StringLiteral_22712/*"questboard_cap_closed_special_{0}"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22712/*"questboard_cap_closed_special_{0}"*/;
  sub_1B88554(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v191, v193, v194);
  v195 = StringLiteral_22709/*"questboard_cap_closed_special"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22709/*"questboard_cap_closed_special"*/;
  sub_1B88554(p_QBOARD_CAP_CLOSED_SPECIAL, v195, v197, v198);
  v199 = StringLiteral_22710/*"questboard_cap_closed_special_2"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22710/*"questboard_cap_closed_special_2"*/;
  sub_1B88554(p_QBOARD_CAP_CLOSED_SPECIAL_2, v199, v201, v202);
  v203 = StringLiteral_22711/*"questboard_cap_closed_special_3"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22711/*"questboard_cap_closed_special_3"*/;
  sub_1B88554(p_QBOARD_CAP_CLOSED_SPECIAL_3, v203, v205, v206);
  v154 = sub_1B88658(string___TypeInfo, 7LL);
  if ( !v154 )
    goto LABEL_48;
  v209 = v154;
  if ( !*(_DWORD *)(v154 + 24) )
    goto LABEL_47;
  v210 = StringLiteral_20410/*"img_questboard_event{0:D3}"*/;
  *(_QWORD *)(v154 + 32) = StringLiteral_20410/*"img_questboard_event{0:D3}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v154 + 32), v210, v207, v208);
  if ( *(_DWORD *)(v209 + 24) <= 1u )
    goto LABEL_47;
  v213 = StringLiteral_22714/*"questboard_cap{0:D3}"*/;
  *(_QWORD *)(v209 + 40) = StringLiteral_22714/*"questboard_cap{0:D3}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v209 + 40), v213, v211, v212);
  if ( *(_DWORD *)(v209 + 24) <= 2u )
    goto LABEL_47;
  v216 = StringLiteral_17801/*"chaldea_category_{0}"*/;
  *(_QWORD *)(v209 + 48) = StringLiteral_17801/*"chaldea_category_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v209 + 48), v216, v214, v215);
  if ( *(_DWORD *)(v209 + 24) <= 3u )
    goto LABEL_47;
  v219 = StringLiteral_20417/*"img_questboard_story01"*/;
  *(_QWORD *)(v209 + 56) = StringLiteral_20417/*"img_questboard_story01"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v209 + 56), v219, v217, v218);
  if ( *(_DWORD *)(v209 + 24) <= 4u )
    goto LABEL_47;
  v222 = StringLiteral_20412/*"img_questboard_hero01"*/;
  *(_QWORD *)(v209 + 64) = StringLiteral_20412/*"img_questboard_hero01"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v209 + 64), v222, v220, v221);
  if ( *(_DWORD *)(v209 + 24) <= 5u )
    goto LABEL_47;
  v225 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v209 + 72) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v209 + 72), v225, v223, v224);
  if ( *(_DWORD *)(v209 + 24) <= 6u )
    goto LABEL_47;
  v228 = StringLiteral_22714/*"questboard_cap{0:D3}"*/;
  *(_QWORD *)(v209 + 80) = StringLiteral_22714/*"questboard_cap{0:D3}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v209 + 80), v228, v226, v227);
  p_msQBoardL1Names = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (ServantStatusBattleListViewItem_c *)v209;
  sub_1B88554(p_msQBoardL1Names, v209, v230, v231);
  v232 = StringLiteral_20418/*"img_questboard_story02"*/;
  p_msQBoardL2Name_Story = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20418/*"img_questboard_story02"*/;
  sub_1B88554(p_msQBoardL2Name_Story, v232, v234, v235);
  v236 = StringLiteral_20413/*"img_questboard_hero02"*/;
  p_msQBoardL2Name_Hero = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20413/*"img_questboard_hero02"*/;
  sub_1B88554(p_msQBoardL2Name_Hero, v236, v238, v239);
  v154 = sub_1B88658(string___TypeInfo, 7LL);
  if ( !v154 )
    goto LABEL_48;
  v242 = v154;
  if ( !*(_DWORD *)(v154 + 24) )
    goto LABEL_47;
  v243 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v154 + 32) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v154 + 32), v243, v240, v241);
  if ( *(_DWORD *)(v242 + 24) <= 1u )
    goto LABEL_47;
  v246 = StringLiteral_20416/*"img_questboard_main_"*/;
  *(_QWORD *)(v242 + 40) = StringLiteral_20416/*"img_questboard_main_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v242 + 40), v246, v244, v245);
  if ( *(_DWORD *)(v242 + 24) <= 2u )
    goto LABEL_47;
  v249 = StringLiteral_20411/*"img_questboard_free_"*/;
  *(_QWORD *)(v242 + 48) = StringLiteral_20411/*"img_questboard_free_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v242 + 48), v249, v247, v248);
  if ( *(_DWORD *)(v242 + 24) <= 3u )
    goto LABEL_47;
  v252 = StringLiteral_20420/*"img_questboard_story03"*/;
  *(_QWORD *)(v242 + 56) = StringLiteral_20420/*"img_questboard_story03"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v242 + 56), v252, v250, v251);
  if ( *(_DWORD *)(v242 + 24) <= 4u )
    goto LABEL_47;
  v255 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v242 + 64) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v242 + 64), v255, v253, v254);
  if ( *(_DWORD *)(v242 + 24) <= 5u )
    goto LABEL_47;
  v258 = StringLiteral_20411/*"img_questboard_free_"*/;
  *(_QWORD *)(v242 + 72) = StringLiteral_20411/*"img_questboard_free_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v242 + 72), v258, v256, v257);
  if ( *(_DWORD *)(v242 + 24) <= 6u )
    goto LABEL_47;
  v261 = StringLiteral_20414/*"img_questboard_hero03"*/;
  *(_QWORD *)(v242 + 80) = StringLiteral_20414/*"img_questboard_hero03"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v242 + 80), v261, v259, v260);
  p_msQBoardL3Names = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (ServantStatusBattleListViewItem_c *)v242;
  sub_1B88554(p_msQBoardL3Names, v242, v263, v264);
  v154 = sub_1B88658(string___TypeInfo, 7LL);
  if ( !v154 )
    goto LABEL_48;
  v267 = v154;
  if ( !*(_DWORD *)(v154 + 24) )
    goto LABEL_47;
  v268 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v154 + 32) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v154 + 32), v268, v265, v266);
  if ( *(_DWORD *)(v267 + 24) <= 1u )
    goto LABEL_47;
  v271 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v267 + 40) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v267 + 40), v271, v269, v270);
  if ( *(_DWORD *)(v267 + 24) <= 2u )
    goto LABEL_47;
  v274 = StringLiteral_20428/*"img_questtxt_free"*/;
  *(_QWORD *)(v267 + 48) = StringLiteral_20428/*"img_questtxt_free"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v267 + 48), v274, v272, v273);
  if ( *(_DWORD *)(v267 + 24) <= 3u )
    goto LABEL_47;
  v277 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v267 + 56) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v267 + 56), v277, v275, v276);
  if ( *(_DWORD *)(v267 + 24) <= 4u
    || (v280 = (int)StringLiteral_1/*""*/,
        *(_QWORD *)(v267 + 64) = StringLiteral_1/*""*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v267 + 64), v280, v278, v279),
        *(_DWORD *)(v267 + 24) <= 5u)
    || (v283 = StringLiteral_20427/*"img_questtxt_event"*/,
        *(_QWORD *)(v267 + 72) = StringLiteral_20427/*"img_questtxt_event"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v267 + 72), v283, v281, v282),
        *(_DWORD *)(v267 + 24) <= 6u) )
  {
LABEL_47:
    sub_1B88814(v154, v155);
  }
  v286 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v267 + 80) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v267 + 80), v286, v284, v285);
  p_msLabelMainSprNames = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (ServantStatusBattleListViewItem_c *)v267;
  sub_1B88554(p_msLabelMainSprNames, v267, v288, v289);
  v154 = sub_1B88658(string___TypeInfo, 8LL);
  if ( !v154 )
LABEL_48:
    sub_1B8880C(v154, v155);
  v292 = v154;
  if ( !*(_DWORD *)(v154 + 24) )
    goto LABEL_47;
  v293 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v154 + 32) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v154 + 32), v293, v290, v291);
  if ( *(_DWORD *)(v292 + 24) <= 1u )
    goto LABEL_47;
  v296 = StringLiteral_22706/*"questboard_ap_main"*/;
  *(_QWORD *)(v292 + 40) = StringLiteral_22706/*"questboard_ap_main"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v292 + 40), v296, v294, v295);
  if ( *(_DWORD *)(v292 + 24) <= 2u )
    goto LABEL_47;
  v299 = StringLiteral_22705/*"questboard_ap_free"*/;
  *(_QWORD *)(v292 + 48) = StringLiteral_22705/*"questboard_ap_free"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v292 + 48), v299, v297, v298);
  if ( *(_DWORD *)(v292 + 24) <= 3u )
    goto LABEL_47;
  v302 = StringLiteral_22707/*"questboard_ap_story"*/;
  *(_QWORD *)(v292 + 56) = StringLiteral_22707/*"questboard_ap_story"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v292 + 56), v302, v300, v301);
  if ( *(_DWORD *)(v292 + 24) <= 4u )
    goto LABEL_47;
  v305 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v292 + 64) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v292 + 64), v305, v303, v304);
  if ( *(_DWORD *)(v292 + 24) <= 5u )
    goto LABEL_47;
  v308 = StringLiteral_22705/*"questboard_ap_free"*/;
  *(_QWORD *)(v292 + 72) = StringLiteral_22705/*"questboard_ap_free"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v292 + 72), v308, v306, v307);
  if ( *(_DWORD *)(v292 + 24) <= 6u )
    goto LABEL_47;
  v311 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v292 + 80) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v292 + 80), v311, v309, v310);
  if ( *(_DWORD *)(v292 + 24) <= 7u )
    goto LABEL_47;
  v314 = StringLiteral_22740/*"qyestboard_ap_free"*/;
  *(_QWORD *)(v292 + 88) = StringLiteral_22740/*"qyestboard_ap_free"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v292 + 88), v314, v312, v313);
  p_QuestBoardApSpNames = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (ServantStatusBattleListViewItem_c *)v292;
  sub_1B88554(p_QuestBoardApSpNames, v292, v316, v317);
  v318 = StringLiteral_20405/*"img_questarrow_off"*/;
  p_msPhaseSprName_ArrowOff = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20405/*"img_questarrow_off"*/;
  sub_1B88554(p_msPhaseSprName_ArrowOff, v318, v320, v321);
  v322 = StringLiteral_20406/*"img_questarrow_on"*/;
  p_msPhaseSprName_ArrowOn = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20406/*"img_questarrow_on"*/;
  sub_1B88554(p_msPhaseSprName_ArrowOn, v322, v324, v325);
  v326 = StringLiteral_20403/*"img_questarrow1_off"*/;
  p_msPhaseSprName_ExArrowOff = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20403/*"img_questarrow1_off"*/;
  sub_1B88554(p_msPhaseSprName_ExArrowOff, v326, v328, v329);
  v330 = StringLiteral_20404/*"img_questarrow1_on"*/;
  p_msPhaseSprName_ExArrowOn = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20404/*"img_questarrow1_on"*/;
  sub_1B88554(p_msPhaseSprName_ExArrowOn, v330, v332, v333);
  v334 = StringLiteral_20424/*"img_questloop_off"*/;
  p_msPhaseSprName_LoopOff = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20424/*"img_questloop_off"*/;
  sub_1B88554(p_msPhaseSprName_LoopOff, v334, v336, v337);
  v338 = StringLiteral_20425/*"img_questloop_on"*/;
  p_msPhaseSprName_LoopOn = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20425/*"img_questloop_on"*/;
  sub_1B88554(p_msPhaseSprName_LoopOn, v338, v340, v341);
  v342 = StringLiteral_20353/*"img_loop_off"*/;
  p_msPhaseSprName_LoopFirstOff = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20353/*"img_loop_off"*/;
  sub_1B88554(p_msPhaseSprName_LoopFirstOff, v342, v344, v345);
  v346 = StringLiteral_22717/*"questboard_icon_cap{0:D2}"*/;
  p_CHAPTER_SP_BASE_NAME = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_22717/*"questboard_icon_cap{0:D2}"*/;
  sub_1B88554(p_CHAPTER_SP_BASE_NAME, v346, v348, v349);
  v350 = StringLiteral_20402/*"img_quest_unit_{0:D2}"*/;
  p_CHAPTER_SP_UNIT_NAME = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20402/*"img_quest_unit_{0:D2}"*/;
  sub_1B88554(p_CHAPTER_SP_UNIT_NAME, v350, v352, v353);
  v354 = StringLiteral_20398/*"img_quest_pre_organization"*/;
  p_PRE_BATTLE_ORGANIZATION = (ServantStatusBattleListViewItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_20398/*"img_quest_pre_organization"*/;
  sub_1B88554(p_PRE_BATTLE_ORGANIZATION, v354, v356, v357);
}


void __fastcall QuestBoardListViewItemDraw___ctor(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  QuestBoardListViewItemDraw_c *v6; // x0
  struct UISprite_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A580CE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UISprite__TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&UISprite___TypeInfo);
    byte_4A580CE = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 4LL);
  this->fields.mStatusSp = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mStatusSp, (int32_t)v3, v4, v5);
  v6 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v6 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v7 = (struct UISprite_array *)sub_1B88658(UISprite___TypeInfo, (unsigned int)v6->static_fields->PHASE_EXTRA_MAX);
  this->fields.mPhaseSp = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mPhaseSp, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mMultiSecondBattleInformation, (int32_t)v10, v11, v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__Awake(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UILabel_o *mOptionRestrinctionLb; // x8

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  this->fields._bannerState_k__BackingField = 0;
  if ( !mOptionRestrinctionLb )
    sub_1B8880C(this, method);
  this->fields.restrictionDefaultWidth = mOptionRestrinctionLb->fields.mWidth;
}


void __fastcall QuestBoardListViewItemDraw__CalcQuestCost(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        EventCampaignEntity_o *eventCampaignEnt,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        bool *isNotItemConsume,
        const MethodInfo *method)
{
  int32_t target; // w8
  int32_t consumeType; // w8
  int32_t value; // w8

  if ( !eventCampaignEnt )
    goto LABEL_18;
  target = eventCampaignEnt->fields.target;
  if ( isQuestNoneCleared )
  {
    if ( target != 12 )
    {
      if ( target == 35 )
      {
        *isNotItemConsume = 1;
        return;
      }
      if ( target != 25 )
        return;
    }
  }
  else if ( target != 12 )
  {
    return;
  }
  if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
    return;
  if ( !questEntity )
LABEL_18:
    sub_1B8880C(this, questEntity);
  consumeType = questEntity->fields.consumeType;
  if ( consumeType == 4 || consumeType == 1 )
  {
    value = eventCampaignEnt->fields.value;
    if ( *costCalcVal )
      value = value * *costCalcVal / 1000;
    *costCalcVal = value;
    if ( eventCampaignEnt->fields.calcType == 3 )
      *fixedVal = eventCampaignEnt->fields.value;
  }
}


void __fastcall QuestBoardListViewItemDraw__ChangeNextEventTarget(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventTarget; // x20
  UnityEngine_Object_o *eventTargetComponent; // x20
  __int64 v5; // x1
  BoardOptionEventTargetComponent_o *v6; // x0

  if ( (byte_4A580BE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A580BE = 1;
  }
  eventTarget = (UnityEngine_Object_o *)this->fields.eventTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventTarget, 0LL, 0LL) )
  {
    eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(eventTargetComponent, 0LL, 0LL) )
    {
      v6 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v6 )
        goto LABEL_16;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v6, 0LL) )
      {
        v6 = this->fields.eventTargetComponent;
        if ( !v6 )
          goto LABEL_16;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v6, 0LL) )
        {
          v6 = this->fields.eventTargetComponent;
          if ( v6 )
          {
            BoardOptionEventTargetComponent__SetNextTarget(v6, 0LL);
            return;
          }
LABEL_16:
          sub_1B8880C(v6, v5);
        }
      }
    }
  }
}


void __fastcall QuestBoardListViewItemDraw__ChangeNextInfoText(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  QuestBoardInformationText_o *mInfoTextList; // x0
  __int64 eventCampaignEnt_low; // x1
  int32_t v8; // w25
  QuestBoardInformationText_o *v9; // x26
  QuestBoardListViewItem_o *v10; // x1
  int64_t Time; // x3
  const MethodInfo *v12; // x4
  QuestBoardListViewItemDraw_o *v13; // x0
  int32_t v14; // w2

  while ( 1 )
  {
    if ( (byte_4A580BA & 1) == 0 )
    {
      sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__);
      sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
      sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
      sub_1B885B0(&NetworkManager_TypeInfo);
      byte_4A580BA = 1;
    }
    if ( (byte_4A580BB & 1) == 0 )
    {
      sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
      byte_4A580BB = 1;
    }
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
    if ( !mInfoTextList )
      break;
    eventCampaignEnt_low = LODWORD(mInfoTextList->fields.eventCampaignEnt);
    if ( (int)eventCampaignEnt_low < 2 )
      break;
    if ( !questBoardManager )
      goto LABEL_28;
    mInfoTextList = (QuestBoardInformationText_o *)QuestBoardListViewManager__GetAlphaAnimCnt(
                                                     questBoardManager,
                                                     eventCampaignEnt_low,
                                                     0LL);
    if ( !this->fields.mInfoTextList )
      goto LABEL_28;
    v8 = (int)mInfoTextList;
    mInfoTextList = (QuestBoardInformationText_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList,
                                                     (int32_t)mInfoTextList,
                                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !mInfoTextList )
      goto LABEL_28;
    v9 = mInfoTextList;
    if ( !QuestBoardInformationText__IsQuestOpened(mInfoTextList, 0LL) )
    {
      if ( !QuestBoardInformationText__ChangeText(v9, &this->fields.mOptionInfoLb, 0LL) )
        return;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      v13 = this;
      v14 = v8;
      goto LABEL_26;
    }
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_28;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)mInfoTextList,
      v8,
      (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__);
  }
  if ( (byte_4A580BC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4A580BC = 1;
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
  }
  if ( mInfoTextList && LODWORD(mInfoTextList->fields.eventCampaignEnt) )
  {
    mInfoTextList = (QuestBoardInformationText_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)mInfoTextList,
                                                     0,
                                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !mInfoTextList )
LABEL_28:
      sub_1B8880C(mInfoTextList, eventCampaignEnt_low);
    if ( QuestBoardInformationText__ChangeText(mInfoTextList, &this->fields.mOptionInfoLb, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      v13 = this;
      v14 = 0;
LABEL_26:
      QuestBoardListViewItemDraw__UpdateInfoText(v13, v10, v14, Time, v12);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw__ChangeNextRewardIcon(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x20
  int32_t max_length; // w8
  QuestBoardListViewItemDraw_o *v5; // x19
  GiftEntity_o *v6; // x8
  int num; // w9
  int32_t v8; // w2
  int32_t v9; // w3

  mRewardIconInfs = this->fields.mRewardIconInfs;
  if ( !mRewardIconInfs )
    return;
  max_length = mRewardIconInfs->max_length;
  if ( max_length < 2 )
    return;
  if ( !questBoardManager )
    goto LABEL_18;
  v5 = this;
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewManager__GetAlphaAnimCnt(questBoardManager, max_length, 0LL);
  if ( (unsigned int)this >= mRewardIconInfs->max_length )
    sub_1B88814(this, questBoardManager);
  v6 = mRewardIconInfs->m_Items[(int)this];
  if ( !v6 )
    goto LABEL_18;
  questBoardManager = (QuestBoardListViewManager_o *)(unsigned int)v6->fields.prioredIconId;
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mRewardIcon;
  num = v6->fields.num;
  if ( (int)questBoardManager >= 1 )
  {
    if ( this )
    {
      if ( num <= 1 )
        v8 = -1;
      else
        v8 = v6->fields.num;
      ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1B8880C(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 1, 0LL);
}


System_String_o *__fastcall QuestBoardListViewItemDraw__ConvertToChineseAscii(
        QuestBoardListViewItemDraw_o *this,
        int32_t n,
        bool isUppercase,
        const MethodInfo *method)
{
  __int16 v6; // w23
  unsigned int v7; // w21
  __int16 v8; // w22
  System_Text_StringBuilder_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int v13; // w8
  unsigned int v14; // w8

  if ( (byte_4A580B3 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A580B3 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_1212/*"0"*/;
  if ( isUppercase )
    v6 = 32;
  else
    v6 = 0;
  v7 = n % 0xAu;
  v8 = 96 - v6;
  v9 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_60862280(v9, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v14 = n / 0x64u % 0xA;
      if ( v14 >= 2 )
      {
        if ( !v9 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_60871256(v9, v8 | v14, 0LL);
      }
      else if ( !v9 )
      {
LABEL_25:
        sub_1B8880C(v10, v11);
      }
      System_Text_StringBuilder__Append_60871256(v9, 107 - v6, 0LL);
      v13 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v9 )
        goto LABEL_25;
      v13 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v13 >= 2 )
      System_Text_StringBuilder__Append_60871256(v9, v8 | v13, 0LL);
    System_Text_StringBuilder__Append_60871256(v9, 106 - v6, 0LL);
    if ( !v7 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                  v9,
                                  v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v9 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_60871256(v9, v8 | v7, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall QuestBoardListViewItemDraw__CreateInfoTextList(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int64_t checkTime,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x23
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x24
  DataManager_o *v9; // x25
  int32_t warId; // w22
  Il2CppObject *MasterData_object; // x21
  int64_t v12; // x19
  __int64 v13; // x8
  QuestBoardInformationText_c **v14; // x23
  BoardMessageEntity_array *v15; // x22
  int v16; // w20
  int v17; // w25
  BoardMessageEntity_o *v18; // x26
  System_String_o *message; // x29
  int64_t closedAt; // x24
  System_Collections_Generic_List_object__o *mInfoTextList; // x27
  QuestBoardInformationText_o *v22; // x0
  Il2CppObject *v23; // x28
  BoardMessageEntity_o *v24; // x1
  System_String_o *v25; // x2
  int64_t v26; // x3
  int64_t v27; // x29
  System_String_o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  EventCampaignEntity_o *Data; // x0
  System_String_o *v36; // x24
  int64_t v37; // x29
  QuestBoardInformationText_c **v38; // x19
  System_Collections_Generic_List_object__o *v39; // x27
  QuestBoardInformationText_c *v40; // x8
  EventCampaignEntity_o *v41; // x23
  QuestBoardInformationText_o *v42; // x28
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  QuestBoardInformationText_c **v49; // x20
  _BOOL4 HasFlag; // w25
  const MethodInfo *v51; // x3
  struct EventEntity_o *eventEnt; // x8
  BoardMessageEntity_o *OverrideQuestMessage; // x0
  BoardMessageEntity_o *v54; // x25
  __int64 v55; // x8
  BoardMessageEntity_o *v56; // x27
  System_Collections_Generic_List_object__o *v57; // x25
  System_String_o *v58; // x24
  int64_t endTime; // x19
  QuestBoardInformationText_o *v60; // x26
  int32_t v61; // w2
  int32_t v62; // w3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  int v67; // w8
  void *v68; // x23
  unsigned int v69; // w27
  EventEntity_o *v70; // x24
  int32_t id; // w25
  _DWORD *v72; // x26
  const MethodInfo *v73; // x3
  int32_t v74; // w19
  BoardMessageEntity_o *v75; // x25
  System_String_o *v76; // x19
  Il2CppObject *EventName; // x0
  System_String_o *v78; // x19
  System_Collections_Generic_List_object__o *v79; // x25
  int64_t v80; // x26
  QuestBoardInformationText_o *v81; // x24
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  struct MapControl_QuestInfo_o *v88; // [xsp+0h] [xbp-A0h]
  struct MapControl_AreaBoardInfo_o *v89; // [xsp+8h] [xbp-98h]
  DataMasterBase_TMaster__TEntity__PKType__o *v90; // [xsp+10h] [xbp-90h]
  DataManager_o *v91; // [xsp+18h] [xbp-88h]
  int32_t key; // [xsp+2Ch] [xbp-74h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5808E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BoardMessageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_13340/*"TIME_REST_QUEST_BOARD_EVENT"*/);
    sub_1B885B0(&StringLiteral_13338/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4A5808E = 1;
  }
  entity = 0LL;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_86;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_86;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_86;
  v9 = (DataManager_o *)Instance;
  if ( !Instance )
    goto LABEL_86;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v90 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        v9,
                                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = DataManager__GetMasterData_object_(
               v9,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_86;
  v12 = checkTime;
  v91 = v9;
  v88 = quest_info_k__BackingField;
  v89 = AreaBoardInfo_k__BackingField;
  key = warId;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0LL);
  if ( !Instance )
    goto LABEL_86;
  v13 = *((_QWORD *)Instance + 3);
  v14 = &QuestBoardInformationText_TypeInfo;
  v15 = (BoardMessageEntity_array *)Instance;
  v16 = v13 - 1;
  if ( (int)v13 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = v15->m_Items[v17];
      if ( !v18 )
        break;
      switch ( v18->fields.referenceType )
      {
        case 1:
          message = v18->fields.message;
          closedAt = v18->fields.closedAt;
          mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          v22 = (QuestBoardInformationText_o *)sub_1B887FC(*v14);
          v23 = (Il2CppObject *)v22;
          v24 = v18;
          v25 = message;
          v26 = closedAt;
          goto LABEL_25;
        case 2:
          Instance = DataManager__GetMasterData_object_(
                       v91,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v18->fields.referenceId,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v27 = *((int *)Instance + 39);
          break;
        case 3:
          Instance = DataManager__GetMasterData_object_(
                       v91,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v18->fields.referenceId,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v27 = *((int *)Instance + 40);
          break;
        case 4:
          Instance = v90;
          if ( !v90 )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v90,
                       v18->fields.referenceId,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v27 = *((_QWORD *)Instance + 12);
          break;
        case 5:
          if ( !MasterData_object )
            goto LABEL_86;
          Data = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v18->fields.referenceId, 0LL);
          v36 = v18->fields.message;
          v37 = v18->fields.closedAt;
          v38 = v14;
          v39 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          v40 = *v14;
          v41 = Data;
          v42 = (QuestBoardInformationText_o *)sub_1B887FC(v40);
          QuestBoardInformationText___ctor_33881668(v42, v18, v36, v37, checkTime, v41, 0LL);
          if ( !v39 )
            goto LABEL_86;
          items = v39->fields._items;
          v46 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v39->fields._version;
          if ( !items )
            goto LABEL_86;
          size = v39->fields._size;
          v14 = v38;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v39,
              (Il2CppObject *)v42,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &items->obj.klass + size;
            v39->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v42;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
          }
          v12 = checkTime;
          goto LABEL_37;
        default:
          goto LABEL_37;
      }
      if ( v27 - v12 >= 0 )
      {
        v28 = v18->fields.message;
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        v22 = (QuestBoardInformationText_o *)sub_1B887FC(*v14);
        v23 = (Il2CppObject *)v22;
        v24 = v18;
        v25 = v28;
        v26 = v27;
LABEL_25:
        QuestBoardInformationText___ctor_33881668(v22, v24, v25, v26, v12, 0LL, 0LL);
        if ( !mInfoTextList )
          break;
        v31 = mInfoTextList->fields._items;
        v32 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !v31 )
          break;
        v33 = mInfoTextList->fields._size;
        if ( (unsigned int)v33 >= v31->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            v23,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &v31->obj.klass + v33;
          mInfoTextList->fields._size = v33 + 1;
          v34[4] = (Il2CppClass *)v23;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v23, v29, v30);
        }
      }
LABEL_37:
      if ( v16 == v17 )
        goto LABEL_40;
      if ( ++v17 >= v15->max_length )
        goto LABEL_87;
    }
LABEL_86:
    sub_1B8880C(Instance, v6);
  }
LABEL_40:
  v49 = v14;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Instance )
    goto LABEL_86;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         key,
         (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_86;
    HasFlag = WarEntity__HasFlag((WarEntity_o *)entity, 0x80000, 0LL);
  }
  else
  {
    HasFlag = 0;
  }
  if ( v89->fields.eventEnt )
  {
    Instance = this->fields.mRarePrismSp;
    if ( !Instance )
      goto LABEL_86;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_86;
    Instance = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( ((HasFlag | (unsigned int)Instance) & 1) == 0 )
    {
      eventEnt = v89->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_86;
      OverrideQuestMessage = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                               (QuestBoardListViewItemDraw_o *)Instance,
                               v15,
                               eventEnt->fields.id,
                               v51);
      if ( v89->fields.eventEnt )
      {
        v54 = OverrideQuestMessage;
        Instance = (void *)EventEntity__IsEventPeriod(v89->fields.eventEnt, checkTime, 0LL);
        if ( !v54 && ((unsigned __int8)Instance & 1) != 0 )
        {
          v55 = *(_QWORD *)&v15->max_length;
          if ( v55 )
          {
            if ( !(_DWORD)v55 )
              goto LABEL_87;
            v56 = v15->m_Items[0];
          }
          else
          {
            v56 = 0LL;
          }
          v57 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v58 = LocalizationManager__Get((System_String_o *)StringLiteral_13340/*"TIME_REST_QUEST_BOARD_EVENT"*/, 0LL);
          endTime = v88->fields.endTime;
          v60 = (QuestBoardInformationText_o *)sub_1B887FC(*v14);
          QuestBoardInformationText___ctor_33881668(v60, v56, v58, endTime, checkTime, 0LL, 0LL);
          if ( !v57 )
            goto LABEL_86;
          v63 = v57->fields._items;
          v64 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v57->fields._version;
          if ( !v63 )
            goto LABEL_86;
          v65 = v57->fields._size;
          if ( (unsigned int)v65 >= v63->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v57,
              (Il2CppObject *)v60,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &v63->obj.klass + v65;
            v57->fields._size = v65 + 1;
            v66[4] = (Il2CppClass *)v60;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v66 + 4), (int32_t)v60, v61, v62);
          }
        }
      }
    }
  }
  Instance = v90;
  if ( !v90 )
    goto LABEL_86;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)v90, 7, 1, 0LL);
  if ( !Instance )
    goto LABEL_86;
  v67 = *((_DWORD *)Instance + 6);
  v68 = Instance;
  if ( v67 >= 1 )
  {
    v69 = 0;
    while ( v69 < v67 )
    {
      v70 = (EventEntity_o *)*((_QWORD *)v68 + (int)v69 + 4);
      if ( !v70 || !MasterData_object )
        goto LABEL_86;
      id = v70->fields.id;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, id, 0LL);
      if ( Instance )
      {
        v72 = Instance;
        Instance = (void *)EventCampaignEntity__isDispWarId((EventCampaignEntity_o *)Instance, key, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v74 = v72[5];
          v75 = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                  (QuestBoardListViewItemDraw_o *)Instance,
                  v15,
                  id,
                  v73);
          Instance = (void *)CombineAdjustTarget__isTerminalExposable(v74, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && !v75 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v76 = LocalizationManager__Get((System_String_o *)StringLiteral_13338/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
            EventName = (Il2CppObject *)EventEntity__getEventName(v70, 0LL);
            v78 = System_String__Format_61721404(v76, EventName, (Il2CppObject *)StringLiteral_24983/*"{0}"*/, 0LL);
            v79 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
            v80 = EventEntity__GetEndTime(v70, 0, 0LL);
            v81 = (QuestBoardInformationText_o *)sub_1B887FC(*v49);
            QuestBoardInformationText___ctor(v81, v78, v80, 1, 1, 0LL, 0LL);
            if ( !v79 )
              goto LABEL_86;
            v84 = v79->fields._items;
            v85 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
            ++v79->fields._version;
            if ( !v84 )
              goto LABEL_86;
            v86 = v79->fields._size;
            if ( (unsigned int)v86 >= v84->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v79,
                (Il2CppObject *)v81,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
            }
            else
            {
              v87 = &v84->obj.klass + v86;
              v79->fields._size = v86 + 1;
              v87[4] = (Il2CppClass *)v81;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v87 + 4), (int32_t)v81, v82, v83);
            }
          }
        }
      }
      v67 = *((_DWORD *)v68 + 6);
      if ( (int)++v69 >= v67 )
        return;
    }
LABEL_87:
    sub_1B88814(Instance, v6);
  }
}


QuestBoardInformationText_o *__fastcall QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        EventEntity_o *eventEnt,
        EventCampaignEntity_o *eventCampaignEnt,
        int32_t phase,
        bool isQuestNoneCleared,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass354_0_o *v13; // x26
  Il2CppObject *isTerminalExposable; // x0
  QuestBoardListViewManager_c *v15; // x1
  int target; // w25
  QuestBoardInformationText_o *v17; // x27
  int32_t id; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *ContinueItemInfoList; // x20
  System_Predicate_object__o *v24; // x21
  Il2CppObject *v25; // x0
  UserOwnItemInfo_o *v26; // x20
  System_String_o *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  System_String_o *v32; // x21
  System_String_o *EventName; // x22
  int32_t ImageId; // w20
  TerminalBoardOptionTextData_o *v35; // x23
  int64_t v36; // x19
  System_String_o *v37; // x0
  System_String_o *v38; // x20
  int64_t EndTime; // x19
  QuestBoardInformationText_o *v40; // x0
  QuestBoardInformationText_o *v41; // x21
  System_String_o *v42; // x1
  int64_t v43; // x2
  bool v44; // w3
  QuestBoardInformationText_o *result; // x0
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *targetIds; // x8
  System_String_o *v48; // x20
  Il2CppObject *v49; // x0
  System_String_o *v50; // x20
  int64_t v51; // x19
  int32_t consumeType; // w8
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v55; // x0
  int64_t checkTime; // x24
  int64_t v57; // x25
  QuestBoardInformationText_o *v58; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  QuestBoardListViewItemDraw_o *v65; // x0
  QuestEntity_o *v66; // x1
  EventCampaignEntity_o *v67; // x2
  bool v68; // w3
  int32_t *v69; // x4
  int32_t *v70; // x5
  bool *v71; // x6
  const MethodInfo *v72; // x7
  int32_t Num_k__BackingField; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A580B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Predicate_UserOwnItemInfo__TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&TerminalBoardOptionTextData_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass354_0__CreateQuestBoardInformationText_b__0__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass354_0_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_13338/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    sub_1B885B0(&StringLiteral_13339/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/);
    byte_4A580B7 = 1;
  }
  v13 = (QuestBoardListViewItemDraw___c__DisplayClass354_0_o *)sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass354_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass354_0___ctor(v13, 0LL);
  if ( !eventCampaignEnt )
    goto LABEL_64;
  target = eventCampaignEnt->fields.target;
  isTerminalExposable = (Il2CppObject *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v17 = 0LL;
  if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    return v17;
  if ( !eventEnt )
    goto LABEL_64;
  id = eventEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_64;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_64;
  v15 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewManager_TypeInfo )
  {
    if ( !v13 )
      goto LABEL_64;
    v13->fields.checkTime = (int64_t)manager[1].fields.rightItem;
    if ( !isTerminalExposable )
      goto LABEL_64;
    isTerminalExposable = (Il2CppObject *)EventCampaignReleaseMaster__isRelease(
                                            (EventCampaignReleaseMaster_o *)isTerminalExposable,
                                            id,
                                            eventCampaignEnt->fields.target,
                                            0LL);
    if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    {
      if ( !isQuestNoneCleared )
      {
        v17 = 0LL;
        if ( target == 25 || target == 35 )
          return v17;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13338/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
      v38 = System_String__Format_61721404(
              v37,
              (Il2CppObject *)eventCampaignEnt->fields.entryCondMessage,
              (Il2CppObject *)StringLiteral_24983/*"{0}"*/,
              0LL);
      EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
      v40 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
      v41 = v40;
      v42 = v38;
      v43 = EndTime;
      v44 = 0;
LABEL_27:
      QuestBoardInformationText___ctor(v40, v42, v43, v44, 0, 0LL, 0LL);
      return v41;
    }
    if ( target == 28 )
    {
      ContinueItemInfoList = (System_Collections_Generic_List_object__o *)UserOwnItemDetail__GetContinueItemInfoList(0LL);
      v24 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_UserOwnItemInfo__TypeInfo);
      System_Predicate_object____ctor(
        v24,
        (Il2CppObject *)v13,
        Method_QuestBoardListViewItemDraw___c__DisplayClass354_0__CreateQuestBoardInformationText_b__0__,
        0LL);
      if ( ContinueItemInfoList )
      {
        v25 = System_Collections_Generic_List_object___Find(
                ContinueItemInfoList,
                (System_Predicate_T__o *)v24,
                (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v25 )
        {
          v26 = (UserOwnItemInfo_o *)v25;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13339/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, 0LL);
          Num_k__BackingField = v26->fields._Num_k__BackingField;
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Num_k__BackingField, v28, v29, v30);
          v32 = System_String__Format_61721404(v27, v31, (Il2CppObject *)StringLiteral_24983/*"{0}"*/, 0LL);
          EventName = EventEntity__getEventName(eventEnt, 0LL);
          ImageId = UserOwnItemInfo__get_ImageId(v26, 0LL);
          v35 = (TerminalBoardOptionTextData_o *)sub_1B887FC(TerminalBoardOptionTextData_TypeInfo);
          TerminalBoardOptionTextData___ctor(v35, EventName, v32, ImageId, 0, 0LL);
          v36 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v17 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
          QuestBoardInformationText___ctor(v17, v32, v36, 1, 0, v35, 0LL);
          return v17;
        }
        return 0LL;
      }
LABEL_64:
      sub_1B8880C(isTerminalExposable, v15);
    }
    if ( isQuestNoneCleared )
    {
      if ( target > 24 )
      {
        if ( target != 26 )
        {
          if ( target != 25 )
          {
LABEL_49:
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_13338/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
            v49 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
            v50 = System_String__Format_61721404(v48, v49, (Il2CppObject *)StringLiteral_24983/*"{0}"*/, 0LL);
            v51 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
            v40 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
            v41 = v40;
            v44 = 1;
            v42 = v50;
            v43 = v51;
            goto LABEL_27;
          }
          goto LABEL_52;
        }
LABEL_57:
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v55 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        checkTime = v13->fields.checkTime;
        v57 = v55;
        v58 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
        QuestBoardInformationText___ctor_33881836(v58, eventEnt, detail, v57, checkTime, eventCampaignEnt, 0LL);
        if ( !mInfoTextList )
          goto LABEL_64;
        items = mInfoTextList->fields._items;
        v62 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !items )
          goto LABEL_64;
        size = mInfoTextList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            (Il2CppObject *)v58,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &items->obj.klass + size;
          mInfoTextList->fields._size = size + 1;
          v64[4] = (Il2CppClass *)v58;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v58, v59, v60);
        }
        return 0LL;
      }
LABEL_38:
      if ( target != 12 )
      {
LABEL_39:
        if ( target != 24 )
          goto LABEL_49;
        if ( QuestBoardListViewItemDraw__IsValidSupportSelection(
               (QuestBoardListViewItemDraw_o *)isTerminalExposable,
               questEntity,
               phase,
               v22) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( !questEntity || !isTerminalExposable )
            goto LABEL_64;
          Entity = QuestPhaseMaster__GetEntity(
                     (QuestPhaseMaster_o *)isTerminalExposable,
                     questEntity->fields.id,
                     phase,
                     0LL);
          targetIds = eventCampaignEnt->fields.targetIds;
          if ( !targetIds || !Entity || !*(_QWORD *)&targetIds->max_length || !Entity->fields.isNpcOnly )
            goto LABEL_49;
        }
        return 0LL;
      }
LABEL_52:
      if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
        return 0LL;
      if ( !questEntity )
        goto LABEL_64;
      consumeType = questEntity->fields.consumeType;
      if ( consumeType != 4 && consumeType != 1 )
        return 0LL;
      goto LABEL_39;
    }
    if ( target <= 24 )
      goto LABEL_38;
    v17 = 0LL;
    if ( target != 25 )
    {
      if ( target == 26 )
        goto LABEL_57;
      if ( target != 35 )
        goto LABEL_49;
    }
    return v17;
  }
  sub_1B88ACC(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v65, v66, v67, v68, v69, v70, v71, v72);
  return result;
}


BoardMessageEntity_o *__fastcall QuestBoardListViewItemDraw__FindOverrideQuestMessage(
        QuestBoardListViewItemDraw_o *this,
        BoardMessageEntity_array *boardMessageData,
        int32_t eventId,
        const MethodInfo *method)
{
  signed int max_length; // w8
  int v5; // w9

  if ( !boardMessageData )
    goto LABEL_10;
  max_length = boardMessageData->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (QuestBoardListViewItemDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mCommonAtlas) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_10:
    sub_1B8880C(this, boardMessageData);
  }
  return 0LL;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetApSpriteFileName(int32_t bannerId, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v2; // x0
  System_String_o *QUEST_BOARD_AP_SPNAME_PREFIX; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = bannerId;
  if ( (byte_4A580C9 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580C9 = 1;
  }
  v2 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v2 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_AP_SPNAME_PREFIX = v2->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_61707032(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0LL);
}


System_Collections_Generic_List_QuestBoardInformationText__o *__fastcall QuestBoardListViewItemDraw__GetCampaignText(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        bool *isNotItemConsume,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v15; // x19
  bool v16; // w26
  const MethodInfo *v17; // x7
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  QuestBoardListViewManager_c *v19; // x1
  const MethodInfo *v20; // x7
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByWarGroupMaster; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  int64_t *manager; // x8
  __int64 methodPtr_low; // x10
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v26; // x20
  int64_t *p_endedAt; // x20
  __int64 endedAt; // t1
  int64_t *v29; // x8
  int64_t v30; // x20
  System_String_o *EventName; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x22
  QuestBoardInformationText_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  QuestBoardListViewItemDraw_o *v42; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *v43; // x1
  int32_t v44; // w2
  bool v45; // w3
  const MethodInfo *v46; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A580B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_13348/*"TIME_REST_STRING"*/);
    byte_4A580B4 = 1;
  }
  entity = 0LL;
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  v16 = isQuestNoneCleared;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        questId,
                                                                                        phase,
                                                                                        v16,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        v17);
  if ( !v15 )
    goto LABEL_28;
  System_Collections_Generic_List_object___AddRange(
    v15,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  CampaignTextListByWarGroupMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
                                                                                      this,
                                                                                      questId,
                                                                                      phase,
                                                                                      v16,
                                                                                      costCalcVal,
                                                                                      fixedVal,
                                                                                      isNotItemConsume,
                                                                                      v20);
  System_Collections_Generic_List_object___AddRange(
    v15,
    CampaignTextListByWarGroupMaster,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_28;
  manager = (int64_t *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_28;
  v19 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*manager + 304) >= (unsigned int)methodPtr_low
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*manager + 200) + 8 * methodPtr_low - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_28;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                               questId,
                               manager[73],
                               0LL);
    if ( !EntityByQuestIdAndTime )
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    v26 = EntityByQuestIdAndTime;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_28;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
            &entity,
            v26->fields.eventId,
            (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
    if ( !entity )
      goto LABEL_28;
    if ( LODWORD(entity[1].monitor) != 25 )
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    endedAt = v26->fields.endedAt;
    p_endedAt = &v26->fields.endedAt;
    if ( endedAt <= 0 )
      v29 = (int64_t *)&entity[6];
    else
      v29 = p_endedAt;
    v30 = *v29;
    EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13348/*"TIME_REST_STRING"*/, 0LL);
    v33 = System_String__Concat_61720296(
            EventName,
            (System_String_o *)StringLiteral_117/*" "*/,
            v32,
            (System_String_o *)StringLiteral_24983/*"{0}"*/,
            0LL);
    v34 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v34, v33, v30, 0, 1, 0LL, 0LL);
    items = v15->fields._items;
    v38 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++v15->fields._version;
    if ( items )
    {
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v34,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v34;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v34, v35, v36);
      }
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    }
LABEL_28:
    sub_1B8880C(CampaignTextListByEventQuestMaster, v19);
  }
  sub_1B88ACC(manager);
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)QuestBoardListViewItemDraw__HasNewQuestInWar(
                                                                           v42,
                                                                           v43,
                                                                           v44,
                                                                           v45,
                                                                           v46);
}


System_Collections_Generic_List_QuestBoardInformationText__o *__fastcall QuestBoardListViewItemDraw__GetCampaignTextListByEventQuestMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        bool *isNotItemConsume,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *EnabledEventCampaignForQuest; // x25
  System_Collections_Generic_List_object__o *v13; // x23
  void *Instance; // x0
  QuestBoardListViewManager_c *v15; // x1
  DataManager_o *v16; // x20
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v18; // x29
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v20; // x24
  __int64 methodPtr_low; // x9
  Il2CppObject *v22; // x19
  System_Collections_Generic_List_object__o *v23; // x20
  int monitor; // w8
  unsigned int v25; // w26
  EventEntity_o *v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppObject *v32; // x21
  Il2CppClass **v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x0
  __int64 v40; // x20
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t current; // w1
  System_Func_object__bool__o *v46; // x21
  Il2CppObject *v47; // x0
  const MethodInfo *v48; // x6
  Il2CppObject *QuestBoardInformationText; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x1
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  __int64 v57; // x20
  __int64 v58; // x0
  __int64 v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w1
  System_Func_object__bool__o *v63; // x21
  Il2CppObject *v64; // x0
  const MethodInfo *v65; // x7
  void *v67; // x0
  void *v68; // x19
  int v69; // w1
  __int64 v70; // x20
  int32_t *v71; // [xsp+0h] [xbp-C0h]
  int32_t *v72; // [xsp+8h] [xbp-B8h]
  bool *v73; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+40h] [xbp-80h] BYREF

  EnabledEventCampaignForQuest = (System_Collections_Generic_IEnumerable_TSource__o *)(unsigned int)questId;
  if ( (byte_4A580B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&System_Func_EventEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass352_0__GetCampaignTextListByEventQuestMaster_b__0__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass352_0_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass352_1__GetCampaignTextListByEventQuestMaster_b__1__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass352_1_TypeInfo);
    byte_4A580B5 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v16 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v18 = DataManager__GetMasterData_object_(
          v16,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v16,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_48;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (int32_t)EnabledEventCampaignForQuest,
               (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_48;
  v20 = (QuestEntity_o *)Instance;
  Instance = mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_48;
  v15 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !MasterData_object )
      goto LABEL_48;
    v71 = costCalcVal;
    v72 = fixedVal;
    v73 = isNotItemConsume;
    EnabledEventCampaignForQuest = (System_Collections_Generic_IEnumerable_TSource__o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                                                                          (EventQuestMaster_o *)MasterData_object,
                                                                                          (int32_t)EnabledEventCampaignForQuest,
                                                                                          phase,
                                                                                          *((_QWORD *)Instance + 73),
                                                                                          7,
                                                                                          0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    v22 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    costCalcVal = (int32_t *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)costCalcVal,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !EnabledEventCampaignForQuest )
      goto LABEL_48;
    monitor = (int)EnabledEventCampaignForQuest[1].monitor;
    if ( monitor >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= monitor )
          sub_1B88814(Instance, v15);
        v26 = (EventEntity_o *)*((_QWORD *)&EnabledEventCampaignForQuest[2].klass + (int)v25);
        if ( !v26 || !v18 )
          break;
        Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)v18, v26->fields.id, 0LL);
        if ( Instance )
        {
          if ( !v23 )
            break;
          items = v23->fields._items;
          v30 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            break;
          size = v23->fields._size;
          v32 = (Il2CppObject *)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)Instance,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v32;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
          }
          if ( !v22 )
            break;
          Instance = (void *)EventCampaignReleaseMaster__isRelease(
                               (EventCampaignReleaseMaster_o *)v22,
                               (int32_t)v32[1].klass,
                               HIDWORD(v32[1].klass),
                               0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !costCalcVal )
              break;
            v36 = *((_QWORD *)costCalcVal + 2);
            v37 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++costCalcVal[7];
            if ( !v36 )
              break;
            v38 = costCalcVal[6];
            if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)costCalcVal,
                v32,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = v36 + 8 * v38;
              costCalcVal[6] = v38 + 1;
              *(_QWORD *)(v39 + 32) = v32;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 32), (int32_t)v32, v34, v35);
            }
          }
        }
        monitor = (int)EnabledEventCampaignForQuest[1].monitor;
        if ( (int)++v25 >= monitor )
          goto LABEL_31;
      }
LABEL_48:
      sub_1B8880C(Instance, v15);
    }
LABEL_31:
    Instance = EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v23,
                 0LL);
    if ( !Instance )
      goto LABEL_48;
    v18 = (Il2CppObject *)&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v76,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v77 = v76;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v77,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v40 = sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass352_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass352_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass352_0_o *)v40,
        0LL);
      if ( !v40 )
        sub_1B8880C(v41, v42);
      current = (int32_t)v77.fields._current;
      *(_QWORD *)(v40 + 16) = v77.fields._current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 16), current, v43, v44);
      v46 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        (Il2CppObject *)v40,
        Method_QuestBoardListViewItemDraw___c__DisplayClass352_0__GetCampaignTextListByEventQuestMaster_b__0__,
        0LL);
      v47 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
              EnabledEventCampaignForQuest,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
      QuestBoardInformationText = (Il2CppObject *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                                    this,
                                                    v20,
                                                    (EventEntity_o *)v47,
                                                    *(EventCampaignEntity_o **)(v40 + 16),
                                                    phase,
                                                    isQuestNoneCleared,
                                                    v48);
      v52 = QuestBoardInformationText;
      if ( QuestBoardInformationText )
      {
        if ( !v13 )
          sub_1B8880C(QuestBoardInformationText, QuestBoardInformationText);
        v53 = v13->fields._items;
        v54 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++v13->fields._version;
        if ( !v53 )
          sub_1B8880C(QuestBoardInformationText, QuestBoardInformationText);
        v55 = v13->fields._size;
        if ( (unsigned int)v55 >= v53->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            QuestBoardInformationText,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &v53->obj.klass + v55;
          v13->fields._size = v55 + 1;
          v56[4] = (Il2CppClass *)v52;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v52, v50, v51);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v77,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  else
  {
    sub_1B88ACC(Instance);
    v68 = v67;
    if ( v69 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v77,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      sub_1C73040(v68);
    }
    v70 = *(_QWORD *)__cxa_begin_catch(v67);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v77,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v70 )
      sub_1B88804(v70);
  }
  Instance = EventCampaignMaster__CheckCampaignGrouping(
               (System_Collections_Generic_List_EventCampaignEntity__o *)costCalcVal,
               0LL);
  if ( !Instance )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v77 = v76;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(&v77, (const MethodInfo_3278304 *)v18->klass) )
  {
    v57 = sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass352_1_TypeInfo);
    QuestBoardListViewItemDraw___c__DisplayClass352_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass352_1_o *)v57,
      0LL);
    if ( !v57 )
      sub_1B8880C(v58, v59);
    v62 = (int32_t)v77.fields._current;
    *(_QWORD *)(v57 + 16) = v77.fields._current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 16), v62, v60, v61);
    v63 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v63,
      (Il2CppObject *)v57,
      Method_QuestBoardListViewItemDraw___c__DisplayClass352_1__GetCampaignTextListByEventQuestMaster_b__1__,
      0LL);
    v64 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
            EnabledEventCampaignForQuest,
            (System_Func_TSource__bool__o *)v63,
            (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    QuestBoardListViewItemDraw__CalcQuestCost(
      (QuestBoardListViewItemDraw_o *)v64,
      v20,
      *(EventCampaignEntity_o **)(v57 + 16),
      isQuestNoneCleared,
      v71,
      v72,
      v73,
      v65);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v13;
}


System_Collections_Generic_List_QuestBoardInformationText__o *__fastcall QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        bool *isNotItemConsume,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x24
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataManager_o *v13; // x20
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v15; // x25
  QuestEntity_o *v16; // x26
  DataManager_o *v17; // x27
  int32_t spotId; // w19
  int32_t klass_high; // w29
  int m_CancellationTokenSource; // w8
  unsigned int v21; // w22
  bool v22; // w28
  EventEntity_o *v23; // x19
  struct DataMasterBase_array *datalist; // x8
  EventCampaignEntity_o *v25; // x20
  const MethodInfo *v26; // x6
  QuestBoardInformationText_o *QuestBoardInformationText; // x19
  const MethodInfo *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A580B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarGroupMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A580B6 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v13 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  v15 = DataManager__GetMasterData_object_(
          v13,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v13,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                questId,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_32;
  v16 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 7, 1, 0LL);
  if ( !v16 )
    goto LABEL_32;
  v17 = Instance;
  spotId = v16->fields.spotId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                spotId,
                                (const MethodInfo_311D988 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    klass_high = HIDWORD(entity[1].klass);
    if ( klass_high )
    {
      if ( !v17 )
        goto LABEL_32;
      m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource >= 1 )
      {
        v21 = 0;
        v22 = isQuestNoneCleared;
        while ( 1 )
        {
          if ( v21 >= m_CancellationTokenSource )
            sub_1B88814(Instance, v12);
          v23 = (EventEntity_o *)*((_QWORD *)&v17->fields._DispLog + (int)v21);
          if ( !v23 || !v15 )
            break;
          Instance = (DataManager_o *)EventCampaignMaster__getData((EventCampaignMaster_o *)v15, v23->fields.id, 0LL);
          if ( Instance )
          {
            datalist = Instance->fields.datalist;
            v25 = (EventCampaignEntity_o *)Instance;
            if ( !datalist )
              break;
            if ( *(_QWORD *)&datalist->max_length )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarGroupMaster___);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)WarGroupMaster__HasEntity(
                                            (WarGroupMaster_o *)Instance,
                                            klass_high,
                                            v16->fields.afterClear,
                                            v16->fields.type,
                                            v25->fields.targetIds,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                QuestBoardInformationText = QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                              this,
                                              v16,
                                              v23,
                                              v25,
                                              phase,
                                              v22,
                                              v26);
                QuestBoardListViewItemDraw__CalcQuestCost(
                  (QuestBoardListViewItemDraw_o *)QuestBoardInformationText,
                  v16,
                  v25,
                  v22,
                  costCalcVal,
                  fixedVal,
                  isNotItemConsume,
                  v28);
                if ( QuestBoardInformationText )
                {
                  if ( !v10 )
                    break;
                  items = v10->fields._items;
                  v32 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
                  ++v10->fields._version;
                  if ( !items )
                    break;
                  size = v10->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)QuestBoardInformationText,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v34 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v34[4] = (Il2CppClass *)QuestBoardInformationText;
                    sub_1B88554(
                      (ServantStatusBattleListViewItem_o *)(v34 + 4),
                      (int32_t)QuestBoardInformationText,
                      v29,
                      v30);
                  }
                }
              }
            }
          }
          m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource;
          if ( (int)++v21 >= m_CancellationTokenSource )
            return (System_Collections_Generic_List_QuestBoardInformationText__o *)v10;
        }
LABEL_32:
        sub_1B8880C(Instance, v12);
      }
    }
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v10;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetDispQuestName(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v6; // x20
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *BattleName; // x1

  if ( (byte_4A5809B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A5809B = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v6 = this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_13;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_24983/*"{0}"*/, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        this = (QuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
        if ( MasterData_object )
        {
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                   (int32_t)this,
                                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
            return System_String__Format((System_String_o *)v6, BattleName, 0LL);
          }
        }
      }
LABEL_13:
      sub_1B8880C(this, questEnt);
    }
  }
  return (System_String_o *)v6;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
        QuestBoardListViewItemDraw_o *this,
        EventEntity_o *eventEnt,
        int32_t warId,
        bool isActiveEventWar,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  __int64 v11; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  WarEntity_o *Entity; // x0
  int32_t PrioredBannerId; // w0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  QuestBoardListViewItemDraw_c *v18; // x8
  int v19; // w19
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v21; // x0
  QuestBoardListViewItemDraw_c *v23; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v25; // x0
  int v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A580A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580A5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_object )
    goto LABEL_32;
  if ( isActiveEventWar )
    v10 = 4;
  else
    v10 = 5;
  if ( isActiveEventWar )
    v11 = 60LL;
  else
    v11 = 56LL;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Master_object,
                              eventEnt->fields.id,
                              v10,
                              0LL);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v11);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = (WarEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            warId,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        warId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_object )
      {
        PrioredBannerId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_object, 0LL);
        v18 = QuestBoardListViewItemDraw_TypeInfo;
        overwriteId = PrioredBannerId;
        v19 = PrioredBannerId;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v18 = QuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v18->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v26 = v19;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v15, v16, v17);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v21, 0LL);
      }
    }
LABEL_32:
    sub_1B8880C(Master_object, v9);
  }
  v23 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v23 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v23->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v25 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_61707032(EVENT_WAR_SPNAME_PREFIX, v25, 0LL);
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        QuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  QuestBoardListViewItemDraw_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4A5809A & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5809A = 1;
  }
  v4 = (System_String_o **)&StringLiteral_1/*""*/;
  switch ( questType )
  {
    case 1:
      v5 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v5 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 888LL;
      goto LABEL_13;
    case 2:
    case 5:
      v5 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v5 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 896LL;
      goto LABEL_13;
    case 3:
      v5 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v5 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 880LL;
LABEL_13:
      v4 = (System_String_o **)((char *)v5->static_fields + v6);
      break;
    default:
      return *v4;
  }
  return *v4;
}


int32_t __fastcall QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
        QuestBoardListViewItemDraw_o *this,
        int32_t phaseType,
        bool isRepeatLast,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v6; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v7; // x8
  QuestBoardListViewItemDraw_c *v9; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A580B2 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580B2 = 1;
  }
  if ( phaseType == 1 )
  {
    v9 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v9 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v9->static_fields;
    if ( isRepeatLast )
      return static_fields->QUEST_BOARD_PHASE_EX_LOOF_INTERVAL;
    else
      return static_fields->QUEST_BOARD_PHASE_EX_INTERVAL;
  }
  else if ( phaseType )
  {
    return 0;
  }
  else
  {
    v6 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v6 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v7 = v6->static_fields;
    if ( isRepeatLast )
      return v7->QUEST_BOARD_PHASE_LOOF_INTERVAL;
    else
      return v7->QUEST_BOARD_PHASE_INTERVAL;
  }
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
        QuestBoardListViewItemDraw_o *this,
        int32_t phaseType,
        bool isOn,
        bool isLastIndex,
        bool isRepeatFirst,
        bool isRepeatLast,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v12; // x0
  System_String_o **p_msPhaseSprName_LoopFirstOff; // x8
  QuestBoardListViewItemDraw_c *v15; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  QuestBoardListViewItemDraw_c *v17; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v18; // x8
  QuestBoardListViewItemDraw_c *v19; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v20; // x8

  if ( (byte_4A580B1 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A580B1 = 1;
  }
  if ( isLastIndex && isRepeatFirst )
  {
    v12 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v12 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_msPhaseSprName_LoopFirstOff = &v12->static_fields->msPhaseSprName_LoopFirstOff;
  }
  else if ( isRepeatLast )
  {
    v15 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v15 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v15->static_fields;
    if ( isOn )
      p_msPhaseSprName_LoopFirstOff = &static_fields->msPhaseSprName_LoopOn;
    else
      p_msPhaseSprName_LoopFirstOff = &static_fields->msPhaseSprName_LoopOff;
  }
  else if ( phaseType == 1 )
  {
    v19 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v19 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v20 = v19->static_fields;
    if ( isOn )
      p_msPhaseSprName_LoopFirstOff = &v20->msPhaseSprName_ExArrowOn;
    else
      p_msPhaseSprName_LoopFirstOff = &v20->msPhaseSprName_ExArrowOff;
  }
  else if ( phaseType )
  {
    p_msPhaseSprName_LoopFirstOff = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    v17 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v17 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v18 = v17->static_fields;
    if ( isOn )
      p_msPhaseSprName_LoopFirstOff = &v18->msPhaseSprName_ArrowOn;
    else
      p_msPhaseSprName_LoopFirstOff = &v18->msPhaseSprName_ArrowOff;
  }
  return *p_msPhaseSprName_LoopFirstOff;
}


bool __fastcall QuestBoardListViewItemDraw__GetPhasePresentGiftData(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItemDraw_PhasePresentData_o **phasePresentData,
        QuestEntity_o *questEnt,
        int32_t currentPhase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  QuestPhasePresentEntity_o *v13; // x8
  QuestPhasePresentEntity_o *presentEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A580A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhasePresentMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    byte_4A580A1 = 1;
  }
  presentEnt = 0LL;
  *phasePresentData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)phasePresentData, 0, (int32_t)questEnt, currentPhase);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhasePresentMaster___);
  if ( !questEnt || !Master_object )
    goto LABEL_15;
  if ( QuestPhasePresentMaster__IsContainEntityFromPhase(
         (QuestPhasePresentMaster_o *)Master_object,
         &presentEnt,
         questEnt->fields.id,
         currentPhase,
         0LL) )
  {
    if ( !presentEnt )
      return 1;
    v10 = sub_1B887FC(QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    QuestBoardListViewItemDraw_PhasePresentData___ctor((QuestBoardListViewItemDraw_PhasePresentData_o *)v10, 0LL);
    v13 = presentEnt;
    if ( presentEnt && v10 )
    {
      *(_QWORD *)(v10 + 16) = *(_QWORD *)&presentEnt->fields.phase;
      *(_DWORD *)(v10 + 24) = v13->fields.giftIconId;
      *phasePresentData = (QuestBoardListViewItemDraw_PhasePresentData_o *)v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)phasePresentData, v10, v11, v12);
      return 1;
    }
LABEL_15:
    sub_1B8880C(Master_object, v9);
  }
  return 0;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetQuestIconName(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  int32_t v6; // w19
  int32_t iconId; // t1
  QuestBoardListViewItemDraw_c *v8; // x0
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x20
  System_String_o *v10; // x1
  __int64 *v12; // x8

  if ( (byte_4A5809D & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_20428/*"img_questtxt_free"*/);
    sub_1B885B0(&StringLiteral_20427/*"img_questtxt_event"*/);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5809D = 1;
  }
  if ( !questEnt )
    sub_1B8880C(this, questEnt);
  iconId = questEnt->fields.iconId;
  v6 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v12 = &StringLiteral_20427/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v12 = &StringLiteral_20428/*"img_questtxt_free"*/;
    }
    else
    {
      v12 = (__int64 *)&StringLiteral_1/*""*/;
    }
    return (System_String_o *)*v12;
  }
  else
  {
    v8 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v8 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_ICON_SPNAME_PREFIX = v8->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v10 = System_Int32__ToString(v6, 0LL);
    return System_String__Concat_61707032(QUEST_BOARD_ICON_SPNAME_PREFIX, v10, 0LL);
  }
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetQuestIconNameForMainType(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t v6; // w20
  int32_t iconId; // w21
  QuestBoardListViewItemDraw_c *v8; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x19
  System_String_o *v11; // x0
  System_String_o *CHAPTER_SP_BASE_NAME; // x20
  Il2CppObject *v14; // x0
  int32_t chapterId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5809E & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A5809E = 1;
  }
  if ( !questEnt )
    sub_1B8880C(this, questEnt);
  v6 = (_DWORD)questEnt + 68;
  iconId = questEnt->fields.iconId;
  v8 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v8 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( iconId < 1 )
  {
    CHAPTER_SP_BASE_NAME = static_fields->CHAPTER_SP_BASE_NAME;
    chapterId = questEnt->fields.chapterId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chapterId, method, v3, v4);
    return System_String__Format(CHAPTER_SP_BASE_NAME, v14, 0LL);
  }
  else
  {
    QUEST_BOARD_ICON_SPNAME_PREFIX = static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v11 = System_Int32__ToString(v6, 0LL);
    return System_String__Concat_61707032(QUEST_BOARD_ICON_SPNAME_PREFIX, v11, 0LL);
  }
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetRecommendLv(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questPhase,
        bool hasBattle,
        bool isClosed,
        const MethodInfo *method)
{
  if ( questEnt && hasBattle && (!isClosed || !QuestEntity__HasFlag(questEnt, 1024LL, 0LL)) )
    return QuestEntity__getRecommendLv_39472304(questEnt, questPhase, 0LL);
  else
    return 0LL;
}


RoadmapButtonPrefab_o *__fastcall QuestBoardListViewItemDraw__GetRoadmapButton(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.roadmapButton;
}


UnityEngine_GameObject_o *__fastcall QuestBoardListViewItemDraw__GetStatusSp(
        QuestBoardListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *mStatusSp; // x8

  mStatusSp = this->fields.mStatusSp;
  if ( !mStatusSp )
    sub_1B8880C(this, status);
  if ( status - 1 >= mStatusSp->max_length )
    sub_1B88814(this, status);
  return mStatusSp->m_Items[status - 1];
}


bool __fastcall QuestBoardListViewItemDraw__HasNewQuestInWar(
        QuestBoardListViewItemDraw_o *this,
        System_Collections_Generic_List_MapControl_QuestInfo__o *questList,
        int32_t warId,
        bool isMainInterlude,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass314_0_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4A58094 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1B885B0(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass314_0__HasNewQuestInWar_b__0__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass314_0_TypeInfo);
    byte_4A58094 = 1;
  }
  v8 = (QuestBoardListViewItemDraw___c__DisplayClass314_0_o *)sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass314_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass314_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B8880C(v9, v10);
  v8->fields.isMainInterlude = isMainInterlude;
  v8->fields.warId = warId;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_MapControl_QuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_QuestBoardListViewItemDraw___c__DisplayClass314_0__HasNewQuestInWar_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__InitPhase(
        QuestBoardListViewItemDraw_o *this,
        bool isDoubleItemConsume,
        bool isDoubleItemConsumeQp,
        bool isTripleItemConsume,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mPhaseObj; // x0
  QuestBoardListViewItemDraw_c *v10; // x8
  UnityEngine_Transform_o *v11; // x20
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v13; // x9
  struct QuestBoardListViewItemDraw_StaticFields *p_z; // x8
  __int64 *p_PHASE_STR_SCL_DOUBLE; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v16; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v17; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v18; // x9
  __int64 v19; // d0 OVERLAPPED
  int32_t POS_Y_ITVL_AREA; // s2
  int v21; // s1

  if ( (byte_4A580B0 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580B0 = 1;
  }
  mPhaseObj = this->fields.mPhaseObj;
  if ( !mPhaseObj )
    goto LABEL_34;
  mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mPhaseObj, 0LL);
  v10 = QuestBoardListViewItemDraw_TypeInfo;
  v11 = (UnityEngine_Transform_o *)mPhaseObj;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v10 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( !isDoubleItemConsumeQp )
  {
    if ( isDoubleItemConsume )
    {
      if ( v11 )
      {
        UnityEngine_Transform__set_localPosition(v11, static_fields->PHASE_OBJ_POS_DOUBLE, 0LL);
        mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
        if ( mPhaseObj )
        {
          mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)mPhaseObj,
                                                    0LL);
          if ( mPhaseObj )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)mPhaseObj,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_DOUBLE,
              0LL);
            mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
            if ( mPhaseObj )
            {
              mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)mPhaseObj,
                                                        0LL);
              if ( mPhaseObj )
              {
                v16 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
                p_z = (struct QuestBoardListViewItemDraw_StaticFields *)&v16->PHASE_STR_SCL_DOUBLE.fields.z;
                p_PHASE_STR_SCL_DOUBLE = (__int64 *)&v16->PHASE_STR_SCL_DOUBLE;
                goto LABEL_33;
              }
            }
          }
        }
      }
    }
    else if ( isTripleItemConsume )
    {
      if ( v11 )
      {
        UnityEngine_Transform__set_localPosition(v11, static_fields->PHASE_OBJ_POS_TRIPLE_ITEM, 0LL);
        mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
        if ( mPhaseObj )
        {
          mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)mPhaseObj,
                                                    0LL);
          if ( mPhaseObj )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)mPhaseObj,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_TRIPLE_ITEM,
              0LL);
            mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
            if ( mPhaseObj )
            {
              mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)mPhaseObj,
                                                        0LL);
              if ( mPhaseObj )
              {
                v17 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
                p_z = (struct QuestBoardListViewItemDraw_StaticFields *)&v17->PHASE_STR_SCL_TRIPLE_ITEM.fields.z;
                p_PHASE_STR_SCL_DOUBLE = (__int64 *)&v17->PHASE_STR_SCL_TRIPLE_ITEM;
                goto LABEL_33;
              }
            }
          }
        }
      }
    }
    else if ( v11 )
    {
      UnityEngine_Transform__set_localPosition(v11, static_fields->PHASE_OBJ_POS_SINGLE, 0LL);
      mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
      if ( mPhaseObj )
      {
        mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mPhaseObj,
                                                  0LL);
        if ( mPhaseObj )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)mPhaseObj,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_SINGLE,
            0LL);
          mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
          if ( mPhaseObj )
          {
            mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)mPhaseObj,
                                                      0LL);
            if ( mPhaseObj )
            {
              v18 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
              p_z = (struct QuestBoardListViewItemDraw_StaticFields *)&v18->PHASE_STR_SCL_SINGLE.fields.z;
              p_PHASE_STR_SCL_DOUBLE = (__int64 *)&v18->PHASE_STR_SCL_SINGLE;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B8880C(mPhaseObj, isDoubleItemConsume);
  }
  if ( !v11 )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(v11, static_fields->PHASE_OBJ_POS_DOUBLE_QP, 0LL);
  mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
  if ( !mPhaseObj )
    goto LABEL_34;
  mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)mPhaseObj,
                                            0LL);
  if ( !mPhaseObj )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)mPhaseObj,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_DOUBLE_QP,
    0LL);
  mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
  if ( !mPhaseObj )
    goto LABEL_34;
  mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)mPhaseObj,
                                            0LL);
  if ( !mPhaseObj )
    goto LABEL_34;
  v13 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  p_z = (struct QuestBoardListViewItemDraw_StaticFields *)&v13->PHASE_STR_SCL_DOUBLE_QP.fields.z;
  p_PHASE_STR_SCL_DOUBLE = (__int64 *)&v13->PHASE_STR_SCL_DOUBLE_QP;
LABEL_33:
  v19 = *p_PHASE_STR_SCL_DOUBLE;
  POS_Y_ITVL_AREA = p_z->POS_Y_ITVL_AREA;
  v21 = HIDWORD(*p_PHASE_STR_SCL_DOUBLE);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)mPhaseObj, *(UnityEngine_Vector3_o *)&v19, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsBanners(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8

  if ( !questBoardItem || (quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField) == 0LL )
    sub_1B8880C(this, questBoardItem);
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  return AreaBoardInfo_k__BackingField
      && AreaBoardInfo_k__BackingField->fields.questBoardType == 1
      && this->fields.mBannerCount > 1;
}


bool __fastcall QuestBoardListViewItemDraw__IsDispQuestName(
        QuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( (unsigned int)(questType - 2) > 3 )
    LOBYTE(v3) = 0;
  else
    return (0xBu >> ((questType - 2) & 0xF)) & 1;
  return v3;
}


bool __fastcall QuestBoardListViewItemDraw__IsDisplayNext(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mNextSp; // x0

  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp || (mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0LL)) == 0LL )
    sub_1B8880C(mNextSp, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mNextSp, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsDisplayRewardNotGive(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  int32_t questPhase; // w20
  int32_t PhaseMax; // w8
  int32_t v6; // w20
  Il2CppObject *Master_object; // x0

  if ( (byte_4A580A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&DataManager_TypeInfo);
    byte_4A580A4 = 1;
  }
  if ( !questInfo )
    sub_1B8880C(this, questInfo);
  questPhase = questInfo->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(questInfo, 0LL);
  if ( questPhase + 1 < PhaseMax )
    v6 = questPhase + 1;
  else
    v6 = PhaseMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( Master_object )
    LOBYTE(Master_object) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                              (QuestBehaviorMaster_o *)Master_object,
                              questInfo->fields.questId,
                              v6,
                              5,
                              0LL);
  return (char)Master_object;
}


bool __fastcall QuestBoardListViewItemDraw__IsDisplayRoadmapButton(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *roadmapButton; // x0

  roadmapButton = (UnityEngine_Component_o *)this->fields.roadmapButton;
  if ( !roadmapButton
    || (roadmapButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(roadmapButton, 0LL)) == 0LL )
  {
    sub_1B8880C(roadmapButton, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)roadmapButton, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsEventTime(
        QuestBoardListViewItemDraw_o *this,
        EventEntity_o *eventEntity,
        int64_t checkTime,
        const MethodInfo *method)
{
  return eventEntity && EventEntity__IsEventPeriod(eventEntity, checkTime, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsFlickL(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v3; // x0
  float mTouchPosDif; // s8

  if ( (byte_4A580C6 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580C6 = 1;
  }
  v3 = QuestBoardListViewItemDraw_TypeInfo;
  mTouchPosDif = this->fields.mTouchPosDif;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v3 = QuestBoardListViewItemDraw_TypeInfo;
  }
  return mTouchPosDif <= (float)-v3->static_fields->FLICK_THRESHOLD;
}


bool __fastcall QuestBoardListViewItemDraw__IsFlickR(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v3; // x0
  float mTouchPosDif; // s8

  if ( (byte_4A580C7 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580C7 = 1;
  }
  v3 = QuestBoardListViewItemDraw_TypeInfo;
  mTouchPosDif = this->fields.mTouchPosDif;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v3 = QuestBoardListViewItemDraw_TypeInfo;
  }
  return mTouchPosDif >= v3->static_fields->FLICK_THRESHOLD;
}


bool __fastcall QuestBoardListViewItemDraw__IsInfoTextListNullOrEmpty(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4A580BC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4A580BC = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsInterruptedQuest(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v8; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A580CD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A580CD = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    sub_1B8880C(UserId, v8);
  return UserInterruptionQuestMaster__TryGetEntity(
           (UserInterruptionQuestMaster_o *)Master_object,
           &entity,
           UserId,
           questId,
           phase,
           0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsMainWar(
        QuestBoardListViewItemDraw_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A58099 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58099 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->FesWarId == warId )
    return 1;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
         warId,
         (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     warId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  return LODWORD(Instance[6].klass) == 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsMultiInfoText(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4A580BB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4A580BB = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return mInfoTextList && mInfoTextList->fields._size > 1;
}


bool __fastcall QuestBoardListViewItemDraw__IsNeedAnimEventTarget(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0

  eventTargetComponent = this->fields.eventTargetComponent;
  if ( !eventTargetComponent )
    sub_1B8880C(0LL, method);
  return BoardOptionEventTargetComponent__IsNeedAnim(eventTargetComponent, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
        QuestBoardListViewItemDraw_o *this,
        System_Collections_Generic_List_MapControl_QuestInfo__o *questList,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  __int64 v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  WarEntity_o *v11; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Func_object__bool__o *v15; // x21

  if ( (byte_4A58093 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass313_0__IsPurchasedByRarePrism_b__0__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass313_0_TypeInfo);
    byte_4A58093 = 1;
  }
  v6 = sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass313_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass313_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass313_0_o *)v6,
    0LL);
  if ( !v6 )
    goto LABEL_9;
  *(_QWORD *)(v6 + 16) = warEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)warEnt, v9, v10);
  v11 = *(WarEntity_o **)(v6 + 16);
  if ( v11 && WarEntity__IsShop(v11, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v6 + 24) = MasterData_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)MasterData_object, v13, v14);
      v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_MapControl_QuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v15,
        (Il2CppObject *)v6,
        Method_QuestBoardListViewItemDraw___c__DisplayClass313_0__IsPurchasedByRarePrism_b__0__,
        0LL);
      return BasicHelper__Any_object_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v15,
               (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_1B8880C(Instance, v8);
  }
  return 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsRewardIcons(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x8

  mRewardIconInfs = this->fields.mRewardIconInfs;
  return mRewardIconInfs && (signed int)mRewardIconInfs->max_length > 1;
}


bool __fastcall QuestBoardListViewItemDraw__IsValidSupportSelection(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        int32_t phase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_Object_array *RestrictionList; // x21
  QuestBoardListViewItemDraw___c_c *v9; // x0
  System_Func_object__bool__o *_9__356_0; // x22
  Il2CppObject *v11; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x0
  __int64 v16; // x0
  _BOOL4 v17; // w22
  bool v18; // w8
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A580B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1B885B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__356_0__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4A580B8 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
  if ( Instance )
  {
    if ( !questEntity )
      goto LABEL_38;
    RestrictionList = (System_Object_array *)QuestRestrictionMaster__getRestrictionList(
                                               (QuestRestrictionMaster_o *)Instance,
                                               questEntity->fields.id,
                                               phase,
                                               0LL);
    if ( RestrictionList )
    {
      v9 = QuestBoardListViewItemDraw___c_TypeInfo;
      if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
        v9 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      _9__356_0 = (System_Func_object__bool__o *)v9->static_fields->__9__356_0;
      if ( !_9__356_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v9->static_fields->__9;
        _9__356_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__356_0,
          v11,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__356_0__,
          0LL);
        static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__356_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__356_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__356_0, (int32_t)_9__356_0, v13, v14);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_object__48672124(
                                  RestrictionList,
                                  (System_Func_T__bool__o *)_9__356_0,
                                  (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BDA48C(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BDA48C(v16);
  Instance = **(DataManager_o ***)(v16 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !Instance )
  {
LABEL_38:
    sub_1B8880C(Instance, v7);
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(
          (QuestRestrictionInfoMaster_o *)Instance,
          &entity,
          questEntity->fields.id,
          phase,
          0LL) )
  {
    if ( !QuestEntity__HasFlag_39473080(questEntity, 0x80000LL, phase, 0LL)
      && !QuestEntity__HasFlag_39473080(questEntity, 0x100000LL, phase, 0LL)
      && !QuestEntity__HasFlag_39473080(questEntity, 0x10000000LL, phase, 0LL) )
    {
      LOBYTE(v17) = questEntity->fields.type != 7;
      if ( ((unsigned __int8)RestrictionList & 1) != 0 )
        goto LABEL_34;
      goto LABEL_36;
    }
LABEL_33:
    LOBYTE(v17) = 0;
    if ( ((unsigned __int8)RestrictionList & 1) != 0 )
      goto LABEL_34;
LABEL_36:
    v18 = !QuestEntity__HasFlag_39473080(questEntity, 2LL, phase, 0LL);
    return v17 && v18;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_38;
  if ( QuestRestrictionInfoEntity__HasFlag(entity, 0x80000LL, 0LL) )
    goto LABEL_33;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_38;
  if ( QuestRestrictionInfoEntity__HasFlag(entity, 0x100000LL, 0LL) )
    goto LABEL_33;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_38;
  v17 = !QuestRestrictionInfoEntity__HasFlag(entity, 0x10000000LL, 0LL);
  if ( ((unsigned __int8)RestrictionList & 1) == 0 )
    goto LABEL_36;
LABEL_34:
  v18 = 0;
  return v17 && v18;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__LateUpdateItem(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  if ( questBoardItem && dispMode )
  {
    if ( questBoardItem->fields._quest_info_k__BackingField )
      QuestBoardListViewItemDraw__MoveBanner(this, questBoardItem, *(const MethodInfo **)&dispMode);
  }
}


void __fastcall QuestBoardListViewItemDraw__LoadBoardIconTexture(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  QuestBoardListViewItemDraw_c *v18; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v21; // x0
  struct System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_String_o *boardIconName; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x19
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A580CA & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass389_0__LoadBoardIconTexture_b__0__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass389_0_TypeInfo);
    byte_4A580CA = 1;
  }
  v7 = sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass389_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass389_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)callback, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v14);
  if ( !questEntity )
    goto LABEL_14;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v18 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v18 = QuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v18->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v30 = iconId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v15, v16, v17);
  v22 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v21, 0LL);
  this->fields.boardIconName = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardIconName, (int32_t)v22, v23, v24);
  boardIconName = this->fields.boardIconName;
  *(_QWORD *)(v7 + 16) = boardIconName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)boardIconName, v26, v27);
  v28 = System_String__Concat_61707032(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewItemDraw___c__DisplayClass389_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v28, v29, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(Instance, v9);
  }
}


void __fastcall QuestBoardListViewItemDraw__MoveBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  WebViewManager_o *IsBanners; // x0
  const MethodInfo *v6; // x1
  char v7; // w21
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x21
  int32_t bannerFocusIndex; // w22
  __int64 v11; // x23
  struct TerminalBannerComponent_array *v12; // x8
  Il2CppClass **v13; // x8
  TerminalBannerComponent_o *v14; // x20
  const MethodInfo *v15; // x2
  int32_t v16; // w1
  char v17; // w21
  float realtimeSinceStartup; // s8
  __int64 v19; // x22
  struct TerminalBannerComponent_array *mTerminalBanners; // x8

  if ( (byte_4A580C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_1B885B0(&TerminalBannerComponent_TypeInfo);
    byte_4A580C4 = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (WebViewManager_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)WebViewManager__get_IsBusy(IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_MasterMission((CommonUI_o *)IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
  {
LABEL_12:
    v7 = 0;
  }
  else
  {
    v17 = (char)IsBanners;
    if ( !this->fields.mIsEnableBannerAutoMoveOld )
      QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(this, v6);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    if ( (float)(realtimeSinceStartup - this->fields.mBannerAutoMoveTimeOld) >= this->fields.mBannerAutoMoveTimeInterval )
    {
      if ( this->fields.mBannerCount >= 1 )
      {
        v19 = 0LL;
        while ( 1 )
        {
          mTerminalBanners = this->fields.mTerminalBanners;
          if ( !mTerminalBanners )
            break;
          if ( (unsigned int)v19 >= mTerminalBanners->max_length )
LABEL_41:
            sub_1B88814(IsBanners, v6);
          IsBanners = (WebViewManager_o *)mTerminalBanners->m_Items[v19];
          if ( !IsBanners )
            break;
          TerminalBannerComponent__StartAutoMoveL((TerminalBannerComponent_o *)IsBanners, 0LL);
          if ( (int)++v19 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_40:
        sub_1B8880C(IsBanners, v6);
      }
LABEL_37:
      this->fields.mBannerAutoMoveTimeOld = realtimeSinceStartup;
      v7 = (v17 & 1) == 0;
      IsBanners = (WebViewManager_o *)TerminalBannerComponent_TypeInfo;
      if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        IsBanners = (WebViewManager_o *)TerminalBannerComponent_TypeInfo;
      }
      this->fields.mBannerAutoMoveTimeInterval = *((float *)&IsBanners[1].fields.titleLabel->monitor + 1);
    }
    else
    {
      v7 = 1;
    }
  }
  this->fields.mIsEnableBannerAutoMoveOld = v7;
  if ( !questBoardItem )
    goto LABEL_40;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_40;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_40;
  if ( this->fields.mBannerCount >= 1 )
  {
    bannerFocusIndex = AreaBoardInfo_k__BackingField->fields.bannerFocusIndex;
    v11 = 0LL;
    do
    {
      v12 = this->fields.mTerminalBanners;
      if ( !v12 )
        goto LABEL_40;
      if ( (unsigned int)v11 >= v12->max_length )
        goto LABEL_41;
      v13 = &v12->obj.klass + v11;
      v14 = (TerminalBannerComponent_o *)v13[4];
      if ( !v14 )
        goto LABEL_40;
      TerminalBannerComponent__Move((TerminalBannerComponent_o *)v13[4], this, 0LL);
      IsBanners = (WebViewManager_o *)TerminalBannerComponent__IsFocus(v14, 0LL);
      if ( ((unsigned __int8)IsBanners & 1) != 0 )
        AreaBoardInfo_k__BackingField->fields.bannerFocusIndex = v14->fields.mIdx;
      ++v11;
    }
    while ( (int)v11 < this->fields.mBannerCount );
    v16 = AreaBoardInfo_k__BackingField->fields.bannerFocusIndex;
    if ( v16 != bannerFocusIndex )
      QuestBoardListViewItemDraw__UpdateDispBannerPoint(this, v16, v15);
  }
}


void __fastcall QuestBoardListViewItemDraw__OnChangeAlphaAnim(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  QuestBoardListViewItemDraw__ChangeNextInfoText(
    this,
    questBoardItem,
    questBoardManager,
    (const MethodInfo *)questBoardManager);
  QuestBoardListViewItemDraw__ChangeNextRewardIcon(this, questBoardManager, v7);
  QuestBoardListViewItemDraw__ChangeNextEventTarget(this, v8);
}


void __fastcall QuestBoardListViewItemDraw__OnDestroy(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventTargetComponent; // x20
  __int64 v4; // x1
  BoardOptionEventTargetComponent_o *v5; // x0

  if ( (byte_4A58089 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58089 = 1;
  }
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, method);
  eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
  {
    v5 = this->fields.eventTargetComponent;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    BoardOptionEventTargetComponent__DestroyList(v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__OnDragStartItem(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        QuestBoardListViewManager_o *qmanager,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v7; // x19
  UnityEngine_Camera_o *mUICamera; // x21
  UnityEngine_Vector2_o ScreenPosition_46566088; // kr00_8
  float v10; // s0
  float v11; // s1
  const MethodInfo *v12; // x3

  v7 = this;
  if ( (byte_4A580C0 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&CTouch_TypeInfo);
    byte_4A580C0 = 1;
  }
  if ( !questBoardItem )
    goto LABEL_13;
  if ( questBoardItem->fields._quest_info_k__BackingField )
  {
    if ( v7->fields.mIsPressedForDragX )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw__IsBanners(
                                               v7,
                                               questBoardItem,
                                               *(const MethodInfo **)&dispMode);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( qmanager )
        {
          mUICamera = qmanager->fields.mUICamera;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          ScreenPosition_46566088 = CTouch__getScreenPosition_46566088(mUICamera, 0LL);
          v10 = vabds_f32(v7->fields.mPressPos.fields.x, ScreenPosition_46566088.fields.x);
          v11 = vabds_f32(v7->fields.mPressPos.fields.y, ScreenPosition_46566088.fields.y);
          v7->fields.mIsEnableDragX = v10 > v11;
          this = (QuestBoardListViewItemDraw_o *)qmanager->fields.scrollView;
          if ( this )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v10 <= v11, 0LL);
            QuestBoardListViewItemDraw__SetDispBannerArrows(v7, v7->fields.mIsEnableDragX, 0, v12);
            return;
          }
        }
LABEL_13:
        sub_1B8880C(this, questBoardItem);
      }
    }
  }
}


void __fastcall QuestBoardListViewItemDraw__OnPressBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  TerminalBannerComponent_o *IsBanners; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  struct TerminalBannerComponent_array *mTerminalBanners; // x8

  IsBanners = (TerminalBannerComponent_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
  {
    if ( this->fields.mBannerCount >= 1 )
    {
      v7 = 0LL;
      do
      {
        mTerminalBanners = this->fields.mTerminalBanners;
        if ( !mTerminalBanners )
          goto LABEL_10;
        if ( (unsigned int)v7 >= mTerminalBanners->max_length )
          sub_1B88814(IsBanners, v5);
        IsBanners = mTerminalBanners->m_Items[v7];
        if ( !IsBanners )
LABEL_10:
          sub_1B8880C(IsBanners, v5);
        TerminalBannerComponent__OnPress(IsBanners, this, 0LL);
        ++v7;
      }
      while ( (int)v7 < this->fields.mBannerCount );
    }
    QuestBoardListViewItemDraw__SetDispBannerArrows(this, 1, 0, v6);
  }
}


void __fastcall QuestBoardListViewItemDraw__OnPressItem(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v8; // x20
  UnityEngine_Camera_o *mUICamera; // x21
  const MethodInfo *v10; // x2

  v8 = this;
  if ( (byte_4A580BF & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&CTouch_TypeInfo);
    byte_4A580BF = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    v8->fields.mIsPressed = 1;
    if ( !questBoardManager || (this = (QuestBoardListViewItemDraw_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_1B8880C(this, questBoardItem);
    if ( !UIScrollView__IsLimitOverPosition((UIScrollView_o *)this, 0LL) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8->fields.mPressPos = CTouch__getScreenPosition_46566088(mUICamera, 0LL);
      v8->fields.mIsPressedForDragX = 1;
      QuestBoardListViewItemDraw__OnPressBanner(v8, questBoardItem, v10);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw__OnPullBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  TerminalBannerComponent_o *IsBanners; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x20
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  const MethodInfo *v8; // x3

  IsBanners = (TerminalBannerComponent_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
  {
    if ( this->fields.mBannerCount >= 1 )
    {
      v6 = 0LL;
      do
      {
        mTerminalBanners = this->fields.mTerminalBanners;
        if ( !mTerminalBanners )
          goto LABEL_10;
        if ( (unsigned int)v6 >= mTerminalBanners->max_length )
          sub_1B88814(IsBanners, v5);
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_1B8880C(IsBanners, v5);
        TerminalBannerComponent__OnPull(IsBanners, this, 0LL);
        ++v6;
      }
      while ( (int)v6 < this->fields.mBannerCount );
    }
    QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(this, v5);
    QuestBoardListViewItemDraw__SetDispBannerArrows(this, 0, 0, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__OnPullItem(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v8; // x1

  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    QuestBoardListViewItemDraw__OnPullBanner(this, questBoardItem, *(const MethodInfo **)&dispMode);
    *(_WORD *)&this->fields.mIsPressed = 0;
    this->fields.mIsEnableDragX = 0;
    if ( !questBoardManager || (scrollView = (UnityEngine_Behaviour_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_1B8880C(scrollView, v8);
    UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
    this->fields.mTouchPosDif = 0.0;
  }
}


void __fastcall QuestBoardListViewItemDraw__ReleaseBoardIconTexture(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v3; // x0
  System_String_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A580CB & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580CB = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0LL) )
  {
    v3 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v3 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v4 = System_String__Concat_61707032(
           v3->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
           this->fields.boardIconName,
           0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v4, 0LL);
    this->fields.boardIconAssetData = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardIconAssetData, 0, v5, v6);
    this->fields.boardIconName = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardIconName, 0, v7, v8);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_4A580C1 & 1) == 0 )
  {
    sub_1B885B0(&TerminalBannerComponent_TypeInfo);
    byte_4A580C1 = 1;
  }
  this->fields.mBannerAutoMoveTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v3 = TerminalBannerComponent_TypeInfo;
  if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v3 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mBannerAutoMoveTimeInterval = v3->static_fields->BANNER_AUTO_MOVE_TIME_START;
}


void __fastcall QuestBoardListViewItemDraw__ResetInfoTextList(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  int32_t size; // w2
  int v5; // w9
  ServantStatusBattleListViewItem_o *p_mInfoTextList; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5808B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4A5808B = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    v5 = mInfoTextList->fields._version + 1;
    mInfoTextList->fields._size = 0;
    mInfoTextList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mInfoTextList->fields._items, 0, size, 0LL);
  }
  else
  {
    p_mInfoTextList = (ServantStatusBattleListViewItem_o *)&this->fields.mInfoTextList;
    v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (ServantStatusBattleListViewItem_c *)v7;
    sub_1B88554(p_mInfoTextList, (int32_t)v7, v8, v9);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mCostObj; // x0
  struct UILabel_o *mCostLb1; // x8
  float32x2_t v7; // d8
  float32x2_t v8; // d9
  QuestBoardListViewItemDraw_c *v9; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v11; // d0
  int32x2_t v12; // d0
  float32x2_t v13; // d1
  int32x2_t v14; // d1
  struct UILabel_o *v15; // x8
  UserGameEntity_o *v16; // x21
  int32_t Act; // w0
  const MethodInfo *v18; // x2
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A580B9 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580B9 = 1;
  }
  result = 0;
  mCostObj = this->fields.mCostObj;
  if ( !mCostObj )
    goto LABEL_26;
  if ( !UnityEngine_GameObject__get_activeSelf(mCostObj, 0LL) )
    return;
  mCostObj = (UnityEngine_GameObject_o *)this->fields.mCostLb1;
  if ( !mCostObj )
    goto LABEL_26;
  mCostObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostObj, 0LL);
  if ( !mCostObj )
    goto LABEL_26;
  mCostObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(mCostObj, 0LL);
  if ( ((unsigned __int8)mCostObj & 1) == 0 )
    return;
  mCostLb1 = this->fields.mCostLb1;
  if ( !mCostLb1 )
    goto LABEL_26;
  v7.n64_u64[0] = *(unsigned __int64 *)&mCostLb1->fields.mColor.fields.r;
  v8.n64_u64[0] = *(unsigned __int64 *)&mCostLb1->fields.mColor.fields.b;
  v9 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v9 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = (float32x2_t *)v9->static_fields;
  v11.n64_u64[0] = vsub_f32(v7, static_fields[9]).n64_u64[0];
  v12.n64_u64[0] = vmul_f32(v11, v11).n64_u64[0];
  v13.n64_u64[0] = vsub_f32(v8, static_fields[10]).n64_u64[0];
  v14.n64_u64[0] = vmul_f32(v13, v13).n64_u64[0];
  if ( vadd_f32(vdup_lane_s32(v14, 1), vadd_f32(v14, vadd_f32(v12, vdup_lane_s32(v12, 1)))).n64_f32[0] < 1.0e-10 )
  {
    mCostObj = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
    v15 = this->fields.mCostLb1;
    if ( v15 )
    {
      v16 = (UserGameEntity_o *)mCostObj;
      System_Int32__TryParse(v15->fields.mText, &result, 0LL);
      mCostObj = (UnityEngine_GameObject_o *)this->fields.mCostApSp;
      if ( mCostObj )
      {
        mCostObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostObj, 0LL);
        if ( mCostObj )
        {
          mCostObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(mCostObj, 0LL);
          if ( ((unsigned __int8)mCostObj & 1) != 0 )
          {
            if ( v16 )
            {
              Act = UserGameEntity__getAct(v16, 0LL);
              goto LABEL_23;
            }
          }
          else
          {
            mCostObj = (UnityEngine_GameObject_o *)this->fields.mCostRpSp;
            if ( mCostObj )
            {
              mCostObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostObj, 0LL);
              if ( mCostObj )
              {
                mCostObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(mCostObj, 0LL);
                if ( ((unsigned __int8)mCostObj & 1) == 0 )
                  return;
                if ( v16 )
                {
                  Act = UserGameEntity__getRp(v16, 0LL);
LABEL_23:
                  if ( Act >= result )
                    QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v18);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1B8880C(mCostObj, questBoardItem);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetAdvanceNoticeText(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        int64_t checkTime,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  System_String_o *monitor; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  char v14; // w26
  int32_t klass_high; // w28
  char v16; // w24
  Il2CppObject *PrioredName; // x0
  System_String_o *v18; // x0
  int32_t WarID_ByQuestID; // w27
  int64_t OpenedAt; // x27
  System_Object_array *v21; // x27
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x28
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x28
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x28
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x28
  bool v46; // w25
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v50; // x22
  _BOOL4 v51; // w21
  UILabel_o *mTitleNameLb; // x23
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v54; // x9
  int32_t v55; // w23
  int32_t leftIndent; // w25
  UILabel_o *mCondChangeMessage; // x19
  float v58; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v60; // s1
  float v61; // s0
  int v62; // s2
  float v63; // s9
  float v64; // s0
  float v65; // s1
  float v66; // s0
  int v67; // s2
  float v68; // s1
  int v69; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x24
  const MethodInfo *v71; // x4
  const MethodInfo *v72; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v74; // x21
  float v75; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v77; // x0
  int32_t v78; // [xsp+Ch] [xbp-A4h]
  int32_t Minute; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t Hour; // [xsp+18h] [xbp-98h] BYREF
  int32_t Day; // [xsp+1Ch] [xbp-94h] BYREF
  int64_t questReleaseValue; // [xsp+20h] [xbp-90h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-88h] BYREF
  Il2CppObject *v84; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-78h] BYREF
  System_DateTime_o v86; // 0:x0.8
  System_DateTime_o v87; // 0:x0.8
  System_DateTime_o v88; // 0:x0.8
  System_DateTime_o v89; // 0:x0.8
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A580A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&StringLiteral_14809/*"UNKNOWN_QUEST_NAME"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A580A0 = 1;
  }
  v84 = 0LL;
  entity = 0LL;
  dateData = 0LL;
  if ( questInfo && questInfo->fields.questReleaseClosedID > 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
    if ( !Instance )
      goto LABEL_125;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    Instance = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 questInfo->fields.questReleaseClosedID,
                 (const MethodInfo_311D988 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_125;
      monitor = (System_String_o *)entity[1].monitor;
      Instance = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
      if ( !entity )
        goto LABEL_125;
      v14 = Instance;
      Instance = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
      if ( !entity )
        goto LABEL_125;
      klass_high = HIDWORD(entity[2].klass);
      v16 = Instance;
    }
    else
    {
      klass_high = 0;
      v16 = 0;
      v14 = 0;
    }
    switch ( questInfo->fields.questReleaseType )
    {
      case 1:
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          goto LABEL_125;
        WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                            (QuestTree_o *)Instance,
                            questInfo->fields.questReleaseTargetID,
                            0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
        if ( !Instance )
          goto LABEL_125;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                &v84,
                WarID_ByQuestID,
                (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
          goto LABEL_48;
        Instance = (__int64)v84;
        if ( !v84 )
          goto LABEL_125;
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v84, 0LL);
LABEL_20:
        v18 = System_String__Format(monitor, PrioredName, 0LL);
        goto LABEL_47;
      case 6:
      case 7:
      case 9:
        questReleaseValue = questInfo->fields.questReleaseValue;
        PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue, v11, v12, v13);
        goto LABEL_20;
      case 0xC:
        if ( !questEnt )
          goto LABEL_125;
        OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v78 = klass_high;
        dateData = NetworkManager__getServerDateTime_38479168(OpenedAt, 0LL).fields._dateData;
        v21 = (System_Object_array *)sub_1B88658(object___TypeInfo, 4LL);
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
        v86.fields._dateData = (uint64_t)&dateData;
        LODWORD(questReleaseValue) = System_DateTime__get_Month(v86, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue, v22, v23, v24);
        if ( !v21 )
          goto LABEL_125;
        v27 = (Il2CppObject *)Instance;
        if ( Instance )
        {
          Instance = sub_1B886EC(Instance, v21->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_127;
        }
        if ( !v21->max_length )
          goto LABEL_126;
        v21->m_Items[0] = v27;
        sub_1B88554((ServantStatusBattleListViewItem_o *)v21->m_Items, (int32_t)v27, v25, v26);
        v87.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v87, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day, v28, v29, v30);
        v33 = (Il2CppObject *)Instance;
        if ( Instance )
        {
          Instance = sub_1B886EC(Instance, v21->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_127;
        }
        if ( v21->max_length <= 1 )
          goto LABEL_126;
        v21->m_Items[1] = v33;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v33, v31, v32);
        v88.fields._dateData = (uint64_t)&dateData;
        Hour = System_DateTime__get_Hour(v88, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v34, v35, v36);
        v39 = (Il2CppObject *)Instance;
        if ( Instance )
        {
          Instance = sub_1B886EC(Instance, v21->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_127;
        }
        if ( v21->max_length <= 2 )
          goto LABEL_126;
        v21->m_Items[2] = v39;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], (int32_t)v39, v37, v38);
        v89.fields._dateData = (uint64_t)&dateData;
        Minute = System_DateTime__get_Minute(v89, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v40, v41, v42);
        v45 = (Il2CppObject *)Instance;
        if ( Instance )
        {
          Instance = sub_1B886EC(Instance, v21->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_127:
            v77 = sub_1B88830();
            sub_1B886D8(v77, 0LL);
          }
        }
        if ( v21->max_length <= 3 )
LABEL_126:
          sub_1B88814(Instance, questInfo);
        v21->m_Items[3] = v45;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v45, v43, v44);
        v18 = System_String__Format_61721540(monitor, v21, 0LL);
        klass_high = v78;
LABEL_47:
        monitor = v18;
LABEL_48:
        if ( (v14 & 1) != 0 )
        {
          v46 = 1;
        }
        else
        {
          WarInfo_k__BackingField = questInfo->fields._WarInfo_k__BackingField;
          if ( !WarInfo_k__BackingField || !MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL) )
            goto LABEL_55;
          Instance = (__int64)questInfo->fields._WarInfo_k__BackingField;
          if ( !Instance )
            goto LABEL_125;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
          if ( Mine )
            v46 = WarEntity__IsChangeDispClosedMessage(Mine, 0LL);
          else
LABEL_55:
            v46 = 0;
        }
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_125;
        Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
        if ( !questEnt || !Instance )
          goto LABEL_125;
        EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                   (QuestReleaseOverwriteMaster_o *)Instance,
                                   questEnt->fields.id,
                                   checkTime,
                                   0LL);
        v50 = EntityByQuestIdAndTime;
        if ( EntityByQuestIdAndTime )
        {
          v51 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
          if ( v46 )
          {
LABEL_61:
            Instance = (__int64)this->fields.mAdvanceNoticeObj;
            if ( !Instance )
              goto LABEL_125;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            mTitleNameLb = this->fields.mTitleNameLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14809/*"UNKNOWN_QUEST_NAME"*/, 0LL);
            if ( !mTitleNameLb )
              goto LABEL_125;
            UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
            Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
            }
            static_fields = *(struct QuestBoardListViewItemDraw_StaticFields **)(Instance + 184);
            v54 = 48LL;
            if ( !v51 )
              v54 = 44LL;
            v55 = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v54);
            if ( v51 )
            {
              if ( !v50 )
                goto LABEL_125;
              leftIndent = v50->fields.leftIndent;
            }
            else
            {
              leftIndent = 0;
            }
            v58 = (float)klass_high;
            if ( (v16 & 1) != 0 )
            {
              if ( !*(_DWORD *)(Instance + 224) )
              {
                j_il2cpp_runtime_class_init_0(Instance);
                static_fields = QuestBoardListViewItemDraw_TypeInfo->static_fields;
              }
              Instance = (__int64)this->fields.mAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_125;
              ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X;
              UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0LL);
              Instance = (__int64)this->fields.mAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_125;
              Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_125;
              v60 = 24.0;
              if ( !v51 )
                v60 = 0.0;
              v62 = 0;
              v61 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v58;
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Instance,
                *(UnityEngine_Vector3_o *)(&v60 - 1),
                0LL);
              Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
              if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
              }
              if ( !this->fields.mOverwriteAdvanceNoticeLb )
                goto LABEL_125;
              v63 = *(float *)(*(_QWORD *)(Instance + 184) + 52LL);
              UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_125;
              Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_125;
              v64 = v63 + (float)leftIndent;
            }
            else
            {
              Instance = (__int64)this->fields.mAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_125;
              UIWidget__set_pivot((UIWidget_o *)Instance, 4, 0LL);
              Instance = (__int64)this->fields.mAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_125;
              Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_125;
              v65 = 24.0;
              if ( !v51 )
                v65 = 0.0;
              v67 = 0;
              v66 = v58 * 0.5;
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Instance,
                *(UnityEngine_Vector3_o *)(&v65 - 1),
                0LL);
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_125;
              UIWidget__set_pivot((UIWidget_o *)Instance, 4, 0LL);
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_125;
              Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_125;
              v64 = (float)leftIndent * 0.5;
            }
            v68 = -26.0;
            v69 = 0;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)Instance,
              *(UnityEngine_Vector3_o *)&v64,
              0LL);
            Instance = (__int64)this->fields.mAdvanceNoticeLb;
            if ( !Instance )
              goto LABEL_125;
            UIWidget__set_height((UIWidget_o *)Instance, v55, 0LL);
            Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
            mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            if ( !mOverwriteAdvanceNoticeLb )
              goto LABEL_125;
            UIWidget__set_height(
              mOverwriteAdvanceNoticeLb,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
              0LL);
            QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_328_0(
              this->fields.mAdvanceNoticeLb,
              monitor,
              v55,
              klass_high,
              v71);
            if ( v51 )
            {
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
              if ( !Instance )
                goto LABEL_125;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
              if ( !v50 )
                goto LABEL_125;
              overlayClosedMessage = v50->fields.overlayClosedMessage;
              v74 = this->fields.mOverwriteAdvanceNoticeLb;
              if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v75 = v58 * 0.5;
              QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_328_0(
                v74,
                overlayClosedMessage,
                v55,
                leftIndent,
                v72);
            }
            else
            {
              v75 = 0.0;
            }
            mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0LL, 0LL) )
            {
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
              if ( Instance )
              {
                Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
                if ( Instance )
                {
                  v90.fields.y = 0.0;
                  v90.fields.z = 0.0;
                  v90.fields.x = v75;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v90, 0LL);
                  return;
                }
              }
LABEL_125:
              sub_1B8880C(Instance, questInfo);
            }
            return;
          }
        }
        else
        {
          v51 = 0;
          if ( v46 )
            goto LABEL_61;
        }
        Instance = (__int64)this->fields.mTitleNameLb;
        if ( !Instance )
          goto LABEL_125;
        UILabel__set_text((UILabel_o *)Instance, monitor, 0LL);
        Instance = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Instance )
          goto LABEL_125;
        UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Instance )
          goto LABEL_125;
        UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( v51 )
        {
          Instance = (__int64)this->fields.mCondObject;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            if ( v50 )
            {
              Instance = (__int64)this->fields.mCondChangeMessage;
              if ( Instance )
              {
                UILabel__set_text((UILabel_o *)Instance, v50->fields.overlayClosedMessage, 0LL);
                mCondChangeMessage = this->fields.mCondChangeMessage;
                Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
                if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                if ( mCondChangeMessage )
                {
                  UILabel__SetCondensedScale(
                    mCondChangeMessage,
                    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
                    0LL);
                  return;
                }
              }
            }
          }
          goto LABEL_125;
        }
        break;
      default:
        goto LABEL_48;
    }
  }
  else
  {
    Instance = (__int64)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_125;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_125;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    Instance = (__int64)this->fields.mCondChangeMessage;
    if ( !Instance )
      goto LABEL_125;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetBadge(
        QuestBoardListViewItemDraw_o *this,
        int32_t num,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mNoticeNumberRoot; // x0
  UnityEngine_Object_o *mNoticeNumber; // x22
  ServantStatusBattleListViewItem_o *p_mNoticeNumber; // x21
  Il2CppObject *mNoticeNumberPrefab; // x22
  Il2CppObject *v9; // x0
  UnityEngine_GameObject_o *v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A580A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A580A6 = 1;
  }
  mNoticeNumberRoot = this->fields.mNoticeNumberRoot;
  if ( !mNoticeNumberRoot )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(mNoticeNumberRoot, 1, 0LL);
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mNoticeNumber = (ServantStatusBattleListViewItem_o *)&this->fields.mNoticeNumber;
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           mNoticeNumberPrefab,
           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v10 = this->fields.mNoticeNumberRoot;
    v11 = (UnityEngine_GameObject_o *)v9;
    GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v9, v10, 0LL);
    if ( v11 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v11,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (ServantStatusBattleListViewItem_c *)Component_object;
      sub_1B88554(p_mNoticeNumber, (int32_t)Component_object, v13, v14);
      goto LABEL_11;
    }
LABEL_13:
    sub_1B8880C(mNoticeNumberRoot, *(_QWORD *)&num);
  }
LABEL_11:
  mNoticeNumberRoot = (UnityEngine_GameObject_o *)p_mNoticeNumber->klass;
  if ( !p_mNoticeNumber->klass )
    goto LABEL_13;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mNoticeNumberRoot, num, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        WarEntity_o *warEntity,
        bool isBlackMarkOnly,
        bool isWhiteMarkOnly,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w24
  UnityEngine_GameObject_o *blackMarkSpace; // x24
  QuestBoardListViewItemDraw_c *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x23
  QuestBoardListViewItemDraw_c *v17; // x0
  UnityEngine_Object_o *black_mark_prefab_k__BackingField; // x23
  UnityEngine_Object_o *blackMarkEffect; // x23
  Il2CppObject *v20; // x24
  struct UnityEngine_GameObject_o **p_blackMarkEffect; // x23
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_GameObject_o *v26; // x23
  int32_t v27; // w23
  UnityEngine_GameObject_o *v28; // x22
  QuestBoardListViewItemDraw_c *v29; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  QuestBoardListViewItemDraw_c *v34; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v35; // x10
  UnityEngine_GameObject_o *v36; // x21
  QuestBoardListViewItemDraw_c *v37; // x0
  UnityEngine_Object_o *white_mark_prefab_k__BackingField; // x21
  UnityEngine_Object_o *whiteMarkEffect; // x21
  Il2CppObject *v40; // x21
  struct UnityEngine_GameObject_o **p_whiteMarkEffect; // x20
  UnityEngine_Transform_o *v42; // x22
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  UnityEngine_GameObject_o *v46; // x20
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5808D & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A5808D = 1;
  }
  if ( !warEntity )
    return;
  if ( !WarEntity__IsBlackMarkWithClear(warEntity, 0LL) )
    goto LABEL_12;
  lastQuestId = warEntity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsQuestClear_37596684(lastQuestId, -1, 0, 0LL) )
  {
LABEL_12:
    if ( !isBlackMarkOnly )
      goto LABEL_31;
    goto LABEL_13;
  }
  blackMarkSpace = this->fields.blackMarkSpace;
  v13 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v13 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(blackMarkSpace, v13->static_fields->BLACK_MARK_OBJ_POS, 0LL);
  if ( isBlackMarkOnly )
  {
LABEL_13:
    v16 = this->fields.blackMarkSpace;
    v17 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v17 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v16, v17->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
  }
  if ( !questBoardItem )
    goto LABEL_64;
  black_mark_prefab_k__BackingField = (UnityEngine_Object_o *)questBoardItem->fields._black_mark_prefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(black_mark_prefab_k__BackingField, 0LL, 0LL) )
  {
    blackMarkEffect = (UnityEngine_Object_o *)this->fields.blackMarkEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(blackMarkEffect, 0LL, 0LL) )
    {
      v14 = this->fields.blackMarkSpace;
      if ( !v14 )
        goto LABEL_64;
      v20 = (Il2CppObject *)questBoardItem->fields._black_mark_prefab_k__BackingField;
      p_blackMarkEffect = &this->fields.blackMarkEffect;
      transform = UnityEngine_GameObject__get_transform(v14, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__Instantiate_object__49297800(
              v20,
              transform,
              (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v23;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.blackMarkEffect, (int32_t)v23, v24, v25);
      v26 = *p_blackMarkEffect;
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    v14 = this->fields.blackMarkSpace;
    if ( !v14 )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(v14, 1, 0LL);
  }
LABEL_31:
  if ( WarEntity__IsWhiteMarkWithClear(warEntity, 0LL) )
  {
    v27 = warEntity->fields.lastQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_37596684(v27, -1, 0, 0LL) )
    {
      v28 = this->fields.blackMarkSpace;
      v29 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v29 = QuestBoardListViewItemDraw_TypeInfo;
      }
      static_fields = v29->static_fields;
      p_x = &static_fields->BLACK_MARK_OBJ_POS.fields.x;
      p_y = &static_fields->BLACK_MARK_OBJ_POS.fields.y;
      p_z = &static_fields->BLACK_MARK_OBJ_POS.fields.z;
      goto LABEL_42;
    }
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(warEntity, 0LL) )
  {
    v28 = this->fields.blackMarkSpace;
    v34 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v34 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v35 = v34->static_fields;
    p_x = &v35->WHITE_MARK_OBJ_UNDER_POS.fields.x;
    p_y = &v35->WHITE_MARK_OBJ_UNDER_POS.fields.y;
    p_z = &v35->WHITE_MARK_OBJ_UNDER_POS.fields.z;
LABEL_42:
    v47.fields.y = *p_y;
    v47.fields.x = *p_x;
    v47.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v28, v47, 0LL);
    if ( !isWhiteMarkOnly )
      goto LABEL_48;
    goto LABEL_45;
  }
  if ( !isWhiteMarkOnly )
    return;
LABEL_45:
  v36 = this->fields.blackMarkSpace;
  v37 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v37 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v36, v37->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
LABEL_48:
  if ( !questBoardItem )
    goto LABEL_64;
  white_mark_prefab_k__BackingField = (UnityEngine_Object_o *)questBoardItem->fields._white_mark_prefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(white_mark_prefab_k__BackingField, 0LL, 0LL) )
  {
    whiteMarkEffect = (UnityEngine_Object_o *)this->fields.whiteMarkEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(whiteMarkEffect, 0LL, 0LL) )
    {
      v14 = this->fields.blackMarkSpace;
      if ( !v14 )
        goto LABEL_64;
      v40 = (Il2CppObject *)questBoardItem->fields._white_mark_prefab_k__BackingField;
      p_whiteMarkEffect = &this->fields.whiteMarkEffect;
      v42 = UnityEngine_GameObject__get_transform(v14, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__Instantiate_object__49297800(
              v40,
              v42,
              (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
      *p_whiteMarkEffect = (struct UnityEngine_GameObject_o *)v43;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.whiteMarkEffect, (int32_t)v43, v44, v45);
      v46 = *p_whiteMarkEffect;
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v46, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    v14 = this->fields.blackMarkSpace;
    if ( v14 )
    {
      UnityEngine_GameObject__SetActive(v14, 1, 0LL);
      return;
    }
LABEL_64:
    sub_1B8880C(v14, v15);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetChapterSubIdDisp(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v4; // x19
  QuestEntity_o *v5; // x21
  Il2CppObject *Entity; // x22
  const MethodInfo *v7; // x3
  _BOOL4 HasFlag; // w23
  _BOOL8 v9; // x0
  UILabel_o *mLabelSubSectionNumLb; // x22
  Il2CppObject *Component_object; // x22
  UISprite_o *mLabelChapterSp; // x22
  QuestBoardListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x2
  System_String_o *QuestIconNameForMainType; // x21
  int32_t QuestBoardSectionId; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int v20; // w21
  UISprite_o *mLabelBoardSectionSp; // x20
  QuestBoardListViewItemDraw_c *v22; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  int v26; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4A5809C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A5809C = 1;
  }
  if ( !questInfo )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)MapControl_QuestInfo__GetMine(questInfo, 0LL);
  if ( !this )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)this, 0LL);
  if ( !v4->fields.mLabelSubSectionNumLb )
    goto LABEL_47;
  v5 = (QuestEntity_o *)this;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v4->fields.mLabelSubSectionNumLb,
                                           0LL);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v5 )
    goto LABEL_47;
  if ( v5->fields.iconId <= 0
    && !QuestEntity__HasFlag(v5, 0x2000000000000000LL, 0LL)
    && System_String__IsNullOrEmpty(v5->fields.chapterSubStr, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_47;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               questInfo->fields.warId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    HasFlag = QuestEntity__HasFlag(v5, 0x40000LL, 0LL);
    v9 = Entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal((WarEntity_o *)Entity, 0LL);
    mLabelSubSectionNumLb = v4->fields.mLabelSubSectionNumLb;
    if ( HasFlag || v9 )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw__ConvertToChineseAscii(
                                               (QuestBoardListViewItemDraw_o *)v9,
                                               v5->fields.chapterSubId,
                                               v9,
                                               v7);
      if ( !mLabelSubSectionNumLb )
        goto LABEL_47;
    }
    else
    {
      this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v5 + 116, 0LL);
      if ( !mLabelSubSectionNumLb )
        goto LABEL_47;
    }
    UILabel__set_text(mLabelSubSectionNumLb, (System_String_o *)this, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelSubSectionNumLb;
    if ( !this )
      goto LABEL_47;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_47;
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0LL);
    }
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelSubSectionNumLb;
    if ( !this )
      goto LABEL_47;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelChapterSp;
  if ( !this )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  mLabelChapterSp = v4->fields.mLabelChapterSp;
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v13, v5, v14);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mLabelChapterSp, QuestIconNameForMainType, 0LL);
  if ( !mLabelChapterSp )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelChapterSp, (unsigned __int8)this & 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelChapterSp;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (QuestBoardListViewItemDraw_o *)questInfo->fields._WarInfo_k__BackingField;
  if ( !this )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)this, 0LL);
  if ( !QuestBoardSectionId )
    return;
  v20 = QuestBoardSectionId;
  mLabelBoardSectionSp = v4->fields.mLabelBoardSectionSp;
  v22 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v22 = QuestBoardListViewItemDraw_TypeInfo;
  }
  CHAPTER_SP_UNIT_NAME = v22->static_fields->CHAPTER_SP_UNIT_NAME;
  v26 = v20;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19);
  v25 = System_String__Format(CHAPTER_SP_UNIT_NAME, v24, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mLabelBoardSectionSp, v25, 0LL);
  if ( !mLabelBoardSectionSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)mLabelBoardSectionSp,
          (unsigned __int8)this & 1,
          0LL),
        (this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelBoardSectionSp) == 0LL) )
  {
LABEL_47:
    sub_1B8880C(this, questInfo);
  }
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
}


void __fastcall QuestBoardListViewItemDraw__SetClearSprite(
        QuestBoardListViewItemDraw_o *this,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *StatusSp; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  QuestBoardListViewItemDraw_c *v8; // x0
  QuestBoardListViewItemDraw_c *v9; // x0

  if ( (byte_4A580A9 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580A9 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_1B8880C(0LL, v6);
  v7 = StatusSp;
  if ( UnityEngine_GameObject__get_activeSelf(StatusSp, 0LL) )
  {
    v8 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v8 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v7, v8->static_fields->CLEAR_POS_AREA, 0LL);
    if ( warEnt && WarEntity__HasFlag(warEnt, 256, 0LL) )
    {
      v9 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v9 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionX(v7, -v9->static_fields->CLEAR_POS_AREA.fields.x, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetCostDisp(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        bool isClosed,
        int32_t costCalcVal,
        int32_t fixedVal,
        bool isNotItemConsume,
        UnityEngine_Color_o baseColor,
        bool *isDoubleItemConsume,
        bool *isDoubleItemConsumeQp,
        bool *isTripleItemConsume,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  QuestBoardListViewItemDraw_o *v22; // x19
  __int64 type; // x8
  UnityEngine_GameObject_o *mCostObj; // x21
  _BOOL4 v25; // w20
  _BOOL4 HasFlag; // w28
  UIWidget_o *v27; // x21
  __int64 v28; // x9
  UnityEngine_Component_o *mCostBg1; // x8
  QuestBoardListViewItemDraw_o **p_mCostLb2; // x21
  QuestBoardListViewItemDraw_o **v31; // x27
  QuestConsumeItemEntity_o *v32; // x21
  int bannerId; // w22
  UISprite_o *mCostApSp; // x21
  System_String_o *ApSpriteFileName; // x22
  int32_t ActConsume; // w0
  int32_t v37; // w29
  UserGameEntity_o *v38; // x28
  bool v39; // w24
  BalanceConfig_c *v40; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UISprite_o *mCostRpSp; // x21
  __int64 BpExpresssionType; // x20
  __int64 v44; // x8
  struct System_String_array *RP_SPNAME_POINT; // x8
  struct System_Int32_array *v46; // x8
  char v47; // w23
  QuestBoardListViewItemDraw_o *v48; // x22
  QuestBoardListViewItemDraw_c *v49; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *v51; // x8
  int32_t v52; // w20
  BalanceConfig_c *v53; // x0
  UIWidget_o *v54; // x22
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  struct System_Int32_array *v57; // x8
  int v58; // w23
  UISprite_o *v59; // x22
  System_String_o *v60; // x23
  BalanceConfig_c *v61; // x0
  bool v62; // w24
  Il2CppObject *Master_object; // x27
  Il2CppObject *v64; // x26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v66; // x8
  ItemEntity_o *v67; // x28
  const MethodInfo *v68; // x7
  struct System_Int32_array *nums; // x8
  UIWidget_o *v70; // x28
  struct System_Int32_array *v71; // x8
  struct System_Int32_array *v72; // x8
  const MethodInfo *v73; // x7
  struct System_Int32_array *v74; // x8
  bool v75; // w28
  UILabel_o *mCostLb1; // x25
  QuestBoardListViewItemDraw_o *v77; // x0
  const MethodInfo *v78; // x7
  UILabel_o *v79; // x25
  QuestBoardListViewItemDraw_o *v80; // x0
  const MethodInfo *v81; // x7
  UILabel_o *v82; // x29
  QuestBoardListViewItemDraw_o *v83; // x0
  const MethodInfo *v84; // x7
  UIWidget_o *v85; // x25
  Il2CppObject *v86; // x26
  Il2CppObject *v87; // x25
  struct System_Int32_array *v88; // x8
  struct System_Int32_array *v89; // x8
  ItemEntity_o *v90; // x25
  const MethodInfo *v91; // x7
  struct System_Int32_array *v92; // x8
  UISprite_o *v93; // x21
  __int64 v94; // x8
  UISprite_o *v95; // x22
  __int64 v96; // x8
  struct System_Int32_array *v97; // x8
  UnityEngine_GameObject_o *v98; // x0
  QuestBoardListViewItemDraw_c *v99; // x8
  UnityEngine_GameObject_o *v100; // x22
  UnityEngine_GameObject_o *v101; // x0
  struct System_Int32_array *v102; // x8
  int32_t v103; // w20
  BalanceConfig_c *v104; // x0
  UIWidget_o *v105; // x22
  UnityEngine_GameObject_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  QuestBoardListViewItemDraw_c *v109; // x8
  UnityEngine_GameObject_o *v110; // x22
  UnityEngine_GameObject_o *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  UnityEngine_GameObject_o *v114; // x0
  struct System_Int32_array *v115; // x8
  UnityEngine_GameObject_o *v116; // x21
  UnityEngine_GameObject_o *v117; // x21
  UnityEngine_GameObject_o *v118; // x21
  UIWidget_o *v119; // x21
  UILabel_o *v120; // x20
  UIWidget_o *v121; // x25
  struct System_Int32_array *v122; // x8
  struct System_Int32_array *v123; // x8
  const MethodInfo *v124; // x7
  struct System_Int32_array *v125; // x8
  bool *v126; // [xsp+0h] [xbp-C0h]
  QuestConsumeItemEntity_o *v127; // [xsp+18h] [xbp-A8h]
  __int64 v128; // [xsp+20h] [xbp-A0h]
  UserItemEntity_o *usrItem; // [xsp+28h] [xbp-98h] BYREF
  UserItemEntity_o *entity; // [xsp+30h] [xbp-90h] BYREF
  int32_t v131; // [xsp+3Ch] [xbp-84h] BYREF
  UnityEngine_Color_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v133; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v142; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v143; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v145; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v146; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v147; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v22 = this;
  if ( (byte_4A58097 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A58097 = 1;
  }
  v131 = 0;
  usrItem = 0LL;
  entity = 0LL;
  if ( !questEnt )
    goto LABEL_381;
  type = questEnt->fields.type;
  *isDoubleItemConsume = 0;
  *isDoubleItemConsumeQp = 0;
  *isTripleItemConsume = 0;
  mCostObj = v22->fields.mCostObj;
  v128 = type;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__HasFlag(questEnt, 0x2000LL, 0LL);
  if ( !mCostObj )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive(mCostObj, ((unsigned __int8)this & 1) == 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
  if ( !this )
    goto LABEL_381;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    return;
  if ( isClosed )
  {
    v25 = !QuestEntity__HasFlag(questEnt, 128LL, 0LL);
    HasFlag = QuestEntity__HasFlag(questEnt, 256LL, 0LL);
  }
  else
  {
    HasFlag = 0;
    LOBYTE(v25) = 1;
  }
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v27 = (UIWidget_o *)this;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v27 )
    goto LABEL_381;
  v28 = 304LL;
  if ( (_DWORD)v128 == 7 )
    v28 = 316LL;
  UIWidget__set_width(
    v27,
    *(int32_t *)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v28),
    0LL);
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getItemConsumeEntity(questEnt, 0, 0LL);
  mCostBg1 = (UnityEngine_Component_o *)v22->fields.mCostBg1;
  v127 = (QuestConsumeItemEntity_o *)this;
  if ( !mCostBg1 )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(mCostBg1, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg3;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  p_mCostLb2 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( HasFlag )
  {
LABEL_29:
    v31 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
    v32 = v127;
  }
  else
  {
    v126 = isDoubleItemConsumeQp;
    ActConsume = QuestEntity__getActConsume(questEnt, costCalcVal, 0LL);
    if ( fixedVal >= 0 )
      v37 = fixedVal;
    else
      v37 = ActConsume;
    v131 = v37;
    this = (QuestBoardListViewItemDraw_o *)UserGameMaster__getSelfUserGame(0LL);
    v38 = (UserGameEntity_o *)this;
    switch ( questEnt->fields.consumeType )
    {
      case 1:
        if ( !this )
          goto LABEL_381;
        v39 = v37 > SLODWORD(this->fields.mTerminalAtlas) || v37 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
        isDoubleItemConsumeQp = v126;
        mCostLb1 = v22->fields.mCostLb1;
        v77 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v131, 0LL);
        v140.fields.r = r;
        v140.fields.g = g;
        v140.fields.b = b;
        v140.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v77,
          mCostLb1,
          (System_String_o *)v77,
          costCalcVal,
          v140,
          v39,
          isClosed,
          fixedVal >= 0,
          v78);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        v31 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
        v32 = v127;
        if ( !this )
          goto LABEL_381;
        goto LABEL_216;
      case 2:
        if ( !this )
          goto LABEL_381;
        v31 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
        if ( !byte_4A580D1 )
        {
          sub_1B885B0(&BalanceConfig_TypeInfo);
          byte_4A580D1 = 1;
        }
        v61 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v61 = BalanceConfig_TypeInfo;
        }
        v32 = v127;
        v62 = v37 > v61->static_fields->UerGameRpMax || v37 > UserGameEntity__getRp(v38, 0LL);
        isDoubleItemConsumeQp = v126;
        v79 = v22->fields.mCostLb1;
        v80 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v131, 0LL);
        v141.fields.r = r;
        v141.fields.g = g;
        v141.fields.b = b;
        v141.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(v80, v79, (System_String_o *)v80, 0, v141, v62, isClosed, 0, v81);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
LABEL_216:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( this )
            goto LABEL_218;
        }
        goto LABEL_381;
      case 3:
        if ( v127 && QuestConsumeItemEntity__IsAvailableAt(v127, 0, 0LL) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
          v64 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
          itemIds = v127->fields.itemIds;
          if ( !itemIds )
            goto LABEL_381;
          if ( !itemIds->max_length )
            goto LABEL_382;
          if ( !Master_object )
            goto LABEL_381;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)Master_object,
                                                   &entity,
                                                   (int64_t)this,
                                                   itemIds->m_Items[1],
                                                   0LL);
          v66 = v127->fields.itemIds;
          if ( !v66 )
            goto LABEL_381;
          if ( !v66->max_length )
            goto LABEL_382;
          if ( !v64 )
            goto LABEL_381;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v64,
                                                   v66->m_Items[1],
                                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !v22->fields.mCostLb1 )
            goto LABEL_381;
          v67 = (ItemEntity_o *)this;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v22->fields.mCostLb1,
                                                   0LL);
          if ( !this )
            goto LABEL_381;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          nums = v127->fields.nums;
          if ( !nums )
            goto LABEL_381;
          if ( !nums->max_length )
            goto LABEL_382;
          v138.fields.r = r;
          v138.fields.g = g;
          v138.fields.b = b;
          v138.fields.a = a;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            v22->fields.mCostLb1,
            nums->m_Items[1],
            entity,
            v67,
            v138,
            isClosed,
            isNotItemConsume,
            v68);
          if ( QuestConsumeItemEntity__IsAvailableAt(v127, 1, 0LL) )
          {
            *isDoubleItemConsume = 1;
            this = *p_mCostLb2;
            if ( !*p_mCostLb2 )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_381;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
            if ( !this )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v70 = (UIWidget_o *)this;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            if ( !v70 )
              goto LABEL_381;
            UIWidget__set_width(v70, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
            v71 = v127->fields.itemIds;
            if ( !v71 )
              goto LABEL_381;
            if ( v71->max_length <= 1 )
              goto LABEL_382;
            this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                     (UserItemMaster_o *)Master_object,
                                                     &entity,
                                                     (int64_t)this,
                                                     v71->m_Items[2],
                                                     0LL);
            v72 = v127->fields.itemIds;
            if ( !v72 )
              goto LABEL_381;
            if ( v72->max_length <= 1 )
              goto LABEL_382;
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v64,
                                                     v72->m_Items[2],
                                                     (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            v74 = v127->fields.nums;
            if ( !v74 )
              goto LABEL_381;
            if ( v74->max_length <= 1 )
              goto LABEL_382;
            v139.fields.r = r;
            v139.fields.g = g;
            v139.fields.b = b;
            v139.fields.a = a;
            QuestBoardListViewItemDraw__SetCostLabelItem(
              this,
              (UILabel_o *)*p_mCostLb2,
              v74->m_Items[2],
              entity,
              (ItemEntity_o *)this,
              v139,
              isClosed,
              isNotItemConsume,
              v73);
          }
          else
          {
            this = *p_mCostLb2;
            if ( !*p_mCostLb2 )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_381;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
          if ( QuestConsumeItemEntity__IsAvailableAt(v127, 2, 0LL) )
          {
            *isDoubleItemConsume = 0;
            *isTripleItemConsume = 1;
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
            if ( !this )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_381;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
            if ( !this )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v121 = (UIWidget_o *)this;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            if ( !v121 )
              goto LABEL_381;
            UIWidget__set_width(
              v121,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM,
              0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
            v122 = v127->fields.itemIds;
            if ( !v122 )
              goto LABEL_381;
            if ( v122->max_length <= 2 )
              goto LABEL_382;
            this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                     (UserItemMaster_o *)Master_object,
                                                     &entity,
                                                     (int64_t)this,
                                                     v122->m_Items[3],
                                                     0LL);
            v123 = v127->fields.itemIds;
            if ( !v123 )
              goto LABEL_381;
            if ( v123->max_length <= 2 )
              goto LABEL_382;
            v31 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v64,
                                                     v123->m_Items[3],
                                                     (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            v32 = v127;
            v125 = v127->fields.nums;
            if ( !v125 )
              goto LABEL_381;
            isDoubleItemConsumeQp = v126;
            if ( v125->max_length <= 2 )
              goto LABEL_382;
            v147.fields.r = r;
            v147.fields.g = g;
            v147.fields.b = b;
            v147.fields.a = a;
            QuestBoardListViewItemDraw__SetCostLabelItem(
              this,
              v22->fields.mCostLb3,
              v125->m_Items[3],
              entity,
              (ItemEntity_o *)this,
              v147,
              isClosed,
              isNotItemConsume,
              v124);
          }
          else
          {
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
            if ( !this )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            isDoubleItemConsumeQp = v126;
            v31 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
            v32 = v127;
            if ( !this )
              goto LABEL_381;
LABEL_218:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
        }
        else
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
          isDoubleItemConsumeQp = v126;
          if ( !this )
            goto LABEL_381;
          v31 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
LABEL_246:
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_381;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = *v31;
          if ( !*v31 )
            goto LABEL_381;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_381;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
          if ( !this )
            goto LABEL_381;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_381;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v32 = 0LL;
        }
        break;
      case 4:
        if ( !this )
          goto LABEL_381;
        v75 = v37 > SLODWORD(this->fields.mTerminalAtlas) || v37 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
        v82 = v22->fields.mCostLb1;
        v83 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v131, 0LL);
        v142.fields.r = r;
        v142.fields.g = g;
        v142.fields.b = b;
        v142.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v83,
          v82,
          (System_String_o *)v83,
          costCalcVal,
          v142,
          v75,
          isClosed,
          fixedVal >= 0,
          v84);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        isDoubleItemConsumeQp = v126;
        if ( !this )
          goto LABEL_381;
        v31 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !v127 || !QuestConsumeItemEntity__IsAvailableAt(v127, 0, 0LL) )
          goto LABEL_245;
        *isDoubleItemConsume = 1;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v85 = (UIWidget_o *)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        if ( !v85 )
          goto LABEL_381;
        UIWidget__set_width(v85, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v86 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
        v87 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v88 = v127->fields.itemIds;
        if ( !v88 )
          goto LABEL_381;
        if ( !v88->max_length )
          goto LABEL_382;
        if ( !v86 )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                 (UserItemMaster_o *)v86,
                                                 &usrItem,
                                                 (int64_t)this,
                                                 v88->m_Items[1],
                                                 0LL);
        v32 = v127;
        v89 = v127->fields.itemIds;
        if ( !v89 )
          goto LABEL_381;
        if ( !v89->max_length )
          goto LABEL_382;
        if ( !v87 )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v87,
                                                 v89->m_Items[1],
                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !*v31 )
          goto LABEL_381;
        v90 = (ItemEntity_o *)this;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)*v31,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v92 = v127->fields.nums;
        if ( !v92 )
          goto LABEL_381;
        if ( !v92->max_length )
          goto LABEL_382;
        v143.fields.r = r;
        v143.fields.g = g;
        v143.fields.b = b;
        v143.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          (UILabel_o *)*v31,
          v92->m_Items[1],
          usrItem,
          v90,
          v143,
          isClosed,
          isNotItemConsume,
          v91);
        if ( !QuestConsumeItemEntity__IsAvailableAt(v127, 1, 0LL) )
          break;
LABEL_245:
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
        if ( this )
          goto LABEL_246;
        goto LABEL_381;
      default:
        isDoubleItemConsumeQp = v126;
        goto LABEL_29;
    }
  }
  if ( v25 )
  {
    switch ( questEnt->fields.consumeType )
    {
      case 1:
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_381;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        bannerId = questEnt->fields.bannerId;
        mCostApSp = v22->fields.mCostApSp;
        if ( bannerId >= 1 )
        {
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(bannerId, (const MethodInfo *)questEnt);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
          if ( !mCostApSp )
            goto LABEL_381;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, (unsigned __int8)this & 1, 0LL);
          goto LABEL_259;
        }
        if ( !mCostApSp )
          goto LABEL_381;
        UISprite__set_atlas(v22->fields.mCostApSp, v22->fields.mTerminalAtlas, 0LL);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        v93 = v22->fields.mCostApSp;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        v94 = *(_QWORD *)&this->fields.mTitleLevelStrSp[2].fields.updateAnchors;
        if ( !v94 )
          goto LABEL_381;
        if ( (unsigned int)v128 < *(_DWORD *)(v94 + 24) )
        {
          if ( !v93 )
            goto LABEL_381;
          UISprite__set_spriteName(v93, *(System_String_o **)(v94 + 8 * v128 + 32), 0LL);
LABEL_259:
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
          if ( !this )
            goto LABEL_381;
          ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
          if ( !this )
            goto LABEL_381;
          v144.fields.r = r;
          v144.fields.g = g;
          v144.fields.b = b;
          v144.fields.a = a;
          UIWidget__set_color((UIWidget_o *)this, v144, 0LL);
          goto LABEL_323;
        }
        break;
      case 2:
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_381;
        v134.fields.r = r;
        v134.fields.g = g;
        v134.fields.b = b;
        v134.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v134, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpPointSp;
        if ( !this )
          goto LABEL_381;
        v135.fields.r = r;
        v135.fields.g = g;
        v135.fields.b = b;
        v135.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v135, 0LL);
        v40 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v40 = BalanceConfig_TypeInfo;
        }
        static_fields = v40->static_fields;
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        mCostRpSp = v22->fields.mCostRpSp;
        BpExpresssionType = static_fields->BpExpresssionType;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        v44 = *(_QWORD *)&this->fields.mTitleLevelStrSp[1].fields.mFillAmount;
        if ( !v44 )
          goto LABEL_381;
        if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v44 + 24) )
          break;
        if ( !mCostRpSp )
          goto LABEL_381;
        UISprite__set_spriteName(mCostRpSp, *(System_String_o **)(v44 + 8 * BpExpresssionType + 32), 0LL);
        RP_SPNAME_POINT = QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
        if ( !RP_SPNAME_POINT )
          goto LABEL_381;
        if ( (unsigned int)BpExpresssionType >= RP_SPNAME_POINT->max_length )
          break;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpPointSp;
        if ( !this )
          goto LABEL_381;
        UISprite__set_spriteName((UISprite_o *)this, RP_SPNAME_POINT->m_Items[BpExpresssionType], 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_381;
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpPointSp;
        if ( !this )
          goto LABEL_381;
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        goto LABEL_323;
      case 3:
        if ( !v32 )
          goto LABEL_323;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v46 = v32->fields.itemIds;
        if ( !v46 )
          goto LABEL_381;
        if ( !v46->max_length )
          break;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_381;
        ItemIconComponent__SetItem((ItemIconComponent_o *)this, v46->m_Items[1], -1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_381;
        v136.fields.r = r;
        v136.fields.g = g;
        v136.fields.b = b;
        v136.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)this, v136, 0LL);
        this = (QuestBoardListViewItemDraw_o *)QuestConsumeItemEntity__IsAvailableAt(v32, 1, 0LL);
        if ( !v22->fields.mCostItemIcon2 )
          goto LABEL_381;
        v47 = (char)this;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v22->fields.mCostItemIcon2,
                                                 0LL);
        v48 = this;
        if ( (v47 & 1) != 0 )
        {
          v49 = QuestBoardListViewItemDraw_TypeInfo;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v49 = QuestBoardListViewItemDraw_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            (UnityEngine_GameObject_o *)v48,
            (float)v49->static_fields->COST_2_ICON_NORMAL_POSITION_X,
            0LL);
          this = *v31;
          if ( !*v31 )
            goto LABEL_381;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(
            gameObject,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
            0LL);
          v51 = v32->fields.itemIds;
          if ( !v51 )
            goto LABEL_381;
          if ( v51->max_length <= 1 )
            break;
          v52 = v51->m_Items[2];
          v53 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v53 = BalanceConfig_TypeInfo;
          }
          if ( v52 == v53->static_fields->ItemIdQp )
          {
            *isDoubleItemConsumeQp = 1;
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
            if ( !this )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v54 = (UIWidget_o *)this;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            if ( !v54 )
              goto LABEL_381;
            UIWidget__set_width(v54, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg1;
            if ( !this )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_381;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
            if ( !this )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_381;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg1;
            if ( !this )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
            if ( !this )
              goto LABEL_381;
            UISprite__set_spriteName(
              (UISprite_o *)this,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_ITEM,
              0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
            if ( !this )
              goto LABEL_381;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
            if ( !this )
              goto LABEL_381;
            UISprite__set_spriteName(
              (UISprite_o *)this,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
              0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
            if ( !this )
              goto LABEL_381;
            v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v55,
              (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
              0LL);
            this = *v31;
            if ( !*v31 )
              goto LABEL_381;
            v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v56,
              (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
              0LL);
          }
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_381;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_381;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v57 = v32->fields.itemIds;
          if ( !v57 )
            goto LABEL_381;
          if ( v57->max_length <= 1 )
            break;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_381;
          ItemIconComponent__SetItem((ItemIconComponent_o *)this, v57->m_Items[2], -1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_381;
          v137.fields.r = r;
          v137.fields.g = g;
          v137.fields.b = b;
          v137.fields.a = a;
          ItemIconComponent__SetColor((ItemIconComponent_o *)this, v137, 0LL);
        }
        else
        {
          if ( !this )
            goto LABEL_381;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        if ( !QuestConsumeItemEntity__IsAvailableAt(v32, 2, 0LL) )
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_381;
LABEL_321:
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_381;
LABEL_322:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          goto LABEL_323;
        }
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
        if ( !this )
          goto LABEL_381;
        v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v109 = QuestBoardListViewItemDraw_TypeInfo;
        v110 = v108;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v109 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(
          v110,
          (float)v109->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_381;
        v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v111,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = *v31;
        if ( !*v31 )
          goto LABEL_381;
        v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v112,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_381;
        v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v113,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        if ( !this )
          goto LABEL_381;
        v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v114,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v115 = v32->fields.itemIds;
        if ( !v115 )
          goto LABEL_381;
        if ( v115->max_length > 2 )
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_381;
          ItemIconComponent__SetItem((ItemIconComponent_o *)this, v115->m_Items[3], -1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_381;
LABEL_68:
          v133.fields.r = r;
          v133.fields.g = g;
          v133.fields.b = b;
          v133.fields.a = a;
          ItemIconComponent__SetColor((ItemIconComponent_o *)this, v133, 0LL);
          goto LABEL_323;
        }
        break;
      case 4:
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_381;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v58 = questEnt->fields.bannerId;
        v59 = v22->fields.mCostApSp;
        if ( v58 < 1 )
        {
          if ( !v59 )
            goto LABEL_381;
          UISprite__set_atlas(v22->fields.mCostApSp, v22->fields.mTerminalAtlas, 0LL);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
          v95 = v22->fields.mCostApSp;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
          }
          v96 = *(_QWORD *)&this->fields.mTitleLevelStrSp[2].fields.updateAnchors;
          if ( !v96 )
            goto LABEL_381;
          if ( (unsigned int)v128 >= *(_DWORD *)(v96 + 24) )
            break;
          if ( !v95 )
            goto LABEL_381;
          UISprite__set_spriteName(v95, *(System_String_o **)(v96 + 8 * v128 + 32), 0LL);
        }
        else
        {
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v60 = QuestBoardListViewItemDraw__GetApSpriteFileName(v58, (const MethodInfo *)questEnt);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v59, v60, 0LL);
          if ( !v59 )
            goto LABEL_381;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v59, (unsigned __int8)this & 1, 0LL);
        }
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_381;
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_381;
        v145.fields.r = r;
        v145.fields.g = g;
        v145.fields.b = b;
        v145.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v145, 0LL);
        if ( !v32 )
          goto LABEL_323;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_381;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_381;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v97 = v32->fields.itemIds;
        if ( !v97 )
          goto LABEL_381;
        if ( !v97->max_length )
          break;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_381;
        ItemIconComponent__SetItem((ItemIconComponent_o *)this, v97->m_Items[1], -1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_381;
        v146.fields.r = r;
        v146.fields.g = g;
        v146.fields.b = b;
        v146.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)this, v146, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_381;
        v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v99 = QuestBoardListViewItemDraw_TypeInfo;
        v100 = v98;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v99 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(v100, (float)v99->static_fields->COST_2_ICON_NORMAL_POSITION_X, 0LL);
        this = *v31;
        if ( !*v31 )
          goto LABEL_381;
        v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v101,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
          0LL);
        v102 = v32->fields.itemIds;
        if ( !v102 )
          goto LABEL_381;
        if ( !v102->max_length )
          break;
        v103 = v102->m_Items[1];
        v104 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v104 = BalanceConfig_TypeInfo;
        }
        if ( v103 == v104->static_fields->ItemIdQp )
        {
          *isDoubleItemConsumeQp = 1;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
          if ( !this )
            goto LABEL_381;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v105 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v105 )
            goto LABEL_381;
          UIWidget__set_width(v105, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
          if ( !this )
            goto LABEL_381;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_381;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
          if ( !this )
            goto LABEL_381;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !this )
            goto LABEL_381;
          UISprite__set_spriteName(
            (UISprite_o *)this,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
            0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_381;
          v106 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(
            v106,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
            0LL);
          this = *v31;
          if ( !*v31 )
            goto LABEL_381;
          v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(
            v107,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
            0LL);
        }
        if ( !QuestConsumeItemEntity__IsAvailableAt(v32, 1, 0LL) )
          goto LABEL_323;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_381;
        goto LABEL_321;
      default:
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
        if ( !this )
          goto LABEL_381;
        goto LABEL_322;
    }
LABEL_382:
    sub_1B88814(this, questEnt);
  }
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
  if ( !this )
    goto LABEL_381;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_381;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
  if ( !this )
    goto LABEL_381;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
  if ( !this )
    goto LABEL_381;
  v132.fields.r = r;
  v132.fields.g = g;
  v132.fields.b = b;
  v132.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)this, v132, 0LL);
  if ( v32 && QuestConsumeItemEntity__IsAvailableAt(v32, 1, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_381;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_381;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_381;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_381;
    goto LABEL_68;
  }
LABEL_323:
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_381;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = *v31;
  if ( !*v31 )
    goto LABEL_381;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_381;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_381;
  v116 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v116, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = *v31;
  if ( !*v31 )
    goto LABEL_381;
  v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v117, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_381;
  v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v118, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  v119 = (UIWidget_o *)v22->fields.mCostLb1;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v119 )
    goto LABEL_381;
  UIWidget__set_width(v119, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_DEFAULT_WIDTH, 0LL);
  this = *v31;
  if ( !*v31 )
    goto LABEL_381;
  UIWidget__set_width(
    (UIWidget_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_DEFAULT_WIDTH,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_381;
  UIWidget__set_width(
    (UIWidget_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_DEFAULT_WIDTH,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_381;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
    0LL);
  this = *v31;
  if ( !*v31 )
    goto LABEL_381;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_381;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
    0LL);
  if ( *isDoubleItemConsumeQp || !*isTripleItemConsume )
    return;
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  v120 = v22->fields.mCostLb1;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v120 )
    goto LABEL_381;
  UILabel__set_spacingX(
    v120,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
    0LL);
  this = *v31;
  if ( !*v31 )
    goto LABEL_381;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_381;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_381;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = *v31;
  if ( !*v31 )
    goto LABEL_381;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_381;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_381;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = *v31;
  if ( !*v31 )
    goto LABEL_381;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this
    || (((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData),
        (this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1) == 0LL)
    || (UILabel__SetCondensedScale_47038932(
          (UILabel_o *)this,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
          0LL),
        (this = *v31) == 0LL)
    || (UILabel__SetCondensedScale_47038932(
          (UILabel_o *)this,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
          0LL),
        (this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3) == 0LL) )
  {
LABEL_381:
    sub_1B8880C(this, questEnt);
  }
  UILabel__SetCondensedScale_47038932(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetCostLabel(
        QuestBoardListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *content,
        int32_t costCalcVal,
        UnityEngine_Color_o baseColor,
        bool isOverCost,
        bool isClosed,
        bool isFixedVal,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  QuestBoardListViewItemDraw_c *v19; // x0
  float *p_POS_Y_ITVL_AREA; // x8
  QuestBoardListViewItemDraw_c *v21; // x0
  float *v22; // x8
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_4A580AF & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580AF = 1;
  }
  if ( !label )
    sub_1B8880C(this, label);
  UILabel__set_text(label, content, 0LL);
  if ( costCalcVal > 0 || isFixedVal )
  {
    v19 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v19 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_POS_Y_ITVL_AREA = (float *)&v19->static_fields->POS_Y_ITVL_AREA;
    r = p_POS_Y_ITVL_AREA[14];
    g = p_POS_Y_ITVL_AREA[15];
    b = p_POS_Y_ITVL_AREA[16];
    a = p_POS_Y_ITVL_AREA[17];
    if ( isClosed )
    {
      r = r * 0.5;
      g = g * 0.5;
      b = b * 0.5;
      a = a * 0.5;
    }
  }
  if ( isOverCost )
  {
    v21 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v21 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v22 = (float *)&v21->static_fields->POS_Y_ITVL_AREA;
    r = v22[18];
    g = v22[19];
    b = v22[20];
    a = v22[21];
    if ( isClosed )
    {
      r = r * 0.5;
      g = g * 0.5;
      b = b * 0.5;
      a = a * 0.5;
    }
  }
  v23.fields.b = b;
  v23.fields.a = a;
  v23.fields.r = r;
  v23.fields.g = g;
  UIWidget__set_color((UIWidget_o *)label, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetCostLabelItem(
        QuestBoardListViewItemDraw_o *this,
        UILabel_o *label,
        int32_t consumeNo,
        UserItemEntity_o *usrItem,
        ItemEntity_o *itemEnt,
        UnityEngine_Color_o baseCol,
        bool isClosed,
        bool isNotItemConsume,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  void *SelfUserGame; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x7
  bool v21; // w22
  System_String_o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_String_o *v27; // x23
  int32_t v28; // w25
  int32_t num; // w8
  int32_t v30; // [xsp+8h] [xbp-68h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseCol.fields.a;
  b = baseCol.fields.b;
  g = baseCol.fields.g;
  r = baseCol.fields.r;
  v31 = consumeNo;
  if ( (byte_4A580AE & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10828/*"QUEST_BOARD_COST_QP"*/);
    byte_4A580AE = 1;
  }
  if ( isNotItemConsume )
    v31 = 0;
  SelfUserGame = System_Int32__ToString((int32_t)&v31, 0LL);
  if ( !itemEnt )
    goto LABEL_17;
  if ( itemEnt->fields.type == 1 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v21 = v31 > *((_DWORD *)SelfUserGame + 24);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10828/*"QUEST_BOARD_COST_QP"*/, 0LL);
      v30 = v31;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v23, v24, v25);
      SelfUserGame = System_String__Format(v22, v26, 0LL);
      v27 = (System_String_o *)SelfUserGame;
      goto LABEL_16;
    }
LABEL_17:
    sub_1B8880C(SelfUserGame, v19);
  }
  v28 = v31;
  v27 = (System_String_o *)SelfUserGame;
  if ( usrItem && (SelfUserGame = (void *)ItemEntity__IsEnable(itemEnt, 0LL), ((unsigned __int8)SelfUserGame & 1) != 0) )
    num = usrItem->fields.num;
  else
    num = 0;
  v21 = v28 > num;
LABEL_16:
  v32.fields.r = r;
  v32.fields.g = g;
  v32.fields.b = b;
  v32.fields.a = a;
  QuestBoardListViewItemDraw__SetCostLabel(
    (QuestBoardListViewItemDraw_o *)SelfUserGame,
    label,
    v27,
    0,
    v32,
    v21,
    isClosed,
    isNotItemConsume,
    v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetDispBannerArrows(
        QuestBoardListViewItemDraw_o *this,
        bool isDisp,
        bool isForce,
        const MethodInfo *method)
{
  struct ScrollArrowComponent_array *mBannerArrows; // x8
  int max_length; // w22
  QuestBoardListViewItemDraw_o *v6; // x19
  il2cpp_array_size_t v7; // w23
  bool v8; // w20
  bool v9; // w21

  mBannerArrows = this->fields.mBannerArrows;
  if ( !mBannerArrows )
    goto LABEL_8;
  max_length = mBannerArrows->max_length;
  if ( max_length >= 1 )
  {
    v6 = this;
    v7 = 0;
    v8 = isDisp;
    v9 = isForce;
    do
    {
      if ( v7 >= mBannerArrows->max_length )
        sub_1B88814(this, isDisp);
      this = (QuestBoardListViewItemDraw_o *)mBannerArrows->m_Items[v7];
      if ( !this )
        break;
      ScrollArrowComponent__SetDisp((ScrollArrowComponent_o *)this, v8, v9, 0LL);
      if ( max_length == ++v7 )
        return;
      mBannerArrows = v6->fields.mBannerArrows;
    }
    while ( mBannerArrows );
LABEL_8:
    sub_1B8880C(this, isDisp);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetEventTargetAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventTarget; // x20
  UnityEngine_Object_o *eventTargetComponent; // x20
  __int64 v7; // x1
  BoardOptionEventTargetComponent_o *v8; // x0

  if ( (byte_4A580BD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A580BD = 1;
  }
  eventTarget = (UnityEngine_Object_o *)this->fields.eventTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventTarget, 0LL, 0LL) )
  {
    eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(eventTargetComponent, 0LL, 0LL) )
    {
      v8 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v8 )
        goto LABEL_16;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v8, 0LL) )
      {
        v8 = this->fields.eventTargetComponent;
        if ( !v8 )
          goto LABEL_16;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v8, 0LL) )
        {
          v8 = this->fields.eventTargetComponent;
          if ( v8 )
          {
            BoardOptionEventTargetComponent__SetAlpha(v8, alpha, 0LL);
            return;
          }
LABEL_16:
          sub_1B8880C(v8, v7);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBoardListViewItemDraw__SetFaceImage(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        UISprite_o *maskSprite,
        int32_t maskWidth,
        System_String_o *maskSpriteName,
        UnityEngine_Color_o baseColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  QuestBoardListViewItemDraw_o *v15; // x23
  int32_t charaIconId; // w24
  UISprite_o *mLabelFaceIcon; // x24
  int32_t ServantId; // w25
  int32_t LimitCount; // w26
  int32_t v20; // w22
  int32_t bannerId; // t1
  QuestBoardListViewItemDraw_c *v22; // x0
  System_String_o *QUEST_BOARD_MASK_SPNAME_PREFIX; // x21
  System_String_o *v24; // x0
  UISpriteData_o *Sprite; // x21
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v15 = this;
  if ( (byte_4A580AD & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580AD = 1;
  }
  if ( !questEnt )
    goto LABEL_23;
  this = (QuestBoardListViewItemDraw_o *)v15->fields.mLabelFaceObj;
  if ( !this )
    goto LABEL_23;
  charaIconId = questEnt->fields.charaIconId;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, charaIconId > 0, 0LL);
  if ( charaIconId < 1 )
    return 0;
  mLabelFaceIcon = v15->fields.mLabelFaceIcon;
  ServantId = QuestEntity__getServantId(questEnt, 0LL);
  LimitCount = QuestEntity__getLimitCount(questEnt, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceImage(mLabelFaceIcon, ServantId, LimitCount, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v15->fields.mLabelFaceIcon;
  if ( !this )
    goto LABEL_23;
  v27.fields.r = r;
  v27.fields.g = g;
  v27.fields.b = b;
  v27.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v27, 0LL);
  if ( !maskSprite )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, 1, 0LL);
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  UIWidget__set_color((UIWidget_o *)maskSprite, v28, 0LL);
  bannerId = questEnt->fields.bannerId;
  v20 = (_DWORD)questEnt + 64;
  if ( bannerId < 1 )
  {
    UISprite__set_atlas(maskSprite, v15->fields.mTerminalAtlas, 0LL);
    UISprite__set_spriteName(maskSprite, maskSpriteName, 0LL);
  }
  else
  {
    v22 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v22 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_MASK_SPNAME_PREFIX = v22->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
    v24 = System_Int32__ToString(v20, 0LL);
    maskSpriteName = System_String__Concat_61707032(QUEST_BOARD_MASK_SPNAME_PREFIX, v24, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(maskSprite, maskSpriteName, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)maskSprite->fields.mAtlas;
  if ( !this )
    goto LABEL_23;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)this, maskSpriteName, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, Sprite != 0LL, 0LL);
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)maskSprite, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Sprite )
    {
      Sprite->fields.width = maskWidth - 1;
      return 1;
    }
LABEL_23:
    sub_1B8880C(this, questEnt);
  }
  return 1;
}


void __fastcall QuestBoardListViewItemDraw__SetInfoTextAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  struct BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4A580BB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4A580BB = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_1B8880C(mOptionInfoLb, method);
LABEL_9:
    BoardOptionTextWithIconComponent__set_Alpha(mOptionInfoLb, alpha, 0LL);
    return;
  }
  mOptionInfoLb = this->fields.mOptionInfoLb;
  if ( !mOptionInfoLb )
    goto LABEL_11;
  if ( mOptionInfoLb->fields.alpha < 1.0 )
    goto LABEL_9;
}


void __fastcall QuestBoardListViewItemDraw__SetInput(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListViewItemDraw__SetItem(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  int32_t info_kind_k__BackingField; // w23
  QuestEntity_o *Mine; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_Object_o *mEarthLine; // x22
  __int64 v12; // x1
  QuestBoardListViewEarthLine_o *mOptionSecondBattleInformationObj; // x0
  Il2CppObject *Component_object; // x0
  struct QuestBoardListViewMultiSecondBattleInformation_o **p_secondBattleInformation; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  int32_t size; // w2
  int v20; // w9
  struct UnityEngine_GameObject_array *mStatusSp; // x22
  int max_length; // w8
  unsigned int v23; // w25
  UnityEngine_GameObject_o *mCostObj; // x22
  QuestBoardListViewItemDraw_c *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Object_o *eventTargetComponent; // x22
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x7
  UnityEngine_GameObject_o *v32; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *v34; // x8
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5808A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UISprite__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A5808A = 1;
  }
  if ( questBoardItem )
  {
    this->fields.isDummy = 0;
    quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
    if ( quest_info_k__BackingField
      && ((info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField,
           Mine = MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL),
           (info_kind_k__BackingField | 4) == 4)
       || Mine) )
    {
      if ( dispMode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4A55CE6 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
        {
          mOptionSecondBattleInformationObj = this->fields.mEarthLine;
          if ( !mOptionSecondBattleInformationObj )
            goto LABEL_90;
          QuestBoardListViewEarthLine__Hide(mOptionSecondBattleInformationObj, 0LL);
        }
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mOptionSecondBattleInformationObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = (struct QuestBoardListViewMultiSecondBattleInformation_o *)Component_object;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.secondBattleInformation,
          (int32_t)Component_object,
          v16,
          v17);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.secondBattleInformation;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)*p_secondBattleInformation;
        if ( !*p_secondBattleInformation )
          goto LABEL_90;
        QuestBoardListViewMultiSecondBattleInformation__Reset(
          (QuestBoardListViewMultiSecondBattleInformation_o *)mOptionSecondBattleInformationObj,
          0LL);
        mMultiSecondBattleInformation = this->fields.mMultiSecondBattleInformation;
        if ( !mMultiSecondBattleInformation )
          goto LABEL_90;
        size = mMultiSecondBattleInformation->fields._size;
        v20 = mMultiSecondBattleInformation->fields._version + 1;
        mMultiSecondBattleInformation->fields._size = 0;
        mMultiSecondBattleInformation->fields._version = v20;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)mMultiSecondBattleInformation->fields._items, 0, size, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mOptionPreBattleSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostConsumeBattleWinSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        v35.fields.r = 1.0;
        v35.fields.g = 1.0;
        v35.fields.b = 1.0;
        v35.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mOptionSecondBattleInformationObj, v35, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj
          || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mStatusObj) == 0LL)
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mStatusSp = this->fields.mStatusSp) == 0LL) )
        {
LABEL_90:
          sub_1B8880C(mOptionSecondBattleInformationObj, v12);
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v23 = 0;
          do
          {
            if ( v23 >= max_length )
              sub_1B88814(mOptionSecondBattleInformationObj, v12);
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)mStatusSp->m_Items[v23];
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_90;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
            max_length = mStatusSp->max_length;
          }
          while ( (int)++v23 < max_length );
        }
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mBannerRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNoticeNumberRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNextSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mPrevSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mClassIconRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNoBattleObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mRarePrismSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mQuestInfoBtn;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mQuestInfoShowing;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mDamageRecordSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mKnockdownRecordSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.blackMarkSpace;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mBoardMessage;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.eventTarget;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.alloutRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.roadmapButton;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mCostObj = this->fields.mCostObj;
        v25 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v25 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(mCostObj, v25->static_fields->COST_OBJ_POS, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                                                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UIWidget__set_width(
          (UIWidget_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_SINGLE,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostApSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v26,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostLb1;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v27,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v28,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_90;
        UISprite__set_spriteName(
          (UISprite_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME,
          0LL);
        eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
        {
          mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.eventTargetComponent;
          if ( !mOptionSecondBattleInformationObj )
            goto LABEL_90;
          BoardOptionEventTargetComponent__DestroyList(
            (BoardOptionEventTargetComponent_o *)mOptionSecondBattleInformationObj,
            0LL);
        }
        switch ( info_kind_k__BackingField )
        {
          case 0:
            AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( AreaBoardInfo_k__BackingField
              && (unsigned int)(AreaBoardInfo_k__BackingField->fields.questBoardType - 3) <= 1 )
            {
              goto LABEL_80;
            }
            goto LABEL_83;
          case 1:
            goto LABEL_89;
          case 2:
          case 3:
            QuestBoardListViewItemDraw__SetItemOfShortcut(this, questBoardItem, v30);
            return;
          case 4:
            v34 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( !v34 )
              goto LABEL_89;
            if ( v34->fields.questBoardType == 2 )
LABEL_83:
              QuestBoardListViewItemDraw__SetItemOfArea(this, questBoardItem, 1, 1, 0, 0, 0, v31);
            else
LABEL_80:
              QuestBoardListViewItemDraw__SetItemOfFolder(this, questBoardItem, v30);
            break;
          case 5:
            QuestBoardListViewItemDraw__SetItemOfWarBoard(this, questBoardItem, v30);
            return;
          case 6:
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)questBoardItem->fields._quest_info_k__BackingField;
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_90;
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)MapControl_QuestInfo__GetMine(
                                                                                   (MapControl_QuestInfo_o *)mOptionSecondBattleInformationObj,
                                                                                   0LL);
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_90;
            if ( QuestEntity__HasFlag((QuestEntity_o *)mOptionSecondBattleInformationObj, 0x800000000000000LL, 0LL) )
              QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(this, questBoardItem, v30);
            else
LABEL_89:
              QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v30);
            break;
          default:
            return;
        }
      }
    }
    else
    {
      this->fields.isDummy = 1;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      GameObjectExtensions__SetLocalScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfArea(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        bool isBoardDisp,
        bool isBadgeDisp,
        bool isBlackMarkOnly,
        bool isWhiteMarkOnly,
        bool isSpecialClosedBanner,
        const MethodInfo *method)
{
  QuestBoardListViewItem_o *v12; // x20
  QuestBoardListViewItemDraw_o *v13; // x19
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  int32_t questBoardType; // w28
  EventEntity_o *eventEnt; // x23
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v21; // x27
  WarEntity_o *Mine; // x26
  char v23; // w21
  UnityEngine_Object_o *eventTargetComponent; // x27
  const MethodInfo *v25; // x3
  _BOOL4 v26; // w27
  il2cpp_array_size_t v27; // w21
  const MethodInfo *v28; // x2
  bool IsPurchasedByRarePrism; // w29
  bool v30; // w28
  bool IsClose; // w25
  bool v32; // w24
  _BOOL8 IsActiveEventWar; // x0
  const MethodInfo *v34; // x4
  int v35; // w21
  QuestBoardListViewItemDraw_c *v36; // x0
  System_String_o *QBOARD_CAP_CLOSED_FORMAT; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *EventAddBannerSpriteName; // x23
  QuestBoardListViewItemDraw_o *v43; // x25
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t v47; // w10
  QuestBoardListViewItemDraw_c *v48; // x8
  int32_t v49; // w23
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v51; // x23
  Il2CppObject *v52; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  const MethodInfo *v56; // x5
  ScrTerminalListTop_c *v57; // x8
  struct ScrTerminalListTop_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v59; // x0
  bool v60; // zf
  ScrTerminalListTop_c *v61; // x0
  clsQuestCheck_o *v62; // x25
  clsQuestCheck_o *v63; // x25
  bool v64; // w24
  QuestBoardListViewItemDraw_c *v65; // x0
  __int64 v66; // x8
  Il2CppObject *Entity; // x2
  bool v68; // w4
  QuestBoardListViewItemDraw_o *v69; // x0
  bool v70; // w3
  QuestBoardListViewItem_o *v71; // x1
  clsQuestCheck_o *v72; // x23
  bool v73; // w0
  QuestBoardListViewItemDraw_c *v74; // x8
  bool v75; // w23
  struct QuestBoardListViewItemDraw_StaticFields *v76; // x8
  __int64 v77; // x9
  bool v78; // w21
  QuestBoardListViewItemDraw_o *v79; // x28
  clsQuestCheck_o *v80; // x25
  clsQuestCheck_o *v81; // x25
  ScrTerminalListTop_c *v82; // x0
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w25
  TerminalPramsManager_c *v84; // x0
  ScrTerminalListTop_c *v85; // x8
  int32_t QuestId_k__BackingField; // w25
  TerminalPramsManager_c *v87; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v89; // x23
  System_Int32_c *v90; // x0
  struct System_Threading_CancellationTokenSource_o *v91; // x8
  Il2CppObject *v92; // x0
  int v93; // w21
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v95; // x28
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  System_String_o *v99; // x23
  Il2CppObject *v100; // x0
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x23
  Il2CppObject *v105; // x0
  UISprite_o *mcBaseP; // x28
  const MethodInfo *v107; // x2
  QuestBoardListViewItemDraw_o *v108; // x8
  QuestBoardListViewItemDraw_o **p_mOptionInfoLb; // x23
  const MethodInfo *v110; // x3
  int32_t v111; // w1
  QuestBoardListViewItemDraw_c *v112; // x0
  const MethodInfo *v113; // x2
  const MethodInfo *v114; // x3
  const MethodInfo *v115; // x3
  const MethodInfo *v116; // x3
  const MethodInfo *v117; // x3
  int32_t status; // w1
  QuestBoardListViewItemDraw_c *v119; // x0
  struct QuestBoardListViewObject_o *v120; // x8
  QuestBoardListViewManager_o *manager; // x22
  __int64 v122; // x9
  bool v123; // w24
  System_Collections_Generic_List_object__o *mInfoTextList; // x24
  int32_t AlphaAnimCnt; // w0
  UnityEngine_Object_o *mEarthLine; // x23
  QuestBoardListViewEarthLine_o *v127; // x23
  int32_t v128; // [xsp+0h] [xbp-90h]
  bool v129; // [xsp+4h] [xbp-8Ch]
  bool v130; // [xsp+8h] [xbp-88h]
  bool v131; // [xsp+Ch] [xbp-84h]
  struct UnityEngine_GameObject_o *checkTime; // [xsp+10h] [xbp-80h]
  bool v134; // [xsp+1Ch] [xbp-74h]
  _BOOL4 IsClosedWar; // [xsp+20h] [xbp-70h]
  _BOOL4 IsMainInterlude; // [xsp+24h] [xbp-6Ch]
  int warId; // [xsp+28h] [xbp-68h]
  int32_t PrioredBannerId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = questBoardItem;
  v13 = this;
  if ( (byte_4A5808C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5808C = 1;
  }
  if ( !v12 )
    goto LABEL_282;
  quest_info_k__BackingField = v12->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_282;
  v134 = isBadgeDisp;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  v130 = isBlackMarkOnly;
  v131 = isWhiteMarkOnly;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_282;
  questBoardType = AreaBoardInfo_k__BackingField->fields.questBoardType;
  eventEnt = AreaBoardInfo_k__BackingField->fields.eventEnt;
  mListViewObject = v13->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)mListViewObject->fields.manager;
  if ( !this )
    goto LABEL_282;
  questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_284;
  }
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  checkTime = this->fields.mEarthLinePrefab;
  v129 = isSpecialClosedBanner;
  if ( warId < 1 )
  {
    v21 = 0LL;
LABEL_15:
    Mine = 0LL;
    v23 = 1;
    goto LABEL_16;
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_282;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, warId, 0LL);
  v21 = WarInfoByWarID;
  if ( !WarInfoByWarID )
    goto LABEL_15;
  Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
  v23 = 0;
LABEL_16:
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mLabelObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mTitleObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mAdvanceNoticeObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mOverwriteAdvanceNoticeObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mOptionObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mOptionRestrinctionLb;
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mRewardObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mPhaseObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mChallengeObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mCostObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mCondObject;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mcBaseP;
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, questBoardType != 1, 0LL);
  if ( Mine )
  {
    IsMainInterlude = WarEntity__IsMainInterlude(Mine, 0LL);
    if ( (v23 & 1) != 0 )
    {
LABEL_36:
      IsClosedWar = 0;
      goto LABEL_39;
    }
  }
  else
  {
    IsMainInterlude = 0;
    if ( (v23 & 1) != 0 )
      goto LABEL_36;
  }
  IsClosedWar = MapControl_WarInfo__IsClosedWar(v21, 0LL);
LABEL_39:
  this = (QuestBoardListViewItemDraw_o *)v13->fields.blackMarkSpace;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.eventTarget;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.alloutRoot;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  eventTargetComponent = (UnityEngine_Object_o *)v13->fields.eventTargetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)v13->fields.eventTargetComponent;
    if ( !this )
      goto LABEL_282;
    BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)this, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_282;
  v26 = questBoardType == 2 && eventEnt != 0LL;
  v27 = questBoardType - 1;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             this,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.m_CancellationTokenSource,
                             Mine,
                             v25);
  if ( questBoardType == 1 )
  {
    QuestBoardListViewItemDraw__SetupBanner(v13, v12, v28);
    v30 = v134;
    IsClose = 0;
    v32 = 0;
    goto LABEL_211;
  }
  if ( questBoardType == 2 && eventEnt != 0LL )
  {
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_282;
    IsActiveEventWar = QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0LL);
    v32 = (!IsMainInterlude || IsPurchasedByRarePrism) && IsActiveEventWar;
    if ( IsMainInterlude )
    {
      v35 = IsClosedWar;
      if ( IsMainInterlude && !IsPurchasedByRarePrism || !IsActiveEventWar )
        v35 = AreaBoardInfo_k__BackingField->fields.status == 2 || IsClosedWar;
    }
    else
    {
      v35 = IsClosedWar;
    }
    EventAddBannerSpriteName = QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (QuestBoardListViewItemDraw_o *)IsActiveEventWar,
                                 eventEnt,
                                 warId,
                                 v35 | v32,
                                 v34);
    v60 = v35 == 0;
    goto LABEL_172;
  }
  if ( AreaBoardInfo_k__BackingField->fields.status == 6 && questBoardType == 2 )
  {
    if ( Mine )
    {
      v36 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v36 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED_FORMAT = v36->static_fields->QBOARD_CAP_CLOSED_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0LL);
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v38, v39, v40);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_FORMAT, v41, 0LL);
    }
    else
    {
      EventAddBannerSpriteName = (System_String_o *)StringLiteral_1/*""*/;
    }
    v61 = ScrTerminalListTop_TypeInfo;
    if ( v129 )
    {
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v61 = ScrTerminalListTop_TypeInfo;
      }
      if ( warId == v61->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
        goto LABEL_103;
    }
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = ScrTerminalListTop_TypeInfo;
    }
    if ( warId != v61->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_96;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v62 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v62 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsWarClear(
            v62,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL) )
      goto LABEL_96;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v63 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v63 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsWarClear(
            v63,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
            0LL) )
    {
LABEL_103:
      v65 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v65 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v64 = v131;
      v66 = 1016LL;
    }
    else
    {
LABEL_96:
      v64 = v131;
      if ( System_String__op_Inequality(EventAddBannerSpriteName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__IsExistBanner(EventAddBannerSpriteName, 0LL) )
          goto LABEL_107;
      }
      v65 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v65 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v66 = 984LL;
    }
    EventAddBannerSpriteName = *(System_String_o **)((char *)&v65->static_fields->POS_Y_ITVL_AREA + v66);
LABEL_107:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_282;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               warId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v68 = v64;
    v69 = v13;
    v70 = v130;
    v71 = v12;
    goto LABEL_171;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           warId,
                                           (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_282;
  v43 = this;
  this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
  v47 = (int)this;
  v48 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    v49 = (int)this;
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v48 = QuestBoardListViewItemDraw_TypeInfo;
    v47 = v49;
  }
  msQBoardL1Names = v48->static_fields->msQBoardL1Names;
  if ( !msQBoardL1Names )
    goto LABEL_282;
  if ( v27 >= msQBoardL1Names->max_length )
    goto LABEL_285;
  v51 = msQBoardL1Names->m_Items[v27];
  v128 = v47;
  PrioredBannerId = v47;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v44, v45, v46);
  EventAddBannerSpriteName = System_String__Format(v51, v52, 0LL);
  v57 = ScrTerminalListTop_TypeInfo;
  if ( !v129 )
  {
LABEL_123:
    v79 = v43;
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = ScrTerminalListTop_TypeInfo;
    }
    if ( warId != v57->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID )
      goto LABEL_160;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v80 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v80 )
      goto LABEL_282;
    if ( clsQuestCheck__IsWarClear(
           v80,
           ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
           0LL) )
    {
      goto LABEL_160;
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v81 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v81 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsQuestClear(
            v81,
            ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
            0,
            0LL) )
      goto LABEL_160;
    v82 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v82 = ScrTerminalListTop_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v82->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, 0LL) )
      goto LABEL_160;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v85 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v84->static_fields->_QuestId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v85 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField != v85->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
      goto LABEL_160;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DCB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DCB = 1;
    }
    v87 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v87 = TerminalPramsManager_TypeInfo;
    }
    if ( v87->static_fields->_PhaseCnt_k__BackingField == 2 )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      }
      m_CancellationTokenSource = this->fields.mTitleLevelStrSp[2].fields.m_CancellationTokenSource;
      if ( !m_CancellationTokenSource )
        goto LABEL_282;
      v78 = v131;
      if ( LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) > 1 )
      {
        v89 = *(System_String_o **)&m_CancellationTokenSource->fields._disposed;
        v43 = v79;
        PrioredBannerId = (int32_t)v79->fields.mcBaseP;
        v90 = int_TypeInfo;
LABEL_169:
        v92 = (Il2CppObject *)j_il2cpp_value_box_0(v90, &PrioredBannerId, v53, v54, v55);
        EventAddBannerSpriteName = System_String__Format(v89, v92, 0LL);
        goto LABEL_170;
      }
    }
    else
    {
LABEL_160:
      v78 = v131;
      v43 = v79;
      if ( isBoardDisp && v134 && !isBlackMarkOnly && !v131 )
        goto LABEL_170;
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      }
      v91 = this->fields.mTitleLevelStrSp[2].fields.m_CancellationTokenSource;
      if ( !v91 )
        goto LABEL_282;
      if ( LODWORD(v91->fields._registeredCallbacksLists) > 1 )
      {
        v89 = *(System_String_o **)&v91->fields._disposed;
        PrioredBannerId = v128;
        v90 = int_TypeInfo;
        goto LABEL_169;
      }
    }
LABEL_285:
    sub_1B88814(this, questBoardItem);
  }
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v57 = ScrTerminalListTop_TypeInfo;
  }
  static_fields = v57->static_fields;
  if ( warId != static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = ScrTerminalListTop_TypeInfo;
      static_fields = ScrTerminalListTop_TypeInfo->static_fields;
    }
    if ( warId == static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v72 = (clsQuestCheck_o *)this;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      if ( !v72 )
        goto LABEL_282;
      v73 = clsQuestCheck__IsWarClear(
              v72,
              ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
              0LL);
      v74 = QuestBoardListViewItemDraw_TypeInfo;
      v75 = v73;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v74 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v76 = v74->static_fields;
      v77 = 1016LL;
      if ( v75 )
        v77 = 1024LL;
      EventAddBannerSpriteName = *(System_String_o **)((char *)&v76->POS_Y_ITVL_AREA + v77);
      goto LABEL_122;
    }
    goto LABEL_123;
  }
  v59 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v59 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EventAddBannerSpriteName = v59->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
LABEL_122:
  v78 = v131;
LABEL_170:
  v70 = isBlackMarkOnly;
  v68 = v78;
  v69 = v13;
  v71 = v12;
  Entity = (Il2CppObject *)v43;
LABEL_171:
  QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v69, v71, (WarEntity_o *)Entity, v70, v68, v56);
  v32 = 0;
  v60 = !IsClosedWar;
LABEL_172:
  v93 = !v60;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !this )
    goto LABEL_282;
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, warId, 0LL);
  if ( OpenEntity )
  {
    v95 = OpenEntity;
    IsClose = WarReleaseEntity__IsClose(OpenEntity, 0LL);
    if ( IsClose )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !Mine )
        goto LABEL_282;
      v99 = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
      PrioredBannerId = Mine->fields.bannerId;
      v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v96, v97, v98);
      EventAddBannerSpriteName = System_String__Format(v99, v100, 0LL);
    }
    if ( WarReleaseEntity__IsAnnouncement(v95, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !Mine )
        goto LABEL_282;
      QBOARD_CAP_CLOSED_SPECIAL_FORMAT = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
      PrioredBannerId = Mine->fields.bannerId;
      v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v101, v102, v103);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v105, 0LL);
      IsClose = 1;
    }
  }
  else
  {
    IsClose = 0;
  }
  mcBaseP = v13->fields.mcBaseP;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(mcBaseP, EventAddBannerSpriteName, 0LL);
  v30 = v134;
  if ( v93 )
  {
    this = (QuestBoardListViewItemDraw_o *)v13->fields.mcBaseP;
    if ( !this )
      goto LABEL_282;
    v139.fields.r = 0.5;
    v139.fields.g = 0.5;
    v139.fields.b = 0.5;
    v139.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v139, 0LL);
  }
  if ( IsClose )
    v108 = 0LL;
  else
    v108 = v13;
  if ( IsClose )
  {
    LODWORD(questBoardItem) = 0;
    this = v13;
  }
  else if ( v134 )
  {
    if ( v26 )
      this = v108;
    else
      this = 0LL;
    if ( v32 || !v26 )
    {
      questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)AreaBoardInfo_k__BackingField->fields.questCount;
      this = v108;
      if ( !v108 )
        goto LABEL_282;
    }
    else
    {
      questBoardItem = 0LL;
      if ( !this )
        goto LABEL_282;
    }
  }
  else
  {
    questBoardItem = 0LL;
    this = v13;
    if ( !v13 )
      goto LABEL_282;
  }
  QuestBoardListViewItemDraw__SetBadge(this, (int32_t)questBoardItem, v107);
LABEL_211:
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mcBaseP;
  if ( !this )
    goto LABEL_282;
  p_mOptionInfoLb = (QuestBoardListViewItemDraw_o **)&v13->fields.mOptionInfoLb;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( !v30 )
  {
    this = (QuestBoardListViewItemDraw_o *)v13->fields.mcBaseP;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBoardDisp, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v13->fields.mNextSp;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v13->fields.roadmapButton;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                status = AreaBoardInfo_k__BackingField->fields.status;
                if ( status && status != 6 )
                  QuestBoardListViewItemDraw__SetStatusActive(v13, status, 0, v117);
                v119 = QuestBoardListViewItemDraw_TypeInfo;
                if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                  v119 = QuestBoardListViewItemDraw_TypeInfo;
                }
                QuestBoardListViewItemDraw__SetNewIcon(
                  v13,
                  v119->static_fields->NEW_POS_AREA,
                  v119->static_fields->NEW_W_AREA,
                  v119->static_fields->NEW_H_AREA,
                  v117);
                this = (QuestBoardListViewItemDraw_o *)v13->fields.mRarePrismSp;
                if ( this )
                {
                  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsPurchasedByRarePrism, 0LL);
                    this = *p_mOptionInfoLb;
                    if ( *p_mOptionInfoLb )
                    {
                      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
                      if ( this )
                      {
                        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent(
                                                                 (UnityEngine_Transform_o *)this,
                                                                 0LL);
                        if ( this )
                        {
                          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
                          if ( this )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                            this = *p_mOptionInfoLb;
                            if ( *p_mOptionInfoLb )
                            {
                              this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
                              if ( this )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_282;
  }
  v111 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v111 && v111 != 6 )
    QuestBoardListViewItemDraw__SetStatusActive(v13, v111, v32 || v111 != 1 || !v26, v110);
  v112 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v112 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v13,
    v112->static_fields->NEW_POS_AREA,
    v112->static_fields->NEW_W_AREA,
    v112->static_fields->NEW_H_AREA,
    v110);
  if ( IsClosedWar && IsMainInterlude )
    QuestBoardListViewItemDraw__SetStatusActive(v13, 2, 1, v114);
  QuestBoardListViewItemDraw__SetClearSprite(v13, Mine, v113);
  if ( IsClose )
  {
    this = (QuestBoardListViewItemDraw_o *)v13->fields.mNextSp;
    if ( !this )
      goto LABEL_282;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_282;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    QuestBoardListViewItemDraw__SetNextSprite(v13, AreaBoardInfo_k__BackingField, Mine, v115);
  }
  QuestBoardListViewItemDraw__CreateInfoTextList(v13, v12, (int64_t)checkTime, v116);
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    (!IsClosedWar || !IsMainInterlude) && IsPurchasedByRarePrism,
    0LL);
  v120 = v13->fields.mListViewObject;
  if ( !v120 )
    goto LABEL_282;
  manager = (QuestBoardListViewManager_o *)v120->fields.manager;
  if ( manager )
  {
    questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
    v122 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v122
      || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v122 - 1] != QuestBoardListViewManager_TypeInfo )
    {
      this = (QuestBoardListViewItemDraw_o *)v120->fields.manager;
LABEL_284:
      sub_1B88ACC(this);
      goto LABEL_285;
    }
  }
  if ( IsMainInterlude )
    goto LABEL_252;
  mInfoTextList = (System_Collections_Generic_List_object__o *)v13->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_282;
  questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
  if ( (int)questBoardItem < 1 )
  {
LABEL_252:
    v123 = 0;
  }
  else
  {
    if ( !manager )
      goto LABEL_282;
    AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(manager, (int32_t)questBoardItem, 0LL);
    this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                             mInfoTextList,
                                             AlphaAnimCnt,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !this )
      goto LABEL_282;
    QuestBoardInformationText__SetTime(
      (QuestBoardInformationText_o *)this,
      &v13->fields.mOptionInfoLb,
      &v13->fields.mOptionInfoFrameSp,
      0LL);
    this = (QuestBoardListViewItemDraw_o *)v13->fields.mOptionInfoLb;
    if ( !this )
      goto LABEL_282;
    BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
    v123 = 1;
  }
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v123, 0LL);
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v123, 0LL);
  mEarthLine = (UnityEngine_Object_o *)v13->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    v127 = v13->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v127 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v127,
        *(UnityEngine_Vector3_o *)&this->fields.mTitleLevelStrSp->fields.mDrawRegion.fields.y,
        v13->fields.mListViewObject,
        warId,
        0LL);
      goto LABEL_272;
    }
LABEL_282:
    sub_1B8880C(this, questBoardItem);
  }
LABEL_272:
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItem__IsDisplayableRoadmapButton(v12, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !manager )
      goto LABEL_282;
  }
  else
  {
    if ( !manager )
      goto LABEL_282;
    if ( v12->fields.index != manager->fields._IndexFirstDisplayableRoadmapButton_k__BackingField )
      return;
  }
  this = (QuestBoardListViewItemDraw_o *)v13->fields.roadmapButton;
  if ( !this )
    goto LABEL_282;
  RoadmapButtonPrefab__Initialize((RoadmapButtonPrefab_o *)this, manager->fields._RoadmapAssetData_k__BackingField, 0LL);
  if ( !manager->fields.initMode )
  {
    this = (QuestBoardListViewItemDraw_o *)v13->fields.roadmapButton;
    if ( !this )
      goto LABEL_282;
    RoadmapButtonPrefab__ModifyRoadmapButton((RoadmapButtonPrefab_o *)this, 0, 1, 0LL);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfAreaForTeminalTopEffect(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        bool isBoardDisp,
        bool isBadgeDisp,
        bool isBlackMarkOnly,
        bool isWhiteMarkOnly,
        bool isSpecialClosedBanner,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw__SetItemOfArea(
    this,
    questBoardItem,
    isBoardDisp,
    isBadgeDisp,
    isBlackMarkOnly,
    isWhiteMarkOnly,
    isSpecialClosedBanner,
    method);
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfFolder(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  QuestBoardListViewItem_o *v3; // x20
  QuestBoardListViewItemDraw_o *v4; // x19
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x21
  int32_t warId; // w27
  MapControl_WarInfo_o *v8; // x24
  WarEntity_o *v9; // x22
  __int64 manager; // x23
  int v11; // w28
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  struct UnityEngine_GameObject_o *mEarthLinePrefab; // x26
  _BOOL4 IsMainInterlude; // w25
  const MethodInfo *v16; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x29
  _BOOL4 IsPurchasedByRarePrism; // w26
  int v19; // w28
  const MethodInfo *v20; // x4
  bool IsClose; // w29
  _BOOL4 v22; // w9
  unsigned int status; // w8
  BalanceConfig_c *v24; // x0
  QuestBoardListViewItemDraw_c *v25; // x0
  System_String_o *QBOARD_CAP_CLOSED; // x24
  ScrTerminalListTop_c *IsOpenedMainScenarioWar; // x0
  clsQuestCheck_o *v28; // x23
  clsQuestCheck_o *v29; // x23
  MapControl_RootInfo_o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  QuestBoardListViewItemDraw_c *v34; // x8
  int v35; // w23
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v37; // x24
  Il2CppObject *v38; // x0
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v40; // x23
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  QuestBoardListViewItemDraw_c *v44; // x0
  System_String_o *QBOARD_CAP_CLOSED_FORMAT; // x24
  Il2CppObject *v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  QuestBoardListViewItemDraw_c *v50; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x23
  Il2CppObject *v52; // x0
  System_String_o *EventAddBannerSpriteName; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  QuestBoardListViewItemDraw_c *v57; // x8
  int v58; // w23
  struct System_String_array *v59; // x8
  System_String_o *v60; // x24
  Il2CppObject *v61; // x0
  QuestBoardListViewItemDraw_c *v62; // x0
  UISprite_o *mcBaseP; // x23
  const MethodInfo *v64; // x3
  _BOOL8 HasFlag; // x0
  const MethodInfo *v66; // x4
  int32_t v67; // w1
  QuestBoardListViewItemDraw_c *v68; // x0
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  QuestBoardListViewItemDraw_c *v72; // x0
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x3
  BalanceConfig_c *v75; // x0
  const MethodInfo *v76; // x2
  struct QuestBoardListViewObject_o *v77; // x8
  __int64 v78; // x9
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x5
  int32_t questCount; // w1
  const MethodInfo *v83; // x3
  bool v84; // w20
  System_Collections_Generic_List_object__o *mInfoTextList; // x20
  struct QuestBoardListViewObject_o *v86; // x8
  __int64 v87; // x10
  int32_t AlphaAnimCnt; // w0
  _BOOL8 IsDisplayableRoadmapButton; // x0
  __int64 v90; // x1
  _BOOL4 v91; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+10h] [xbp-80h]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-78h]
  int64_t v94; // [xsp+20h] [xbp-70h]
  _BOOL4 IsClosedWar; // [xsp+28h] [xbp-68h]
  int bannerId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = questBoardItem;
  v4 = this;
  if ( (byte_4A58092 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58092 = 1;
  }
  if ( !v3 )
    goto LABEL_193;
  quest_info_k__BackingField = v3->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_193;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_193;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  if ( warId )
  {
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, warId, 0LL);
    v8 = (MapControl_WarInfo_o *)this;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
      v9 = (WarEntity_o *)this;
      manager = 0LL;
      goto LABEL_12;
    }
  }
  else
  {
    v8 = 0LL;
  }
  v9 = 0LL;
  manager = 1LL;
LABEL_12:
  eventEnt = AreaBoardInfo_k__BackingField->fields.eventEnt;
  if ( eventEnt )
  {
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0LL);
    v11 = (unsigned __int8)this & 1;
  }
  else
  {
    v11 = 0;
  }
  mListViewObject = v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)mListViewObject->fields.manager;
  if ( !this )
    goto LABEL_193;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_1B88ACC(this);
    goto LABEL_195;
  }
  mEarthLinePrefab = this->fields.mEarthLinePrefab;
  if ( (manager & 1) != 0 )
  {
    IsClosedWar = 0;
    if ( v9 )
    {
LABEL_22:
      IsMainInterlude = WarEntity__IsMainInterlude(v9, 0LL);
      goto LABEL_25;
    }
  }
  else
  {
    IsClosedWar = MapControl_WarInfo__IsClosedWar(v8, 0LL);
    if ( v9 )
      goto LABEL_22;
  }
  IsMainInterlude = 0;
LABEL_25:
  v94 = (int64_t)mEarthLinePrefab;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_193;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             this,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)m_CancellationTokenSource,
                             v9,
                             v16);
  v19 = (IsPurchasedByRarePrism || !IsMainInterlude) & v11;
  questList = (System_Collections_Generic_List_MapControl_QuestInfo__o *)m_CancellationTokenSource;
  if ( (unsigned int)(AreaBoardInfo_k__BackingField->fields.questBoardType - 3) > 1 )
  {
    IsClose = 0;
    goto LABEL_124;
  }
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelObj;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mTitleObj;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mAdvanceNoticeObj;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOverwriteAdvanceNoticeObj;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionObj;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionRestrinctionLb;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mRewardObj;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mPhaseObj;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mChallengeObj;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mCostObj;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mCondObject;
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( v19 != 0 || !IsMainInterlude )
  {
    v91 = IsClosedWar;
    goto LABEL_55;
  }
  if ( v9 && (WarEntity__HasFlag(v9, 128, 0LL) || WarEntity__HasFlag(v9, 32, 0LL)) )
  {
    v22 = IsClosedWar;
    status = AreaBoardInfo_k__BackingField->fields.status;
LABEL_54:
    v91 = v22 || status == 2;
    goto LABEL_55;
  }
  v91 = IsClosedWar;
  v24 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  if ( warId == v24->static_fields->MainInterludeWarId )
  {
    v22 = IsClosedWar;
    status = AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE;
    goto LABEL_54;
  }
LABEL_55:
  if ( (_DWORD)manager )
  {
    v25 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v25 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QBOARD_CAP_CLOSED = v25->static_fields->QBOARD_CAP_CLOSED;
  }
  else
  {
    IsOpenedMainScenarioWar = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      IsOpenedMainScenarioWar = ScrTerminalListTop_TypeInfo;
    }
    if ( warId != IsOpenedMainScenarioWar->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_201;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v28 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v28 )
      goto LABEL_193;
    IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)clsQuestCheck__IsWarClear(
                                                        v28,
                                                        ScrTerminalListTop_TypeInfo->static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                        0LL);
    if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
      goto LABEL_201;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v29 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v29 )
      goto LABEL_193;
    if ( !clsQuestCheck__IsWarClear(
            v29,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL) )
      goto LABEL_107;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_193;
    v30 = *(MapControl_RootInfo_o **)&this->fields.m_CachedPtr;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v30 )
      goto LABEL_193;
    IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)MapControl_RootInfo__IsOpenedMainScenarioWar(
                                                        v30,
                                                        ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                        0LL);
    if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
    {
LABEL_107:
      v62 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v62 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED = v62->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
    }
    else
    {
LABEL_201:
      if ( v9
        && (IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)WarEntity__HasFlag(v9, 128, 0LL),
            ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0) )
      {
        this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_193;
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( !this )
          goto LABEL_193;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 warId,
                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_193;
        this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
        v34 = QuestBoardListViewItemDraw_TypeInfo;
        v35 = (int)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v34 = QuestBoardListViewItemDraw_TypeInfo;
        }
        msQBoardL1Names = v34->static_fields->msQBoardL1Names;
        if ( !msQBoardL1Names )
          goto LABEL_193;
        if ( msQBoardL1Names->max_length <= 1 )
          goto LABEL_198;
        v37 = msQBoardL1Names->m_Items[1];
        bannerId = v35;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bannerId, v31, v32, v33);
        QBOARD_CAP_CLOSED = System_String__Format(v37, v38, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarReleaseMaster___);
        if ( !this )
          goto LABEL_193;
        OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, warId, 0LL);
        if ( OpenEntity )
        {
          v40 = OpenEntity;
          IsClose = WarReleaseEntity__IsClose(OpenEntity, 0LL);
          if ( IsClose )
          {
            v44 = QuestBoardListViewItemDraw_TypeInfo;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v44 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QBOARD_CAP_CLOSED_FORMAT = v44->static_fields->QBOARD_CAP_CLOSED_FORMAT;
            bannerId = v9->fields.bannerId;
            v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bannerId, v41, v42, v43);
            QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_FORMAT, v46, 0LL);
          }
          if ( WarReleaseEntity__IsAnnouncement(v40, 0LL) )
          {
            v50 = QuestBoardListViewItemDraw_TypeInfo;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v50 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QBOARD_CAP_CLOSED_SPECIAL_FORMAT = v50->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
            bannerId = v9->fields.bannerId;
            v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bannerId, v47, v48, v49);
            QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v52, 0LL);
            IsClose = 1;
          }
          goto LABEL_111;
        }
      }
      else
      {
        if ( eventEnt )
        {
          EventAddBannerSpriteName = QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                       (QuestBoardListViewItemDraw_o *)IsOpenedMainScenarioWar,
                                       eventEnt,
                                       warId,
                                       (v19 != 0) | (unsigned __int8)v91,
                                       v20);
        }
        else
        {
          this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   warId,
                                                   (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
          v57 = QuestBoardListViewItemDraw_TypeInfo;
          v58 = (int)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v57 = QuestBoardListViewItemDraw_TypeInfo;
          }
          v59 = v57->static_fields->msQBoardL1Names;
          if ( !v59 )
            goto LABEL_193;
          if ( v59->max_length <= 2 )
            goto LABEL_198;
          v60 = v59->m_Items[2];
          bannerId = v58;
          v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bannerId, v54, v55, v56);
          EventAddBannerSpriteName = System_String__Format(v60, v61, 0LL);
        }
        QBOARD_CAP_CLOSED = EventAddBannerSpriteName;
      }
    }
  }
  IsClose = 0;
LABEL_111:
  mcBaseP = v4->fields.mcBaseP;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetBanner(mcBaseP, QBOARD_CAP_CLOSED, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
  if ( !this )
    goto LABEL_193;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_193;
  v97.fields.r = 1.0;
  v97.fields.g = 1.0;
  v97.fields.b = 1.0;
  v97.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v97, 0LL);
  if ( v91 )
  {
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
    if ( !this )
      goto LABEL_193;
    v98.fields.r = 0.5;
    v98.fields.g = 0.5;
    v98.fields.b = 0.5;
    v98.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v98, 0LL);
  }
LABEL_124:
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    (!IsMainInterlude || !IsClosedWar) && IsPurchasedByRarePrism,
    0LL);
  if ( !v9 || !(HasFlag = WarEntity__HasFlag(v9, 128, 0LL)) && !(HasFlag = WarEntity__HasFlag(v9, 32, 0LL)) )
  {
    if ( !IsClose && AreaBoardInfo_k__BackingField->fields.status == 1 )
      QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v64);
    v72 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v72 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v4,
      v72->static_fields->NEW_POS_AREA,
      v72->static_fields->NEW_W_AREA,
      v72->static_fields->NEW_H_AREA,
      v64);
    v75 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v75 = BalanceConfig_TypeInfo;
    }
    if ( warId == v75->static_fields->MainInterludeWarId
      && (AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE) == 2 )
    {
      QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v74);
    }
    QuestBoardListViewItemDraw__SetClearSprite(v4, v9, v73);
    if ( !v9 )
      goto LABEL_171;
    goto LABEL_167;
  }
  v67 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v67 && v67 != 6 && (!IsClose || v67 != 1) )
    QuestBoardListViewItemDraw__SetStatusActive(v4, v67, v19 != 0 || eventEnt == 0LL || v67 != 1, v64);
  if ( IsPurchasedByRarePrism
    && QuestBoardListViewItemDraw__HasNewQuestInWar(
         (QuestBoardListViewItemDraw_o *)HasFlag,
         questList,
         warId,
         IsMainInterlude,
         v66) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v64);
  }
  v68 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v68 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v4,
    v68->static_fields->NEW_POS_AREA,
    v68->static_fields->NEW_W_AREA,
    v68->static_fields->NEW_H_AREA,
    v64);
  if ( IsMainInterlude && IsClosedWar )
    QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v70);
  QuestBoardListViewItemDraw__SetClearSprite(v4, v9, v69);
  if ( IsClose )
  {
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mNextSp;
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    QuestBoardListViewItemDraw__SetNextSprite(v4, AreaBoardInfo_k__BackingField, v9, v71);
  }
  v77 = v4->fields.mListViewObject;
  if ( !v77 )
    goto LABEL_193;
  manager = (__int64)v77->fields.manager;
  if ( !manager )
  {
LABEL_196:
    IsDisplayableRoadmapButton = QuestBoardListViewItem__IsDisplayableRoadmapButton(v3, 0LL);
    sub_1B8880C(IsDisplayableRoadmapButton, v90);
  }
  v78 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)v78
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v78 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_195:
    sub_1B88ACC(manager);
    goto LABEL_196;
  }
  if ( QuestBoardListViewItem__IsDisplayableRoadmapButton(v3, 0LL) || v3->fields.index == *(_DWORD *)(manager + 684) )
  {
    this = (QuestBoardListViewItemDraw_o *)v4->fields.roadmapButton;
    if ( !this )
      goto LABEL_193;
    RoadmapButtonPrefab__Initialize((RoadmapButtonPrefab_o *)this, *(AssetData_o **)(manager + 504), 0LL);
    if ( !*(_DWORD *)(manager + 328) )
    {
      this = (QuestBoardListViewItemDraw_o *)v4->fields.roadmapButton;
      if ( !this )
        goto LABEL_193;
      RoadmapButtonPrefab__ModifyRoadmapButton((RoadmapButtonPrefab_o *)this, 0, 1, 0LL);
    }
  }
LABEL_167:
  if ( WarEntity__IsContainPrioredEntity(v9, 18, 0LL) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v79);
    QuestBoardListViewItemDraw__SetClearSprite(v4, v9, v80);
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(v9, 0LL) )
    QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v4, v3, v9, 0, 0, v81);
LABEL_171:
  if ( IsClose || !IsPurchasedByRarePrism && v19 == 0 && eventEnt != 0LL )
    questCount = 0;
  else
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  QuestBoardListViewItemDraw__SetBadge(v4, questCount, v76);
  QuestBoardListViewItemDraw__CreateInfoTextList(v4, v3, v94, v83);
  if ( !IsMainInterlude )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)v4->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_193;
    questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
    if ( (int)questBoardItem >= 1 )
    {
      v86 = v4->fields.mListViewObject;
      if ( !v86 )
        goto LABEL_193;
      this = (QuestBoardListViewItemDraw_o *)v86->fields.manager;
      if ( !this )
        goto LABEL_193;
      v87 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v87
        && (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v87 - 1] == QuestBoardListViewManager_TypeInfo )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                         (QuestBoardListViewManager_o *)this,
                         (int32_t)questBoardItem,
                         0LL);
        this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                 mInfoTextList,
                                                 AlphaAnimCnt,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
        if ( this )
        {
          QuestBoardInformationText__SetTime(
            (QuestBoardInformationText_o *)this,
            &v4->fields.mOptionInfoLb,
            &v4->fields.mOptionInfoFrameSp,
            0LL);
          this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
          if ( this )
          {
            BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
            v84 = 1;
            goto LABEL_186;
          }
        }
LABEL_193:
        sub_1B8880C(this, questBoardItem);
      }
      sub_1B88ACC(this);
LABEL_198:
      sub_1B88814(this, questBoardItem);
    }
  }
  v84 = 0;
LABEL_186:
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v84, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v84, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x26
  __int64 Instance; // x0
  __int64 mCostConsumeBattleWinSp; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x22
  QuestEntity_o *PhaseDetailedEntity; // x29
  unsigned int QuestType; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  int32_t dispType; // w21
  bool HasFlag; // w0
  float v17; // s8
  bool v18; // w28
  Il2CppObject *MasterData_object; // x23
  bool v20; // w23
  bool v21; // w0
  int32_t v22; // w20
  _BOOL4 v23; // w8
  QuestBoardListViewItemDraw_o *PhaseMax; // x0
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  char v27; // w23
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v29; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v31; // x1
  System_String_o *v32; // x0
  QuestBoardListViewItemDraw_c *v33; // x0
  System_String_o *v34; // x25
  System_String_o *v35; // x0
  UISprite_o *mcBaseP; // x24
  System_String_o *v37; // x25
  int32_t questId; // w24
  const MethodInfo *v39; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v41; // x8
  UnityEngine_GameObject_o *v42; // x24
  float NEXT_POS_X_QUEST; // s0
  int32_t v44; // w1
  const MethodInfo *v45; // x3
  QuestBoardListViewItemDraw_c *v46; // x0
  const MethodInfo *v47; // x3
  QuestBoardListViewItemDraw_c *v48; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  QuestBoardListViewItemDraw_c *v50; // x0
  int pickupPriority; // w20
  QuestBoardListViewItemDraw_c *v52; // x0
  bool v53; // zf
  __int64 v54; // x9
  __int64 v55; // x10
  __int64 v56; // x11
  __int64 v57; // x12
  __int64 v58; // x13
  __int64 v59; // x14
  __int64 v60; // x10
  float *v61; // x9
  float *v62; // x10
  __int64 v63; // x11
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x2
  UnityEngine_GameObject_o *v66; // x23
  QuestBoardListViewItemDraw_c *v67; // x0
  bool v68; // w28
  QuestBoardListViewItemDraw_o *v69; // x0
  const MethodInfo *v70; // x5
  System_String_o *RecommendLv; // x0
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x2
  QuestBoardListViewItemDraw_o *v74; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x23
  int32_t mMatrixFrame; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v78; // x5
  bool v79; // w0
  const MethodInfo *v80; // x3
  UILabel_o *mTitleNameLb; // x23
  const MethodInfo *v82; // x4
  QuestBoardListViewItemDraw_o *v83; // x0
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x2
  UISprite_o *mLabelNameSp; // x23
  QuestBoardListViewItemDraw_o *v87; // x0
  const MethodInfo *v88; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v90; // x23
  const MethodInfo *v91; // x3
  UILabel_o *v92; // x23
  QuestBoardListViewItemDraw_o *v93; // x0
  const MethodInfo *v94; // x4
  bool PhasePresentGiftData; // w24
  const MethodInfo *v96; // x4
  int32_t v97; // w23
  QuestBoardListViewItemDraw_PhasePresentData_o *v98; // x25
  int32_t afterClear; // w28
  float v100; // s9
  float v101; // s10
  float v102; // s11
  float v103; // s12
  bool IsRepeatReward; // w0
  const MethodInfo *v105; // x6
  const MethodInfo *v106; // x3
  bool v107; // w23
  int v108; // w20
  const MethodInfo *v109; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x23
  const MethodInfo *v111; // x7
  int64_t *p_expireAt; // x8
  int64_t v113; // x23
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  __int64 v118; // x28
  Il2CppObject *v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  int32_t v122; // w2
  int32_t v123; // w3
  int32_t v124; // w1
  System_String_o *IfExists; // x26
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  struct MapControl_WarInfo_o *v129; // x8
  __int64 v130; // x25
  Il2CppObject *v131; // x0
  int32_t v132; // w2
  int32_t v133; // w3
  int32_t v134; // w2
  int32_t v135; // w3
  int32_t v136; // w1
  System_String_o *v137; // x28
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  struct MapControl_WarInfo_o *v141; // x8
  __int64 v142; // x25
  Il2CppObject *v143; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  int32_t v146; // w2
  int32_t v147; // w3
  int32_t v148; // w1
  System_String_o *v149; // x0
  System_Collections_Generic_List_object__o *v150; // x25
  System_String_o *v151; // x27
  QuestBoardInformationText_o *v152; // x24
  int32_t v153; // w2
  int32_t v154; // w3
  struct System_Object_array *items; // x8
  _QWORD *v156; // x9
  __int64 size; // x10
  Il2CppClass **v158; // x0
  bool v159; // w25
  UISprite_o *v160; // x28
  __int64 v161; // x8
  System_String_o *v162; // x24
  System_String_o *v163; // x0
  System_String_o *v164; // x24
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x28
  char v166; // w23
  struct QuestBoardListViewObject_o *v167; // x8
  System_Collections_Generic_List_object__o *v168; // x24
  __int64 v169; // x9
  int32_t AlphaAnimCnt; // w0
  Il2CppObject *Item; // x24
  int32_t v172; // w9
  int32_t v173; // w8
  const MethodInfo *v174; // x1
  int32_t flag; // w24
  UISprite_o *mCostApSp; // x23
  System_String_o *ApSpriteFileName; // x24
  UnityEngine_GameObject_o *mChallengeObj; // x23
  struct UnityEngine_GameObject_o *v179; // x20
  QuestBoardListViewItemDraw_c *v180; // x0
  _BOOL4 v181; // w20
  struct QuestBoardListViewItemDraw_StaticFields *v182; // x8
  __int64 v183; // x9
  __int64 v184; // x10
  __int64 v185; // x11
  Il2CppObject *v186; // x23
  int32_t ClearNum; // w23
  UISprite_o *challengeStrSpr; // x24
  UILabel_o *mChallengeLb; // x24
  UnityEngine_GameObject_o *mPhaseObj; // x23
  UnityEngine_GameObject_o *v191; // x21
  UnityEngine_GameObject_o *v192; // x20
  const MethodInfo *v193; // x4
  int32_t v194; // w28
  MapControl_PhaseInfo_o *CurrentPhaseInfo; // x0
  int32_t ReferToQuestPhase; // w0
  int32_t v197; // w23
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v199; // x24
  int32_t v200; // w23
  int32_t *p_questPhase; // x8
  int32_t v202; // w0
  signed int v203; // w25
  uint32_t cctor_finished; // w9
  struct QuestBoardListViewItemDraw_StaticFields *v205; // x8
  bool v206; // w26
  int32_t PHASE_NORMAL_MAX; // w22
  _BOOL4 v208; // w27
  __int64 v209; // x9
  signed int v210; // w20
  unsigned int v211; // w29
  int v212; // w22
  int v213; // w21
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v215; // x8
  UISprite_o *v216; // x28
  QuestBoardListViewItemDraw_o *v217; // x0
  const MethodInfo *v218; // x6
  System_String_o *PhaseArrowSpriteName; // x0
  QuestBoardListViewItemDraw_o *v220; // x0
  const MethodInfo *v221; // x3
  int32_t PhaseArrowIntervalSize; // w24
  UnityEngine_GameObject_o *v223; // x23
  int32_t v224; // w21
  QuestBoardListViewItemDraw_c *v225; // x0
  UISprite_o *mDamageRecordSp; // x23
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x24
  Il2CppObject *v228; // x23
  int64_t MaxTurnDamage; // x0
  UILabel_o *mDamageRecordLb; // x23
  __int64 v231; // x2
  __int64 v232; // x3
  __int64 v233; // x4
  Il2CppObject *v234; // x0
  UnityEngine_GameObject_o *v235; // x23
  QuestBoardListViewItemDraw_c *v236; // x0
  UISprite_o *mKnockdownRecordSp; // x23
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x24
  QuestKnockdownInfo_o *v239; // x23
  Il2CppObject *v240; // x24
  UILabel_o *mKnockdownRecordCountLb; // x24
  __int64 v242; // x2
  __int64 v243; // x3
  __int64 v244; // x4
  System_String_o *v245; // x25
  Il2CppObject *v246; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x24
  System_String_o *v248; // x25
  __int64 v249; // x2
  __int64 v250; // x3
  __int64 v251; // x4
  Il2CppObject *v252; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x26
  System_String_o *v254; // x27
  _QWORD *v255; // x24
  __int64 v256; // x8
  __int64 v257; // x0
  __int64 v258; // x0
  UILabel_o *mKnockdownRecordDamageNameLb; // x26
  System_String_o *v260; // x0
  _QWORD *v261; // x24
  System_String_o *v262; // x27
  __int64 v263; // x8
  __int64 v264; // x0
  __int64 v265; // x0
  UnityEngine_GameObject_o *v266; // x0
  QuestBoardListViewItemDraw_c *v267; // x8
  UnityEngine_GameObject_o *v268; // x23
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_GameObject_o *v270; // x0
  float LocalPositionX; // s0
  QuestBoardListViewItemDraw_c *v272; // x0
  float v273; // s8
  int32_t id; // w23
  TerminalSceneComponent_c *v275; // x0
  __int64 v276; // x23
  UILabel_o *mOptionRestrinctionLb; // x23
  UnityEngine_GameObject_o *v278; // x23
  UnityEngine_Behaviour_o *v279; // x23
  const MethodInfo *v280; // x3
  struct QuestPhaseDetailEntity_BoardList_o *boardMessage; // x8
  System_Collections_Generic_IEnumerable_TSource__o *list; // x0
  __int64 v283; // x8
  QuestPhaseDetailEntity_BoardInfo_array *v284; // x26
  __int64 v285; // x8
  QuestPhaseDetailEntity_BoardInfo_o *v286; // x8
  bool v287; // w23
  bool v288; // w26
  char v289; // w27
  int32_t v290; // w2
  int32_t v291; // w3
  __int64 v292; // x8
  _QWORD *v293; // x9
  __int64 v294; // x10
  __int64 v295; // x8
  bool v296; // w24
  QuestBoardListViewItemDraw_c *v297; // x0
  UISprite_o *mOptionPreBattleSp; // x24
  System_String_o *PRE_BATTLE_ORGANIZATION; // x25
  int32_t v300; // w2
  int32_t v301; // w3
  __int64 v302; // x8
  _QWORD *v303; // x9
  __int64 v304; // x10
  __int64 v305; // x8
  bool v306; // w24
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  char v308; // w23
  UnityEngine_GameObject_o *v309; // x0
  QuestBoardListViewItemDraw_c *v310; // x8
  UnityEngine_GameObject_o *v311; // x24
  struct QuestBoardListViewItemDraw_StaticFields *v312; // x8
  const MethodInfo *v313; // x2
  struct UILabel_o *v314; // x23
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v316; // x2
  struct UILabel_o *v317; // x8
  QuestBoardListViewItemDraw_c *v318; // x0
  QuestBoardListViewItemDraw_c *v319; // x0
  int32_t mSpacingX; // w20
  QuestPhaseEntity_o *v321; // x0
  QuestPhaseEntity_o *v322; // x23
  struct System_Int32_array *classIds; // x8
  int v324; // w8
  bool v325; // w24
  struct ServantClassIconComponent_array *mClassIcons; // x8
  int max_length; // w9
  int v328; // w20
  struct System_Int32_array *v329; // x21
  il2cpp_array_size_t v330; // w9
  __int64 v331; // x22
  Il2CppClass **v332; // x8
  UnityEngine_Component_o *v333; // x23
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v337; // x22
  QuestBoardListViewItemDraw___c_c *v338; // x0
  System_Func_object__int__o *_9__315_1; // x23
  Il2CppObject *v340; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v341; // x0
  int32_t v342; // w2
  int32_t v343; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v344; // x0
  System_Int32_array *v345; // x22
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v348; // w21
  QuestBoardListViewItemDraw_c *v349; // x0
  int32_t *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  UISprite_o *v351; // x24
  __int64 v352; // x8
  QuestBoardListViewItemDraw_o *v353; // x0
  QuestBoardListViewItem_o *v354; // x1
  const MethodInfo *v355; // x2
  const MethodInfo *v356; // [xsp+8h] [xbp-138h]
  int64_t checkTime; // [xsp+28h] [xbp-118h]
  bool v358; // [xsp+30h] [xbp-110h]
  int key; // [xsp+34h] [xbp-10Ch]
  bool v360; // [xsp+38h] [xbp-108h]
  struct MapControl_QuestInfo_o *v361; // [xsp+38h] [xbp-108h]
  QuestEntity_o *v362; // [xsp+40h] [xbp-100h]
  QuestEntity_o *v363; // [xsp+40h] [xbp-100h]
  _BOOL4 v364; // [xsp+48h] [xbp-F8h]
  int32_t v365; // [xsp+4Ch] [xbp-F4h]
  DataManager_o *v366; // [xsp+50h] [xbp-F0h]
  __int64 v367; // [xsp+58h] [xbp-E8h]
  int32_t questPhase; // [xsp+60h] [xbp-E0h]
  _BOOL4 v369; // [xsp+64h] [xbp-DCh]
  int64_t totalDamage; // [xsp+68h] [xbp-D8h] BYREF
  int64_t knockdownNum; // [xsp+70h] [xbp-D0h] BYREF
  int32_t warId; // [xsp+7Ch] [xbp-C4h] BYREF
  QuestPhaseDetailEntity_o *v373; // [xsp+80h] [xbp-C0h] BYREF
  int32_t v374; // [xsp+88h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+8Ch] [xbp-B4h] BYREF
  int32_t fixedVal[2]; // [xsp+90h] [xbp-B0h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+98h] [xbp-A8h] BYREF
  bool isTripleItemConsume; // [xsp+A4h] [xbp-9Ch] BYREF
  bool isDoubleItemConsumeQp; // [xsp+A8h] [xbp-98h] BYREF
  bool isDoubleItemConsume; // [xsp+ACh] [xbp-94h] BYREF
  UserQuestEntity_o *entity; // [xsp+B8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v382; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v383; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v384; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v385; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v386; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v387; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v388; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A58095 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Array_Empty_object___);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_QuestBoardInformationText___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&QuestInformationComponent_TypeInfo);
    sub_1B885B0(&QuestKnockdownInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__315_1__);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass315_0__SetItemOfQuest_b__0__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass315_0_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1B885B0(&StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1B885B0(&StringLiteral_13342/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/);
    sub_1B885B0(&StringLiteral_22715/*"questboard_challenge"*/);
    sub_1B885B0(&StringLiteral_10832/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/);
    sub_1B885B0(&StringLiteral_13346/*"TIME_REST_QUEST_BOARD_QUEST_{0}"*/);
    sub_1B885B0(&StringLiteral_10829/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    sub_1B885B0(&StringLiteral_10831/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/);
    sub_1B885B0(&StringLiteral_13343/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR_{0}"*/);
    sub_1B885B0(&StringLiteral_10830/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/);
    sub_1B885B0(&StringLiteral_13344/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_22716/*"questboard_crushing"*/);
    sub_1B885B0(&StringLiteral_13345/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR_{0}"*/);
    byte_4A58095 = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  v374 = 0;
  v373 = 0LL;
  v5 = sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass315_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass315_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass315_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_523;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v366 = (DataManager_o *)Instance;
  if ( !questBoardItem )
    goto LABEL_523;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_523;
  Instance = (__int64)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_523;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  Instance = (__int64)v366;
  if ( !v366 )
    goto LABEL_523;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v366,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_523;
  if ( !Instance )
    goto LABEL_523;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  key = Instance;
  if ( !mListViewObject )
    goto LABEL_523;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_523;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_588;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *(_QWORD *)(Instance + 584);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  if ( dispType == 2 )
    v17 = 0.5;
  else
    v17 = 1.0;
  *(float *)(v5 + 24) = v17;
  *(float *)(v5 + 28) = v17;
  *(float *)(v5 + 32) = v17;
  *(_DWORD *)(v5 + 36) = 1065353216;
  v18 = HasFlag;
  MasterData_object = DataManager__GetMasterData_object_(
                        v366,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_523;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    Instance,
    PhaseDetailedEntity->fields.id,
    0LL);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_523;
  v20 = QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x10000000000000LL, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_523;
  v21 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, quest_info_k__BackingField->fields.questId, 0, 0LL);
  v22 = quest_info_k__BackingField->fields.questPhase;
  v23 = !v20;
  v369 = v23;
  if ( !v21 )
    v23 = 0;
  v364 = v23;
  PhaseMax = (QuestBoardListViewItemDraw_o *)MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v26 = v22 + 1 < (int)PhaseMax ? v22 + 1 : (int)PhaseMax;
  questPhase = v26;
  Instance = QuestBoardListViewItemDraw__IsInterruptedQuest(
               PhaseMax,
               quest_info_k__BackingField->fields.questId,
               v26,
               v25);
  if ( !this->fields.mLabelObj )
    goto LABEL_523;
  v27 = Instance;
  UnityEngine_GameObject__SetActive(this->fields.mLabelObj, 1, 0LL);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  v362 = (QuestEntity_o *)questBoardItem;
  if ( OverwriteBannerId_k__BackingField >= 1 )
  {
    v29 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v29 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    QUEST_BOARD_SPNAME_PREFIX = v29->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v374 = OverwriteBannerId_k__BackingField;
    v31 = System_Int32__ToString((int32_t)&v374, 0LL);
    v32 = QUEST_BOARD_SPNAME_PREFIX;
LABEL_54:
    v35 = System_String__Concat_61707032(v32, v31, 0LL);
    mcBaseP = this->fields.mcBaseP;
    v37 = v35;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mcBaseP, v37, 0LL);
    if ( !mcBaseP )
      goto LABEL_523;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, Instance & 1, 0LL);
    goto LABEL_58;
  }
  if ( PhaseDetailedEntity->fields.bannerId >= 1 )
  {
    v33 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v33 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v34 = v33->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v31 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
    v32 = v34;
    goto LABEL_54;
  }
  v159 = v18;
  v160 = this->fields.mcBaseP;
  if ( QuestType <= 5 && ((1 << QuestType) & 0x26) != 0 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v161 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1056LL);
    if ( !v161 )
      goto LABEL_523;
    if ( QuestType >= *(_DWORD *)(v161 + 24) )
      goto LABEL_587;
    v162 = *(System_String_o **)(v161 + 8LL * QuestType + 32);
    v163 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
    v164 = System_String__Concat_61707032(v162, v163, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v160, v164, 0LL);
    v18 = v159;
  }
  else
  {
    if ( !v160 )
      goto LABEL_523;
    UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0LL);
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v351 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v18 = v159;
    v352 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1056LL);
    if ( !v352 )
      goto LABEL_523;
    if ( QuestType >= *(_DWORD *)(v352 + 24) )
      goto LABEL_587;
    if ( !v351 )
      goto LABEL_523;
    UISprite__set_spriteName(v351, *(System_String_o **)(v352 + 8LL * (int)QuestType + 32), 0LL);
  }
LABEL_58:
  Instance = (__int64)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_523;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_523;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 1
    && MapControl_QuestInfo__IsDisaplayable(quest_info_k__BackingField, 0LL) )
  {
    Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
    if ( !Instance )
      goto LABEL_523;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x400000000000LL, 0LL) )
    {
      questId = quest_info_k__BackingField->fields.questId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_37596684(questId, -1, 1, 0LL) )
        goto LABEL_70;
    }
  }
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
LABEL_70:
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_523;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_523;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_523;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v41 = QuestBoardListViewItemDraw_TypeInfo;
    v42 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v41 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v42, v41->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_523;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_523;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_523;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 128) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 140) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 || v364 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v44 = 1;
    }
    else
    {
      if ( !v364 )
        goto LABEL_86;
      v44 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v44, 1, v39);
  }
LABEL_86:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v39);
  QuestBoardListViewItemDraw__SetPickupIcon(this, (const MethodInfo *)mCostConsumeBattleWinSp);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v46 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v46 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      v46->static_fields->NEW_POS_QUEST_NEXT,
      v46->static_fields->NEW_W_DEFAULT,
      v46->static_fields->NEW_H_DEFAULT,
      v45);
    v48 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v48 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v48->static_fields;
LABEL_101:
    v53 = (v27 & 1) == 0;
    v54 = 228LL;
    v55 = 252LL;
    v56 = 224LL;
    v57 = 248LL;
    v58 = 220LL;
    v59 = 244LL;
    goto LABEL_102;
  }
  v50 = QuestBoardListViewItemDraw_TypeInfo;
  pickupPriority = quest_info_k__BackingField->fields.pickupPriority;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v50 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v50->static_fields->NEW_POS_QUEST,
    v50->static_fields->NEW_W_DEFAULT,
    v50->static_fields->NEW_H_DEFAULT,
    v45);
  v52 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v52 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v52->static_fields;
  if ( pickupPriority >= 1 )
    goto LABEL_101;
  v53 = (v27 & 1) == 0;
  v54 = 216LL;
  v55 = 240LL;
  v56 = 212LL;
  v57 = 236LL;
  v58 = 208LL;
  v59 = 232LL;
LABEL_102:
  if ( !v53 )
    v54 = v55;
  if ( v53 )
    v60 = v56;
  else
    v60 = v57;
  v61 = (float *)((char *)&static_fields->POS_Y_ITVL_AREA + v54);
  v62 = (float *)((char *)&static_fields->POS_Y_ITVL_AREA + v60);
  if ( v53 )
    v63 = v58;
  else
    v63 = v59;
  v382.fields.z = *v61;
  v382.fields.y = *v62;
  LODWORD(v382.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v63);
  QuestBoardListViewItemDraw__SetPrevSprite(this, PhaseDetailedEntity, v382, v27 & 1, v47);
  if ( dispType != 2
    && quest_info_k__BackingField->fields.isNew
    && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v64);
  }
  Instance = (__int64)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v65);
  if ( !Instance )
    goto LABEL_523;
  v66 = (UnityEngine_GameObject_o *)Instance;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v67 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v67 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v66, v67->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v18, 0LL);
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_523;
  v360 = v18;
  v68 = !v18;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  v69,
                  PhaseDetailedEntity,
                  questPhase,
                  v68,
                  dispType == 2,
                  v70);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v5 + 24), v72);
  v74 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v74 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mMatrixFrame = v74->fields.mTitleLevelStrSp[1].fields.mMatrixFrame;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v74, QuestType, v73);
  v79 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          mMatrixFrame,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v5 + 24),
          v78);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v79 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, QuestType, v80);
    if ( !mTitleNameLb )
      goto LABEL_523;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    goto LABEL_145;
  }
  Instance = (__int64)QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_523;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( QuestType != 1 || !QuestBoardListViewItemDraw__IsMainWar(v83, quest_info_k__BackingField->fields.warId, v84) )
  {
    Instance = (__int64)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_523;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_523;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_523;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v87, PhaseDetailedEntity, QuestType, v88);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_523;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_523;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_523;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_523;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_523;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_523;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v90 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v90,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass315_0__SetItemOfQuest_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v90, v91);
    }
LABEL_145:
    if ( dispType == 2 )
      goto LABEL_146;
    goto LABEL_147;
  }
  if ( dispType == 2 )
  {
LABEL_146:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v82);
    goto LABEL_149;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v85);
LABEL_147:
  Instance = (__int64)this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_523;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_149:
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v92 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v92 )
    goto LABEL_523;
  v358 = v68;
  UILabel__SetCondensedScale(v92, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (__int64)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_523;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v93,
                           &phasePresentData,
                           PhaseDetailedEntity,
                           quest_info_k__BackingField->fields.questPhase,
                           v94);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    phasePresentData,
    dispType == 2,
    *(UnityEngine_Color_o *)(v5 + 24),
    v96);
  v97 = quest_info_k__BackingField->fields.questId;
  v98 = phasePresentData;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v100 = *(float *)(v5 + 24);
  v101 = *(float *)(v5 + 28);
  v102 = *(float *)(v5 + 32);
  v103 = *(float *)(v5 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v385.fields.r = v100;
  v385.fields.g = v101;
  v385.fields.b = v102;
  v385.fields.a = v103;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    v97,
    PhasePresentGiftData,
    v98,
    afterClear,
    v385,
    IsRepeatReward,
    v105);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v5 + 24),
    v106);
  if ( entity && UserQuestEntity__HasStatus(entity, 8, 0LL) )
  {
    Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_523;
    Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_523;
    v107 = !WarEntity__IsShop((WarEntity_o *)Instance, 0LL);
    v108 = 1;
  }
  else
  {
    v108 = 0;
    v107 = 0;
  }
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v107, 0LL);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v109);
  isNotItemConsume = 0;
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        questPhase,
                        !v364,
                        &fixedVal[1],
                        fixedVal,
                        &isNotItemConsume,
                        v111);
  if ( !mInfoTextList )
    goto LABEL_523;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  v365 = dispType;
  v367 = v5;
  if ( v108 | UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_523;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_201;
    if ( !entity )
      goto LABEL_523;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v113 = *p_expireAt;
  if ( *p_expireAt >= 1 && !QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL) )
  {
    Instance = sub_1B88658(string___TypeInfo, 2LL);
    WarInfo_k__BackingField = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !WarInfo_k__BackingField )
      goto LABEL_523;
    v118 = Instance;
    LODWORD(knockdownNum) = WarInfo_k__BackingField->fields.warId;
    v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &knockdownNum, v114, v115, v116);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_13346/*"TIME_REST_QUEST_BOARD_QUEST_{0}"*/, v119, 0LL);
    if ( !v118 )
      goto LABEL_523;
    if ( !*(_DWORD *)(v118 + 24) )
      goto LABEL_587;
    *(_QWORD *)(v118 + 32) = Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v118 + 32), Instance, v120, v121);
    if ( *(_DWORD *)(v118 + 24) <= 1u )
      goto LABEL_587;
    v124 = StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/;
    *(_QWORD *)(v118 + 40) = StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v118 + 40), v124, v122, v123);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IfExists = LocalizationManager__GetIfExists((System_String_array *)v118, 0LL);
    Instance = sub_1B88658(string___TypeInfo, 2LL);
    v129 = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !v129 )
      goto LABEL_523;
    v130 = Instance;
    LODWORD(totalDamage) = v129->fields.warId;
    v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalDamage, v126, v127, v128);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_13345/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR_{0}"*/, v131, 0LL);
    if ( !v130 )
      goto LABEL_523;
    if ( !*(_DWORD *)(v130 + 24) )
      goto LABEL_587;
    *(_QWORD *)(v130 + 32) = Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v130 + 32), Instance, v132, v133);
    if ( *(_DWORD *)(v130 + 24) <= 1u )
      goto LABEL_587;
    v136 = StringLiteral_13344/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/;
    *(_QWORD *)(v130 + 40) = StringLiteral_13344/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v130 + 40), v136, v134, v135);
    v137 = LocalizationManager__GetIfExists((System_String_array *)v130, 0LL);
    Instance = sub_1B88658(string___TypeInfo, 2LL);
    v141 = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !v141 )
      goto LABEL_523;
    v142 = Instance;
    warId = v141->fields.warId;
    v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v138, v139, v140);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_13343/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR_{0}"*/, v143, 0LL);
    if ( !v142 )
      goto LABEL_523;
    if ( !*(_DWORD *)(v142 + 24) )
      goto LABEL_587;
    *(_QWORD *)(v142 + 32) = Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v142 + 32), Instance, v144, v145);
    if ( *(_DWORD *)(v142 + 24) <= 1u )
      goto LABEL_587;
    v148 = StringLiteral_13342/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/;
    *(_QWORD *)(v142 + 40) = StringLiteral_13342/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v142 + 40), v148, v146, v147);
    v149 = LocalizationManager__GetIfExists((System_String_array *)v142, 0LL);
    v150 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    v151 = v149;
    v152 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor_33880804(v152, IfExists, v113, checkTime, v137, v151, 0LL);
    if ( !v150 )
      goto LABEL_523;
    items = v150->fields._items;
    v5 = v367;
    v156 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++v150->fields._version;
    if ( !items )
      goto LABEL_523;
    size = v150->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v150,
        (Il2CppObject *)v152,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
    }
    else
    {
      v158 = &items->obj.klass + size;
      v150->fields._size = size + 1;
      v158[4] = (Il2CppClass *)v152;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v158 + 4), (int32_t)v152, v153, v154);
    }
  }
LABEL_201:
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Instance = System_Linq_Enumerable__Any_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mInfoTextList,
               (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_QuestBoardInformationText___);
  v166 = Instance;
  if ( (Instance & 1) == 0 )
    goto LABEL_212;
  v167 = this->fields.mListViewObject;
  if ( !v167 )
    goto LABEL_523;
  v168 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v168 )
    goto LABEL_523;
  Instance = (__int64)v167->fields.manager;
  if ( !Instance )
    goto LABEL_523;
  v169 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v169
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v169 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_588:
    sub_1B88ACC(Instance);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v353, v354, v355);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                   (QuestBoardListViewManager_o *)Instance,
                   v168->fields._size,
                   0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v168,
           AlphaAnimCnt,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Item )
    goto LABEL_523;
  QuestBoardInformationText__SetTime_33883500(
    (QuestBoardInformationText_o *)Item,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    Instance,
    0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_523;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v172 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v173 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v172;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v173;
LABEL_212:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v166 & 1, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v166 & 1, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    dispType == 2,
    fixedVal[1],
    fixedVal[0],
    isNotItemConsume,
    *(UnityEngine_Color_o *)(v5 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    v356);
  flag = v362->fields.flag;
  if ( flag >= 1 )
  {
    mCostApSp = this->fields.mCostApSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(flag, v174);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
    if ( !mCostApSp )
      goto LABEL_523;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, Instance & 1, 0LL);
  }
  mChallengeObj = this->fields.mChallengeObj;
  if ( v360 )
    v179 = 0LL;
  else
    v179 = this->fields.mChallengeObj;
  if ( v360 || (Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 0x4000LL, 0LL), (Instance & 1) != 0) )
  {
    mCostConsumeBattleWinSp = 0LL;
    if ( !mChallengeObj )
      goto LABEL_523;
  }
  else
  {
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 4LL, 0LL);
    mCostConsumeBattleWinSp = (Instance & 1) != 0 && PhaseDetailedEntity->fields.afterClear != 1;
    mChallengeObj = v179;
    if ( !v179 )
      goto LABEL_523;
  }
  UnityEngine_GameObject__SetActive(mChallengeObj, mCostConsumeBattleWinSp, 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_523;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v180 = QuestBoardListViewItemDraw_TypeInfo;
    v181 = isDoubleItemConsume;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v180 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v182 = v180->static_fields;
    v183 = 532LL;
    if ( !v181 )
      v183 = 520LL;
    if ( v181 )
      v184 = 528LL;
    else
      v184 = 516LL;
    if ( v181 )
      v185 = 524LL;
    else
      v185 = 512LL;
    LODWORD(v383.fields.x) = *(int32_t *)((char *)&v182->POS_Y_ITVL_AREA + v185);
    LODWORD(v383.fields.y) = *(int32_t *)((char *)&v182->POS_Y_ITVL_AREA + v184);
    LODWORD(v383.fields.z) = *(int32_t *)((char *)&v182->POS_Y_ITVL_AREA + v183);
    GameObjectExtensions__SetLocalPosition(this->fields.mChallengeObj, v383, 0LL);
    Instance = (__int64)DataManager__GetMasterData_object_(
                          v366,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_523;
    v186 = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             key,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 4LL, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_591;
    if ( !v186 )
      goto LABEL_523;
    if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)v186, 0LL) )
    {
      if ( entity )
        ClearNum = UserQuestEntity__getClearNum(entity, 0LL);
      else
        ClearNum = 0;
      challengeStrSpr = this->fields.challengeStrSpr;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_22716/*"questboard_crushing"*/, 0LL);
    }
    else
    {
LABEL_591:
      if ( entity )
        ClearNum = entity->fields.challengeNum;
      else
        ClearNum = 0;
      Instance = (__int64)this->fields.challengeStrSpr;
      if ( !Instance )
        goto LABEL_523;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22715/*"questboard_challenge"*/, 0LL);
    }
    mChallengeLb = this->fields.mChallengeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__GetNumberFormat(ClearNum, 0LL);
    if ( !mChallengeLb
      || (UILabel__set_text(mChallengeLb, (System_String_o *)Instance, 0LL),
          (Instance = (__int64)this->fields.challengeStrSpr) == 0) )
    {
LABEL_523:
      sub_1B8880C(Instance, mCostConsumeBattleWinSp);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  Instance = (__int64)this->fields.mChallengeLb;
  if ( !Instance )
    goto LABEL_523;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_523;
  mPhaseObj = this->fields.mPhaseObj;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
    v191 = 0LL;
  else
    v191 = mPhaseObj;
  if ( (Instance & 1) != 0 )
    goto LABEL_278;
  Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 0x4000LL, 0LL);
  v192 = (Instance & 1) != 0 ? 0LL : v191;
  if ( (Instance & 1) != 0 )
    goto LABEL_278;
  Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 0x10000LL, 0LL);
  if ( (Instance & 1) != 0 )
    mPhaseObj = 0LL;
  else
    mPhaseObj = v192;
  if ( (Instance & 1) == 0 )
  {
    if ( v365 == 2 )
    {
      Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 512LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
LABEL_278:
        mCostConsumeBattleWinSp = 0LL;
        goto LABEL_279;
      }
      v192 = mPhaseObj;
    }
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 0x4000000LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      mCostConsumeBattleWinSp = 0LL;
    }
    else
    {
      Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 0x2000000000LL, 0LL);
      mCostConsumeBattleWinSp = (Instance & 1) == 0 && v369;
    }
    mPhaseObj = v192;
    goto LABEL_279;
  }
  mCostConsumeBattleWinSp = 0LL;
  mPhaseObj = v191;
LABEL_279:
  v361 = quest_info_k__BackingField;
  if ( !mPhaseObj )
    goto LABEL_523;
  v363 = PhaseDetailedEntity;
  UnityEngine_GameObject__SetActive(mPhaseObj, mCostConsumeBattleWinSp, 0LL);
  Instance = (__int64)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_523;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    QuestBoardListViewItemDraw__InitPhase(this, isDoubleItemConsume, isDoubleItemConsumeQp, isTripleItemConsume, v193);
    v194 = PhaseDetailedEntity->fields.afterClear;
    CurrentPhaseInfo = MapControl_QuestInfo__GetCurrentPhaseInfo(quest_info_k__BackingField, 0LL);
    if ( !CurrentPhaseInfo )
      goto LABEL_287;
    ReferToQuestPhase = MapControl_PhaseInfo__GetReferToQuestPhase(CurrentPhaseInfo, 0LL);
    if ( ReferToQuestPhase < 1 )
      goto LABEL_287;
    v197 = ReferToQuestPhase;
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_523;
    QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v197, 0LL);
    if ( QuestInfo )
    {
      v199 = QuestInfo;
      v200 = MapControl_QuestInfo__GetPhaseMax(QuestInfo, 0LL);
      p_questPhase = &v199->fields.questPhase;
    }
    else
    {
LABEL_287:
      v202 = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
      p_questPhase = &quest_info_k__BackingField->fields.questPhase;
      v200 = v202;
    }
    v203 = *p_questPhase;
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    }
    v205 = *(struct QuestBoardListViewItemDraw_StaticFields **)(Instance + 184);
    v206 = v194 == 2 && v365 != 2;
    PHASE_NORMAL_MAX = v205->PHASE_NORMAL_MAX;
    v208 = v200 > PHASE_NORMAL_MAX;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      v205 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v205->PHASE_NORMAL_MAX;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        v205 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
    }
    v209 = 496LL;
    if ( v200 > PHASE_NORMAL_MAX )
      v209 = 504LL;
    v210 = 0;
    v211 = v194 - 3;
    v212 = v200 - 1;
    v213 = -*(int32_t *)((char *)&v205->POS_Y_ITVL_AREA + v209);
    while ( 1 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v210 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        break;
      mPhaseSp = this->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_523;
      if ( v210 >= mPhaseSp->max_length )
        goto LABEL_587;
      v215 = &mPhaseSp->obj.klass + v210;
      v216 = (UISprite_o *)v215[4];
      if ( !v216 )
        goto LABEL_523;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v215[4], 0LL);
      if ( !Instance )
        goto LABEL_523;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v210 < v200, 0LL);
      if ( v210 < v200 )
      {
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 v217,
                                 v208,
                                 (v210 < v203) & (unsigned __int8)v369,
                                 v212 == v210,
                                 v206,
                                 (v212 == v210) & (unsigned __int8)(v211 < 2),
                                 v218);
        UISprite__set_spriteName(v216, PhaseArrowSpriteName, 0LL);
        v386.fields.a = 1.0;
        v386.fields.r = v17;
        v386.fields.g = v17;
        v386.fields.b = v17;
        UIWidget__set_color((UIWidget_o *)v216, v386, 0LL);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v220,
                                   v208,
                                   v212 == v210 && v211 < 2,
                                   v221);
        Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v216, 0LL);
        if ( !Instance )
          goto LABEL_523;
        v213 += PhaseArrowIntervalSize;
        v384.fields.x = (float)v213;
        v384.fields.y = 0.0;
        v384.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v384, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v216->klass->vtable._33_MakePixelPerfect.method)(
          v216,
          v216->klass->vtable._34_get_minWidth.methodPtr);
      }
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      ++v210;
    }
  }
  Instance = (__int64)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_523;
  v223 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v363, 0x4000000LL, 0LL);
  if ( !v223 )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive(v223, Instance & 1, 0LL);
  Instance = (__int64)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v224 = v365;
  if ( !Instance )
    goto LABEL_523;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v225 = QuestBoardListViewItemDraw_TypeInfo;
    mDamageRecordSp = this->fields.mDamageRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v225 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v225->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mDamageRecordSp, QUEST_BOARD_DAMAGE_RECODE_NAME, 0LL);
    v228 = DataManager__GetMasterData_object_(
             v366,
             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v228 )
      goto LABEL_523;
    MaxTurnDamage = UserQuestRecordMaster__GetMaxTurnDamage(
                      (UserQuestRecordMaster_o *)v228,
                      Instance,
                      v363->fields.id,
                      0LL);
    mDamageRecordLb = this->fields.mDamageRecordLb;
    knockdownNum = MaxTurnDamage;
    v234 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum, v231, v232, v233);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v234, 0LL);
    if ( !mDamageRecordLb )
      goto LABEL_523;
    UILabel__set_text(mDamageRecordLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.mDamageRecordSp;
    if ( !Instance )
      goto LABEL_523;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
    Instance = (__int64)this->fields.mDamageRecordLb;
    if ( !Instance )
      goto LABEL_523;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
  }
  Instance = (__int64)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_523;
  v235 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v363, 0x2000000000LL, 0LL);
  if ( !v235 )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive(v235, Instance & 1, 0LL);
  Instance = (__int64)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v236 = QuestBoardListViewItemDraw_TypeInfo;
    mKnockdownRecordSp = this->fields.mKnockdownRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v236 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v236->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mKnockdownRecordSp, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0LL);
    v239 = (QuestKnockdownInfo_o *)sub_1B887FC(QuestKnockdownInfo_TypeInfo);
    QuestKnockdownInfo___ctor(v239, 0LL);
    v240 = DataManager__GetMasterData_object_(
             v366,
             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v240 )
      goto LABEL_523;
    UserQuestRecordMaster__GetKnockdownRecordinfo((UserQuestRecordMaster_o *)v240, Instance, v363->fields.id, v239, 0LL);
    mKnockdownRecordCountLb = this->fields.mKnockdownRecordCountLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10829/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, 0LL);
    if ( !v239 )
      goto LABEL_523;
    v245 = (System_String_o *)Instance;
    knockdownNum = v239->fields.knockdownNum;
    v246 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum, v242, v243, v244);
    Instance = (__int64)System_String__Format(v245, v246, 0LL);
    if ( !mKnockdownRecordCountLb )
      goto LABEL_523;
    UILabel__set_text(mKnockdownRecordCountLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageLb = this->fields.mKnockdownRecordDamageLb;
    v248 = LocalizationManager__Get((System_String_o *)StringLiteral_10830/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, 0LL);
    totalDamage = v239->fields.totalDamage;
    v252 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &totalDamage, v249, v250, v251);
    Instance = (__int64)System_String__Format(v248, v252, 0LL);
    if ( !mKnockdownRecordDamageLb )
      goto LABEL_523;
    UILabel__set_text(mKnockdownRecordDamageLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordPlusLb = this->fields.mKnockdownRecordPlusLb;
    v254 = LocalizationManager__Get((System_String_o *)StringLiteral_10832/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, 0LL);
    v255 = Method_System_Array_Empty_object___;
    v256 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v256 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_object___);
      v256 = v255[7];
    }
    v257 = *(_QWORD *)(v256 + 16);
    if ( (*(_BYTE *)(v257 + 309) & 1) == 0 )
      v257 = sub_1BDA48C(v257);
    if ( !*(_DWORD *)(v257 + 224) )
      j_il2cpp_runtime_class_init_0(v257);
    v258 = *(_QWORD *)(v255[7] + 16LL);
    if ( (*(_BYTE *)(v258 + 309) & 1) == 0 )
      v258 = sub_1BDA48C(v258);
    Instance = (__int64)System_String__Format_61721540(v254, **(System_Object_array ***)(v258 + 184), 0LL);
    if ( !mKnockdownRecordPlusLb )
      goto LABEL_523;
    UILabel__set_text(mKnockdownRecordPlusLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageNameLb = this->fields.mKnockdownRecordDamageNameLb;
    v260 = LocalizationManager__Get((System_String_o *)StringLiteral_10831/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, 0LL);
    v261 = Method_System_Array_Empty_object___;
    v262 = v260;
    v263 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v263 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_object___);
      v263 = v261[7];
    }
    v264 = *(_QWORD *)(v263 + 16);
    if ( (*(_BYTE *)(v264 + 309) & 1) == 0 )
      v264 = sub_1BDA48C(v264);
    if ( !*(_DWORD *)(v264 + 224) )
      j_il2cpp_runtime_class_init_0(v264);
    v265 = *(_QWORD *)(v261[7] + 16LL);
    if ( (*(_BYTE *)(v265 + 309) & 1) == 0 )
      v265 = sub_1BDA48C(v265);
    Instance = (__int64)System_String__Format_61721540(v262, **(System_Object_array ***)(v265 + 184), 0LL);
    if ( !mKnockdownRecordDamageNameLb )
      goto LABEL_523;
    UILabel__set_text(mKnockdownRecordDamageNameLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_523;
    UILabel__SetCondensedScale(
      (UILabel_o *)Instance,
      QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH,
      0LL);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_523;
    if ( v239->fields.totalDamage <= 0 )
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0LL);
      Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_523;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !this->fields.mKnockdownRecordPlusLb )
        goto LABEL_523;
      v268 = (UnityEngine_GameObject_o *)Instance;
      v270 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.mKnockdownRecordPlusLb, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(v270, 0LL);
      v272 = QuestBoardListViewItemDraw_TypeInfo;
      v273 = LocalPositionX;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v272 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = v273 + (float)v272->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
    }
    else
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0LL);
      Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_523;
      v266 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v267 = QuestBoardListViewItemDraw_TypeInfo;
      v268 = v266;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v267 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v267->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
    }
    GameObjectExtensions__SetLocalPositionX(v268, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordSp;
    if ( !Instance )
      goto LABEL_523;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_523;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordDamageNameLb;
    if ( !Instance )
      goto LABEL_523;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordPlusLb;
    if ( !Instance )
      goto LABEL_523;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordCountLb;
    if ( !Instance )
      goto LABEL_523;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
  }
  id = v363->fields.id;
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  if ( QuestInformationComponent__IsDisplayQuestInformation(id, 0LL) )
  {
    Instance = (__int64)this->fields.mQuestInfoBtn;
    if ( !Instance )
      goto LABEL_523;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    v275 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v275 = TerminalSceneComponent_TypeInfo;
    }
    v224 = v365;
    Instance = (__int64)v275->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_523;
    if ( TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL) == v363->fields.id )
    {
      Instance = (__int64)this->fields.mQuestInfoShowing;
      if ( !Instance )
        goto LABEL_523;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    }
    Instance = (__int64)this->fields.mQuestInfoBtn;
    if ( !Instance )
      goto LABEL_523;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    v276 = Instance;
    if ( v365 == 2 )
    {
      Instance = QuestEntity__HasFlag(v363, 0x400000000000000LL, 0LL);
      mCostConsumeBattleWinSp = (unsigned int)Instance & v364;
    }
    else
    {
      mCostConsumeBattleWinSp = 1LL;
    }
    if ( !v276 )
      goto LABEL_523;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v276 + 392LL))(
      v276,
      mCostConsumeBattleWinSp,
      *(_QWORD *)(*(_QWORD *)v276 + 400LL));
  }
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mOptionRestrinctionLb )
    goto LABEL_523;
  UILabel__set_fontSize(
    mOptionRestrinctionLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE,
    0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_523;
  UILabel__set_overflowMethod((UILabel_o *)Instance, 2, 0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_523;
  v278 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v278, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !Instance )
    goto LABEL_523;
  v279 = (UnityEngine_Behaviour_o *)Instance;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v366,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_523;
  Instance = QuestPhaseDetailMaster__TryGetEntity(
               (QuestPhaseDetailMaster_o *)Instance,
               &v373,
               v361->fields.questId,
               questPhase,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_430;
  if ( !v373 )
    goto LABEL_523;
  if ( !v373->fields.boardMessage )
    goto LABEL_430;
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_523;
  UILabel__set_maxLineCount((UILabel_o *)Instance, 0, 0LL);
  if ( !v373 )
    goto LABEL_523;
  boardMessage = v373->fields.boardMessage;
  if ( !boardMessage )
    goto LABEL_523;
  list = (System_Collections_Generic_IEnumerable_TSource__o *)boardMessage->fields.list;
  if ( list
    && (Instance = (__int64)System_Linq_Enumerable__ToArray_object_(
                              list,
                              (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0
    && (v283 = *(_QWORD *)(Instance + 24), v284 = (QuestPhaseDetailEntity_BoardInfo_array *)Instance, v283) )
  {
    if ( (_DWORD)v283 == 1 )
    {
      v285 = *(_QWORD *)(Instance + 32);
      if ( !v285 )
        goto LABEL_523;
      Instance = *(_QWORD *)(v285 + 16);
      if ( !Instance )
        goto LABEL_523;
      Instance = QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                   (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)Instance,
                   this->fields.mOptionRestrinctionLb,
                   (float)this->fields.restrictionDefaultWidth,
                   0LL);
      if ( !v284->max_length )
        goto LABEL_587;
      v286 = v284->m_Items[0];
      if ( !v286 )
        goto LABEL_523;
      v287 = Instance;
      Instance = (__int64)v286->fields.image;
      if ( !Instance )
        goto LABEL_523;
      v288 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
               (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)Instance,
               this->fields.mOptionRestrinctionSp,
               0LL);
      v289 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v279, 1, 0LL);
      if ( QuestEntity__HasFlag(v363, 0x400000000000000LL, 0LL) )
      {
        v349 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v349 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v349->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &this->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v279,
        this->fields.mOptionRestrinctionLb,
        this->fields.mOptionRestrinctionSp,
        v284,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0LL);
      v289 = 1;
      v287 = 1;
      v288 = 1;
    }
  }
  else
  {
LABEL_430:
    v287 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
             this,
             v361->fields.questId,
             questPhase,
             v280);
    v289 = 0;
    v288 = 0;
  }
  if ( QuestEntity__HasFlag(v363, 0x40000000LL, 0LL) )
  {
    Instance = (__int64)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_523;
    mCostConsumeBattleWinSp = (__int64)this->fields.mCostConsumeBattleWinSp;
    v292 = *(_QWORD *)(Instance + 16);
    v293 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v292 )
      goto LABEL_523;
    v294 = *(int *)(Instance + 24);
    if ( (unsigned int)v294 >= *(_DWORD *)(v292 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)mCostConsumeBattleWinSp,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v293[4] + 192LL) + 112LL));
    }
    else
    {
      v295 = v292 + 8 * v294;
      *(_DWORD *)(Instance + 24) = v294 + 1;
      *(_QWORD *)(v295 + 32) = mCostConsumeBattleWinSp;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v295 + 32), mCostConsumeBattleWinSp, v290, v291);
    }
    v296 = 1;
  }
  else
  {
    v296 = 0;
  }
  Instance = (__int64)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v296, 0LL);
  Instance = (__int64)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_523;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
  if ( v373 && QuestPhaseDetailEntity__HasFlag(v373, 0x400000LL, 0LL) )
  {
    v297 = QuestBoardListViewItemDraw_TypeInfo;
    mOptionPreBattleSp = this->fields.mOptionPreBattleSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v297 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v297->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0LL);
    Instance = (__int64)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_523;
    mCostConsumeBattleWinSp = (__int64)this->fields.mOptionPreBattleSp;
    v302 = *(_QWORD *)(Instance + 16);
    v303 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v302 )
      goto LABEL_523;
    v304 = *(int *)(Instance + 24);
    if ( (unsigned int)v304 >= *(_DWORD *)(v302 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)mCostConsumeBattleWinSp,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v303[4] + 192LL) + 112LL));
    }
    else
    {
      v305 = v302 + 8 * v304;
      *(_DWORD *)(Instance + 24) = v304 + 1;
      *(_QWORD *)(v305 + 32) = mCostConsumeBattleWinSp;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v305 + 32), mCostConsumeBattleWinSp, v300, v301);
    }
    v306 = 1;
  }
  else
  {
    v306 = 0;
  }
  Instance = (__int64)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v306, 0LL);
  Instance = (__int64)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_523;
  LODWORD(v387.fields.g) = dword_BB29C8[v224 == 2];
  LODWORD(v387.fields.r) = dword_BB3928[v224 == 2];
  v387.fields.a = 1.0;
  v387.fields.b = v387.fields.g;
  UIWidget__set_color((UIWidget_o *)Instance, v387, 0LL);
  mMultiSecondBattleInformation = this->fields.mMultiSecondBattleInformation;
  if ( !mMultiSecondBattleInformation )
    goto LABEL_523;
  if ( mMultiSecondBattleInformation->fields._size >= 2 )
  {
    Instance = (__int64)this->fields.secondBattleInformation;
    if ( !Instance )
      goto LABEL_523;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.secondBattleInformation;
    if ( !Instance )
      goto LABEL_523;
    QuestBoardListViewMultiSecondBattleInformation__Init(
      (QuestBoardListViewMultiSecondBattleInformation_o *)Instance,
      this->fields.mMultiSecondBattleInformation,
      0LL);
  }
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v287 || v288, 0LL);
  Instance = QuestEntity__HasFlag(v363, 0x400000000000000LL, 0LL);
  if ( !this->fields.mOptionRestrinctionLb )
    goto LABEL_523;
  v308 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb,
                        0LL);
  if ( !Instance )
    goto LABEL_523;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_523;
  v309 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v310 = QuestBoardListViewItemDraw_TypeInfo;
  v311 = v309;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v310 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v312 = v310->static_fields;
  if ( (v308 & 1) == 0 )
  {
    GameObjectExtensions__SetLocalPosition(v311, v312->RESTRICTION_POS_DEFAULT, 0LL);
    v317 = this->fields.mOptionRestrinctionLb;
    if ( !v317 )
      goto LABEL_523;
    if ( v317->fields.mWidth <= this->fields.restrictionDefaultWidth )
    {
      v319 = QuestBoardListViewItemDraw_TypeInfo;
      mSpacingX = v317->fields.mSpacingX;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v319 = QuestBoardListViewItemDraw_TypeInfo;
      }
      mCostConsumeBattleWinSp = (unsigned int)v319->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == (_DWORD)mCostConsumeBattleWinSp )
        goto LABEL_490;
      if ( !v319->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v319);
        LODWORD(mCostConsumeBattleWinSp) = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v318 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v318 = QuestBoardListViewItemDraw_TypeInfo;
      }
      LODWORD(mCostConsumeBattleWinSp) = v318->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(this, mCostConsumeBattleWinSp, v316);
LABEL_490:
    if ( (v289 & 1) != 0 )
      goto LABEL_494;
    Instance = (__int64)this->fields.mOptionRestrinctionLb;
    if ( !Instance )
      goto LABEL_523;
    restrictionDefaultWidth = this->fields.restrictionDefaultWidth;
    goto LABEL_493;
  }
  GameObjectExtensions__SetLocalPosition(v311, v312->RESTRICTION_POS_ALLOUT, 0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_523;
  UILabel__set_fontSize(
    (UILabel_o *)Instance,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SIZE_ALLOUT,
    0LL);
  QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
    this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT,
    v313);
  if ( (v289 & 1) == 0 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v314 = this->fields.mOptionRestrinctionLb;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v314 )
      goto LABEL_523;
    Instance = (__int64)v314;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
LABEL_493:
    UILabel__SetCondensedScale((UILabel_o *)Instance, restrictionDefaultWidth, 0LL);
  }
LABEL_494:
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_523;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
  if ( v224 == 2 )
  {
    Instance = (__int64)this->fields.mOptionRestrinctionSp;
    if ( !Instance )
      goto LABEL_523;
    v388.fields.a = *(float *)(Instance + 160);
    v388.fields.r = *(float *)(Instance + 148) * 0.5;
    v388.fields.g = *(float *)(Instance + 152) * 0.5;
    v388.fields.b = *(float *)(Instance + 156) * 0.5;
    UIWidget__set_color((UIWidget_o *)Instance, v388, 0LL);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v366,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_523;
  v321 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, v363->fields.id, questPhase, 0LL);
  v322 = v321;
  if ( v321 )
  {
    classIds = v321->fields.classIds;
    if ( classIds )
      LOBYTE(classIds) = classIds->max_length != 0;
  }
  else
  {
    LOBYTE(classIds) = 0;
  }
  v324 = (unsigned __int8)classIds & v358;
  v325 = v324 == 0;
  if ( v324 && v224 == 2 )
    v325 = QuestEntity__HasFlag(v363, 2048LL, 0LL);
  Instance = (__int64)this->fields.mClassIconRoot;
  if ( !Instance )
    goto LABEL_523;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !v325, 0LL);
  Instance = (__int64)this->fields.mClassStrSp;
  if ( !Instance )
    goto LABEL_523;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v367 + 24), 0LL);
  if ( !v325 )
  {
    if ( !v322 )
      goto LABEL_523;
    mClassIcons = this->fields.mClassIcons;
    if ( !mClassIcons )
      goto LABEL_523;
    max_length = mClassIcons->max_length;
    v328 = max_length - 1;
    if ( max_length >= 1 )
    {
      v329 = v322->fields.classIds;
      v330 = 0;
      while ( v330 < mClassIcons->max_length )
      {
        v331 = (int)v330;
        v332 = &mClassIcons->obj.klass + (int)v330;
        v333 = (UnityEngine_Component_o *)v332[4];
        if ( !v333 )
          goto LABEL_523;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v332[4], 0LL);
        if ( !v329 )
          goto LABEL_523;
        if ( !Instance )
          goto LABEL_523;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)Instance,
          (int)v331 < (signed int)v329->max_length,
          0LL);
        Instance = (__int64)UnityEngine_Component__get_gameObject(v333, 0LL);
        if ( !Instance )
          goto LABEL_523;
        Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( (unsigned int)v331 >= v329->max_length )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v333, v329->m_Items[v331 + 1], 0LL);
          ServantClassIconComponent__SetColor(
            (ServantClassIconComponent_o *)v333,
            *(UnityEngine_Color_o *)(v367 + 24),
            0LL);
        }
        if ( v328 == (_DWORD)v331 )
          goto LABEL_524;
        mClassIcons = this->fields.mClassIcons;
        v330 = v331 + 1;
        if ( !mClassIcons )
          goto LABEL_523;
      }
LABEL_587:
      sub_1B88814(Instance, mCostConsumeBattleWinSp);
    }
  }
LABEL_524:
  if ( key >= 1 )
  {
    eventTarget = (UnityEngine_Object_o *)this->fields.eventTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(eventTarget, 0LL, 0LL) )
    {
      eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
      {
        Instance = (__int64)this->fields.mQuestInfoBtn;
        if ( !Instance )
          goto LABEL_523;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
        {
          Instance = (__int64)this->fields.eventTargetComponent;
          if ( !Instance )
            goto LABEL_523;
          BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)Instance, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !Instance )
            goto LABEL_523;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    (ViewEnemyMaster_o *)Instance,
                                    v361->fields.questId,
                                    0LL);
          if ( EntityListFromQuestId
            && (v337 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                *(_QWORD *)&EntityListFromQuestId->max_length) )
          {
            v338 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v338 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            _9__315_1 = (System_Func_object__int__o *)v338->static_fields->__9__315_1;
            if ( !_9__315_1 )
            {
              if ( !v338->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v338);
                v338 = QuestBoardListViewItemDraw___c_TypeInfo;
              }
              v340 = (Il2CppObject *)v338->static_fields->__9;
              _9__315_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ViewEnemyEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__315_1,
                v340,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__315_1__,
                0LL);
              v341 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v341->__9__315_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__315_1;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v341->__9__315_1, (int32_t)_9__315_1, v342, v343);
            }
            v344 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                          v337,
                                                                          (System_Func_TSource__TResult__o *)_9__315_1,
                                                                          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                                  v344,
                                  (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !this->fields.eventTarget )
              goto LABEL_523;
            v345 = (System_Int32_array *)Instance;
            UnityEngine_GameObject__SetActive(this->fields.eventTarget, 1, 0LL);
            Instance = (__int64)this->fields.eventTargetComponent;
            if ( !Instance )
              goto LABEL_523;
            BoardOptionEventTargetComponent__CreateEnemyList(
              (BoardOptionEventTargetComponent_o *)Instance,
              v361->fields.questId,
              v345,
              0LL);
          }
          else
          {
            Instance = (__int64)this->fields.eventTarget;
            if ( !Instance )
              goto LABEL_523;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          }
        }
      }
    }
  }
  if ( (v364 & (v365 == 2) & QuestEntity__HasFlag(v363, 0x400000000000000LL, 0LL)) != 0 )
  {
    alloutRoot = (UnityEngine_Object_o *)this->fields.alloutRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(alloutRoot, 0LL, 0LL) )
    {
      alloutRootComponent = (UnityEngine_Object_o *)this->fields.alloutRootComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(alloutRootComponent, 0LL, 0LL) )
      {
        if ( !v361->fields.questReleaseType )
          goto LABEL_566;
        v348 = v361->fields.questId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_37596684(v348, -1, 1, 0LL) )
        {
LABEL_566:
          Instance = (__int64)this->fields.alloutRoot;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            Instance = (__int64)this->fields.alloutRootComponent;
            if ( Instance )
            {
              BoardOptionAlloutComponent__SetIcon((BoardOptionAlloutComponent_o *)Instance, v361->fields.questId, 0LL);
              return;
            }
          }
          goto LABEL_523;
        }
      }
    }
  }
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  QuestBoardListViewManager_c *v6; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v8; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v10; // x21
  __int64 methodPtr_low; // x9
  int32_t dispType; // w28
  int64_t v13; // x23
  Il2CppObject *MasterData_object; // x25
  float v15; // s8
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v17; // x0
  System_String_o *RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v19; // x1
  System_String_o *v20; // x0
  QuestBoardListViewItemDraw_c *v21; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x25
  System_String_o *v23; // x0
  UISprite_o *mcBaseP; // x24
  System_String_o *v25; // x25
  const MethodInfo *v26; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x24
  float NEXT_POS_X_QUEST; // s0
  bool activeSelf; // w0
  const MethodInfo *v32; // x3
  QuestBoardListViewItemDraw_c *v33; // x8
  bool v34; // w24
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v36; // x9
  __int64 v37; // x11
  __int64 v38; // x10
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x4
  System_String_o *v43; // x23
  Il2CppObject *v44; // x22
  Il2CppObject *BattleName; // x0
  UILabel_o *mTitleNameLb; // x22
  QuestBoardListViewItemDraw_o *v47; // x0
  const MethodInfo *v48; // x4
  bool PhasePresentGiftData; // w23
  const MethodInfo *v50; // x4
  int32_t questId; // w22
  QuestBoardListViewItemDraw_PhasePresentData_o *v52; // x24
  int32_t afterClear; // w25
  bool IsRepeatReward; // w0
  const MethodInfo *v55; // x6
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x1
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  const MethodInfo *v60; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  int32_t v62; // w2
  int64_t *p_expireAt; // x8
  int64_t v64; // x22
  System_Collections_Generic_List_object__o *v65; // x21
  System_String_o *v66; // x24
  QuestBoardInformationText_o *v67; // x23
  int32_t v68; // w2
  int32_t v69; // w3
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_List_object__o *v74; // x23
  int32_t v75; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v77; // x8
  __int64 v78; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v80; // w9
  int32_t v81; // w8
  bool v82; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v84; // x21
  QuestBoardListViewItemDraw_o *v85; // x0
  const MethodInfo *v86; // x1
  int32_t v87; // [xsp+8h] [xbp-88h] BYREF
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A58091 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58091 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  v87 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_147;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_147;
  v8 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_147;
  v10 = (QuestEntity_o *)Instance;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_147;
  v6 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_148;
  }
  if ( !v8 )
    goto LABEL_147;
  dispType = quest_info_k__BackingField->fields.dispType;
  v13 = *(_QWORD *)(Instance + 584);
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v10 || !MasterData_object )
    goto LABEL_147;
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, Instance, v10->fields.id, 0LL);
  Instance = (int64_t)this->fields.mLabelObj;
  v15 = dispType == 2 ? 0.5 : 1.0;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceObj;
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v10->fields.bannerId < 1 )
      goto LABEL_57;
    v21 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v21 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v21->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v19 = System_Int32__ToString((int)v10 + 64, 0LL);
    v20 = QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v17 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v17 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = v17->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
    v87 = OverwriteBannerId_k__BackingField;
    v19 = System_Int32__ToString((int32_t)&v87, 0LL);
    v20 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v23 = System_String__Concat_61707032(v20, v19, 0LL);
  mcBaseP = this->fields.mcBaseP;
  v25 = v23;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(mcBaseP, v25, 0LL);
  if ( !mcBaseP )
    goto LABEL_147;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, Instance & 1, 0LL);
LABEL_57:
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_147;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_147;
  v93.fields.a = 1.0;
  v93.fields.r = v15;
  v93.fields.g = v15;
  v93.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)Instance, v93, 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_147;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_147;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_147;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v28 = QuestBoardListViewItemDraw_TypeInfo;
    v29 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v28 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v29, v28->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_147;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_147;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_147;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 128) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 140) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v26);
  Instance = (int64_t)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v33 = QuestBoardListViewItemDraw_TypeInfo;
  v34 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v33 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v33->static_fields;
  v36 = 100LL;
  v37 = 104LL;
  if ( v34 )
    v36 = 124LL;
  v38 = 108LL;
  if ( v34 )
    v37 = 128LL;
  if ( v34 )
    v38 = 132LL;
  LODWORD(v92.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v36);
  LODWORD(v92.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v37);
  LODWORD(v92.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v38);
  QuestBoardListViewItemDraw__SetNewIcon(this, v92, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v32);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v40);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v39);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v10, v13, v42);
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v41);
    Instance = (int64_t)QuestEntity__getQuestName(v10, 0LL);
    if ( !Instance )
      goto LABEL_147;
    v43 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_24983/*"{0}"*/, 0LL) )
    {
      v44 = DataManager__GetMasterData_object_(
              v8,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = QuestEntity__getServantId(v10, 0LL);
      if ( !v44 )
        goto LABEL_147;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v44,
                            Instance,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_147;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v43 = System_String__Format(v43, BattleName, 0LL);
    }
    Instance = (int64_t)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_147;
    UILabel__set_text((UILabel_o *)Instance, v43, 0LL);
    Instance = (int64_t)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_147;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mTitleNameLb )
    goto LABEL_147;
  UILabel__SetCondensedScale(
    mTitleNameLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0LL);
  Instance = (int64_t)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_147;
  v94.fields.a = 1.0;
  v94.fields.r = v15;
  v94.fields.g = v15;
  v94.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)Instance, v94, 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v47,
                           &phasePresentData,
                           v10,
                           quest_info_k__BackingField->fields.questPhase,
                           v48);
  v95.fields.a = 1.0;
  v95.fields.r = v15;
  v95.fields.g = v15;
  v95.fields.b = v15;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v10, phasePresentData, dispType == 2, v95, v50);
  questId = quest_info_k__BackingField->fields.questId;
  v52 = phasePresentData;
  afterClear = v10->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v10, 0LL);
  v96.fields.a = 1.0;
  v96.fields.r = v15;
  v96.fields.g = v15;
  v96.fields.b = v15;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    questId,
    PhasePresentGiftData,
    v52,
    afterClear,
    v96,
    IsRepeatReward,
    v55);
  v97.fields.a = 1.0;
  v97.fields.r = v15;
  v97.fields.g = v15;
  v97.fields.b = v15;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v97, v56);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v57);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  mInfoTextList = this->fields.mInfoTextList;
  v62 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v62,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        &isNotItemConsume,
                        v60);
  if ( !mInfoTextList )
    goto LABEL_147;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Instance = (int64_t)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_147;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_124;
    if ( !entity )
      goto LABEL_147;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v64 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v10, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v65 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v67 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v67, v66, v64, 0, 1, 0LL, 0LL);
      if ( !v65 )
        goto LABEL_147;
      items = v65->fields._items;
      v71 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v65->fields._version;
      if ( !items )
        goto LABEL_147;
      size = v65->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v65,
          (Il2CppObject *)v67,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = &items->obj.klass + size;
        v65->fields._size = size + 1;
        v73[4] = (Il2CppClass *)v67;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v73 + 4), (int32_t)v67, v68, v69);
      }
    }
  }
LABEL_124:
  v74 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v74 )
    goto LABEL_147;
  v75 = v74->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v75 < 1 )
    goto LABEL_133;
  v77 = this->fields.mListViewObject;
  if ( !v77 )
    goto LABEL_147;
  Instance = (int64_t)v77->fields.manager;
  if ( !Instance )
    goto LABEL_147;
  v78 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v78
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v78 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_148:
    sub_1B88ACC(Instance);
    QuestBoardListViewItemDraw__ResetInfoTextList(v85, v86);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v75, 0LL);
  Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v74,
                        AlphaAnimCnt,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Instance )
    goto LABEL_147;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_147;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v80 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v81 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v80;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v81;
LABEL_133:
  Instance = (int64_t)*p_mOptionInfoLb;
  v82 = v75 > 0;
  if ( !*p_mOptionInfoLb )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v82, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_147;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v82, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v84 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v84 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v84,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 268LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        0LL);
      return;
    }
LABEL_147:
    sub_1B8880C(Instance, v6);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfShortcut(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  QuestBoardListViewManager_c *v6; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  int32_t info_kind_k__BackingField; // w28
  DataManager_o *v9; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v11; // x21
  __int64 methodPtr_low; // x9
  int32_t dispType; // w25
  int64_t v14; // x23
  Il2CppObject *MasterData_object; // x24
  float v16; // s8
  UISprite_o *mcBaseP; // x24
  __int64 v18; // x9
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x24
  float NEXT_POS_X_QUEST; // s0
  bool activeSelf; // w0
  const MethodInfo *v25; // x3
  QuestBoardListViewItemDraw_c *v26; // x8
  bool v27; // w24
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v29; // x9
  __int64 v30; // x11
  __int64 v31; // x10
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x4
  System_String_o *v36; // x23
  Il2CppObject *v37; // x24
  Il2CppObject *BattleName; // x0
  UILabel_o *mTitleNameLb; // x23
  int32_t ServantId; // w23
  UILabel_o *mTitleShortcutLb; // x22
  const MethodInfo *v42; // x5
  QuestBoardListViewItemDraw_c *v43; // x0
  UISprite_o *mLabelFaceMaskShortcutSp; // x22
  _BOOL8 v45; // x0
  const MethodInfo *v46; // x4
  bool PhasePresentGiftData; // w22
  const MethodInfo *v48; // x4
  int32_t questId; // w23
  QuestBoardListViewItemDraw_PhasePresentData_o *v50; // x24
  int32_t afterClear; // w25
  bool IsRepeatReward; // w0
  const MethodInfo *v53; // x6
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x1
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  const MethodInfo *v58; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  int32_t v60; // w2
  int64_t *p_expireAt; // x8
  int64_t v62; // x22
  System_Collections_Generic_List_object__o *v63; // x21
  System_String_o *v64; // x24
  QuestBoardInformationText_o *v65; // x23
  int32_t v66; // w2
  int32_t v67; // w3
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  System_Collections_Generic_List_object__o *v72; // x23
  int32_t v73; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v75; // x8
  __int64 v76; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v78; // w9
  int32_t v79; // w8
  bool v80; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v82; // x21
  QuestBoardListViewItemDraw_o *v83; // x0
  QuestBoardListViewItem_o *v84; // x1
  const MethodInfo *v85; // x2
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A58090 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58090 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_149;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_149;
  info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
  v9 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_149;
  v11 = (QuestEntity_o *)Instance;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_149;
  v6 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_150;
  }
  if ( !v9 )
    goto LABEL_149;
  dispType = quest_info_k__BackingField->fields.dispType;
  v14 = *(_QWORD *)(Instance + 584);
  MasterData_object = DataManager__GetMasterData_object_(
                        v9,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v11 || !MasterData_object )
    goto LABEL_149;
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, Instance, v11->fields.id, 0LL);
  Instance = (int64_t)this->fields.mLabelObj;
  v16 = dispType == 2 ? 0.5 : 1.0;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_149;
  UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0LL);
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  mcBaseP = this->fields.mcBaseP;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mcBaseP )
    goto LABEL_149;
  v18 = 1048LL;
  if ( info_kind_k__BackingField == 2 )
    v18 = 1040LL;
  UISprite__set_spriteName(
    mcBaseP,
    *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v18),
    0LL);
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_149;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_149;
  v91.fields.a = 1.0;
  v91.fields.r = v16;
  v91.fields.g = v16;
  v91.fields.b = v16;
  UIWidget__set_color((UIWidget_o *)Instance, v91, 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_149;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_149;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_149;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v21 = QuestBoardListViewItemDraw_TypeInfo;
    v22 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v21 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v22, v21->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_149;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_149;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_149;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 128) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 140) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v19);
  Instance = (int64_t)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v26 = QuestBoardListViewItemDraw_TypeInfo;
  v27 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v26 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v26->static_fields;
  v29 = 100LL;
  v30 = 104LL;
  if ( v27 )
    v29 = 124LL;
  v31 = 108LL;
  if ( v27 )
    v30 = 128LL;
  if ( v27 )
    v31 = 132LL;
  LODWORD(v90.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v29);
  LODWORD(v90.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v30);
  LODWORD(v90.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v31);
  QuestBoardListViewItemDraw__SetNewIcon(this, v90, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v25);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v33);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v32);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v11, v14, v35);
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v34);
    Instance = (int64_t)QuestEntity__getQuestName(v11, 0LL);
    if ( !Instance )
      goto LABEL_149;
    v36 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_24983/*"{0}"*/, 0LL) )
    {
      v37 = DataManager__GetMasterData_object_(
              v9,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = QuestEntity__getServantId(v11, 0LL);
      if ( !v37 )
        goto LABEL_149;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v37,
                            Instance,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_149;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v36 = System_String__Format(v36, BattleName, 0LL);
    }
    Instance = (int64_t)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_149;
    UILabel__set_text((UILabel_o *)Instance, v36, 0LL);
    Instance = (int64_t)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_149;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mTitleNameLb )
    goto LABEL_149;
  UILabel__SetCondensedScale(
    mTitleNameLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0LL);
  Instance = (int64_t)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_149;
  v92.fields.a = 1.0;
  v92.fields.r = v16;
  v92.fields.g = v16;
  v92.fields.b = v16;
  UIWidget__set_color((UIWidget_o *)Instance, v92, 0LL);
  ServantId = QuestEntity__getServantId(v11, 0LL);
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v9,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        ServantId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( Instance )
  {
    Instance = (int64_t)ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0LL);
    if ( !mTitleShortcutLb )
      goto LABEL_149;
    UILabel__set_text(mTitleShortcutLb, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.mTitleShortcutLb;
    if ( !Instance )
      goto LABEL_149;
    v93.fields.a = 1.0;
    v93.fields.r = v16;
    v93.fields.g = v16;
    v93.fields.b = v16;
    UIWidget__set_color((UIWidget_o *)Instance, v93, 0LL);
  }
  else
  {
    if ( !mTitleShortcutLb )
      goto LABEL_149;
    UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v43 = QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskShortcutSp = this->fields.mLabelFaceMaskShortcutSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v43 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v94.fields.a = 1.0;
  v94.fields.r = v16;
  v94.fields.g = v16;
  v94.fields.b = v16;
  v45 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          v11,
          mLabelFaceMaskShortcutSp,
          v43->static_fields->SHORTCUT_FACE_MASK_SP_W,
          v43->static_fields->SHORTCUT_FACE_MASK_SPNAME,
          v94,
          v42);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           (QuestBoardListViewItemDraw_o *)v45,
                           &phasePresentData,
                           v11,
                           quest_info_k__BackingField->fields.questPhase,
                           v46);
  v95.fields.a = 1.0;
  v95.fields.r = v16;
  v95.fields.g = v16;
  v95.fields.b = v16;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v11, phasePresentData, dispType == 2, v95, v48);
  questId = quest_info_k__BackingField->fields.questId;
  v50 = phasePresentData;
  afterClear = v11->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v11, 0LL);
  v96.fields.a = 1.0;
  v96.fields.r = v16;
  v96.fields.g = v16;
  v96.fields.b = v16;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    questId,
    PhasePresentGiftData,
    v50,
    afterClear,
    v96,
    IsRepeatReward,
    v53);
  v97.fields.a = 1.0;
  v97.fields.r = v16;
  v97.fields.g = v16;
  v97.fields.b = v16;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v97, v54);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v55);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  mInfoTextList = this->fields.mInfoTextList;
  v60 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v60,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        &isNotItemConsume,
                        v58);
  if ( !mInfoTextList
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)mInfoTextList,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__),
        (Instance = (int64_t)this->fields.mRarePrismSp) == 0)
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_149:
    sub_1B8880C(Instance, v6);
  }
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_149;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_126;
    if ( !entity )
      goto LABEL_149;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v62 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v11, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v63 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v65 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v65, v64, v62, 0, 1, 0LL, 0LL);
      if ( !v63 )
        goto LABEL_149;
      items = v63->fields._items;
      v69 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v63->fields._version;
      if ( !items )
        goto LABEL_149;
      size = v63->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v63,
          (Il2CppObject *)v65,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = &items->obj.klass + size;
        v63->fields._size = size + 1;
        v71[4] = (Il2CppClass *)v65;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v65, v66, v67);
      }
    }
  }
LABEL_126:
  v72 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v72 )
    goto LABEL_149;
  v73 = v72->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v73 < 1 )
    goto LABEL_135;
  v75 = this->fields.mListViewObject;
  if ( !v75 )
    goto LABEL_149;
  Instance = (int64_t)v75->fields.manager;
  if ( !Instance )
    goto LABEL_149;
  v76 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v76
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v76 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_150:
    sub_1B88ACC(Instance);
    QuestBoardListViewItemDraw__SetItemOfQuest(v83, v84, v85);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v73, 0LL);
  Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v72,
                        AlphaAnimCnt,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Instance )
    goto LABEL_149;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_149;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v78 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v79 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v78;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v79;
LABEL_135:
  Instance = (int64_t)*p_mOptionInfoLb;
  v80 = v73 > 0;
  if ( !*p_mOptionInfoLb )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v80, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_149;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v80, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v82 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v82 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v82,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 268LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        0LL);
      return;
    }
    goto LABEL_149;
  }
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfWarBoard(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int64_t Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  DataManager_o *v11; // x23
  QuestEntity_o *PhaseDetailedEntity; // x22
  unsigned int v13; // w26
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  int32_t dispType; // w27
  bool HasFlag; // w0
  float v18; // s0
  bool v19; // w27
  Il2CppObject *MasterData_object; // x23
  int32_t questId; // w23
  bool IsQuestClear_37596684; // w0
  int32_t v23; // w23
  int32_t PhaseMax; // w8
  QuestBoardListViewItemDraw_c *v25; // x0
  UnityEngine_GameObject_o *mCostObj; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  QuestBoardListViewItemDraw_c *v30; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x25
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UISprite_o *v34; // x29
  System_String_o *v35; // x25
  UISprite_o *v36; // x25
  System_String_o *QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x29
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  UISprite_o *mcBaseP; // x28
  System_String_o *SHOHI_SP_NAME_WAR_BOARD; // x1
  UISprite_o *mShohiSp; // x28
  UISprite_o *v43; // x28
  __int64 v44; // x8
  unsigned int v45; // w9
  System_String_o *v46; // x25
  System_String_o *v47; // x0
  System_String_o *v48; // x25
  const MethodInfo *v49; // x3
  UnityEngine_GameObject_o *v50; // x0
  QuestBoardListViewItemDraw_c *v51; // x8
  UnityEngine_GameObject_o *v52; // x28
  float NEXT_POS_X_QUEST; // s0
  int32_t v54; // w1
  bool activeSelf; // w0
  const MethodInfo *v56; // x3
  QuestBoardListViewItemDraw_c *v57; // x8
  bool v58; // w28
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float *p_x; // x9
  float *p_y; // x10
  float *p_z; // x11
  const MethodInfo *v63; // x2
  UnityEngine_GameObject_o *v64; // x28
  _BOOL8 v65; // x0
  const MethodInfo *v66; // x5
  QuestBoardListViewItemDraw_c *v67; // x0
  System_String_o *RecommendLv; // x0
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x2
  QuestBoardListViewItemDraw_o *v71; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x27
  int32_t mMatrixFrame; // w25
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v75; // x5
  bool v76; // w0
  const MethodInfo *v77; // x3
  UILabel_o *mTitleNameLb; // x27
  const MethodInfo *v79; // x4
  QuestBoardListViewItemDraw_o *v80; // x0
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x2
  UISprite_o *mLabelNameSp; // x27
  QuestBoardListViewItemDraw_o *v84; // x0
  const MethodInfo *v85; // x3
  System_String_o *QuestIconName; // x25
  System_Action_o *v87; // x25
  const MethodInfo *v88; // x3
  UILabel_o *v89; // x25
  QuestBoardListViewItemDraw_o *v90; // x0
  const MethodInfo *v91; // x4
  bool PhasePresentGiftData; // w26
  const MethodInfo *v93; // x4
  int32_t v94; // w25
  QuestBoardListViewItemDraw_PhasePresentData_o *v95; // x27
  int32_t afterClear; // w28
  float v97; // s8
  float v98; // s9
  float v99; // s10
  float v100; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v102; // x6
  const MethodInfo *v103; // x3
  const MethodInfo *v104; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x25
  const MethodInfo *v106; // x7
  int64_t *p_expireAt; // x8
  int64_t v108; // x25
  System_Collections_Generic_List_object__o *v109; // x24
  System_String_o *v110; // x27
  QuestBoardInformationText_o *v111; // x26
  int32_t v112; // w2
  int32_t v113; // w3
  struct System_Object_array *items; // x8
  _QWORD *v115; // x9
  __int64 size; // x10
  Il2CppClass **v117; // x0
  System_Collections_Generic_List_object__o *v118; // x26
  int32_t v119; // w25
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *v121; // x8
  __int64 v122; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v124; // w9
  int32_t v125; // w8
  bool v126; // w25
  WarBoardQuestEntity_o *v127; // x0
  WarBoardQuestEntity_o *v128; // x21
  UILabel_o *mBoardMessage; // x21
  __int64 v130; // x8
  const MethodInfo *v131; // [xsp+8h] [xbp-C8h]
  int64_t checkTime; // [xsp+10h] [xbp-C0h]
  bool v133; // [xsp+18h] [xbp-B8h]
  int32_t questPhase; // [xsp+1Ch] [xbp-B4h]
  int32_t v135; // [xsp+20h] [xbp-B0h]
  bool isNotItemConsume; // [xsp+24h] [xbp-ACh] BYREF
  int32_t fixedVal[2]; // [xsp+28h] [xbp-A8h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+30h] [xbp-A0h] BYREF
  bool isTripleItemConsume; // [xsp+3Ch] [xbp-94h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+40h] [xbp-90h] BYREF
  bool isDoubleItemConsume; // [xsp+44h] [xbp-8Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A58096 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass316_0__SetItemOfWarBoard_b__0__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass316_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58096 = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  v5 = sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass316_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass316_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_204;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_204;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_204;
  v11 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_204;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v11 )
    goto LABEL_204;
  v13 = Instance;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_204;
  if ( !Instance )
    goto LABEL_204;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_204;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_204;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_205:
    sub_1B88ACC(Instance);
    goto LABEL_206;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *(_QWORD *)(Instance + 584);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  v18 = 1.0;
  if ( dispType == 2 )
    v18 = 0.5;
  *(float *)(v5 + 24) = v18;
  *(float *)(v5 + 28) = v18;
  *(float *)(v5 + 32) = v18;
  *(_DWORD *)(v5 + 36) = 1065353216;
  v135 = dispType;
  v19 = HasFlag;
  MasterData_object = DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_204;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    Instance,
    PhaseDetailedEntity->fields.id,
    0LL);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  questId = quest_info_k__BackingField->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37596684 = CondType__IsQuestClear_37596684(questId, -1, 0, 0LL);
  v23 = quest_info_k__BackingField->fields.questPhase;
  v133 = IsQuestClear_37596684;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = (int64_t)this->fields.mLabelObj;
  if ( v23 + 1 < PhaseMax )
    PhaseMax = v23 + 1;
  questPhase = PhaseMax;
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v25 = QuestBoardListViewItemDraw_TypeInfo;
  mCostObj = this->fields.mCostObj;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v25 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(mCostObj, v25->static_fields->COST_OBJ_POS_WAR_BOARD, 0LL);
  Instance = (int64_t)this->fields.mCostApSp;
  if ( !Instance )
    goto LABEL_204;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS_WAR_BOARD,
    0LL);
  Instance = (int64_t)this->fields.mCostLb1;
  if ( !Instance )
    goto LABEL_204;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v28,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS_WAR_BOARD,
    0LL);
  Instance = (int64_t)this->fields.mShohiSp;
  if ( !Instance )
    goto LABEL_204;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v29,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS_WAR_BOARD,
    0LL);
  if ( PhaseDetailedEntity->fields.bannerId < 1 )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    mShohiSp = this->fields.mShohiSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !mShohiSp )
      goto LABEL_204;
    UISprite__set_spriteName(mShohiSp, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD, 0LL);
    if ( v13 > 7 || ((1 << v13) & 0xA6) == 0 )
    {
      Instance = (int64_t)this->fields.mcBaseP;
      if ( !Instance )
        goto LABEL_204;
      UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0LL);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      mcBaseP = this->fields.mcBaseP;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      }
      v130 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1056LL);
      if ( !v130 )
        goto LABEL_204;
      if ( v13 >= *(_DWORD *)(v130 + 24) )
LABEL_206:
        sub_1B88814(Instance, v7);
      if ( !mcBaseP )
        goto LABEL_204;
      SHOHI_SP_NAME_WAR_BOARD = *(System_String_o **)(v130 + 8LL * (int)v13 + 32);
      goto LABEL_66;
    }
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v43 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    v44 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1056LL);
    if ( !v44 )
      goto LABEL_204;
    v45 = *(_DWORD *)(v44 + 24);
    if ( v13 == 7 )
    {
      if ( v45 <= 1 )
        goto LABEL_206;
      v46 = *(System_String_o **)(v44 + 40);
    }
    else
    {
      if ( v13 >= v45 )
        goto LABEL_206;
      v46 = *(System_String_o **)(v44 + 8LL * v13 + 32);
    }
    v47 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
    v48 = System_String__Concat_61707032(v46, v47, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v43, v48, 0LL);
  }
  else
  {
    v30 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v30 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v30->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v32 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
    v33 = System_String__Concat_61707032(QUEST_BOARD_SPNAME_PREFIX, v32, 0LL);
    v34 = this->fields.mcBaseP;
    v35 = v33;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v34, v35, 0LL);
    if ( !v34 )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v34, Instance & 1, 0LL);
    v36 = this->fields.mShohiSp;
    QUEST_BOARD_SHOHI_SPNAME_PREFIX = QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
    v38 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
    v39 = System_String__Concat_61707032(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v38, 0LL);
    if ( !AtlasManager__SetEventUI(v36, v39, 0LL) )
    {
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      mcBaseP = this->fields.mShohiSp;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !mcBaseP )
        goto LABEL_204;
      SHOHI_SP_NAME_WAR_BOARD = QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
LABEL_66:
      UISprite__set_spriteName(mcBaseP, SHOHI_SP_NAME_WAR_BOARD, 0LL);
    }
  }
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_204;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_204;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_204;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_204;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_204;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v51 = QuestBoardListViewItemDraw_TypeInfo;
    v52 = v50;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v51 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v52, v51->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_204;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_204;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_204;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 128) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 140) = NEXT_POS_X_QUEST;
  }
  if ( v135 != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v54 = 1;
    }
    else
    {
      if ( !v133 )
        goto LABEL_103;
      v54 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v54, 1, v49);
  }
LABEL_103:
  Instance = (int64_t)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v57 = QuestBoardListViewItemDraw_TypeInfo;
  v58 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v57 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v57->static_fields;
  p_x = &static_fields->NEW_POS_QUEST_NEXT.fields.x;
  p_y = &static_fields->NEW_POS_QUEST_NEXT.fields.y;
  p_z = &static_fields->NEW_POS_QUEST_NEXT.fields.z;
  if ( !v58 )
    p_x = &static_fields->NEW_POS_QUEST.fields.x;
  if ( !v58 )
    p_y = &static_fields->NEW_POS_QUEST.fields.y;
  if ( !v58 )
    p_z = &static_fields->NEW_POS_QUEST.fields.z;
  v143.fields.z = *p_z;
  v143.fields.y = *p_y;
  v143.fields.x = *p_x;
  QuestBoardListViewItemDraw__SetNewIcon(this, v143, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v56);
  Instance = (int64_t)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v63);
  if ( !Instance )
    goto LABEL_204;
  v64 = (UnityEngine_GameObject_o *)Instance;
  v65 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v65 )
  {
    v67 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v67 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v64, v67->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  (QuestBoardListViewItemDraw_o *)v65,
                  PhaseDetailedEntity,
                  questPhase,
                  !v19,
                  v135 == 2,
                  v66);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v5 + 24), v69);
  v71 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v71 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mMatrixFrame = v71->fields.mTitleLevelStrSp[1].fields.mMatrixFrame;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v71, v13, v70);
  v76 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          mMatrixFrame,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v5 + 24),
          v75);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v76 )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v13, v77);
    if ( !mTitleNameLb )
      goto LABEL_204;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    goto LABEL_141;
  }
  Instance = (int64_t)QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_204;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v13 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v80, quest_info_k__BackingField->fields.warId, v81) )
  {
    Instance = (int64_t)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_204;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_204;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v84, PhaseDetailedEntity, v13, v85);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_204;
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_204;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_204;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_204;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_204;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v87 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v87,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass316_0__SetItemOfWarBoard_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v87, v88);
    }
LABEL_141:
    if ( v135 == 2 )
      goto LABEL_142;
    goto LABEL_143;
  }
  if ( v135 == 2 )
  {
LABEL_142:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v79);
    goto LABEL_145;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v82);
LABEL_143:
  Instance = (int64_t)this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_204;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_145:
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  v89 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v89 )
    goto LABEL_204;
  UILabel__SetCondensedScale(v89, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (int64_t)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_204;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v90,
                           &phasePresentData,
                           PhaseDetailedEntity,
                           quest_info_k__BackingField->fields.questPhase,
                           v91);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    phasePresentData,
    v135 == 2,
    *(UnityEngine_Color_o *)(v5 + 24),
    v93);
  v94 = quest_info_k__BackingField->fields.questId;
  v95 = phasePresentData;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v97 = *(float *)(v5 + 24);
  v98 = *(float *)(v5 + 28);
  v99 = *(float *)(v5 + 32);
  v100 = *(float *)(v5 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v144.fields.r = v97;
  v144.fields.g = v98;
  v144.fields.b = v99;
  v144.fields.a = v100;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    v94,
    PhasePresentGiftData,
    v95,
    afterClear,
    v144,
    IsRepeatReward,
    v102);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v5 + 24),
    v103);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v104);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        questPhase,
                        !v133,
                        &fixedVal[1],
                        fixedVal,
                        &isNotItemConsume,
                        v106);
  if ( !mInfoTextList )
    goto LABEL_204;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Instance = (int64_t)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_204;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_167;
    if ( !entity )
      goto LABEL_204;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v108 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v109 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v111 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v111, v110, v108, 0, 1, 0LL, 0LL);
      if ( !v109 )
        goto LABEL_204;
      items = v109->fields._items;
      v115 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v109->fields._version;
      if ( !items )
        goto LABEL_204;
      size = v109->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v109,
          (Il2CppObject *)v111,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
      }
      else
      {
        v117 = &items->obj.klass + size;
        v109->fields._size = size + 1;
        v117[4] = (Il2CppClass *)v111;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v117 + 4), (int32_t)v111, v112, v113);
      }
    }
  }
LABEL_167:
  v118 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v118 )
    goto LABEL_204;
  v119 = v118->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v119 < 1 )
    goto LABEL_176;
  v121 = this->fields.mListViewObject;
  if ( !v121 )
    goto LABEL_204;
  Instance = (int64_t)v121->fields.manager;
  if ( !Instance )
    goto LABEL_204;
  v122 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v122
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v122 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_205;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v119, 0LL);
  Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v118,
                        AlphaAnimCnt,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Instance )
    goto LABEL_204;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_204;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v124 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v125 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v124;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v125;
LABEL_176:
  Instance = (int64_t)*p_mOptionInfoLb;
  v126 = v119 > 0;
  if ( !*p_mOptionInfoLb )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v126, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_204;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_204;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v126, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v135 == 2,
    fixedVal[1],
    fixedVal[0],
    isNotItemConsume,
    *(UnityEngine_Color_o *)(v5 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    v131);
  Instance = (int64_t)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_204;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !Instance )
    goto LABEL_204;
  v127 = WarBoardQuestMaster__GetEntity(
           (WarBoardQuestMaster_o *)Instance,
           quest_info_k__BackingField->fields.questId,
           questPhase,
           0LL);
  if ( !v127 )
    return;
  v128 = v127;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !Instance )
    goto LABEL_204;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        v128->fields.stageId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( Instance )
  {
    if ( !this->fields.mBoardMessage )
      goto LABEL_204;
    UILabel__set_text(this->fields.mBoardMessage, *(System_String_o **)(Instance + 48), 0LL);
  }
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  mBoardMessage = this->fields.mBoardMessage;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mBoardMessage
    || (UILabel__SetCondensedScale(
          mBoardMessage,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->BOARD_MESSAGE_MAX_WITDH,
          0LL),
        (Instance = (int64_t)this->fields.mBoardMessage) == 0) )
  {
LABEL_204:
    sub_1B8880C(Instance, v7);
  }
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetListViewObject(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewObject_o *questBoardObject,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mListViewObject = questBoardObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mListViewObject,
    (int32_t)questBoardObject,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetNewIcon(
        QuestBoardListViewItemDraw_o *this,
        UnityEngine_Vector3_o pos,
        int32_t w,
        int32_t h,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *StatusSp; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *v14; // x22
  Il2CppObject *Component_object; // x19
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4A580A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A580A7 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, *(const MethodInfo **)&h);
  if ( !StatusSp )
    goto LABEL_20;
  StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(StatusSp, 0LL);
  if ( !this->fields.mNewIcon )
    goto LABEL_20;
  if ( ((unsigned __int8)StatusSp & 1) != 0 )
  {
    ShiningIconComponent__Set(this->fields.mNewIcon, 0LL);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
    v16.fields.x = x;
    v16.fields.y = y;
    v16.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v16, 0LL);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_20;
    StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
    if ( !StatusSp )
      goto LABEL_20;
    StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             StatusSp,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !StatusSp )
      goto LABEL_20;
    v14 = (UIWidget_o *)StatusSp;
    UIWidget__set_width((UIWidget_o *)StatusSp, w, 0LL);
    UIWidget__set_height(v14, h, 0LL);
  }
  else
  {
    ShiningIconComponent__Clear(this->fields.mNewIcon, 0LL);
  }
  StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
  if ( !StatusSp )
    goto LABEL_20;
  StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
  if ( !StatusSp )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       StatusSp,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  StatusSp = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)StatusSp & 1) != 0 )
  {
    if ( Component_object )
    {
      TimeSyncAlphaSwitcher__Clear((TimeSyncAlphaSwitcher_o *)Component_object, 0LL);
      return;
    }
LABEL_20:
    sub_1B8880C(StatusSp, v12);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetNextSprite(
        QuestBoardListViewItemDraw_o *this,
        MapControl_AreaBoardInfo_o *info,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mNextSp; // x0
  UISprite_o *v8; // x21
  __int64 v9; // x8
  UnityEngine_Component_o *v10; // x20
  QuestBoardListViewItemDraw_c *v11; // x0
  __int64 v12; // x8
  int v13; // s0

  if ( (byte_4A580AA & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580AA = 1;
  }
  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp )
    goto LABEL_36;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0LL);
  if ( !info || !mNextSp )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNextSp, info->fields.isNext, 0LL);
  if ( !info->fields.isNext )
    return;
  if ( warEnt && WarEntity__HasFlag(warEnt, 0x200000, 0LL) )
  {
    mNextSp = (UnityEngine_Component_o *)QuestBoardListViewItemDraw_TypeInfo;
    v8 = this->fields.mNextSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v8 )
      goto LABEL_36;
    v9 = 200LL;
  }
  else
  {
    mNextSp = (UnityEngine_Component_o *)QuestBoardListViewItemDraw_TypeInfo;
    v8 = this->fields.mNextSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v8 )
      goto LABEL_36;
    v9 = 192LL;
  }
  UISprite__set_spriteName(
    v8,
    *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v9),
    0LL);
  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp )
    goto LABEL_36;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0LL);
  if ( !mNextSp )
    goto LABEL_36;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)mNextSp,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  v10 = mNextSp;
  if ( !warEnt )
    goto LABEL_30;
  mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 0x400000, 0LL);
  if ( ((unsigned __int8)mNextSp & 1) == 0 )
  {
    mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 256, 0LL);
    if ( ((unsigned __int8)mNextSp & 1) != 0 )
    {
      if ( v10 )
      {
        v11 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v11 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v12 = 176LL;
        goto LABEL_34;
      }
LABEL_36:
      sub_1B8880C(mNextSp, info);
    }
LABEL_30:
    if ( v10 )
    {
      v11 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v11 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v12 = 180LL;
      goto LABEL_34;
    }
    goto LABEL_36;
  }
  if ( !v10 )
    goto LABEL_36;
  v11 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v11 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v12 = 184LL;
LABEL_34:
  v13 = *(int32_t *)((char *)&v11->static_fields->POS_Y_ITVL_AREA + v12);
  LODWORD(v10[5].monitor) = v13;
  *((_DWORD *)&v10[5].fields + 1) = v13;
}


void __fastcall QuestBoardListViewItemDraw__SetPickupIcon(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *StatusSp; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4A580A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A580A8 = 1;
  }
  StatusSp = (UnityEngine_Object_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(StatusSp, 0LL, 0LL);
  if ( !v5 )
  {
    if ( StatusSp )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)StatusSp,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v5 )
        return;
      if ( Component_object )
      {
        TimeSyncAlphaSwitcher__Clear((TimeSyncAlphaSwitcher_o *)Component_object, 0LL);
        return;
      }
    }
    sub_1B8880C(v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetPrevSprite(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        UnityEngine_Vector3_o pos,
        bool isInterruptedQuest,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  System_Collections_Generic_List_int__o *v11; // x21
  DataManager_o *Instance; // x0
  __int64 id; // x1
  QuestGroupMaster_o *v14; // x23
  __int64 size; // x8
  UISprite_o *mPrevSp; // x20
  QuestBoardListViewItemDraw_c *v17; // x0
  AtlasManager_c *v18; // x8
  System_String_o *QUEST_BOARD_PREV_PAUSE_ICON_NAME; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *items; // x9
  _QWORD *v22; // x10
  TerminalPramsManager_c *v23; // x0
  const MethodInfo *v24; // x2
  QuestBoardListViewItemDraw_c *v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4A580AB & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A580AB = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !questEnt )
    goto LABEL_43;
  v14 = (QuestGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, questEnt->fields.id, 16, 0LL);
  if ( (_DWORD)Instance )
  {
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(v14, (int32_t)Instance, 16, 0LL);
    if ( !Instance )
      goto LABEL_43;
    if ( Instance->fields.m_CancellationTokenSource )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ToList_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                    (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
      v11 = (System_Collections_Generic_List_int__o *)Instance;
    }
  }
  if ( !v11 )
LABEL_43:
    sub_1B8880C(Instance, id);
  size = v11->fields._size;
  if ( (int)size <= 0 )
  {
    id = (unsigned int)questEnt->fields.id;
    items = v11->fields._items;
    v22 = Method_System_Collections_Generic_List_int__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_43;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v11,
        id,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      if ( isInterruptedQuest )
        goto LABEL_13;
    }
    else
    {
      v11->fields._size = size + 1;
      items->m_Items[size + 1] = id;
      if ( isInterruptedQuest )
        goto LABEL_13;
    }
  }
  else if ( isInterruptedQuest )
  {
LABEL_13:
    mPrevSp = this->fields.mPrevSp;
    v17 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v17 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v18 = AtlasManager_TypeInfo;
    QUEST_BOARD_PREV_PAUSE_ICON_NAME = v17->static_fields->QUEST_BOARD_PREV_PAUSE_ICON_NAME;
    goto LABEL_16;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A580D2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A580D2 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( System_Collections_Generic_List_int___Contains(
         v11,
         v23->static_fields->_LastPlayedQuestId_k__BackingField,
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 1, v24);
    if ( !Instance )
      goto LABEL_43;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
    {
      mPrevSp = this->fields.mPrevSp;
      v25 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v25 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v18 = AtlasManager_TypeInfo;
      QUEST_BOARD_PREV_PAUSE_ICON_NAME = v25->static_fields->QUEST_BOARD_PREV_ICON_NAME;
LABEL_16:
      if ( !v18->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v18);
      AtlasManager__SetBanner(mPrevSp, QUEST_BOARD_PREV_PAUSE_ICON_NAME, 0LL);
      Instance = (DataManager_o *)this->fields.mPrevSp;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          Instance = (DataManager_o *)this->fields.mPrevSp;
          if ( Instance )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            v26.fields.x = x;
            v26.fields.y = y;
            v26.fields.z = z;
            GameObjectExtensions__SetLocalPosition(gameObject, v26, 0LL);
            Instance = (DataManager_o *)this->fields.mPrevSp;
            if ( Instance )
            {
              ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                Instance,
                Instance->klass[2]._1.interopData);
              return;
            }
          }
        }
      }
      goto LABEL_43;
    }
  }
  Instance = (DataManager_o *)this->fields.mPrevSp;
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetRecommendLv(
        QuestBoardListViewItemDraw_o *this,
        System_String_o *recommendLv,
        UnityEngine_Color_o baseColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_GameObject_o *mTitleLevelRoot; // x20
  UnityEngine_Component_o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v14; // x21
  float v15; // s0
  float v16; // s0
  float v17; // s8
  struct UILabel_o *mTitleLevelLb; // x8
  UnityEngine_Object_o *v19; // x20
  int mWidth; // s8
  float klass_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_4A580CC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A580CC = 1;
  }
  mTitleLevelRoot = this->fields.mTitleLevelRoot;
  IsNullOrEmpty = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(recommendLv, 0LL);
  if ( !mTitleLevelRoot )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(mTitleLevelRoot, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0LL);
  IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelRoot;
  if ( !IsNullOrEmpty )
    goto LABEL_37;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)IsNullOrEmpty, 0LL) )
  {
    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
    if ( !IsNullOrEmpty )
      goto LABEL_37;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         IsNullOrEmpty,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_37;
      CondensedScaleSprite__Init((CondensedScaleSprite_o *)Component_object, 0LL);
    }
    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelLb;
    if ( IsNullOrEmpty )
    {
      UILabel__set_text((UILabel_o *)IsNullOrEmpty, recommendLv, 0LL);
      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelLb;
      if ( IsNullOrEmpty )
      {
        v23.fields.r = r;
        v23.fields.g = g;
        v23.fields.b = b;
        v23.fields.a = a;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v23, 0LL);
        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
        if ( IsNullOrEmpty )
        {
          v24.fields.r = r;
          v24.fields.g = g;
          v24.fields.b = b;
          v24.fields.a = a;
          UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v24, 0LL);
          IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp;
          if ( IsNullOrEmpty )
          {
            v25.fields.r = r;
            v25.fields.g = g;
            v25.fields.b = b;
            v25.fields.a = a;
            UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v25, 0LL);
            IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
            if ( IsNullOrEmpty )
            {
              IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
              if ( this->fields.mTitleLevelStrSp )
              {
                v14 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
                IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp,
                                                             0LL);
                if ( IsNullOrEmpty )
                {
                  LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)IsNullOrEmpty,
                                                 0LL);
                  GameObjectExtensions__SetLocalPositionX(v14, v15, 0LL);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0LL,
                                                               0LL);
                  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                  {
                    if ( Component_object )
                    {
                      v16 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0LL);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v17 = (float)(SLODWORD(IsNullOrEmpty[7].klass) / 2) + (float)(v16 * -0.5);
LABEL_36:
                        gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
                        GameObjectExtensions__AddLocalPositionX(gameObject, v17, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelLb;
                    if ( IsNullOrEmpty )
                    {
                      IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                   IsNullOrEmpty,
                                                                   (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      mTitleLevelLb = this->fields.mTitleLevelLb;
                      if ( mTitleLevelLb )
                      {
                        v19 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = mTitleLevelLb->fields.mWidth;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        klass_low = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v19 )
                            goto LABEL_37;
                          if ( klass_low > (float)SLODWORD(v19[2].klass) )
                            klass_low = (float)SLODWORD(v19[2].klass);
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v17 = klass_low * -0.5;
                          goto LABEL_36;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_1B8880C(IsNullOrEmpty, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mOptionRestrinctionSp; // x0
  UILabel_o *mOptionRestrinctionLb; // x22
  struct UILabel_o *v9; // x8
  RestrictionBaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A58098 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58098 = 1;
  }
  entity = 0LL;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionSp;
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mOptionRestrinctionSp, 0LL);
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionRestrinctionSp, 0, 0LL);
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  UILabel__set_maxLineCount((UILabel_o *)mOptionRestrinctionSp, 1, 0LL);
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)mOptionRestrinctionSp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)RestrictionBaseMaster__TryGetEntity(
                                                       (RestrictionBaseMaster_o *)mOptionRestrinctionSp,
                                                       &entity,
                                                       questId,
                                                       phase,
                                                       0LL);
  if ( ((unsigned __int8)mOptionRestrinctionSp & 1) != 0 )
    goto LABEL_15;
  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mOptionRestrinctionSp
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)mOptionRestrinctionSp,
                                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)QuestRestrictionMaster__GetRestrictionName(
                                                             (QuestRestrictionMaster_o *)mOptionRestrinctionSp,
                                                             questId,
                                                             phase,
                                                             0LL),
        !mOptionRestrinctionLb) )
  {
LABEL_17:
    sub_1B8880C(mOptionRestrinctionSp, *(_QWORD *)&questId);
  }
  UILabel__set_text(mOptionRestrinctionLb, (System_String_o *)mOptionRestrinctionSp, 0LL);
LABEL_15:
  v9 = this->fields.mOptionRestrinctionLb;
  if ( !v9 )
    goto LABEL_17;
  return !System_String__IsNullOrEmpty(v9->fields.mText, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
        QuestBoardListViewItemDraw_o *this,
        int32_t spacingX,
        const MethodInfo *method)
{
  UILabel_o *mOptionRestrinctionLb; // x0

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionLb
    || (UILabel__set_spacingX(mOptionRestrinctionLb, spacingX, 0LL),
        (mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb) == 0LL) )
  {
    sub_1B8880C(mOptionRestrinctionLb, *(_QWORD *)&spacingX);
  }
  UILabel__ProcessText(mOptionRestrinctionLb, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetRewardIconAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x8
  ItemIconComponent_o *mRewardIcon; // x0

  mRewardIconInfs = this->fields.mRewardIconInfs;
  if ( mRewardIconInfs && (int)mRewardIconInfs->max_length >= 2 )
  {
    mRewardIcon = this->fields.mRewardIcon;
    if ( !mRewardIcon )
      sub_1B8880C(0LL, method);
    ItemIconComponent__SetAlpha(mRewardIcon, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetStatusActive(
        QuestBoardListViewItemDraw_o *this,
        int32_t status,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *StatusSp; // x0
  __int64 v6; // x1

  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, status, (const MethodInfo *)isActive);
  if ( !StatusSp || (StatusSp = UnityEngine_GameObject__get_gameObject(StatusSp, 0LL)) == 0LL )
    sub_1B8880C(StatusSp, v6);
  UnityEngine_GameObject__SetActive(StatusSp, isActive, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetStatusToggle(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *StatusSp; // x0
  QuestBoardListViewManager_c *v5; // x1
  Il2CppObject *Component_object; // x19
  const MethodInfo *v7; // x2
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  TimeSyncAlphaSwitcher_o *v9; // x20
  __int64 methodPtr_low; // x9
  float v11; // s8
  QuestBoardListViewItemDraw_o *v12; // x0
  MapControl_QuestInfo_o *v13; // x1
  QuestEntity_o *v14; // x2
  int64_t v15; // x3
  const MethodInfo *v16; // x4

  if ( (byte_4A580AC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    byte_4A580AC = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       StatusSp,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v7);
  if ( !StatusSp )
    goto LABEL_12;
  StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                           StatusSp,
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_12;
  v9 = (TimeSyncAlphaSwitcher_o *)StatusSp;
  StatusSp = (UnityEngine_GameObject_o *)mListViewObject->fields.manager;
  if ( !StatusSp )
    goto LABEL_12;
  v5 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(StatusSp->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (QuestBoardListViewManager_c *)StatusSp->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewManager_TypeInfo )
  {
    if ( Component_object )
    {
      v11 = *(float *)&StatusSp[24].fields.m_CachedPtr;
      TimeSyncAlphaSwitcher__SetAlphaBlink((TimeSyncAlphaSwitcher_o *)Component_object, 2, 0, v11, 0LL);
      if ( v9 )
      {
        TimeSyncAlphaSwitcher__SetAlphaBlink(v9, 2, 1, v11, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B8880C(StatusSp, v5);
  }
  sub_1B88ACC(StatusSp);
  QuestBoardListViewItemDraw__SetAdvanceNoticeText(v12, v13, v14, v15, v16);
}


void __fastcall QuestBoardListViewItemDraw__SetupBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x23
  struct BannerEntity_array *bannerEntList; // x24
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  QuestBoardListViewItemDraw_o *v7; // x19
  signed int max_length; // w8
  struct TerminalBannerComponent_array *v9; // x8
  __int64 v10; // x20
  int v11; // w25
  unsigned int v12; // w9
  UnityEngine_Component_o *v13; // x21
  unsigned int v14; // w10
  TerminalBannerComponent_o *v15; // x22
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  int mBannerCount; // w20
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  struct UISprite_array *mBannerPointSps; // x8
  int v22; // w9
  int v23; // w20
  int32_t v24; // w21

  if ( !questBoardItem )
    goto LABEL_45;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_45;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_45;
  bannerEntList = AreaBoardInfo_k__BackingField->fields.bannerEntList;
  if ( !bannerEntList )
    goto LABEL_45;
  mTerminalBanners = this->fields.mTerminalBanners;
  v7 = this;
  if ( !mTerminalBanners )
    goto LABEL_45;
  max_length = mTerminalBanners->max_length;
  this = (QuestBoardListViewItemDraw_o *)this->fields.mBannerRoot;
  if ( (signed int)bannerEntList->max_length < max_length )
    max_length = bannerEntList->max_length;
  v7->fields.mBannerCount = max_length;
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v7->fields.mTerminalBanners;
  if ( !v9 )
    goto LABEL_45;
  v10 = 0LL;
  v11 = v9->max_length & ~((int)v9->max_length >> 31);
  while ( v11 != (_DWORD)v10 )
  {
    v12 = v9->max_length;
    if ( (unsigned int)v10 >= v12 )
      goto LABEL_46;
    v13 = (UnityEngine_Component_o *)v9->m_Items[v10];
    v14 = v10 + 1;
    if ( (int)v10 + 1 >= v7->fields.mBannerCount )
    {
      v15 = 0LL;
    }
    else
    {
      if ( v14 >= v12 )
        goto LABEL_46;
      v15 = v9->m_Items[v14];
    }
    if ( v13 )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v10 < v7->fields.mBannerCount, 0LL);
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
        if ( this )
        {
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__get_activeSelf(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( (unsigned int)v10 >= bannerEntList->max_length )
              goto LABEL_46;
            TerminalBannerComponent__Setup(
              (TerminalBannerComponent_o *)v13,
              v10,
              bannerEntList->m_Items[v10],
              v7->fields.mBannerCount,
              v15,
              0LL);
          }
          v9 = v7->fields.mTerminalBanners;
          ++v10;
          if ( v9 )
            continue;
        }
      }
    }
    goto LABEL_45;
  }
  if ( !v9->max_length )
LABEL_46:
    sub_1B88814(this, questBoardItem);
  this = (QuestBoardListViewItemDraw_o *)v9->m_Items[0];
  if ( !this )
    goto LABEL_45;
  TerminalBannerComponent__StartLoadAndDisp((TerminalBannerComponent_o *)this, 0LL);
  QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(v7, v16);
  QuestBoardListViewItemDraw__SetupEntryBanner(v7, v17);
  AreaBoardInfo_k__BackingField->fields.bannerFocusIndex = 0;
  this = (QuestBoardListViewItemDraw_o *)v7->fields.mBannerArrowObj;
  v7->fields.mIsEnableBannerAutoMoveOld = 0;
  if ( !this )
    goto LABEL_45;
  mBannerCount = v7->fields.mBannerCount;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, mBannerCount > 1, 0LL);
  if ( mBannerCount >= 2 )
    QuestBoardListViewItemDraw__SetDispBannerArrows(v7, 0, 1, v19);
  this = (QuestBoardListViewItemDraw_o *)v7->fields.mBannerPointGrid;
  if ( !this )
    goto LABEL_45;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, mBannerCount > 1, 0LL);
  if ( mBannerCount >= 2 )
  {
    mBannerPointSps = v7->fields.mBannerPointSps;
    if ( mBannerPointSps )
    {
      v22 = mBannerPointSps->max_length;
      v23 = v22 - 1;
      if ( v22 >= 1 )
      {
        v24 = 0;
        while ( v24 < mBannerPointSps->max_length )
        {
          this = (QuestBoardListViewItemDraw_o *)mBannerPointSps->m_Items[v24];
          if ( this )
          {
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v24 < v7->fields.mBannerCount, 0LL);
              if ( v23 == v24 )
                goto LABEL_42;
              mBannerPointSps = v7->fields.mBannerPointSps;
              ++v24;
              if ( mBannerPointSps )
                continue;
            }
          }
          goto LABEL_45;
        }
        goto LABEL_46;
      }
LABEL_42:
      this = (QuestBoardListViewItemDraw_o *)v7->fields.mBannerPointGrid;
      if ( this )
      {
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, Il2CppClass *))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType);
        goto LABEL_44;
      }
    }
LABEL_45:
    sub_1B8880C(this, questBoardItem);
  }
LABEL_44:
  QuestBoardListViewItemDraw__UpdateDispBannerPoint(v7, 0, v20);
}


void __fastcall QuestBoardListViewItemDraw__SetupEntryBanner(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v2; // x19
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v4; // x20
  QuestBoardListViewItemDraw_o *v5; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v7; // x21
  TerminalPramsManager_c *v8; // x0
  QuestBoardListViewItemDraw_c *v9; // x0

  v2 = this;
  if ( (byte_4A580C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A580C2 = 1;
  }
  mTerminalBanners = v2->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_35;
  if ( !mTerminalBanners->max_length )
    sub_1B88814(this, method);
  v4 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4 )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      if ( this )
      {
        v5 = this;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Component_object, 0LL);
        }
        v7 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v5,
               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v7, 0LL);
        }
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A580D3 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A580D3 = 1;
        }
        v8 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v8 = TerminalPramsManager_TypeInfo;
        }
        if ( v8->static_fields->_IsPlayedEntryBanner_k__BackingField )
        {
          v2->fields._bannerState_k__BackingField = 2;
          return;
        }
        v2->fields._bannerState_k__BackingField = 1;
        v9 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v9 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(
          (UnityEngine_GameObject_o *)v5,
          v9->static_fields->BANNER_ENTORY_START_POS_X,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v5,
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( this )
        {
          ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
            this,
            this->klass[1]._1.declaringType,
            0.0);
          return;
        }
      }
    }
LABEL_35:
    sub_1B8880C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetupRewardDisp(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        bool isContainPhasePresent,
        QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData,
        int32_t afterClearType,
        UnityEngine_Color_o color,
        bool isRepeatReward,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  clsQuestCheck_o *Instance; // x0
  bool v19; // w23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  QuestBoardListViewItemDraw_c *v23; // x0
  int32_t phase; // w9
  System_String_o *QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x20
  Il2CppObject *v26; // x0
  System_String_o *v27; // x20
  int32_t v28; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A580A2 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A580A2 = 1;
  }
  if ( afterClearType == 3 )
  {
    Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    v19 = !clsQuestCheck__IsQuestClear(Instance, questId, 0, 0LL);
    if ( !isContainPhasePresent )
    {
LABEL_6:
      Instance = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
      if ( !Instance )
        goto LABEL_37;
      Instance = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v19 && !isRepeatReward, 0LL);
      Instance = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
      if ( !Instance )
        goto LABEL_37;
      v29.fields.r = r;
      v29.fields.g = g;
      v29.fields.b = b;
      v29.fields.a = a;
      UIWidget__set_color((UIWidget_o *)Instance, v29, 0LL);
      Instance = (clsQuestCheck_o *)this->fields.mRewardPhaseSP;
      if ( !Instance )
        goto LABEL_37;
      Instance = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = (clsQuestCheck_o *)this->fields.mRewardQuestSP;
      if ( !Instance )
        goto LABEL_37;
      goto LABEL_35;
    }
  }
  else
  {
    v19 = 0;
    if ( !isContainPhasePresent )
      goto LABEL_6;
  }
  if ( phasePresentData )
  {
    Instance = (clsQuestCheck_o *)this->fields.mRewardPhaseSP;
    if ( Instance )
    {
      Instance = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (clsQuestCheck_o *)this->fields.mRewardPhaseSP;
        if ( Instance )
        {
          v30.fields.r = r;
          v30.fields.g = g;
          v30.fields.b = b;
          v30.fields.a = a;
          UIWidget__set_color((UIWidget_o *)Instance, v30, 0LL);
          v23 = QuestBoardListViewItemDraw_TypeInfo;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v23 = QuestBoardListViewItemDraw_TypeInfo;
          }
          phase = phasePresentData->fields.phase;
          QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = v23->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
          v28 = phase;
          v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20, v21, v22);
          Instance = (clsQuestCheck_o *)System_String__Format(QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v26, 0LL);
          if ( this->fields.mRewardPhaseNumSP )
          {
            v27 = (System_String_o *)Instance;
            UISprite__set_atlas(this->fields.mRewardPhaseNumSP, this->fields.mTerminalAtlas, 0LL);
            Instance = (clsQuestCheck_o *)this->fields.mRewardPhaseNumSP;
            if ( Instance )
            {
              UISprite__set_spriteName((UISprite_o *)Instance, v27, 0LL);
              Instance = (clsQuestCheck_o *)this->fields.mRewardPhaseNumSP;
              if ( Instance )
              {
                v31.fields.r = r;
                v31.fields.g = g;
                v31.fields.b = b;
                v31.fields.a = a;
                UIWidget__set_color((UIWidget_o *)Instance, v31, 0LL);
                Instance = (clsQuestCheck_o *)this->fields.mRewardPhaseNumSP;
                if ( Instance )
                {
                  ((void (__fastcall *)(clsQuestCheck_o *, Il2CppClass *))Instance->klass[2]._1.castClass)(
                    Instance,
                    Instance->klass[2]._1.declaringType);
                  Instance = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
                  if ( Instance )
                  {
                    Instance = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Instance,
                                                    0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      Instance = (clsQuestCheck_o *)this->fields.mRewardQuestSP;
                      if ( Instance )
                      {
                        Instance = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                        if ( Instance )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_1B8880C(Instance, *(_QWORD *)&questId);
  }
  Instance = (clsQuestCheck_o *)this->fields.mRewardQuestSP;
  if ( !Instance )
    goto LABEL_37;
  Instance = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (clsQuestCheck_o *)this->fields.mRewardQuestSP;
  if ( !Instance )
    goto LABEL_37;
  v32.fields.r = r;
  v32.fields.g = g;
  v32.fields.b = b;
  v32.fields.a = a;
  UIWidget__set_color((UIWidget_o *)Instance, v32, 0LL);
  Instance = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
  if ( !Instance )
    goto LABEL_37;
  Instance = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (clsQuestCheck_o *)this->fields.mRewardPhaseSP;
  if ( !Instance )
    goto LABEL_37;
LABEL_35:
  Instance = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        UserQuestEntity_o *userQuestEnt,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  QuestBoardListViewItemDraw_o *v11; // x19
  int32_t questId; // w22
  bool IsDisplayRewardNotGive; // w20
  char v14; // w22
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v11 = this;
  if ( (byte_4A580A3 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A580A3 = 1;
  }
  if ( !questInfo )
    goto LABEL_16;
  questId = questInfo->fields.questId;
  IsDisplayRewardNotGive = QuestBoardListViewItemDraw__IsDisplayRewardNotGive(
                             this,
                             questInfo,
                             (const MethodInfo *)userQuestEnt);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)CondType__IsQuestClear_37596684(questId, -1, 0, 0LL);
  v14 = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !userQuestEnt )
      goto LABEL_16;
    v14 = (IsDisplayRewardNotGive | UserQuestEntity__HasStatus(userQuestEnt, 4, 0LL)) ^ 1;
  }
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRewardGetSP;
  if ( !this )
    goto LABEL_16;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14 & 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRewardGetSP;
  if ( !this )
    goto LABEL_16;
  v15.fields.r = r;
  v15.fields.g = g;
  v15.fields.b = b;
  v15.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v15, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRewardNotGetSP;
  if ( !this
    || (this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsDisplayRewardNotGive, 0LL),
        (this = (QuestBoardListViewItemDraw_o *)v11->fields.mRewardNotGetSP) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(this, questInfo);
  }
  v16.fields.b = b;
  v16.fields.a = a;
  v16.fields.r = r;
  v16.fields.g = g;
  UIWidget__set_color((UIWidget_o *)this, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetupRewardIconDisp(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData,
        bool isClosed,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 giftIconId; // x1
  UnityEngine_Component_o *mRewardIcon; // x0
  int32_t *p_giftId; // x8
  int32_t v17; // w25
  bool v18; // w1
  GiftMaster_o *v19; // x24
  System_Collections_Generic_IEnumerable_TSource__o *GiftListById; // x23
  QuestBoardListViewItemDraw___c_c *v21; // x8
  System_Func_object__bool__o *_9__327_0; // x26
  Il2CppObject *v23; // x27
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  char v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Object_array *v28; // x23
  __int64 v29; // x25
  int32_t v30; // w2
  char v31; // w3
  System_Func_object__bool__o *v32; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  int giftId; // w1
  GiftEntity_array *v35; // x0
  QuestBoardListViewItemDraw___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x21
  System_Func_object__bool__o *_9__327_1; // x22
  Il2CppObject *v39; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v40; // x0
  int32_t v41; // w2
  char v42; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x10
  Il2CppObject *v46; // x8
  int monitor_high; // w9
  int32_t v48; // w2
  bool v49; // w1
  int32_t v50; // w3
  int32_t v51; // w2
  char v52; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A5809F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1B885B0(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__327_0__);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__327_1__);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass327_0__SetupRewardIconDisp_b__2__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass327_0_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4A5809F = 1;
  }
  entity = 0LL;
  this->fields.mRewardIconInfs = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs,
    0,
    (int32_t)phasePresentData,
    isClosed);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_84;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
  if ( !mRewardIcon )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 0, 0LL);
  if ( phasePresentData )
  {
    p_giftId = &phasePresentData->fields.giftId;
  }
  else
  {
    if ( !questEnt )
      goto LABEL_84;
    p_giftId = &questEnt->fields.giftId;
  }
  v17 = *p_giftId;
  if ( isClosed )
  {
    if ( !questEnt )
      goto LABEL_84;
    mRewardIcon = (UnityEngine_Component_o *)QuestEntity__HasFlag(questEnt, 4096LL, 0LL);
    if ( ((unsigned __int8)mRewardIcon & 1) != 0 )
    {
      mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
      if ( !mRewardIcon )
        goto LABEL_84;
      LODWORD(giftIconId) = 99;
      goto LABEL_20;
    }
  }
  if ( phasePresentData )
  {
    giftIconId = (unsigned int)phasePresentData->fields.giftIconId;
  }
  else
  {
    if ( !questEnt )
      goto LABEL_84;
    giftIconId = (unsigned int)questEnt->fields.giftIconId;
  }
  if ( (int)giftIconId < 1 )
  {
    if ( v17 < 1 )
    {
      mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
      if ( !mRewardIcon )
        goto LABEL_84;
      v18 = 0;
      goto LABEL_23;
    }
    mRewardIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mRewardIcon )
      goto LABEL_84;
    mRewardIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)mRewardIcon,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !mRewardIcon )
      goto LABEL_84;
    v19 = (GiftMaster_o *)mRewardIcon;
    GiftListById = (System_Collections_Generic_IEnumerable_TSource__o *)GiftMaster__GetGiftListById(
                                                                          (GiftMaster_o *)mRewardIcon,
                                                                          v17,
                                                                          0LL);
    v21 = QuestBoardListViewItemDraw___c_TypeInfo;
    if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
      v21 = QuestBoardListViewItemDraw___c_TypeInfo;
    }
    _9__327_0 = (System_Func_object__bool__o *)v21->static_fields->__9__327_0;
    if ( !_9__327_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__327_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__327_0,
        v23,
        Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__327_0__,
        0LL);
      static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__327_0 = (struct System_Func_GiftEntity__bool__o *)_9__327_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__327_0, (int32_t)_9__327_0, v25, v26);
    }
    v27 = System_Linq_Enumerable__Where_object_(
            GiftListById,
            (System_Func_TSource__bool__o *)_9__327_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    v28 = System_Linq_Enumerable__ToArray_object_(
            v27,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    mRewardIcon = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftDetailMaster___);
    if ( !mRewardIcon )
      goto LABEL_84;
    mRewardIcon = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)mRewardIcon,
                                               &entity,
                                               v17,
                                               (const MethodInfo_311D988 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    if ( v28 && ((unsigned __int8)mRewardIcon & 1) != 0 )
    {
      v29 = sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass327_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass327_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass327_0_o *)v29,
        0LL);
      mRewardIcon = (UnityEngine_Component_o *)entity;
      if ( !entity )
        goto LABEL_84;
      mRewardIcon = (UnityEngine_Component_o *)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
                                                 (GiftDetailEntity_o *)entity,
                                                 0LL);
      if ( !v29 )
        goto LABEL_84;
      *(_QWORD *)(v29 + 16) = mRewardIcon;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)mRewardIcon, v30, v31);
      mRewardIcon = (UnityEngine_Component_o *)BasicHelper__IsNullOrEmpty(
                                                 *(System_Collections_ICollection_o **)(v29 + 16),
                                                 0LL);
      if ( ((unsigned __int8)mRewardIcon & 1) != 0 )
      {
LABEL_47:
        if ( !phasePresentData || *(_QWORD *)&v28->max_length )
          goto LABEL_89;
        if ( questEnt )
        {
          giftId = questEnt->fields.giftId;
          if ( giftId < 1 )
            goto LABEL_89;
          v35 = GiftMaster__GetGiftListById(v19, giftId, 0LL);
          v36 = QuestBoardListViewItemDraw___c_TypeInfo;
          v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
          if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
            v36 = QuestBoardListViewItemDraw___c_TypeInfo;
          }
          _9__327_1 = (System_Func_object__bool__o *)v36->static_fields->__9__327_1;
          if ( !_9__327_1 )
          {
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            v39 = (Il2CppObject *)v36->static_fields->__9;
            _9__327_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__327_1,
              v39,
              Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__327_1__,
              0LL);
            v40 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
            v40->__9__327_1 = (struct System_Func_GiftEntity__bool__o *)_9__327_1;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v40->__9__327_1, (int32_t)_9__327_1, v41, v42);
          }
          v43 = System_Linq_Enumerable__Where_object_(
                  v37,
                  (System_Func_TSource__bool__o *)_9__327_1,
                  (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
          mRewardIcon = (UnityEngine_Component_o *)System_Linq_Enumerable__ToArray_object_(
                                                     v43,
                                                     (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
          v28 = (System_Object_array *)mRewardIcon;
          if ( mRewardIcon )
          {
LABEL_89:
            giftIconId = *(_QWORD *)&v28->max_length;
            if ( !giftIconId )
            {
              mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
              if ( !mRewardIcon )
                goto LABEL_84;
              v49 = 0;
              goto LABEL_83;
            }
            mListViewObject = this->fields.mListViewObject;
            if ( mListViewObject )
            {
              mRewardIcon = (UnityEngine_Component_o *)mListViewObject->fields.manager;
              if ( mRewardIcon )
              {
                methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(mRewardIcon->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
                  && (QuestBoardListViewManager_c *)mRewardIcon->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewManager_TypeInfo )
                {
                  mRewardIcon = (UnityEngine_Component_o *)QuestBoardListViewManager__GetAlphaAnimCnt(
                                                             (QuestBoardListViewManager_o *)mRewardIcon,
                                                             giftIconId,
                                                             0LL);
                  if ( (unsigned int)mRewardIcon < v28->max_length )
                  {
                    v46 = v28->m_Items[(int)mRewardIcon];
                    if ( !v46 )
                      goto LABEL_84;
                    giftIconId = HIDWORD(v46[2].monitor);
                    mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
                    monitor_high = HIDWORD(v46[1].monitor);
                    if ( (int)giftIconId < 1 )
                    {
                      if ( !mRewardIcon )
                        goto LABEL_84;
                      if ( monitor_high <= 1 )
                        v50 = -1;
                      else
                        v50 = HIDWORD(v46[1].monitor);
                      ItemIconComponent__SetGift_38144896(
                        (ItemIconComponent_o *)mRewardIcon,
                        HIDWORD(v46[1].klass),
                        (int32_t)v46[1].monitor,
                        v50,
                        1,
                        0LL);
                    }
                    else
                    {
                      if ( !mRewardIcon )
                        goto LABEL_84;
                      if ( monitor_high <= 1 )
                        v48 = -1;
                      else
                        v48 = HIDWORD(v46[1].monitor);
                      ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)mRewardIcon, giftIconId, v48, 0LL);
                    }
                    mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
                    if ( mRewardIcon )
                    {
                      mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
                      if ( mRewardIcon )
                      {
                        v49 = 1;
LABEL_83:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, v49, 0LL);
                        this->fields.mRewardIconInfs = (struct GiftEntity_array *)v28;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs,
                          (int32_t)v28,
                          v51,
                          v52);
                        goto LABEL_24;
                      }
                    }
                    goto LABEL_84;
                  }
                }
                else
                {
                  sub_1B88ACC(mRewardIcon);
                }
                sub_1B88814(mRewardIcon, giftIconId);
              }
            }
          }
        }
LABEL_84:
        sub_1B8880C(mRewardIcon, giftIconId);
      }
      v32 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v32,
        (Il2CppObject *)v29,
        Method_QuestBoardListViewItemDraw___c__DisplayClass327_0__SetupRewardIconDisp_b__2__,
        0LL);
      v33 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v28,
              (System_Func_TSource__bool__o *)v32,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      mRewardIcon = (UnityEngine_Component_o *)System_Linq_Enumerable__ToArray_object_(
                                                 v33,
                                                 (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v28 = (System_Object_array *)mRewardIcon;
    }
    if ( !v28 )
      goto LABEL_84;
    goto LABEL_47;
  }
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_84;
LABEL_20:
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)mRewardIcon, giftIconId, 0LL);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_84;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
  if ( !mRewardIcon )
    goto LABEL_84;
  v18 = 1;
LABEL_23:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, v18, 0LL);
LABEL_24:
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
  if ( !mRewardIcon )
    goto LABEL_84;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)mRewardIcon,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !mRewardIcon )
    goto LABEL_84;
  v54.fields.r = r;
  v54.fields.g = g;
  v54.fields.b = b;
  v54.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardIcon, v54, 0LL);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_84;
  v55.fields.r = r;
  v55.fields.g = g;
  v55.fields.b = b;
  v55.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)mRewardIcon, v55, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__StartEntryBanner(
        QuestBoardListViewItemDraw_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x20
  Il2CppObject *v15; // x21
  int v16; // s0
  int v17; // s1
  int v18; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  QuestBoardListViewItemDraw_c *v21; // x0
  float BANNER_ENTORY_EFFECT_DURATION; // s0
  EventDelegate_Callback_o *v23; // x22
  float v24; // s0

  if ( (byte_4A580C3 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass378_0__StartEntryBanner_b__0__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass378_0_TypeInfo);
    byte_4A580C3 = 1;
  }
  v5 = sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass378_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass378_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass378_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)endCallback, v10, v11);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A580D3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A580D3 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 169LL) )
    goto LABEL_16;
  mTerminalBanners = this->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_26;
  if ( !mTerminalBanners->max_length )
    sub_1B88814(gameObject, v7);
  v13 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
LABEL_16:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
    return;
  }
  if ( !v13 )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v14 = gameObject;
  v15 = UnityEngine_GameObject__AddComponent_object_(
          gameObject,
          (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v16 = GameObjectExtensions__GetLocalPosition(v14, 0LL);
  if ( !v15 )
    goto LABEL_26;
  LODWORD(v15[8].klass) = v16;
  HIDWORD(v15[8].klass) = v17;
  LODWORD(v15[8].monitor) = v18;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(void **)((char *)&v15[8].monitor + 4) = *(void **)&static_fields->zeroVector.fields.x;
  *((float *)&v15[9].klass + 1) = z;
  v21 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v21 = QuestBoardListViewItemDraw_TypeInfo;
  }
  BANNER_ENTORY_EFFECT_DURATION = v21->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v15[2].klass) = 2;
  *(float *)&v15[3].monitor = BANNER_ENTORY_EFFECT_DURATION;
  v23 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass378_0__StartEntryBanner_b__0__,
    0LL);
  UITweener__SetOnFinished((UITweener_o *)v15, v23, 0LL);
  UITweener__PlayForward((UITweener_o *)v15, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             v14,
                                             (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gameObject )
LABEL_26:
    sub_1B8880C(gameObject, v7);
  gameObject[5].monitor = (void *)0x3F80000000000000LL;
  v24 = QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(gameObject[1].monitor) = 3;
  *(float *)&gameObject[2].monitor = v24;
  UITweener__PlayForward((UITweener_o *)gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__UpdateDispBannerPoint(
        QuestBoardListViewItemDraw_o *this,
        int32_t index,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v4; // x19
  __int64 v5; // x21
  int32_t v6; // w23
  struct UISprite_array *mBannerPointSps; // x8
  UISprite_o *v8; // x20
  __int64 v9; // x9

  v4 = this;
  if ( (byte_4A580C5 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580C5 = 1;
  }
  if ( v4->fields.mBannerCount >= 1 )
  {
    v5 = 0LL;
    v6 = index;
    do
    {
      mBannerPointSps = v4->fields.mBannerPointSps;
      if ( !mBannerPointSps )
        goto LABEL_15;
      if ( (unsigned int)v5 >= mBannerPointSps->max_length )
        sub_1B88814(this, *(_QWORD *)&index);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v8 = mBannerPointSps->m_Items[v5];
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !v8 )
LABEL_15:
        sub_1B8880C(this, *(_QWORD *)&index);
      if ( v6 == (_DWORD)v5 )
        v9 = 848LL;
      else
        v9 = 856LL;
      UISprite__set_spriteName(
        v8,
        *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v9),
        0LL);
      ++v5;
    }
    while ( (int)v5 < v4->fields.mBannerCount );
  }
}


void __fastcall QuestBoardListViewItemDraw__UpdateInfoText(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t strIndex,
        int64_t checkTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mInfoTextList; // x0

  if ( (byte_4A5808F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4A5808F = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0LL )
  {
    sub_1B8880C(mInfoTextList, questBoardItem);
  }
  QuestBoardInformationText__Update(
    (QuestBoardInformationText_o *)mInfoTextList,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    checkTime,
    0LL);
}


void __fastcall QuestBoardListViewItemDraw__UpdateItem(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        QuestBoardListViewManager_o *qmanager,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    if ( !qmanager )
      sub_1B8880C(this, questBoardItem);
    QuestBoardListViewItemDraw__SetInfoTextAlpha(
      this,
      qmanager->fields.mAlphaAnimNow,
      (const MethodInfo *)questBoardItem);
    QuestBoardListViewItemDraw__SetRewardIconAlpha(this, qmanager->fields.mAlphaAnimNow, v8);
    QuestBoardListViewItemDraw__SetEventTargetAlpha(this, qmanager->fields.mAlphaAnimNow, v9);
    if ( qmanager->fields.mResetConsumeColor )
      QuestBoardListViewItemDraw__ResetQuest(this, questBoardItem, v10);
    QuestBoardListViewItemDraw__UpdateTouch(this, qmanager, v10);
  }
}


void __fastcall QuestBoardListViewItemDraw__UpdateTouch(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v4; // x19
  UnityEngine_Camera_o *mUICamera; // x20
  UnityEngine_Vector2_o ScreenPosition_46566088; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  v4 = this;
  if ( (byte_4A580C8 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1B885B0(&CTouch_TypeInfo);
    byte_4A580C8 = 1;
  }
  if ( v4->fields.mIsPressedForDragX )
  {
    v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_1B8880C(this, questBoardManager);
    mUICamera = questBoardManager->fields.mUICamera;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_46566088 = CTouch__getScreenPosition_46566088(mUICamera, 0LL);
    mIsEnableDragX = v4->fields.mIsEnableDragX;
    v4->fields.mTouchPosNow = ScreenPosition_46566088;
    if ( mIsEnableDragX )
      v4->fields.mTouchPosDif = ScreenPosition_46566088.fields.x - v4->fields.mTouchPosOld.fields.x;
  }
}


void __fastcall QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_328_0(
        UILabel_o *label,
        System_String_o *message,
        int32_t baseHeight,
        int32_t indent,
        const MethodInfo *method)
{
  UILabel_o *v8; // x20
  int mHeight; // w22
  QuestBoardListViewItemDraw_c *v10; // x0
  UnityEngine_Transform_o *transform; // x21
  float v12; // s0
  float v13; // s1
  float v14; // s2
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v8 = label;
  if ( (byte_4A580D0 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580D0 = 1;
  }
  if ( !v8 )
    goto LABEL_11;
  UILabel__set_text(v8, message, 0LL);
  UILabel__AssumeNaturalSize(v8, 0LL);
  mHeight = v8->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v8, baseHeight, 0LL);
  v10 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v10 = QuestBoardListViewItemDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v8, v10->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  if ( !label
    || (LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_11:
    sub_1B8880C(label, message);
  }
  v13 = 1.0 - (float)((float)baseHeight / (float)mHeight);
  v14 = fminf(v13, 1.0);
  if ( v13 < 0.0 )
    v14 = 0.0;
  v15.fields.y = 1.0;
  v15.fields.x = v14 + v12;
  v15.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v15, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__get_IsDummy(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.isDummy;
}


bool __fastcall QuestBoardListViewItemDraw__get_IsEnableDragX(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.mIsEnableDragX;
}


bool __fastcall QuestBoardListViewItemDraw__get_IsPressed(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.mIsPressed;
}


bool __fastcall QuestBoardListViewItemDraw__get_IsPressedForDragX(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.mIsPressedForDragX;
}


float __fastcall QuestBoardListViewItemDraw__get_TouchPosDif(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.mTouchPosDif;
}


int32_t __fastcall QuestBoardListViewItemDraw__get_bannerState(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields._bannerState_k__BackingField;
}


void __fastcall QuestBoardListViewItemDraw__setInfoShowing(
        QuestBoardListViewItemDraw_o *this,
        bool onOff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mQuestInfoShowing; // x0

  mQuestInfoShowing = this->fields.mQuestInfoShowing;
  if ( !mQuestInfoShowing )
    sub_1B8880C(0LL, onOff);
  UnityEngine_GameObject__SetActive(mQuestInfoShowing, onOff, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__set_bannerState(
        QuestBoardListViewItemDraw_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._bannerState_k__BackingField = value;
}


void __fastcall QuestBoardListViewItemDraw_PhasePresentData___ctor(
        QuestBoardListViewItemDraw_PhasePresentData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A580E6 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4A580E6 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestBoardListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestBoardListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewItemDraw___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestBoardListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall QuestBoardListViewItemDraw___c___ctor(QuestBoardListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c___IsValidSupportSelection_b__356_0(
        QuestBoardListViewItemDraw___c_o *this,
        RestrictionEntity_o *rest,
        const MethodInfo *method)
{
  if ( !rest )
    sub_1B8880C(this, 0LL);
  return rest->fields.type == 9;
}


int32_t __fastcall QuestBoardListViewItemDraw___c___SetItemOfQuest_b__315_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1B8880C(this, 0LL);
  return value->fields.enemyId;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__327_0(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B8880C(this, 0LL);
  return ent->fields.type != 15;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__327_1(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B8880C(this, 0LL);
  return ent->fields.type != 15;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass313_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass313_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass313_0___IsPurchasedByRarePrism_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass313_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass313_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *warEnt; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_4A580E7 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw___c__DisplayClass313_0_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A580E7 = 1;
  }
  if ( !quest )
    goto LABEL_13;
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_13;
  warEnt = v4->fields.warEnt;
  if ( !warEnt )
    goto LABEL_13;
  if ( WarInfo_k__BackingField->fields.warId != warEnt->fields.id )
    return 0;
  userQuestMst = v4->fields.userQuestMst;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (QuestBoardListViewItemDraw___c__DisplayClass313_0_o *)NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_13:
    sub_1B8880C(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(userQuestMst, (int64_t)this, quest->fields.questId, 0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass314_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass314_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass314_0___HasNewQuestInWar_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass314_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass314_0_o *v3; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8

  v3 = this;
  if ( this->fields.isMainInterlude )
  {
    if ( !quest
      || (this = (QuestBoardListViewItemDraw___c__DisplayClass314_0_o *)MapControl_QuestInfo__GetMine(quest, 0LL)) == 0LL )
    {
LABEL_11:
      sub_1B8880C(this, quest);
    }
    this = (QuestBoardListViewItemDraw___c__DisplayClass314_0_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 4LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
  }
  else if ( !quest )
  {
    goto LABEL_11;
  }
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_11;
  if ( WarInfo_k__BackingField->fields.warId == v3->fields.warId )
    return quest->fields.isNew;
  return 0;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass315_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass315_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass315_0___SetItemOfQuest_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass315_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass315_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass315_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass315_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass315_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass315_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_1B8880C(this, method);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass316_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass316_0___SetItemOfWarBoard_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass316_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_1B8880C(this, method);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass327_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass327_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass327_0___SetupRewardIconDisp_b__2(
        QuestBoardListViewItemDraw___c__DisplayClass327_0_o *this,
        GiftEntity_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Int32_array *itemIds; // x19
  System_Func_int__bool__o *v11; // x20

  if ( (byte_4A580E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewItemDraw___c__DisplayClass327_1__SetupRewardIconDisp_b__3__);
    sub_1B885B0(&QuestBoardListViewItemDraw___c__DisplayClass327_1_TypeInfo);
    byte_4A580E8 = 1;
  }
  v5 = sub_1B887FC(QuestBoardListViewItemDraw___c__DisplayClass327_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = info;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)info, v8, v9);
  itemIds = this->fields.itemIds;
  v11 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass327_1__SetupRewardIconDisp_b__3__,
    0LL);
  return !BasicHelper__Any_int__48671312(
            itemIds,
            (System_Func_T__bool__o *)v11,
            (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass327_1___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass327_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass327_1___SetupRewardIconDisp_b__3(
        QuestBoardListViewItemDraw___c__DisplayClass327_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct GiftEntity_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1B8880C(this, x);
  return info->fields.objectId == x;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass352_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass352_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass352_0___GetCampaignTextListByEventQuestMaster_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass352_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_1B8880C(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass352_1___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass352_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass352_1___GetCampaignTextListByEventQuestMaster_b__1(
        QuestBoardListViewItemDraw___c__DisplayClass352_1_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_1B8880C(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass354_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass354_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass354_0___CreateQuestBoardInformationText_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass354_0_o *this,
        UserOwnItemInfo_o *x,
        const MethodInfo *method)
{
  const MethodInfo_361AA4C *v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_Nullable_long__o v9; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v10; // 0:x0.16

  if ( (byte_4A580E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_long___ctor__);
    byte_4A580E9 = 1;
  }
  v10.fields.value = this->fields.checkTime;
  *(_QWORD *)&v10.fields.hasValue = &v9;
  *(_QWORD *)&v9.fields.hasValue = 0LL;
  v9.fields.value = 0LL;
  System_Nullable_long____ctor(v10, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_1B8880C(v6, v7);
  return !UserOwnItemInfo__IsExpired(x, v9, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass378_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass378_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass378_0___StartEntryBanner_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass378_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct QuestBoardListViewItemDraw_o *_4__this; // x8

  if ( (byte_4A580EA & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A580EA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58188 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58188 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(v3, method);
  _4__this->fields._bannerState_k__BackingField = 2;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass389_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass389_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass389_0___LoadBoardIconTexture_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass389_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass389_0_o *v4; // x19
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  QuestBoardListViewItemDraw_c *v8; // x0
  System_String_o *v9; // x19
  struct QuestBoardListViewItemDraw_o *v10; // x8
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct QuestBoardListViewItemDraw_o *v13; // x8
  struct QuestBoardListViewItemDraw_o *v14; // x8
  struct QuestBoardListViewItemDraw_o *v15; // x8
  AssetData_o *boardIconAssetData; // x21
  Il2CppObject *Object_object__48635516; // x0

  v4 = this;
  if ( (byte_4A580EB & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_16526/*"_alpha"*/);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A580EB = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)System_String__op_Inequality(
                                                                  v4->fields.loadBoardIconName,
                                                                  _4__this->fields.boardIconName,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v10 = v4->fields.__4__this;
    if ( v10 )
    {
      v10->fields.boardIconAssetData = assetData;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.boardIconAssetData, (int32_t)assetData, v6, v7);
      v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
      v12 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v12, v11, 0LL);
      v13 = v4->fields.__4__this;
      if ( v13 )
      {
        this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)v13->fields.boardIconTexture;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)((__int64 (__fastcall *)(QuestBoardListViewItemDraw___c__DisplayClass389_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                          this,
                                                                          v12,
                                                                          this->klass[1].vtable._3_ToString.methodPtr);
          v14 = v4->fields.__4__this;
          if ( v14 )
          {
            this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)v14->fields.boardIconAssetData;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)AssetData__GetObject_object__48635516(
                                                                              (AssetData_o *)this,
                                                                              v14->fields.boardIconName,
                                                                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
              if ( v12 )
              {
                UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)this, 0LL);
                v15 = v4->fields.__4__this;
                if ( v15 )
                {
                  boardIconAssetData = v15->fields.boardIconAssetData;
                  this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)System_String__Concat_61707032(
                                                                                  v15->fields.boardIconName,
                                                                                  (System_String_o *)StringLiteral_16526/*"_alpha"*/,
                                                                                  0LL);
                  if ( boardIconAssetData )
                  {
                    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                                boardIconAssetData,
                                                (System_String_o *)this,
                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
                    UnityEngine_Material__SetTexture(
                      v12,
                      (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
                      (UnityEngine_Texture_o *)Object_object__48635516,
                      0LL);
                    this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                      ActionExtensions__Call(v4->fields.callback, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B8880C(this, assetData);
  }
  v8 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v8 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v9 = System_String__Concat_61707032(
         v8->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
         v4->fields.loadBoardIconName,
         0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v9, 0LL);
}