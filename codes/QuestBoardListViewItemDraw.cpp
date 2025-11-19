void QuestBoardListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
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
  const MethodInfo *v16; // x3
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
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  CGThumbnailListItem_o *p_COST_BG_QP; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  QuestBoardListViewItemDraw_c *v34; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v35; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v36; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v37; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v38; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v39; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v40; // x9
  int32_t v41; // w1
  CGThumbnailListItem_o *p_SHOHI_SP_NAME; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  CGThumbnailListItem_o *p_SHOHI_SP_NAME_WAR_BOARD; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
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
  struct UnityEngine_Vector3_StaticFields *v61; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v62; // x11
  float v63; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v64; // x11
  struct QuestBoardListViewItemDraw_StaticFields *v65; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v66; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v67; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v68; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v69; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v70; // x10
  struct UnityEngine_Vector3_StaticFields *v71; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v72; // x10
  float v73; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v74; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v75; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v76; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v77; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v78; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v79; // x9
  int32_t v80; // w1
  CGThumbnailListItem_o *p_EVENT_WAR_SPNAME_PREFIX; // x0
  int32_t v82; // w1
  CGThumbnailListItem_o *p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  int32_t v86; // w1
  CGThumbnailListItem_o *p_QUEST_BOARD_SPNAME_PREFIX; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  int32_t v90; // w1
  CGThumbnailListItem_o *p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t v94; // w1
  CGThumbnailListItem_o *p_QUEST_BOARD_ICON_SPNAME_PREFIX; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int32_t v98; // w1
  CGThumbnailListItem_o *p_QUEST_BOARD_MASK_SPNAME_PREFIX; // x0
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t v102; // w1
  CGThumbnailListItem_o *p_QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  CGThumbnailListItem_o *p_QUEST_BOARD_AP_SPNAME_PREFIX; // x0
  int32_t v107; // w1
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  CGThumbnailListItem_o *p_QUEST_BOARD_DAMAGE_RECODE_NAME; // x0
  int32_t v111; // w1
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  CGThumbnailListItem_o *p_QUEST_BOARD_PREV_ICON_NAME; // x0
  int32_t v115; // w1
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  CGThumbnailListItem_o *p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x0
  int32_t v119; // w1
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  CGThumbnailListItem_o *p_QUEST_BOARD_ICON_TEXTURE_PATH; // x0
  int32_t v123; // w1
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  int32_t v126; // w1
  CGThumbnailListItem_o *p_QUEST_BOARD_ICON_TEXTURE_PREFIX; // x0
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  CGThumbnailListItem_o *p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x0
  int32_t v131; // w1
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  struct QuestBoardListViewItemDraw_StaticFields *v134; // x8
  int32_t v135; // w1
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  CGThumbnailListItem_o *p_BANNER_POINT_SPNAME_OFF; // x0
  int32_t v139; // w1
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  struct QuestBoardListViewItemDraw_StaticFields *v142; // x8
  int32_t v143; // w1
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  CGThumbnailListItem_o *p_QUEST_STORY_FACE_MASK_SPNAME; // x0
  int32_t v147; // w1
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  CGThumbnailListItem_o *p_QUEST_MAIN_FACE_MASK_SPNAME; // x0
  int32_t v151; // w1
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  CGThumbnailListItem_o *p_QUEST_EVENT_FACE_MASK_SPNAME; // x0
  int32_t v155; // w1
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  __int64 v158; // x0
  __int64 v159; // x1
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  __int64 v162; // x19
  int32_t v163; // w1
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  int32_t v166; // w1
  CGThumbnailListItem_o *p_RP_SPNAME_FRAME; // x0
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  __int64 v172; // x19
  int32_t v173; // w1
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  int32_t v176; // w1
  CGThumbnailListItem_o *p_RP_SPNAME_POINT; // x0
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  QuestBoardListViewItemDraw_c *v180; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v181; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v182; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v183; // x8
  int32_t v184; // w1
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  int32_t v187; // w1
  CGThumbnailListItem_o *p_QUEST_LOSE_NO_SPEND_SPRITE; // x0
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  int32_t v191; // w1
  CGThumbnailListItem_o *p_QUEST_RETREAT_NO_SPEND_SPRITE; // x0
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  int32_t v195; // w1
  CGThumbnailListItem_o *p_QuestBoardFrameNamePrefix; // x0
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  int32_t v199; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED; // x0
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  int32_t v203; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_FORMAT; // x0
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  int32_t v207; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  int32_t v211; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  int32_t v215; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  int32_t v217; // w2
  const MethodInfo *v218; // x3
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  int32_t v220; // w1
  int32_t v221; // w2
  const MethodInfo *v222; // x3
  int32_t v223; // w2
  const MethodInfo *v224; // x3
  __int64 v225; // x19
  int32_t v226; // w1
  int32_t v227; // w2
  const MethodInfo *v228; // x3
  int32_t v229; // w1
  int32_t v230; // w2
  const MethodInfo *v231; // x3
  int32_t v232; // w1
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  int32_t v235; // w1
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  int32_t v238; // w1
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  int32_t v241; // w1
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  int32_t v244; // w1
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  int32_t v247; // w1
  CGThumbnailListItem_o *p_msQBoardL1Names; // x0
  int32_t v249; // w2
  const MethodInfo *v250; // x3
  int32_t v251; // w1
  CGThumbnailListItem_o *p_msQBoardL2Name_Story; // x0
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  int32_t v255; // w1
  CGThumbnailListItem_o *p_msQBoardL2Name_Hero; // x0
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  __int64 v261; // x19
  int32_t v262; // w1
  int32_t v263; // w2
  const MethodInfo *v264; // x3
  int32_t v265; // w1
  int32_t v266; // w2
  const MethodInfo *v267; // x3
  int32_t v268; // w1
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  int32_t v271; // w1
  int32_t v272; // w2
  const MethodInfo *v273; // x3
  int32_t v274; // w1
  int32_t v275; // w2
  const MethodInfo *v276; // x3
  int32_t v277; // w1
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  int32_t v280; // w1
  CGThumbnailListItem_o *p_msQBoardL3Names; // x0
  int32_t v282; // w2
  const MethodInfo *v283; // x3
  int32_t v284; // w2
  const MethodInfo *v285; // x3
  __int64 v286; // x19
  int32_t v287; // w1
  int32_t v288; // w2
  const MethodInfo *v289; // x3
  int32_t v290; // w1
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  int32_t v293; // w1
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  int32_t v296; // w1
  int32_t v297; // w2
  const MethodInfo *v298; // x3
  int32_t v299; // w1
  int32_t v300; // w2
  const MethodInfo *v301; // x3
  int32_t v302; // w1
  int32_t v303; // w2
  const MethodInfo *v304; // x3
  int32_t v305; // w1
  CGThumbnailListItem_o *p_msLabelMainSprNames; // x0
  int32_t v307; // w2
  const MethodInfo *v308; // x3
  int32_t v309; // w2
  const MethodInfo *v310; // x3
  __int64 v311; // x19
  int32_t v312; // w1
  int32_t v313; // w2
  const MethodInfo *v314; // x3
  int32_t v315; // w1
  int32_t v316; // w2
  const MethodInfo *v317; // x3
  int32_t v318; // w1
  int32_t v319; // w2
  const MethodInfo *v320; // x3
  int32_t v321; // w1
  int32_t v322; // w2
  const MethodInfo *v323; // x3
  int32_t v324; // w1
  int32_t v325; // w2
  const MethodInfo *v326; // x3
  int32_t v327; // w1
  int32_t v328; // w2
  const MethodInfo *v329; // x3
  int32_t v330; // w1
  int32_t v331; // w2
  const MethodInfo *v332; // x3
  int32_t v333; // w1
  CGThumbnailListItem_o *p_QuestBoardApSpNames; // x0
  int32_t v335; // w2
  const MethodInfo *v336; // x3
  int32_t v337; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_ArrowOff; // x0
  int32_t v339; // w2
  const MethodInfo *v340; // x3
  int32_t v341; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_ArrowOn; // x0
  int32_t v343; // w2
  const MethodInfo *v344; // x3
  int32_t v345; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_ExArrowOff; // x0
  int32_t v347; // w2
  const MethodInfo *v348; // x3
  int32_t v349; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_ExArrowOn; // x0
  int32_t v351; // w2
  const MethodInfo *v352; // x3
  int32_t v353; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_LoopOff; // x0
  int32_t v355; // w2
  const MethodInfo *v356; // x3
  int32_t v357; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_LoopOn; // x0
  int32_t v359; // w2
  const MethodInfo *v360; // x3
  int32_t v361; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_LoopFirstOff; // x0
  int32_t v363; // w2
  const MethodInfo *v364; // x3
  int32_t v365; // w1
  CGThumbnailListItem_o *p_CHAPTER_SP_BASE_NAME; // x0
  int32_t v367; // w2
  const MethodInfo *v368; // x3
  int32_t v369; // w1
  CGThumbnailListItem_o *p_CHAPTER_SP_UNIT_NAME; // x0
  int32_t v371; // w2
  const MethodInfo *v372; // x3
  int32_t v373; // w1
  CGThumbnailListItem_o *p_PRE_BATTLE_ORGANIZATION; // x0
  int32_t v375; // w2
  const MethodInfo *v376; // x3

  if ( (byte_4CB2EE0 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_22965/*"quest_board_icon_"*/);
    sub_1C6BA08(&StringLiteral_20288/*"icon_reward_step{0}"*/);
    sub_1C6BA08(&StringLiteral_20564/*"img_quest_lose_no_spend"*/);
    sub_1C6BA08(&StringLiteral_22977/*"questboard_cap_closed"*/);
    sub_1C6BA08(&StringLiteral_20645/*"img_slider_on"*/);
    sub_1C6BA08(&StringLiteral_20516/*"img_loop_off"*/);
    sub_1C6BA08(&StringLiteral_20590/*"img_questboard_story01"*/);
    sub_1C6BA08(&StringLiteral_22988/*"questboard_shohi_bg_01"*/);
    sub_1C6BA08(&StringLiteral_22974/*"questboard_ap_free"*/);
    sub_1C6BA08(&StringLiteral_22986/*"questboard_icon_cap{0:D2}"*/);
    sub_1C6BA08(&StringLiteral_20594/*"img_questboard_story03mask"*/);
    sub_1C6BA08(&StringLiteral_20569/*"img_quest_spend"*/);
    sub_1C6BA08(&StringLiteral_20574/*"img_questarrow_off"*/);
    sub_1C6BA08(&StringLiteral_17817/*"chaldea_category_{0}"*/);
    sub_1C6BA08(&StringLiteral_20592/*"img_questboard_story02mask"*/);
    sub_1C6BA08(&StringLiteral_20575/*"img_questarrow_on"*/);
    sub_1C6BA08(&StringLiteral_20586/*"img_questboard_main_"*/);
    sub_1C6BA08(&StringLiteral_22967/*"quest_board_outline_"*/);
    sub_1C6BA08(&StringLiteral_20565/*"img_quest_pre_organization"*/);
    sub_1C6BA08(&StringLiteral_20567/*"img_quest_save"*/);
    sub_1C6BA08(&StringLiteral_19362/*"event_war_"*/);
    sub_1C6BA08(&StringLiteral_22975/*"questboard_ap_main"*/);
    sub_1C6BA08(&StringLiteral_20596/*"img_questboard_story05mask"*/);
    sub_1C6BA08(&StringLiteral_22989/*"questboard_shohi_bg_02"*/);
    sub_1C6BA08(&StringLiteral_20584/*"img_questboard_hero03"*/);
    sub_1C6BA08(&StringLiteral_22980/*"questboard_cap_closed_special_3"*/);
    sub_1C6BA08(&StringLiteral_20585/*"img_questboard_knockdown"*/);
    sub_1C6BA08(&StringLiteral_23042/*"raid_point_old"*/);
    sub_1C6BA08(&StringLiteral_23039/*"raid_point"*/);
    sub_1C6BA08(&StringLiteral_22979/*"questboard_cap_closed_special_2"*/);
    sub_1C6BA08(&StringLiteral_20583/*"img_questboard_hero02"*/);
    sub_1C6BA08(&StringLiteral_20300/*"icon_spot_next"*/);
    sub_1C6BA08(&StringLiteral_22964/*"quest_board_"*/);
    sub_1C6BA08(&StringLiteral_22987/*"questboard_shohi_"*/);
    sub_1C6BA08(&StringLiteral_23040/*"raid_point_frame"*/);
    sub_1C6BA08(&StringLiteral_20581/*"img_questboard_free_"*/);
    sub_1C6BA08(&StringLiteral_23041/*"raid_point_frame_old"*/);
    sub_1C6BA08(&StringLiteral_20579/*"img_questboard_damage"*/);
    sub_1C6BA08(&StringLiteral_22966/*"quest_board_mask_"*/);
    sub_1C6BA08(&StringLiteral_6266/*"EventUI/QuestBoardIcon/"*/);
    sub_1C6BA08(&StringLiteral_20580/*"img_questboard_event{0:D3}"*/);
    sub_1C6BA08(&StringLiteral_20595/*"img_questboard_story04mask"*/);
    sub_1C6BA08(&StringLiteral_20598/*"img_questloop_on"*/);
    sub_1C6BA08(&StringLiteral_20597/*"img_questloop_off"*/);
    sub_1C6BA08(&StringLiteral_20601/*"img_questtxt_free"*/);
    sub_1C6BA08(&StringLiteral_22983/*"questboard_cap{0:D3}"*/);
    sub_1C6BA08(&StringLiteral_20593/*"img_questboard_story03"*/);
    sub_1C6BA08(&StringLiteral_20576/*"img_questboard_"*/);
    sub_1C6BA08(&StringLiteral_20571/*"img_quest_unit_{0:D2}"*/);
    sub_1C6BA08(&StringLiteral_22978/*"questboard_cap_closed_special"*/);
    sub_1C6BA08(&StringLiteral_20600/*"img_questtxt_event"*/);
    sub_1C6BA08(&StringLiteral_20582/*"img_questboard_hero01"*/);
    sub_1C6BA08(&StringLiteral_20572/*"img_questarrow1_off"*/);
    sub_1C6BA08(&StringLiteral_22976/*"questboard_ap_story"*/);
    sub_1C6BA08(&StringLiteral_20644/*"img_slider_off"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_20570/*"img_quest_spend2"*/);
    sub_1C6BA08(&StringLiteral_20563/*"img_quest_lasttime"*/);
    sub_1C6BA08(&StringLiteral_20573/*"img_questarrow1_on"*/);
    sub_1C6BA08(&StringLiteral_22981/*"questboard_cap_closed_special_{0}"*/);
    sub_1C6BA08(&StringLiteral_20591/*"img_questboard_story02"*/);
    sub_1C6BA08(&StringLiteral_23010/*"qyestboard_ap_free"*/);
    sub_1C6BA08(&StringLiteral_20299/*"icon_spot_free"*/);
    sub_1C6BA08(&StringLiteral_22973/*"questboard_ap_"*/);
    sub_1C6BA08(&StringLiteral_20566/*"img_quest_retreat_no_spend"*/);
    sub_1C6BA08(&StringLiteral_22982/*"questboard_cap_closed_{0}"*/);
    byte_4CB2EE0 = 1;
  }
  v3 = QuestBoardListViewItemDraw_TypeInfo;
  static_fields = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->POS_Y_ITVL_AREA = xmmword_CED980;
  *(_OWORD *)&static_fields->CLIP_W_AREA = xmmword_CECFD0;
  static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  *(_OWORD *)&static_fields->PHASE_EXTRA_MAX = xmmword_CED990;
  *(_OWORD *)&static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = xmmword_CEBC40;
  static_fields->CAMPAIGN_COST_COLOR.fields.a = 1.0;
  v3->static_fields->OVER_COST_COLOR = (struct UnityEngine_Color_o)xmmword_CEBF10;
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
  *(_OWORD *)&v9->NEW_W_DEFAULT = xmmword_CEBE10;
  *(_QWORD *)&v9->CLEAR_POS_AREA.fields.x = 0xC2500000431B0000LL;
  v9->CLEAR_POS_AREA.fields.z = 0.0;
  v10 = v3->static_fields;
  *(_QWORD *)&v10->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v10->CLEAR_POS_QUEST.fields.z = 0.0;
  v11 = v3->static_fields;
  *(_OWORD *)&v11->NEXT_POS_X_AREA_L = xmmword_CEBC50;
  v12 = StringLiteral_20300/*"icon_spot_next"*/;
  v11->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20300/*"icon_spot_next"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->NEXT_ICON_SPRITE_NAME, v12, v1, v2);
  v13 = StringLiteral_20299/*"icon_spot_free"*/;
  v14 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v14->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20299/*"icon_spot_free"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14->FREE_ICON_SPRITE_NAME, v13, v15, v16);
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
  *(_OWORD *)&v26->COST_BG_WIDTH_SINGLE = xmmword_CEC020;
  v26->COST_BG_WIDTH_DOUBLE_QP = 186;
  v27 = StringLiteral_22988/*"questboard_shohi_bg_01"*/;
  v26->COST_BG_ITEM = (struct System_String_o *)StringLiteral_22988/*"questboard_shohi_bg_01"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v26->COST_BG_ITEM, v27, v28, v29);
  v30 = StringLiteral_22989/*"questboard_shohi_bg_02"*/;
  p_COST_BG_QP = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (CGThumbnailListItem_c *)StringLiteral_22989/*"questboard_shohi_bg_02"*/;
  sub_1C6B9AC(p_COST_BG_QP, v30, v32, v33);
  v34 = QuestBoardListViewItemDraw_TypeInfo;
  v35 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v35->COST_1_ICON_AP_POS.fields.x = 1098907648;
  v35->COST_1_ICON_AP_POS.fields.z = 0.0;
  v36 = v34->static_fields;
  *(_QWORD *)&v36->COST_1_ICON_AP_POS_WAR_BOARD.fields.x = 1099956224;
  v36->COST_1_ICON_AP_POS_WAR_BOARD.fields.z = 0.0;
  v37 = v34->static_fields;
  *(_QWORD *)&v37->COST_1_LABEL_AP_POS.fields.x = 1103888384;
  v37->COST_1_LABEL_AP_POS.fields.z = 0.0;
  v38 = v34->static_fields;
  *(_QWORD *)&v38->COST_1_LABEL_AP_POS_WAR_BOARD.fields.x = 1104936960;
  v38->COST_1_LABEL_AP_POS_WAR_BOARD.fields.z = 0.0;
  v39 = v34->static_fields;
  *(_OWORD *)&v39->COST_2_ICON_NORMAL_POSITION_X = xmmword_CECE50;
  *(_OWORD *)&v39->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_CED490;
  *(_OWORD *)&v39->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_CED3A0;
  v39->COST_LABEL_WIDTH_FOR_THREE_ITEM = 30.4;
  *(_QWORD *)&v39->COST_LABEL_DEFAULT_SPACING = 0x800000009LL;
  *(_QWORD *)&v39->SHOHI_SP_POS.fields.x = 0x41C0000041800000LL;
  v39->SHOHI_SP_POS.fields.z = 0.0;
  v40 = v34->static_fields;
  *(_QWORD *)&v40->SHOHI_SP_POS_WAR_BOARD.fields.x = 0x41C8000041900000LL;
  v40->SHOHI_SP_POS_WAR_BOARD.fields.z = 0.0;
  v41 = StringLiteral_20569/*"img_quest_spend"*/;
  p_SHOHI_SP_NAME = (CGThumbnailListItem_o *)&v34->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20569/*"img_quest_spend"*/;
  sub_1C6B9AC(p_SHOHI_SP_NAME, v41, v43, v44);
  v45 = StringLiteral_20570/*"img_quest_spend2"*/;
  p_SHOHI_SP_NAME_WAR_BOARD = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (CGThumbnailListItem_c *)StringLiteral_20570/*"img_quest_spend2"*/;
  sub_1C6B9AC(p_SHOHI_SP_NAME_WAR_BOARD, v45, v47, v48);
  v51 = QuestBoardListViewItemDraw_TypeInfo;
  v52 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&v52->QUEST_BOARD_PHASE_INTERVAL = xmmword_CECB60;
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    v51 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4CAFC09 = 1;
    v52 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  }
  v53 = UnityEngine_Vector3_TypeInfo;
  v54 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v54->zeroVector.fields.z;
  *(_QWORD *)&v52->CHALLENGE_OBJ_POS_SINGLE.fields.x = *(_QWORD *)&v54->zeroVector.fields.x;
  v52->CHALLENGE_OBJ_POS_SINGLE.fields.z = z;
  v56 = v51->static_fields;
  *(_QWORD *)&v56->CHALLENGE_OBJ_POS_DOUBLE.fields.x = 1115160576;
  v56->CHALLENGE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v57 = v53->static_fields;
  v58 = v51->static_fields;
  v59 = v57->zeroVector.fields.z;
  *(_QWORD *)&v58->ClearCntObjPosSingle.fields.x = *(_QWORD *)&v57->zeroVector.fields.x;
  v58->ClearCntObjPosSingle.fields.z = v59;
  v60 = v51->static_fields;
  *(_QWORD *)&v60->ClearCntObjPosDouble.fields.x = 1114112000;
  v60->ClearCntObjPosDouble.fields.z = 0.0;
  v61 = v53->static_fields;
  v62 = v51->static_fields;
  v63 = v61->zeroVector.fields.z;
  *(_QWORD *)&v62->PHASE_OBJ_POS_SINGLE.fields.x = *(_QWORD *)&v61->zeroVector.fields.x;
  v62->PHASE_OBJ_POS_SINGLE.fields.z = v63;
  v64 = v51->static_fields;
  *(_QWORD *)&v64->PHASE_OBJ_POS_DOUBLE.fields.x = 1116995584;
  v64->PHASE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v65 = v51->static_fields;
  *(_QWORD *)&v65->PHASE_OBJ_POS_DOUBLE_QP.fields.x = 1117782016;
  v65->PHASE_OBJ_POS_DOUBLE_QP.fields.z = 0.0;
  v66 = v51->static_fields;
  *(_QWORD *)&v66->PHASE_OBJ_POS_TRIPLE_ITEM.fields.x = 1118699520;
  v66->PHASE_OBJ_POS_TRIPLE_ITEM.fields.z = 0.0;
  v67 = v51->static_fields;
  *(_QWORD *)&v67->PHASE_STR_POS_SINGLE.fields.x = 1116602368;
  v67->PHASE_STR_POS_SINGLE.fields.z = 0.0;
  v68 = v51->static_fields;
  *(_QWORD *)&v68->PHASE_STR_POS_DOUBLE.fields.x = 1113063424;
  v68->PHASE_STR_POS_DOUBLE.fields.z = 0.0;
  v69 = v51->static_fields;
  *(_QWORD *)&v69->PHASE_STR_POS_DOUBLE_QP.fields.x = 1111228416;
  v69->PHASE_STR_POS_DOUBLE_QP.fields.z = 0.0;
  v70 = v51->static_fields;
  *(_QWORD *)&v70->PHASE_STR_POS_TRIPLE_ITEM.fields.x = 1109393408;
  v70->PHASE_STR_POS_TRIPLE_ITEM.fields.z = 0.0;
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    v53 = UnityEngine_Vector3_TypeInfo;
    v51 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4CAFC0E = 1;
  }
  v71 = v53->static_fields;
  v72 = v51->static_fields;
  v73 = v71->oneVector.fields.z;
  *(_QWORD *)&v72->PHASE_STR_SCL_SINGLE.fields.x = *(_QWORD *)&v71->oneVector.fields.x;
  v72->PHASE_STR_SCL_SINGLE.fields.z = v73;
  v74 = v51->static_fields;
  *(_QWORD *)&v74->PHASE_STR_SCL_DOUBLE.fields.x = 0x3F8000003F4CCCCDLL;
  v74->PHASE_STR_SCL_DOUBLE.fields.z = 1.0;
  v75 = v51->static_fields;
  *(_QWORD *)&v75->PHASE_STR_SCL_DOUBLE_QP.fields.x = 0x3F8000003F4CCCCDLL;
  v75->PHASE_STR_SCL_DOUBLE_QP.fields.z = 1.0;
  v76 = v51->static_fields;
  *(_QWORD *)&v76->PHASE_STR_SCL_TRIPLE_ITEM.fields.x = 0x3F8000003F333333LL;
  v76->PHASE_STR_SCL_TRIPLE_ITEM.fields.z = 1.0;
  v77 = v51->static_fields;
  v77->BOARD_MESSAGE_MAX_WITDH = 170;
  *(_QWORD *)&v77->BLACK_MARK_OBJ_POS.fields.x = 0x4284000000000000LL;
  v77->BLACK_MARK_OBJ_POS.fields.z = 0.0;
  v78 = v51->static_fields;
  *(_QWORD *)&v78->BLACK_MARK_OBJ_POS_CENTER.fields.x = 0;
  v78->BLACK_MARK_OBJ_POS_CENTER.fields.z = 0.0;
  v79 = v51->static_fields;
  *(_QWORD *)&v79->WHITE_MARK_OBJ_UNDER_POS.fields.x = 0xC284000000000000LL;
  v79->WHITE_MARK_OBJ_UNDER_POS.fields.z = 0.0;
  v80 = StringLiteral_19362/*"event_war_"*/;
  p_EVENT_WAR_SPNAME_PREFIX = (CGThumbnailListItem_o *)&v51->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_19362/*"event_war_"*/;
  sub_1C6B9AC(p_EVENT_WAR_SPNAME_PREFIX, v80, v49, v50);
  v82 = StringLiteral_17817/*"chaldea_category_{0}"*/;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_17817/*"chaldea_category_{0}"*/;
  sub_1C6B9AC(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v82, v84, v85);
  v86 = StringLiteral_22964/*"quest_board_"*/;
  p_QUEST_BOARD_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22964/*"quest_board_"*/;
  sub_1C6B9AC(p_QUEST_BOARD_SPNAME_PREFIX, v86, v88, v89);
  v90 = StringLiteral_20576/*"img_questboard_"*/;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_20576/*"img_questboard_"*/;
  sub_1C6B9AC(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v90, v92, v93);
  v94 = StringLiteral_22965/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22965/*"quest_board_icon_"*/;
  sub_1C6B9AC(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v94, v96, v97);
  v98 = StringLiteral_22966/*"quest_board_mask_"*/;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22966/*"quest_board_mask_"*/;
  sub_1C6B9AC(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v98, v100, v101);
  v102 = StringLiteral_22987/*"questboard_shohi_"*/;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22987/*"questboard_shohi_"*/;
  sub_1C6B9AC(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v102, v104, v105);
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v107 = StringLiteral_22973/*"questboard_ap_"*/;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22973/*"questboard_ap_"*/;
  sub_1C6B9AC(p_QUEST_BOARD_AP_SPNAME_PREFIX, v107, v108, v109);
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  v111 = StringLiteral_20579/*"img_questboard_damage"*/;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20579/*"img_questboard_damage"*/;
  sub_1C6B9AC(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v111, v112, v113);
  p_QUEST_BOARD_PREV_ICON_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  v115 = StringLiteral_20563/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20563/*"img_quest_lasttime"*/;
  sub_1C6B9AC(p_QUEST_BOARD_PREV_ICON_NAME, v115, v116, v117);
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  v119 = StringLiteral_20585/*"img_questboard_knockdown"*/;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20585/*"img_questboard_knockdown"*/;
  sub_1C6B9AC(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v119, v120, v121);
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  v123 = StringLiteral_6266/*"EventUI/QuestBoardIcon/"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (CGThumbnailListItem_c *)StringLiteral_6266/*"EventUI/QuestBoardIcon/"*/;
  sub_1C6B9AC(p_QUEST_BOARD_ICON_TEXTURE_PATH, v123, v124, v125);
  v126 = StringLiteral_22965/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22965/*"quest_board_icon_"*/;
  sub_1C6B9AC(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v126, v128, v129);
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
  v131 = StringLiteral_20288/*"icon_reward_step{0}"*/;
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_20288/*"icon_reward_step{0}"*/;
  sub_1C6B9AC(p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v131, v132, v133);
  v134 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v134->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 0x300000004ELL;
  *(_QWORD *)&v134->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 0x4000000000000013LL;
  v135 = StringLiteral_20645/*"img_slider_on"*/;
  v134->BANNER_POINT_SPNAME_ON = (struct System_String_o *)StringLiteral_20645/*"img_slider_on"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v134->BANNER_POINT_SPNAME_ON, v135, v136, v137);
  p_BANNER_POINT_SPNAME_OFF = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  v139 = StringLiteral_20644/*"img_slider_off"*/;
  p_BANNER_POINT_SPNAME_OFF->klass = (CGThumbnailListItem_c *)StringLiteral_20644/*"img_slider_off"*/;
  sub_1C6B9AC(p_BANNER_POINT_SPNAME_OFF, v139, v140, v141);
  v142 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v142->SHORTCUT_FACE_MASK_SP_W = 0x7C00000088LL;
  v143 = StringLiteral_20592/*"img_questboard_story02mask"*/;
  v142->SHORTCUT_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20592/*"img_questboard_story02mask"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v142->SHORTCUT_FACE_MASK_SPNAME, v143, v144, v145);
  p_QUEST_STORY_FACE_MASK_SPNAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  v147 = StringLiteral_20594/*"img_questboard_story03mask"*/;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (CGThumbnailListItem_c *)StringLiteral_20594/*"img_questboard_story03mask"*/;
  sub_1C6B9AC(p_QUEST_STORY_FACE_MASK_SPNAME, v147, v148, v149);
  p_QUEST_MAIN_FACE_MASK_SPNAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  v151 = StringLiteral_20595/*"img_questboard_story04mask"*/;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (CGThumbnailListItem_c *)StringLiteral_20595/*"img_questboard_story04mask"*/;
  sub_1C6B9AC(p_QUEST_MAIN_FACE_MASK_SPNAME, v151, v152, v153);
  p_QUEST_EVENT_FACE_MASK_SPNAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  v155 = StringLiteral_20596/*"img_questboard_story05mask"*/;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (CGThumbnailListItem_c *)StringLiteral_20596/*"img_questboard_story05mask"*/;
  sub_1C6B9AC(p_QUEST_EVENT_FACE_MASK_SPNAME, v155, v156, v157);
  v158 = sub_1C6BAB0(string___TypeInfo, 2);
  if ( !v158 )
    goto LABEL_49;
  v162 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v163 = StringLiteral_23041/*"raid_point_frame_old"*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_23041/*"raid_point_frame_old"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v158 + 32), v163, v160, v161);
  if ( *(_DWORD *)(v162 + 24) <= 1u )
    goto LABEL_48;
  v166 = StringLiteral_23040/*"raid_point_frame"*/;
  *(_QWORD *)(v162 + 40) = StringLiteral_23040/*"raid_point_frame"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v162 + 40), v166, v164, v165);
  p_RP_SPNAME_FRAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (CGThumbnailListItem_c *)v162;
  sub_1C6B9AC(p_RP_SPNAME_FRAME, v162, v168, v169);
  v158 = sub_1C6BAB0(string___TypeInfo, 2);
  if ( !v158 )
    goto LABEL_49;
  v172 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v173 = StringLiteral_23042/*"raid_point_old"*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_23042/*"raid_point_old"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v158 + 32), v173, v170, v171);
  if ( *(_DWORD *)(v172 + 24) <= 1u )
    goto LABEL_48;
  v176 = StringLiteral_23039/*"raid_point"*/;
  *(_QWORD *)(v172 + 40) = StringLiteral_23039/*"raid_point"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v172 + 40), v176, v174, v175);
  p_RP_SPNAME_POINT = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (CGThumbnailListItem_c *)v172;
  sub_1C6B9AC(p_RP_SPNAME_POINT, v172, v178, v179);
  v180 = QuestBoardListViewItemDraw_TypeInfo;
  v181 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v181->RESTRICTION_FONT_SPACING_MIN = -1;
  *(_QWORD *)&v181->RESTRICTION_DEFAULT_FONT_SIZE = 18;
  *(_QWORD *)&v181->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v181->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v182 = v180->static_fields;
  *(_QWORD *)&v182->RESTRICTION_FONT_SIZE_ALLOUT = 0x700000000ELL;
  *(_QWORD *)&v182->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v182->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v183 = v180->static_fields;
  *(_QWORD *)&v183->BANNER_ENTORY_EFFECT_DURATION = 0x41F000003F000000LL;
  v184 = StringLiteral_20567/*"img_quest_save"*/;
  v183->QUEST_BOARD_PREV_PAUSE_ICON_NAME = (struct System_String_o *)StringLiteral_20567/*"img_quest_save"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v183->QUEST_BOARD_PREV_PAUSE_ICON_NAME, v184, v185, v186);
  v187 = StringLiteral_20564/*"img_quest_lose_no_spend"*/;
  p_QUEST_LOSE_NO_SPEND_SPRITE = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_LOSE_NO_SPEND_SPRITE;
  p_QUEST_LOSE_NO_SPEND_SPRITE->klass = (CGThumbnailListItem_c *)StringLiteral_20564/*"img_quest_lose_no_spend"*/;
  sub_1C6B9AC(p_QUEST_LOSE_NO_SPEND_SPRITE, v187, v189, v190);
  v191 = StringLiteral_20566/*"img_quest_retreat_no_spend"*/;
  p_QUEST_RETREAT_NO_SPEND_SPRITE = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_RETREAT_NO_SPEND_SPRITE;
  p_QUEST_RETREAT_NO_SPEND_SPRITE->klass = (CGThumbnailListItem_c *)StringLiteral_20566/*"img_quest_retreat_no_spend"*/;
  sub_1C6B9AC(p_QUEST_RETREAT_NO_SPEND_SPRITE, v191, v193, v194);
  v195 = StringLiteral_22967/*"quest_board_outline_"*/;
  p_QuestBoardFrameNamePrefix = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardFrameNamePrefix;
  p_QuestBoardFrameNamePrefix->klass = (CGThumbnailListItem_c *)StringLiteral_22967/*"quest_board_outline_"*/;
  sub_1C6B9AC(p_QuestBoardFrameNamePrefix, v195, v197, v198);
  v199 = StringLiteral_22977/*"questboard_cap_closed"*/;
  p_QBOARD_CAP_CLOSED = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (CGThumbnailListItem_c *)StringLiteral_22977/*"questboard_cap_closed"*/;
  sub_1C6B9AC(p_QBOARD_CAP_CLOSED, v199, v201, v202);
  v203 = StringLiteral_22982/*"questboard_cap_closed_{0}"*/;
  p_QBOARD_CAP_CLOSED_FORMAT = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
  p_QBOARD_CAP_CLOSED_FORMAT->klass = (CGThumbnailListItem_c *)StringLiteral_22982/*"questboard_cap_closed_{0}"*/;
  sub_1C6B9AC(p_QBOARD_CAP_CLOSED_FORMAT, v203, v205, v206);
  v207 = StringLiteral_22981/*"questboard_cap_closed_special_{0}"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (CGThumbnailListItem_c *)StringLiteral_22981/*"questboard_cap_closed_special_{0}"*/;
  sub_1C6B9AC(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v207, v209, v210);
  v211 = StringLiteral_22978/*"questboard_cap_closed_special"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (CGThumbnailListItem_c *)StringLiteral_22978/*"questboard_cap_closed_special"*/;
  sub_1C6B9AC(p_QBOARD_CAP_CLOSED_SPECIAL, v211, v213, v214);
  v215 = StringLiteral_22979/*"questboard_cap_closed_special_2"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (CGThumbnailListItem_c *)StringLiteral_22979/*"questboard_cap_closed_special_2"*/;
  sub_1C6B9AC(p_QBOARD_CAP_CLOSED_SPECIAL_2, v215, v217, v218);
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  v220 = StringLiteral_22980/*"questboard_cap_closed_special_3"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (CGThumbnailListItem_c *)StringLiteral_22980/*"questboard_cap_closed_special_3"*/;
  sub_1C6B9AC(p_QBOARD_CAP_CLOSED_SPECIAL_3, v220, v221, v222);
  v158 = sub_1C6BAB0(string___TypeInfo, 8);
  if ( !v158 )
    goto LABEL_49;
  v225 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v226 = StringLiteral_20580/*"img_questboard_event{0:D3}"*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_20580/*"img_questboard_event{0:D3}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v158 + 32), v226, v223, v224);
  if ( *(_DWORD *)(v225 + 24) <= 1u )
    goto LABEL_48;
  v229 = StringLiteral_22983/*"questboard_cap{0:D3}"*/;
  *(_QWORD *)(v225 + 40) = StringLiteral_22983/*"questboard_cap{0:D3}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v225 + 40), v229, v227, v228);
  if ( *(_DWORD *)(v225 + 24) <= 2u )
    goto LABEL_48;
  v232 = StringLiteral_17817/*"chaldea_category_{0}"*/;
  *(_QWORD *)(v225 + 48) = StringLiteral_17817/*"chaldea_category_{0}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v225 + 48), v232, v230, v231);
  if ( *(_DWORD *)(v225 + 24) <= 3u )
    goto LABEL_48;
  v235 = StringLiteral_20590/*"img_questboard_story01"*/;
  *(_QWORD *)(v225 + 56) = StringLiteral_20590/*"img_questboard_story01"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v225 + 56), v235, v233, v234);
  if ( *(_DWORD *)(v225 + 24) <= 4u )
    goto LABEL_48;
  v238 = StringLiteral_20582/*"img_questboard_hero01"*/;
  *(_QWORD *)(v225 + 64) = StringLiteral_20582/*"img_questboard_hero01"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v225 + 64), v238, v236, v237);
  if ( *(_DWORD *)(v225 + 24) <= 5u )
    goto LABEL_48;
  v241 = StringLiteral_1/*""*/;
  *(_QWORD *)(v225 + 72) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v225 + 72), v241, v239, v240);
  if ( *(_DWORD *)(v225 + 24) <= 6u )
    goto LABEL_48;
  v244 = StringLiteral_22983/*"questboard_cap{0:D3}"*/;
  *(_QWORD *)(v225 + 80) = StringLiteral_22983/*"questboard_cap{0:D3}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v225 + 80), v244, v242, v243);
  if ( *(_DWORD *)(v225 + 24) <= 7u )
    goto LABEL_48;
  v247 = StringLiteral_17817/*"chaldea_category_{0}"*/;
  *(_QWORD *)(v225 + 88) = StringLiteral_17817/*"chaldea_category_{0}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v225 + 88), v247, v245, v246);
  p_msQBoardL1Names = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (CGThumbnailListItem_c *)v225;
  sub_1C6B9AC(p_msQBoardL1Names, v225, v249, v250);
  v251 = StringLiteral_20591/*"img_questboard_story02"*/;
  p_msQBoardL2Name_Story = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (CGThumbnailListItem_c *)StringLiteral_20591/*"img_questboard_story02"*/;
  sub_1C6B9AC(p_msQBoardL2Name_Story, v251, v253, v254);
  v255 = StringLiteral_20583/*"img_questboard_hero02"*/;
  p_msQBoardL2Name_Hero = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (CGThumbnailListItem_c *)StringLiteral_20583/*"img_questboard_hero02"*/;
  sub_1C6B9AC(p_msQBoardL2Name_Hero, v255, v257, v258);
  v158 = sub_1C6BAB0(string___TypeInfo, 7);
  if ( !v158 )
    goto LABEL_49;
  v261 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v262 = StringLiteral_1/*""*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v158 + 32), v262, v259, v260);
  if ( *(_DWORD *)(v261 + 24) <= 1u )
    goto LABEL_48;
  v265 = StringLiteral_20586/*"img_questboard_main_"*/;
  *(_QWORD *)(v261 + 40) = StringLiteral_20586/*"img_questboard_main_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v261 + 40), v265, v263, v264);
  if ( *(_DWORD *)(v261 + 24) <= 2u )
    goto LABEL_48;
  v268 = StringLiteral_20581/*"img_questboard_free_"*/;
  *(_QWORD *)(v261 + 48) = StringLiteral_20581/*"img_questboard_free_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v261 + 48), v268, v266, v267);
  if ( *(_DWORD *)(v261 + 24) <= 3u )
    goto LABEL_48;
  v271 = StringLiteral_20593/*"img_questboard_story03"*/;
  *(_QWORD *)(v261 + 56) = StringLiteral_20593/*"img_questboard_story03"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v261 + 56), v271, v269, v270);
  if ( *(_DWORD *)(v261 + 24) <= 4u )
    goto LABEL_48;
  v274 = StringLiteral_1/*""*/;
  *(_QWORD *)(v261 + 64) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v261 + 64), v274, v272, v273);
  if ( *(_DWORD *)(v261 + 24) <= 5u )
    goto LABEL_48;
  v277 = StringLiteral_20581/*"img_questboard_free_"*/;
  *(_QWORD *)(v261 + 72) = StringLiteral_20581/*"img_questboard_free_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v261 + 72), v277, v275, v276);
  if ( *(_DWORD *)(v261 + 24) <= 6u )
    goto LABEL_48;
  v280 = StringLiteral_20584/*"img_questboard_hero03"*/;
  *(_QWORD *)(v261 + 80) = StringLiteral_20584/*"img_questboard_hero03"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v261 + 80), v280, v278, v279);
  p_msQBoardL3Names = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (CGThumbnailListItem_c *)v261;
  sub_1C6B9AC(p_msQBoardL3Names, v261, v282, v283);
  v158 = sub_1C6BAB0(string___TypeInfo, 7);
  if ( !v158 )
    goto LABEL_49;
  v286 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v287 = StringLiteral_1/*""*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v158 + 32), v287, v284, v285);
  if ( *(_DWORD *)(v286 + 24) <= 1u )
    goto LABEL_48;
  v290 = StringLiteral_1/*""*/;
  *(_QWORD *)(v286 + 40) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v286 + 40), v290, v288, v289);
  if ( *(_DWORD *)(v286 + 24) <= 2u )
    goto LABEL_48;
  v293 = StringLiteral_20601/*"img_questtxt_free"*/;
  *(_QWORD *)(v286 + 48) = StringLiteral_20601/*"img_questtxt_free"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v286 + 48), v293, v291, v292);
  if ( *(_DWORD *)(v286 + 24) <= 3u )
    goto LABEL_48;
  v296 = StringLiteral_1/*""*/;
  *(_QWORD *)(v286 + 56) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v286 + 56), v296, v294, v295);
  if ( *(_DWORD *)(v286 + 24) <= 4u
    || (v299 = StringLiteral_1/*""*/,
        *(_QWORD *)(v286 + 64) = StringLiteral_1/*""*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v286 + 64), v299, v297, v298),
        *(_DWORD *)(v286 + 24) <= 5u)
    || (v302 = StringLiteral_20600/*"img_questtxt_event"*/,
        *(_QWORD *)(v286 + 72) = StringLiteral_20600/*"img_questtxt_event"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v286 + 72), v302, v300, v301),
        *(_DWORD *)(v286 + 24) <= 6u) )
  {
LABEL_48:
    sub_1C6BC68(v158);
  }
  v305 = StringLiteral_1/*""*/;
  *(_QWORD *)(v286 + 80) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v286 + 80), v305, v303, v304);
  p_msLabelMainSprNames = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (CGThumbnailListItem_c *)v286;
  sub_1C6B9AC(p_msLabelMainSprNames, v286, v307, v308);
  v158 = sub_1C6BAB0(string___TypeInfo, 8);
  if ( !v158 )
LABEL_49:
    sub_1C6BC60(v158, v159);
  v311 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v312 = StringLiteral_1/*""*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v158 + 32), v312, v309, v310);
  if ( *(_DWORD *)(v311 + 24) <= 1u )
    goto LABEL_48;
  v315 = StringLiteral_22975/*"questboard_ap_main"*/;
  *(_QWORD *)(v311 + 40) = StringLiteral_22975/*"questboard_ap_main"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v311 + 40), v315, v313, v314);
  if ( *(_DWORD *)(v311 + 24) <= 2u )
    goto LABEL_48;
  v318 = StringLiteral_22974/*"questboard_ap_free"*/;
  *(_QWORD *)(v311 + 48) = StringLiteral_22974/*"questboard_ap_free"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v311 + 48), v318, v316, v317);
  if ( *(_DWORD *)(v311 + 24) <= 3u )
    goto LABEL_48;
  v321 = StringLiteral_22976/*"questboard_ap_story"*/;
  *(_QWORD *)(v311 + 56) = StringLiteral_22976/*"questboard_ap_story"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v311 + 56), v321, v319, v320);
  if ( *(_DWORD *)(v311 + 24) <= 4u )
    goto LABEL_48;
  v324 = StringLiteral_1/*""*/;
  *(_QWORD *)(v311 + 64) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v311 + 64), v324, v322, v323);
  if ( *(_DWORD *)(v311 + 24) <= 5u )
    goto LABEL_48;
  v327 = StringLiteral_22974/*"questboard_ap_free"*/;
  *(_QWORD *)(v311 + 72) = StringLiteral_22974/*"questboard_ap_free"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v311 + 72), v327, v325, v326);
  if ( *(_DWORD *)(v311 + 24) <= 6u )
    goto LABEL_48;
  v330 = StringLiteral_1/*""*/;
  *(_QWORD *)(v311 + 80) = StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v311 + 80), v330, v328, v329);
  if ( *(_DWORD *)(v311 + 24) <= 7u )
    goto LABEL_48;
  v333 = StringLiteral_23010/*"qyestboard_ap_free"*/;
  *(_QWORD *)(v311 + 88) = StringLiteral_23010/*"qyestboard_ap_free"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v311 + 88), v333, v331, v332);
  p_QuestBoardApSpNames = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (CGThumbnailListItem_c *)v311;
  sub_1C6B9AC(p_QuestBoardApSpNames, v311, v335, v336);
  v337 = StringLiteral_20574/*"img_questarrow_off"*/;
  p_msPhaseSprName_ArrowOff = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (CGThumbnailListItem_c *)StringLiteral_20574/*"img_questarrow_off"*/;
  sub_1C6B9AC(p_msPhaseSprName_ArrowOff, v337, v339, v340);
  v341 = StringLiteral_20575/*"img_questarrow_on"*/;
  p_msPhaseSprName_ArrowOn = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (CGThumbnailListItem_c *)StringLiteral_20575/*"img_questarrow_on"*/;
  sub_1C6B9AC(p_msPhaseSprName_ArrowOn, v341, v343, v344);
  v345 = StringLiteral_20572/*"img_questarrow1_off"*/;
  p_msPhaseSprName_ExArrowOff = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (CGThumbnailListItem_c *)StringLiteral_20572/*"img_questarrow1_off"*/;
  sub_1C6B9AC(p_msPhaseSprName_ExArrowOff, v345, v347, v348);
  v349 = StringLiteral_20573/*"img_questarrow1_on"*/;
  p_msPhaseSprName_ExArrowOn = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (CGThumbnailListItem_c *)StringLiteral_20573/*"img_questarrow1_on"*/;
  sub_1C6B9AC(p_msPhaseSprName_ExArrowOn, v349, v351, v352);
  v353 = StringLiteral_20597/*"img_questloop_off"*/;
  p_msPhaseSprName_LoopOff = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (CGThumbnailListItem_c *)StringLiteral_20597/*"img_questloop_off"*/;
  sub_1C6B9AC(p_msPhaseSprName_LoopOff, v353, v355, v356);
  v357 = StringLiteral_20598/*"img_questloop_on"*/;
  p_msPhaseSprName_LoopOn = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (CGThumbnailListItem_c *)StringLiteral_20598/*"img_questloop_on"*/;
  sub_1C6B9AC(p_msPhaseSprName_LoopOn, v357, v359, v360);
  v361 = StringLiteral_20516/*"img_loop_off"*/;
  p_msPhaseSprName_LoopFirstOff = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (CGThumbnailListItem_c *)StringLiteral_20516/*"img_loop_off"*/;
  sub_1C6B9AC(p_msPhaseSprName_LoopFirstOff, v361, v363, v364);
  v365 = StringLiteral_22986/*"questboard_icon_cap{0:D2}"*/;
  p_CHAPTER_SP_BASE_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_22986/*"questboard_icon_cap{0:D2}"*/;
  sub_1C6B9AC(p_CHAPTER_SP_BASE_NAME, v365, v367, v368);
  v369 = StringLiteral_20571/*"img_quest_unit_{0:D2}"*/;
  p_CHAPTER_SP_UNIT_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20571/*"img_quest_unit_{0:D2}"*/;
  sub_1C6B9AC(p_CHAPTER_SP_UNIT_NAME, v369, v371, v372);
  v373 = StringLiteral_20565/*"img_quest_pre_organization"*/;
  p_PRE_BATTLE_ORGANIZATION = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (CGThumbnailListItem_c *)StringLiteral_20565/*"img_quest_pre_organization"*/;
  sub_1C6B9AC(p_PRE_BATTLE_ORGANIZATION, v373, v375, v376);
}


void QuestBoardListViewItemDraw___ctor(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  QuestBoardListViewItemDraw_c *v6; // x0
  struct UISprite_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4CB2EDF & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_GameObject___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_UISprite__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&UISprite___TypeInfo);
    byte_4CB2EDF = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1C6BAB0(UnityEngine_GameObject___TypeInfo, 4);
  this->fields.mStatusSp = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mStatusSp, (int32_t)v3, v4, v5);
  v6 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v6 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v7 = (struct UISprite_array *)sub_1C6BAB0(UISprite___TypeInfo, (unsigned int)v6->static_fields->PHASE_EXTRA_MAX);
  this->fields.mPhaseSp = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mPhaseSp, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMultiSecondBattleInformation, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.rewardIconAlphaSyncWidgetList = (struct System_Collections_Generic_List_UIWidget__o *)v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.rewardIconAlphaSyncWidgetList, (int32_t)v13, v14, v15);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestBoardListViewItemDraw__Awake(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UILabel_o *mOptionRestrinctionLb; // x8

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  this->fields._bannerState_k__BackingField = 0;
  if ( !mOptionRestrinctionLb )
    sub_1C6BC60(this, method);
  this->fields.restrictionDefaultWidth = mOptionRestrinctionLb->fields.mWidth;
}


void QuestBoardListViewItemDraw__CalcQuestCost(
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
    sub_1C6BC60(this, questEntity);
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


void QuestBoardListViewItemDraw__ChangeNextEventTarget(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventTarget; // x20
  UnityEngine_Object_o *eventTargetComponent; // x20
  __int64 v5; // x1
  BoardOptionEventTargetComponent_o *v6; // x0

  if ( (byte_4CB2ECB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2ECB = 1;
  }
  eventTarget = (UnityEngine_Object_o *)this->fields.eventTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventTarget, 0, 0) )
  {
    eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(eventTargetComponent, 0, 0) )
    {
      v6 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v6 )
        goto LABEL_16;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v6, 0) )
      {
        v6 = this->fields.eventTargetComponent;
        if ( !v6 )
          goto LABEL_16;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v6, 0) )
        {
          v6 = this->fields.eventTargetComponent;
          if ( v6 )
          {
            BoardOptionEventTargetComponent__SetNextTarget(v6, 0);
            return;
          }
LABEL_16:
          sub_1C6BC60(v6, v5);
        }
      }
    }
  }
}


void QuestBoardListViewItemDraw__ChangeNextInfoText(
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
    if ( (byte_4CB2EC4 & 1) == 0 )
    {
      sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__);
      sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
      sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB2EC4 = 1;
    }
    if ( (byte_4CB2EC5 & 1) == 0 )
    {
      sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
      byte_4CB2EC5 = 1;
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
                                                     0);
    if ( !this->fields.mInfoTextList )
      goto LABEL_28;
    v8 = (int)mInfoTextList;
    mInfoTextList = (QuestBoardInformationText_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList,
                                                     (int32_t)mInfoTextList,
                                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !mInfoTextList )
      goto LABEL_28;
    v9 = mInfoTextList;
    if ( !QuestBoardInformationText__IsQuestOpened(mInfoTextList, 0) )
    {
      if ( !QuestBoardInformationText__ChangeText(v9, &this->fields.mOptionInfoLb, 0) )
        return;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
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
      (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__);
  }
  if ( (byte_4CB2EC6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4CB2EC6 = 1;
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
  }
  if ( mInfoTextList && LODWORD(mInfoTextList->fields.eventCampaignEnt) )
  {
    mInfoTextList = (QuestBoardInformationText_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)mInfoTextList,
                                                     0,
                                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !mInfoTextList )
LABEL_28:
      sub_1C6BC60(mInfoTextList, eventCampaignEnt_low);
    if ( QuestBoardInformationText__ChangeText(mInfoTextList, &this->fields.mOptionInfoLb, 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      v13 = this;
      v14 = 0;
LABEL_26:
      QuestBoardListViewItemDraw__UpdateInfoText(v13, v10, v14, Time, v12);
    }
  }
}


void QuestBoardListViewItemDraw__ChangeNextRewardIcon(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_RewardIconInfo__o *rewardIconInfoList; // x8

  if ( (byte_4CB2EC9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    byte_4CB2EC9 = 1;
  }
  rewardIconInfoList = this->fields.rewardIconInfoList;
  if ( rewardIconInfoList )
  {
    if ( rewardIconInfoList->fields._size >= 2 )
      QuestBoardListViewItemDraw__SetupRewardIcon(this, questBoardManager, method);
  }
}


System_String_o *QuestBoardListViewItemDraw__ConvertToChineseAscii(
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

  if ( (byte_4CB2EB9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CB2EB9 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_1115/*"0"*/;
  if ( isUppercase )
    v6 = 32;
  else
    v6 = 0;
  v7 = n % 0xAu;
  v8 = 96 - v6;
  v9 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64044104(v9, 5, 0);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v14 = n / 0x64u % 0xA;
      if ( v14 >= 2 )
      {
        if ( !v9 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_64053080(v9, v8 | v14, 0);
      }
      else if ( !v9 )
      {
LABEL_25:
        sub_1C6BC60(v10, v11);
      }
      System_Text_StringBuilder__Append_64053080(v9, 107 - v6, 0);
      v13 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v9 )
        goto LABEL_25;
      v13 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v13 >= 2 )
      System_Text_StringBuilder__Append_64053080(v9, v8 | v13, 0);
    System_Text_StringBuilder__Append_64053080(v9, 106 - v6, 0);
    if ( !v7 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                                  v9,
                                  v9->klass->vtable._3_ToString.method);
  }
  else if ( !v9 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_64053080(v9, v8 | v7, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                              v9,
                              v9->klass->vtable._3_ToString.method);
}


void QuestBoardListViewItemDraw__CreateInfoTextList(
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
  const MethodInfo *v30; // x3
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
  const MethodInfo *v44; // x3
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
  il2cpp_array_size_t max_length; // x8
  BoardMessageEntity_o *v56; // x27
  System_Collections_Generic_List_object__o *v57; // x25
  System_String_o *v58; // x24
  int64_t endTime; // x19
  QuestBoardInformationText_o *v60; // x26
  int32_t v61; // w2
  const MethodInfo *v62; // x3
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
  const MethodInfo *v83; // x3
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

  if ( (byte_4CB2E95 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_BoardMessageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&QuestBoardInformationText_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_25211/*"{0}"*/);
    sub_1C6BA08(&StringLiteral_13433/*"TIME_REST_QUEST_BOARD_EVENT"*/);
    sub_1C6BA08(&StringLiteral_13431/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4CB2E95 = 1;
  }
  entity = 0;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v90 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        v9,
                                                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = DataManager__GetMasterData_object_(
               v9,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_86;
  v12 = checkTime;
  v91 = v9;
  v88 = quest_info_k__BackingField;
  v89 = AreaBoardInfo_k__BackingField;
  key = warId;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0);
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
          v22 = (QuestBoardInformationText_o *)sub_1C6BC54(*v14);
          v23 = (Il2CppObject *)v22;
          v24 = v18;
          v25 = message;
          v26 = closedAt;
          goto LABEL_25;
        case 2:
          Instance = DataManager__GetMasterData_object_(
                       v91,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v18->fields.referenceId,
                       (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v27 = *((int *)Instance + 39);
          break;
        case 3:
          Instance = DataManager__GetMasterData_object_(
                       v91,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v18->fields.referenceId,
                       (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
                       (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v27 = *((_QWORD *)Instance + 12);
          break;
        case 5:
          if ( !MasterData_object )
            goto LABEL_86;
          Data = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v18->fields.referenceId, 0);
          v36 = v18->fields.message;
          v37 = v18->fields.closedAt;
          v38 = v14;
          v39 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          v40 = *v14;
          v41 = Data;
          v42 = (QuestBoardInformationText_o *)sub_1C6BC54(v40);
          QuestBoardInformationText___ctor_36693896(v42, v18, v36, v37, checkTime, v41, 0);
          if ( !v39 )
            goto LABEL_86;
          items = v39->fields._items;
          v46 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v39->fields._version;
          if ( !items )
            goto LABEL_86;
          size = v39->fields._size;
          v14 = v38;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v39,
              (Il2CppObject *)v42,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &items->obj.klass + size;
            v39->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v42;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
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
        v22 = (QuestBoardInformationText_o *)sub_1C6BC54(*v14);
        v23 = (Il2CppObject *)v22;
        v24 = v18;
        v25 = v28;
        v26 = v27;
LABEL_25:
        QuestBoardInformationText___ctor_36693896(v22, v24, v25, v26, v12, 0, 0);
        if ( !mInfoTextList )
          break;
        v31 = mInfoTextList->fields._items;
        v32 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !v31 )
          break;
        v33 = mInfoTextList->fields._size;
        if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            v23,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &v31->obj.klass + v33;
          mInfoTextList->fields._size = v33 + 1;
          v34[4] = (Il2CppClass *)v23;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v23, v29, v30);
        }
      }
LABEL_37:
      if ( v16 == v17 )
        goto LABEL_40;
      if ( (unsigned int)++v17 >= LODWORD(v15->max_length) )
        goto LABEL_87;
    }
LABEL_86:
    sub_1C6BC60(Instance, v6);
  }
LABEL_40:
  v49 = v14;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Instance )
    goto LABEL_86;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         key,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_86;
    HasFlag = WarEntity__HasFlag((WarEntity_o *)entity, 0x80000, 0);
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
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_86;
    Instance = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
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
        Instance = (void *)EventEntity__IsEventPeriod(v89->fields.eventEnt, checkTime, 0);
        if ( !v54 && ((unsigned __int8)Instance & 1) != 0 )
        {
          max_length = v15->max_length;
          if ( max_length )
          {
            if ( !(_DWORD)max_length )
              goto LABEL_87;
            v56 = v15->m_Items[0];
          }
          else
          {
            v56 = 0;
          }
          v57 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v58 = LocalizationManager__Get((System_String_o *)StringLiteral_13433/*"TIME_REST_QUEST_BOARD_EVENT"*/, 0);
          endTime = v88->fields.endTime;
          v60 = (QuestBoardInformationText_o *)sub_1C6BC54(*v14);
          QuestBoardInformationText___ctor_36693896(v60, v56, v58, endTime, checkTime, 0, 0);
          if ( !v57 )
            goto LABEL_86;
          v63 = v57->fields._items;
          v64 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v57->fields._version;
          if ( !v63 )
            goto LABEL_86;
          v65 = v57->fields._size;
          if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v57,
              (Il2CppObject *)v60,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &v63->obj.klass + v65;
            v57->fields._size = v65 + 1;
            v66[4] = (Il2CppClass *)v60;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v60, v61, v62);
          }
        }
      }
    }
  }
  Instance = v90;
  if ( !v90 )
    goto LABEL_86;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)v90, 7, 1, 0, 0);
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
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, id, 0);
      if ( Instance )
      {
        v72 = Instance;
        Instance = (void *)EventCampaignEntity__isDispWarId((EventCampaignEntity_o *)Instance, key, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v74 = v72[5];
          v75 = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                  (QuestBoardListViewItemDraw_o *)Instance,
                  v15,
                  id,
                  v73);
          Instance = (void *)CombineAdjustTarget__isTerminalExposable(v74, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 && !v75 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v76 = LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
            EventName = (Il2CppObject *)EventEntity__getEventName(v70, 0);
            v78 = System_String__Format_64008100(v76, EventName, (Il2CppObject *)StringLiteral_25211/*"{0}"*/, 0);
            v79 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
            v80 = EventEntity__GetEndTime(v70, 0, 0);
            v81 = (QuestBoardInformationText_o *)sub_1C6BC54(*v49);
            QuestBoardInformationText___ctor(v81, v78, v80, 1, 1, 0, 0);
            if ( !v79 )
              goto LABEL_86;
            v84 = v79->fields._items;
            v85 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
            ++v79->fields._version;
            if ( !v84 )
              goto LABEL_86;
            v86 = v79->fields._size;
            if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v79,
                (Il2CppObject *)v81,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
            }
            else
            {
              v87 = &v84->obj.klass + v86;
              v79->fields._size = v86 + 1;
              v87[4] = (Il2CppClass *)v81;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v87 + 4), (int32_t)v81, v82, v83);
            }
          }
        }
      }
      v67 = *((_DWORD *)v68 + 6);
      if ( (int)++v69 >= v67 )
        return;
    }
LABEL_87:
    sub_1C6BC68(Instance);
  }
}


QuestBoardInformationText_o *QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        EventEntity_o *eventEnt,
        EventCampaignEntity_o *eventCampaignEnt,
        int32_t phase,
        bool isQuestNoneCleared,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass375_0_o *v13; // x26
  Il2CppObject *isTerminalExposable; // x0
  QuestBoardListViewManager_c *v15; // x1
  int target; // w25
  QuestBoardInformationText_o *v17; // x27
  int32_t id; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *ContinueItemInfoList; // x20
  System_Predicate_object__o *v24; // x21
  Il2CppObject *v25; // x0
  UserOwnItemInfo_o *v26; // x20
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  System_String_o *v29; // x21
  System_String_o *EventName; // x22
  int32_t ImageId; // w20
  TerminalBoardOptionTextData_o *v32; // x23
  int64_t v33; // x19
  QuestBoardInformationText_o *v34; // x0
  bool v35; // w3
  System_String_o *v36; // x1
  int64_t v37; // x2
  TerminalBoardOptionTextData_o *v38; // x5
  bool IsOverrideEntryCondMessage; // w20
  System_String_o *v40; // x0
  System_String_o *v41; // x21
  int64_t EndTime; // x19
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v48; // x0
  int64_t checkTime; // x24
  int64_t v50; // x25
  QuestBoardInformationText_o *v51; // x22
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  QuestBoardInformationText_o *result; // x0
  System_String_o *v59; // x20
  Il2CppObject *v60; // x0
  System_String_o *v61; // x20
  QuestBoardListViewItemDraw_o *v62; // x0
  QuestEntity_o *v63; // x1
  EventCampaignEntity_o *v64; // x2
  bool v65; // w3
  int32_t *v66; // x4
  int32_t *v67; // x5
  bool *v68; // x6
  const MethodInfo *v69; // x7
  int64_t Num_k__BackingField; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CB2EBD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Predicate_UserOwnItemInfo__TypeInfo);
    sub_1C6BA08(&QuestBoardInformationText_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&TerminalBoardOptionTextData_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass375_0__CreateQuestBoardInformationText_b__0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass375_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_25211/*"{0}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_13431/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    sub_1C6BA08(&StringLiteral_13432/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/);
    byte_4CB2EBD = 1;
  }
  message = 0;
  v13 = (QuestBoardListViewItemDraw___c__DisplayClass375_0_o *)sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass375_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass375_0___ctor(v13, 0);
  if ( !eventCampaignEnt )
    goto LABEL_71;
  target = eventCampaignEnt->fields.target;
  isTerminalExposable = (Il2CppObject *)CombineAdjustTarget__isTerminalExposable(target, 0);
  v17 = 0;
  if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    return v17;
  if ( !eventEnt )
    goto LABEL_71;
  id = eventEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_71;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_71;
  v15 = QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewManager_TypeInfo )
  {
    if ( !v13 )
      goto LABEL_71;
    v13->fields.checkTime = (int64_t)manager[1].fields.rightItem;
    if ( !isTerminalExposable )
      goto LABEL_71;
    isTerminalExposable = (Il2CppObject *)EventCampaignReleaseMaster__isRelease(
                                            (EventCampaignReleaseMaster_o *)isTerminalExposable,
                                            id,
                                            eventCampaignEnt->fields.target,
                                            0);
    if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    {
      if ( !isQuestNoneCleared )
      {
        v17 = 0;
        if ( target == 25 || target == 35 )
          return v17;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( !isTerminalExposable )
        goto LABEL_71;
      IsOverrideEntryCondMessage = EventCampaignMaster__IsOverrideEntryCondMessage(
                                     (EventCampaignMaster_o *)isTerminalExposable,
                                     &message,
                                     eventCampaignEnt,
                                     0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
      v41 = System_String__Format_64008100(v40, (Il2CppObject *)message, (Il2CppObject *)StringLiteral_25211/*"{0}"*/, 0);
      EndTime = EventEntity__GetEndTime(eventEnt, 0, 0);
      v34 = (QuestBoardInformationText_o *)sub_1C6BC54(QuestBoardInformationText_TypeInfo);
      v17 = v34;
      v35 = IsOverrideEntryCondMessage;
      v36 = v41;
LABEL_30:
      v37 = EndTime;
      v38 = 0;
LABEL_31:
      QuestBoardInformationText___ctor(v34, v36, v37, v35, 0, v38, 0);
      return v17;
    }
    if ( target == 28 )
    {
      ContinueItemInfoList = (System_Collections_Generic_List_object__o *)UserOwnItemDetail__GetContinueItemInfoList(0);
      v24 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_UserOwnItemInfo__TypeInfo);
      System_Predicate_object____ctor(
        v24,
        (Il2CppObject *)v13,
        Method_QuestBoardListViewItemDraw___c__DisplayClass375_0__CreateQuestBoardInformationText_b__0__,
        0);
      if ( ContinueItemInfoList )
      {
        v25 = System_Collections_Generic_List_object___Find(
                ContinueItemInfoList,
                (System_Predicate_T__o *)v24,
                (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v25 )
        {
          v26 = (UserOwnItemInfo_o *)v25;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13432/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, 0);
          Num_k__BackingField = v26->fields._Num_k__BackingField;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Num_k__BackingField);
          v29 = System_String__Format_64008100(v27, v28, (Il2CppObject *)StringLiteral_25211/*"{0}"*/, 0);
          EventName = EventEntity__getEventName(eventEnt, 0);
          ImageId = UserOwnItemInfo__get_ImageId(v26, 0);
          v32 = (TerminalBoardOptionTextData_o *)sub_1C6BC54(TerminalBoardOptionTextData_TypeInfo);
          TerminalBoardOptionTextData___ctor(v32, EventName, v29, ImageId, 0, 0, 0, 0);
          v33 = EventEntity__GetEndTime(eventEnt, 0, 0);
          v34 = (QuestBoardInformationText_o *)sub_1C6BC54(QuestBoardInformationText_TypeInfo);
          v17 = v34;
          v35 = 1;
          v36 = v29;
          v37 = v33;
          v38 = v32;
          goto LABEL_31;
        }
        return 0;
      }
      goto LABEL_71;
    }
    if ( isQuestNoneCleared )
    {
      if ( target > 24 )
      {
        if ( target != 26 )
        {
          if ( target != 25 )
            goto LABEL_68;
LABEL_54:
          if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
            return 0;
          if ( !questEntity )
            goto LABEL_71;
          consumeType = questEntity->fields.consumeType;
          if ( consumeType != 4 && consumeType != 1 )
            return 0;
LABEL_43:
          if ( target == 24 )
          {
            if ( !QuestBoardListViewItemDraw__IsValidSupportSelection(
                    (QuestBoardListViewItemDraw_o *)isTerminalExposable,
                    questEntity,
                    phase,
                    v22) )
              return 0;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( !questEntity || !isTerminalExposable )
LABEL_71:
              sub_1C6BC60(isTerminalExposable, v15);
            Entity = QuestPhaseMaster__GetEntity(
                       (QuestPhaseMaster_o *)isTerminalExposable,
                       questEntity->fields.id,
                       phase,
                       0);
            targetIds = eventCampaignEnt->fields.targetIds;
            if ( targetIds && Entity && targetIds->max_length )
            {
              if ( Entity->fields.isNpcOnly )
                return 0;
              goto LABEL_67;
            }
            if ( Entity )
            {
LABEL_67:
              v17 = 0;
              if ( QuestPhaseEntity__IsNoneSupportFriendPoint(Entity, 0) )
                return v17;
            }
          }
LABEL_68:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v59 = LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
          v60 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0);
          v61 = System_String__Format_64008100(v59, v60, (Il2CppObject *)StringLiteral_25211/*"{0}"*/, 0);
          EndTime = EventEntity__GetEndTime(eventEnt, 0, 0);
          v34 = (QuestBoardInformationText_o *)sub_1C6BC54(QuestBoardInformationText_TypeInfo);
          v17 = v34;
          v35 = 1;
          v36 = v61;
          goto LABEL_30;
        }
LABEL_59:
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v48 = EventEntity__GetEndTime(eventEnt, 0, 0);
        checkTime = v13->fields.checkTime;
        v50 = v48;
        v51 = (QuestBoardInformationText_o *)sub_1C6BC54(QuestBoardInformationText_TypeInfo);
        QuestBoardInformationText___ctor_36694052(v51, eventEnt, detail, v50, checkTime, eventCampaignEnt, 0);
        if ( mInfoTextList )
        {
          items = mInfoTextList->fields._items;
          v55 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++mInfoTextList->fields._version;
          if ( items )
          {
            size = mInfoTextList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                mInfoTextList,
                (Il2CppObject *)v51,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
            }
            else
            {
              v57 = &items->obj.klass + size;
              mInfoTextList->fields._size = size + 1;
              v57[4] = (Il2CppClass *)v51;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v51, v52, v53);
            }
            return 0;
          }
        }
        goto LABEL_71;
      }
    }
    else if ( target > 24 )
    {
      v17 = 0;
      if ( target == 25 )
        return v17;
      if ( target != 26 )
      {
        if ( target == 35 )
          return v17;
        goto LABEL_68;
      }
      goto LABEL_59;
    }
    if ( target != 12 )
      goto LABEL_43;
    goto LABEL_54;
  }
  sub_1C6BFFC(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v62, v63, v64, v65, v66, v67, v68, v69);
  return result;
}


QuestBoardInformationText_o *QuestBoardListViewItemDraw__CreateQuestBoardInformationText_36615168(
        QuestBoardListViewItemDraw_o *this,
        int64_t endTime,
        int64_t checkTime,
        int32_t warId,
        System_String_o *baseText,
        const MethodInfo *method)
{
  __int64 v10; // x22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  __int64 v19; // x23
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  System_String_o *IfExists; // x23
  __int64 v27; // x24
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  System_String_o *v34; // x24
  QuestBoardInformationText_o *v35; // x21
  int32_t v37; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v38; // [xsp+18h] [xbp-58h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4CB2EBE & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&QuestBoardInformationText_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C6BA08(&StringLiteral_13435/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/);
    sub_1C6BA08(&StringLiteral_13439/*"TIME_REST_QUEST_BOARD_QUEST_{0}"*/);
    sub_1C6BA08(&StringLiteral_13436/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR_{0}"*/);
    sub_1C6BA08(&StringLiteral_13437/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/);
    sub_1C6BA08(&StringLiteral_13438/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR_{0}"*/);
    byte_4CB2EBE = 1;
  }
  if ( endTime < 1 )
    return 0;
  if ( System_String__IsNullOrEmpty(baseText, 0) )
  {
    v10 = sub_1C6BAB0(string___TypeInfo, 2);
    v39 = warId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v12 = System_String__Format((System_String_o *)StringLiteral_13439/*"TIME_REST_QUEST_BOARD_QUEST_{0}"*/, v11, 0);
    if ( !v10 )
      goto LABEL_23;
    if ( !*(_DWORD *)(v10 + 24) )
      goto LABEL_22;
    *(_QWORD *)(v10 + 32) = v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v12, v14, v15);
    if ( *(_DWORD *)(v10 + 24) <= 1u )
      goto LABEL_22;
    v18 = StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST"*/;
    *(_QWORD *)(v10 + 40) = StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 40), v18, v16, v17);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseText = LocalizationManager__GetIfExists((System_String_array *)v10, 0);
  }
  v19 = sub_1C6BAB0(string___TypeInfo, 2);
  v38 = warId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v12 = System_String__Format((System_String_o *)StringLiteral_13438/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR_{0}"*/, v20, 0);
  if ( !v19 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v19 + 24)
    || (*(_QWORD *)(v19 + 32) = v12,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v12, v21, v22),
        *(_DWORD *)(v19 + 24) <= 1u) )
  {
LABEL_22:
    sub_1C6BC68(v12);
  }
  v25 = StringLiteral_13437/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_13437/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 40), v25, v23, v24);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v19, 0);
  v27 = sub_1C6BAB0(string___TypeInfo, 2);
  v37 = warId;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v12 = System_String__Format((System_String_o *)StringLiteral_13436/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR_{0}"*/, v28, 0);
  if ( !v27 )
LABEL_23:
    sub_1C6BC60(v12, v13);
  if ( !*(_DWORD *)(v27 + 24) )
    goto LABEL_22;
  *(_QWORD *)(v27 + 32) = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v12, v29, v30);
  if ( *(_DWORD *)(v27 + 24) <= 1u )
    goto LABEL_22;
  v33 = StringLiteral_13435/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/;
  *(_QWORD *)(v27 + 40) = StringLiteral_13435/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 40), v33, v31, v32);
  v34 = LocalizationManager__GetIfExists((System_String_array *)v27, 0);
  v35 = (QuestBoardInformationText_o *)sub_1C6BC54(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor_36692980(v35, baseText, endTime, checkTime, IfExists, v34, 0);
  return v35;
}


BannerEntity_o *QuestBoardListViewItemDraw__FindExchangeSvtCoinBannerEntity(
        QuestBoardListViewItemDraw_o *this,
        BannerEntity_array *entityList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  BannerEntity_o *v5; // x20
  unsigned __int64 v6; // x22
  BannerEntity_o *v7; // x21

  if ( !entityList )
    sub_1C6BC60(this, 0);
  max_length = entityList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C6BC68(this);
    v7 = entityList->m_Items[v6];
    if ( v7 )
    {
      this = (QuestBoardListViewItemDraw_o *)BannerEntity__IsExchangeSvtCoin(entityList->m_Items[v6], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v5 )
        {
          if ( v5->fields.terminalBannerPriority <= v7->fields.terminalBannerPriority )
            v5 = v7;
        }
        else
        {
          v5 = v7;
        }
      }
    }
    LODWORD(max_length) = entityList->max_length;
    ++v6;
  }
  while ( (__int64)v6 < (int)max_length );
  return v5;
}


BoardMessageEntity_o *QuestBoardListViewItemDraw__FindOverrideQuestMessage(
        QuestBoardListViewItemDraw_o *this,
        BoardMessageEntity_array *boardMessageData,
        int32_t eventId,
        const MethodInfo *method)
{
  int max_length; // w8
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
        return 0;
    }
LABEL_10:
    sub_1C6BC60(this, boardMessageData);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__ForceChangeQuestBoardDisp(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        bool isClose,
        bool forceUnknownQuestName,
        const MethodInfo *method)
{
  ServantClassIconComponent_o *Master_object; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  int32_t size; // w2
  int v14; // w9
  UILabel_o *mTitleNameLb; // x22
  int32_t questPhase; // w24
  const MethodInfo *v17; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v18; // x22
  int32_t v19; // w2
  struct ServantClassIconComponent_array *v20; // x22
  int v21; // w8
  unsigned int v22; // w24
  System_String_o *v23; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x23
  Il2CppObject *BattleName; // x0
  float v26; // s10
  float v27; // s9
  float v28; // s8
  struct ServantClassIconComponent_array *mClassIcons; // x22
  int max_length; // w8
  unsigned int v31; // w23
  int32_t i; // w22
  struct UISprite_array *mPhaseSp; // x8
  float v34; // s1 OVERLAPPED
  float v35; // s0
  float v36; // s3
  float v37; // s2
  unsigned __int64 v38; // d0 OVERLAPPED
  float b; // s2
  float a; // s3
  int v41; // s1
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // [xsp+10h] [xbp-80h]
  bool isTripleItemConsume; // [xsp+20h] [xbp-70h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+24h] [xbp-6Ch] BYREF
  bool isDoubleItemConsume; // [xsp+28h] [xbp-68h] BYREF
  bool isNotItemConsume; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t fixedVal; // [xsp+30h] [xbp-60h] BYREF
  int32_t costCalcVal; // [xsp+34h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2EDD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_25211/*"{0}"*/);
    sub_1C6BA08(&StringLiteral_14826/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2EDD = 1;
  }
  entity = 0;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   &entity,
                                                   questInfo->fields.questId,
                                                   (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  fixedVal = -1;
  costCalcVal = 0;
  isNotItemConsume = 0;
  if ( isClose )
  {
    mInfoTextList = this->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_90;
    size = mInfoTextList->fields._size;
    v14 = mInfoTextList->fields._version + 1;
    mInfoTextList->fields._size = 0;
    mInfoTextList->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mInfoTextList->fields._items, 0, size, 0);
    if ( forceUnknownQuestName )
    {
      mTitleNameLb = this->fields.mTitleNameLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ServantClassIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14826/*"UNKNOWN_QUEST_NAME"*/, 0);
      if ( !mTitleNameLb )
        goto LABEL_90;
      UILabel__set_text(mTitleNameLb, (System_String_o *)Master_object, 0);
    }
    else
    {
      QuestBoardListViewItemDraw__SetClosedTitleName(this, questInfo, (QuestEntity_o *)entity, v11);
    }
    mClassIcons = this->fields.mClassIcons;
    if ( !mClassIcons )
      goto LABEL_90;
    max_length = mClassIcons->max_length;
    v26 = 0.039216;
    v27 = 0.3902;
    if ( max_length >= 1 )
    {
      v31 = 0;
      v28 = 0.5;
      while ( v31 < max_length )
      {
        Master_object = mClassIcons->m_Items[v31];
        if ( !Master_object )
          goto LABEL_90;
        v52.fields.r = 0.5;
        v52.fields.g = 0.5;
        v52.fields.b = 0.5;
        v52.fields.a = 1.0;
        ServantClassIconComponent__SetColor(Master_object, v52, 0);
        max_length = mClassIcons->max_length;
        if ( (int)++v31 >= max_length )
          goto LABEL_48;
      }
      goto LABEL_91;
    }
    v28 = 0.5;
  }
  else
  {
    questPhase = questInfo->fields.questPhase;
    Master_object = (ServantClassIconComponent_o *)MapControl_QuestInfo__GetPhaseMax(questInfo, 0);
    if ( !entity )
      goto LABEL_90;
    v18 = this->fields.mInfoTextList;
    v19 = questPhase + 1 >= (int)Master_object ? (int)Master_object : questPhase + 1;
    Master_object = (ServantClassIconComponent_o *)QuestBoardListViewItemDraw__GetCampaignText(
                                                     this,
                                                     (int32_t)entity[1].klass,
                                                     v19,
                                                     0,
                                                     &costCalcVal,
                                                     &fixedVal,
                                                     &isNotItemConsume,
                                                     v17);
    if ( !v18 )
      goto LABEL_90;
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v18,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    v20 = this->fields.mClassIcons;
    if ( !v20 )
      goto LABEL_90;
    v21 = v20->max_length;
    if ( v21 >= 1 )
    {
      v22 = 0;
      while ( v22 < v21 )
      {
        Master_object = v20->m_Items[v22];
        if ( !Master_object )
          goto LABEL_90;
        v51.fields.r = 1.0;
        v51.fields.g = 1.0;
        v51.fields.b = 1.0;
        v51.fields.a = 1.0;
        ServantClassIconComponent__SetColor(Master_object, v51, 0);
        v21 = v20->max_length;
        if ( (int)++v22 >= v21 )
          goto LABEL_28;
      }
LABEL_91:
      sub_1C6BC68(Master_object);
    }
LABEL_28:
    Master_object = (ServantClassIconComponent_o *)entity;
    if ( !entity
      || (Master_object = (ServantClassIconComponent_o *)QuestEntity__getQuestName((QuestEntity_o *)entity, 0)) == 0 )
    {
LABEL_90:
      sub_1C6BC60(Master_object, v10);
    }
    v23 = (System_String_o *)Master_object;
    if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_25211/*"{0}"*/, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ServantClassIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !entity )
        goto LABEL_90;
      v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      Master_object = (ServantClassIconComponent_o *)QuestEntity__getServantId((QuestEntity_o *)entity, 0);
      if ( !v24 )
        goto LABEL_90;
      Master_object = (ServantClassIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                       v24,
                                                       (int32_t)Master_object,
                                                       (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_90;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0);
      v23 = System_String__Format(v23, BattleName, 0);
    }
    Master_object = (ServantClassIconComponent_o *)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_90;
    UILabel__set_text((UILabel_o *)Master_object, v23, 0);
    v26 = 0.078431;
    v27 = 0.78039;
    v28 = 1.0;
  }
LABEL_48:
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_90;
  v53.fields.a = 1.0;
  v53.fields.r = v28;
  v53.fields.g = v28;
  v53.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v53, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mAdvanceNoticeLb;
  if ( !Master_object )
    goto LABEL_90;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mOverwriteAdvanceNoticeLb;
  if ( !Master_object )
    goto LABEL_90;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Master_object,
                                                   0);
  if ( !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Master_object,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_90;
  v54.fields.a = 1.0;
  v54.fields.r = v28;
  v54.fields.g = v28;
  v54.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v54, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mNoBattleObj;
  if ( !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Master_object,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_90;
  v55.fields.a = 1.0;
  v55.fields.r = v28;
  v55.fields.g = v28;
  v55.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v55, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleLevelLb;
  if ( !Master_object )
    goto LABEL_90;
  v56.fields.a = 1.0;
  v56.fields.r = v28;
  v56.fields.g = v28;
  v56.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v56, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleLevelSp;
  if ( !Master_object )
    goto LABEL_90;
  v57.fields.a = 1.0;
  v57.fields.r = v28;
  v57.fields.g = v28;
  v57.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v57, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleLevelStrSp;
  if ( !Master_object )
    goto LABEL_90;
  v58.fields.a = 1.0;
  v58.fields.r = v28;
  v58.fields.g = v28;
  v58.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v58, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mLabelNameSp;
  if ( !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Master_object,
                                                   0);
  if ( !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Master_object,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_90;
  v59.fields.a = 1.0;
  v59.fields.r = v28;
  v59.fields.g = v28;
  v59.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v59, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_90;
  v60.fields.a = 1.0;
  v60.fields.r = v28;
  v60.fields.g = v28;
  v60.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v60, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Master_object,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_90;
  v61.fields.a = 1.0;
  v61.fields.r = v28;
  v61.fields.g = v28;
  v61.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v61, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_90;
  v62.fields.a = 1.0;
  v62.fields.r = v28;
  v62.fields.g = v28;
  v62.fields.b = v28;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, v62, 0);
  for ( i = 0; ; ++i )
  {
    Master_object = (ServantClassIconComponent_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Master_object = (ServantClassIconComponent_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)&Master_object[2].fields._IsNormalClassIcon_k__BackingField + 32LL) )
      break;
    mPhaseSp = this->fields.mPhaseSp;
    if ( !mPhaseSp )
      goto LABEL_90;
    if ( (unsigned int)i >= LODWORD(mPhaseSp->max_length) )
      goto LABEL_91;
    Master_object = (ServantClassIconComponent_o *)mPhaseSp->m_Items[i];
    if ( !Master_object )
      goto LABEL_90;
    v63.fields.a = 1.0;
    v63.fields.r = v28;
    v63.fields.g = v28;
    v63.fields.b = v28;
    UIWidget__set_color((UIWidget_o *)Master_object, v63, 0);
  }
  Master_object = (ServantClassIconComponent_o *)this->fields.mOptionPreBattleSp;
  v34 = v26 * 0.5;
  if ( !isClose )
    v34 = v26;
  if ( !Master_object )
    goto LABEL_90;
  v35 = v27 * 0.5;
  if ( !isClose )
    v35 = v27;
  v36 = 1.0;
  v37 = v34;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(&v34 - 1), 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mOptionRestrinctionSp;
  if ( isClose )
  {
    v38 = vmul_f32(
            *(float32x2_t *)&this->fields.optionRestrinctionOriginColor.fields.r,
            (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    b = this->fields.optionRestrinctionOriginColor.fields.b * 0.5;
  }
  else
  {
    v38 = *(_QWORD *)&this->fields.optionRestrinctionOriginColor.fields.r;
    b = this->fields.optionRestrinctionOriginColor.fields.b;
  }
  if ( !Master_object )
    goto LABEL_90;
  a = this->fields.optionRestrinctionOriginColor.fields.a;
  v41 = HIDWORD(v38);
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v38, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mOptionRestrinctionLb;
  if ( !Master_object )
    goto LABEL_90;
  v64.fields.a = 1.0;
  v64.fields.r = v28;
  v64.fields.g = v28;
  v64.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v64, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mClassStrSp;
  if ( !Master_object )
    goto LABEL_90;
  v65.fields.a = 1.0;
  v65.fields.r = v28;
  v65.fields.g = v28;
  v65.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)Master_object, v65, 0);
  v66.fields.a = 1.0;
  v66.fields.r = v28;
  v66.fields.g = v28;
  v66.fields.b = v28;
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    (QuestEntity_o *)entity,
    0,
    costCalcVal,
    fixedVal,
    isNotItemConsume,
    v66,
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    isClose,
    v43);
  if ( questInfo->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, !isClose, v42);
  if ( questInfo->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, !isClose, v42);
}


System_String_o *QuestBoardListViewItemDraw__GetApSpriteFileName(int32_t bannerId, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v2; // x0
  System_String_o *QUEST_BOARD_AP_SPNAME_PREFIX; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = bannerId;
  if ( (byte_4CB2ED7 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2ED7 = 1;
  }
  v2 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v2 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_AP_SPNAME_PREFIX = v2->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_63966792(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0);
}


System_Collections_Generic_List_QuestBoardInformationText__o *QuestBoardListViewItemDraw__GetCampaignText(
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
  __int64 naturalAligment; // x10
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
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_QuestBoardInformationText__o *result; // x0
  QuestBoardListViewItemDraw_o *v42; // x0
  QuestBoardListViewItem_o *v43; // x1
  bool v44; // w2
  bool v45; // w3
  const MethodInfo *v46; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB2EBA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&QuestBoardInformationText_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_25211/*"{0}"*/);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_13441/*"TIME_REST_STRING"*/);
    byte_4CB2EBA = 1;
  }
  entity = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
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
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
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
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_28;
  manager = (int64_t *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_28;
  v19 = QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*manager + 304) >= (unsigned int)naturalAligment
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*manager + 200) + 8 * naturalAligment - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_28;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                               questId,
                               manager[73],
                               0);
    if ( !EntityByQuestIdAndTime )
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    v26 = EntityByQuestIdAndTime;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_28;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
            &entity,
            v26->fields.eventId,
            (const MethodInfo_33F9128 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
    EventName = EventEntity__getEventName((EventEntity_o *)entity, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13441/*"TIME_REST_STRING"*/, 0);
    v33 = System_String__Concat_64007060(
            EventName,
            (System_String_o *)StringLiteral_113/*" "*/,
            v32,
            (System_String_o *)StringLiteral_25211/*"{0}"*/,
            0);
    v34 = (QuestBoardInformationText_o *)sub_1C6BC54(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v34, v33, v30, 0, 1, 0, 0);
    items = v15->fields._items;
    v38 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++v15->fields._version;
    if ( items )
    {
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v34,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v34;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v34, v35, v36);
      }
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    }
LABEL_28:
    sub_1C6BC60(CampaignTextListByEventQuestMaster, v19);
  }
  sub_1C6BFFC(manager);
  QuestBoardListViewItemDraw__SetItemOfFolderForTerminalTopEffect(v42, v43, v44, v45, v46);
  return result;
}


System_Collections_Generic_List_QuestBoardInformationText__o *QuestBoardListViewItemDraw__GetCampaignTextListByEventQuestMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        bool *isNotItemConsume,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x29
  EventEntity_array *EnabledEventCampaignForQuest; // x25
  System_Collections_Generic_List_object__o *v14; // x23
  void *Instance; // x0
  QuestBoardListViewManager_c *v16; // x1
  DataManager_o *v17; // x21
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v19; // x20
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v21; // x24
  __int64 naturalAligment; // x9
  Il2CppObject *v23; // x21
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_object__o *v25; // x28
  int max_length; // w8
  unsigned int v27; // w22
  EventEntity_o *v28; // x8
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppObject *v34; // x27
  Il2CppClass **v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t current; // w1
  EventCampaignEntity_o **v48; // x20
  __int64 v49; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  System_Func_object__bool__o *v53; // x27
  Il2CppObject *v54; // x0
  const MethodInfo *v55; // x6
  Il2CppObject *QuestBoardInformationText; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x1
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x20
  __int64 v65; // x0
  __int64 v66; // x1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w1
  System_Func_object__bool__o *v70; // x21
  Il2CppObject *v71; // x0
  const MethodInfo *v72; // x7
  void *v74; // x0
  void *v75; // x19
  int v76; // w1
  __int64 v77; // x20
  int32_t *v78; // [xsp+0h] [xbp-D0h]
  int32_t *v79; // [xsp+8h] [xbp-C8h]
  bool *v80; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+30h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+50h] [xbp-80h] BYREF

  EnabledEventCampaignForQuest = (EventEntity_array *)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4CB2EBB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C6BA08(&System_Func_EventEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass373_0__GetCampaignTextListByEventQuestMaster_b__0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass373_0_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass373_1__GetCampaignTextListByEventQuestMaster_b__1__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass373_1_TypeInfo);
    byte_4CB2EBB = 1;
  }
  memset(&v86, 0, sizeof(v86));
  entity = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  v17 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v19 = DataManager__GetMasterData_object_(
          v17,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v17,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_56;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_56;
  v21 = (QuestEntity_o *)Instance;
  Instance = mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_56;
  v16 = QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !MasterData_object )
      goto LABEL_56;
    EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                     (EventQuestMaster_o *)MasterData_object,
                                     questId,
                                     phase,
                                     *((_QWORD *)Instance + 73),
                                     7,
                                     0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v78 = costCalcVal;
    v79 = fixedVal;
    v80 = isNotItemConsume;
    v23 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    v25 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !EnabledEventCampaignForQuest )
      goto LABEL_56;
    max_length = EnabledEventCampaignForQuest->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
          sub_1C6BC68(Instance);
        v28 = EnabledEventCampaignForQuest->m_Items[v27];
        if ( !v28 || !v19 )
          break;
        Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)v19, v28->fields.id, 0);
        if ( Instance )
        {
          if ( !v25 )
            break;
          items = v25->fields._items;
          v32 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v25->fields._version;
          if ( !items )
            break;
          size = v25->fields._size;
          v34 = (Il2CppObject *)Instance;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)Instance,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v25->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v34;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v34, v29, v30);
          }
          if ( !v23 )
            break;
          Instance = (void *)EventCampaignReleaseMaster__isRelease(
                               (EventCampaignReleaseMaster_o *)v23,
                               (int32_t)v34[1].klass,
                               HIDWORD(v34[1].klass),
                               0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            v38 = v8->fields._items;
            v39 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v8->fields._version;
            if ( !v38 )
              break;
            v40 = v8->fields._size;
            if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                v34,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &v38->obj.klass + v40;
              v8->fields._size = v40 + 1;
              v41[4] = (Il2CppClass *)v34;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v34, v36, v37);
            }
          }
        }
        max_length = EnabledEventCampaignForQuest->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_33;
      }
LABEL_56:
      sub_1C6BC60(Instance, v16);
    }
LABEL_33:
    Instance = EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v25,
                 0);
    if ( !Instance )
      goto LABEL_56;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v84,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v86 = v84;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v86,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v42 = sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass373_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass373_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass373_0_o *)v42,
        0);
      if ( !v42 )
        sub_1C6BC60(v43, v44);
      current = (int32_t)v86.fields._current;
      *(_QWORD *)(v42 + 16) = v86.fields._current;
      v48 = (EventCampaignEntity_o **)(v42 + 16);
      sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 16), current, v45, v46);
      if ( !Master_object )
        sub_1C6BC60(v49, v50);
      v51 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, phase, 0);
      if ( v51 )
      {
        if ( !*v48 )
          sub_1C6BC60(v51, v52);
        if ( (*v48)->fields.target == 24 )
        {
          if ( !entity )
            sub_1C6BC60(0, v52);
          if ( QuestPhaseEntity__IsNoneSupportFriendPoint(entity, 0) )
            continue;
        }
      }
      v53 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v53,
        (Il2CppObject *)v42,
        Method_QuestBoardListViewItemDraw___c__DisplayClass373_0__GetCampaignTextListByEventQuestMaster_b__0__,
        0);
      v54 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
              (System_Collections_Generic_IEnumerable_TSource__o *)EnabledEventCampaignForQuest,
              (System_Func_TSource__bool__o *)v53,
              (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
      QuestBoardInformationText = (Il2CppObject *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                                    this,
                                                    v21,
                                                    (EventEntity_o *)v54,
                                                    *v48,
                                                    phase,
                                                    isQuestNoneCleared,
                                                    v55);
      v59 = QuestBoardInformationText;
      if ( QuestBoardInformationText )
      {
        if ( !v14 )
          sub_1C6BC60(QuestBoardInformationText, QuestBoardInformationText);
        v60 = v14->fields._items;
        v61 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++v14->fields._version;
        if ( !v60 )
          sub_1C6BC60(QuestBoardInformationText, QuestBoardInformationText);
        v62 = v14->fields._size;
        if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            QuestBoardInformationText,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = &v60->obj.klass + v62;
          v14->fields._size = v62 + 1;
          v63[4] = (Il2CppClass *)v59;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v59, v57, v58);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v86,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  else
  {
    sub_1C6BFFC(Instance);
    v75 = v74;
    if ( v76 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v86,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      sub_1D4FBE4(v75);
    }
    v77 = *(_QWORD *)__cxa_begin_catch(v74);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v86,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v77 )
      sub_1C6BC58(v77);
  }
  Instance = EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v8, 0);
  if ( !Instance )
    goto LABEL_56;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v86 = v84;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v86,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    v64 = sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass373_1_TypeInfo);
    QuestBoardListViewItemDraw___c__DisplayClass373_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass373_1_o *)v64,
      0);
    if ( !v64 )
      sub_1C6BC60(v65, v66);
    v69 = (int32_t)v86.fields._current;
    *(_QWORD *)(v64 + 16) = v86.fields._current;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 16), v69, v67, v68);
    v70 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v70,
      (Il2CppObject *)v64,
      Method_QuestBoardListViewItemDraw___c__DisplayClass373_1__GetCampaignTextListByEventQuestMaster_b__1__,
      0);
    v71 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
            (System_Collections_Generic_IEnumerable_TSource__o *)EnabledEventCampaignForQuest,
            (System_Func_TSource__bool__o *)v70,
            (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    QuestBoardListViewItemDraw__CalcQuestCost(
      (QuestBoardListViewItemDraw_o *)v71,
      v21,
      *(EventCampaignEntity_o **)(v64 + 16),
      isQuestNoneCleared,
      v78,
      v79,
      v80,
      v72);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v86,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v14;
}


System_Collections_Generic_List_QuestBoardInformationText__o *QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        bool *isNotItemConsume,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x25
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  DataManager_o *v12; // x20
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v14; // x26
  QuestEntity_o *v15; // x27
  DataManager_o *v16; // x28
  int32_t spotId; // w19
  Il2CppObject *v18; // x8
  int32_t klass_high; // w29
  int m_CancellationTokenSource; // w8
  WarGroupMaster_o *v21; // x19
  unsigned int v22; // w22
  bool v23; // w20
  EventEntity_o *v24; // x21
  EventCampaignEntity_o *v25; // x24
  bool IsShowBoardMessageOnWarGroupId; // w0
  __int64 v27; // x8
  System_Collections_ICollection_o *v28; // x23
  const MethodInfo *v29; // x6
  QuestBoardInformationText_o *QuestBoardInformationText; // x21
  const MethodInfo *v31; // x7
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  Il2CppObject *v45; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CB2EBC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarGroupMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB2EBC = 1;
  }
  v45 = 0;
  entity = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  v12 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  v14 = DataManager__GetMasterData_object_(
          v12,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v12,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                questId,
                                (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_45;
  v15 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 7, 1, 0, 0);
  if ( !v15 )
    goto LABEL_45;
  v16 = Instance;
  spotId = v15->fields.spotId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                spotId,
                                (const MethodInfo_33F9128 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v18 = entity;
    if ( !entity )
      goto LABEL_45;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SpotMaster___);
    if ( !Instance )
      goto LABEL_45;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &v45,
                                  spotId,
                                  (const MethodInfo_33F9128 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v9;
    v18 = v45;
    if ( !v45 )
      goto LABEL_45;
  }
  klass_high = HIDWORD(v18[1].klass);
  if ( !klass_high )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v9;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarGroupMaster___);
  if ( !v16 )
LABEL_45:
    sub_1C6BC60(Instance, v11);
  m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v21 = (WarGroupMaster_o *)Instance;
    v22 = 0;
    v23 = isQuestNoneCleared;
    while ( 1 )
    {
      if ( v22 >= m_CancellationTokenSource )
        sub_1C6BC68(Instance);
      v24 = (EventEntity_o *)*((_QWORD *)&v16->fields._DispLog + (int)v22);
      if ( !v24 || !v14 )
        goto LABEL_45;
      Instance = (DataManager_o *)EventCampaignMaster__getData((EventCampaignMaster_o *)v14, v24->fields.id, 0);
      if ( Instance )
        break;
LABEL_43:
      m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
      if ( (int)++v22 >= m_CancellationTokenSource )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v9;
    }
    v25 = (EventCampaignEntity_o *)Instance;
    IsShowBoardMessageOnWarGroupId = EventCampaignEntity__IsShowBoardMessageOnWarGroupId(
                                       (EventCampaignEntity_o *)Instance,
                                       0);
    v27 = 40;
    if ( IsShowBoardMessageOnWarGroupId )
      v27 = 72;
    v28 = *(System_Collections_ICollection_o **)((char *)&v25->klass + v27);
    Instance = (DataManager_o *)EventCampaignEntity__IsShowBoardMessageOnWarGroupId(v25, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_43;
      if ( !v28[1].monitor )
        goto LABEL_37;
    }
    else
    {
      Instance = (DataManager_o *)BasicHelper__IsNullOrEmpty(v28, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_43;
    }
    if ( !v21 )
      goto LABEL_45;
    Instance = (DataManager_o *)WarGroupMaster__HasEntity_43591884(
                                  v21,
                                  klass_high,
                                  v15->fields.afterClear,
                                  v15->fields.type,
                                  (System_Int32_array *)v28,
                                  questId,
                                  phase,
                                  0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_43;
LABEL_37:
    QuestBoardInformationText = QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                  this,
                                  v15,
                                  v24,
                                  v25,
                                  phase,
                                  v23,
                                  v29);
    QuestBoardListViewItemDraw__CalcQuestCost(
      (QuestBoardListViewItemDraw_o *)QuestBoardInformationText,
      v15,
      v25,
      v23,
      costCalcVal,
      fixedVal,
      isNotItemConsume,
      v31);
    if ( QuestBoardInformationText )
    {
      if ( !v9 )
        goto LABEL_45;
      items = v9->fields._items;
      v35 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_45;
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)QuestBoardInformationText,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v37[4] = (Il2CppClass *)QuestBoardInformationText;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 4), (int32_t)QuestBoardInformationText, v32, v33);
      }
    }
    goto LABEL_43;
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v9;
}


System_String_o *QuestBoardListViewItemDraw__GetDispQuestName(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v6; // x20
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *BattleName; // x1

  if ( (byte_4CB2EA2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&StringLiteral_25211/*"{0}"*/);
    byte_4CB2EA2 = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0);
  v6 = this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_13;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_25211/*"{0}"*/, 0) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
        this = (QuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0);
        if ( MasterData_object )
        {
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                   (int32_t)this,
                                                   (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0);
            return System_String__Format((System_String_o *)v6, BattleName, 0);
          }
        }
      }
LABEL_13:
      sub_1C6BC60(this, questEnt);
    }
  }
  return (System_String_o *)v6;
}


System_String_o *QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
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
  QuestBoardListViewItemDraw_c *v15; // x8
  int32_t v16; // w19
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v18; // x0
  QuestBoardListViewItemDraw_c *v20; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB2EAB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EAB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_object )
    goto LABEL_32;
  if ( isActiveEventWar )
    v10 = 4;
  else
    v10 = 5;
  if ( isActiveEventWar )
    v11 = 60;
  else
    v11 = 56;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Master_object,
                              eventEnt->fields.id,
                              v10,
                              0);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v11);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = (WarEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            warId,
                            (const MethodInfo_33F90DC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        warId,
                        (const MethodInfo_33F90DC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_object )
      {
        PrioredBannerId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_object, 0);
        v15 = QuestBoardListViewItemDraw_TypeInfo;
        overwriteId = PrioredBannerId;
        v16 = PrioredBannerId;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v15 = QuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v15->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v23 = v16;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v18, 0);
      }
    }
LABEL_32:
    sub_1C6BC60(Master_object, v9);
  }
  v20 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v20 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v20->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v22 = System_Int32__ToString((int32_t)&overwriteId, 0);
  return System_String__Concat_63966792(EVENT_WAR_SPNAME_PREFIX, v22, 0);
}


System_String_o *QuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        QuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  QuestBoardListViewItemDraw_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4CB2EA1 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2EA1 = 1;
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
      v6 = 912;
      goto LABEL_13;
    case 2:
    case 5:
      v5 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v5 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 920;
      goto LABEL_13;
    case 3:
      v5 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v5 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 904;
LABEL_13:
      v4 = (System_String_o **)((char *)v5->static_fields + v6);
      break;
    default:
      return *v4;
  }
  return *v4;
}


int32_t QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
        QuestBoardListViewItemDraw_o *this,
        int32_t phaseType,
        bool isRepeatLast,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v6; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v7; // x8
  QuestBoardListViewItemDraw_c *v9; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4CB2EB8 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EB8 = 1;
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


System_String_o *QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
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

  if ( (byte_4CB2EB7 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2EB7 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool QuestBoardListViewItemDraw__GetPhasePresentGiftData(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItemDraw_PhasePresentData_o **phasePresentData,
        QuestEntity_o *questEnt,
        int32_t currentPhase,
        const MethodInfo *method)
{
  int32_t v5; // w21
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t MaxPhase; // w0
  int32_t v11; // w22
  int32_t phase; // w20
  int32_t giftId; // w21
  int32_t giftIconId; // w23
  QuestBoardListViewItemDraw_PhasePresentData_o *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  QuestPhasePresentEntity_o *presentEnt; // [xsp+8h] [xbp-38h] BYREF

  v5 = currentPhase;
  if ( (byte_4CB2EA8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhasePresentMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    byte_4CB2EA8 = 1;
  }
  presentEnt = 0;
  *phasePresentData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)phasePresentData, 0, (int32_t)questEnt, *(const MethodInfo **)&currentPhase);
  if ( !questEnt )
    goto LABEL_14;
  MaxPhase = QuestEntity__GetMaxPhase(questEnt, 0);
  v11 = MaxPhase;
  if ( MaxPhase - 1 <= v5 )
    v5 = MaxPhase - 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhasePresentMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C6BC60(Master_object, v9);
  if ( !QuestPhasePresentMaster__IsContainEntityFromPhase(
          (QuestPhasePresentMaster_o *)Master_object,
          &presentEnt,
          questEnt->fields.id,
          v5,
          0) )
    return 0;
  if ( presentEnt )
  {
    phase = presentEnt->fields.phase;
    giftId = presentEnt->fields.giftId;
    giftIconId = presentEnt->fields.giftIconId;
    v15 = (QuestBoardListViewItemDraw_PhasePresentData_o *)sub_1C6BC54(QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    QuestBoardListViewItemDraw_PhasePresentData___ctor(v15, phase, giftId, giftIconId, phase == v11, 0);
    *phasePresentData = v15;
    sub_1C6B9AC((CGThumbnailListItem_o *)phasePresentData, (int32_t)v15, v16, v17);
  }
  return 1;
}


System_String_o *QuestBoardListViewItemDraw__GetQuestIconName(
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

  if ( (byte_4CB2EA4 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_20601/*"img_questtxt_free"*/);
    sub_1C6BA08(&StringLiteral_20600/*"img_questtxt_event"*/);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2EA4 = 1;
  }
  if ( !questEnt )
    sub_1C6BC60(this, questEnt);
  iconId = questEnt->fields.iconId;
  v6 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v12 = &StringLiteral_20600/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v12 = &StringLiteral_20601/*"img_questtxt_free"*/;
    }
    else
    {
      v12 = &StringLiteral_1/*""*/;
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
    v10 = System_Int32__ToString(v6, 0);
    return System_String__Concat_63966792(QUEST_BOARD_ICON_SPNAME_PREFIX, v10, 0);
  }
}


System_String_o *QuestBoardListViewItemDraw__GetQuestIconNameForMainType(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int32_t iconId; // w21
  QuestBoardListViewItemDraw_c *v6; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x19
  System_String_o *v9; // x0
  System_String_o *CHAPTER_SP_BASE_NAME; // x20
  Il2CppObject *v12; // x0
  int32_t chapterId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB2EA5 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EA5 = 1;
  }
  if ( !questEnt )
    sub_1C6BC60(this, questEnt);
  v4 = (_DWORD)questEnt + 68;
  iconId = questEnt->fields.iconId;
  v6 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v6 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( iconId < 1 )
  {
    CHAPTER_SP_BASE_NAME = static_fields->CHAPTER_SP_BASE_NAME;
    chapterId = questEnt->fields.chapterId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chapterId);
    return System_String__Format(CHAPTER_SP_BASE_NAME, v12, 0);
  }
  else
  {
    QUEST_BOARD_ICON_SPNAME_PREFIX = static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v9 = System_Int32__ToString(v4, 0);
    return System_String__Concat_63966792(QUEST_BOARD_ICON_SPNAME_PREFIX, v9, 0);
  }
}


System_String_o *QuestBoardListViewItemDraw__GetRecommendLv(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questPhase,
        bool hasBattle,
        bool isClosed,
        const MethodInfo *method)
{
  if ( questEnt && hasBattle && (!isClosed || !QuestEntity__HasFlag(questEnt, 1024, 0)) )
    return QuestEntity__getRecommendLv_42707680(questEnt, questPhase, 0);
  else
    return 0;
}


RoadmapButtonPrefab_o *QuestBoardListViewItemDraw__GetRoadmapButton(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.roadmapButton;
}


UnityEngine_GameObject_o *QuestBoardListViewItemDraw__GetStatusSp(
        QuestBoardListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *mStatusSp; // x8

  mStatusSp = this->fields.mStatusSp;
  if ( !mStatusSp )
    sub_1C6BC60(this, status);
  if ( (unsigned int)(status - 1) >= LODWORD(mStatusSp->max_length) )
    sub_1C6BC68(this);
  return mStatusSp->m_Items[status - 1];
}


bool QuestBoardListViewItemDraw__HasExchangeSvtCoinBannerEntity(
        QuestBoardListViewItemDraw_o *this,
        BannerEntity_array *bannerEntList,
        int32_t maxCount,
        const MethodInfo *method)
{
  unsigned int v6; // w21
  bool v7; // w22

  if ( maxCount >= 1 )
  {
    if ( bannerEntList )
    {
      v6 = 0;
      v7 = 1;
      while ( 1 )
      {
        if ( v6 >= LODWORD(bannerEntList->max_length) )
          sub_1C6BC68(this);
        this = (QuestBoardListViewItemDraw_o *)bannerEntList->m_Items[v6];
        if ( !this )
          break;
        this = (QuestBoardListViewItemDraw_o *)BannerEntity__IsExchangeSvtCoin((BannerEntity_o *)this, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v7 = (int)++v6 < maxCount;
          if ( maxCount != v6 )
            continue;
        }
        return v7;
      }
    }
    sub_1C6BC60(this, bannerEntList);
  }
  return 0;
}


bool QuestBoardListViewItemDraw__HasNewQuestInWar(
        QuestBoardListViewItemDraw_o *this,
        System_Collections_Generic_List_MapControl_QuestInfo__o *questList,
        int32_t warId,
        bool isMainInterlude,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass336_0_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4CB2E9B & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1C6BA08(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass336_0__HasNewQuestInWar_b__0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass336_0_TypeInfo);
    byte_4CB2E9B = 1;
  }
  v8 = (QuestBoardListViewItemDraw___c__DisplayClass336_0_o *)sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass336_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass336_0___ctor(v8, 0);
  if ( !v8 )
    sub_1C6BC60(v9, v10);
  v8->fields.isMainInterlude = isMainInterlude;
  v8->fields.warId = warId;
  v11 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_MapControl_QuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_QuestBoardListViewItemDraw___c__DisplayClass336_0__HasNewQuestInWar_b__0__,
    0);
  return BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_3124430 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__InitPhase(
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

  if ( (byte_4CB2EB6 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EB6 = 1;
  }
  mPhaseObj = this->fields.mPhaseObj;
  if ( !mPhaseObj )
    goto LABEL_34;
  mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mPhaseObj, 0);
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
        UnityEngine_Transform__set_localPosition(v11, static_fields->PHASE_OBJ_POS_DOUBLE, 0);
        mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
        if ( mPhaseObj )
        {
          mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)mPhaseObj,
                                                    0);
          if ( mPhaseObj )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)mPhaseObj,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_DOUBLE,
              0);
            mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
            if ( mPhaseObj )
            {
              mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)mPhaseObj,
                                                        0);
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
        UnityEngine_Transform__set_localPosition(v11, static_fields->PHASE_OBJ_POS_TRIPLE_ITEM, 0);
        mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
        if ( mPhaseObj )
        {
          mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)mPhaseObj,
                                                    0);
          if ( mPhaseObj )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)mPhaseObj,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_TRIPLE_ITEM,
              0);
            mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
            if ( mPhaseObj )
            {
              mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)mPhaseObj,
                                                        0);
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
      UnityEngine_Transform__set_localPosition(v11, static_fields->PHASE_OBJ_POS_SINGLE, 0);
      mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
      if ( mPhaseObj )
      {
        mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mPhaseObj,
                                                  0);
        if ( mPhaseObj )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)mPhaseObj,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_SINGLE,
            0);
          mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
          if ( mPhaseObj )
          {
            mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)mPhaseObj,
                                                      0);
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
    sub_1C6BC60(mPhaseObj, isDoubleItemConsume);
  }
  if ( !v11 )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(v11, static_fields->PHASE_OBJ_POS_DOUBLE_QP, 0);
  mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
  if ( !mPhaseObj )
    goto LABEL_34;
  mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPhaseObj, 0);
  if ( !mPhaseObj )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)mPhaseObj,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_DOUBLE_QP,
    0);
  mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
  if ( !mPhaseObj )
    goto LABEL_34;
  mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPhaseObj, 0);
  if ( !mPhaseObj )
    goto LABEL_34;
  v13 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  p_z = (struct QuestBoardListViewItemDraw_StaticFields *)&v13->PHASE_STR_SCL_DOUBLE_QP.fields.z;
  p_PHASE_STR_SCL_DOUBLE = (__int64 *)&v13->PHASE_STR_SCL_DOUBLE_QP;
LABEL_33:
  v19 = *p_PHASE_STR_SCL_DOUBLE;
  POS_Y_ITVL_AREA = p_z->POS_Y_ITVL_AREA;
  v21 = HIDWORD(*p_PHASE_STR_SCL_DOUBLE);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)mPhaseObj, *(UnityEngine_Vector3_o *)&v19, 0);
}


void QuestBoardListViewItemDraw__InitRewardIconAlphaSyncWidgets(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIWidget__o *rewardIconAlphaSyncWidgetList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_UIWidget__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB2EC2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIWidget__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIWidget__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIWidget__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__GetEnumerator__);
    byte_4CB2EC2 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  rewardIconAlphaSyncWidgetList = this->fields.rewardIconAlphaSyncWidgetList;
  if ( !rewardIconAlphaSyncWidgetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)rewardIconAlphaSyncWidgetList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIWidget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIWidget__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C6BC60(0, v4);
    ((void (__fastcall *)(float))v8.fields._current->klass->vtable[8].methodPtr)(1.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIWidget__Dispose__);
  v5 = this->fields.rewardIconAlphaSyncWidgetList;
  if ( !v5 )
LABEL_13:
    sub_1C6BC60(rewardIconAlphaSyncWidgetList, method);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
}


bool QuestBoardListViewItemDraw__IsBanners(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8

  if ( !questBoardItem || (quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField) == 0 )
    sub_1C6BC60(this, questBoardItem);
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  return AreaBoardInfo_k__BackingField
      && AreaBoardInfo_k__BackingField->fields.questBoardType == 1
      && this->fields.mBannerCount > 1;
}


bool QuestBoardListViewItemDraw__IsDispQuestName(
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


bool QuestBoardListViewItemDraw__IsDisplayNext(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mNextSp; // x0

  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp || (mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0)) == 0 )
    sub_1C6BC60(mNextSp, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mNextSp, 0);
}


bool QuestBoardListViewItemDraw__IsDisplayRoadmapButton(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *roadmapButton; // x0

  roadmapButton = (UnityEngine_Component_o *)this->fields.roadmapButton;
  if ( !roadmapButton
    || (roadmapButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(roadmapButton, 0)) == 0 )
  {
    sub_1C6BC60(roadmapButton, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)roadmapButton, 0);
}


bool QuestBoardListViewItemDraw__IsEventTime(
        QuestBoardListViewItemDraw_o *this,
        EventEntity_o *eventEntity,
        int64_t checkTime,
        const MethodInfo *method)
{
  return eventEntity && EventEntity__IsEventPeriod(eventEntity, checkTime, 0);
}


bool QuestBoardListViewItemDraw__IsFlickL(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v3; // x0
  float mTouchPosDif; // s8

  if ( (byte_4CB2ED4 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2ED4 = 1;
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


bool QuestBoardListViewItemDraw__IsFlickR(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v3; // x0
  float mTouchPosDif; // s8

  if ( (byte_4CB2ED5 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2ED5 = 1;
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


bool QuestBoardListViewItemDraw__IsInfoTextListNullOrEmpty(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4CB2EC6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4CB2EC6 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool QuestBoardListViewItemDraw__IsInterruptedQuest(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v8; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB2EDB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB2EDB = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1C6BC60(v8, v6);
  return UserInterruptionQuestMaster__TryGetEntity(
           (UserInterruptionQuestMaster_o *)Master_object,
           &entity,
           v8->static_fields->userIdNumber,
           questId,
           phase,
           0);
}


bool QuestBoardListViewItemDraw__IsMainWar(QuestBoardListViewItemDraw_o *this, int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4CB2EA0 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C6BA08(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB2EA0 = 1;
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
         (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_WarMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     warId,
                     (const MethodInfo_33F90DC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0 )
  {
    sub_1C6BC60(Instance, v8);
  }
  return LODWORD(Instance[6].klass) == 0;
}


bool QuestBoardListViewItemDraw__IsMultiInfoText(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4CB2EC5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4CB2EC5 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return mInfoTextList && mInfoTextList->fields._size > 1;
}


bool QuestBoardListViewItemDraw__IsNeedAnimEventTarget(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0

  eventTargetComponent = this->fields.eventTargetComponent;
  if ( !eventTargetComponent )
    sub_1C6BC60(0, method);
  return BoardOptionEventTargetComponent__IsNeedAnim(eventTargetComponent, 0);
}


bool QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
        QuestBoardListViewItemDraw_o *this,
        System_Collections_Generic_List_MapControl_QuestInfo__o *questList,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  __int64 v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  WarEntity_o *v11; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Func_object__bool__o *v15; // x21

  if ( (byte_4CB2E9A & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C6BA08(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass335_0__IsPurchasedByRarePrism_b__0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass335_0_TypeInfo);
    byte_4CB2E9A = 1;
  }
  v6 = sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass335_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass335_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass335_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_9;
  *(_QWORD *)(v6 + 16) = warEnt;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)warEnt, v9, v10);
  v11 = *(WarEntity_o **)(v6 + 16);
  if ( v11 && WarEntity__IsShop(v11, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v6 + 24) = MasterData_object;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)MasterData_object, v13, v14);
      v15 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_MapControl_QuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v15,
        (Il2CppObject *)v6,
        Method_QuestBoardListViewItemDraw___c__DisplayClass335_0__IsPurchasedByRarePrism_b__0__,
        0);
      return BasicHelper__Any_object_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v15,
               (const MethodInfo_3124430 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_1C6BC60(Instance, v8);
  }
  return 0;
}


bool QuestBoardListViewItemDraw__IsRewardIcons(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_RewardIconInfo__o *rewardIconInfoList; // x8

  if ( (byte_4CB2EC9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    byte_4CB2EC9 = 1;
  }
  rewardIconInfoList = this->fields.rewardIconInfoList;
  return rewardIconInfoList && rewardIconInfoList->fields._size > 1;
}


bool QuestBoardListViewItemDraw__IsUnknownWaveBattleClassIcon(
        QuestBoardListViewItemDraw_o *this,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  ViewWaveEnemyMaster_o *Master_object; // x0
  __int64 v5; // x1
  ViewWaveEnemyMaster_o *v6; // x21
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  ViewWaveEnemyEntity_array *v8; // x19
  int32_t ReachedWave; // w20
  il2cpp_array_size_t max_length; // x8
  unsigned int v11; // w21
  Il2CppClass **v12; // x22
  char *v13; // x22
  ViewWaveEnemyMaster_o *v14; // t1

  if ( (byte_4CB2EDC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB2EDC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !questPhaseEntity )
    goto LABEL_26;
  v6 = Master_object;
  if ( !Master_object )
    goto LABEL_26;
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            Master_object,
                            questPhaseEntity->fields.questId,
                            0);
  if ( !EntityListFromQuestId )
    return (char)EntityListFromQuestId;
  v8 = EntityListFromQuestId;
  if ( !EntityListFromQuestId->max_length )
  {
LABEL_23:
    LOBYTE(EntityListFromQuestId) = 0;
    return (char)EntityListFromQuestId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
  if ( !Master_object )
LABEL_26:
    sub_1C6BC60(Master_object, v5);
  ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                  (ReachedWaveInfoMaster_o *)Master_object,
                  questPhaseEntity->fields.questId,
                  0);
  Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v6, v8, ReachedWave, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_23;
  max_length = v8->max_length;
  v11 = max_length - 1;
  if ( (int)max_length - 1 < 0 )
    goto LABEL_23;
  if ( v11 >= (unsigned int)max_length )
LABEL_22:
    sub_1C6BC68(Master_object);
  while ( 1 )
  {
    v12 = &v8->obj.klass + v11;
    v14 = (ViewWaveEnemyMaster_o *)v12[4];
    v13 = (char *)(v12 + 4);
    Master_object = v14;
    if ( !v14 )
      goto LABEL_26;
    Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyEntity__GetUnknownDispInfo(
                                               (ViewWaveEnemyEntity_o *)Master_object,
                                               0);
    if ( Master_object )
    {
      if ( v11 >= LODWORD(v8->max_length) )
        goto LABEL_22;
      if ( !*(_QWORD *)v13 )
        goto LABEL_26;
      if ( ReachedWave < *(_DWORD *)(*(_QWORD *)v13 + 56LL) )
        break;
    }
    if ( (--v11 & 0x80000000) != 0 )
      goto LABEL_23;
    if ( v11 >= LODWORD(v8->max_length) )
      goto LABEL_22;
  }
  LOBYTE(EntityListFromQuestId) = 1;
  return (char)EntityListFromQuestId;
}


bool QuestBoardListViewItemDraw__IsValidSupportSelection(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        int32_t phase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  long double v8; // q0
  System_Object_array *RestrictionList; // x21
  QuestBoardListViewItemDraw___c_c *v10; // x0
  System_Func_object__bool__o *_9__378_0; // x22
  Il2CppObject *v12; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x0
  _BOOL4 v18; // w22
  bool v19; // w8
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB2EBF & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C6BA08(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__378_0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4CB2EBF = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
  if ( Instance )
  {
    if ( !questEntity )
      goto LABEL_38;
    RestrictionList = (System_Object_array *)QuestRestrictionMaster__getRestrictionList(
                                               (QuestRestrictionMaster_o *)Instance,
                                               questEntity->fields.id,
                                               phase,
                                               0);
    if ( RestrictionList )
    {
      v10 = QuestBoardListViewItemDraw___c_TypeInfo;
      if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
        v10 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      _9__378_0 = (System_Func_object__bool__o *)v10->static_fields->__9__378_0;
      if ( !_9__378_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__378_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__378_0,
          v12,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__378_0__,
          0);
        static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__378_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__378_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__378_0, (int32_t)_9__378_0, v14, v15);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_object__51528924(
                                  RestrictionList,
                                  (System_Func_T__bool__o *)_9__378_0,
                                  (const MethodInfo_31244DC *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C41A9C(v8);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C41A9C(v8);
  Instance = **(DataManager_o ***)(v17 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !Instance )
  {
LABEL_38:
    sub_1C6BC60(Instance, v7);
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(
          (QuestRestrictionInfoMaster_o *)Instance,
          &entity,
          questEntity->fields.id,
          phase,
          0) )
  {
    if ( !QuestEntity__HasFlag_42708552(questEntity, 0x80000, phase, 0)
      && !QuestEntity__HasFlag_42708552(questEntity, 0x100000, phase, 0)
      && !QuestEntity__HasFlag_42708552(questEntity, 0x10000000, phase, 0) )
    {
      LOBYTE(v18) = questEntity->fields.type != 7;
      if ( ((unsigned __int8)RestrictionList & 1) != 0 )
        goto LABEL_34;
      goto LABEL_36;
    }
LABEL_33:
    LOBYTE(v18) = 0;
    if ( ((unsigned __int8)RestrictionList & 1) != 0 )
      goto LABEL_34;
LABEL_36:
    v19 = !QuestEntity__HasFlag_42708552(questEntity, 2, phase, 0);
    return v18 && v19;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_38;
  if ( QuestRestrictionInfoEntity__HasFlag(entity, 0x80000, 0) )
    goto LABEL_33;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_38;
  if ( QuestRestrictionInfoEntity__HasFlag(entity, 0x100000, 0) )
    goto LABEL_33;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_38;
  v18 = !QuestRestrictionInfoEntity__HasFlag(entity, 0x10000000, 0);
  if ( ((unsigned __int8)RestrictionList & 1) == 0 )
    goto LABEL_36;
LABEL_34:
  v19 = 0;
  return v18 && v19;
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__LateUpdateItem(
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


void QuestBoardListViewItemDraw__LoadBoardIconTexture(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  QuestBoardListViewItemDraw_c *v15; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v18; // x0
  struct System_String_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_String_o *boardIconName; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *v25; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  int32_t v27; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB2ED8 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass416_0__LoadBoardIconTexture_b__0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass416_0_TypeInfo);
    byte_4CB2ED8 = 1;
  }
  v7 = sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass416_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass416_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v14);
  if ( !questEntity )
    goto LABEL_14;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v15 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v15 = QuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v15->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v27 = iconId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v19 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v18, 0);
  this->fields.boardIconName = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.boardIconName, (int32_t)v19, v20, v21);
  boardIconName = this->fields.boardIconName;
  *(_QWORD *)(v7 + 16) = boardIconName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)boardIconName, v23, v24);
  v25 = System_String__Concat_63966792(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewItemDraw___c__DisplayClass416_0__LoadBoardIconTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v25, v26, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
      return;
    }
LABEL_14:
    sub_1C6BC60(Instance, v9);
  }
}


void QuestBoardListViewItemDraw__MoveBanner(
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

  if ( (byte_4CB2ED2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_1C6BA08(&TerminalBannerComponent_TypeInfo);
    byte_4CB2ED2 = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (WebViewManager_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)WebViewManager__get_IsBusy(IsBanners, 0);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)IsBanners, 0);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_MasterMission((CommonUI_o *)IsBanners, 0);
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
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    if ( (float)(realtimeSinceStartup - this->fields.mBannerAutoMoveTimeOld) >= this->fields.mBannerAutoMoveTimeInterval )
    {
      if ( this->fields.mBannerCount >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          mTerminalBanners = this->fields.mTerminalBanners;
          if ( !mTerminalBanners )
            break;
          if ( (unsigned int)v19 >= LODWORD(mTerminalBanners->max_length) )
LABEL_41:
            sub_1C6BC68(IsBanners);
          IsBanners = (WebViewManager_o *)mTerminalBanners->m_Items[v19];
          if ( !IsBanners )
            break;
          TerminalBannerComponent__StartAutoMoveL((TerminalBannerComponent_o *)IsBanners, 0);
          if ( (int)++v19 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_40:
        sub_1C6BC60(IsBanners, v6);
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
    v11 = 0;
    do
    {
      v12 = this->fields.mTerminalBanners;
      if ( !v12 )
        goto LABEL_40;
      if ( (unsigned int)v11 >= LODWORD(v12->max_length) )
        goto LABEL_41;
      v13 = &v12->obj.klass + v11;
      v14 = (TerminalBannerComponent_o *)v13[4];
      if ( !v14 )
        goto LABEL_40;
      TerminalBannerComponent__Move((TerminalBannerComponent_o *)v13[4], this, 0);
      IsBanners = (WebViewManager_o *)TerminalBannerComponent__IsFocus(v14, 0);
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


void QuestBoardListViewItemDraw__OnChangeAlphaAnim(
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


void QuestBoardListViewItemDraw__OnDestroy(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventTargetComponent; // x20
  __int64 v4; // x1
  BoardOptionEventTargetComponent_o *v5; // x0

  if ( (byte_4CB2E90 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2E90 = 1;
  }
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, method);
  eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0, 0) )
  {
    v5 = this->fields.eventTargetComponent;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    BoardOptionEventTargetComponent__DestroyList(v5, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__OnDragStartItem(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        QuestBoardListViewManager_o *qmanager,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v7; // x19
  UnityEngine_Camera_o *mUICamera; // x21
  UnityEngine_Vector2_o ScreenPosition_49352900; // kr00_8
  float v10; // s0
  float v11; // s1
  const MethodInfo *v12; // x3

  v7 = this;
  if ( (byte_4CB2ECD & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&CTouch_TypeInfo);
    byte_4CB2ECD = 1;
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
          ScreenPosition_49352900 = CTouch__getScreenPosition_49352900(mUICamera, 0);
          v10 = vabds_f32(v7->fields.mPressPos.fields.x, ScreenPosition_49352900.fields.x);
          v11 = vabds_f32(v7->fields.mPressPos.fields.y, ScreenPosition_49352900.fields.y);
          v7->fields.mIsEnableDragX = v10 > v11;
          this = (QuestBoardListViewItemDraw_o *)qmanager->fields.scrollView;
          if ( this )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v10 <= v11, 0);
            QuestBoardListViewItemDraw__SetDispBannerArrows(v7, v7->fields.mIsEnableDragX, 0, v12);
            return;
          }
        }
LABEL_13:
        sub_1C6BC60(this, questBoardItem);
      }
    }
  }
}


void QuestBoardListViewItemDraw__OnPressBanner(
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
      v7 = 0;
      do
      {
        mTerminalBanners = this->fields.mTerminalBanners;
        if ( !mTerminalBanners )
          goto LABEL_10;
        if ( (unsigned int)v7 >= LODWORD(mTerminalBanners->max_length) )
          sub_1C6BC68(IsBanners);
        IsBanners = mTerminalBanners->m_Items[v7];
        if ( !IsBanners )
LABEL_10:
          sub_1C6BC60(IsBanners, v5);
        TerminalBannerComponent__OnPress(IsBanners, this, 0);
        ++v7;
      }
      while ( (int)v7 < this->fields.mBannerCount );
    }
    QuestBoardListViewItemDraw__SetDispBannerArrows(this, 1, 0, v6);
  }
}


void QuestBoardListViewItemDraw__OnPressItem(
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
  if ( (byte_4CB2ECC & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&CTouch_TypeInfo);
    byte_4CB2ECC = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    v8->fields.mIsPressed = 1;
    if ( !questBoardManager || (this = (QuestBoardListViewItemDraw_o *)questBoardManager->fields.scrollView) == 0 )
      sub_1C6BC60(this, questBoardItem);
    if ( !UIScrollView__IsLimitOverPosition((UIScrollView_o *)this, 0) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8->fields.mPressPos = CTouch__getScreenPosition_49352900(mUICamera, 0);
      v8->fields.mIsPressedForDragX = 1;
      QuestBoardListViewItemDraw__OnPressBanner(v8, questBoardItem, v10);
    }
  }
}


void QuestBoardListViewItemDraw__OnPullBanner(
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
      v6 = 0;
      do
      {
        mTerminalBanners = this->fields.mTerminalBanners;
        if ( !mTerminalBanners )
          goto LABEL_10;
        if ( (unsigned int)v6 >= LODWORD(mTerminalBanners->max_length) )
          sub_1C6BC68(IsBanners);
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_1C6BC60(IsBanners, v5);
        TerminalBannerComponent__OnPull(IsBanners, this, 0);
        ++v6;
      }
      while ( (int)v6 < this->fields.mBannerCount );
    }
    QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(this, v5);
    QuestBoardListViewItemDraw__SetDispBannerArrows(this, 0, 0, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__OnPullItem(
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
    if ( !questBoardManager || (scrollView = (UnityEngine_Behaviour_o *)questBoardManager->fields.scrollView) == 0 )
      sub_1C6BC60(scrollView, v8);
    UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
    this->fields.mTouchPosDif = 0.0;
  }
}


void QuestBoardListViewItemDraw__OnStartFadeOutAlphaAnim(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestBoardListViewItemDraw_o *v3; // x19
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestBoardListViewManager_o *manager; // x1
  __int64 naturalAligment; // x10

  v3 = this;
  if ( (byte_4CB2EC0 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    byte_4CB2EC0 = 1;
  }
  mListViewObject = v3->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_9:
    sub_1C6BC60(this, method);
  manager = (QuestBoardListViewManager_o *)mListViewObject->fields.manager;
  if ( manager )
  {
    naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
    {
      sub_1C6BFFC(manager);
      goto LABEL_9;
    }
  }
  QuestBoardListViewItemDraw__RegisterRewardIconAlphaSyncWidgetsByFindingIconDiff(v3, manager, v2);
}


void QuestBoardListViewItemDraw__RegisterRewardIconAlphaSyncWidgetsByFindingIconDiff(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *v3; // x21
  QuestBoardListViewItemDraw_o *v4; // x19
  struct System_Collections_Generic_List_UIWidget__o *rewardIconAlphaSyncWidgetList; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *rewardIconInfoList; // x20
  int32_t AlphaAnimCnt; // w0
  System_Collections_Generic_List_object__o *v10; // x22
  QuestBoardListViewItemDraw_o *v11; // x20
  int32_t NextAlphaAnimCnt; // w0
  QuestBoardListViewItemDraw_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8
  _BOOL4 IsDisplayNotGive; // w22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  intptr_t v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  intptr_t v26; // x8
  _BOOL4 IsDisplayServantLimitOpened; // w22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  intptr_t v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  intptr_t v33; // x8
  int32_t TitleType; // w20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  intptr_t v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  intptr_t v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  intptr_t v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  intptr_t v46; // x8
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  intptr_t v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  intptr_t v52; // x8
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  intptr_t v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  intptr_t v58; // x8

  v3 = questBoardManager;
  v4 = this;
  if ( (byte_4CB2EC1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
    byte_4CB2EC1 = 1;
  }
  rewardIconAlphaSyncWidgetList = v4->fields.rewardIconAlphaSyncWidgetList;
  if ( !rewardIconAlphaSyncWidgetList )
    goto LABEL_54;
  size = rewardIconAlphaSyncWidgetList->fields._size;
  v7 = rewardIconAlphaSyncWidgetList->fields._version + 1;
  rewardIconAlphaSyncWidgetList->fields._size = 0;
  rewardIconAlphaSyncWidgetList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)rewardIconAlphaSyncWidgetList->fields._items, 0, size, 0);
  if ( (byte_4CB2EC9 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    byte_4CB2EC9 = 1;
  }
  rewardIconInfoList = (System_Collections_Generic_List_object__o *)v4->fields.rewardIconInfoList;
  if ( rewardIconInfoList )
  {
    questBoardManager = (QuestBoardListViewManager_o *)(unsigned int)rewardIconInfoList->fields._size;
    if ( (int)questBoardManager >= 2 )
    {
      if ( v3 )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(v3, (int32_t)questBoardManager, 0);
        this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                 rewardIconInfoList,
                                                 AlphaAnimCnt,
                                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
        v10 = (System_Collections_Generic_List_object__o *)v4->fields.rewardIconInfoList;
        if ( v10 )
        {
          v11 = this;
          NextAlphaAnimCnt = QuestBoardListViewManager__GetNextAlphaAnimCnt(v3, v10->fields._size, 0);
          this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                   v10,
                                                   NextAlphaAnimCnt,
                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
          if ( v11 )
          {
            v13 = this;
            this = (QuestBoardListViewItemDraw_o *)QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(
                                                     (QuestBoardRewardIcon_RewardIconInfo_o *)v11,
                                                     0);
            if ( v13 )
            {
              if ( ((unsigned __int8)this & 1) != QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(
                                                    (QuestBoardRewardIcon_RewardIconInfo_o *)v13,
                                                    0) )
              {
                this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                if ( !this )
                  goto LABEL_54;
                questBoardManager = (QuestBoardListViewManager_o *)v4->fields.mRewardGetSP;
                m_CachedPtr = this->fields.m_CachedPtr;
                v17 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !m_CachedPtr )
                  goto LABEL_54;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)questBoardManager,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                }
                else
                {
                  v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v19 + 32) = questBoardManager;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)questBoardManager, v14, v15);
                }
              }
              IsDisplayNotGive = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayNotGive(
                                   (QuestBoardRewardIcon_RewardIconInfo_o *)v11,
                                   0);
              if ( IsDisplayNotGive != QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayNotGive(
                                         (QuestBoardRewardIcon_RewardIconInfo_o *)v13,
                                         0) )
              {
                this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                if ( !this )
                  goto LABEL_54;
                questBoardManager = (QuestBoardListViewManager_o *)v4->fields.mRewardNotGetSP;
                v23 = this->fields.m_CachedPtr;
                v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v23 )
                  goto LABEL_54;
                v25 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)questBoardManager,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = v23 + 8 * v25;
                  LODWORD(this->fields.m_CancellationTokenSource) = v25 + 1;
                  *(_QWORD *)(v26 + 32) = questBoardManager;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 32), (int32_t)questBoardManager, v21, v22);
                }
              }
              IsDisplayServantLimitOpened = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(
                                              (QuestBoardRewardIcon_RewardIconInfo_o *)v11,
                                              0);
              if ( IsDisplayServantLimitOpened != QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(
                                                    (QuestBoardRewardIcon_RewardIconInfo_o *)v13,
                                                    0) )
              {
                this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                if ( !this )
                  goto LABEL_54;
                questBoardManager = (QuestBoardListViewManager_o *)v4->fields.mServantLimitRewardObtainedSP;
                v30 = this->fields.m_CachedPtr;
                v31 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v30 )
                  goto LABEL_54;
                v32 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)questBoardManager,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = v30 + 8 * v32;
                  LODWORD(this->fields.m_CancellationTokenSource) = v32 + 1;
                  *(_QWORD *)(v33 + 32) = questBoardManager;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 32), (int32_t)questBoardManager, v28, v29);
                }
              }
              TitleType = QuestBoardRewardIcon_RewardIconInfo__GetTitleType(
                            (QuestBoardRewardIcon_RewardIconInfo_o *)v11,
                            0);
              if ( TitleType == QuestBoardRewardIcon_RewardIconInfo__GetTitleType(
                                  (QuestBoardRewardIcon_RewardIconInfo_o *)v13,
                                  0) )
                return;
              this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
              if ( this )
              {
                questBoardManager = (QuestBoardListViewManager_o *)v4->fields.mRewardFirstSP;
                v37 = this->fields.m_CachedPtr;
                v38 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( v37 )
                {
                  v39 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)questBoardManager,
                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v40 = v37 + 8 * v39;
                    LODWORD(this->fields.m_CancellationTokenSource) = v39 + 1;
                    *(_QWORD *)(v40 + 32) = questBoardManager;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 32), (int32_t)questBoardManager, v35, v36);
                  }
                  this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                  if ( this )
                  {
                    questBoardManager = (QuestBoardListViewManager_o *)v4->fields.mRewardPhaseSP;
                    v43 = this->fields.m_CachedPtr;
                    v44 = Method_System_Collections_Generic_List_UIWidget__Add__;
                    ++HIDWORD(this->fields.m_CancellationTokenSource);
                    if ( v43 )
                    {
                      v45 = SLODWORD(this->fields.m_CancellationTokenSource);
                      if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)this,
                          (Il2CppObject *)questBoardManager,
                          *(const MethodInfo_3800974 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v46 = v43 + 8 * v45;
                        LODWORD(this->fields.m_CancellationTokenSource) = v45 + 1;
                        *(_QWORD *)(v46 + 32) = questBoardManager;
                        sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 32), (int32_t)questBoardManager, v41, v42);
                      }
                      this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                      if ( this )
                      {
                        questBoardManager = (QuestBoardListViewManager_o *)v4->fields.mRewardQuestSP;
                        v49 = this->fields.m_CachedPtr;
                        v50 = Method_System_Collections_Generic_List_UIWidget__Add__;
                        ++HIDWORD(this->fields.m_CancellationTokenSource);
                        if ( v49 )
                        {
                          v51 = SLODWORD(this->fields.m_CancellationTokenSource);
                          if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)this,
                              (Il2CppObject *)questBoardManager,
                              *(const MethodInfo_3800974 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v52 = v49 + 8 * v51;
                            LODWORD(this->fields.m_CancellationTokenSource) = v51 + 1;
                            *(_QWORD *)(v52 + 32) = questBoardManager;
                            sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 32), (int32_t)questBoardManager, v47, v48);
                          }
                          this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                          if ( this )
                          {
                            questBoardManager = (QuestBoardListViewManager_o *)v4->fields.mRewardSharedSP;
                            v55 = this->fields.m_CachedPtr;
                            v56 = Method_System_Collections_Generic_List_UIWidget__Add__;
                            ++HIDWORD(this->fields.m_CancellationTokenSource);
                            if ( v55 )
                            {
                              v57 = SLODWORD(this->fields.m_CancellationTokenSource);
                              if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  (Il2CppObject *)questBoardManager,
                                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v58 = v55 + 8 * v57;
                                LODWORD(this->fields.m_CancellationTokenSource) = v57 + 1;
                                *(_QWORD *)(v58 + 32) = questBoardManager;
                                sub_1C6B9AC((CGThumbnailListItem_o *)(v58 + 32), (int32_t)questBoardManager, v53, v54);
                              }
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
LABEL_54:
      sub_1C6BC60(this, questBoardManager);
    }
  }
}


void QuestBoardListViewItemDraw__ReleaseBoardIconTexture(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v3; // x0
  System_String_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB2ED9 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2ED9 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0) )
  {
    v3 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v3 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v4 = System_String__Concat_63966792(v3->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH, this->fields.boardIconName, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v4, 0);
    this->fields.boardIconAssetData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.boardIconAssetData, 0, v5, v6);
    this->fields.boardIconName = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.boardIconName, 0, v7, v8);
  }
}


void QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_4CB2ECF & 1) == 0 )
  {
    sub_1C6BA08(&TerminalBannerComponent_TypeInfo);
    byte_4CB2ECF = 1;
  }
  this->fields.mBannerAutoMoveTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
  v3 = TerminalBannerComponent_TypeInfo;
  if ( !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
    v3 = TerminalBannerComponent_TypeInfo;
  }
  this->fields.mBannerAutoMoveTimeInterval = v3->static_fields->BANNER_AUTO_MOVE_TIME_START;
}


void QuestBoardListViewItemDraw__ResetInfoTextList(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  int32_t size; // w2
  int v5; // w9
  CGThumbnailListItem_o *p_mInfoTextList; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB2E92 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4CB2E92 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    v5 = mInfoTextList->fields._version + 1;
    mInfoTextList->fields._size = 0;
    mInfoTextList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mInfoTextList->fields._items, 0, size, 0);
  }
  else
  {
    p_mInfoTextList = (CGThumbnailListItem_o *)&this->fields.mInfoTextList;
    v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (CGThumbnailListItem_c *)v7;
    sub_1C6B9AC(p_mInfoTextList, (int32_t)v7, v8, v9);
  }
}


void QuestBoardListViewItemDraw__ResetQuest(
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

  if ( (byte_4CB2EC3 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EC3 = 1;
  }
  result = 0;
  mCostObj = this->fields.mCostObj;
  if ( !mCostObj )
    goto LABEL_26;
  if ( !UnityEngine_GameObject__get_activeSelf(mCostObj, 0) )
    return;
  mCostObj = (UnityEngine_GameObject_o *)this->fields.mCostLb1;
  if ( !mCostObj )
    goto LABEL_26;
  mCostObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostObj, 0);
  if ( !mCostObj )
    goto LABEL_26;
  mCostObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(mCostObj, 0);
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
    mCostObj = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
    v15 = this->fields.mCostLb1;
    if ( v15 )
    {
      v16 = (UserGameEntity_o *)mCostObj;
      System_Int32__TryParse(v15->fields.mText, &result, 0);
      mCostObj = (UnityEngine_GameObject_o *)this->fields.mCostApSp;
      if ( mCostObj )
      {
        mCostObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostObj, 0);
        if ( mCostObj )
        {
          mCostObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(mCostObj, 0);
          if ( ((unsigned __int8)mCostObj & 1) != 0 )
          {
            if ( v16 )
            {
              Act = UserGameEntity__getAct(v16, 0);
              goto LABEL_23;
            }
          }
          else
          {
            mCostObj = (UnityEngine_GameObject_o *)this->fields.mCostRpSp;
            if ( mCostObj )
            {
              mCostObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostObj, 0);
              if ( mCostObj )
              {
                mCostObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(mCostObj, 0);
                if ( ((unsigned __int8)mCostObj & 1) == 0 )
                  return;
                if ( v16 )
                {
                  Act = UserGameEntity__getRp(v16, 0);
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
    sub_1C6BC60(mCostObj, questBoardItem);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__SetAdvanceNoticeText(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        int64_t checkTime,
        const MethodInfo *method)
{
  __int64 v9; // x25
  __int64 mAdvanceNoticeLb; // x0
  Il2CppClass *klass; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x26
  System_String_o *monitor; // x20
  char v16; // w27
  int32_t monitor_high; // w29
  char v18; // w21
  __int64 v19; // x8
  Il2CppObject *PrioredName; // x0
  int32_t WarID_ByQuestID; // w28
  int64_t OpenedAt; // x28
  System_Object_array *v23; // x28
  System_DateTime_o v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x29
  System_DateTime_o v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x29
  System_DateTime_o v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x29
  System_DateTime_o v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x29
  bool v40; // w26
  MapControl_WarInfo_o *v41; // x0
  WarEntity_o *Mine; // x0
  Il2CppObject *Master_object; // x27
  System_Collections_Generic_List_object__o *v44; // x28
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v45; // x23
  System_Func_object__bool__o *v46; // x24
  Il2CppObject *v47; // x23
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v48; // x23
  QuestBoardListViewItemDraw___c_c *v49; // x0
  System_Func_object__int__o *_9__350_1; // x24
  Il2CppObject *v51; // x25
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  _BOOL4 v56; // w27
  UILabel_o *mTitleNameLb; // x24
  struct QuestBoardListViewItemDraw_StaticFields *v58; // x8
  __int64 v59; // x9
  int32_t v60; // w24
  int32_t v61; // w25
  float v62; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v64; // s1 OVERLAPPED
  float v65; // s0
  int v66; // s2
  float v67; // s9
  float v68; // s0 OVERLAPPED
  float v69; // s1 OVERLAPPED
  float v70; // s0
  int v71; // s2
  float v72; // s1
  int v73; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x22
  const MethodInfo *v75; // x4
  const MethodInfo *v76; // x4
  System_String_o *v77; // x20
  UILabel_o *v78; // x21
  float v79; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  UILabel_o *mCondChangeMessage; // x19
  __int64 v82; // x0
  int32_t v83; // [xsp+4h] [xbp-ACh]
  int32_t Minute; // [xsp+Ch] [xbp-A4h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-A0h] BYREF
  int32_t Day; // [xsp+14h] [xbp-9Ch] BYREF
  __int64 v87; // [xsp+18h] [xbp-98h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *v89; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2EA7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____78610688);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
    sub_1C6BA08(&System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    sub_1C6BA08(&System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__SetAdvanceNoticeText_b__350_1__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass350_0__SetAdvanceNoticeText_b__0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass350_0_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_14826/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2EA7 = 1;
  }
  entityList = 0;
  entity = 0;
  dateData = 0;
  v89 = 0;
  v9 = sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass350_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass350_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass350_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_148;
  *(_QWORD *)(v9 + 16) = questInfo;
  v14 = v9 + 16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)questInfo, v12, v13);
  if ( !*(_QWORD *)(v9 + 16) || *(int *)(*(_QWORD *)(v9 + 16) + 88LL) <= 0 )
  {
    mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
    if ( !mAdvanceNoticeLb )
      goto LABEL_148;
    UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0);
    mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
    if ( !mAdvanceNoticeLb )
      goto LABEL_148;
    UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0);
    mAdvanceNoticeLb = (__int64)this->fields.mCondChangeMessage;
    if ( !mAdvanceNoticeLb )
      goto LABEL_148;
    UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0);
    return;
  }
  mAdvanceNoticeLb = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mAdvanceNoticeLb )
    goto LABEL_148;
  mAdvanceNoticeLb = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)mAdvanceNoticeLb,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !*(_QWORD *)v14 || !mAdvanceNoticeLb )
    goto LABEL_148;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  mAdvanceNoticeLb = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)mAdvanceNoticeLb,
                       &entity,
                       *(_DWORD *)(*(_QWORD *)v14 + 88LL),
                       (const MethodInfo_33F9128 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (mAdvanceNoticeLb & 1) != 0 )
  {
    mAdvanceNoticeLb = (__int64)entity;
    if ( !entity )
      goto LABEL_148;
    monitor = (System_String_o *)entity[1].monitor;
    mAdvanceNoticeLb = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_148;
    v16 = mAdvanceNoticeLb;
    mAdvanceNoticeLb = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_148;
    monitor_high = HIDWORD(entity[2].monitor);
    v18 = mAdvanceNoticeLb;
  }
  else
  {
    monitor_high = 0;
    v18 = 0;
    v16 = 0;
  }
  v19 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_148;
  switch ( *(_DWORD *)(v19 + 68) )
  {
    case 1:
      mAdvanceNoticeLb = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(_QWORD *)v14 || !mAdvanceNoticeLb )
        goto LABEL_148;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                          (QuestTree_o *)mAdvanceNoticeLb,
                          *(_DWORD *)(*(_QWORD *)v14 + 72LL),
                          0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mAdvanceNoticeLb = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !mAdvanceNoticeLb )
        goto LABEL_148;
      mAdvanceNoticeLb = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)mAdvanceNoticeLb,
                           &v89,
                           WarID_ByQuestID,
                           (const MethodInfo_33F9128 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      if ( (mAdvanceNoticeLb & 1) == 0 )
        goto LABEL_52;
      mAdvanceNoticeLb = (__int64)v89;
      if ( !v89 )
        goto LABEL_148;
      PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v89, 0);
LABEL_23:
      mAdvanceNoticeLb = (__int64)System_String__Format(monitor, PrioredName, 0);
      goto LABEL_51;
    case 6:
    case 7:
    case 9:
      v87 = *(_QWORD *)(v19 + 80);
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v87);
      goto LABEL_23;
    case 0xC:
      if ( !questEnt )
        goto LABEL_148;
      OpenedAt = QuestEntity__getOpenedAt(questEnt, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v83 = monitor_high;
      dateData = NetworkManager__getServerDateTime_41600872(OpenedAt, 0).fields._dateData;
      v23 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v24.fields._dateData = (uint64_t)&dateData;
      LODWORD(v87) = System_DateTime__get_Month(v24, 0);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &v87);
      if ( !v23 )
        goto LABEL_148;
      v27 = (Il2CppObject *)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C6BB44(mAdvanceNoticeLb, v23->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_150;
      }
      if ( !LODWORD(v23->max_length) )
        goto LABEL_149;
      v23->m_Items[0] = v27;
      sub_1C6B9AC((CGThumbnailListItem_o *)v23->m_Items, (int32_t)v27, v25, v26);
      v28.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v28, 0);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v31 = (Il2CppObject *)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C6BB44(mAdvanceNoticeLb, v23->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_150;
      }
      if ( LODWORD(v23->max_length) <= 1 )
        goto LABEL_149;
      v23->m_Items[1] = v31;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v23->m_Items[1], (int32_t)v31, v29, v30);
      v32.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v32, 0);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v35 = (Il2CppObject *)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C6BB44(mAdvanceNoticeLb, v23->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_150;
      }
      if ( LODWORD(v23->max_length) <= 2 )
        goto LABEL_149;
      v23->m_Items[2] = v35;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v23->m_Items[2], (int32_t)v35, v33, v34);
      v36.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v36, 0);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v39 = (Il2CppObject *)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C6BB44(mAdvanceNoticeLb, v23->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
        {
LABEL_150:
          v82 = sub_1C6BC84();
          sub_1C6BB30(v82, 0);
        }
      }
      if ( LODWORD(v23->max_length) <= 3 )
LABEL_149:
        sub_1C6BC68(mAdvanceNoticeLb);
      v23->m_Items[3] = v39;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v23->m_Items[3], (int32_t)v39, v37, v38);
      mAdvanceNoticeLb = (__int64)System_String__Format_64008236(monitor, v23, 0);
      monitor_high = v83;
LABEL_51:
      monitor = (System_String_o *)mAdvanceNoticeLb;
LABEL_52:
      if ( (v16 & 1) != 0 )
      {
        v40 = 1;
      }
      else
      {
        if ( !*(_QWORD *)v14 )
          goto LABEL_148;
        v41 = *(MapControl_WarInfo_o **)(*(_QWORD *)v14 + 104LL);
        if ( !v41 )
          goto LABEL_61;
        mAdvanceNoticeLb = (__int64)MapControl_WarInfo__GetMine(v41, 0);
        if ( !mAdvanceNoticeLb )
          goto LABEL_61;
        if ( !*(_QWORD *)v14 )
          goto LABEL_148;
        mAdvanceNoticeLb = *(_QWORD *)(*(_QWORD *)v14 + 104LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)mAdvanceNoticeLb, 0);
        if ( Mine )
          v40 = WarEntity__IsChangeDispClosedMessage(Mine, 0);
        else
LABEL_61:
          v40 = 0;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      v44 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v44,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
      entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v44;
      if ( !questEnt || !Master_object )
        goto LABEL_148;
      QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        (QuestReleaseOverwriteMaster_o *)Master_object,
        &entityList,
        questEnt->fields.id,
        checkTime,
        0);
      v45 = entityList;
      v46 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        (Il2CppObject *)v9,
        Method_QuestBoardListViewItemDraw___c__DisplayClass350_0__SetAdvanceNoticeText_b__0__,
        0);
      v47 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
              (System_Collections_Generic_IEnumerable_TSource__o *)v45,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____78610688);
      if ( !v47 )
      {
        v48 = entityList;
        v49 = QuestBoardListViewItemDraw___c_TypeInfo;
        if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
          v49 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        _9__350_1 = (System_Func_object__int__o *)v49->static_fields->__9__350_1;
        if ( !_9__350_1 )
        {
          if ( !v49->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v49);
            v49 = QuestBoardListViewItemDraw___c_TypeInfo;
          }
          v51 = (Il2CppObject *)v49->static_fields->__9;
          _9__350_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__350_1,
            v51,
            Method_QuestBoardListViewItemDraw___c__SetAdvanceNoticeText_b__350_1__,
            0);
          static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          static_fields->__9__350_1 = (struct System_Func_QuestReleaseOverwriteEntity__int__o *)_9__350_1;
          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__350_1, (int32_t)_9__350_1, v53, v54);
        }
        v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                                                     (System_Func_TSource__TKey__o *)_9__350_1,
                                                                     (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
        v47 = System_Linq_Enumerable__FirstOrDefault_object_(
                v55,
                (const MethodInfo_3163B48 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
        if ( !v47 )
        {
          v56 = 0;
          if ( v40 )
            goto LABEL_75;
LABEL_137:
          mAdvanceNoticeLb = (__int64)this->fields.mTitleNameLb;
          if ( !mAdvanceNoticeLb )
            goto LABEL_148;
          UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, monitor, 0);
          mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
          if ( !mAdvanceNoticeLb )
            goto LABEL_148;
          UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0);
          mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
          if ( !mAdvanceNoticeLb )
            goto LABEL_148;
          UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0);
          if ( v56 )
          {
            mAdvanceNoticeLb = (__int64)this->fields.mCondObject;
            if ( !mAdvanceNoticeLb )
              goto LABEL_148;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0);
            if ( !v47 )
              goto LABEL_148;
            mAdvanceNoticeLb = (__int64)this->fields.mCondChangeMessage;
            if ( !mAdvanceNoticeLb )
              goto LABEL_148;
            UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)v47[3].monitor, 0);
            mCondChangeMessage = this->fields.mCondChangeMessage;
            mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            if ( !mCondChangeMessage )
              goto LABEL_148;
            UILabel__SetCondensedScale(
              mCondChangeMessage,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
              0,
              0);
          }
          return;
        }
      }
      v56 = !System_String__IsNullOrEmpty((System_String_o *)v47[3].monitor, 0);
      if ( !v40 )
        goto LABEL_137;
LABEL_75:
      mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeObj;
      if ( !mAdvanceNoticeLb )
        goto LABEL_148;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0);
      mTitleNameLb = this->fields.mTitleNameLb;
      if ( entity )
      {
        mAdvanceNoticeLb = System_String__op_Inequality(
                             (System_String_o *)entity[2].klass,
                             (System_String_o *)StringLiteral_1/*""*/,
                             0);
        if ( (mAdvanceNoticeLb & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_148;
          klass = entity[2].klass;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          mAdvanceNoticeLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14826/*"UNKNOWN_QUEST_NAME"*/, 0);
          klass = (Il2CppClass *)mAdvanceNoticeLb;
        }
        if ( !mTitleNameLb )
LABEL_148:
          sub_1C6BC60(mAdvanceNoticeLb, klass);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mAdvanceNoticeLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14826/*"UNKNOWN_QUEST_NAME"*/, 0);
        if ( !mTitleNameLb )
          goto LABEL_148;
        klass = (Il2CppClass *)mAdvanceNoticeLb;
      }
      UILabel__set_text(mTitleNameLb, (System_String_o *)klass, 0);
      mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      }
      v58 = *(struct QuestBoardListViewItemDraw_StaticFields **)(mAdvanceNoticeLb + 184);
      v59 = 48;
      if ( !v56 )
        v59 = 44;
      v60 = *(int32_t *)((char *)&v58->POS_Y_ITVL_AREA + v59);
      if ( v56 )
      {
        if ( !v47 )
          goto LABEL_148;
        v61 = (int32_t)v47[4].klass;
      }
      else
      {
        v61 = 0;
      }
      v62 = (float)monitor_high;
      if ( (v18 & 1) != 0 )
      {
        if ( !*(_DWORD *)(mAdvanceNoticeLb + 224) )
        {
          j_il2cpp_runtime_class_init_0(mAdvanceNoticeLb);
          v58 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
        }
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = v58->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X;
        UIWidget__set_pivot((UIWidget_o *)mAdvanceNoticeLb, 3, 0);
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mAdvanceNoticeLb, 0);
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        v64 = 24.0;
        if ( !v56 )
          v64 = 0.0;
        v66 = 0;
        v65 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v62;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v64 - 1),
          0);
        mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_148;
        v67 = *(float *)(*(_QWORD *)(mAdvanceNoticeLb + 184) + 52LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mAdvanceNoticeLb, 0);
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        v68 = v67 + (float)v61;
      }
      else
      {
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        UIWidget__set_pivot((UIWidget_o *)mAdvanceNoticeLb, 4, 0);
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mAdvanceNoticeLb, 0);
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        v69 = 24.0;
        if ( !v56 )
          v69 = 0.0;
        v71 = 0;
        v70 = v62 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v69 - 1),
          0);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        UIWidget__set_pivot((UIWidget_o *)mAdvanceNoticeLb, 4, 0);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mAdvanceNoticeLb, 0);
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        v68 = (float)v61 * 0.5;
      }
      v72 = -26.0;
      v73 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)mAdvanceNoticeLb,
        *(UnityEngine_Vector3_o *)&v68,
        0);
      mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !mAdvanceNoticeLb )
        goto LABEL_148;
      UIWidget__set_height((UIWidget_o *)mAdvanceNoticeLb, v60, 0);
      mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !mOverwriteAdvanceNoticeLb )
        goto LABEL_148;
      UIWidget__set_height(
        mOverwriteAdvanceNoticeLb,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
        0);
      QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_350_2(
        this->fields.mAdvanceNoticeLb,
        monitor,
        v60,
        monitor_high,
        v75);
      if ( v56 )
      {
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0);
        if ( !v47 )
          goto LABEL_148;
        v77 = (System_String_o *)v47[3].monitor;
        v78 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v79 = v62 * 0.5;
        QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_350_2(v78, v77, v60, v61, v76);
      }
      else
      {
        v79 = 0.0;
      }
      mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0, 0) )
      {
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
        if ( mAdvanceNoticeLb )
        {
          mAdvanceNoticeLb = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)mAdvanceNoticeLb,
                                        0);
          if ( mAdvanceNoticeLb )
          {
            v92.fields.y = 0.0;
            v92.fields.z = 0.0;
            v92.fields.x = v79;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mAdvanceNoticeLb, v92, 0);
            return;
          }
        }
        goto LABEL_148;
      }
      return;
    default:
      goto LABEL_52;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__SetBadge(QuestBoardListViewItemDraw_o *this, int32_t num, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mNoticeNumberRoot; // x0
  UnityEngine_Object_o *mNoticeNumber; // x22
  CGThumbnailListItem_o *p_mNoticeNumber; // x21
  Il2CppObject *mNoticeNumberPrefab; // x22
  Il2CppObject *v9; // x0
  UnityEngine_GameObject_o *v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB2EAC & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2EAC = 1;
  }
  mNoticeNumberRoot = this->fields.mNoticeNumberRoot;
  if ( !mNoticeNumberRoot )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(mNoticeNumberRoot, 1, 0);
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mNoticeNumber = (CGThumbnailListItem_o *)&this->fields.mNoticeNumber;
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0, 0) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           mNoticeNumberPrefab,
           (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v10 = this->fields.mNoticeNumberRoot;
    v11 = (UnityEngine_GameObject_o *)v9;
    GameObjectExtensions__SafeSetParent_36361932((UnityEngine_GameObject_o *)v9, v10, 0);
    if ( v11 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v11,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (CGThumbnailListItem_c *)Component_object;
      sub_1C6B9AC(p_mNoticeNumber, (int32_t)Component_object, v13, v14);
      goto LABEL_11;
    }
LABEL_13:
    sub_1C6BC60(mNoticeNumberRoot, *(_QWORD *)&num);
  }
LABEL_11:
  mNoticeNumberRoot = (UnityEngine_GameObject_o *)p_mNoticeNumber->klass;
  if ( !p_mNoticeNumber->klass )
    goto LABEL_13;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mNoticeNumberRoot, num, 0);
}


void QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(
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
  const MethodInfo *v25; // x3
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
  const MethodInfo *v45; // x3
  UnityEngine_GameObject_o *v46; // x20
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2E94 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656176);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2E94 = 1;
  }
  if ( !warEntity )
    return;
  if ( !WarEntity__IsBlackMarkWithClear(warEntity, 0) )
    goto LABEL_12;
  lastQuestId = warEntity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsQuestClear_40554260(lastQuestId, -1, 0, 0) )
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
  GameObjectExtensions__SetLocalPosition(blackMarkSpace, v13->static_fields->BLACK_MARK_OBJ_POS, 0);
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
    GameObjectExtensions__SetLocalPosition(v16, v17->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0);
  }
  if ( !questBoardItem )
    goto LABEL_64;
  black_mark_prefab_k__BackingField = (UnityEngine_Object_o *)questBoardItem->fields._black_mark_prefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(black_mark_prefab_k__BackingField, 0, 0) )
  {
    blackMarkEffect = (UnityEngine_Object_o *)this->fields.blackMarkEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(blackMarkEffect, 0, 0) )
    {
      v14 = this->fields.blackMarkSpace;
      if ( !v14 )
        goto LABEL_64;
      v20 = (Il2CppObject *)questBoardItem->fields._black_mark_prefab_k__BackingField;
      p_blackMarkEffect = &this->fields.blackMarkEffect;
      transform = UnityEngine_GameObject__get_transform(v14, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__Instantiate_object__52199488(
              v20,
              transform,
              (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v23;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.blackMarkEffect, (int32_t)v23, v24, v25);
      v26 = *p_blackMarkEffect;
      if ( !byte_4CAFC09 )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
    v14 = this->fields.blackMarkSpace;
    if ( !v14 )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(v14, 1, 0);
  }
LABEL_31:
  if ( WarEntity__IsWhiteMarkWithClear(warEntity, 0) )
  {
    v27 = warEntity->fields.lastQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_40554260(v27, -1, 0, 0) )
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
  if ( WarEntity__IsDispWhiteMarkUnderBoard(warEntity, 0) )
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
    GameObjectExtensions__SetLocalPosition(v28, v47, 0);
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
  GameObjectExtensions__SetLocalPosition(v36, v37->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0);
LABEL_48:
  if ( !questBoardItem )
    goto LABEL_64;
  white_mark_prefab_k__BackingField = (UnityEngine_Object_o *)questBoardItem->fields._white_mark_prefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(white_mark_prefab_k__BackingField, 0, 0) )
  {
    whiteMarkEffect = (UnityEngine_Object_o *)this->fields.whiteMarkEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(whiteMarkEffect, 0, 0) )
    {
      v14 = this->fields.blackMarkSpace;
      if ( !v14 )
        goto LABEL_64;
      v40 = (Il2CppObject *)questBoardItem->fields._white_mark_prefab_k__BackingField;
      p_whiteMarkEffect = &this->fields.whiteMarkEffect;
      v42 = UnityEngine_GameObject__get_transform(v14, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__Instantiate_object__52199488(
              v40,
              v42,
              (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
      *p_whiteMarkEffect = (struct UnityEngine_GameObject_o *)v43;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.whiteMarkEffect, (int32_t)v43, v44, v45);
      v46 = *p_whiteMarkEffect;
      if ( !byte_4CAFC09 )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v46, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
    v14 = this->fields.blackMarkSpace;
    if ( v14 )
    {
      UnityEngine_GameObject__SetActive(v14, 1, 0);
      return;
    }
LABEL_64:
    sub_1C6BC60(v14, v15);
  }
}


void QuestBoardListViewItemDraw__SetChapterSubIdDisp(
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
  int32_t v17; // w21
  UISprite_o *mLabelBoardSectionSp; // x20
  QuestBoardListViewItemDraw_c *v19; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4CB2EA3 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EA3 = 1;
  }
  if ( !questInfo )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)MapControl_QuestInfo__GetMine(questInfo, 0);
  if ( !this )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)this, 0);
  if ( !v4->fields.mLabelSubSectionNumLb )
    goto LABEL_47;
  v5 = (QuestEntity_o *)this;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v4->fields.mLabelSubSectionNumLb,
                                           0);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !v5 )
    goto LABEL_47;
  if ( v5->fields.iconId <= 0
    && !QuestEntity__HasFlag(v5, 0x2000000000000000LL, 0)
    && System_String__IsNullOrEmpty(v5->fields.chapterSubStr, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_47;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               questInfo->fields.warId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    HasFlag = QuestEntity__HasFlag(v5, 0x40000, 0);
    v9 = Entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal((WarEntity_o *)Entity, 0);
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
      this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v5 + 116, 0);
      if ( !mLabelSubSectionNumLb )
        goto LABEL_47;
    }
    UILabel__set_text(mLabelSubSectionNumLb, (System_String_o *)this, 0);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelSubSectionNumLb;
    if ( !this )
      goto LABEL_47;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_47;
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
    }
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelSubSectionNumLb;
    if ( !this )
      goto LABEL_47;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelChapterSp;
  if ( !this )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  mLabelChapterSp = v4->fields.mLabelChapterSp;
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v13, v5, v14);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mLabelChapterSp, QuestIconNameForMainType, 0);
  if ( !mLabelChapterSp )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelChapterSp, (unsigned __int8)this & 1, 0);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelChapterSp;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
  this = (QuestBoardListViewItemDraw_o *)questInfo->fields._WarInfo_k__BackingField;
  if ( !this )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0);
  if ( !this )
    goto LABEL_47;
  QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)this, 0);
  if ( !QuestBoardSectionId )
    return;
  v17 = QuestBoardSectionId;
  mLabelBoardSectionSp = v4->fields.mLabelBoardSectionSp;
  v19 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v19 = QuestBoardListViewItemDraw_TypeInfo;
  }
  CHAPTER_SP_UNIT_NAME = v19->static_fields->CHAPTER_SP_UNIT_NAME;
  v23 = v17;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v22 = System_String__Format(CHAPTER_SP_UNIT_NAME, v21, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mLabelBoardSectionSp, v22, 0);
  if ( !mLabelBoardSectionSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)mLabelBoardSectionSp,
          (unsigned __int8)this & 1,
          0),
        (this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelBoardSectionSp) == 0) )
  {
LABEL_47:
    sub_1C6BC60(this, questInfo);
  }
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
}


void QuestBoardListViewItemDraw__SetClearSprite(
        QuestBoardListViewItemDraw_o *this,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *StatusSp; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  QuestBoardListViewItemDraw_c *v8; // x0
  QuestBoardListViewItemDraw_c *v9; // x0

  if ( (byte_4CB2EAF & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EAF = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_1C6BC60(0, v6);
  v7 = StatusSp;
  if ( UnityEngine_GameObject__get_activeSelf(StatusSp, 0) )
  {
    v8 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v8 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v7, v8->static_fields->CLEAR_POS_AREA, 0);
    if ( warEnt && WarEntity__HasFlag(warEnt, 256, 0) )
    {
      v9 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v9 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionX(v7, -v9->static_fields->CLEAR_POS_AREA.fields.x, 0);
    }
  }
}


void QuestBoardListViewItemDraw__SetClosedTitleName(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  Il2CppClass *klass; // x1
  Il2CppObject *MasterData_object; // x23
  System_String_o *monitor; // x21
  QuestReleaseEntity_array *ListByQuestID; // x0
  QuestBoardListViewItemDraw___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x24
  System_Func_object__bool__o *_9__428_0; // x25
  Il2CppObject *v15; // x26
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x24
  QuestBoardListViewItemDraw___c_c *v21; // x0
  System_Func_object__int__o *_9__428_1; // x25
  Il2CppObject *v23; // x26
  struct QuestBoardListViewItemDraw___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w24
  int v30; // w26
  __int64 v31; // x25
  char v32; // w23
  Il2CppObject *PrioredName; // x0
  System_String_o *v34; // x0
  int32_t WarID_ByQuestID; // w22
  int64_t OpenedAt; // x22
  System_Object_array *v37; // x22
  System_DateTime_o v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x24
  System_DateTime_o v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x24
  System_DateTime_o v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x24
  System_DateTime_o v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x24
  struct UILabel_o *mTitleNameLb; // x19
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  __int64 v57; // x0
  int32_t Minute; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t Hour; // [xsp+18h] [xbp-88h] BYREF
  int32_t Day; // [xsp+1Ch] [xbp-84h] BYREF
  __int64 v61; // [xsp+20h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v63; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CB2EDE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_First_QuestReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_QuestReleaseEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_1C6BA08(&System_Func_QuestReleaseEntity__int__TypeInfo);
    sub_1C6BA08(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__SetClosedTitleName_b__428_0__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__SetClosedTitleName_b__428_1__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_14826/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2EDE = 1;
  }
  v63 = 0;
  entity = 0;
  dateData = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !questInfo || !Instance )
    goto LABEL_80;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  ListByQuestID = QuestReleaseMaster__getListByQuestID((QuestReleaseMaster_o *)Instance, questInfo->fields.questId, 0);
  v12 = QuestBoardListViewItemDraw___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestID;
  if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
    v12 = QuestBoardListViewItemDraw___c_TypeInfo;
  }
  _9__428_0 = (System_Func_object__bool__o *)v12->static_fields->__9__428_0;
  if ( !_9__428_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = QuestBoardListViewItemDraw___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__428_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__428_0,
      v15,
      Method_QuestBoardListViewItemDraw___c__SetClosedTitleName_b__428_0__,
      0);
    static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__428_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__428_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__428_0, (int32_t)_9__428_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)_9__428_0,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               v19,
                                                               (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
  Instance = System_Linq_Enumerable__Any_object_(
               v20,
               (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
  if ( (Instance & 1) != 0 )
  {
    v21 = QuestBoardListViewItemDraw___c_TypeInfo;
    if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
      v21 = QuestBoardListViewItemDraw___c_TypeInfo;
    }
    _9__428_1 = (System_Func_object__int__o *)v21->static_fields->__9__428_1;
    if ( !_9__428_1 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__428_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_QuestReleaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__428_1,
        v23,
        Method_QuestBoardListViewItemDraw___c__SetClosedTitleName_b__428_1__,
        0);
      v24 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
      v24->__9__428_1 = (struct System_Func_QuestReleaseEntity__int__o *)_9__428_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v24->__9__428_1, (int32_t)_9__428_1, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TKey__o *)_9__428_1,
                                                                 (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_QuestReleaseEntity__int___);
    Instance = (__int64)System_Linq_Enumerable__First_object_(
                          v27,
                          (const MethodInfo_3161D1C *)Method_System_Linq_Enumerable_First_QuestReleaseEntity___);
    if ( !Instance )
      goto LABEL_80;
    v28 = *(_DWORD *)(Instance + 40);
    v30 = *(_DWORD *)(Instance + 20);
    v29 = *(_DWORD *)(Instance + 24);
    v31 = *(_QWORD *)(Instance + 32);
  }
  else
  {
    v31 = 0;
    v29 = 0;
    v30 = 0;
    v28 = 0;
  }
  if ( !MasterData_object )
    goto LABEL_80;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               &entity,
               v28,
               (const MethodInfo_33F9128 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_80;
    monitor = (System_String_o *)entity[1].monitor;
    Instance = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0);
    v32 = Instance;
  }
  else
  {
    v32 = 0;
  }
  switch ( v30 )
  {
    case 1:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, v29, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Instance )
        goto LABEL_80;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &v63,
              WarID_ByQuestID,
              (const MethodInfo_33F9128 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        goto LABEL_58;
      Instance = (__int64)v63;
      if ( !v63 )
        goto LABEL_80;
      PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v63, 0);
LABEL_30:
      v34 = System_String__Format(monitor, PrioredName, 0);
      goto LABEL_57;
    case 6:
    case 7:
    case 9:
      v61 = v31;
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v61);
      goto LABEL_30;
    case 12:
      if ( !questEnt )
        goto LABEL_80;
      OpenedAt = QuestEntity__getOpenedAt(questEnt, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_41600872(OpenedAt, 0).fields._dateData;
      v37 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v38.fields._dateData = (uint64_t)&dateData;
      LODWORD(v61) = System_DateTime__get_Month(v38, 0);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &v61);
      if ( !v37 )
        goto LABEL_80;
      v41 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = sub_1C6BB44(Instance, v37->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_82;
      }
      if ( !LODWORD(v37->max_length) )
        goto LABEL_81;
      v37->m_Items[0] = v41;
      sub_1C6B9AC((CGThumbnailListItem_o *)v37->m_Items, (int32_t)v41, v39, v40);
      v42.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v42, 0);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v45 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = sub_1C6BB44(Instance, v37->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_82;
      }
      if ( LODWORD(v37->max_length) <= 1 )
        goto LABEL_81;
      v37->m_Items[1] = v45;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v37->m_Items[1], (int32_t)v45, v43, v44);
      v46.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v46, 0);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v49 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = sub_1C6BB44(Instance, v37->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_82;
      }
      if ( LODWORD(v37->max_length) <= 2 )
        goto LABEL_81;
      v37->m_Items[2] = v49;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v37->m_Items[2], (int32_t)v49, v47, v48);
      v50.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v50, 0);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v53 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = sub_1C6BB44(Instance, v37->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_82:
          v57 = sub_1C6BC84();
          sub_1C6BB30(v57, 0);
        }
      }
      if ( LODWORD(v37->max_length) <= 3 )
LABEL_81:
        sub_1C6BC68(Instance);
      v37->m_Items[3] = v53;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v37->m_Items[3], (int32_t)v53, v51, v52);
      v34 = System_String__Format_64008236(monitor, v37, 0);
LABEL_57:
      monitor = v34;
LABEL_58:
      if ( (v32 & 1) != 0 )
        goto LABEL_59;
      WarInfo_k__BackingField = questInfo->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField || !MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0) )
        goto LABEL_68;
      Instance = (__int64)questInfo->fields._WarInfo_k__BackingField;
      if ( !Instance )
        goto LABEL_80;
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0);
      if ( Mine && WarEntity__IsChangeDispClosedMessage(Mine, 0) )
      {
LABEL_59:
        mTitleNameLb = this->fields.mTitleNameLb;
        if ( entity )
        {
          Instance = System_String__op_Inequality(
                       (System_String_o *)entity[2].klass,
                       (System_String_o *)StringLiteral_1/*""*/,
                       0);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_80;
            klass = entity[2].klass;
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14826/*"UNKNOWN_QUEST_NAME"*/, 0);
            klass = (Il2CppClass *)Instance;
          }
          if ( mTitleNameLb )
          {
LABEL_78:
            Instance = (__int64)mTitleNameLb;
            goto LABEL_79;
          }
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14826/*"UNKNOWN_QUEST_NAME"*/, 0);
          if ( mTitleNameLb )
          {
            klass = (Il2CppClass *)Instance;
            goto LABEL_78;
          }
        }
LABEL_80:
        sub_1C6BC60(Instance, klass);
      }
LABEL_68:
      Instance = (__int64)this->fields.mTitleNameLb;
      if ( !Instance )
        goto LABEL_80;
      klass = (Il2CppClass *)monitor;
LABEL_79:
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)klass, 0);
      return;
    default:
      goto LABEL_58;
  }
}


void QuestBoardListViewItemDraw__SetCostDisp(
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
        bool isForceHide,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  QuestBoardListViewItemDraw_o *v23; // x19
  __int64 type; // x8
  UnityEngine_GameObject_o *mCostObj; // x21
  _BOOL4 HasFlag; // w20
  _BOOL4 v27; // w28
  UIWidget_o *v28; // x21
  __int64 v29; // x9
  UnityEngine_Component_o *mCostBg1; // x8
  QuestBoardListViewItemDraw_o **p_mCostLb2; // x21
  QuestBoardListViewItemDraw_o **v32; // x27
  QuestConsumeItemEntity_o *v33; // x26
  _BOOL4 v34; // w21
  int bannerId; // w23
  UISprite_o *mCostApSp; // x21
  System_String_o *ApSpriteFileName; // x23
  int32_t ActConsume; // w0
  int32_t v39; // w29
  UserGameEntity_o *v40; // x28
  bool v41; // w24
  BalanceConfig_c *v42; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UISprite_o *mCostRpSp; // x21
  __int64 BpExpresssionType; // x20
  __int64 v46; // x8
  struct System_String_array *RP_SPNAME_POINT; // x8
  struct System_Int32_array *v48; // x8
  char v49; // w23
  QuestBoardListViewItemDraw_o *v50; // x22
  QuestBoardListViewItemDraw_c *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  struct System_Int32_array *v53; // x8
  int32_t v54; // w20
  BalanceConfig_c *v55; // x0
  UIWidget_o *v56; // x22
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct System_Int32_array *v59; // x8
  int v60; // w23
  UISprite_o *v61; // x22
  System_String_o *v62; // x23
  BalanceConfig_c *v63; // x0
  bool v64; // w24
  Il2CppObject *v65; // x27
  Il2CppObject *v66; // x26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v68; // x8
  ItemEntity_o *v69; // x28
  const MethodInfo *v70; // x7
  struct System_Int32_array *nums; // x8
  UIWidget_o *v72; // x28
  struct System_Int32_array *v73; // x8
  struct System_Int32_array *v74; // x8
  const MethodInfo *v75; // x7
  struct System_Int32_array *v76; // x8
  bool v77; // w28
  UISprite_o *v78; // x21
  struct UIRoot_o *mRoot; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // x21
  Il2CppObject *v81; // x0
  Il2CppObject *v82; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v84; // x8
  UnityEngine_GameObject_o *v85; // x22
  UnityEngine_GameObject_o *v86; // x0
  int klass; // w20
  BalanceConfig_c *v88; // x0
  UIWidget_o *v89; // x21
  UnityEngine_GameObject_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UISprite_o *v92; // x22
  struct UIRoot_o *v93; // x8
  struct System_Int32_array *v94; // x8
  UnityEngine_GameObject_o *v95; // x0
  QuestBoardListViewItemDraw_c *v96; // x8
  UnityEngine_GameObject_o *v97; // x22
  UnityEngine_GameObject_o *v98; // x0
  struct System_Int32_array *v99; // x8
  int32_t v100; // w20
  BalanceConfig_c *v101; // x0
  UIWidget_o *v102; // x22
  UnityEngine_GameObject_o *v103; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  QuestBoardListViewItemDraw_c *v106; // x8
  UnityEngine_GameObject_o *v107; // x22
  UnityEngine_GameObject_o *v108; // x0
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_GameObject_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  struct System_Int32_array *v112; // x8
  UnityEngine_GameObject_o *v113; // x21
  UnityEngine_GameObject_o *v114; // x21
  UnityEngine_GameObject_o *v115; // x21
  UIWidget_o *v116; // x21
  UILabel_o *v117; // x20
  UILabel_o *mCostLb1; // x28
  QuestBoardListViewItemDraw_o *v119; // x0
  const MethodInfo *v120; // x7
  Il2CppObject *Master_object; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v122; // x24
  Il2CppObject *v123; // x0
  Il2CppObject *v124; // x24
  UIWidget_o *v125; // x27
  int64_t v126; // x25
  const MethodInfo *v127; // x7
  QuestBoardListViewItemDraw_o *mCostLb3; // x1
  UserItemEntity_o *v129; // x3
  bool v130; // w5
  char v131; // w6
  int32_t v132; // w2
  ItemEntity_o *v133; // x4
  UILabel_o *v134; // x25
  QuestBoardListViewItemDraw_o *v135; // x0
  const MethodInfo *v136; // x7
  UILabel_o *v137; // x29
  QuestBoardListViewItemDraw_o *v138; // x0
  const MethodInfo *v139; // x7
  UIWidget_o *v140; // x25
  Il2CppObject *v141; // x26
  Il2CppObject *v142; // x25
  struct System_Int32_array *v143; // x8
  struct System_Int32_array *v144; // x8
  ItemEntity_o *v145; // x25
  const MethodInfo *v146; // x7
  struct System_Int32_array *v147; // x8
  UIWidget_o *v148; // x25
  struct System_Int32_array *v149; // x8
  struct System_Int32_array *v150; // x8
  struct System_Int32_array *v151; // x8
  bool *v152; // [xsp+8h] [xbp-D8h]
  QuestConsumeItemEntity_o *v153; // [xsp+20h] [xbp-C0h]
  __int64 v154; // [xsp+28h] [xbp-B8h]
  Il2CppObject *v155; // [xsp+30h] [xbp-B0h] BYREF
  UserItemEntity_o *usrItem; // [xsp+38h] [xbp-A8h] BYREF
  UserItemEntity_o *entity; // [xsp+40h] [xbp-A0h] BYREF
  UserItemEntity_o *v158; // [xsp+48h] [xbp-98h] BYREF
  Il2CppObject *v159; // [xsp+50h] [xbp-90h] BYREF
  int32_t v160; // [xsp+5Ch] [xbp-84h] BYREF
  UnityEngine_Color_o v161; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v162; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v163; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v164; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v165; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v166; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v167; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v168; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v169; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v170; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v171; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v172; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v173; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v174; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v175; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v176; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v177; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v23 = this;
  if ( (byte_4CB2E9E & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2E9E = 1;
  }
  v160 = 0;
  v158 = 0;
  v159 = 0;
  usrItem = 0;
  entity = 0;
  v155 = 0;
  if ( !questEnt )
    goto LABEL_465;
  type = questEnt->fields.type;
  *isDoubleItemConsume = 0;
  *isDoubleItemConsumeQp = 0;
  *isTripleItemConsume = 0;
  mCostObj = v23->fields.mCostObj;
  v154 = type;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__HasFlag(questEnt, 0x2000, 0);
  if ( !mCostObj )
    goto LABEL_465;
  UnityEngine_GameObject__SetActive(mCostObj, ((unsigned __int8)this & 1) == 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
  if ( !this )
    goto LABEL_465;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
    return;
  if ( isClosed )
  {
    HasFlag = QuestEntity__HasFlag(questEnt, 128, 0);
    v27 = QuestEntity__HasFlag(questEnt, 256, 0);
  }
  else
  {
    HasFlag = 0;
    v27 = 0;
  }
  this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
  if ( !this )
    goto LABEL_465;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_465;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v27, 0);
  this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb2;
  if ( !this )
    goto LABEL_465;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_465;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v27, 0);
  this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
  if ( !this )
    goto LABEL_465;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_465;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v27, 0);
  this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
  if ( !this )
    goto LABEL_465;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v28 = (UIWidget_o *)this;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v28 )
    goto LABEL_465;
  v29 = 304;
  if ( (_DWORD)v154 == 7 )
    v29 = 316;
  UIWidget__set_width(
    v28,
    *(int32_t *)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v29),
    0);
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getItemConsumeEntity(questEnt, 0, 0);
  mCostBg1 = (UnityEngine_Component_o *)v23->fields.mCostBg1;
  v153 = (QuestConsumeItemEntity_o *)this;
  if ( !mCostBg1 )
    goto LABEL_465;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(mCostBg1, 0);
  if ( !this )
    goto LABEL_465;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg2;
  if ( !this )
    goto LABEL_465;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_465;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg3;
  if ( !this )
    goto LABEL_465;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_465;
  p_mCostLb2 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !v27 )
  {
    v152 = isDoubleItemConsumeQp;
    ActConsume = QuestEntity__getActConsume(questEnt, costCalcVal, 0);
    if ( fixedVal >= 0 )
      v39 = fixedVal;
    else
      v39 = ActConsume;
    v160 = v39;
    this = (QuestBoardListViewItemDraw_o *)UserGameMaster__getSelfUserGame(0);
    v40 = (UserGameEntity_o *)this;
    switch ( questEnt->fields.consumeType )
    {
      case 1:
        if ( !this )
          goto LABEL_465;
        v41 = v39 > SLODWORD(this->fields.mTerminalAtlas) || v39 > UserGameEntity__getAct((UserGameEntity_o *)this, 0);
        isDoubleItemConsumeQp = v152;
        mCostLb1 = v23->fields.mCostLb1;
        v119 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v160, 0);
        v173.fields.r = r;
        v173.fields.g = g;
        v173.fields.b = b;
        v173.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v119,
          mCostLb1,
          (System_String_o *)v119,
          costCalcVal,
          v173,
          v41,
          isClosed,
          fixedVal >= 0,
          v120);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb2;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v33 = v153;
        if ( !this )
          goto LABEL_465;
        v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
        if ( !this )
          goto LABEL_465;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                &v159,
                questEnt->fields.id,
                (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
          goto LABEL_31;
        this = (QuestBoardListViewItemDraw_o *)v159;
        if ( !v159 )
          goto LABEL_465;
        if ( !QuestExtensionEntity__GetDiscountItemId((QuestExtensionEntity_o *)v159, 0) )
          goto LABEL_31;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !v159 )
          goto LABEL_465;
        v122 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        this = (QuestBoardListViewItemDraw_o *)QuestExtensionEntity__GetDiscountItemId(
                                                 (QuestExtensionEntity_o *)v159,
                                                 0);
        if ( !v122 )
          goto LABEL_465;
        v123 = DataMasterBase_object__object__int___GetEntity(
                 v122,
                 (int32_t)this,
                 (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !v123 )
          goto LABEL_30;
        v124 = v123;
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v125 = (UIWidget_o *)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        if ( !v125 )
          goto LABEL_465;
        UIWidget__set_width(v125, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0);
        *isDoubleItemConsume = 1;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        }
        v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
        v34 = HasFlag;
        if ( !v159 )
          goto LABEL_465;
        v126 = *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors;
        this = (QuestBoardListViewItemDraw_o *)QuestExtensionEntity__GetDiscountItemId(
                                                 (QuestExtensionEntity_o *)v159,
                                                 0);
        if ( !Master_object )
          goto LABEL_465;
        UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &v158, v126, (int32_t)this, 0);
        this = *v32;
        if ( !*v32 )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v33 = v153;
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        mCostLb3 = *v32;
        v129 = v158;
        v130 = isClosed;
        v131 = 1;
        v132 = 0;
        v133 = (ItemEntity_o *)v124;
        goto LABEL_461;
      case 2:
        if ( !this )
          goto LABEL_465;
        v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
        if ( !byte_4CB2EE2 )
        {
          sub_1C6BA08(&BalanceConfig_TypeInfo);
          byte_4CB2EE2 = 1;
        }
        v34 = HasFlag;
        v63 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v63 = BalanceConfig_TypeInfo;
        }
        v33 = v153;
        v64 = v39 > v63->static_fields->UerGameRpMax || v39 > UserGameEntity__getRp(v40, 0);
        isDoubleItemConsumeQp = v152;
        v134 = v23->fields.mCostLb1;
        v135 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v160, 0);
        v174.fields.r = r;
        v174.fields.g = g;
        v174.fields.b = b;
        v174.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(v135, v134, (System_String_o *)v135, 0, v174, v64, isClosed, 0, v136);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb2;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        goto LABEL_32;
      case 3:
        if ( !v153 || !QuestConsumeItemEntity__IsAvailableAt(v153, 0, 0) )
        {
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
          isDoubleItemConsumeQp = v152;
          if ( !this )
            goto LABEL_465;
          v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
          goto LABEL_432;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v65 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
        v66 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        }
        itemIds = v153->fields.itemIds;
        if ( !itemIds )
          goto LABEL_465;
        if ( !LODWORD(itemIds->max_length) )
          goto LABEL_466;
        if ( !v65 )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                 (UserItemMaster_o *)v65,
                                                 &entity,
                                                 *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors,
                                                 itemIds->m_Items[0],
                                                 0);
        v68 = v153->fields.itemIds;
        if ( !v68 )
          goto LABEL_465;
        if ( !LODWORD(v68->max_length) )
          goto LABEL_466;
        if ( !v66 )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v66,
                                                 v68->m_Items[0],
                                                 (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !v23->fields.mCostLb1 )
          goto LABEL_465;
        v69 = (ItemEntity_o *)this;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v23->fields.mCostLb1,
                                                 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        nums = v153->fields.nums;
        if ( !nums )
          goto LABEL_465;
        if ( !LODWORD(nums->max_length) )
          goto LABEL_466;
        v166.fields.r = r;
        v166.fields.g = g;
        v166.fields.b = b;
        v166.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          v23->fields.mCostLb1,
          nums->m_Items[0],
          entity,
          v69,
          v166,
          isClosed,
          isNotItemConsume,
          v70);
        if ( QuestConsumeItemEntity__IsAvailableAt(v153, 1, 0) )
        {
          *isDoubleItemConsume = 1;
          this = *p_mCostLb2;
          if ( !*p_mCostLb2 )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          if ( !this )
            goto LABEL_465;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v72 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v72 )
            goto LABEL_465;
          UIWidget__set_width(v72, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CB002A )
          {
            sub_1C6BA08(&NetworkManager_TypeInfo);
            byte_4CB002A = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          v73 = v153->fields.itemIds;
          if ( !v73 )
            goto LABEL_465;
          if ( LODWORD(v73->max_length) <= 1 )
            goto LABEL_466;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)v65,
                                                   &entity,
                                                   *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors,
                                                   v73->m_Items[1],
                                                   0);
          v74 = v153->fields.itemIds;
          if ( !v74 )
            goto LABEL_465;
          if ( LODWORD(v74->max_length) <= 1 )
            goto LABEL_466;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v66,
                                                   v74->m_Items[1],
                                                   (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v76 = v153->fields.nums;
          if ( !v76 )
            goto LABEL_465;
          if ( LODWORD(v76->max_length) <= 1 )
            goto LABEL_466;
          v167.fields.r = r;
          v167.fields.g = g;
          v167.fields.b = b;
          v167.fields.a = a;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            (UILabel_o *)*p_mCostLb2,
            v76->m_Items[1],
            entity,
            (ItemEntity_o *)this,
            v167,
            isClosed,
            isNotItemConsume,
            v75);
        }
        else
        {
          this = *p_mCostLb2;
          if ( !*p_mCostLb2 )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          if ( !this )
            goto LABEL_465;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        }
        if ( !QuestConsumeItemEntity__IsAvailableAt(v153, 2, 0) )
        {
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          isDoubleItemConsumeQp = v152;
          v33 = v153;
          if ( !this )
            goto LABEL_465;
          v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          goto LABEL_31;
        }
        *isDoubleItemConsume = 0;
        *isTripleItemConsume = 1;
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v148 = (UIWidget_o *)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        if ( !v148 )
          goto LABEL_465;
        UIWidget__set_width(
          v148,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        }
        isDoubleItemConsumeQp = v152;
        v149 = v153->fields.itemIds;
        if ( !v149 )
          goto LABEL_465;
        if ( LODWORD(v149->max_length) <= 2 )
          goto LABEL_466;
        this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                 (UserItemMaster_o *)v65,
                                                 &entity,
                                                 *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors,
                                                 v149->m_Items[2],
                                                 0);
        v150 = v153->fields.itemIds;
        if ( !v150 )
          goto LABEL_465;
        if ( LODWORD(v150->max_length) <= 2 )
          goto LABEL_466;
        v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v66,
                                                 v150->m_Items[2],
                                                 (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v33 = v153;
        v34 = HasFlag;
        v151 = v153->fields.nums;
        if ( !v151 )
          goto LABEL_465;
        if ( LODWORD(v151->max_length) <= 2 )
          goto LABEL_466;
        mCostLb3 = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
        v132 = v151->m_Items[2];
        v129 = entity;
        v130 = isClosed;
        v131 = isNotItemConsume;
        v133 = (ItemEntity_o *)this;
LABEL_461:
        v177.fields.r = r;
        v177.fields.g = g;
        v177.fields.b = b;
        v177.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          (UILabel_o *)mCostLb3,
          v132,
          v129,
          v133,
          v177,
          v130,
          v131,
          v127);
        goto LABEL_32;
      case 4:
        if ( !this )
          goto LABEL_465;
        v77 = v39 > SLODWORD(this->fields.mTerminalAtlas) || v39 > UserGameEntity__getAct((UserGameEntity_o *)this, 0);
        v137 = v23->fields.mCostLb1;
        v138 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v160, 0);
        v175.fields.r = r;
        v175.fields.g = g;
        v175.fields.b = b;
        v175.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v138,
          v137,
          (System_String_o *)v138,
          costCalcVal,
          v175,
          v77,
          isClosed,
          fixedVal >= 0,
          v139);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb2;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        isDoubleItemConsumeQp = v152;
        if ( !this )
          goto LABEL_465;
        v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( v153 && QuestConsumeItemEntity__IsAvailableAt(v153, 0, 0) )
        {
          *isDoubleItemConsume = 1;
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v140 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v140 )
            goto LABEL_465;
          UIWidget__set_width(v140, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v141 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
          v142 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CB002A )
          {
            sub_1C6BA08(&NetworkManager_TypeInfo);
            byte_4CB002A = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
          v34 = HasFlag;
          v143 = v153->fields.itemIds;
          if ( !v143 )
            goto LABEL_465;
          if ( !LODWORD(v143->max_length) )
            goto LABEL_466;
          if ( !v141 )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)v141,
                                                   &usrItem,
                                                   *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors,
                                                   v143->m_Items[0],
                                                   0);
          v33 = v153;
          v144 = v153->fields.itemIds;
          if ( !v144 )
            goto LABEL_465;
          if ( !LODWORD(v144->max_length) )
            goto LABEL_466;
          if ( !v142 )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v142,
                                                   v144->m_Items[0],
                                                   (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !*v32 )
            goto LABEL_465;
          v145 = (ItemEntity_o *)this;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)*v32,
                                                   0);
          if ( !this )
            goto LABEL_465;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v147 = v153->fields.nums;
          if ( !v147 )
            goto LABEL_465;
          if ( !LODWORD(v147->max_length) )
            goto LABEL_466;
          v176.fields.r = r;
          v176.fields.g = g;
          v176.fields.b = b;
          v176.fields.a = a;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            (UILabel_o *)*v32,
            v147->m_Items[0],
            usrItem,
            v145,
            v176,
            isClosed,
            isNotItemConsume,
            v146);
          if ( !QuestConsumeItemEntity__IsAvailableAt(v153, 1, 0) )
            goto LABEL_32;
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          if ( !this )
            goto LABEL_465;
        }
        else
        {
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
          if ( !this )
            goto LABEL_465;
LABEL_432:
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          v34 = HasFlag;
          if ( !this )
            goto LABEL_465;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = *v32;
        if ( !*v32 )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v33 = 0;
        goto LABEL_32;
      default:
        isDoubleItemConsumeQp = v152;
        break;
    }
  }
  v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
LABEL_30:
  v33 = v153;
LABEL_31:
  v34 = HasFlag;
LABEL_32:
  if ( v34 && !isForceHide )
  {
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
    if ( !this )
      goto LABEL_465;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_465;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpSp;
    if ( !this )
      goto LABEL_465;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_465;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
    if ( !this )
      goto LABEL_465;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_465;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_465;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_465;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
    if ( !this )
      goto LABEL_465;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_465;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
    if ( !this )
      goto LABEL_465;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0);
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
    if ( !this )
      goto LABEL_465;
    v161.fields.r = r;
    v161.fields.g = g;
    v161.fields.b = b;
    v161.fields.a = a;
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v161, 0);
    if ( !v33 || !QuestConsumeItemEntity__IsAvailableAt(v33, 1, 0) )
      goto LABEL_324;
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_465;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_465;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_465;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0);
    this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_465;
LABEL_320:
    v172.fields.r = r;
    v172.fields.g = g;
    v172.fields.b = b;
    v172.fields.a = a;
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v172, 0);
    goto LABEL_324;
  }
  switch ( questEnt->fields.consumeType )
  {
    case 1:
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpSp;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
      if ( !this )
        goto LABEL_465;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      bannerId = questEnt->fields.bannerId;
      mCostApSp = v23->fields.mCostApSp;
      if ( bannerId >= 1 )
      {
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(bannerId, (const MethodInfo *)questEnt);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0);
        if ( !mCostApSp )
          goto LABEL_465;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, (unsigned __int8)this & 1, 0);
        goto LABEL_226;
      }
      if ( !mCostApSp )
        goto LABEL_465;
      UISprite__set_atlas(v23->fields.mCostApSp, v23->fields.mTerminalAtlas, 0);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v78 = v23->fields.mCostApSp;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      }
      mRoot = this->fields.mPrevSp[2].fields.mRoot;
      if ( !mRoot )
        goto LABEL_465;
      if ( (unsigned int)v154 < LODWORD(mRoot->fields.m_CancellationTokenSource) )
      {
        if ( !v78 )
          goto LABEL_465;
        UISprite__set_spriteName(v78, *((System_String_o **)&mRoot->fields.scalingStyle + v154), 0);
LABEL_226:
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
        if ( !this )
          goto LABEL_465;
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
          this,
          this->klass[2]._1.generic_class);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
        if ( !this )
          goto LABEL_465;
        v168.fields.r = r;
        v168.fields.g = g;
        v168.fields.b = b;
        v168.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v168, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
        if ( !this )
          goto LABEL_465;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               &v155,
               questEnt->fields.id,
               (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
        {
          this = (QuestBoardListViewItemDraw_o *)v155;
          if ( !v155 )
            goto LABEL_465;
          if ( QuestExtensionEntity__GetDiscountItemId((QuestExtensionEntity_o *)v155, 0) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
            this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
            if ( !v155 )
              goto LABEL_465;
            v80 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
            this = (QuestBoardListViewItemDraw_o *)QuestExtensionEntity__GetDiscountItemId(
                                                     (QuestExtensionEntity_o *)v155,
                                                     0);
            if ( !v80 )
              goto LABEL_465;
            v81 = DataMasterBase_object__object__int___GetEntity(
                    v80,
                    (int32_t)this,
                    (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v81 )
            {
              v82 = v81;
              this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpSp;
              if ( !this )
                goto LABEL_465;
              this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
              if ( !this )
                goto LABEL_465;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
              if ( !this )
                goto LABEL_465;
              this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
              if ( !this )
                goto LABEL_465;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
              if ( !this )
                goto LABEL_465;
              ItemIconComponent__SetItem((ItemIconComponent_o *)this, (int32_t)v82[1].klass, -1, 1, 0);
              this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
              if ( !this )
                goto LABEL_465;
              v169.fields.r = r;
              v169.fields.g = g;
              v169.fields.b = b;
              v169.fields.a = a;
              ItemIconComponent__SetColor((ItemIconComponent_o *)this, v169, 0);
              this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
              if ( !this )
                goto LABEL_465;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              v84 = QuestBoardListViewItemDraw_TypeInfo;
              v85 = gameObject;
              if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v84 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(v85, (float)v84->static_fields->COST_2_ICON_NORMAL_POSITION_X, 0);
              this = *v32;
              if ( !*v32 )
                goto LABEL_465;
              v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              GameObjectExtensions__SetLocalPositionX(
                v86,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
                0);
              klass = (int)v82[1].klass;
              v88 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v88 = BalanceConfig_TypeInfo;
              }
              if ( klass == v88->static_fields->ItemIdQp )
              {
                *isDoubleItemConsumeQp = 1;
                this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
                if ( !this )
                  goto LABEL_465;
                this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v89 = (UIWidget_o *)this;
                if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                if ( !v89 )
                  goto LABEL_465;
                UIWidget__set_width(v89, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0);
                this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg2;
                if ( !this )
                  goto LABEL_465;
                this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                if ( !this )
                  goto LABEL_465;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg2;
                if ( !this )
                  goto LABEL_465;
                this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                if ( !this )
                  goto LABEL_465;
                UISprite__set_spriteName(
                  (UISprite_o *)this,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                  0);
                this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
                if ( !this )
                  goto LABEL_465;
                v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                GameObjectExtensions__SetLocalPositionX(
                  v90,
                  (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                  0);
                this = *v32;
                if ( !*v32 )
                  goto LABEL_465;
                v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                GameObjectExtensions__SetLocalPositionX(
                  v91,
                  (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
                  0);
              }
            }
          }
        }
        goto LABEL_324;
      }
      goto LABEL_466;
    case 2:
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpSp;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpSp;
      if ( !this )
        goto LABEL_465;
      v162.fields.r = r;
      v162.fields.g = g;
      v162.fields.b = b;
      v162.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v162, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpPointSp;
      if ( !this )
        goto LABEL_465;
      v163.fields.r = r;
      v163.fields.g = g;
      v163.fields.b = b;
      v163.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v163, 0);
      v42 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v42 = BalanceConfig_TypeInfo;
      }
      static_fields = v42->static_fields;
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      mCostRpSp = v23->fields.mCostRpSp;
      BpExpresssionType = static_fields->BpExpresssionType;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      }
      v46 = *(_QWORD *)&this->fields.mPrevSp[1].fields.mInnerUV.fields.m_Height;
      if ( !v46 )
        goto LABEL_465;
      if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v46 + 24) )
        goto LABEL_466;
      if ( !mCostRpSp )
        goto LABEL_465;
      UISprite__set_spriteName(mCostRpSp, *(System_String_o **)(v46 + 8 * BpExpresssionType + 32), 0);
      RP_SPNAME_POINT = QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
      if ( !RP_SPNAME_POINT )
        goto LABEL_465;
      if ( (unsigned int)BpExpresssionType >= LODWORD(RP_SPNAME_POINT->max_length) )
        goto LABEL_466;
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpPointSp;
      if ( !this )
        goto LABEL_465;
      UISprite__set_spriteName((UISprite_o *)this, RP_SPNAME_POINT->m_Items[BpExpresssionType], 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpSp;
      if ( !this )
        goto LABEL_465;
      ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
        this,
        this->klass[2]._1.generic_class);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpPointSp;
      if ( !this )
        goto LABEL_465;
      ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
        this,
        this->klass[2]._1.generic_class);
      goto LABEL_324;
    case 3:
      if ( !v33 )
        goto LABEL_324;
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpSp;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v48 = v33->fields.itemIds;
      if ( !v48 )
        goto LABEL_465;
      if ( !LODWORD(v48->max_length) )
        goto LABEL_466;
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
      if ( !this )
        goto LABEL_465;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, v48->m_Items[0], -1, 1, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
      if ( !this )
        goto LABEL_465;
      v164.fields.r = r;
      v164.fields.g = g;
      v164.fields.b = b;
      v164.fields.a = a;
      ItemIconComponent__SetColor((ItemIconComponent_o *)this, v164, 0);
      this = (QuestBoardListViewItemDraw_o *)QuestConsumeItemEntity__IsAvailableAt(v33, 1, 0);
      if ( !v23->fields.mCostItemIcon2 )
        goto LABEL_465;
      v49 = (char)this;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v23->fields.mCostItemIcon2,
                                               0);
      v50 = this;
      if ( (v49 & 1) != 0 )
      {
        v51 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v51 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(
          (UnityEngine_GameObject_o *)v50,
          (float)v51->static_fields->COST_2_ICON_NORMAL_POSITION_X,
          0);
        this = *v32;
        if ( !*v32 )
          goto LABEL_465;
        v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v52,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
          0);
        v53 = v33->fields.itemIds;
        if ( !v53 )
          goto LABEL_465;
        if ( LODWORD(v53->max_length) <= 1 )
          goto LABEL_466;
        v54 = v53->m_Items[1];
        v55 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v55 = BalanceConfig_TypeInfo;
        }
        if ( v54 == v55->static_fields->ItemIdQp )
        {
          *isDoubleItemConsumeQp = 1;
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v56 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v56 )
            goto LABEL_465;
          UIWidget__set_width(v56, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0);
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg1;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          if ( !this )
            goto LABEL_465;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg2;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          if ( !this )
            goto LABEL_465;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg1;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !this )
            goto LABEL_465;
          UISprite__set_spriteName(
            (UISprite_o *)this,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_ITEM,
            0);
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg2;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !this )
            goto LABEL_465;
          UISprite__set_spriteName(
            (UISprite_o *)this,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
            0);
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_465;
          v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionX(
            v57,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
            0);
          this = *v32;
          if ( !*v32 )
            goto LABEL_465;
          v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionX(
            v58,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
            0);
        }
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v59 = v33->fields.itemIds;
        if ( !v59 )
          goto LABEL_465;
        if ( LODWORD(v59->max_length) <= 1 )
          goto LABEL_466;
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
        ItemIconComponent__SetItem((ItemIconComponent_o *)this, v59->m_Items[1], -1, 1, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
        v165.fields.r = r;
        v165.fields.g = g;
        v165.fields.b = b;
        v165.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)this, v165, 0);
      }
      else
      {
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      if ( QuestConsumeItemEntity__IsAvailableAt(v33, 2, 0) )
      {
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
        if ( !this )
          goto LABEL_465;
        v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v106 = QuestBoardListViewItemDraw_TypeInfo;
        v107 = v105;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v106 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(
          v107,
          (float)v106->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
        v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v108,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = *v32;
        if ( !*v32 )
          goto LABEL_465;
        v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v109,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_465;
        v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v110,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
        if ( !this )
          goto LABEL_465;
        v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v111,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v112 = v33->fields.itemIds;
        if ( !v112 )
          goto LABEL_465;
        if ( LODWORD(v112->max_length) > 2 )
        {
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_465;
          ItemIconComponent__SetItem((ItemIconComponent_o *)this, v112->m_Items[2], -1, 1, 0);
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_465;
          goto LABEL_320;
        }
LABEL_466:
        sub_1C6BC68(this);
      }
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
      if ( !this )
        goto LABEL_465;
      goto LABEL_322;
    case 4:
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpSp;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
      if ( !this )
        goto LABEL_465;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      v60 = questEnt->fields.bannerId;
      v61 = v23->fields.mCostApSp;
      if ( v60 < 1 )
      {
        if ( !v61 )
          goto LABEL_465;
        UISprite__set_atlas(v23->fields.mCostApSp, v23->fields.mTerminalAtlas, 0);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        v92 = v23->fields.mCostApSp;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        v93 = this->fields.mPrevSp[2].fields.mRoot;
        if ( !v93 )
          goto LABEL_465;
        if ( (unsigned int)v154 >= LODWORD(v93->fields.m_CancellationTokenSource) )
          goto LABEL_466;
        if ( !v92 )
          goto LABEL_465;
        UISprite__set_spriteName(v92, *((System_String_o **)&v93->fields.scalingStyle + v154), 0);
      }
      else
      {
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v62 = QuestBoardListViewItemDraw__GetApSpriteFileName(v60, (const MethodInfo *)questEnt);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v61, v62, 0);
        if ( !v61 )
          goto LABEL_465;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v61, (unsigned __int8)this & 1, 0);
      }
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
      if ( !this )
        goto LABEL_465;
      ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
        this,
        this->klass[2]._1.generic_class);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostApSp;
      if ( !this )
        goto LABEL_465;
      v170.fields.r = r;
      v170.fields.g = g;
      v170.fields.b = b;
      v170.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v170, 0);
      if ( !v33 )
        goto LABEL_324;
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpSp;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_465;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v94 = v33->fields.itemIds;
      if ( !v94 )
        goto LABEL_465;
      if ( !LODWORD(v94->max_length) )
        goto LABEL_466;
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, v94->m_Items[0], -1, 1, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      v171.fields.r = r;
      v171.fields.g = g;
      v171.fields.b = b;
      v171.fields.a = a;
      ItemIconComponent__SetColor((ItemIconComponent_o *)this, v171, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v96 = QuestBoardListViewItemDraw_TypeInfo;
      v97 = v95;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v96 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionX(v97, (float)v96->static_fields->COST_2_ICON_NORMAL_POSITION_X, 0);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(
        v98,
        (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
        0);
      v99 = v33->fields.itemIds;
      if ( !v99 )
        goto LABEL_465;
      if ( !LODWORD(v99->max_length) )
        goto LABEL_466;
      v100 = v99->m_Items[0];
      v101 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v101 = BalanceConfig_TypeInfo;
      }
      if ( v100 == v101->static_fields->ItemIdQp )
      {
        *isDoubleItemConsumeQp = 1;
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v102 = (UIWidget_o *)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        if ( !v102 )
          goto LABEL_465;
        UIWidget__set_width(v102, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg2;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostBg2;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !this )
          goto LABEL_465;
        UISprite__set_spriteName((UISprite_o *)this, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
        v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v103,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
          0);
        this = *v32;
        if ( !*v32 )
          goto LABEL_465;
        v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v104,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
          0);
      }
      if ( QuestConsumeItemEntity__IsAvailableAt(v33, 1, 0) )
      {
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
LABEL_322:
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
LABEL_323:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
LABEL_324:
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
      if ( !this )
        goto LABEL_465;
      UILabel__set_overflowMethod((UILabel_o *)this, 0, 0);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      UILabel__set_overflowMethod((UILabel_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
      if ( !this )
        goto LABEL_465;
      UILabel__set_overflowMethod((UILabel_o *)this, 0, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
      if ( !this )
        goto LABEL_465;
      v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4CAFC0E )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC0E = 1;
      }
      GameObjectExtensions__SetLocalScale(v113, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4CAFC0E )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC0E = 1;
      }
      GameObjectExtensions__SetLocalScale(v114, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
      if ( !this )
        goto LABEL_465;
      v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4CAFC0E )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC0E = 1;
      }
      GameObjectExtensions__SetLocalScale(v115, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v116 = (UIWidget_o *)v23->fields.mCostLb1;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !v116 )
        goto LABEL_465;
      UIWidget__set_width(v116, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_DEFAULT_WIDTH, 0);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      UIWidget__set_width(
        (UIWidget_o *)this,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_DEFAULT_WIDTH,
        0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
      if ( !this )
        goto LABEL_465;
      UIWidget__set_width(
        (UIWidget_o *)this,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_DEFAULT_WIDTH,
        0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
      if ( !this )
        goto LABEL_465;
      UILabel__set_spacingX(
        (UILabel_o *)this,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
        0);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      UILabel__set_spacingX(
        (UILabel_o *)this,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
        0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
      if ( !this )
        goto LABEL_465;
      UILabel__set_spacingX(
        (UILabel_o *)this,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
        0);
      if ( *isDoubleItemConsumeQp || !*isTripleItemConsume )
        return;
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v117 = v23->fields.mCostLb1;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !v117 )
        goto LABEL_465;
      UILabel__set_spacingX(
        v117,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
        0);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      UILabel__set_spacingX(
        (UILabel_o *)this,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
        0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
      if ( !this )
        goto LABEL_465;
      UILabel__set_spacingX(
        (UILabel_o *)this,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
        0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
      if ( !this )
        goto LABEL_465;
      UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
      if ( !this )
        goto LABEL_465;
      UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
      if ( !this )
        goto LABEL_465;
      ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
        this,
        this->klass[2]._1.generic_class);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
        this,
        this->klass[2]._1.generic_class);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
      if ( !this
        || (((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
              this,
              this->klass[2]._1.generic_class),
            (this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1) == 0)
        || (UILabel__SetCondensedScale_49828120(
              (UILabel_o *)this,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
              0.0,
              0),
            (this = *v32) == 0)
        || (UILabel__SetCondensedScale_49828120(
              (UILabel_o *)this,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
              0.0,
              0),
            (this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3) == 0) )
      {
LABEL_465:
        sub_1C6BC60(this, questEnt);
      }
      UILabel__SetCondensedScale_49828120(
        (UILabel_o *)this,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
        0.0,
        0);
      return;
    default:
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
      if ( !this )
        goto LABEL_465;
      goto LABEL_323;
  }
}


void QuestBoardListViewItemDraw__SetCostLabel(
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
  if ( (byte_4CB2EB5 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EB5 = 1;
  }
  if ( !label )
    sub_1C6BC60(this, label);
  UILabel__set_text(label, content, 0);
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
  UIWidget__set_color((UIWidget_o *)label, v23, 0);
}


void QuestBoardListViewItemDraw__SetCostLabelItem(
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
  System_String_o *SelfUserGame; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x7
  bool v21; // w22
  System_String_o *v22; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x23
  int32_t v25; // w25
  int32_t num; // w8
  int32_t v27; // [xsp+8h] [xbp-68h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseCol.fields.a;
  b = baseCol.fields.b;
  g = baseCol.fields.g;
  r = baseCol.fields.r;
  v28 = consumeNo;
  if ( (byte_4CB2EB4 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_10825/*"QUEST_BOARD_COST_QP"*/);
    byte_4CB2EB4 = 1;
  }
  if ( isNotItemConsume )
    v28 = 0;
  SelfUserGame = System_Int32__ToString((int32_t)&v28, 0);
  if ( !itemEnt )
    goto LABEL_17;
  if ( itemEnt->fields.type == 1 )
  {
    SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
    if ( SelfUserGame )
    {
      v21 = (__int64)SelfUserGame[4].klass < v28;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10825/*"QUEST_BOARD_COST_QP"*/, 0);
      v27 = v28;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      SelfUserGame = System_String__Format(v22, v23, 0);
      v24 = SelfUserGame;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C6BC60(SelfUserGame, v19);
  }
  v25 = v28;
  v24 = SelfUserGame;
  if ( usrItem
    && (SelfUserGame = (System_String_o *)ItemEntity__IsEnable(itemEnt, 0), ((unsigned __int8)SelfUserGame & 1) != 0) )
  {
    num = usrItem->fields.num;
  }
  else
  {
    num = 0;
  }
  v21 = v25 > num;
LABEL_16:
  v29.fields.r = r;
  v29.fields.g = g;
  v29.fields.b = b;
  v29.fields.a = a;
  QuestBoardListViewItemDraw__SetCostLabel(
    (QuestBoardListViewItemDraw_o *)SelfUserGame,
    label,
    v24,
    0,
    v29,
    v21,
    isClosed,
    isNotItemConsume,
    v20);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__SetDispBannerArrows(
        QuestBoardListViewItemDraw_o *this,
        bool isDisp,
        bool isInstant,
        const MethodInfo *method)
{
  struct ScrollArrowComponent_array *mBannerArrows; // x8
  int max_length; // w22
  QuestBoardListViewItemDraw_o *v6; // x19
  unsigned int v7; // w23
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
    v9 = isInstant;
    do
    {
      if ( v7 >= LODWORD(mBannerArrows->max_length) )
        sub_1C6BC68(this);
      this = (QuestBoardListViewItemDraw_o *)mBannerArrows->m_Items[v7];
      if ( !this )
        break;
      ScrollArrowComponent__SetDisp((ScrollArrowComponent_o *)this, v8, v9, 0);
      if ( max_length == ++v7 )
        return;
      mBannerArrows = v6->fields.mBannerArrows;
    }
    while ( mBannerArrows );
LABEL_8:
    sub_1C6BC60(this, isDisp);
  }
}


void QuestBoardListViewItemDraw__SetEventTargetAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventTarget; // x20
  UnityEngine_Object_o *eventTargetComponent; // x20
  __int64 v7; // x1
  BoardOptionEventTargetComponent_o *v8; // x0

  if ( (byte_4CB2ECA & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2ECA = 1;
  }
  eventTarget = (UnityEngine_Object_o *)this->fields.eventTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventTarget, 0, 0) )
  {
    eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(eventTargetComponent, 0, 0) )
    {
      v8 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v8 )
        goto LABEL_16;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v8, 0) )
      {
        v8 = this->fields.eventTargetComponent;
        if ( !v8 )
          goto LABEL_16;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v8, 0) )
        {
          v8 = this->fields.eventTargetComponent;
          if ( v8 )
          {
            BoardOptionEventTargetComponent__SetAlpha(v8, alpha, 0);
            return;
          }
LABEL_16:
          sub_1C6BC60(v8, v7);
        }
      }
    }
  }
}


bool QuestBoardListViewItemDraw__SetFaceImage(
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
  if ( (byte_4CB2EB3 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EB3 = 1;
  }
  if ( !questEnt )
    goto LABEL_23;
  this = (QuestBoardListViewItemDraw_o *)v15->fields.mLabelFaceObj;
  if ( !this )
    goto LABEL_23;
  charaIconId = questEnt->fields.charaIconId;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, charaIconId > 0, 0);
  if ( charaIconId < 1 )
    return 0;
  mLabelFaceIcon = v15->fields.mLabelFaceIcon;
  ServantId = QuestEntity__getServantId(questEnt, 0);
  LimitCount = QuestEntity__getLimitCount(questEnt, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceImage(mLabelFaceIcon, ServantId, LimitCount, 1, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v15->fields.mLabelFaceIcon;
  if ( !this )
    goto LABEL_23;
  v27.fields.r = r;
  v27.fields.g = g;
  v27.fields.b = b;
  v27.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v27, 0);
  if ( !maskSprite )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, 1, 0);
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  UIWidget__set_color((UIWidget_o *)maskSprite, v28, 0);
  bannerId = questEnt->fields.bannerId;
  v20 = (_DWORD)questEnt + 64;
  if ( bannerId < 1 )
  {
    UISprite__set_atlas(maskSprite, v15->fields.mTerminalAtlas, 0);
    UISprite__set_spriteName(maskSprite, maskSpriteName, 0);
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
    v24 = System_Int32__ToString(v20, 0);
    maskSpriteName = System_String__Concat_63966792(QUEST_BOARD_MASK_SPNAME_PREFIX, v24, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(maskSprite, maskSpriteName, 0);
  }
  this = (QuestBoardListViewItemDraw_o *)maskSprite->fields.mAtlas;
  if ( !this )
    goto LABEL_23;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)this, maskSpriteName, 0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, Sprite != 0, 0);
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)maskSprite, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Sprite )
    {
      Sprite->fields.width = maskWidth - 1;
      return 1;
    }
LABEL_23:
    sub_1C6BC60(this, questEnt);
  }
  return 1;
}


void QuestBoardListViewItemDraw__SetInfoTextAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  struct BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4CB2EC5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4CB2EC5 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_1C6BC60(mOptionInfoLb, method);
LABEL_9:
    BoardOptionTextWithIconComponent__set_Alpha(mOptionInfoLb, alpha, 0);
    return;
  }
  mOptionInfoLb = this->fields.mOptionInfoLb;
  if ( !mOptionInfoLb )
    goto LABEL_11;
  if ( mOptionInfoLb->fields.alpha < 1.0 )
    goto LABEL_9;
}


void QuestBoardListViewItemDraw__SetInput(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListViewItemDraw__SetItem(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        bool isReloadTerminalBanner,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8
  int32_t info_kind_k__BackingField; // w23
  QuestEntity_o *Mine; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_Object_o *mEarthLine; // x22
  __int64 v15; // x1
  QuestBoardListViewEarthLine_o *mOptionSecondBattleInformationObj; // x0
  Il2CppObject *Component_object; // x0
  struct QuestBoardListViewMultiSecondBattleInformation_o **p_secondBattleInformation; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  int32_t size; // w2
  int v23; // w9
  struct UnityEngine_GameObject_array *mStatusSp; // x22
  int max_length; // w8
  unsigned int v26; // w25
  UnityEngine_GameObject_o *mCostObj; // x22
  QuestBoardListViewItemDraw_c *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Object_o *eventTargetComponent; // x22
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x7
  UnityEngine_GameObject_o *v36; // x19
  struct MapControl_AreaBoardInfo_o *v37; // x8
  unsigned int questBoardType; // w8
  struct MapControl_AreaBoardInfo_o *v39; // x8
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2E91 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISprite__Clear__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2E91 = 1;
  }
  if ( questBoardItem )
  {
    this->fields.isDummy = 0;
    quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
    if ( !quest_info_k__BackingField )
      goto LABEL_82;
    AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
    if ( AreaBoardInfo_k__BackingField
      && AreaBoardInfo_k__BackingField->fields.questBoardType == 1
      && !isReloadTerminalBanner )
    {
      return;
    }
    info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
    Mine = MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0);
    if ( (info_kind_k__BackingField | 4) == 4 || Mine )
    {
      if ( dispMode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !byte_4CAFC0E )
        {
          sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC0E = 1;
        }
        GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(mEarthLine, 0, 0) )
        {
          mOptionSecondBattleInformationObj = this->fields.mEarthLine;
          if ( !mOptionSecondBattleInformationObj )
            goto LABEL_98;
          QuestBoardListViewEarthLine__Hide(mOptionSecondBattleInformationObj, 0);
        }
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mOptionSecondBattleInformationObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = (struct QuestBoardListViewMultiSecondBattleInformation_o *)Component_object;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.secondBattleInformation, (int32_t)Component_object, v19, v20);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.secondBattleInformation;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)*p_secondBattleInformation;
        if ( !*p_secondBattleInformation )
          goto LABEL_98;
        QuestBoardListViewMultiSecondBattleInformation__Reset(
          (QuestBoardListViewMultiSecondBattleInformation_o *)mOptionSecondBattleInformationObj,
          0);
        mMultiSecondBattleInformation = this->fields.mMultiSecondBattleInformation;
        if ( !mMultiSecondBattleInformation )
          goto LABEL_98;
        size = mMultiSecondBattleInformation->fields._size;
        v23 = mMultiSecondBattleInformation->fields._version + 1;
        mMultiSecondBattleInformation->fields._size = 0;
        mMultiSecondBattleInformation->fields._version = v23;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)mMultiSecondBattleInformation->fields._items, 0, size, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mOptionPreBattleSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostConsumeBattleWinSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        v40.fields.r = 1.0;
        v40.fields.g = 1.0;
        v40.fields.b = 1.0;
        v40.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mOptionSecondBattleInformationObj, v40, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj
          || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 1, 0),
              (mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mStatusObj) == 0)
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0),
              (mStatusSp = this->fields.mStatusSp) == 0) )
        {
LABEL_98:
          sub_1C6BC60(mOptionSecondBattleInformationObj, v15);
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v26 = 0;
          do
          {
            if ( v26 >= max_length )
              sub_1C6BC68(mOptionSecondBattleInformationObj);
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)mStatusSp->m_Items[v26];
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_98;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
            max_length = mStatusSp->max_length;
          }
          while ( (int)++v26 < max_length );
        }
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mBannerRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNoticeNumberRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNextSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mPrevSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mClassIconRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNoBattleObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mRarePrismSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mQuestInfoBtn;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mQuestInfoShowing;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mDamageRecordSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mKnockdownRecordSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.blackMarkSpace;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mBoardMessage;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.eventTarget;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.alloutRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.roadmapButton;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mServantLimitRewardObtainedSP;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mBoardFrame;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
        mCostObj = this->fields.mCostObj;
        v28 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v28 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(mCostObj, v28->static_fields->COST_OBJ_POS, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                                                                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UIWidget__set_width(
          (UIWidget_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_SINGLE,
          0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostApSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0);
        GameObjectExtensions__SetLocalPosition(
          v29,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS,
          0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostLb1;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0);
        GameObjectExtensions__SetLocalPosition(
          v30,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS,
          0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0);
        GameObjectExtensions__SetLocalPosition(v31, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UISprite__set_spriteName(
          (UISprite_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME,
          0);
        eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0, 0) )
        {
          mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.eventTargetComponent;
          if ( !mOptionSecondBattleInformationObj )
            goto LABEL_98;
          BoardOptionEventTargetComponent__DestroyList(
            (BoardOptionEventTargetComponent_o *)mOptionSecondBattleInformationObj,
            0);
        }
        switch ( info_kind_k__BackingField )
        {
          case 0:
            v37 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( v37 )
            {
              questBoardType = v37->fields.questBoardType;
              if ( questBoardType <= 8 && ((1 << questBoardType) & 0x118) != 0 )
                goto LABEL_88;
            }
            goto LABEL_91;
          case 1:
            goto LABEL_97;
          case 2:
          case 3:
            QuestBoardListViewItemDraw__SetItemOfShortcut(this, questBoardItem, v33);
            return;
          case 4:
            v39 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( !v39 )
              goto LABEL_97;
            if ( v39->fields.questBoardType == 2 )
LABEL_91:
              QuestBoardListViewItemDraw__SetItemOfArea(this, questBoardItem, 1, 1, 0, 0, 0, v35);
            else
LABEL_88:
              QuestBoardListViewItemDraw__SetItemOfFolder(this, questBoardItem, 1, 1, v34);
            break;
          case 5:
            QuestBoardListViewItemDraw__SetItemOfWarBoard(this, questBoardItem, v33);
            return;
          case 6:
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)questBoardItem->fields._quest_info_k__BackingField;
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_98;
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)MapControl_QuestInfo__GetMine(
                                                                                   (MapControl_QuestInfo_o *)mOptionSecondBattleInformationObj,
                                                                                   0);
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_98;
            if ( QuestEntity__HasFlag((QuestEntity_o *)mOptionSecondBattleInformationObj, 0x800000000000000LL, 0) )
              QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(this, questBoardItem, v33);
            else
LABEL_97:
              QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v33);
            break;
          default:
            return;
        }
      }
    }
    else
    {
LABEL_82:
      this->fields.isDummy = 1;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4CAFC09 )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      GameObjectExtensions__SetLocalScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
  }
}


void QuestBoardListViewItemDraw__SetItemOfArea(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        bool isBoardDisp,
        bool isBadgeDisp,
        bool isBlackMarkOnly,
        bool isWhiteMarkOnly,
        bool isSpecialClosedBanner,
        const MethodInfo *method)
{
  QuestBoardListViewItem_o *v10; // x26
  QuestBoardListViewItemDraw_o *v11; // x19
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  int32_t questBoardType; // w28
  EventEntity_o *eventEnt; // x23
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x9
  int32_t warId; // w20
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v20; // x27
  WarEntity_o *Mine; // x26
  char v22; // w21
  UnityEngine_Object_o *eventTargetComponent; // x27
  const MethodInfo *v24; // x3
  _BOOL4 v25; // w27
  bool IsPurchasedByRarePrism; // w0
  const MethodInfo *v27; // x2
  unsigned int v28; // w21
  int32_t v29; // w29
  bool v30; // w20
  bool IsClose; // w25
  bool v32; // w24
  bool v33; // w24
  _BOOL8 IsActiveEventWar; // x0
  const MethodInfo *v35; // x4
  int v36; // w21
  QuestBoardListViewItemDraw_c *v37; // x0
  System_String_o *QBOARD_CAP_CLOSED_FORMAT; // x23
  Il2CppObject *v39; // x0
  System_String_o *EventAddBannerSpriteName; // x23
  QuestBoardListViewItemDraw_o *v41; // x25
  int32_t v42; // w28
  QuestBoardListViewItemDraw_c *v43; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v45; // x23
  Il2CppObject *v46; // x0
  const MethodInfo *v47; // x5
  ScrTerminalListTop_c *v48; // x8
  struct ScrTerminalListTop_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v50; // x0
  bool v51; // zf
  ScrTerminalListTop_c *v52; // x0
  clsQuestCheck_o *v53; // x25
  clsQuestCheck_o *v54; // x25
  QuestBoardListViewItemDraw_c *v55; // x0
  __int64 v56; // x8
  Il2CppObject *Entity; // x0
  bool v58; // w8
  QuestBoardListViewItem_o *v59; // x1
  WarEntity_o *v60; // x2
  QuestBoardListViewItemDraw_o *v61; // x0
  clsQuestCheck_o *v62; // x23
  bool v63; // w0
  QuestBoardListViewItemDraw_c *v64; // x8
  bool v65; // w23
  struct QuestBoardListViewItemDraw_StaticFields *v66; // x8
  __int64 v67; // x9
  QuestBoardListViewItemDraw_o *v68; // x28
  clsQuestCheck_o *v69; // x25
  clsQuestCheck_o *v70; // x25
  ScrTerminalListTop_c *v71; // x0
  System_String_o *NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // x25
  TerminalPramsManager_c *v73; // x0
  ScrTerminalListTop_c *v74; // x8
  int32_t QuestId_k__BackingField; // w25
  TerminalPramsManager_c *v76; // x0
  struct UnityEngine_GameObject_o *v77; // x8
  System_String_o *v78; // x23
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  struct UnityEngine_GameObject_o *mGo; // x8
  System_String_o *m_CachedPtr; // x23
  Il2CppObject *v83; // x0
  int v84; // w21
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v86; // x28
  System_String_o *v87; // x23
  Il2CppObject *v88; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x23
  Il2CppObject *v90; // x0
  UISprite_o *mcBaseP; // x28
  const MethodInfo *v92; // x2
  QuestBoardListViewItemDraw_o *v93; // x8
  QuestBoardListViewItemDraw_o **p_mOptionInfoLb; // x23
  const MethodInfo *v95; // x3
  int32_t v96; // w1
  QuestBoardListViewItemDraw_c *v97; // x0
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x3
  QuestBoardListViewItem_o *v101; // x20
  const MethodInfo *v102; // x3
  const MethodInfo *v103; // x3
  int32_t status; // w1
  QuestBoardListViewItemDraw_c *v105; // x0
  struct QuestBoardListViewObject_o *v106; // x8
  QuestBoardListViewManager_o *manager; // x22
  __int64 v108; // x9
  bool v109; // w24
  System_Collections_Generic_List_object__o *mInfoTextList; // x24
  int32_t AlphaAnimCnt; // w0
  UnityEngine_Object_o *mEarthLine; // x23
  QuestBoardListViewEarthLine_o *v113; // x23
  bool v114; // [xsp+4h] [xbp-9Ch]
  int32_t v115; // [xsp+4h] [xbp-9Ch]
  struct ItemIconComponent_o *checkTime; // [xsp+10h] [xbp-90h]
  bool v120; // [xsp+20h] [xbp-80h]
  bool v121; // [xsp+24h] [xbp-7Ch]
  _BOOL4 IsClosedWar; // [xsp+28h] [xbp-78h]
  _BOOL4 IsMainInterlude; // [xsp+2Ch] [xbp-74h]
  QuestBoardListViewItem_o *questBoardItema; // [xsp+30h] [xbp-70h]
  int32_t PrioredBannerId; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v126; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = questBoardItem;
  v11 = this;
  if ( (byte_4CB2E93 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&ScrTerminalListTop_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2E93 = 1;
  }
  if ( !v10 )
    goto LABEL_282;
  quest_info_k__BackingField = v10->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_282;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_282;
  questBoardType = AreaBoardInfo_k__BackingField->fields.questBoardType;
  eventEnt = AreaBoardInfo_k__BackingField->fields.eventEnt;
  mListViewObject = v11->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)mListViewObject->fields.manager;
  if ( !this )
    goto LABEL_282;
  v121 = isBadgeDisp;
  questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_284;
  }
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  questBoardItema = v10;
  checkTime = this->fields.mCostItemIcon1;
  v114 = isSpecialClosedBanner;
  if ( warId < 1 )
  {
    v20 = 0;
LABEL_15:
    Mine = 0;
    v22 = 1;
    goto LABEL_16;
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_282;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, warId, 0);
  v20 = WarInfoByWarID;
  if ( !WarInfoByWarID )
    goto LABEL_15;
  Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0);
  v22 = 0;
LABEL_16:
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mLabelObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mTitleObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mAdvanceNoticeObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOverwriteAdvanceNoticeObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionRestrinctionLb;
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRewardObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mPhaseObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mChallengeObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mClearCountObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mCostObj;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mCondObject;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mcBaseP;
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, questBoardType != 1, 0);
  if ( Mine )
  {
    IsMainInterlude = WarEntity__IsMainInterlude(Mine, 0);
    if ( (v22 & 1) != 0 )
    {
LABEL_37:
      IsClosedWar = 0;
      goto LABEL_40;
    }
  }
  else
  {
    IsMainInterlude = 0;
    if ( (v22 & 1) != 0 )
      goto LABEL_37;
  }
  IsClosedWar = MapControl_WarInfo__IsClosedWar(v20, 0);
LABEL_40:
  this = (QuestBoardListViewItemDraw_o *)v11->fields.blackMarkSpace;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.eventTarget;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.alloutRoot;
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  eventTargetComponent = (UnityEngine_Object_o *)v11->fields.eventTargetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0, 0) )
  {
    this = (QuestBoardListViewItemDraw_o *)v11->fields.eventTargetComponent;
    if ( !this )
      goto LABEL_282;
    BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)this, 0);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_282;
  v25 = questBoardType == 2 && eventEnt != 0;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             this,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.m_CancellationTokenSource,
                             Mine,
                             v24);
  v28 = questBoardType - 1;
  v120 = IsPurchasedByRarePrism;
  if ( questBoardType == 1 )
  {
    QuestBoardListViewItemDraw__SetupBanner(v11, questBoardItema, v27);
    v29 = warId;
    v30 = v121;
    IsClose = 0;
    v32 = 0;
    goto LABEL_211;
  }
  v29 = warId;
  if ( questBoardType == 2 && eventEnt != 0 )
  {
    v33 = IsPurchasedByRarePrism;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_282;
    IsActiveEventWar = QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0);
    v30 = v121;
    v32 = (!IsMainInterlude || v33) && IsActiveEventWar;
    if ( IsMainInterlude )
    {
      v36 = IsClosedWar;
      if ( !v32 )
        v36 = AreaBoardInfo_k__BackingField->fields.status == 2 || IsClosedWar;
    }
    else
    {
      v36 = IsClosedWar;
    }
    EventAddBannerSpriteName = QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (QuestBoardListViewItemDraw_o *)IsActiveEventWar,
                                 eventEnt,
                                 v29,
                                 v36 | v32,
                                 v35);
    v51 = v36 == 0;
    goto LABEL_172;
  }
  if ( AreaBoardInfo_k__BackingField->fields.status == 6 && questBoardType == 2 )
  {
    if ( Mine )
    {
      v37 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v37 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v30 = v121;
      QBOARD_CAP_CLOSED_FORMAT = v37->static_fields->QBOARD_CAP_CLOSED_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0);
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_FORMAT, v39, 0);
    }
    else
    {
      EventAddBannerSpriteName = (System_String_o *)StringLiteral_1/*""*/;
      v30 = v121;
    }
    v52 = ScrTerminalListTop_TypeInfo;
    if ( v114 )
    {
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v52 = ScrTerminalListTop_TypeInfo;
      }
      if ( v29 == v52->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
        goto LABEL_104;
    }
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = ScrTerminalListTop_TypeInfo;
    }
    if ( v29 != v52->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_100;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v53 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v53 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsWarClear(
            v53,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0) )
      goto LABEL_100;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v54 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v54 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsWarClear(
            v54,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
            0) )
    {
LABEL_104:
      v55 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v55 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v56 = 1064;
    }
    else
    {
LABEL_100:
      if ( System_String__op_Inequality(EventAddBannerSpriteName, (System_String_o *)StringLiteral_1/*""*/, 0) )
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__IsExistBanner(EventAddBannerSpriteName, 0) )
          goto LABEL_108;
      }
      v55 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v55 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v56 = 1032;
    }
    EventAddBannerSpriteName = *(System_String_o **)((char *)&v55->static_fields->POS_Y_ITVL_AREA + v56);
LABEL_108:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_282;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v29,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v58 = isBlackMarkOnly;
    v59 = questBoardItema;
    v60 = (WarEntity_o *)Entity;
    v61 = v11;
    goto LABEL_171;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           warId,
                                           (const MethodInfo_33F90DC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_282;
  v41 = this;
  this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0);
  v42 = (int)this;
  v43 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v43 = QuestBoardListViewItemDraw_TypeInfo;
  }
  msQBoardL1Names = v43->static_fields->msQBoardL1Names;
  if ( !msQBoardL1Names )
    goto LABEL_282;
  if ( v28 >= LODWORD(msQBoardL1Names->max_length) )
    goto LABEL_285;
  v45 = msQBoardL1Names->m_Items[v28];
  PrioredBannerId = v42;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
  EventAddBannerSpriteName = System_String__Format(v45, v46, 0);
  v48 = ScrTerminalListTop_TypeInfo;
  if ( v114 )
  {
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v48 = ScrTerminalListTop_TypeInfo;
    }
    static_fields = v48->static_fields;
    if ( warId == static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      v50 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v50 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v30 = v121;
      EventAddBannerSpriteName = v50->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
      goto LABEL_170;
    }
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = ScrTerminalListTop_TypeInfo;
      static_fields = ScrTerminalListTop_TypeInfo->static_fields;
    }
    if ( warId == static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v62 = (clsQuestCheck_o *)this;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v30 = v121;
      if ( !v62 )
        goto LABEL_282;
      v63 = clsQuestCheck__IsWarClear(
              v62,
              ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
              0);
      v64 = QuestBoardListViewItemDraw_TypeInfo;
      v65 = v63;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v64 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v66 = v64->static_fields;
      v67 = 1064;
      if ( v65 )
        v67 = 1072;
      EventAddBannerSpriteName = *(System_String_o **)((char *)&v66->POS_Y_ITVL_AREA + v67);
      goto LABEL_170;
    }
  }
  v115 = v42;
  v68 = v41;
  if ( !v48->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v48);
    v48 = ScrTerminalListTop_TypeInfo;
  }
  if ( warId != v48->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID )
    goto LABEL_160;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v69 = (clsQuestCheck_o *)this;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v69 )
    goto LABEL_282;
  if ( clsQuestCheck__IsWarClear(
         v69,
         ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
         0) )
  {
    goto LABEL_160;
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v70 = (clsQuestCheck_o *)this;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v70 )
    goto LABEL_282;
  if ( !clsQuestCheck__IsQuestClear(
          v70,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0) )
    goto LABEL_160;
  v71 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v71 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v71->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, 0) )
    goto LABEL_160;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB02AF )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB02AF = 1;
  }
  v73 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v73 = TerminalPramsManager_TypeInfo;
  }
  v74 = ScrTerminalListTop_TypeInfo;
  QuestId_k__BackingField = v73->static_fields->_QuestId_k__BackingField;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v74 = ScrTerminalListTop_TypeInfo;
  }
  if ( QuestId_k__BackingField != v74->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    goto LABEL_160;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB02AE )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB02AE = 1;
  }
  v76 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v76 = TerminalPramsManager_TypeInfo;
  }
  if ( v76->static_fields->_PhaseCnt_k__BackingField != 2 )
  {
LABEL_160:
    v29 = warId;
    v30 = v121;
    v41 = v68;
    if ( isBoardDisp && v121 && !isBlackMarkOnly && !isWhiteMarkOnly )
      goto LABEL_170;
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    mGo = this->fields.mPrevSp[2].fields.mGo;
    if ( !mGo )
      goto LABEL_282;
    if ( LODWORD(mGo[1].klass) > 1 )
    {
      m_CachedPtr = (System_String_o *)mGo[1].fields.m_CachedPtr;
      PrioredBannerId = v115;
      v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
      v80 = System_String__Format(m_CachedPtr, v83, 0);
      goto LABEL_169;
    }
LABEL_285:
    sub_1C6BC68(this);
  }
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  v77 = this->fields.mPrevSp[2].fields.mGo;
  if ( !v77 )
    goto LABEL_282;
  if ( LODWORD(v77[1].klass) <= 1 )
    goto LABEL_285;
  v78 = (System_String_o *)v77[1].fields.m_CachedPtr;
  v41 = v68;
  v29 = warId;
  PrioredBannerId = (int32_t)v68->fields.mcBaseP;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
  v80 = System_String__Format(v78, v79, 0);
  v30 = v121;
LABEL_169:
  EventAddBannerSpriteName = v80;
LABEL_170:
  v58 = isBlackMarkOnly;
  v59 = questBoardItema;
  v61 = v11;
  v60 = (WarEntity_o *)v41;
LABEL_171:
  QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v61, v59, v60, v58, isWhiteMarkOnly, v47);
  v32 = 0;
  v51 = !IsClosedWar;
LABEL_172:
  v84 = !v51;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !this )
    goto LABEL_282;
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, v29, 0);
  if ( OpenEntity )
  {
    v86 = OpenEntity;
    IsClose = WarReleaseEntity__IsClose(OpenEntity, 0);
    if ( IsClose )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !Mine )
        goto LABEL_282;
      v87 = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0);
      v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
      EventAddBannerSpriteName = System_String__Format(v87, v88, 0);
    }
    if ( WarReleaseEntity__IsAnnouncement(v86, 0) )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !Mine )
        goto LABEL_282;
      QBOARD_CAP_CLOSED_SPECIAL_FORMAT = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0);
      v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v90, 0);
      IsClose = 1;
    }
  }
  else
  {
    IsClose = 0;
  }
  mcBaseP = v11->fields.mcBaseP;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(mcBaseP, EventAddBannerSpriteName, 0);
  if ( v84 )
  {
    this = (QuestBoardListViewItemDraw_o *)v11->fields.mcBaseP;
    if ( !this )
      goto LABEL_282;
    v126.fields.r = 0.5;
    v126.fields.g = 0.5;
    v126.fields.b = 0.5;
    v126.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v126, 0);
  }
  if ( IsClose )
    v93 = 0;
  else
    v93 = v11;
  if ( IsClose )
  {
    LODWORD(questBoardItem) = 0;
    this = v11;
  }
  else if ( v30 )
  {
    if ( v25 )
      this = v93;
    else
      this = 0;
    if ( v32 || !v25 )
    {
      questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)AreaBoardInfo_k__BackingField->fields.questCount;
      this = v93;
      if ( !v93 )
        goto LABEL_282;
    }
    else
    {
      questBoardItem = 0;
      if ( !this )
        goto LABEL_282;
    }
  }
  else
  {
    questBoardItem = 0;
    this = v11;
    if ( !v11 )
      goto LABEL_282;
  }
  QuestBoardListViewItemDraw__SetBadge(this, (int32_t)questBoardItem, v92);
LABEL_211:
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mcBaseP;
  if ( !this )
    goto LABEL_282;
  p_mOptionInfoLb = (QuestBoardListViewItemDraw_o **)&v11->fields.mOptionInfoLb;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
  if ( !v30 )
  {
    this = (QuestBoardListViewItemDraw_o *)v11->fields.mcBaseP;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBoardDisp, 0);
        this = (QuestBoardListViewItemDraw_o *)v11->fields.mNextSp;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (QuestBoardListViewItemDraw_o *)v11->fields.roadmapButton;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                status = AreaBoardInfo_k__BackingField->fields.status;
                if ( status && status != 6 )
                  QuestBoardListViewItemDraw__SetStatusActive(v11, status, 0, v103);
                v105 = QuestBoardListViewItemDraw_TypeInfo;
                if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                  v105 = QuestBoardListViewItemDraw_TypeInfo;
                }
                QuestBoardListViewItemDraw__SetNewIcon(
                  v11,
                  v105->static_fields->NEW_POS_AREA,
                  v105->static_fields->NEW_W_AREA,
                  v105->static_fields->NEW_H_AREA,
                  v103);
                this = (QuestBoardListViewItemDraw_o *)v11->fields.mRarePrismSp;
                if ( this )
                {
                  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v120, 0);
                    this = *p_mOptionInfoLb;
                    if ( *p_mOptionInfoLb )
                    {
                      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
                      if ( this )
                      {
                        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent(
                                                                 (UnityEngine_Transform_o *)this,
                                                                 0);
                        if ( this )
                        {
                          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0);
                          if ( this )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                            this = *p_mOptionInfoLb;
                            if ( *p_mOptionInfoLb )
                            {
                              this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0);
                              if ( this )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
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
  v96 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v96 && v96 != 6 )
    QuestBoardListViewItemDraw__SetStatusActive(v11, v96, v32 || v96 != 1 || !v25, v95);
  v97 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v97 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v11,
    v97->static_fields->NEW_POS_AREA,
    v97->static_fields->NEW_W_AREA,
    v97->static_fields->NEW_H_AREA,
    v95);
  if ( IsClosedWar && IsMainInterlude )
    QuestBoardListViewItemDraw__SetStatusActive(v11, 2, 1, v99);
  QuestBoardListViewItemDraw__SetClearSprite(v11, Mine, v98);
  if ( IsClose )
  {
    this = (QuestBoardListViewItemDraw_o *)v11->fields.mNextSp;
    if ( !this )
      goto LABEL_282;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v101 = questBoardItema;
    if ( !this )
      goto LABEL_282;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    QuestBoardListViewItemDraw__SetNextSprite(v11, AreaBoardInfo_k__BackingField, Mine, v100);
    v101 = questBoardItema;
  }
  QuestBoardListViewItemDraw__CreateInfoTextList(v11, v101, (int64_t)checkTime, v102);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (!IsClosedWar || !IsMainInterlude) && v120, 0);
  v106 = v11->fields.mListViewObject;
  if ( !v106 )
    goto LABEL_282;
  manager = (QuestBoardListViewManager_o *)v106->fields.manager;
  if ( manager )
  {
    questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
    v108 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)v108
      || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v108 - 1] != QuestBoardListViewManager_TypeInfo )
    {
      this = (QuestBoardListViewItemDraw_o *)v106->fields.manager;
LABEL_284:
      sub_1C6BFFC(this);
      goto LABEL_285;
    }
  }
  if ( IsMainInterlude )
    goto LABEL_252;
  mInfoTextList = (System_Collections_Generic_List_object__o *)v11->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_282;
  questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
  if ( (int)questBoardItem < 1 )
  {
LABEL_252:
    v109 = 0;
  }
  else
  {
    if ( !manager )
      goto LABEL_282;
    AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(manager, (int32_t)questBoardItem, 0);
    this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                             mInfoTextList,
                                             AlphaAnimCnt,
                                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !this )
      goto LABEL_282;
    QuestBoardInformationText__SetTime(
      (QuestBoardInformationText_o *)this,
      &v11->fields.mOptionInfoLb,
      &v11->fields.mOptionInfoFrameSp,
      0);
    this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionInfoLb;
    if ( !this )
      goto LABEL_282;
    BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0);
    v109 = 1;
  }
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v109, 0);
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v109, 0);
  mEarthLine = (UnityEngine_Object_o *)v11->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0, 0) )
  {
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    v113 = v11->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v113 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v113,
        *(UnityEngine_Vector3_o *)&this->fields.mPrevSp->fields.mDrawRegion.fields.y,
        v11->fields.mListViewObject,
        v29,
        0);
      goto LABEL_272;
    }
LABEL_282:
    sub_1C6BC60(this, questBoardItem);
  }
LABEL_272:
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItem__IsDisplayableRoadmapButton(v101, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !manager )
      goto LABEL_282;
  }
  else
  {
    if ( !manager )
      goto LABEL_282;
    if ( v101->fields.index != manager->fields._IndexFirstDisplayableRoadmapButton_k__BackingField )
      return;
  }
  this = (QuestBoardListViewItemDraw_o *)v11->fields.roadmapButton;
  if ( !this )
    goto LABEL_282;
  RoadmapButtonPrefab__Initialize((RoadmapButtonPrefab_o *)this, manager->fields._RoadmapAssetData_k__BackingField, 0);
  if ( !manager->fields.initMode )
  {
    this = (QuestBoardListViewItemDraw_o *)v11->fields.roadmapButton;
    if ( !this )
      goto LABEL_282;
    RoadmapButtonPrefab__ModifyRoadmapButton((RoadmapButtonPrefab_o *)this, 0, 1, 0);
  }
}


void QuestBoardListViewItemDraw__SetItemOfAreaForTeminalTopEffect(
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


void QuestBoardListViewItemDraw__SetItemOfFolder(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        bool isBoardDisp,
        bool isBadgeDisp,
        const MethodInfo *method)
{
  QuestBoardListViewItem_o *v6; // x20
  QuestBoardListViewItemDraw_o *v7; // x19
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  int32_t warId; // w28
  QuestBoardListViewItemDraw_o *manager; // x21
  WarEntity_o *v12; // x23
  int v13; // w25
  int v14; // w29
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x9
  _BOOL4 v17; // w27
  _BOOL4 IsMainInterlude; // w26
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *mStatusObj; // x8
  unsigned int questBoardType; // w8
  bool IsClose; // w29
  const MethodInfo *v23; // x4
  unsigned int status; // w8
  _BOOL4 v25; // w9
  QuestBoardListViewItemDraw_c *v26; // x0
  System_String_o *QBOARD_CAP_CLOSED; // x21
  ScrTerminalListTop_c *IsOpenedMainScenarioWar; // x0
  clsQuestCheck_o *v29; // x21
  clsQuestCheck_o *v30; // x21
  MapControl_RootInfo_o *m_CachedPtr; // x21
  QuestBoardListViewItemDraw_c *v32; // x8
  int32_t v33; // w21
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v35; // x24
  Il2CppObject *v36; // x0
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v38; // x24
  QuestBoardListViewItemDraw_c *v39; // x0
  System_String_o *QBOARD_CAP_CLOSED_FORMAT; // x21
  Il2CppObject *v41; // x0
  QuestBoardListViewItemDraw_c *v42; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x21
  Il2CppObject *v44; // x0
  System_String_o *EventAddBannerSpriteName; // x0
  BalanceConfig_c *v46; // x0
  QuestBoardListViewItemDraw_c *v47; // x8
  int32_t v48; // w21
  struct System_String_array *v49; // x8
  System_String_o *v50; // x24
  Il2CppObject *v51; // x0
  QuestBoardListViewItemDraw_c *v52; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *mcBaseP; // x25
  UnityEngine_GameObject_o *v55; // x24
  const MethodInfo *v56; // x3
  _BOOL8 HasFlag; // x0
  const MethodInfo *v58; // x4
  int32_t v59; // w1
  QuestBoardListViewItemDraw_c *v60; // x0
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  QuestBoardListViewItemDraw_c *v64; // x0
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x3
  BalanceConfig_c *v67; // x0
  const MethodInfo *v68; // x2
  struct QuestBoardListViewObject_o *v69; // x8
  __int64 v70; // x9
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x5
  int32_t questCount; // w1
  const MethodInfo *v75; // x3
  bool v76; // w20
  System_Collections_Generic_List_object__o *mInfoTextList; // x20
  struct QuestBoardListViewObject_o *v78; // x8
  __int64 v79; // x10
  int32_t AlphaAnimCnt; // w0
  _BOOL8 IsDisplayableRoadmapButton; // x0
  __int64 v82; // x1
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+8h] [xbp-98h]
  bool v84; // [xsp+14h] [xbp-8Ch]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-88h]
  int v86; // [xsp+24h] [xbp-7Ch]
  struct ItemIconComponent_o *checkTime; // [xsp+28h] [xbp-78h]
  char v88; // [xsp+30h] [xbp-70h]
  unsigned int v89; // [xsp+34h] [xbp-6Ch]
  int32_t PrioredBannerId; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = questBoardItem;
  v7 = this;
  if ( (byte_4CB2E99 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&ScrTerminalListTop_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2E99 = 1;
  }
  if ( !v6 )
    goto LABEL_193;
  quest_info_k__BackingField = v6->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_193;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_193;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  if ( warId )
  {
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, warId, 0);
    manager = this;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0);
      v12 = (WarEntity_o *)this;
      v13 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    manager = 0;
  }
  v12 = 0;
  v13 = 1;
LABEL_12:
  eventEnt = AreaBoardInfo_k__BackingField->fields.eventEnt;
  if ( eventEnt )
  {
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0);
    v14 = (unsigned __int8)this & 1;
  }
  else
  {
    v14 = 0;
  }
  mListViewObject = v7->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)mListViewObject->fields.manager;
  if ( !this )
    goto LABEL_193;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_1C6BFFC(this);
    goto LABEL_195;
  }
  checkTime = this->fields.mCostItemIcon1;
  v17 = (v13 & 1) == 0 && MapControl_WarInfo__IsClosedWar((MapControl_WarInfo_o *)manager, 0);
  v84 = isBoardDisp;
  if ( v12 )
    IsMainInterlude = WarEntity__IsMainInterlude(v12, 0);
  else
    IsMainInterlude = 0;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_193;
  questList = (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.m_CancellationTokenSource;
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw__IsPurchasedByRarePrism(this, questList, v12, v19);
  mStatusObj = v7->fields.mStatusObj;
  if ( !mStatusObj )
    goto LABEL_193;
  v88 = (char)this;
  v89 = ((unsigned int)this | !IsMainInterlude) & v14;
  UnityEngine_GameObject__SetActive(mStatusObj, isBadgeDisp, 0);
  questBoardType = AreaBoardInfo_k__BackingField->fields.questBoardType;
  IsClose = 0;
  if ( questBoardType <= 8 && ((1 << questBoardType) & 0x118) != 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mLabelObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mTitleObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mAdvanceNoticeObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mOverwriteAdvanceNoticeObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mOptionObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mOptionInfoLb;
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mOptionRestrinctionLb;
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mRewardObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mPhaseObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mChallengeObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mClearCountObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mCostObj;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mCondObject;
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v86 = v17;
    if ( v89 == 0 && IsMainInterlude )
    {
      if ( !v12 )
        goto LABEL_193;
      if ( WarEntity__HasFlag(v12, 128, 0) || WarEntity__HasFlag(v12, 32, 0) )
      {
        status = AreaBoardInfo_k__BackingField->fields.status;
        v25 = v17;
LABEL_52:
        v86 = v25 || status == 2;
        goto LABEL_53;
      }
      v46 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v46 = BalanceConfig_TypeInfo;
      }
      if ( warId == v46->static_fields->MainInterludeWarId )
      {
        v25 = v17;
        status = AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE;
        goto LABEL_52;
      }
    }
LABEL_53:
    if ( v13 )
    {
      v26 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v26 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED = v26->static_fields->QBOARD_CAP_CLOSED;
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
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v29 = (clsQuestCheck_o *)this;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      if ( !v29 )
        goto LABEL_193;
      IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)clsQuestCheck__IsWarClear(
                                                          v29,
                                                          ScrTerminalListTop_TypeInfo->static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                          0);
      if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
        goto LABEL_201;
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v30 = (clsQuestCheck_o *)this;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      if ( !v30 )
        goto LABEL_193;
      if ( !clsQuestCheck__IsWarClear(
              v30,
              ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
              0) )
        goto LABEL_109;
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !this )
        goto LABEL_193;
      m_CachedPtr = (MapControl_RootInfo_o *)this->fields.m_CachedPtr;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      if ( !m_CachedPtr )
        goto LABEL_193;
      IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)MapControl_RootInfo__IsOpenedMainScenarioWar(
                                                          m_CachedPtr,
                                                          ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                          0);
      if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
      {
LABEL_109:
        v52 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v52 = QuestBoardListViewItemDraw_TypeInfo;
        }
        QBOARD_CAP_CLOSED = v52->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
      }
      else
      {
LABEL_201:
        if ( v12
          && (IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)WarEntity__HasFlag(v12, 128, 0),
              ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0) )
        {
          this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_WarMaster___);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   warId,
                                                   (const MethodInfo_33F90DC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0);
          v32 = QuestBoardListViewItemDraw_TypeInfo;
          v33 = (int)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v32 = QuestBoardListViewItemDraw_TypeInfo;
          }
          msQBoardL1Names = v32->static_fields->msQBoardL1Names;
          if ( !msQBoardL1Names )
            goto LABEL_193;
          if ( LODWORD(msQBoardL1Names->max_length) <= 1 )
            goto LABEL_198;
          v35 = msQBoardL1Names->m_Items[1];
          PrioredBannerId = v33;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
          QBOARD_CAP_CLOSED = System_String__Format(v35, v36, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarReleaseMaster___);
          if ( !this )
            goto LABEL_193;
          OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, warId, 0);
          if ( OpenEntity )
          {
            v38 = OpenEntity;
            IsClose = WarReleaseEntity__IsClose(OpenEntity, 0);
            if ( IsClose )
            {
              v39 = QuestBoardListViewItemDraw_TypeInfo;
              if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v39 = QuestBoardListViewItemDraw_TypeInfo;
              }
              QBOARD_CAP_CLOSED_FORMAT = v39->static_fields->QBOARD_CAP_CLOSED_FORMAT;
              PrioredBannerId = WarEntity__GetPrioredBannerId(v12, 0);
              v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
              QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_FORMAT, v41, 0);
            }
            if ( WarReleaseEntity__IsAnnouncement(v38, 0) )
            {
              v42 = QuestBoardListViewItemDraw_TypeInfo;
              if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v42 = QuestBoardListViewItemDraw_TypeInfo;
              }
              QBOARD_CAP_CLOSED_SPECIAL_FORMAT = v42->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
              PrioredBannerId = WarEntity__GetPrioredBannerId(v12, 0);
              v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
              QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v44, 0);
              IsClose = 1;
            }
            goto LABEL_113;
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
                                         (v89 != 0) | (unsigned __int8)v86,
                                         v23);
          }
          else
          {
            this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_193;
            this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_WarMaster___);
            if ( !this )
              goto LABEL_193;
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     warId,
                                                     (const MethodInfo_33F90DC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_193;
            this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0);
            v47 = QuestBoardListViewItemDraw_TypeInfo;
            v48 = (int)this;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v47 = QuestBoardListViewItemDraw_TypeInfo;
            }
            v49 = v47->static_fields->msQBoardL1Names;
            if ( !v49 )
              goto LABEL_193;
            if ( LODWORD(v49->max_length) <= 2 )
              goto LABEL_198;
            v50 = v49->m_Items[2];
            PrioredBannerId = v48;
            v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
            EventAddBannerSpriteName = System_String__Format(v50, v51, 0);
          }
          QBOARD_CAP_CLOSED = EventAddBannerSpriteName;
        }
      }
    }
    IsClose = 0;
LABEL_113:
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mcBaseP;
    if ( !this )
      goto LABEL_193;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    mcBaseP = v7->fields.mcBaseP;
    v55 = gameObject;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetBanner(mcBaseP, QBOARD_CAP_CLOSED, 0);
    if ( !v55 )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive(v55, (unsigned __int8)this & v84 & 1, 0);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mcBaseP;
    if ( !this )
      goto LABEL_193;
    ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
      this,
      this->klass[2]._1.generic_class);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mcBaseP;
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !this )
      goto LABEL_193;
    v92.fields.r = 1.0;
    v92.fields.g = 1.0;
    v92.fields.b = 1.0;
    v92.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v92, 0);
    if ( v86 )
    {
      this = (QuestBoardListViewItemDraw_o *)v7->fields.mcBaseP;
      if ( !this )
        goto LABEL_193;
      v93.fields.r = 0.5;
      v93.fields.g = 0.5;
      v93.fields.b = 0.5;
      v93.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v93, 0);
    }
  }
  this = (QuestBoardListViewItemDraw_o *)v7->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (!IsMainInterlude || !v17) & v88, 0);
  if ( !v12 || !(HasFlag = WarEntity__HasFlag(v12, 128, 0)) && !(HasFlag = WarEntity__HasFlag(v12, 32, 0)) )
  {
    if ( !IsClose && AreaBoardInfo_k__BackingField->fields.status == 1 )
      QuestBoardListViewItemDraw__SetStatusActive(v7, 1, 1, v56);
    v64 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v64 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v7,
      v64->static_fields->NEW_POS_AREA,
      v64->static_fields->NEW_W_AREA,
      v64->static_fields->NEW_H_AREA,
      v56);
    v67 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v67 = BalanceConfig_TypeInfo;
    }
    if ( warId == v67->static_fields->MainInterludeWarId
      && (AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE) == 2 )
    {
      QuestBoardListViewItemDraw__SetStatusActive(v7, 2, 1, v66);
    }
    QuestBoardListViewItemDraw__SetClearSprite(v7, v12, v65);
    if ( !v12 )
      goto LABEL_171;
    goto LABEL_167;
  }
  v59 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v59 && v59 != 6 && (!IsClose || v59 != 1) )
    QuestBoardListViewItemDraw__SetStatusActive(v7, v59, v89 != 0 || eventEnt == 0 || v59 != 1, v56);
  if ( (v88 & 1) != 0
    && QuestBoardListViewItemDraw__HasNewQuestInWar(
         (QuestBoardListViewItemDraw_o *)HasFlag,
         questList,
         warId,
         IsMainInterlude,
         v58) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v7, 1, 1, v56);
  }
  v60 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v60 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v7,
    v60->static_fields->NEW_POS_AREA,
    v60->static_fields->NEW_W_AREA,
    v60->static_fields->NEW_H_AREA,
    v56);
  if ( IsMainInterlude && v17 )
    QuestBoardListViewItemDraw__SetStatusActive(v7, 2, 1, v62);
  QuestBoardListViewItemDraw__SetClearSprite(v7, v12, v61);
  if ( IsClose )
  {
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mNextSp;
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    QuestBoardListViewItemDraw__SetNextSprite(v7, AreaBoardInfo_k__BackingField, v12, v63);
  }
  v69 = v7->fields.mListViewObject;
  if ( !v69 )
    goto LABEL_193;
  manager = (QuestBoardListViewItemDraw_o *)v69->fields.manager;
  if ( !manager )
  {
LABEL_196:
    IsDisplayableRoadmapButton = QuestBoardListViewItem__IsDisplayableRoadmapButton(v6, 0);
    sub_1C6BC60(IsDisplayableRoadmapButton, v82);
  }
  v70 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v70
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v70 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_195:
    sub_1C6BFFC(manager);
    goto LABEL_196;
  }
  if ( QuestBoardListViewItem__IsDisplayableRoadmapButton(v6, 0)
    || v6->fields.index == HIDWORD(manager->fields.mBannerArrowObj) )
  {
    this = (QuestBoardListViewItemDraw_o *)v7->fields.roadmapButton;
    if ( !this )
      goto LABEL_193;
    RoadmapButtonPrefab__Initialize((RoadmapButtonPrefab_o *)this, (AssetData_o *)manager->fields.mCostLb1, 0);
    if ( !LODWORD(manager->fields.mLabelFaceMaskShortcutSp) )
    {
      this = (QuestBoardListViewItemDraw_o *)v7->fields.roadmapButton;
      if ( !this )
        goto LABEL_193;
      RoadmapButtonPrefab__ModifyRoadmapButton((RoadmapButtonPrefab_o *)this, 0, 1, 0);
    }
  }
LABEL_167:
  if ( WarEntity__IsContainPrioredEntity(v12, 18, 0) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v7, 2, 1, v71);
    QuestBoardListViewItemDraw__SetClearSprite(v7, v12, v72);
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(v12, 0) )
    QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v7, v6, v12, 0, 0, v73);
LABEL_171:
  if ( IsClose || !isBadgeDisp || !(v88 & 1 | (v89 != 0 || eventEnt == 0)) )
    questCount = 0;
  else
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  QuestBoardListViewItemDraw__SetBadge(v7, questCount, v68);
  QuestBoardListViewItemDraw__CreateInfoTextList(v7, v6, (int64_t)checkTime, v75);
  if ( !IsMainInterlude )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)v7->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_193;
    questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
    if ( (int)questBoardItem >= 1 )
    {
      v78 = v7->fields.mListViewObject;
      if ( !v78 )
        goto LABEL_193;
      this = (QuestBoardListViewItemDraw_o *)v78->fields.manager;
      if ( !this )
        goto LABEL_193;
      v79 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment >= (unsigned int)v79
        && (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v79 - 1] == QuestBoardListViewManager_TypeInfo )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                         (QuestBoardListViewManager_o *)this,
                         (int32_t)questBoardItem,
                         0);
        this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                 mInfoTextList,
                                                 AlphaAnimCnt,
                                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
        if ( this )
        {
          QuestBoardInformationText__SetTime(
            (QuestBoardInformationText_o *)this,
            &v7->fields.mOptionInfoLb,
            &v7->fields.mOptionInfoFrameSp,
            0);
          this = (QuestBoardListViewItemDraw_o *)v7->fields.mOptionInfoLb;
          if ( this )
          {
            BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0);
            v76 = 1;
            goto LABEL_186;
          }
        }
LABEL_193:
        sub_1C6BC60(this, questBoardItem);
      }
      sub_1C6BFFC(this);
LABEL_198:
      sub_1C6BC68(this);
    }
  }
  v76 = 0;
LABEL_186:
  this = (QuestBoardListViewItemDraw_o *)v7->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v76, 0);
  this = (QuestBoardListViewItemDraw_o *)v7->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v76, 0);
}


void QuestBoardListViewItemDraw__SetItemOfFolderForTerminalTopEffect(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        bool isBoardDisp,
        bool isBadgeDisp,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw__SetItemOfFolder(this, questBoardItem, isBoardDisp, isBadgeDisp, method);
}


void QuestBoardListViewItemDraw__SetItemOfQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x28
  __int64 Instance; // x0
  __int64 QuestBoardInformationText_36615168; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x29
  DataManager_o *v11; // x24
  QuestEntity_o *PhaseDetailedEntity; // x23
  unsigned int v13; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x9
  int32_t dispType; // w21
  bool HasFlag; // w0
  float v18; // s8
  Il2CppObject *MasterData_object; // x22
  bool v20; // w22
  bool v21; // w0
  int32_t v22; // w20
  _BOOL4 v23; // w8
  QuestBoardListViewItemDraw_o *PhaseMax; // x0
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  char v27; // w22
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v29; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v31; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  struct QuestBoardListViewItemDraw_StaticFields *v33; // x8
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UISprite_o *mcBaseP; // x27
  System_String_o *v37; // x24
  int32_t questId; // w27
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v40; // x8
  UnityEngine_GameObject_o *v41; // x27
  float NEXT_POS_X_QUEST; // s0
  Il2CppObject *Master_object; // x27
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x3
  bool isEntityExistsFromId; // w8
  _BOOL4 IsResetStatus; // w9
  int32_t v48; // w1
  const MethodInfo *v49; // x3
  QuestBoardListViewItemDraw_c *v50; // x0
  const MethodInfo *v51; // x3
  QuestBoardListViewItemDraw_c *v52; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v53; // x8
  QuestBoardListViewItemDraw_c *v54; // x0
  int pickupPriority; // w20
  QuestBoardListViewItemDraw_c *v56; // x0
  bool v57; // zf
  __int64 v58; // x9
  __int64 v59; // x10
  __int64 v60; // x11
  __int64 v61; // x12
  __int64 v62; // x13
  __int64 v63; // x14
  __int64 v64; // x10
  float *v65; // x9
  float *v66; // x10
  __int64 v67; // x11
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x2
  UnityEngine_GameObject_o *v70; // x22
  QuestBoardListViewItemDraw_c *v71; // x0
  QuestBoardListViewItemDraw_o *v72; // x0
  const MethodInfo *v73; // x5
  System_String_o *RecommendLv; // x0
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x2
  UISprite_o *mLabelFaceMaskQuestSp; // x22
  QuestBoardListViewItemDraw_o *v78; // x0
  int32_t z_low; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v81; // x5
  bool v82; // w0
  const MethodInfo *v83; // x3
  UILabel_o *mTitleNameLb; // x22
  const MethodInfo *v85; // x4
  UnityEngine_Color_o *v86; // x26
  QuestBoardListViewItemDraw_o *v87; // x0
  const MethodInfo *v88; // x2
  const MethodInfo *v89; // x2
  UISprite_o *mLabelNameSp; // x22
  QuestBoardListViewItemDraw_o *v91; // x0
  const MethodInfo *v92; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v94; // x22
  const MethodInfo *v95; // x3
  float *v96; // x28
  UILabel_o *v97; // x22
  __int64 v98; // x20
  System_String_o *QuestBoardTitleColor; // x0
  bool v100; // w0
  System_String_o **v101; // x8
  System_String_o *v102; // x8
  System_String_o *v103; // x22
  QuestBoardListViewItemDraw_o *v104; // x0
  const MethodInfo *v105; // x4
  const MethodInfo *v106; // x5
  bool v107; // w22
  int v108; // w20
  const MethodInfo *v109; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  const MethodInfo *v111; // x7
  const MethodInfo *v112; // x5
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x9
  int64_t expireAt; // x1
  int32_t warId; // w3
  System_String_o *v116; // x4
  int64_t v117; // x2
  UISprite_o *v118; // x27
  __int64 v119; // x8
  System_String_o *v120; // x24
  System_String_o *v121; // x0
  System_String_o *v122; // x24
  struct MapControl_WarInfo_o *v123; // x8
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  __int64 v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  __int64 v129; // x8
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x27
  char v131; // w22
  struct QuestBoardListViewObject_o *v132; // x8
  System_Collections_Generic_List_object__o *v133; // x28
  __int64 v134; // x9
  int32_t AlphaAnimCnt; // w0
  Il2CppObject *Item; // x28
  int32_t v137; // w9
  int32_t v138; // w8
  const MethodInfo *v139; // x1
  int32_t v140; // w25
  UISprite_o *mCostApSp; // x22
  System_String_o *ApSpriteFileName; // x24
  UnityEngine_GameObject_o *mChallengeObj; // x22
  struct UnityEngine_GameObject_o *v144; // x20
  QuestBoardListViewItemDraw_c *v145; // x0
  _BOOL4 v146; // w20
  struct QuestBoardListViewItemDraw_StaticFields *v147; // x8
  __int64 v148; // x9
  __int64 v149; // x10
  __int64 v150; // x11
  int32_t ClearNum; // w22
  UISprite_o *challengeStrSpr; // x25
  UILabel_o *mChallengeLb; // x25
  UnityEngine_GameObject_o *mClearCountObj; // x22
  QuestBoardListViewItemDraw_c *v155; // x0
  _BOOL4 v156; // w20
  struct QuestBoardListViewItemDraw_StaticFields *v157; // x8
  __int64 v158; // x9
  __int64 v159; // x10
  __int64 v160; // x11
  int v161; // w22
  UILabel_o *clearCountStrLabel; // x25
  UnityEngine_GameObject_o *v163; // x0
  double v164; // d0
  int v165; // w20
  UnityEngine_GameObject_o *v166; // x0
  float v167; // s0
  UnityEngine_GameObject_o *v168; // x0
  UnityEngine_GameObject_o *v169; // x25
  double v170; // d0
  bool v171; // zf
  UILabel_o *mClearCountLabel; // x25
  UnityEngine_GameObject_o *mPhaseObj; // x22
  UnityEngine_GameObject_o *v174; // x21
  UnityEngine_GameObject_o *v175; // x23
  const MethodInfo *v176; // x4
  int32_t afterClear; // w24
  MapControl_PhaseInfo_o *CurrentPhaseInfo; // x0
  int32_t ReferToQuestPhase; // w0
  int32_t v180; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v182; // x25
  int32_t v183; // w22
  int32_t *p_questPhase; // x8
  int32_t v185; // w0
  int32_t v186; // w28
  uint32_t cctor_finished; // w9
  struct QuestBoardListViewItemDraw_StaticFields *v188; // x8
  int32_t PHASE_NORMAL_MAX; // w21
  bool v190; // w25
  int32_t v191; // w26
  __int64 v192; // x9
  unsigned int v193; // w20
  int32_t v194; // w29
  int v195; // w23
  int v196; // w21
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v198; // x8
  UISprite_o *v199; // x27
  QuestBoardListViewItemDraw_o *v200; // x0
  const MethodInfo *v201; // x6
  System_String_o *PhaseArrowSpriteName; // x0
  QuestBoardListViewItemDraw_o *v203; // x0
  const MethodInfo *v204; // x3
  int32_t PhaseArrowIntervalSize; // w24
  UnityEngine_GameObject_o *v206; // x22
  int32_t v207; // w21
  QuestBoardListViewItemDraw_c *v208; // x0
  UISprite_o *mDamageRecordSp; // x22
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x24
  Il2CppObject *v211; // x22
  int64_t MaxTurnDamage; // x0
  UILabel_o *mDamageRecordLb; // x22
  Il2CppObject *v214; // x0
  UnityEngine_GameObject_o *v215; // x22
  QuestBoardListViewItemDraw_c *v216; // x0
  UISprite_o *mKnockdownRecordSp; // x22
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x24
  QuestKnockdownInfo_o *v219; // x22
  Il2CppObject *v220; // x25
  UILabel_o *mKnockdownRecordCountLb; // x25
  System_String_o *v222; // x26
  Il2CppObject *v223; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x25
  System_String_o *v225; // x24
  Il2CppObject *v226; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x25
  System_String_o *v228; // x26
  long double inited; // q0
  _QWORD *v230; // x27
  __int64 v231; // x8
  __int64 v232; // x0
  __int64 v233; // x0
  UILabel_o *mKnockdownRecordDamageNameLb; // x25
  System_String_o *v235; // x0
  long double v236; // q0
  _QWORD *v237; // x27
  System_String_o *v238; // x26
  __int64 v239; // x8
  __int64 v240; // x0
  __int64 v241; // x0
  UnityEngine_GameObject_o *v242; // x22
  QuestBoardListViewItemDraw_c *v243; // x8
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_GameObject_o *v245; // x20
  UnityEngine_GameObject_o *v246; // x0
  float LocalPositionX; // s8
  QuestBoardListViewItemDraw_c *v248; // x0
  int32_t id; // w22
  TerminalSceneComponent_c *v250; // x0
  __int64 v251; // x22
  UILabel_o *mOptionRestrinctionLb; // x22
  UnityEngine_GameObject_o *v253; // x22
  UnityEngine_Behaviour_o *v254; // x22
  const MethodInfo *v255; // x3
  struct QuestPhaseDetailEntity_BoardList_o *boardMessage; // x8
  System_Collections_Generic_IEnumerable_TSource__o *list; // x0
  __int64 v258; // x20
  __int64 v259; // x25
  __int64 v260; // x8
  __int64 v261; // x8
  bool v262; // w22
  bool v263; // w25
  bool v264; // w28
  int32_t v265; // w2
  const MethodInfo *v266; // x3
  bool v267; // w26
  __int64 v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  __int64 v271; // x8
  _BOOL4 v272; // w20
  UISprite_o *mCostConsumeBattleWinSp; // x27
  __int64 v274; // x9
  QuestBoardListViewItemDraw_c *v275; // x0
  UISprite_o *mOptionPreBattleSp; // x26
  System_String_o *PRE_BATTLE_ORGANIZATION; // x24
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  __int64 v280; // x8
  _QWORD *v281; // x9
  __int64 v282; // x10
  __int64 v283; // x8
  bool v284; // w26
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  char v286; // w22
  UnityEngine_GameObject_o *v287; // x25
  QuestBoardListViewItemDraw_c *v288; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v289; // x8
  const MethodInfo *v290; // x2
  struct UILabel_o *v291; // x22
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v293; // x2
  struct UILabel_o *v294; // x8
  QuestBoardListViewItemDraw_c *v295; // x0
  int32_t mSpacingX; // w20
  QuestBoardListViewItemDraw_c *v297; // x0
  struct System_Int32_array *classIds; // x8
  bool v299; // w22
  QuestBoardListViewItemDraw_o *v300; // x0
  const MethodInfo *v301; // x2
  QuestEntity_o *v302; // x21
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v306; // x22
  QuestBoardListViewItemDraw___c_c *v307; // x0
  System_Func_object__int__o *_9__337_1; // x23
  Il2CppObject *v309; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v310; // x0
  int32_t v311; // w2
  const MethodInfo *v312; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v313; // x0
  System_Int32_array *v314; // x22
  struct ServantClassIconComponent_array *mClassIcons; // x8
  ServantClassIconComponent_o *v316; // x22
  WaveBattleWaveEnemyInfoItem_c *v317; // x0
  struct ServantClassIconComponent_array *v318; // x8
  int max_length; // w20
  int v320; // w21
  struct ServantClassIconComponent_array *v321; // x8
  int v322; // w10
  int v323; // w20
  struct System_Int32_array *v324; // x21
  unsigned int v325; // w9
  __int64 v326; // x23
  Il2CppClass **v327; // x8
  UnityEngine_Component_o *v328; // x22
  UISprite_o *mBoardFrame; // x22
  System_String_o *QuestBoardFrameNamePrefix; // x23
  System_String_o *QuestBoardFrameName; // x0
  System_String_o *v332; // x23
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v335; // w21
  QuestBoardListViewItemDraw_c *v336; // x0
  int32_t *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  UISprite_o *v338; // x27
  __int64 v339; // x8
  QuestBoardListViewItemDraw_o *v340; // x0
  QuestBoardListViewItem_o *v341; // x1
  const MethodInfo *v342; // x2
  const MethodInfo *v343; // [xsp+10h] [xbp-180h]
  int64_t checkTime; // [xsp+28h] [xbp-168h]
  bool v345; // [xsp+34h] [xbp-15Ch]
  QuestBoardListViewItem_o *v346; // [xsp+38h] [xbp-158h]
  int key; // [xsp+40h] [xbp-150h]
  _BOOL4 v348; // [xsp+44h] [xbp-14Ch]
  unsigned int questType; // [xsp+48h] [xbp-148h]
  int32_t questTypea[2]; // [xsp+48h] [xbp-148h]
  _BOOL4 v351; // [xsp+54h] [xbp-13Ch]
  DataManager_o *v352; // [xsp+58h] [xbp-138h]
  int32_t v353; // [xsp+64h] [xbp-12Ch]
  bool v354; // [xsp+68h] [xbp-128h]
  QuestEntity_o *v355; // [xsp+68h] [xbp-128h]
  int32_t questPhase; // [xsp+74h] [xbp-11Ch]
  float *v357; // [xsp+78h] [xbp-118h]
  _BOOL4 v358; // [xsp+84h] [xbp-10Ch]
  float *v359; // [xsp+88h] [xbp-108h]
  float *v360; // [xsp+90h] [xbp-100h]
  float *v361; // [xsp+98h] [xbp-F8h]
  int64_t totalDamage; // [xsp+A0h] [xbp-F0h] BYREF
  int64_t knockdownNum; // [xsp+A8h] [xbp-E8h] BYREF
  QuestPhaseEntity_o *questPhaseEntity; // [xsp+B0h] [xbp-E0h] BYREF
  QuestPhaseDetailEntity_o *v365; // [xsp+B8h] [xbp-D8h] BYREF
  Il2CppObject *v366; // [xsp+C0h] [xbp-D0h] BYREF
  int64_t endedAt; // [xsp+C8h] [xbp-C8h] BYREF
  System_String_o *infoText; // [xsp+D0h] [xbp-C0h] BYREF
  int32_t v369; // [xsp+D8h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+DCh] [xbp-B4h] BYREF
  int32_t fixedVal[2]; // [xsp+E0h] [xbp-B0h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+E8h] [xbp-A8h] BYREF
  UnityEngine_Color_o color; // [xsp+F0h] [xbp-A0h] BYREF
  Il2CppObject *v374; // [xsp+108h] [xbp-88h] BYREF
  bool isTripleItemConsume; // [xsp+114h] [xbp-7Ch] BYREF
  bool isDoubleItemConsumeQp; // [xsp+118h] [xbp-78h] BYREF
  bool isDoubleItemConsume; // [xsp+11Ch] [xbp-74h] BYREF
  UserQuestEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v379; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v380; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v381; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v382; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v383; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v384; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v385; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v386; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v387; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v388; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v389; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v390; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v391; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v392; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v393; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v394; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v395; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v396; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v397; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v398; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v399; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v400; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v401; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v402; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v403; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v404; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v405; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v406; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2E9C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Array_Empty_object___);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestExtensionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_QuestBoardInformationText___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&long___TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&QuestInformationComponent_TypeInfo);
    sub_1C6BA08(&QuestKnockdownInfo_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__337_1__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass337_0__SetItemOfQuest_b__0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass337_0_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1C6BA08(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_1C6BA08(&StringLiteral_22984/*"questboard_challenge"*/);
    sub_1C6BA08(&StringLiteral_412/*"#786F49"*/);
    sub_1C6BA08(&StringLiteral_19939/*"gold"*/);
    sub_1C6BA08(&StringLiteral_10824/*"QUEST_BOARD_CLEAR_COUNT_NAME"*/);
    sub_1C6BA08(&StringLiteral_10829/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/);
    sub_1C6BA08(&StringLiteral_10826/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/);
    sub_1C6BA08(&StringLiteral_25162/*"{0:#,0}"*/);
    sub_1C6BA08(&StringLiteral_425/*"#FFE898"*/);
    sub_1C6BA08(&StringLiteral_10828/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/);
    sub_1C6BA08(&StringLiteral_10827/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_22985/*"questboard_crushing"*/);
    byte_4CB2E9C = 1;
  }
  entity = 0;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  v374 = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)fixedVal = 0;
  phasePresentData = 0;
  isNotItemConsume = 0;
  v369 = 0;
  endedAt = 0;
  infoText = 0;
  v365 = 0;
  v366 = 0;
  questPhaseEntity = 0;
  v5 = sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass337_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass337_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass337_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_641;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_641;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_641;
  v11 = (DataManager_o *)Instance;
  Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0);
  if ( !Instance )
    goto LABEL_641;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0);
  if ( !v11 )
    goto LABEL_641;
  v13 = Instance;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_641;
  if ( !Instance )
    goto LABEL_641;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0);
  mListViewObject = this->fields.mListViewObject;
  key = Instance;
  if ( !mListViewObject )
    goto LABEL_641;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_641;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_699;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *(_QWORD *)(Instance + 584);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2, 0);
  if ( dispType == 2 )
    v18 = 0.5;
  else
    v18 = 1.0;
  *(float *)(v5 + 24) = v18;
  v357 = (float *)(v5 + 24);
  *(float *)(v5 + 28) = v18;
  *(float *)(v5 + 32) = v18;
  *(_DWORD *)(v5 + 36) = 1065353216;
  v354 = HasFlag;
  v360 = (float *)(v5 + 28);
  v361 = (float *)(v5 + 32);
  v359 = (float *)(v5 + 36);
  MasterData_object = DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_641;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    PhaseDetailedEntity->fields.id,
    0);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0);
  if ( !Instance )
    goto LABEL_641;
  v20 = QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x10000000000000LL, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_641;
  v21 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, quest_info_k__BackingField->fields.questId, 0, 0);
  v22 = quest_info_k__BackingField->fields.questPhase;
  v23 = !v20;
  v358 = v23;
  if ( !v21 )
    v23 = 0;
  v351 = v23;
  PhaseMax = (QuestBoardListViewItemDraw_o *)MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0);
  v26 = v22 + 1 < (int)PhaseMax ? v22 + 1 : (int)PhaseMax;
  questPhase = v26;
  Instance = QuestBoardListViewItemDraw__IsInterruptedQuest(
               PhaseMax,
               quest_info_k__BackingField->fields.questId,
               v26,
               v25);
  if ( !this->fields.mLabelObj )
    goto LABEL_641;
  v27 = Instance;
  UnityEngine_GameObject__SetActive(this->fields.mLabelObj, 1, 0);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  v352 = v11;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestExtensionMaster___);
  if ( !Instance )
    goto LABEL_641;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v374,
               PhaseDetailedEntity->fields.id,
               (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  questType = v13;
  if ( OverwriteBannerId_k__BackingField >= 1 )
  {
    v29 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v29 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    static_fields = v29->static_fields;
    v31 = (QuestBoardListViewItemDraw_c *)&v369;
    QUEST_BOARD_SPNAME_PREFIX = static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v369 = OverwriteBannerId_k__BackingField;
LABEL_59:
    v34 = System_Int32__ToString((int32_t)v31, 0);
    v35 = System_String__Concat_63966792(QUEST_BOARD_SPNAME_PREFIX, v34, 0);
    mcBaseP = this->fields.mcBaseP;
    v37 = v35;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mcBaseP, v37, 0);
    if ( !mcBaseP )
      goto LABEL_641;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, Instance & 1, 0);
    goto LABEL_63;
  }
  if ( PhaseDetailedEntity->fields.bannerId >= 1 )
  {
    v31 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v31 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v33 = v31->static_fields;
    LODWORD(v31) = (_DWORD)PhaseDetailedEntity + 64;
    QUEST_BOARD_SPNAME_PREFIX = v33->QUEST_BOARD_SPNAME_PREFIX;
    goto LABEL_59;
  }
  v118 = this->fields.mcBaseP;
  if ( questType <= 5 && ((1 << questType) & 0x26) != 0 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v119 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1104LL);
    if ( !v119 )
      goto LABEL_641;
    if ( questType >= *(_DWORD *)(v119 + 24) )
      goto LABEL_698;
    v120 = *(System_String_o **)(v119 + 8LL * questType + 32);
    v121 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0);
    v122 = System_String__Concat_63966792(v120, v121, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v118, v122, 0);
  }
  else
  {
    if ( !v118 )
      goto LABEL_641;
    UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0);
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v338 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v339 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1104LL);
    if ( !v339 )
      goto LABEL_641;
    if ( questType >= *(_DWORD *)(v339 + 24) )
      goto LABEL_698;
    if ( !v338 )
      goto LABEL_641;
    UISprite__set_spriteName(v338, *(System_String_o **)(v339 + 8LL * (int)questType + 32), 0);
  }
LABEL_63:
  Instance = (__int64)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_641;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_641;
  v383.fields.a = *v359;
  v383.fields.b = *v361;
  v383.fields.g = *v360;
  v383.fields.r = *v357;
  UIWidget__set_color((UIWidget_o *)Instance, v383, 0);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0) == 1
    && MapControl_QuestInfo__IsDisaplayable(quest_info_k__BackingField, 0) )
  {
    Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0);
    if ( !Instance )
      goto LABEL_641;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x400000000000LL, 0) )
    {
      questId = quest_info_k__BackingField->fields.questId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_40554260(questId, -1, 1, 0) )
        goto LABEL_75;
    }
  }
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0) )
  {
LABEL_75:
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_641;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    v40 = QuestBoardListViewItemDraw_TypeInfo;
    v41 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v40 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v41, v40->static_fields->NEXT_POS_X_QUEST, 0);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_641;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 128) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 140) = NEXT_POS_X_QUEST;
  }
  v353 = dispType;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestResetMaster___);
  Instance = sub_1C6BAB0(long___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_641;
  QuestBoardInformationText_36615168 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_698;
  *(_QWORD *)(Instance + 32) = quest_info_k__BackingField->fields.questId;
  if ( !Master_object )
    goto LABEL_641;
  isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_33F86B8 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
  IsResetStatus = 0;
  if ( entity && isEntityExistsFromId )
    IsResetStatus = UserQuestEntity__IsResetStatus(entity, 0);
  v348 = dispType != 2;
  if ( IsResetStatus || v351 || v348 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v48 = 1;
    }
    else
    {
      if ( !IsResetStatus && !v351 )
        goto LABEL_98;
      v48 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v48, 1, v45);
  }
LABEL_98:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v45);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v44);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v50 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v50 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      v50->static_fields->NEW_POS_QUEST_NEXT,
      v50->static_fields->NEW_W_DEFAULT,
      v50->static_fields->NEW_H_DEFAULT,
      v49);
    v52 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v52 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v53 = v52->static_fields;
LABEL_113:
    v57 = (v27 & 1) == 0;
    v58 = 228;
    v59 = 252;
    v60 = 224;
    v61 = 248;
    v62 = 220;
    v63 = 244;
    goto LABEL_114;
  }
  v54 = QuestBoardListViewItemDraw_TypeInfo;
  pickupPriority = quest_info_k__BackingField->fields.pickupPriority;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v54 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v54->static_fields->NEW_POS_QUEST,
    v54->static_fields->NEW_W_DEFAULT,
    v54->static_fields->NEW_H_DEFAULT,
    v49);
  v56 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v56 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v53 = v56->static_fields;
  if ( pickupPriority >= 1 )
    goto LABEL_113;
  v57 = (v27 & 1) == 0;
  v58 = 216;
  v59 = 240;
  v60 = 212;
  v61 = 236;
  v62 = 208;
  v63 = 232;
LABEL_114:
  if ( v57 )
  {
    v64 = v60;
  }
  else
  {
    v58 = v59;
    v64 = v61;
  }
  v65 = (float *)((char *)&v53->POS_Y_ITVL_AREA + v58);
  v66 = (float *)((char *)&v53->POS_Y_ITVL_AREA + v64);
  if ( v57 )
    v67 = v62;
  else
    v67 = v63;
  v379.fields.z = *v65;
  v379.fields.y = *v66;
  LODWORD(v379.fields.x) = *(int32_t *)((char *)&v53->POS_Y_ITVL_AREA + v67);
  QuestBoardListViewItemDraw__SetPrevSprite(this, PhaseDetailedEntity, v379, v27 & 1, v51);
  if ( dispType != 2
    && quest_info_k__BackingField->fields.isNew
    && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v68);
  }
  Instance = (__int64)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v69);
  if ( !Instance )
    goto LABEL_641;
  v70 = (UnityEngine_GameObject_o *)Instance;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v71 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v71 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v70, v71->static_fields->CLEAR_POS_QUEST, 0);
  }
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v354, 0);
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_641;
  v346 = questBoardItem;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_641;
  v384.fields.a = *v359;
  v384.fields.b = *v361;
  v384.fields.g = *v360;
  v384.fields.r = *v357;
  UIWidget__set_color((UIWidget_o *)Instance, v384, 0);
  v345 = !v354;
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  v72,
                  PhaseDetailedEntity,
                  questPhase,
                  !v354,
                  dispType == 2,
                  v73);
  v385.fields.r = *v357;
  v385.fields.g = *v360;
  v385.fields.b = *v361;
  v385.fields.a = *v359;
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, v385, v75);
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  v78 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v78 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  z_low = LODWORD(v78->fields.mPrevSp[1].fields.mOldV1.fields.z);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v78, questType, v76);
  v386.fields.r = *v357;
  v386.fields.g = *v360;
  v386.fields.b = *v361;
  v386.fields.a = *v359;
  v82 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          z_low,
          FaceMaskSpriteName,
          v386,
          v81);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v82 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, questType, v83);
    if ( !mTitleNameLb )
      goto LABEL_641;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0);
    v86 = (UnityEngine_Color_o *)(v5 + 24);
    goto LABEL_155;
  }
  Instance = (__int64)QuestEntity__getQuestName(PhaseDetailedEntity, 0);
  if ( !mTitleNameLb )
    goto LABEL_641;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0);
  if ( questType != 1 || !QuestBoardListViewItemDraw__IsMainWar(v87, quest_info_k__BackingField->fields.warId, v88) )
  {
    Instance = (__int64)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_641;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v91, PhaseDetailedEntity, questType, v92);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0);
    v86 = (UnityEngine_Color_o *)(v5 + 24);
    if ( !mLabelNameSp )
      goto LABEL_641;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_641;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_641;
    v387.fields.r = *v357;
    v387.fields.a = *v359;
    v387.fields.b = *v361;
    v387.fields.g = *v360;
    UIWidget__set_color((UIWidget_o *)Instance, v387, 0);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_641;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v94 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v94,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass337_0__SetItemOfQuest_b__0__,
        0);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v94, v95);
    }
LABEL_155:
    if ( dispType == 2 )
      goto LABEL_156;
LABEL_157:
    Instance = (__int64)this->fields.mAdvanceNoticeLb;
    v96 = (float *)(v5 + 36);
    if ( !Instance )
      goto LABEL_641;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_159;
  }
  v86 = (UnityEngine_Color_o *)(v5 + 24);
  if ( dispType != 2 )
  {
    QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v89);
    goto LABEL_157;
  }
LABEL_156:
  QuestBoardListViewItemDraw__SetAdvanceNoticeText(
    this,
    quest_info_k__BackingField,
    PhaseDetailedEntity,
    checkTime,
    v85);
  v96 = (float *)(v5 + 36);
LABEL_159:
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v97 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v97 )
    goto LABEL_641;
  UILabel__SetCondensedScale(v97, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0, 0);
  color = *v86;
  if ( v374 && QuestExtensionEntity__IsQuestBoardTitleColorChange((QuestExtensionEntity_o *)v374, 0) )
  {
    Instance = (__int64)v374;
    if ( !v374 )
      goto LABEL_641;
    v98 = StringLiteral_1/*""*/;
    QuestBoardTitleColor = QuestExtensionEntity__GetQuestBoardTitleColor((QuestExtensionEntity_o *)v374, 0);
    v100 = System_String__op_Equality(QuestBoardTitleColor, (System_String_o *)StringLiteral_19939/*"gold"*/, 0);
    v101 = (System_String_o **)&StringLiteral_412/*"#786F49"*/;
    if ( dispType != 2 )
      v101 = (System_String_o **)&StringLiteral_425/*"#FFE898"*/;
    v102 = *v101;
    if ( v100 )
      v103 = v102;
    else
      v103 = (System_String_o *)v98;
    if ( !System_String__IsNullOrEmpty(v103, 0) )
      UnityEngine_ColorUtility__TryParseHtmlString(v103, &color, 0);
  }
  Instance = (__int64)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_641;
  UIWidget__set_color((UIWidget_o *)Instance, color, 0);
  QuestBoardListViewItemDraw__GetPhasePresentGiftData(
    v104,
    &phasePresentData,
    PhaseDetailedEntity,
    quest_info_k__BackingField->fields.questPhase,
    v105);
  v388.fields.r = v86->fields.r;
  v388.fields.g = *v360;
  v388.fields.a = *v96;
  v388.fields.b = *v361;
  QuestBoardListViewItemDraw__SetupRewardIconAll(
    this,
    quest_info_k__BackingField,
    entity,
    phasePresentData,
    dispType == 2,
    v388,
    v106);
  if ( entity && UserQuestEntity__HasStatus(entity, 8, 0) )
  {
    Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    v107 = !WarEntity__IsShop((WarEntity_o *)Instance, 0);
    v108 = 1;
  }
  else
  {
    v108 = 0;
    v107 = 0;
  }
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v107, 0);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v109);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        questPhase,
                        !v351,
                        &fixedVal[1],
                        fixedVal,
                        &isNotItemConsume,
                        v111);
  if ( !mInfoTextList )
    goto LABEL_641;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !QuestEntity__HasFlag(PhaseDetailedEntity, 32, 0) )
  {
    Instance = (__int64)this->fields.mRarePrismSp;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    if ( v108 | UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
    {
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_641;
      Instance = UserQuestEntity__IsExpireNoLimit(entity, 0);
      if ( (Instance & 1) != 0 )
        goto LABEL_212;
      if ( !entity )
        goto LABEL_641;
      WarInfo_k__BackingField = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_641;
      expireAt = entity->fields.expireAt;
      warId = WarInfo_k__BackingField->fields.warId;
    }
    else
    {
      Instance = QuestMaster__TryGetPrivilegePeriodMessage(&infoText, &endedAt, PhaseDetailedEntity->fields.id, 0);
      if ( (Instance & 1) != 0 )
      {
        expireAt = endedAt;
        v116 = infoText;
        v117 = checkTime;
        warId = 0;
        goto LABEL_206;
      }
      v123 = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
      if ( !v123 )
        goto LABEL_641;
      expireAt = quest_info_k__BackingField->fields.endTime;
      warId = v123->fields.warId;
    }
    v117 = checkTime;
    v116 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_206:
    QuestBoardInformationText_36615168 = (__int64)QuestBoardListViewItemDraw__CreateQuestBoardInformationText_36615168(
                                                    (QuestBoardListViewItemDraw_o *)Instance,
                                                    expireAt,
                                                    v117,
                                                    warId,
                                                    v116,
                                                    v112);
    if ( QuestBoardInformationText_36615168 )
    {
      Instance = (__int64)this->fields.mInfoTextList;
      if ( !Instance )
        goto LABEL_641;
      v126 = *(_QWORD *)(Instance + 16);
      v127 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v126 )
        goto LABEL_641;
      v128 = *(int *)(Instance + 24);
      if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)QuestBoardInformationText_36615168,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v129 = v126 + 8 * v128;
        *(_DWORD *)(Instance + 24) = v128 + 1;
        *(_QWORD *)(v129 + 32) = QuestBoardInformationText_36615168;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v129 + 32), QuestBoardInformationText_36615168, v124, v125);
      }
    }
  }
LABEL_212:
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Instance = System_Linq_Enumerable__Any_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mInfoTextList,
               (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_QuestBoardInformationText___);
  v131 = Instance;
  if ( (Instance & 1) == 0 )
    goto LABEL_223;
  v132 = this->fields.mListViewObject;
  if ( !v132 )
    goto LABEL_641;
  v133 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v133 )
    goto LABEL_641;
  Instance = (__int64)v132->fields.manager;
  if ( !Instance )
    goto LABEL_641;
  v134 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v134
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v134 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_699:
    sub_1C6BFFC(Instance);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v340, v341, v342);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                   (QuestBoardListViewManager_o *)Instance,
                   v133->fields._size,
                   0);
  Item = System_Collections_Generic_List_object___get_Item(
           v133,
           AlphaAnimCnt,
           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !Item )
    goto LABEL_641;
  QuestBoardInformationText__SetTime_36696080(
    (QuestBoardInformationText_o *)Item,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    Instance,
    0);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_641;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0);
  v137 = fixedVal[1];
  v96 = v359;
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v138 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v137;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v138;
LABEL_223:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v131 & 1, 0);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v131 & 1, 0);
  v389.fields.r = v86->fields.r;
  v389.fields.g = *v360;
  v389.fields.a = *v96;
  v389.fields.b = *v361;
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    dispType == 2,
    fixedVal[1],
    fixedVal[0],
    isNotItemConsume,
    v389,
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    0,
    v343);
  v140 = v346->fields._OverwriteBannerId_k__BackingField;
  if ( v140 >= 1 )
  {
    mCostApSp = this->fields.mCostApSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(v140, v139);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0);
    if ( !mCostApSp )
      goto LABEL_641;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, Instance & 1, 0);
  }
  mChallengeObj = this->fields.mChallengeObj;
  if ( v354 )
    v144 = 0;
  else
    v144 = this->fields.mChallengeObj;
  if ( v354 || (Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 0x4000, 0), (Instance & 1) != 0) )
  {
    QuestBoardInformationText_36615168 = 0;
    if ( !mChallengeObj )
      goto LABEL_641;
  }
  else
  {
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 4, 0);
    QuestBoardInformationText_36615168 = (Instance & 1) != 0 && PhaseDetailedEntity->fields.afterClear != 1;
    mChallengeObj = v144;
    if ( !v144 )
      goto LABEL_641;
  }
  UnityEngine_GameObject__SetActive(mChallengeObj, QuestBoardInformationText_36615168, 0);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v145 = QuestBoardListViewItemDraw_TypeInfo;
    v146 = isDoubleItemConsume;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v145 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v147 = v145->static_fields;
    v148 = 532;
    if ( v146 )
    {
      v149 = 528;
    }
    else
    {
      v148 = 520;
      v149 = 516;
    }
    if ( v146 )
      v150 = 524;
    else
      v150 = 512;
    LODWORD(v380.fields.x) = *(int32_t *)((char *)&v147->POS_Y_ITVL_AREA + v150);
    LODWORD(v380.fields.y) = *(int32_t *)((char *)&v147->POS_Y_ITVL_AREA + v149);
    LODWORD(v380.fields.z) = *(int32_t *)((char *)&v147->POS_Y_ITVL_AREA + v148);
    GameObjectExtensions__SetLocalPosition(this->fields.mChallengeObj, v380, 0);
    Instance = (__int64)DataManager__GetMasterData_object_(
                          v352,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_641;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &v366,
      key,
      (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( QuestEntity__HasFlag(PhaseDetailedEntity, 4, 0)
      && (!v366 || EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)v366, 0)) )
    {
      if ( entity )
        ClearNum = UserQuestEntity__getClearNum(entity, 0);
      else
        ClearNum = 0;
      challengeStrSpr = this->fields.challengeStrSpr;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_22985/*"questboard_crushing"*/, 0);
    }
    else
    {
      if ( entity )
        ClearNum = entity->fields.challengeNum;
      else
        ClearNum = 0;
      Instance = (__int64)this->fields.challengeStrSpr;
      if ( !Instance )
        goto LABEL_641;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22984/*"questboard_challenge"*/, 0);
    }
    mChallengeLb = this->fields.mChallengeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__GetNumberFormat(ClearNum, 0);
    if ( !mChallengeLb )
      goto LABEL_641;
    UILabel__set_text(mChallengeLb, (System_String_o *)Instance, 0);
    Instance = (__int64)this->fields.challengeStrSpr;
    if ( !Instance )
      goto LABEL_641;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  Instance = (__int64)this->fields.mChallengeLb;
  if ( !Instance )
    goto LABEL_641;
  v390.fields.a = *v96;
  v390.fields.r = v86->fields.r;
  v390.fields.b = *v361;
  v390.fields.g = *v360;
  UIWidget__set_color((UIWidget_o *)Instance, v390, 0);
  mClearCountObj = this->fields.mClearCountObj;
  if ( v354 || (Instance = (__int64)v374) == 0 )
  {
    QuestBoardInformationText_36615168 = 0;
  }
  else
  {
    Instance = QuestExtensionEntity__IsActiveClearCnt((QuestExtensionEntity_o *)v374, 0);
    QuestBoardInformationText_36615168 = Instance & 1;
  }
  if ( !mClearCountObj )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive(mClearCountObj, QuestBoardInformationText_36615168, 0);
  Instance = (__int64)this->fields.mClearCountObj;
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v155 = QuestBoardListViewItemDraw_TypeInfo;
    v156 = isDoubleItemConsume;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v155 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v157 = v155->static_fields;
    v158 = 556;
    if ( v156 )
    {
      v159 = 552;
    }
    else
    {
      v158 = 544;
      v159 = 540;
    }
    if ( v156 )
      v160 = 548;
    else
      v160 = 536;
    LODWORD(v381.fields.x) = *(int32_t *)((char *)&v157->POS_Y_ITVL_AREA + v160);
    LODWORD(v381.fields.y) = *(int32_t *)((char *)&v157->POS_Y_ITVL_AREA + v159);
    LODWORD(v381.fields.z) = *(int32_t *)((char *)&v157->POS_Y_ITVL_AREA + v158);
    GameObjectExtensions__SetLocalPosition(this->fields.mClearCountObj, v381, 0);
    Instance = (__int64)v374;
    if ( v374 )
    {
      if ( QuestExtensionEntity__IsActiveClearCnt((QuestExtensionEntity_o *)v374, 0) )
      {
        if ( entity )
          v161 = UserQuestEntity__getClearNum(entity, 0);
        else
          v161 = 0;
        clearCountStrLabel = this->fields.clearCountStrLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10824/*"QUEST_BOARD_CLEAR_COUNT_NAME"*/, 0);
        if ( !clearCountStrLabel )
          goto LABEL_641;
        UILabel__set_text(clearCountStrLabel, (System_String_o *)Instance, 0);
      }
      else
      {
        v161 = 0;
      }
      Instance = (__int64)this->fields.clearCountStrLabel;
      if ( !Instance )
        goto LABEL_641;
      if ( v156 )
      {
        UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0);
        Instance = (__int64)this->fields.clearCountStrLabel;
        if ( !Instance )
          goto LABEL_641;
        v163 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        GameObjectExtensions__SetLocalScaleX(v163, 0.86, 0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v164 = log10((double)v161);
        v165 = v164 == INFINITY ? -2147483647 : (int)v164 + 1;
        v369 = v165;
        Instance = (__int64)this->fields.mClearCountLabel;
        if ( v165 <= 7 )
        {
          if ( !Instance )
            goto LABEL_641;
          v166 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          v167 = v165 <= 5 ? 1.0 : 0.65;
        }
        else
        {
          if ( !Instance )
            goto LABEL_641;
          v166 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          v167 = 0.53;
        }
      }
      else
      {
        UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0);
        Instance = (__int64)this->fields.clearCountStrLabel;
        if ( !Instance )
          goto LABEL_641;
        v168 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        GameObjectExtensions__SetLocalScaleX(v168, 1.0, 0);
        Instance = (__int64)this->fields.mClearCountLabel;
        if ( !Instance )
          goto LABEL_641;
        v169 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v170 = log10((double)v161);
        v171 = (int)v170 + 1 <= 6 || v170 == INFINITY;
        v167 = 1.0;
        if ( !v171 )
          v167 = 0.65;
        v166 = v169;
      }
      GameObjectExtensions__SetLocalScaleX(v166, v167, 0);
      mClearCountLabel = this->fields.mClearCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__GetNumberFormat(v161, 0);
      if ( mClearCountLabel )
      {
        UILabel__set_text(mClearCountLabel, (System_String_o *)Instance, 0);
        goto LABEL_332;
      }
    }
LABEL_641:
    sub_1C6BC60(Instance, QuestBoardInformationText_36615168);
  }
LABEL_332:
  Instance = (__int64)this->fields.mClearCountLabel;
  if ( !Instance )
    goto LABEL_641;
  v391.fields.a = *v96;
  v391.fields.r = v86->fields.r;
  v391.fields.b = *v361;
  v391.fields.g = *v360;
  UIWidget__set_color((UIWidget_o *)Instance, v391, 0);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_641;
  mPhaseObj = this->fields.mPhaseObj;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
    v174 = 0;
  else
    v174 = mPhaseObj;
  v355 = PhaseDetailedEntity;
  if ( (Instance & 1) != 0 )
    goto LABEL_343;
  Instance = (__int64)this->fields.mClearCountObj;
  if ( !Instance )
    goto LABEL_641;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  v175 = (Instance & 1) != 0 ? 0LL : v174;
  if ( (Instance & 1) != 0 )
    goto LABEL_343;
  Instance = QuestEntity__HasFlag(v355, 0x4000, 0);
  if ( (Instance & 1) != 0 )
    v245 = 0;
  else
    v245 = v175;
  if ( (Instance & 1) != 0 )
  {
    QuestBoardInformationText_36615168 = 0;
    mPhaseObj = v174;
  }
  else
  {
    Instance = QuestEntity__HasFlag(v355, 0x10000, 0);
    if ( (Instance & 1) != 0 )
      mPhaseObj = 0;
    else
      mPhaseObj = v245;
    if ( (Instance & 1) == 0 )
    {
      if ( v353 == 2 )
      {
        Instance = QuestEntity__HasFlag(v355, 512, 0);
        if ( (Instance & 1) != 0 )
        {
LABEL_343:
          QuestBoardInformationText_36615168 = 0;
          goto LABEL_344;
        }
        v245 = mPhaseObj;
      }
      Instance = QuestEntity__HasFlag(v355, 0x4000000, 0);
      if ( (Instance & 1) != 0 )
      {
        QuestBoardInformationText_36615168 = 0;
      }
      else
      {
        Instance = QuestEntity__HasFlag(v355, 0x2000000000LL, 0);
        QuestBoardInformationText_36615168 = (Instance & 1) == 0 && v358;
      }
      mPhaseObj = v245;
      goto LABEL_344;
    }
    QuestBoardInformationText_36615168 = 0;
    mPhaseObj = v175;
  }
LABEL_344:
  *(_QWORD *)questTypea = quest_info_k__BackingField;
  if ( !mPhaseObj )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive(mPhaseObj, QuestBoardInformationText_36615168, 0);
  Instance = (__int64)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    QuestBoardListViewItemDraw__InitPhase(this, isDoubleItemConsume, isDoubleItemConsumeQp, isTripleItemConsume, v176);
    afterClear = v355->fields.afterClear;
    CurrentPhaseInfo = MapControl_QuestInfo__GetCurrentPhaseInfo(quest_info_k__BackingField, 0);
    if ( !CurrentPhaseInfo )
      goto LABEL_352;
    ReferToQuestPhase = MapControl_PhaseInfo__GetReferToQuestPhase(CurrentPhaseInfo, 0);
    if ( ReferToQuestPhase < 1 )
      goto LABEL_352;
    v180 = ReferToQuestPhase;
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_641;
    QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v180, 0);
    if ( QuestInfo )
    {
      v182 = QuestInfo;
      v183 = MapControl_QuestInfo__GetPhaseMax(QuestInfo, 0);
      p_questPhase = &v182->fields.questPhase;
    }
    else
    {
LABEL_352:
      v185 = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0);
      p_questPhase = &quest_info_k__BackingField->fields.questPhase;
      v183 = v185;
    }
    v186 = *p_questPhase;
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    }
    v188 = *(struct QuestBoardListViewItemDraw_StaticFields **)(Instance + 184);
    PHASE_NORMAL_MAX = v188->PHASE_NORMAL_MAX;
    v190 = afterClear == 2 && v348;
    v191 = v183 > PHASE_NORMAL_MAX;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      v188 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v188->PHASE_NORMAL_MAX;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        v188 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
    }
    v192 = 496;
    if ( v183 > PHASE_NORMAL_MAX )
      v192 = 504;
    v193 = afterClear - 3;
    v194 = 0;
    v195 = -*(int32_t *)((char *)&v188->POS_Y_ITVL_AREA + v192);
    v196 = v183 - 1;
    while ( 1 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v194 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        break;
      mPhaseSp = this->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_641;
      if ( (unsigned int)v194 >= LODWORD(mPhaseSp->max_length) )
        goto LABEL_698;
      v198 = &mPhaseSp->obj.klass + v194;
      v199 = (UISprite_o *)v198[4];
      if ( !v199 )
        goto LABEL_641;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v198[4], 0);
      if ( !Instance )
        goto LABEL_641;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v194 < v183, 0);
      if ( v194 < v183 )
      {
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 v200,
                                 v191,
                                 (v194 < v186) & (unsigned __int8)v358,
                                 v196 == v194,
                                 v190,
                                 (v196 == v194) & (unsigned __int8)(v193 < 2),
                                 v201);
        UISprite__set_spriteName(v199, PhaseArrowSpriteName, 0);
        v392.fields.a = 1.0;
        v392.fields.r = v18;
        v392.fields.g = v18;
        v392.fields.b = v18;
        UIWidget__set_color((UIWidget_o *)v199, v392, 0);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v203,
                                   v191,
                                   v196 == v194 && v193 < 2,
                                   v204);
        Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v199, 0);
        if ( !Instance )
          goto LABEL_641;
        v195 += PhaseArrowIntervalSize;
        v382.fields.x = (float)v195;
        v382.fields.y = 0.0;
        v382.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v382, 0);
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v199->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v199,
          v199->klass->vtable._33_MakePixelPerfect.method);
      }
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      ++v194;
    }
  }
  Instance = (__int64)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_641;
  v206 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  Instance = QuestEntity__HasFlag(v355, 0x4000000, 0);
  if ( !v206 )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive(v206, Instance & 1, 0);
  Instance = (__int64)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v207 = v353;
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v208 = QuestBoardListViewItemDraw_TypeInfo;
    mDamageRecordSp = this->fields.mDamageRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v208 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v208->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mDamageRecordSp, QUEST_BOARD_DAMAGE_RECODE_NAME, 0);
    v211 = DataManager__GetMasterData_object_(
             v352,
             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v211 )
      goto LABEL_641;
    MaxTurnDamage = UserQuestRecordMaster__GetMaxTurnDamage(
                      (UserQuestRecordMaster_o *)v211,
                      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                      v355->fields.id,
                      0);
    mDamageRecordLb = this->fields.mDamageRecordLb;
    knockdownNum = MaxTurnDamage;
    v214 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v214, 0);
    if ( !mDamageRecordLb )
      goto LABEL_641;
    UILabel__set_text(mDamageRecordLb, (System_String_o *)Instance, 0);
    Instance = (__int64)this->fields.mDamageRecordSp;
    if ( !Instance )
      goto LABEL_641;
    v393.fields.a = *v359;
    v393.fields.b = *v361;
    v393.fields.r = *v357;
    v393.fields.g = *v360;
    UIWidget__set_color((UIWidget_o *)Instance, v393, 0);
    Instance = (__int64)this->fields.mDamageRecordLb;
    if ( !Instance )
      goto LABEL_641;
    v394.fields.a = *v359;
    v394.fields.b = *v361;
    v394.fields.g = *v360;
    v394.fields.r = *v357;
    UIWidget__set_color((UIWidget_o *)Instance, v394, 0);
  }
  Instance = (__int64)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_641;
  v215 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  Instance = QuestEntity__HasFlag(v355, 0x2000000000LL, 0);
  if ( !v215 )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive(v215, Instance & 1, 0);
  Instance = (__int64)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v216 = QuestBoardListViewItemDraw_TypeInfo;
    mKnockdownRecordSp = this->fields.mKnockdownRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v216 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v216->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mKnockdownRecordSp, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0);
    v219 = (QuestKnockdownInfo_o *)sub_1C6BC54(QuestKnockdownInfo_TypeInfo);
    QuestKnockdownInfo___ctor(v219, 0);
    v220 = DataManager__GetMasterData_object_(
             v352,
             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v220 )
      goto LABEL_641;
    UserQuestRecordMaster__GetKnockdownRecordinfo(
      (UserQuestRecordMaster_o *)v220,
      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
      v355->fields.id,
      v219,
      0);
    mKnockdownRecordCountLb = this->fields.mKnockdownRecordCountLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10826/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, 0);
    if ( !v219 )
      goto LABEL_641;
    v222 = (System_String_o *)Instance;
    knockdownNum = v219->fields.knockdownNum;
    v223 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum);
    Instance = (__int64)System_String__Format(v222, v223, 0);
    if ( !mKnockdownRecordCountLb )
      goto LABEL_641;
    UILabel__set_text(mKnockdownRecordCountLb, (System_String_o *)Instance, 0);
    mKnockdownRecordDamageLb = this->fields.mKnockdownRecordDamageLb;
    v225 = LocalizationManager__Get((System_String_o *)StringLiteral_10827/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, 0);
    totalDamage = v219->fields.totalDamage;
    v226 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &totalDamage);
    Instance = (__int64)System_String__Format(v225, v226, 0);
    if ( !mKnockdownRecordDamageLb )
      goto LABEL_641;
    UILabel__set_text(mKnockdownRecordDamageLb, (System_String_o *)Instance, 0);
    mKnockdownRecordPlusLb = this->fields.mKnockdownRecordPlusLb;
    v228 = LocalizationManager__Get((System_String_o *)StringLiteral_10829/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, 0);
    v230 = Method_System_Array_Empty_object___;
    v231 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v231 )
    {
      sub_1C41AF8(Method_System_Array_Empty_object___);
      v231 = v230[7];
    }
    v232 = *(_QWORD *)(v231 + 16);
    if ( (*(_BYTE *)(v232 + 309) & 1) == 0 )
      v232 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v232 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v232);
    v233 = *(_QWORD *)(v230[7] + 16LL);
    if ( (*(_BYTE *)(v233 + 309) & 1) == 0 )
      v233 = sub_1C41A9C(inited);
    Instance = (__int64)System_String__Format_64008236(v228, **(System_Object_array ***)(v233 + 184), 0);
    if ( !mKnockdownRecordPlusLb )
      goto LABEL_641;
    UILabel__set_text(mKnockdownRecordPlusLb, (System_String_o *)Instance, 0);
    mKnockdownRecordDamageNameLb = this->fields.mKnockdownRecordDamageNameLb;
    v235 = LocalizationManager__Get((System_String_o *)StringLiteral_10828/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, 0);
    v237 = Method_System_Array_Empty_object___;
    v238 = v235;
    v239 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v239 )
    {
      sub_1C41AF8(Method_System_Array_Empty_object___);
      v239 = v237[7];
    }
    v240 = *(_QWORD *)(v239 + 16);
    if ( (*(_BYTE *)(v240 + 309) & 1) == 0 )
      v240 = sub_1C41A9C(v236);
    if ( !*(_DWORD *)(v240 + 224) )
      v236 = j_il2cpp_runtime_class_init_0(v240);
    v241 = *(_QWORD *)(v237[7] + 16LL);
    if ( (*(_BYTE *)(v241 + 309) & 1) == 0 )
      v241 = sub_1C41A9C(v236);
    Instance = (__int64)System_String__Format_64008236(v238, **(System_Object_array ***)(v241 + 184), 0);
    if ( !mKnockdownRecordDamageNameLb )
      goto LABEL_641;
    UILabel__set_text(mKnockdownRecordDamageNameLb, (System_String_o *)Instance, 0);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_641;
    UILabel__SetCondensedScale(
      (UILabel_o *)Instance,
      QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH,
      0,
      0);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_641;
    if ( v219->fields.totalDamage <= 0 )
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0);
      Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_641;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !this->fields.mKnockdownRecordPlusLb )
        goto LABEL_641;
      v242 = (UnityEngine_GameObject_o *)Instance;
      v246 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.mKnockdownRecordPlusLb, 0);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(v246, 0);
      v248 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v248 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = LocalPositionX
                                        + (float)v248->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
    }
    else
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0);
      Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_641;
      v242 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      v243 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v243 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v243->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
    }
    GameObjectExtensions__SetLocalPositionX(v242, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0);
    Instance = (__int64)this->fields.mKnockdownRecordSp;
    if ( !Instance )
      goto LABEL_641;
    v395.fields.a = *v359;
    v395.fields.b = *v361;
    v395.fields.r = *v357;
    v395.fields.g = *v360;
    UIWidget__set_color((UIWidget_o *)Instance, v395, 0);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_641;
    v396.fields.a = *v359;
    v396.fields.b = *v361;
    v396.fields.g = *v360;
    v396.fields.r = *v357;
    UIWidget__set_color((UIWidget_o *)Instance, v396, 0);
    Instance = (__int64)this->fields.mKnockdownRecordDamageNameLb;
    if ( !Instance )
      goto LABEL_641;
    v397.fields.a = *v359;
    v397.fields.b = *v361;
    v397.fields.g = *v360;
    v397.fields.r = *v357;
    UIWidget__set_color((UIWidget_o *)Instance, v397, 0);
    Instance = (__int64)this->fields.mKnockdownRecordPlusLb;
    if ( !Instance )
      goto LABEL_641;
    v398.fields.a = *v359;
    v398.fields.b = *v361;
    v398.fields.g = *v360;
    v398.fields.r = *v357;
    UIWidget__set_color((UIWidget_o *)Instance, v398, 0);
    Instance = (__int64)this->fields.mKnockdownRecordCountLb;
    if ( !Instance )
      goto LABEL_641;
    v399.fields.a = *v359;
    v399.fields.b = *v361;
    v399.fields.g = *v360;
    v399.fields.r = *v357;
    UIWidget__set_color((UIWidget_o *)Instance, v399, 0);
  }
  id = v355->fields.id;
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  if ( QuestInformationComponent__IsDisplayQuestInformation(id, 0) )
  {
    Instance = (__int64)this->fields.mQuestInfoBtn;
    if ( !Instance )
      goto LABEL_641;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CB01CE )
    {
      sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
      byte_4CB01CE = 1;
    }
    v250 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v250 = TerminalSceneComponent_TypeInfo;
    }
    v207 = v353;
    Instance = (__int64)v250->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_641;
    if ( TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0) == v355->fields.id )
    {
      Instance = (__int64)this->fields.mQuestInfoShowing;
      if ( !Instance )
        goto LABEL_641;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    }
    Instance = (__int64)this->fields.mQuestInfoBtn;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    v251 = Instance;
    if ( v353 == 2 )
    {
      Instance = QuestEntity__HasFlag(v355, 0x400000000000000LL, 0);
      QuestBoardInformationText_36615168 = (unsigned int)Instance & v351;
    }
    else
    {
      QuestBoardInformationText_36615168 = 1;
    }
    if ( !v251 )
      goto LABEL_641;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v251 + 392LL))(
      v251,
      QuestBoardInformationText_36615168,
      *(_QWORD *)(*(_QWORD *)v251 + 400LL));
  }
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mOptionRestrinctionLb )
    goto LABEL_641;
  UILabel__set_fontSize(
    mOptionRestrinctionLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE,
    0);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_641;
  UILabel__set_overflowMethod((UILabel_o *)Instance, 2, 0);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_641;
  v253 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  GameObjectExtensions__SetLocalScale(v253, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !Instance )
    goto LABEL_641;
  v254 = (UnityEngine_Behaviour_o *)Instance;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v352,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_641;
  Instance = QuestPhaseDetailMaster__TryGetEntity(
               (QuestPhaseDetailMaster_o *)Instance,
               &v365,
               *(_DWORD *)(*(_QWORD *)questTypea + 16LL),
               questPhase,
               0);
  if ( (Instance & 1) == 0 )
    goto LABEL_503;
  if ( !v365 )
    goto LABEL_641;
  if ( !v365->fields.boardMessage )
    goto LABEL_503;
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_641;
  UILabel__set_maxLineCount((UILabel_o *)Instance, 0, 0);
  if ( !v365 )
    goto LABEL_641;
  boardMessage = v365->fields.boardMessage;
  if ( !boardMessage )
    goto LABEL_641;
  list = (System_Collections_Generic_IEnumerable_TSource__o *)boardMessage->fields.list;
  if ( list
    && (Instance = (__int64)System_Linq_Enumerable__ToArray_object_(
                              list,
                              (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0
    && (v258 = *(_QWORD *)(Instance + 24), v259 = Instance, v258) )
  {
    if ( (_DWORD)v258 == 1 )
    {
      v260 = *(_QWORD *)(Instance + 32);
      if ( !v260 )
        goto LABEL_641;
      Instance = *(_QWORD *)(v260 + 16);
      if ( !Instance )
        goto LABEL_641;
      Instance = QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                   (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)Instance,
                   this->fields.mOptionRestrinctionLb,
                   (float)this->fields.restrictionDefaultWidth,
                   0);
      if ( !*(_DWORD *)(v259 + 24) )
        goto LABEL_698;
      v261 = *(_QWORD *)(v259 + 32);
      if ( !v261 )
        goto LABEL_641;
      v262 = Instance;
      Instance = *(_QWORD *)(v261 + 24);
      if ( !Instance )
        goto LABEL_641;
      v263 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
               (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)Instance,
               this->fields.mOptionRestrinctionSp,
               0);
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v254, 1, 0);
      if ( QuestEntity__HasFlag(v355, 0x400000000000000LL, 0) )
      {
        v336 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v336 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v336->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &this->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v254,
        this->fields.mOptionRestrinctionLb,
        this->fields.mOptionRestrinctionSp,
        (QuestPhaseDetailEntity_BoardInfo_array *)v259,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0);
      v263 = 1;
      v262 = 1;
    }
    v264 = (_DWORD)v258 != 1;
  }
  else
  {
LABEL_503:
    v262 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
             this,
             *(_DWORD *)(*(_QWORD *)questTypea + 16LL),
             questPhase,
             v255);
    v264 = 0;
    v263 = 0;
  }
  v267 = QuestEntity__HasFlag(v355, 0x40000000, 0);
  if ( v267 )
  {
    Instance = (__int64)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_641;
    QuestBoardInformationText_36615168 = (__int64)this->fields.mCostConsumeBattleWinSp;
    v268 = *(_QWORD *)(Instance + 16);
    v269 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v268 )
      goto LABEL_641;
    v270 = *(int *)(Instance + 24);
    if ( (unsigned int)v270 >= *(_DWORD *)(v268 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)QuestBoardInformationText_36615168,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
    }
    else
    {
      v271 = v268 + 8 * v270;
      *(_DWORD *)(Instance + 24) = v270 + 1;
      *(_QWORD *)(v271 + 32) = QuestBoardInformationText_36615168;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v271 + 32), QuestBoardInformationText_36615168, v265, v266);
    }
    v272 = QuestEntity__HasFlag(v355, 0x80000000000LL, 0) || QuestEntity__HasFlag(v355, 0x4000, 0);
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    mCostConsumeBattleWinSp = this->fields.mCostConsumeBattleWinSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !mCostConsumeBattleWinSp )
      goto LABEL_641;
    v274 = 1016;
    if ( !v272 )
      v274 = 1008;
    UISprite__set_spriteName(
      mCostConsumeBattleWinSp,
      *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v274),
      0);
  }
  Instance = (__int64)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v267, 0);
  Instance = (__int64)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_641;
  v400.fields.a = *v359;
  v400.fields.b = *v361;
  v400.fields.g = *v360;
  v400.fields.r = *v357;
  UIWidget__set_color((UIWidget_o *)Instance, v400, 0);
  if ( v365 && QuestPhaseDetailEntity__HasFlag(v365, 0x400000, 0) )
  {
    v275 = QuestBoardListViewItemDraw_TypeInfo;
    mOptionPreBattleSp = this->fields.mOptionPreBattleSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v275 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v275->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0);
    Instance = (__int64)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_641;
    QuestBoardInformationText_36615168 = (__int64)this->fields.mOptionPreBattleSp;
    v280 = *(_QWORD *)(Instance + 16);
    v281 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v280 )
      goto LABEL_641;
    v282 = *(int *)(Instance + 24);
    if ( (unsigned int)v282 >= *(_DWORD *)(v280 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)QuestBoardInformationText_36615168,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v281[4] + 192LL) + 112LL));
    }
    else
    {
      v283 = v280 + 8 * v282;
      *(_DWORD *)(Instance + 24) = v282 + 1;
      *(_QWORD *)(v283 + 32) = QuestBoardInformationText_36615168;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v283 + 32), QuestBoardInformationText_36615168, v278, v279);
    }
    v284 = 1;
  }
  else
  {
    v284 = 0;
  }
  Instance = (__int64)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v284, 0);
  Instance = (__int64)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_641;
  LODWORD(v401.fields.g) = dword_CEA4A0[v207 == 2];
  LODWORD(v401.fields.r) = dword_CEB4C0[v207 == 2];
  v401.fields.a = 1.0;
  v401.fields.b = v401.fields.g;
  UIWidget__set_color((UIWidget_o *)Instance, v401, 0);
  mMultiSecondBattleInformation = this->fields.mMultiSecondBattleInformation;
  if ( !mMultiSecondBattleInformation )
    goto LABEL_641;
  if ( mMultiSecondBattleInformation->fields._size >= 2 )
  {
    Instance = (__int64)this->fields.secondBattleInformation;
    if ( !Instance )
      goto LABEL_641;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    Instance = (__int64)this->fields.secondBattleInformation;
    if ( !Instance )
      goto LABEL_641;
    QuestBoardListViewMultiSecondBattleInformation__Init(
      (QuestBoardListViewMultiSecondBattleInformation_o *)Instance,
      this->fields.mMultiSecondBattleInformation,
      0);
  }
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v262 || v263, 0);
  Instance = QuestEntity__HasFlag(v355, 0x400000000000000LL, 0);
  if ( !this->fields.mOptionRestrinctionLb )
    goto LABEL_641;
  v286 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb,
                        0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  v287 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v288 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v288 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v289 = v288->static_fields;
  if ( (v286 & 1) == 0 )
  {
    GameObjectExtensions__SetLocalPosition(v287, v289->RESTRICTION_POS_DEFAULT, 0);
    v294 = this->fields.mOptionRestrinctionLb;
    if ( !v294 )
      goto LABEL_641;
    if ( v294->fields.mWidth <= this->fields.restrictionDefaultWidth )
    {
      mSpacingX = v294->fields.mSpacingX;
      v297 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v297 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QuestBoardInformationText_36615168 = (unsigned int)v297->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == (_DWORD)QuestBoardInformationText_36615168 )
        goto LABEL_570;
      if ( !v297->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v297);
        LODWORD(QuestBoardInformationText_36615168) = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v295 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v295 = QuestBoardListViewItemDraw_TypeInfo;
      }
      LODWORD(QuestBoardInformationText_36615168) = v295->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(this, QuestBoardInformationText_36615168, v293);
LABEL_570:
    if ( v264 )
      goto LABEL_574;
    Instance = (__int64)this->fields.mOptionRestrinctionLb;
    if ( !Instance )
      goto LABEL_641;
    restrictionDefaultWidth = this->fields.restrictionDefaultWidth;
    goto LABEL_573;
  }
  GameObjectExtensions__SetLocalPosition(v287, v289->RESTRICTION_POS_ALLOUT, 0);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_641;
  UILabel__set_fontSize(
    (UILabel_o *)Instance,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SIZE_ALLOUT,
    0);
  QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
    this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT,
    v290);
  if ( !v264 )
  {
    v291 = this->fields.mOptionRestrinctionLb;
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v291 )
      goto LABEL_641;
    Instance = (__int64)v291;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
LABEL_573:
    UILabel__SetCondensedScale((UILabel_o *)Instance, restrictionDefaultWidth, 0, 0);
  }
LABEL_574:
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_641;
  v402.fields.b = *v361;
  v402.fields.r = *v357;
  v402.fields.a = *v359;
  v402.fields.g = *v360;
  UIWidget__set_color((UIWidget_o *)Instance, v402, 0);
  Instance = (__int64)this->fields.mOptionRestrinctionSp;
  if ( !Instance )
    goto LABEL_641;
  this->fields.optionRestrinctionOriginColor = *(struct UnityEngine_Color_o *)(Instance + 148);
  if ( v207 == 2 )
  {
    v403.fields.a = *(float *)(Instance + 160);
    v403.fields.r = *(float *)(Instance + 148) * 0.5;
    v403.fields.g = *(float *)(Instance + 152) * 0.5;
    v403.fields.b = *(float *)(Instance + 156) * 0.5;
    UIWidget__set_color((UIWidget_o *)Instance, v403, 0);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v352,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_641;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &questPhaseEntity, v355->fields.id, questPhase, 0);
  LOBYTE(classIds) = (_BYTE)questPhaseEntity;
  if ( questPhaseEntity )
  {
    classIds = questPhaseEntity->fields.classIds;
    if ( classIds )
      LOBYTE(classIds) = LODWORD(classIds->max_length) != 0;
  }
  v299 = ((unsigned __int8)classIds & v345) == 0;
  if ( !v299 && v353 == 2 )
    v299 = QuestEntity__HasFlag(v355, 2048, 0);
  Instance = (__int64)this->fields.mClassIconRoot;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !v299, 0);
  Instance = (__int64)this->fields.mClassStrSp;
  if ( !Instance )
    goto LABEL_641;
  v404.fields.a = *v359;
  v404.fields.b = *v361;
  v404.fields.g = *v360;
  v404.fields.r = *v357;
  UIWidget__set_color((UIWidget_o *)Instance, v404, 0);
  if ( !v299 )
  {
    Instance = QuestBoardListViewItemDraw__IsUnknownWaveBattleClassIcon(v300, questPhaseEntity, v301);
    if ( (Instance & 1) != 0 )
    {
      mClassIcons = this->fields.mClassIcons;
      if ( !mClassIcons )
        goto LABEL_641;
      if ( LODWORD(mClassIcons->max_length) )
      {
        v316 = mClassIcons->m_Items[0];
        if ( !v316 )
          goto LABEL_641;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mClassIcons->m_Items[0], 0);
        if ( !Instance )
          goto LABEL_641;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        v317 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v317 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        ServantClassIconComponent__Set(v316, v317->static_fields->ENEMY_UNKNOWN_CLASSID, 0, 0);
        v405.fields.r = *v357;
        v405.fields.g = *v360;
        v405.fields.b = *v361;
        v405.fields.a = *v359;
        ServantClassIconComponent__SetColor(v316, v405, 0);
        v318 = this->fields.mClassIcons;
        if ( !v318 )
          goto LABEL_641;
        max_length = v318->max_length;
        if ( max_length <= 1 )
          goto LABEL_587;
        v320 = 1;
        while ( (unsigned int)v320 < LODWORD(v318->max_length) )
        {
          Instance = (__int64)v318->m_Items[v320];
          if ( Instance )
          {
            Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
              if ( max_length == ++v320 )
                goto LABEL_587;
              v318 = this->fields.mClassIcons;
              if ( v318 )
                continue;
            }
          }
          goto LABEL_641;
        }
      }
    }
    else
    {
      if ( !questPhaseEntity )
        goto LABEL_641;
      v321 = this->fields.mClassIcons;
      if ( !v321 )
        goto LABEL_641;
      v322 = v321->max_length;
      v323 = v322 - 1;
      if ( v322 < 1 )
        goto LABEL_587;
      v324 = questPhaseEntity->fields.classIds;
      v325 = 0;
      while ( v325 < LODWORD(v321->max_length) )
      {
        v326 = (int)v325;
        v327 = &v321->obj.klass + (int)v325;
        v328 = (UnityEngine_Component_o *)v327[4];
        if ( !v328 )
          goto LABEL_641;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v327[4], 0);
        if ( !v324 )
          goto LABEL_641;
        if ( !Instance )
          goto LABEL_641;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)Instance,
          (int)v326 < SLODWORD(v324->max_length),
          0);
        Instance = (__int64)UnityEngine_Component__get_gameObject(v328, 0);
        if ( !Instance )
          goto LABEL_641;
        Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( (unsigned int)v326 >= LODWORD(v324->max_length) )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v328, v324->m_Items[v326], 0, 0);
          v406.fields.r = *v357;
          v406.fields.g = *v360;
          v406.fields.b = *v361;
          v406.fields.a = *v359;
          ServantClassIconComponent__SetColor((ServantClassIconComponent_o *)v328, v406, 0);
        }
        if ( v323 == (_DWORD)v326 )
          goto LABEL_587;
        v321 = this->fields.mClassIcons;
        v325 = v326 + 1;
        if ( !v321 )
          goto LABEL_641;
      }
    }
LABEL_698:
    sub_1C6BC68(Instance);
  }
LABEL_587:
  v302 = v355;
  if ( key >= 1 )
  {
    eventTarget = (UnityEngine_Object_o *)this->fields.eventTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(eventTarget, 0, 0) )
    {
      eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0, 0) )
      {
        Instance = (__int64)this->fields.mQuestInfoBtn;
        if ( !Instance )
          goto LABEL_641;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
        {
          Instance = (__int64)this->fields.eventTargetComponent;
          if ( !Instance )
            goto LABEL_641;
          BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)Instance, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !Instance )
            goto LABEL_641;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    (ViewEnemyMaster_o *)Instance,
                                    *(_DWORD *)(*(_QWORD *)questTypea + 16LL),
                                    0);
          if ( EntityListFromQuestId
            && (v306 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                EntityListFromQuestId->max_length) )
          {
            v307 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v307 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            _9__337_1 = (System_Func_object__int__o *)v307->static_fields->__9__337_1;
            if ( !_9__337_1 )
            {
              if ( !v307->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v307);
                v307 = QuestBoardListViewItemDraw___c_TypeInfo;
              }
              v309 = (Il2CppObject *)v307->static_fields->__9;
              _9__337_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_ViewEnemyEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__337_1,
                v309,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__337_1__,
                0);
              v310 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v310->__9__337_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__337_1;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v310->__9__337_1, (int32_t)_9__337_1, v311, v312);
            }
            v313 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                          v306,
                                                                          (System_Func_TSource__TResult__o *)_9__337_1,
                                                                          (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                                  v313,
                                  (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !this->fields.eventTarget )
              goto LABEL_641;
            v314 = (System_Int32_array *)Instance;
            UnityEngine_GameObject__SetActive(this->fields.eventTarget, 1, 0);
            Instance = (__int64)this->fields.eventTargetComponent;
            v302 = v355;
            if ( !Instance )
              goto LABEL_641;
            BoardOptionEventTargetComponent__CreateEnemyList(
              (BoardOptionEventTargetComponent_o *)Instance,
              *(_DWORD *)(*(_QWORD *)questTypea + 16LL),
              v314,
              0);
          }
          else
          {
            Instance = (__int64)this->fields.eventTarget;
            if ( !Instance )
              goto LABEL_641;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          }
        }
      }
    }
  }
  if ( v374 && QuestExtensionEntity__IsQuestBoardFrameChange((QuestExtensionEntity_o *)v374, 0) )
  {
    mBoardFrame = this->fields.mBoardFrame;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    Instance = (__int64)v374;
    if ( !v374 )
      goto LABEL_641;
    QuestBoardFrameNamePrefix = QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardFrameNamePrefix;
    QuestBoardFrameName = QuestExtensionEntity__GetQuestBoardFrameName((QuestExtensionEntity_o *)v374, 0);
    v332 = System_String__Concat_63966792(QuestBoardFrameNamePrefix, QuestBoardFrameName, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(mBoardFrame, v332, 0);
    Instance = (__int64)this->fields.mBoardFrame;
    if ( !Instance )
      goto LABEL_641;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mBoardFrame;
    v302 = v355;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  }
  if ( (v351 & (v353 == 2) & QuestEntity__HasFlag(v302, 0x400000000000000LL, 0)) != 0 )
  {
    alloutRoot = (UnityEngine_Object_o *)this->fields.alloutRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(alloutRoot, 0, 0) )
    {
      alloutRootComponent = (UnityEngine_Object_o *)this->fields.alloutRootComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(alloutRootComponent, 0, 0) )
      {
        if ( !*(_DWORD *)(*(_QWORD *)questTypea + 68LL) )
          goto LABEL_676;
        v335 = *(_DWORD *)(*(_QWORD *)questTypea + 16LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_40554260(v335, -1, 1, 0) )
        {
LABEL_676:
          Instance = (__int64)this->fields.alloutRoot;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
            Instance = (__int64)this->fields.alloutRootComponent;
            if ( Instance )
            {
              BoardOptionAlloutComponent__SetIcon(
                (BoardOptionAlloutComponent_o *)Instance,
                *(_DWORD *)(*(_QWORD *)questTypea + 16LL),
                0);
              return;
            }
          }
          goto LABEL_641;
        }
      }
    }
  }
}


void QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  QuestBoardListViewManager_c *v6; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v8; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v10; // x21
  __int64 naturalAligment; // x9
  int32_t dispType; // w28
  int64_t writeMasterDataThread; // x23
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
  const MethodInfo *v49; // x5
  const MethodInfo *v50; // x1
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  const MethodInfo *v53; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  int32_t v55; // w2
  int64_t *p_expireAt; // x8
  int64_t v57; // x22
  System_Collections_Generic_List_object__o *v58; // x21
  System_String_o *v59; // x24
  QuestBoardInformationText_o *v60; // x23
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  System_Collections_Generic_List_object__o *v67; // x23
  int32_t v68; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v70; // x8
  __int64 v71; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v73; // w9
  int32_t v74; // w8
  bool v75; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v77; // x21
  QuestBoardListViewItemDraw_o *v78; // x0
  const MethodInfo *v79; // x1
  int32_t v80; // [xsp+8h] [xbp-88h] BYREF
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2E98 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardInformationText_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C6BA08(&StringLiteral_25211/*"{0}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2E98 = 1;
  }
  entity = 0;
  *(_QWORD *)fixedVal = 0;
  phasePresentData = 0;
  isNotItemConsume = 0;
  v80 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_150;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_150;
  v8 = Instance;
  Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_150;
  v10 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_150;
  v6 = QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_151;
  }
  if ( !v8 )
    goto LABEL_150;
  dispType = quest_info_k__BackingField->fields.dispType;
  writeMasterDataThread = (int64_t)Instance[3].fields.writeMasterDataThread;
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v10 || !MasterData_object )
    goto LABEL_150;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    v10->fields.id,
    0);
  Instance = (DataManager_o *)this->fields.mLabelObj;
  v15 = dispType == 2 ? 0.5 : 1.0;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mClearCountObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mLabelFaceObj;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v10->fields.bannerId < 1 )
      goto LABEL_62;
    v21 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v21 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v21->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v19 = System_Int32__ToString((int)v10 + 64, 0);
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
    v80 = OverwriteBannerId_k__BackingField;
    v19 = System_Int32__ToString((int32_t)&v80, 0);
    v20 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v23 = System_String__Concat_63966792(v20, v19, 0);
  mcBaseP = this->fields.mcBaseP;
  v25 = v23;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(mcBaseP, v25, 0);
  if ( !mcBaseP )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, (unsigned __int8)Instance & 1, 0);
LABEL_62:
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_150;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.parent)(
    Instance,
    Instance->klass[2]._1.generic_class);
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_150;
  v86.fields.a = 1.0;
  v86.fields.r = v15;
  v86.fields.g = v15;
  v86.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)Instance, v86, 0);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0) )
  {
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_150;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_150;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_150;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    v28 = QuestBoardListViewItemDraw_TypeInfo;
    v29 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v28 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v29, v28->static_fields->NEXT_POS_X_QUEST, 0);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_150;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_150;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_150;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)&Instance->fields.writeMasterDataThread = NEXT_POS_X_QUEST;
    *((float *)&Instance->fields.writeMasterDataThreadEnd + 1) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v26);
  Instance = (DataManager_o *)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  v33 = QuestBoardListViewItemDraw_TypeInfo;
  v34 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v33 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v33->static_fields;
  v36 = 100;
  v37 = 104;
  if ( v34 )
    v36 = 124;
  v38 = 108;
  if ( v34 )
  {
    v37 = 128;
    v38 = 132;
  }
  LODWORD(v85.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v36);
  LODWORD(v85.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v37);
  LODWORD(v85.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v38);
  QuestBoardListViewItemDraw__SetNewIcon(this, v85, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v32);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v40);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v39);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v10, writeMasterDataThread, v42);
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v41);
    Instance = (DataManager_o *)QuestEntity__getQuestName(v10, 0);
    if ( !Instance )
      goto LABEL_150;
    v43 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25211/*"{0}"*/, 0) )
    {
      v44 = DataManager__GetMasterData_object_(
              v8,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (DataManager_o *)QuestEntity__getServantId(v10, 0);
      if ( !v44 )
        goto LABEL_150;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v44,
                                    (int32_t)Instance,
                                    (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_150;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
      v43 = System_String__Format(v43, BattleName, 0);
    }
    Instance = (DataManager_o *)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_150;
    UILabel__set_text((UILabel_o *)Instance, v43, 0);
    Instance = (DataManager_o *)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_150;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mTitleNameLb )
    goto LABEL_150;
  UILabel__SetCondensedScale(
    mTitleNameLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0,
    0);
  Instance = (DataManager_o *)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_150;
  v87.fields.a = 1.0;
  v87.fields.r = v15;
  v87.fields.g = v15;
  v87.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)Instance, v87, 0);
  QuestBoardListViewItemDraw__GetPhasePresentGiftData(
    v47,
    &phasePresentData,
    v10,
    quest_info_k__BackingField->fields.questPhase,
    v48);
  v88.fields.a = 1.0;
  v88.fields.r = v15;
  v88.fields.g = v15;
  v88.fields.b = v15;
  QuestBoardListViewItemDraw__SetupRewardIconAll(
    this,
    quest_info_k__BackingField,
    entity,
    phasePresentData,
    dispType == 2,
    v88,
    v49);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v50);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0);
  mInfoTextList = this->fields.mInfoTextList;
  v55 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetCampaignText(
                                this,
                                quest_info_k__BackingField->fields.questId,
                                v55,
                                0,
                                &fixedVal[1],
                                fixedVal,
                                &isNotItemConsume,
                                v53);
  if ( !mInfoTextList )
    goto LABEL_150;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Instance = (DataManager_o *)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_150;
    Instance = (DataManager_o *)UserQuestEntity__IsExpireNoLimit(entity, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_127;
    if ( !entity )
      goto LABEL_150;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v57 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (DataManager_o *)QuestEntity__HasFlag(v10, 32, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v58 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
      v60 = (QuestBoardInformationText_o *)sub_1C6BC54(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v60, v59, v57, 0, 1, 0, 0);
      if ( !v58 )
        goto LABEL_150;
      items = v58->fields._items;
      v64 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v58->fields._version;
      if ( !items )
        goto LABEL_150;
      size = v58->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v58,
          (Il2CppObject *)v60,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = &items->obj.klass + size;
        v58->fields._size = size + 1;
        v66[4] = (Il2CppClass *)v60;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v60, v61, v62);
      }
    }
  }
LABEL_127:
  v67 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v67 )
    goto LABEL_150;
  v68 = v67->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v68 < 1 )
    goto LABEL_136;
  v70 = this->fields.mListViewObject;
  if ( !v70 )
    goto LABEL_150;
  Instance = (DataManager_o *)v70->fields.manager;
  if ( !Instance )
    goto LABEL_150;
  v71 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)v71
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[v71 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_151:
    sub_1C6BFFC(Instance);
    QuestBoardListViewItemDraw__ResetInfoTextList(v78, v79);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v68, 0);
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                v67,
                                AlphaAnimCnt,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Instance )
    goto LABEL_150;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0);
  Instance = (DataManager_o *)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_150;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0);
  v73 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v74 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v73;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v74;
LABEL_136:
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  v75 = v68 > 0;
  if ( !*p_mOptionInfoLb )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v75, 0);
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v75, 0);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0, 0) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    v77 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v77 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v77,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)&Instance[1].fields._DispLog + 268LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        0);
      return;
    }
LABEL_150:
    sub_1C6BC60(Instance, v6);
  }
}


void QuestBoardListViewItemDraw__SetItemOfShortcut(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  QuestBoardListViewManager_c *v6; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  int32_t info_kind_k__BackingField; // w28
  DataManager_o *v9; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v11; // x21
  __int64 naturalAligment; // x9
  int32_t dispType; // w27
  int64_t writeMasterDataThread; // x23
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
  const MethodInfo *v47; // x5
  const MethodInfo *v48; // x1
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  const MethodInfo *v51; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  int32_t v53; // w2
  int64_t *p_expireAt; // x8
  int64_t v55; // x22
  System_Collections_Generic_List_object__o *v56; // x21
  System_String_o *v57; // x24
  QuestBoardInformationText_o *v58; // x23
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  System_Collections_Generic_List_object__o *v65; // x23
  int32_t v66; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v68; // x8
  __int64 v69; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v71; // w9
  int32_t v72; // w8
  bool v73; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v75; // x21
  QuestBoardListViewItemDraw_o *v76; // x0
  QuestBoardListViewItem_o *v77; // x1
  const MethodInfo *v78; // x2
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2E97 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardInformationText_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C6BA08(&StringLiteral_25211/*"{0}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2E97 = 1;
  }
  entity = 0;
  *(_QWORD *)fixedVal = 0;
  phasePresentData = 0;
  isNotItemConsume = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_152;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_152;
  info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
  v9 = Instance;
  Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_152;
  v11 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_152;
  v6 = QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_153;
  }
  if ( !v9 )
    goto LABEL_152;
  dispType = quest_info_k__BackingField->fields.dispType;
  writeMasterDataThread = (int64_t)Instance[3].fields.writeMasterDataThread;
  MasterData_object = DataManager__GetMasterData_object_(
                        v9,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v11 || !MasterData_object )
    goto LABEL_152;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    v11->fields.id,
    0);
  Instance = (DataManager_o *)this->fields.mLabelObj;
  v16 = dispType == 2 ? 0.5 : 1.0;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mClearCountObj;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_152;
  UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0);
  Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
  mcBaseP = this->fields.mcBaseP;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mcBaseP )
    goto LABEL_152;
  v18 = 1096;
  if ( info_kind_k__BackingField == 2 )
    v18 = 1088;
  UISprite__set_spriteName(
    mcBaseP,
    *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v18),
    0);
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_152;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.parent)(
    Instance,
    Instance->klass[2]._1.generic_class);
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_152;
  v84.fields.a = 1.0;
  v84.fields.r = v16;
  v84.fields.g = v16;
  v84.fields.b = v16;
  UIWidget__set_color((UIWidget_o *)Instance, v84, 0);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0) )
  {
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_152;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_152;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_152;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    v21 = QuestBoardListViewItemDraw_TypeInfo;
    v22 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v21 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v22, v21->static_fields->NEXT_POS_X_QUEST, 0);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_152;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_152;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_152;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)&Instance->fields.writeMasterDataThread = NEXT_POS_X_QUEST;
    *((float *)&Instance->fields.writeMasterDataThreadEnd + 1) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v19);
  Instance = (DataManager_o *)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  v26 = QuestBoardListViewItemDraw_TypeInfo;
  v27 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v26 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v26->static_fields;
  v29 = 100;
  v30 = 104;
  if ( v27 )
    v29 = 124;
  v31 = 108;
  if ( v27 )
  {
    v30 = 128;
    v31 = 132;
  }
  LODWORD(v83.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v29);
  LODWORD(v83.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v30);
  LODWORD(v83.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v31);
  QuestBoardListViewItemDraw__SetNewIcon(this, v83, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v25);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v33);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v32);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v11, writeMasterDataThread, v35);
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v34);
    Instance = (DataManager_o *)QuestEntity__getQuestName(v11, 0);
    if ( !Instance )
      goto LABEL_152;
    v36 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25211/*"{0}"*/, 0) )
    {
      v37 = DataManager__GetMasterData_object_(
              v9,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (DataManager_o *)QuestEntity__getServantId(v11, 0);
      if ( !v37 )
        goto LABEL_152;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v37,
                                    (int32_t)Instance,
                                    (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_152;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
      v36 = System_String__Format(v36, BattleName, 0);
    }
    Instance = (DataManager_o *)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_152;
    UILabel__set_text((UILabel_o *)Instance, v36, 0);
    Instance = (DataManager_o *)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_152;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mTitleNameLb )
    goto LABEL_152;
  UILabel__SetCondensedScale(
    mTitleNameLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0,
    0);
  Instance = (DataManager_o *)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_152;
  v85.fields.a = 1.0;
  v85.fields.r = v16;
  v85.fields.g = v16;
  v85.fields.b = v16;
  UIWidget__set_color((UIWidget_o *)Instance, v85, 0);
  ServantId = QuestEntity__getServantId(v11, 0);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v9,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                ServantId,
                                (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( Instance )
  {
    Instance = (DataManager_o *)ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0, 0);
    if ( !mTitleShortcutLb )
      goto LABEL_152;
    UILabel__set_text(mTitleShortcutLb, (System_String_o *)Instance, 0);
    Instance = (DataManager_o *)this->fields.mTitleShortcutLb;
    if ( !Instance )
      goto LABEL_152;
    v86.fields.a = 1.0;
    v86.fields.r = v16;
    v86.fields.g = v16;
    v86.fields.b = v16;
    UIWidget__set_color((UIWidget_o *)Instance, v86, 0);
  }
  else
  {
    if ( !mTitleShortcutLb )
      goto LABEL_152;
    UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v43 = QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskShortcutSp = this->fields.mLabelFaceMaskShortcutSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v43 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v87.fields.a = 1.0;
  v87.fields.r = v16;
  v87.fields.g = v16;
  v87.fields.b = v16;
  v45 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          v11,
          mLabelFaceMaskShortcutSp,
          v43->static_fields->SHORTCUT_FACE_MASK_SP_W,
          v43->static_fields->SHORTCUT_FACE_MASK_SPNAME,
          v87,
          v42);
  QuestBoardListViewItemDraw__GetPhasePresentGiftData(
    (QuestBoardListViewItemDraw_o *)v45,
    &phasePresentData,
    v11,
    quest_info_k__BackingField->fields.questPhase,
    v46);
  v88.fields.a = 1.0;
  v88.fields.r = v16;
  v88.fields.g = v16;
  v88.fields.b = v16;
  QuestBoardListViewItemDraw__SetupRewardIconAll(
    this,
    quest_info_k__BackingField,
    entity,
    phasePresentData,
    dispType == 2,
    v88,
    v47);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v48);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0);
  mInfoTextList = this->fields.mInfoTextList;
  v53 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetCampaignText(
                                this,
                                quest_info_k__BackingField->fields.questId,
                                v53,
                                0,
                                &fixedVal[1],
                                fixedVal,
                                &isNotItemConsume,
                                v51);
  if ( !mInfoTextList
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)mInfoTextList,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__),
        (Instance = (DataManager_o *)this->fields.mRarePrismSp) == 0)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0 )
  {
LABEL_152:
    sub_1C6BC60(Instance, v6);
  }
  Instance = (DataManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_152;
    Instance = (DataManager_o *)UserQuestEntity__IsExpireNoLimit(entity, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_129;
    if ( !entity )
      goto LABEL_152;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v55 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (DataManager_o *)QuestEntity__HasFlag(v11, 32, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v56 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
      v58 = (QuestBoardInformationText_o *)sub_1C6BC54(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v58, v57, v55, 0, 1, 0, 0);
      if ( !v56 )
        goto LABEL_152;
      items = v56->fields._items;
      v62 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v56->fields._version;
      if ( !items )
        goto LABEL_152;
      size = v56->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v56,
          (Il2CppObject *)v58,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        v56->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v58;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v58, v59, v60);
      }
    }
  }
LABEL_129:
  v65 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v65 )
    goto LABEL_152;
  v66 = v65->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v66 < 1 )
    goto LABEL_138;
  v68 = this->fields.mListViewObject;
  if ( !v68 )
    goto LABEL_152;
  Instance = (DataManager_o *)v68->fields.manager;
  if ( !Instance )
    goto LABEL_152;
  v69 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)v69
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[v69 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_153:
    sub_1C6BFFC(Instance);
    QuestBoardListViewItemDraw__SetItemOfQuest(v76, v77, v78);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v66, 0);
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                v65,
                                AlphaAnimCnt,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Instance )
    goto LABEL_152;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0);
  Instance = (DataManager_o *)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_152;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0);
  v71 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v72 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v71;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v72;
LABEL_138:
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  v73 = v66 > 0;
  if ( !*p_mOptionInfoLb )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v73, 0);
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v73, 0);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0, 0) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    v75 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v75 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v75,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)&Instance[1].fields._DispLog + 268LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        0);
      return;
    }
    goto LABEL_152;
  }
}


void QuestBoardListViewItemDraw__SetItemOfWarBoard(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  DataManager_o *v11; // x23
  QuestEntity_o *PhaseDetailedEntity; // x22
  unsigned int v13; // w26
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x9
  int32_t dispType; // w27
  int64_t v17; // x28
  bool HasFlag; // w0
  float v19; // s0
  bool v20; // w27
  Il2CppObject *MasterData_object; // x23
  int32_t questId; // w23
  bool IsQuestClear_40554260; // w0
  int32_t questPhase; // w23
  bool v25; // w25
  int32_t PhaseMax; // w8
  QuestBoardListViewItemDraw_c *v27; // x0
  UnityEngine_GameObject_o *mCostObj; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  QuestBoardListViewItemDraw_c *v32; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UISprite_o *v36; // x29
  System_String_o *v37; // x24
  UISprite_o *v38; // x24
  System_String_o *QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x29
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  UISprite_o *mcBaseP; // x28
  System_String_o *SHOHI_SP_NAME_WAR_BOARD; // x1
  UISprite_o *mShohiSp; // x28
  UISprite_o *v45; // x28
  __int64 v46; // x8
  unsigned int v47; // w9
  System_String_o *v48; // x24
  System_String_o *v49; // x0
  System_String_o *v50; // x24
  const MethodInfo *v51; // x3
  UnityEngine_GameObject_o *v52; // x0
  QuestBoardListViewItemDraw_c *v53; // x8
  UnityEngine_GameObject_o *v54; // x28
  float NEXT_POS_X_QUEST; // s0
  int32_t v56; // w1
  bool activeSelf; // w0
  const MethodInfo *v58; // x3
  QuestBoardListViewItemDraw_c *v59; // x8
  bool v60; // w28
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float *p_x; // x9
  float *p_y; // x10
  float *p_z; // x11
  const MethodInfo *v65; // x2
  UnityEngine_GameObject_o *v66; // x28
  _BOOL8 v67; // x0
  const MethodInfo *v68; // x5
  QuestBoardListViewItemDraw_c *v69; // x0
  System_String_o *RecommendLv; // x0
  const MethodInfo *v71; // x2
  const MethodInfo *v72; // x2
  QuestBoardListViewItemDraw_o *v73; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x27
  int32_t z_low; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v77; // x5
  bool v78; // w0
  const MethodInfo *v79; // x3
  UILabel_o *mTitleNameLb; // x27
  const MethodInfo *v81; // x4
  QuestBoardListViewItemDraw_o *v82; // x0
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x2
  UISprite_o *mLabelNameSp; // x27
  QuestBoardListViewItemDraw_o *v86; // x0
  const MethodInfo *v87; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v89; // x24
  const MethodInfo *v90; // x3
  UILabel_o *v91; // x24
  QuestBoardListViewItemDraw_o *v92; // x0
  const MethodInfo *v93; // x4
  const MethodInfo *v94; // x5
  const MethodInfo *v95; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x24
  const MethodInfo *v97; // x7
  int64_t *p_expireAt; // x8
  int64_t v99; // x25
  System_Collections_Generic_List_object__o *v100; // x24
  System_String_o *v101; // x27
  QuestBoardInformationText_o *v102; // x26
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *items; // x8
  _QWORD *v106; // x9
  __int64 size; // x10
  Il2CppClass **v108; // x0
  System_Collections_Generic_List_object__o *v109; // x26
  int32_t v110; // w25
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *v112; // x8
  __int64 v113; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v115; // w9
  int32_t v116; // w8
  bool v117; // w25
  WarBoardQuestEntity_o *v118; // x0
  WarBoardQuestEntity_o *v119; // x21
  UILabel_o *mBoardMessage; // x21
  __int64 v121; // x8
  const MethodInfo *v122; // [xsp+10h] [xbp-B0h]
  int64_t checkTime; // [xsp+20h] [xbp-A0h]
  int32_t phase; // [xsp+2Ch] [xbp-94h]
  int32_t v125; // [xsp+30h] [xbp-90h]
  bool isNotItemConsume; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t fixedVal[2]; // [xsp+38h] [xbp-88h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+40h] [xbp-80h] BYREF
  bool isTripleItemConsume; // [xsp+4Ch] [xbp-74h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+50h] [xbp-70h] BYREF
  bool isDoubleItemConsume; // [xsp+54h] [xbp-6Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2E9D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_WarBoardQuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_1C6BA08(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&QuestBoardInformationText_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass338_0__SetItemOfWarBoard_b__0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass338_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2E9D = 1;
  }
  entity = 0;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  *(_QWORD *)fixedVal = 0;
  phasePresentData = 0;
  isNotItemConsume = 0;
  v5 = sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass338_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass338_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass338_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_205;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_205;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_205;
  v11 = (DataManager_o *)Instance;
  Instance = MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0);
  if ( !Instance )
    goto LABEL_205;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0);
  Instance = (void *)MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0);
  if ( !v11 )
    goto LABEL_205;
  v13 = (unsigned int)Instance;
  Instance = DataManager__GetMasterData_object_(
               v11,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_205;
  if ( !Instance )
    goto LABEL_205;
  Instance = (void *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_205;
  Instance = mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_205;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_206:
    sub_1C6BFFC(Instance);
    goto LABEL_207;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  v17 = *((_QWORD *)Instance + 73);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2, 0);
  v19 = 1.0;
  if ( dispType == 2 )
    v19 = 0.5;
  *(float *)(v5 + 24) = v19;
  *(float *)(v5 + 28) = v19;
  *(float *)(v5 + 32) = v19;
  *(_DWORD *)(v5 + 36) = 1065353216;
  v125 = dispType;
  v20 = HasFlag;
  MasterData_object = DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_205;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
    PhaseDetailedEntity->fields.id,
    0);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  questId = quest_info_k__BackingField->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_40554260 = CondType__IsQuestClear_40554260(questId, -1, 0, 0);
  questPhase = quest_info_k__BackingField->fields.questPhase;
  v25 = IsQuestClear_40554260;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0);
  Instance = this->fields.mLabelObj;
  if ( questPhase + 1 < PhaseMax )
    PhaseMax = questPhase + 1;
  phase = PhaseMax;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mClearCountObj;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  checkTime = v17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  v27 = QuestBoardListViewItemDraw_TypeInfo;
  mCostObj = this->fields.mCostObj;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v27 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(mCostObj, v27->static_fields->COST_OBJ_POS_WAR_BOARD, 0);
  Instance = this->fields.mCostApSp;
  if ( !Instance )
    goto LABEL_205;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS_WAR_BOARD,
    0);
  Instance = this->fields.mCostLb1;
  if ( !Instance )
    goto LABEL_205;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPosition(
    v30,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS_WAR_BOARD,
    0);
  Instance = this->fields.mShohiSp;
  if ( !Instance )
    goto LABEL_205;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPosition(
    v31,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS_WAR_BOARD,
    0);
  if ( PhaseDetailedEntity->fields.bannerId < 1 )
  {
    Instance = QuestBoardListViewItemDraw_TypeInfo;
    mShohiSp = this->fields.mShohiSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !mShohiSp )
      goto LABEL_205;
    UISprite__set_spriteName(mShohiSp, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD, 0);
    if ( v13 > 7 || ((1 << v13) & 0xA6) == 0 )
    {
      Instance = this->fields.mcBaseP;
      if ( !Instance )
        goto LABEL_205;
      UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0);
      Instance = QuestBoardListViewItemDraw_TypeInfo;
      mcBaseP = this->fields.mcBaseP;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = QuestBoardListViewItemDraw_TypeInfo;
      }
      v121 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 1104LL);
      if ( !v121 )
        goto LABEL_205;
      if ( v13 >= *(_DWORD *)(v121 + 24) )
LABEL_207:
        sub_1C6BC68(Instance);
      if ( !mcBaseP )
        goto LABEL_205;
      SHOHI_SP_NAME_WAR_BOARD = *(System_String_o **)(v121 + 8LL * (int)v13 + 32);
      goto LABEL_71;
    }
    Instance = QuestBoardListViewItemDraw_TypeInfo;
    v45 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = QuestBoardListViewItemDraw_TypeInfo;
    }
    v46 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 1104LL);
    if ( !v46 )
      goto LABEL_205;
    v47 = *(_DWORD *)(v46 + 24);
    if ( v13 == 7 )
    {
      if ( v47 <= 1 )
        goto LABEL_207;
      v48 = *(System_String_o **)(v46 + 40);
    }
    else
    {
      if ( v13 >= v47 )
        goto LABEL_207;
      v48 = *(System_String_o **)(v46 + 8LL * v13 + 32);
    }
    v49 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0);
    v50 = System_String__Concat_63966792(v48, v49, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v45, v50, 0);
  }
  else
  {
    v32 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v32 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v32->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v34 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0);
    v35 = System_String__Concat_63966792(QUEST_BOARD_SPNAME_PREFIX, v34, 0);
    v36 = this->fields.mcBaseP;
    v37 = v35;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (void *)AtlasManager__SetEventUI(v36, v37, 0);
    if ( !v36 )
      goto LABEL_205;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v36, (unsigned __int8)Instance & 1, 0);
    v38 = this->fields.mShohiSp;
    QUEST_BOARD_SHOHI_SPNAME_PREFIX = QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
    v40 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0);
    v41 = System_String__Concat_63966792(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v40, 0);
    if ( !AtlasManager__SetEventUI(v38, v41, 0) )
    {
      Instance = QuestBoardListViewItemDraw_TypeInfo;
      mcBaseP = this->fields.mShohiSp;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !mcBaseP )
        goto LABEL_205;
      SHOHI_SP_NAME_WAR_BOARD = QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
LABEL_71:
      UISprite__set_spriteName(mcBaseP, SHOHI_SP_NAME_WAR_BOARD, 0);
    }
  }
  Instance = this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_205;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)Instance,
               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_205;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0) )
  {
    Instance = this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_205;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_205;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_205;
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    v53 = QuestBoardListViewItemDraw_TypeInfo;
    v54 = v52;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v53 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v54, v53->static_fields->NEXT_POS_X_QUEST, 0);
    Instance = this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_205;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_205;
    Instance = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)Instance,
                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_205;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *((float *)Instance + 32) = NEXT_POS_X_QUEST;
    *((float *)Instance + 35) = NEXT_POS_X_QUEST;
  }
  if ( v125 != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v56 = 1;
    }
    else
    {
      if ( !v25 )
        goto LABEL_108;
      v56 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v56, 1, v51);
  }
LABEL_108:
  Instance = this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  v59 = QuestBoardListViewItemDraw_TypeInfo;
  v60 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v59 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v59->static_fields;
  p_x = &static_fields->NEW_POS_QUEST_NEXT.fields.x;
  p_y = &static_fields->NEW_POS_QUEST_NEXT.fields.y;
  p_z = &static_fields->NEW_POS_QUEST_NEXT.fields.z;
  if ( !v60 )
  {
    p_x = &static_fields->NEW_POS_QUEST.fields.x;
    p_y = &static_fields->NEW_POS_QUEST.fields.y;
    p_z = &static_fields->NEW_POS_QUEST.fields.z;
  }
  v133.fields.z = *p_z;
  v133.fields.y = *p_y;
  v133.fields.x = *p_x;
  QuestBoardListViewItemDraw__SetNewIcon(this, v133, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v58);
  Instance = QuestBoardListViewItemDraw__GetStatusSp(this, 2, v65);
  if ( !Instance )
    goto LABEL_205;
  v66 = (UnityEngine_GameObject_o *)Instance;
  v67 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( v67 )
  {
    v69 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v69 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v66, v69->static_fields->CLEAR_POS_QUEST, 0);
  }
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  (QuestBoardListViewItemDraw_o *)v67,
                  PhaseDetailedEntity,
                  phase,
                  !v20,
                  v125 == 2,
                  v68);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v5 + 24), v71);
  v73 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v73 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  z_low = LODWORD(v73->fields.mPrevSp[1].fields.mOldV1.fields.z);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v73, v13, v72);
  v78 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          z_low,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v5 + 24),
          v77);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v78 )
  {
    Instance = QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v13, v79);
    if ( !mTitleNameLb )
      goto LABEL_205;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0);
    goto LABEL_142;
  }
  Instance = QuestEntity__getQuestName(PhaseDetailedEntity, 0);
  if ( !mTitleNameLb )
    goto LABEL_205;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0);
  if ( v13 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v82, quest_info_k__BackingField->fields.warId, v83) )
  {
    Instance = this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_205;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_205;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_205;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v86, PhaseDetailedEntity, v13, v87);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (void *)AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0);
    if ( !mLabelNameSp )
      goto LABEL_205;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, (unsigned __int8)Instance & 1, 0);
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_205;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_205;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_205;
    Instance = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)Instance,
                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_205;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0);
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_205;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v89 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v89,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass338_0__SetItemOfWarBoard_b__0__,
        0);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v89, v90);
    }
LABEL_142:
    if ( v125 == 2 )
      goto LABEL_143;
    goto LABEL_144;
  }
  if ( v125 == 2 )
  {
LABEL_143:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v81);
    goto LABEL_146;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v84);
LABEL_144:
  Instance = this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_205;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_146:
  Instance = QuestBoardListViewItemDraw_TypeInfo;
  v91 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v91 )
    goto LABEL_205;
  UILabel__SetCondensedScale(v91, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0, 0);
  Instance = this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_205;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0);
  QuestBoardListViewItemDraw__GetPhasePresentGiftData(
    v92,
    &phasePresentData,
    PhaseDetailedEntity,
    quest_info_k__BackingField->fields.questPhase,
    v93);
  QuestBoardListViewItemDraw__SetupRewardIconAll(
    this,
    quest_info_k__BackingField,
    entity,
    phasePresentData,
    v125 == 2,
    *(UnityEngine_Color_o *)(v5 + 24),
    v94);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v95);
  isNotItemConsume = 0;
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = QuestBoardListViewItemDraw__GetCampaignText(
               this,
               PhaseDetailedEntity->fields.id,
               phase,
               !v25,
               &fixedVal[1],
               fixedVal,
               &isNotItemConsume,
               v97);
  if ( !mInfoTextList )
    goto LABEL_205;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Instance = this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  Instance = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_205;
    Instance = (void *)UserQuestEntity__IsExpireNoLimit(entity, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_168;
    if ( !entity )
      goto LABEL_205;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v99 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (void *)QuestEntity__HasFlag(PhaseDetailedEntity, 32, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v100 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
      v102 = (QuestBoardInformationText_o *)sub_1C6BC54(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v102, v101, v99, 0, 1, 0, 0);
      if ( !v100 )
        goto LABEL_205;
      items = v100->fields._items;
      v106 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v100->fields._version;
      if ( !items )
        goto LABEL_205;
      size = v100->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v100,
          (Il2CppObject *)v102,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
      }
      else
      {
        v108 = &items->obj.klass + size;
        v100->fields._size = size + 1;
        v108[4] = (Il2CppClass *)v102;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v102, v103, v104);
      }
    }
  }
LABEL_168:
  v109 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v109 )
    goto LABEL_205;
  v110 = v109->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v110 < 1 )
    goto LABEL_177;
  v112 = this->fields.mListViewObject;
  if ( !v112 )
    goto LABEL_205;
  Instance = v112->fields.manager;
  if ( !Instance )
    goto LABEL_205;
  v113 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v113
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v113 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_206;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v110, 0);
  Instance = System_Collections_Generic_List_object___get_Item(
               v109,
               AlphaAnimCnt,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Instance )
    goto LABEL_205;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0);
  Instance = this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_205;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0);
  v115 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v116 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v115;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v116;
LABEL_177:
  Instance = *p_mOptionInfoLb;
  v117 = v110 > 0;
  if ( !*p_mOptionInfoLb )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v117, 0);
  Instance = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v117, 0);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v125 == 2,
    fixedVal[1],
    fixedVal[0],
    isNotItemConsume,
    *(UnityEngine_Color_o *)(v5 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    0,
    v122);
  Instance = this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_205;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_205;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !Instance )
    goto LABEL_205;
  v118 = WarBoardQuestMaster__GetEntity(
           (WarBoardQuestMaster_o *)Instance,
           quest_info_k__BackingField->fields.questId,
           phase,
           0);
  if ( !v118 )
    return;
  v119 = v118;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_205;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !Instance )
    goto LABEL_205;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v119->fields.stageId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( Instance )
  {
    if ( !this->fields.mBoardMessage )
      goto LABEL_205;
    UILabel__set_text(this->fields.mBoardMessage, *((System_String_o **)Instance + 6), 0);
  }
  Instance = QuestBoardListViewItemDraw_TypeInfo;
  mBoardMessage = this->fields.mBoardMessage;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mBoardMessage
    || (UILabel__SetCondensedScale(
          mBoardMessage,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->BOARD_MESSAGE_MAX_WITDH,
          0,
          0),
        (Instance = this->fields.mBoardMessage) == 0) )
  {
LABEL_205:
    sub_1C6BC60(Instance, v7);
  }
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0);
}


void QuestBoardListViewItemDraw__SetListViewObject(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewObject_o *questBoardObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mListViewObject = questBoardObject;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mListViewObject, (int32_t)questBoardObject, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__SetNewIcon(
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
  if ( (byte_4CB2EAD & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2EAD = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, *(const MethodInfo **)&h);
  if ( !StatusSp )
    goto LABEL_20;
  StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(StatusSp, 0);
  if ( !this->fields.mNewIcon )
    goto LABEL_20;
  if ( ((unsigned __int8)StatusSp & 1) != 0 )
  {
    ShiningIconComponent__Set(this->fields.mNewIcon, 0);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0);
    v16.fields.x = x;
    v16.fields.y = y;
    v16.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v16, 0);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_20;
    StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0);
    if ( !StatusSp )
      goto LABEL_20;
    StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             StatusSp,
                                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !StatusSp )
      goto LABEL_20;
    v14 = (UIWidget_o *)StatusSp;
    UIWidget__set_width((UIWidget_o *)StatusSp, w, 0);
    UIWidget__set_height(v14, h, 0);
  }
  else
  {
    ShiningIconComponent__Clear(this->fields.mNewIcon, 0);
  }
  StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
  if ( !StatusSp )
    goto LABEL_20;
  StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0);
  if ( !StatusSp )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       StatusSp,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  StatusSp = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)StatusSp & 1) != 0 )
  {
    if ( Component_object )
    {
      TimeSyncAlphaSwitcher__Clear((TimeSyncAlphaSwitcher_o *)Component_object, 0);
      return;
    }
LABEL_20:
    sub_1C6BC60(StatusSp, v12);
  }
}


void QuestBoardListViewItemDraw__SetNextSprite(
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

  if ( (byte_4CB2EB0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EB0 = 1;
  }
  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp )
    goto LABEL_36;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0);
  if ( !info || !mNextSp )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNextSp, info->fields.isNext, 0);
  if ( !info->fields.isNext )
    return;
  if ( warEnt && WarEntity__IsWarIconFree(warEnt, 0) )
  {
    mNextSp = (UnityEngine_Component_o *)QuestBoardListViewItemDraw_TypeInfo;
    v8 = this->fields.mNextSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v8 )
      goto LABEL_36;
    v9 = 200;
  }
  else
  {
    mNextSp = (UnityEngine_Component_o *)QuestBoardListViewItemDraw_TypeInfo;
    v8 = this->fields.mNextSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v8 )
      goto LABEL_36;
    v9 = 192;
  }
  UISprite__set_spriteName(
    v8,
    *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v9),
    0);
  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp )
    goto LABEL_36;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0);
  if ( !mNextSp )
    goto LABEL_36;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)mNextSp,
                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  v10 = mNextSp;
  if ( !warEnt )
    goto LABEL_30;
  mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 0x400000, 0);
  if ( ((unsigned __int8)mNextSp & 1) == 0 )
  {
    mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 256, 0);
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
        v12 = 176;
        goto LABEL_34;
      }
LABEL_36:
      sub_1C6BC60(mNextSp, info);
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
      v12 = 180;
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
  v12 = 184;
LABEL_34:
  v13 = *(int32_t *)((char *)&v11->static_fields->POS_Y_ITVL_AREA + v12);
  LODWORD(v10[5].monitor) = v13;
  HIDWORD(v10[5].fields.m_CachedPtr) = v13;
}


void QuestBoardListViewItemDraw__SetPickupIcon(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *StatusSp; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4CB2EAE & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2EAE = 1;
  }
  StatusSp = (UnityEngine_Object_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(StatusSp, 0, 0);
  if ( !v5 )
  {
    if ( StatusSp )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)StatusSp,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v5 )
        return;
      if ( Component_object )
      {
        TimeSyncAlphaSwitcher__Clear((TimeSyncAlphaSwitcher_o *)Component_object, 0);
        return;
      }
    }
    sub_1C6BC60(v5, v6);
  }
}


void QuestBoardListViewItemDraw__SetPrevSprite(
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
  if ( (byte_4CB2EB1 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2EB1 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !questEnt )
    goto LABEL_43;
  v14 = (QuestGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, questEnt->fields.id, 16, 0);
  if ( (_DWORD)Instance )
  {
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(v14, (int32_t)Instance, 16, 0);
    if ( !Instance )
      goto LABEL_43;
    if ( Instance->fields.m_CancellationTokenSource )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ToList_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                    (const MethodInfo_317FC78 *)Method_System_Linq_Enumerable_ToList_int___);
      v11 = (System_Collections_Generic_List_int__o *)Instance;
    }
  }
  if ( !v11 )
LABEL_43:
    sub_1C6BC60(Instance, id);
  size = v11->fields._size;
  if ( (int)size <= 0 )
  {
    id = (unsigned int)questEnt->fields.id;
    items = v11->fields._items;
    v22 = Method_System_Collections_Generic_List_int__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_43;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v11,
        id,
        *(const MethodInfo_37E3950 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      if ( isInterruptedQuest )
        goto LABEL_13;
    }
    else
    {
      v11->fields._size = size + 1;
      items->m_Items[size] = id;
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
  if ( !byte_4CB2EE3 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2EE3 = 1;
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
         (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 1, v24);
    if ( !Instance )
      goto LABEL_43;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
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
      AtlasManager__SetBanner(mPrevSp, QUEST_BOARD_PREV_PAUSE_ICON_NAME, 0);
      Instance = (DataManager_o *)this->fields.mPrevSp;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          Instance = (DataManager_o *)this->fields.mPrevSp;
          if ( Instance )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            v26.fields.x = x;
            v26.fields.y = y;
            v26.fields.z = z;
            GameObjectExtensions__SetLocalPosition(gameObject, v26, 0);
            Instance = (DataManager_o *)this->fields.mPrevSp;
            if ( Instance )
            {
              ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.parent)(
                Instance,
                Instance->klass[2]._1.generic_class);
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
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


void QuestBoardListViewItemDraw__SetRecommendLv(
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
  float monitor_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_4CB2EDA & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2EDA = 1;
  }
  mTitleLevelRoot = this->fields.mTitleLevelRoot;
  IsNullOrEmpty = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(recommendLv, 0);
  if ( !mTitleLevelRoot )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(mTitleLevelRoot, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0);
  IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelRoot;
  if ( !IsNullOrEmpty )
    goto LABEL_37;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)IsNullOrEmpty, 0) )
  {
    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
    if ( !IsNullOrEmpty )
      goto LABEL_37;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         IsNullOrEmpty,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_37;
      CondensedScaleSprite__Init((CondensedScaleSprite_o *)Component_object, 0);
    }
    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelLb;
    if ( IsNullOrEmpty )
    {
      UILabel__set_text((UILabel_o *)IsNullOrEmpty, recommendLv, 0);
      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelLb;
      if ( IsNullOrEmpty )
      {
        v23.fields.r = r;
        v23.fields.g = g;
        v23.fields.b = b;
        v23.fields.a = a;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v23, 0);
        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
        if ( IsNullOrEmpty )
        {
          v24.fields.r = r;
          v24.fields.g = g;
          v24.fields.b = b;
          v24.fields.a = a;
          UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v24, 0);
          IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp;
          if ( IsNullOrEmpty )
          {
            v25.fields.r = r;
            v25.fields.g = g;
            v25.fields.b = b;
            v25.fields.a = a;
            UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v25, 0);
            IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
            if ( IsNullOrEmpty )
            {
              IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0);
              if ( this->fields.mTitleLevelStrSp )
              {
                v14 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
                IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp,
                                                             0);
                if ( IsNullOrEmpty )
                {
                  LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)IsNullOrEmpty,
                                                 0);
                  GameObjectExtensions__SetLocalPositionX(v14, v15, 0);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0,
                                                               0);
                  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                  {
                    if ( Component_object )
                    {
                      v16 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v17 = (float)(SLODWORD(IsNullOrEmpty[7].klass) / 2) + (float)(v16 * -0.5);
LABEL_36:
                        gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0);
                        GameObjectExtensions__AddLocalPositionX(gameObject, v17, 0);
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
                                                                   (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      mTitleLevelLb = this->fields.mTitleLevelLb;
                      if ( mTitleLevelLb )
                      {
                        v19 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = mTitleLevelLb->fields.mWidth;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        monitor_low = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v19, 0, 0);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v19 )
                            goto LABEL_37;
                          if ( monitor_low > (float)SLODWORD(v19[2].monitor) )
                            monitor_low = (float)SLODWORD(v19[2].monitor);
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v17 = monitor_low * -0.5;
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
    sub_1C6BC60(IsNullOrEmpty, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
bool QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mOptionRestrinctionSp; // x0
  UILabel_o *mOptionRestrinctionLb; // x22
  struct UILabel_o *v9; // x8
  RestrictionBaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB2E9F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2E9F = 1;
  }
  entity = 0;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionSp;
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mOptionRestrinctionSp, 0);
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionRestrinctionSp, 0, 0);
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  UILabel__set_maxLineCount((UILabel_o *)mOptionRestrinctionSp, 1, 0);
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)mOptionRestrinctionSp, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !mOptionRestrinctionSp )
    goto LABEL_17;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)RestrictionBaseMaster__TryGetEntity(
                                                       (RestrictionBaseMaster_o *)mOptionRestrinctionSp,
                                                       &entity,
                                                       questId,
                                                       phase,
                                                       0);
  if ( ((unsigned __int8)mOptionRestrinctionSp & 1) != 0 )
    goto LABEL_15;
  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mOptionRestrinctionSp
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)mOptionRestrinctionSp,
                                                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)QuestRestrictionMaster__GetRestrictionName(
                                                             (QuestRestrictionMaster_o *)mOptionRestrinctionSp,
                                                             questId,
                                                             phase,
                                                             0),
        !mOptionRestrinctionLb) )
  {
LABEL_17:
    sub_1C6BC60(mOptionRestrinctionSp, *(_QWORD *)&questId);
  }
  UILabel__set_text(mOptionRestrinctionLb, (System_String_o *)mOptionRestrinctionSp, 0);
LABEL_15:
  v9 = this->fields.mOptionRestrinctionLb;
  if ( !v9 )
    goto LABEL_17;
  return !System_String__IsNullOrEmpty(v9->fields.mText, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
        QuestBoardListViewItemDraw_o *this,
        int32_t spacingX,
        const MethodInfo *method)
{
  UILabel_o *mOptionRestrinctionLb; // x0

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionLb
    || (UILabel__set_spacingX(mOptionRestrinctionLb, spacingX, 0),
        (mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb) == 0) )
  {
    sub_1C6BC60(mOptionRestrinctionLb, *(_QWORD *)&spacingX);
  }
  UILabel__ProcessText(mOptionRestrinctionLb, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__SetRewardIconAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  long double v3; // q8
  struct System_Collections_Generic_List_RewardIconInfo__o *rewardIconInfoList; // x8
  ItemIconComponent_o *mRewardIcon; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  v3 = *(long double *)&alpha;
  if ( (byte_4CB2EC7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIWidget__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIWidget__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIWidget__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__GetEnumerator__);
    byte_4CB2EC7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( (byte_4CB2EC9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    byte_4CB2EC9 = 1;
  }
  rewardIconInfoList = this->fields.rewardIconInfoList;
  if ( rewardIconInfoList && rewardIconInfoList->fields._size >= 2 )
  {
    mRewardIcon = this->fields.mRewardIcon;
    if ( !mRewardIcon
      || (ItemIconComponent__SetAlpha(mRewardIcon, *(float *)&v3, 0),
          (mRewardIcon = (ItemIconComponent_o *)this->fields.rewardIconAlphaSyncWidgetList) == 0) )
    {
      sub_1C6BC60(mRewardIcon, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)mRewardIcon,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIWidget__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIWidget__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1C6BC60(0, v7);
      ((void (__fastcall *)(long double))v8.fields._current->klass->vtable[8].methodPtr)(v3);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIWidget__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__SetStatusActive(
        QuestBoardListViewItemDraw_o *this,
        int32_t status,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *StatusSp; // x0
  __int64 v6; // x1

  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, status, (const MethodInfo *)isActive);
  if ( !StatusSp || (StatusSp = UnityEngine_GameObject__get_gameObject(StatusSp, 0)) == 0 )
    sub_1C6BC60(StatusSp, v6);
  UnityEngine_GameObject__SetActive(StatusSp, isActive, 0);
}


void QuestBoardListViewItemDraw__SetStatusToggle(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *StatusSp; // x0
  QuestBoardListViewManager_c *v5; // x1
  Il2CppObject *Component_object; // x19
  const MethodInfo *v7; // x2
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  TimeSyncAlphaSwitcher_o *v9; // x20
  __int64 naturalAligment; // x9
  float v11; // s8
  QuestBoardListViewItemDraw_o *v12; // x0
  MapControl_QuestInfo_o *v13; // x1
  QuestEntity_o *v14; // x2
  int64_t v15; // x3
  const MethodInfo *v16; // x4

  if ( (byte_4CB2EB2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    byte_4CB2EB2 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)StatusSp,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v7);
  if ( !StatusSp )
    goto LABEL_12;
  StatusSp = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)StatusSp,
               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_12;
  v9 = (TimeSyncAlphaSwitcher_o *)StatusSp;
  StatusSp = mListViewObject->fields.manager;
  if ( !StatusSp )
    goto LABEL_12;
  v5 = QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)StatusSp + 304LL) >= (unsigned int)naturalAligment
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)StatusSp + 200LL) + 8 * naturalAligment - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( Component_object )
    {
      v11 = *((float *)StatusSp + 148);
      TimeSyncAlphaSwitcher__SetAlphaBlink((TimeSyncAlphaSwitcher_o *)Component_object, 2, 0, v11, 0);
      if ( v9 )
      {
        TimeSyncAlphaSwitcher__SetAlphaBlink(v9, 2, 1, v11, 0);
        return;
      }
    }
LABEL_12:
    sub_1C6BC60(StatusSp, v5);
  }
  sub_1C6BFFC(StatusSp);
  QuestBoardListViewItemDraw__SetAdvanceNoticeText(v12, v13, v14, v15, v16);
}


void QuestBoardListViewItemDraw__SetupBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestBoardListViewItemDraw_o *v5; // x19
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x24
  struct BannerEntity_array *bannerEntList; // x20
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  int32_t max_length; // w8
  BannerEntity_array *v11; // x1
  int32_t v12; // w2
  _BOOL8 HasExchangeSvtCoinBannerEntity; // x0
  const MethodInfo *v14; // x2
  BannerEntity_o *ExchangeSvtCoinBannerEntity; // x0
  int32_t mBannerCount; // w22
  BannerEntity_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  struct TerminalBannerComponent_array *v21; // x8
  __int64 v22; // x21
  int v23; // w26
  unsigned int v24; // w9
  UnityEngine_Component_o *v25; // x22
  unsigned int v26; // w10
  TerminalBannerComponent_o *v27; // x23
  struct TerminalBannerComponent_array *v28; // x8
  const MethodInfo *v29; // x1
  int v30; // w20
  const MethodInfo *v31; // x2
  struct UISprite_array *mBannerPointSps; // x8
  int v33; // w9
  int v34; // w20
  int32_t v35; // w21
  __int64 v36; // x0

  v5 = this;
  if ( (byte_4CB2ECE & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2ECE = 1;
  }
  if ( !questBoardItem )
    goto LABEL_60;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_60;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_60;
  bannerEntList = AreaBoardInfo_k__BackingField->fields.bannerEntList;
  if ( !bannerEntList )
    goto LABEL_60;
  mTerminalBanners = v5->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_60;
  max_length = mTerminalBanners->max_length;
  v11 = AreaBoardInfo_k__BackingField->fields.bannerEntList;
  if ( SLODWORD(bannerEntList->max_length) >= max_length )
    v12 = max_length;
  else
    v12 = bannerEntList->max_length;
  v5->fields.mBannerCount = v12;
  HasExchangeSvtCoinBannerEntity = QuestBoardListViewItemDraw__HasExchangeSvtCoinBannerEntity(this, v11, v12, v3);
  if ( !HasExchangeSvtCoinBannerEntity )
  {
    ExchangeSvtCoinBannerEntity = QuestBoardListViewItemDraw__FindExchangeSvtCoinBannerEntity(
                                    (QuestBoardListViewItemDraw_o *)HasExchangeSvtCoinBannerEntity,
                                    bannerEntList,
                                    v14);
    if ( ExchangeSvtCoinBannerEntity )
    {
      mBannerCount = v5->fields.mBannerCount;
      v17 = ExchangeSvtCoinBannerEntity;
      this = (QuestBoardListViewItemDraw_o *)sub_1C6BB44(
                                               ExchangeSvtCoinBannerEntity,
                                               bannerEntList->obj.klass->_1.element_class);
      if ( !this )
      {
        v36 = sub_1C6BC84();
        sub_1C6BB30(v36, 0);
      }
      if ( (unsigned int)(mBannerCount - 1) >= LODWORD(bannerEntList->max_length) )
        goto LABEL_64;
      v20 = (__int64)bannerEntList + 8 * mBannerCount - 8;
      *(_QWORD *)(v20 + 32) = v17;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v17, v18, v19);
    }
  }
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mBannerRoot;
  if ( !this )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v21 = v5->fields.mTerminalBanners;
  if ( !v21 )
    goto LABEL_60;
  v22 = 0;
  v23 = v21->max_length & ~(SLODWORD(v21->max_length) >> 31);
  while ( v23 != (_DWORD)v22 )
  {
    v24 = v21->max_length;
    if ( (unsigned int)v22 >= v24 )
      goto LABEL_64;
    v25 = (UnityEngine_Component_o *)v21->m_Items[v22];
    v26 = v22 + 1;
    if ( (int)v22 + 1 >= v5->fields.mBannerCount )
    {
      v27 = 0;
    }
    else
    {
      if ( v26 >= v24 )
        goto LABEL_64;
      v27 = v21->m_Items[v26];
    }
    if ( v25 )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v25, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v22 < v5->fields.mBannerCount, 0);
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v25, 0);
        if ( this )
        {
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__get_activeSelf(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( (unsigned int)v22 >= LODWORD(bannerEntList->max_length) )
              goto LABEL_64;
            TerminalBannerComponent__Setup(
              (TerminalBannerComponent_o *)v25,
              v22,
              bannerEntList->m_Items[v22],
              v5->fields.mBannerCount,
              v27,
              0);
          }
          v21 = v5->fields.mTerminalBanners;
          ++v22;
          if ( v21 )
            continue;
        }
      }
    }
    goto LABEL_60;
  }
  if ( !LODWORD(v21->max_length) )
LABEL_64:
    sub_1C6BC68(this);
  this = (QuestBoardListViewItemDraw_o *)v21->m_Items[0];
  if ( !this )
    goto LABEL_60;
  TerminalBannerComponent__StartLoadAndDisp((TerminalBannerComponent_o *)this, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2EE4 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2EE4 = 1;
  }
  this = (QuestBoardListViewItemDraw_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE1(this->fields.mPrevSp->fields.mWidth) )
  {
    v28 = v5->fields.mTerminalBanners;
    if ( !v28 )
      goto LABEL_60;
    if ( !LODWORD(v28->max_length) )
      goto LABEL_64;
    this = (QuestBoardListViewItemDraw_o *)v28->m_Items[0];
    if ( !this )
      goto LABEL_60;
    TerminalBannerComponent__SetBannerTextureActive((TerminalBannerComponent_o *)this, 0, 0);
  }
  QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(v5, (const MethodInfo *)questBoardItem);
  QuestBoardListViewItemDraw__SetupEntryBanner(v5, v29);
  AreaBoardInfo_k__BackingField->fields.bannerFocusIndex = 0;
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mBannerArrowObj;
  v5->fields.mIsEnableBannerAutoMoveOld = 0;
  if ( !this )
    goto LABEL_60;
  v30 = v5->fields.mBannerCount;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v30 > 1, 0);
  if ( v30 >= 2 )
    QuestBoardListViewItemDraw__SetupBannerArrows(v5, (const MethodInfo *)questBoardItem);
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mBannerPointGrid;
  if ( !this )
    goto LABEL_60;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v30 > 1, 0);
  if ( v30 >= 2 )
  {
    mBannerPointSps = v5->fields.mBannerPointSps;
    if ( mBannerPointSps )
    {
      v33 = mBannerPointSps->max_length;
      v34 = v33 - 1;
      if ( v33 >= 1 )
      {
        v35 = 0;
        while ( (unsigned int)v35 < LODWORD(mBannerPointSps->max_length) )
        {
          this = (QuestBoardListViewItemDraw_o *)mBannerPointSps->m_Items[v35];
          if ( this )
          {
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v35 < v5->fields.mBannerCount, 0);
              if ( v34 == v35 )
                goto LABEL_61;
              mBannerPointSps = v5->fields.mBannerPointSps;
              ++v35;
              if ( mBannerPointSps )
                continue;
            }
          }
          goto LABEL_60;
        }
        goto LABEL_64;
      }
LABEL_61:
      this = (QuestBoardListViewItemDraw_o *)v5->fields.mBannerPointGrid;
      if ( this )
      {
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, Il2CppClass *))this->klass[1]._1.element_class)(
          this,
          this->klass[1]._1.castClass);
        goto LABEL_63;
      }
    }
LABEL_60:
    sub_1C6BC60(this, questBoardItem);
  }
LABEL_63:
  QuestBoardListViewItemDraw__UpdateDispBannerPoint(v5, 0, v31);
}


void QuestBoardListViewItemDraw__SetupBannerArrows(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct ScrollArrowComponent_array *mBannerArrows; // x8
  int max_length; // w20
  QuestBoardListViewItemDraw_o *v4; // x19
  unsigned int v5; // w9
  __int64 v6; // x21
  struct ScrollArrowComponent_array *v7; // x8

  mBannerArrows = this->fields.mBannerArrows;
  if ( !mBannerArrows )
    goto LABEL_10;
  max_length = mBannerArrows->max_length;
  if ( max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    do
    {
      if ( v5 >= LODWORD(mBannerArrows->max_length) )
LABEL_12:
        sub_1C6BC68(this);
      v6 = (int)v5;
      this = (QuestBoardListViewItemDraw_o *)mBannerArrows->m_Items[v5];
      if ( !this )
        break;
      ScrollArrowComponent__SetDisp((ScrollArrowComponent_o *)this, 0, 1, 0);
      v7 = v4->fields.mBannerArrows;
      if ( !v7 )
        break;
      if ( (unsigned int)v6 >= LODWORD(v7->max_length) )
        goto LABEL_12;
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v7->m_Items[v6], 0, 0);
      v5 = v6 + 1;
      if ( max_length == (_DWORD)v6 + 1 )
        return;
      mBannerArrows = v4->fields.mBannerArrows;
    }
    while ( mBannerArrows );
LABEL_10:
    sub_1C6BC60(this, method);
  }
}


void QuestBoardListViewItemDraw__SetupEntryBanner(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
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
  if ( (byte_4CB2ED0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2ED0 = 1;
  }
  mTerminalBanners = v2->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_35;
  if ( !LODWORD(mTerminalBanners->max_length) )
    sub_1C6BC68(this);
  v4 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4 )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
      if ( this )
      {
        v5 = this;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)Component_object, 0);
        }
        v7 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v5,
               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)v7, 0);
        }
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CB2EE4 )
        {
          sub_1C6BA08(&TerminalPramsManager_TypeInfo);
          byte_4CB2EE4 = 1;
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
          0);
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v5,
                                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( this )
        {
          ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
            this,
            this->klass[1]._1.castClass,
            0.0);
          return;
        }
      }
    }
LABEL_35:
    sub_1C6BC60(this, method);
  }
}


void QuestBoardListViewItemDraw__SetupRewardIcon(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  QuestBoardRewardIcon_RewardIconInfo_o *IsNullOrEmpty; // x0
  __int64 PriorIconId_k__BackingField; // x1
  System_Collections_Generic_List_object__o *rewardIconInfoList; // x21
  int32_t AlphaAnimCnt; // w0
  QuestBoardRewardIcon_RewardIconInfo_o *v9; // x20
  int Num_k__BackingField; // w8
  int64_t v11; // x2
  const MethodInfo *v12; // x2
  int64_t v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4CB2EC8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
    byte_4CB2EC8 = 1;
  }
  IsNullOrEmpty = (QuestBoardRewardIcon_RewardIconInfo_o *)BasicHelper__IsNullOrEmpty(
                                                             (System_Collections_ICollection_o *)this->fields.rewardIconInfoList,
                                                             0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    rewardIconInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardIconInfoList;
    if ( rewardIconInfoList )
    {
      if ( questBoardManager )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                         questBoardManager,
                         rewardIconInfoList->fields._size,
                         0);
        IsNullOrEmpty = (QuestBoardRewardIcon_RewardIconInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                                   rewardIconInfoList,
                                                                   AlphaAnimCnt,
                                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
        if ( IsNullOrEmpty )
        {
          v9 = IsNullOrEmpty;
          PriorIconId_k__BackingField = (unsigned int)IsNullOrEmpty->fields._PriorIconId_k__BackingField;
          IsNullOrEmpty = (QuestBoardRewardIcon_RewardIconInfo_o *)this->fields.mRewardIcon;
          Num_k__BackingField = v9->fields._Num_k__BackingField;
          if ( (int)PriorIconId_k__BackingField < 1 )
          {
            if ( IsNullOrEmpty )
            {
              if ( Num_k__BackingField <= 1 )
                v13 = -1;
              else
                v13 = (unsigned int)v9->fields._Num_k__BackingField;
              ItemIconComponent__SetGift_41153640(
                (ItemIconComponent_o *)IsNullOrEmpty,
                v9->fields._GiftType_k__BackingField,
                v9->fields._ObjectId_k__BackingField,
                v13,
                1,
                0);
              goto LABEL_18;
            }
          }
          else if ( IsNullOrEmpty )
          {
            if ( Num_k__BackingField <= 1 )
              v11 = -1;
            else
              v11 = (unsigned int)v9->fields._Num_k__BackingField;
            ItemIconComponent__SetItemImage_41156088(
              (ItemIconComponent_o *)IsNullOrEmpty,
              PriorIconId_k__BackingField,
              v11,
              0);
LABEL_18:
            QuestBoardListViewItemDraw__SetupRewardIconTitle(this, v9, v12);
            QuestBoardListViewItemDraw__SetupRewardIconGotAndNotGive(this, v9, v14);
            return;
          }
        }
      }
    }
    sub_1C6BC60(IsNullOrEmpty, PriorIconId_k__BackingField);
  }
}


void QuestBoardListViewItemDraw__SetupRewardIconAll(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        UserQuestEntity_o *userQuestEntity,
        QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData,
        bool isClosed,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  System_Collections_Generic_List_object__o *v16; // x21
  CGThumbnailListItem_o *p_rewardIconInfoList; // x26
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  UnityEngine_Component_o *mRewardIcon; // x0
  const MethodInfo *v22; // x4
  QuestEntity_o *v23; // x24
  _BOOL4 v24; // w20
  int32_t MaxPhase; // w0
  int32_t v26; // w25
  int32_t GiftId_k__BackingField; // w21
  int32_t GiftIconId_k__BackingField; // w23
  int32_t Phase_k__BackingField; // w29
  int32_t id; // w26
  bool v31; // w26
  QuestBoardRewardIcon_RewardIconArgs_o *v32; // x0
  QuestBoardRewardIcon_RewardIconArgs_o *v33; // x27
  System_Collections_Generic_List_object__o *rewardIconInfoList; // x21
  bool IsRepeatReward; // w0
  int32_t giftIconId; // w21
  int32_t giftId; // w23
  bool v38; // w24
  bool IsDisplayGot; // w22
  QuestBoardRewardIcon_RewardIconArgs_o *v40; // x0
  QuestBoardRewardIcon_RewardIconArgs_o *v41; // x25
  System_Collections_Generic_List_object__o *klass; // x21
  const MethodInfo *v43; // x2
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestBoardListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x2
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  QuestBoardListViewItemDraw_o *v51; // x0
  int32_t v52; // w1
  int32_t v53; // w2
  bool v54; // w3
  int32_t *v55; // x4
  int32_t *v56; // x5
  bool *v57; // x6
  const MethodInfo *v58; // x7
  QuestBoardListViewItemDraw_PhasePresentData_o *v59; // [xsp+28h] [xbp-B8h]
  UserQuestEntity_o *v60; // [xsp+30h] [xbp-B0h]
  System_String_o *shardRewardImageName; // [xsp+40h] [xbp-A0h]
  bool IsDisplaySharedReward; // [xsp+48h] [xbp-98h]
  bool IsDisplayServantLimitOpened; // [xsp+4Ch] [xbp-94h]
  bool IsDisplayNotGive; // [xsp+50h] [xbp-90h]
  _BOOL4 v65; // [xsp+54h] [xbp-8Ch]
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentDataa; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4CB2EA6 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_RewardIconInfo__TypeInfo);
    sub_1C6BA08(&QuestBoardListViewManager_TypeInfo);
    sub_1C6BA08(&QuestBoardRewardIcon_RewardIconArgs_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4CB2EA6 = 1;
  }
  phasePresentDataa = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_RewardIconInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_RewardIconInfo___ctor__);
  p_rewardIconInfoList = (CGThumbnailListItem_o *)&this->fields.rewardIconInfoList;
  this->fields.rewardIconInfoList = (struct System_Collections_Generic_List_RewardIconInfo__o *)v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.rewardIconInfoList, (int32_t)v16, v18, v19);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_45;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0);
  if ( !mRewardIcon )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 0, 0);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_45;
  v67.fields.r = r;
  v67.fields.g = g;
  v67.fields.b = b;
  v67.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)mRewardIcon, v67, 0);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
  if ( !mRewardIcon )
    goto LABEL_45;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)mRewardIcon,
                                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !mRewardIcon )
    goto LABEL_45;
  v68.fields.r = r;
  v68.fields.g = g;
  v68.fields.b = b;
  v68.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardIcon, v68, 0);
  if ( !questInfo )
    goto LABEL_45;
  mRewardIcon = (UnityEngine_Component_o *)MapControl_QuestInfo__GetMine(questInfo, 0);
  v23 = (QuestEntity_o *)mRewardIcon;
  if ( isClosed )
  {
    if ( !mRewardIcon )
      goto LABEL_45;
    mRewardIcon = (UnityEngine_Component_o *)QuestEntity__HasFlag((QuestEntity_o *)mRewardIcon, 4096, 0);
    if ( ((unsigned __int8)mRewardIcon & 1) != 0 )
    {
      mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
      if ( mRewardIcon )
      {
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)mRewardIcon, 99, 0);
        mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
        if ( mRewardIcon )
        {
          mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0);
          if ( mRewardIcon )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 1, 0);
            return;
          }
        }
      }
LABEL_45:
      sub_1C6BC60(mRewardIcon, v20);
    }
  }
  mRewardIcon = (UnityEngine_Component_o *)QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                                             (QuestBoardListViewItemDraw_o *)mRewardIcon,
                                             &phasePresentDataa,
                                             v23,
                                             0,
                                             v22);
  if ( phasePresentDataa )
  {
    v24 = !phasePresentDataa->fields._IsLastPhase_k__BackingField;
    if ( !v23 )
      goto LABEL_45;
  }
  else
  {
    v24 = 0;
    if ( !v23 )
      goto LABEL_45;
  }
  if ( v23->fields.afterClear == 3 )
  {
    mRewardIcon = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !mRewardIcon )
      goto LABEL_45;
    v65 = !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)mRewardIcon, v23->fields.id, 0, 0);
  }
  else
  {
    LOBYTE(v65) = 0;
  }
  IsDisplayNotGive = QuestBoardRewardIcon_RewardIconUtil__IsDisplayNotGive(questInfo, 0);
  IsDisplayServantLimitOpened = QuestBoardRewardIcon_RewardIconUtil__IsDisplayServantLimitOpened(questInfo, 0);
  IsDisplaySharedReward = QuestBoardRewardIcon_RewardIconUtil__IsDisplaySharedReward(questInfo, 0);
  shardRewardImageName = QuestBoardRewardIcon_RewardIconUtil__GetSharedRewardImageName(questInfo, 0);
  MaxPhase = QuestEntity__GetMaxPhase(v23, 0);
  if ( !phasePresentData )
    goto LABEL_32;
  v26 = MaxPhase;
  GiftId_k__BackingField = phasePresentData->fields._GiftId_k__BackingField;
  GiftIconId_k__BackingField = phasePresentData->fields._GiftIconId_k__BackingField;
  v59 = phasePresentData;
  Phase_k__BackingField = phasePresentData->fields._Phase_k__BackingField;
  id = v23->fields.id;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v60 = userQuestEntity;
  v31 = CondType__IsQuestClear_40554260(id, -1, 0, 0)
     || QuestBoardRewardIcon_RewardIconUtil__IsDisplayGotBySharedReward(questInfo, 0);
  v32 = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1C6BC54(QuestBoardRewardIcon_RewardIconArgs_TypeInfo);
  v69.fields.r = r;
  v69.fields.g = g;
  v69.fields.b = b;
  v69.fields.a = a;
  v33 = v32;
  QuestBoardRewardIcon_RewardIconArgs___ctor(
    v32,
    GiftIconId_k__BackingField,
    GiftId_k__BackingField,
    v65,
    Phase_k__BackingField,
    v24,
    Phase_k__BackingField == v26,
    v69,
    IsDisplayNotGive,
    IsDisplayServantLimitOpened,
    v31,
    IsDisplaySharedReward,
    shardRewardImageName,
    0);
  p_rewardIconInfoList = (CGThumbnailListItem_o *)&this->fields.rewardIconInfoList;
  rewardIconInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardIconInfoList;
  mRewardIcon = (UnityEngine_Component_o *)QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfo(v33, 0);
  if ( !rewardIconInfoList )
    goto LABEL_45;
  System_Collections_Generic_List_object___AddRange(
    rewardIconInfoList,
    (System_Collections_Generic_IEnumerable_T__o *)mRewardIcon,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_RewardIconInfo__AddRange__);
  userQuestEntity = v60;
  if ( v59->fields._IsLastPhase_k__BackingField )
  {
LABEL_32:
    IsRepeatReward = QuestEntity__IsRepeatReward(v23, 0);
    giftIconId = v23->fields.giftIconId;
    giftId = v23->fields.giftId;
    v38 = IsRepeatReward;
    IsDisplayGot = QuestBoardRewardIcon_RewardIconUtil__IsDisplayGot(questInfo, userQuestEntity, 0);
    v40 = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1C6BC54(QuestBoardRewardIcon_RewardIconArgs_TypeInfo);
    v70.fields.r = r;
    v70.fields.g = g;
    v70.fields.b = b;
    v70.fields.a = a;
    v41 = v40;
    QuestBoardRewardIcon_RewardIconArgs___ctor(
      v40,
      giftIconId,
      giftId,
      v65 && !v38,
      0,
      v24,
      1,
      v70,
      IsDisplayNotGive,
      IsDisplayServantLimitOpened,
      IsDisplayGot,
      IsDisplaySharedReward && !v38,
      shardRewardImageName,
      0);
    klass = (System_Collections_Generic_List_object__o *)p_rewardIconInfoList->klass;
    mRewardIcon = (UnityEngine_Component_o *)QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfo(v41, 0);
    if ( !klass )
      goto LABEL_45;
    System_Collections_Generic_List_object___AddRange(
      klass,
      (System_Collections_Generic_IEnumerable_T__o *)mRewardIcon,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_RewardIconInfo__AddRange__);
  }
  if ( !p_rewardIconInfoList->klass )
    goto LABEL_45;
  if ( LODWORD(p_rewardIconInfoList->klass->_1.namespaze) )
  {
    mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
    if ( !mRewardIcon )
      goto LABEL_45;
    mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0);
    if ( !mRewardIcon )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 1, 0);
    mListViewObject = this->fields.mListViewObject;
    if ( !mListViewObject )
      goto LABEL_45;
    manager = (QuestBoardListViewManager_o *)mListViewObject->fields.manager;
    if ( manager
      && ((naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment,
           manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo) )
    {
      sub_1C6BFFC(manager);
      QuestBoardListViewItemDraw__GetCampaignText(v51, v52, v53, v54, v55, v56, v57, v58);
    }
    else
    {
      QuestBoardListViewItemDraw__SetupRewardIcon(this, manager, v43);
      QuestBoardListViewItemDraw__InitRewardIconAlphaSyncWidgets(this, v47);
      QuestBoardListViewItemDraw__RegisterRewardIconAlphaSyncWidgetsByFindingIconDiff(this, manager, v48);
    }
  }
  else
  {
    mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
    if ( !mRewardIcon )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 0, 0);
    p_rewardIconInfoList->klass = 0;
    sub_1C6B9AC(p_rewardIconInfoList, 0, v49, v50);
  }
}


void QuestBoardListViewItemDraw__SetupRewardIconGotAndNotGive(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardRewardIcon_RewardIconInfo_o *iconInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 mRewardGetSP; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  QuestBoardRewardIcon_RewardIconInfo_o **v10; // x21
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_GameObject_o *v12; // x22
  QuestBoardRewardIcon_RewardIconInfo_o *v13; // x8
  UnityEngine_GameObject_o *v14; // x21
  UISprite_o *mServantLimitRewardObtainedSP; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UISprite_o *v18; // x22
  System_Collections_Generic_IEnumerable_T__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UISprite_o *mRewardNotGetSP; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UISprite_o *v25; // x19
  System_Action_object__o *v26; // x19
  __int64 v27; // x0

  if ( (byte_4CB2EAA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_UISprite__TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass353_0__SetupRewardIconGotAndNotGive_g__SetupCommon_0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass353_0_TypeInfo);
    sub_1C6BA08(&UISprite___TypeInfo);
    sub_1C6BA08(&StringLiteral_20287/*"icon_reward_limits_release"*/);
    byte_4CB2EAA = 1;
  }
  v5 = sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass353_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass353_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass353_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = iconInfo;
  v10 = (QuestBoardRewardIcon_RewardIconInfo_o **)(v5 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)iconInfo, v8, v9);
  mRewardGetSP = (__int64)this->fields.mRewardGetSP;
  if ( !mRewardGetSP )
    goto LABEL_31;
  mRewardGetSP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRewardGetSP, 0);
  if ( !*v10 )
    goto LABEL_31;
  v11 = (UnityEngine_GameObject_o *)mRewardGetSP;
  mRewardGetSP = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(*v10, 0);
  if ( !v11 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v11, mRewardGetSP & 1, 0);
  mRewardGetSP = (__int64)this->fields.mRewardNotGetSP;
  if ( !mRewardGetSP )
    goto LABEL_31;
  mRewardGetSP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRewardGetSP, 0);
  if ( !*v10 )
    goto LABEL_31;
  v12 = (UnityEngine_GameObject_o *)mRewardGetSP;
  mRewardGetSP = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayNotGive(*v10, 0);
  if ( !v12 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v12, mRewardGetSP & 1, 0);
  mRewardGetSP = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !mRewardGetSP )
    goto LABEL_31;
  mRewardGetSP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRewardGetSP, 0);
  v13 = *v10;
  if ( !*v10 )
    goto LABEL_31;
  v14 = (UnityEngine_GameObject_o *)mRewardGetSP;
  mRewardGetSP = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(v13, 0);
  if ( !v14 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v14, mRewardGetSP & 1, 0);
  mRewardGetSP = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !mRewardGetSP )
    goto LABEL_31;
  mRewardGetSP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRewardGetSP, 0);
  if ( !mRewardGetSP )
    goto LABEL_31;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mRewardGetSP, 0) )
    goto LABEL_20;
  mServantLimitRewardObtainedSP = this->fields.mServantLimitRewardObtainedSP;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(mServantLimitRewardObtainedSP, (System_String_o *)StringLiteral_20287/*"icon_reward_limits_release"*/, 0);
  mRewardGetSP = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !mRewardGetSP )
LABEL_31:
    sub_1C6BC60(mRewardGetSP, v7);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)mRewardGetSP + 840LL))(
    mRewardGetSP,
    *(_QWORD *)(*(_QWORD *)mRewardGetSP + 848LL));
LABEL_20:
  mRewardGetSP = sub_1C6BAB0(UISprite___TypeInfo, 3);
  if ( !mRewardGetSP )
    goto LABEL_31;
  v18 = this->fields.mRewardGetSP;
  v19 = (System_Collections_Generic_IEnumerable_T__o *)mRewardGetSP;
  if ( v18 )
  {
    mRewardGetSP = sub_1C6BB44(this->fields.mRewardGetSP, *(_QWORD *)(*(_QWORD *)mRewardGetSP + 64LL));
    if ( !mRewardGetSP )
      goto LABEL_33;
  }
  if ( !LODWORD(v19[1].monitor) )
    goto LABEL_32;
  v19[2].klass = (System_Collections_Generic_IEnumerable_T__c *)v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v19[2], (int32_t)v18, v16, v17);
  mRewardNotGetSP = this->fields.mRewardNotGetSP;
  if ( mRewardNotGetSP )
  {
    mRewardGetSP = sub_1C6BB44(this->fields.mRewardNotGetSP, v19->klass->_1.element_class);
    if ( !mRewardGetSP )
      goto LABEL_33;
  }
  if ( LODWORD(v19[1].monitor) <= 1 )
    goto LABEL_32;
  v19[2].monitor = mRewardNotGetSP;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v19[2].monitor, (int32_t)mRewardNotGetSP, v20, v21);
  v25 = this->fields.mServantLimitRewardObtainedSP;
  if ( v25 )
  {
    mRewardGetSP = sub_1C6BB44(v25, v19->klass->_1.element_class);
    if ( !mRewardGetSP )
    {
LABEL_33:
      v27 = sub_1C6BC84();
      sub_1C6BB30(v27, 0);
    }
  }
  if ( LODWORD(v19[1].monitor) <= 2 )
LABEL_32:
    sub_1C6BC68(mRewardGetSP);
  v19[3].klass = (System_Collections_Generic_IEnumerable_T__c *)v25;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v19[3], (int32_t)v25, v23, v24);
  v26 = (System_Action_object__o *)sub_1C6BC54(System_Action_UISprite__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass353_0__SetupRewardIconGotAndNotGive_g__SetupCommon_0__,
    0);
  BasicHelper__ForEach_object_(
    v19,
    (System_Action_T__o *)v26,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_UISprite___);
}


void QuestBoardListViewItemDraw__SetupRewardIconTitle(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardRewardIcon_RewardIconInfo_o *iconInfo,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass352_0_o *v5; // x21
  __int64 IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_o *SharedRewardImageName; // x0
  UISprite_o *mRewardSharedSP; // x22
  System_String_o *v10; // x23
  int v11; // w22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UISprite_o *mRewardFirstSP; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UISprite_o *mRewardQuestSP; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UISprite_o *mRewardPhaseSP; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UISprite_o *v24; // x24
  QuestBoardListViewItemDraw___c_c *v25; // x0
  System_Func_object__bool__o *_9__352_0; // x24
  QuestBoardRewardIcon_RewardIconInfo_o *v27; // x28
  Il2CppObject *v28; // x25
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_T__o *v32; // x23
  System_Action_object__o *v33; // x24
  QuestBoardListViewItemDraw_c *v34; // x0
  System_String_o *QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x22
  Il2CppObject *v36; // x0
  System_String_o *v37; // x20
  __int64 v38; // x0
  int32_t Phase; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2EA9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_UISprite__TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_UISprite___);
    sub_1C6BA08(&System_Func_UISprite__bool__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconTitle_b__352_0__);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass352_0__SetupRewardIconTitle_g__SetupCommon_1__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass352_0_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1C6BA08(&UISprite___TypeInfo);
    byte_4CB2EA9 = 1;
  }
  v5 = (QuestBoardListViewItemDraw___c__DisplayClass352_0_o *)sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass352_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass352_0___ctor(v5, 0);
  if ( !iconInfo )
    goto LABEL_49;
  SharedRewardImageName = QuestBoardRewardIcon_RewardIconInfo__get_SharedRewardImageName(iconInfo, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(SharedRewardImageName, 0);
  mRewardSharedSP = this->fields.mRewardSharedSP;
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( !mRewardSharedSP )
      goto LABEL_49;
    UISprite__set_atlas(this->fields.mRewardSharedSP, 0, 0);
    IsNullOrEmpty = (__int64)this->fields.mRewardSharedSP;
    if ( !IsNullOrEmpty )
      goto LABEL_49;
    UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, 0, 0);
  }
  else
  {
    v10 = QuestBoardRewardIcon_RewardIconInfo__get_SharedRewardImageName(iconInfo, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(mRewardSharedSP, v10, 0);
    IsNullOrEmpty = (__int64)this->fields.mRewardSharedSP;
    if ( !IsNullOrEmpty )
      goto LABEL_49;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
      IsNullOrEmpty,
      *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
  }
  Color = QuestBoardRewardIcon_RewardIconInfo__get_Color(iconInfo, 0);
  if ( !v5 )
    goto LABEL_49;
  v5->fields.color = Color;
  IsNullOrEmpty = QuestBoardRewardIcon_RewardIconInfo__GetTitleType(iconInfo, 0);
  if ( !this->fields.mRewardFirstSP )
    goto LABEL_49;
  v11 = IsNullOrEmpty;
  IsNullOrEmpty = (__int64)UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.mRewardFirstSP,
                             0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, v11 == 3, 0);
  IsNullOrEmpty = (__int64)this->fields.mRewardQuestSP;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsNullOrEmpty = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, v11 == 1, 0);
  IsNullOrEmpty = (__int64)this->fields.mRewardPhaseSP;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsNullOrEmpty = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, v11 == 2, 0);
  IsNullOrEmpty = (__int64)this->fields.mRewardSharedSP;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsNullOrEmpty = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, v11 == 4, 0);
  IsNullOrEmpty = sub_1C6BAB0(UISprite___TypeInfo, 4);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  mRewardFirstSP = this->fields.mRewardFirstSP;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)IsNullOrEmpty;
  if ( mRewardFirstSP )
  {
    IsNullOrEmpty = sub_1C6BB44(this->fields.mRewardFirstSP, *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 64LL));
    if ( !IsNullOrEmpty )
      goto LABEL_51;
  }
  if ( !LODWORD(v15[1].monitor) )
    goto LABEL_50;
  v15[2].klass = (System_Collections_Generic_IEnumerable_TSource__c *)mRewardFirstSP;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15[2], (int32_t)mRewardFirstSP, v12, v13);
  mRewardQuestSP = this->fields.mRewardQuestSP;
  if ( mRewardQuestSP )
  {
    IsNullOrEmpty = sub_1C6BB44(this->fields.mRewardQuestSP, v15->klass->_1.element_class);
    if ( !IsNullOrEmpty )
      goto LABEL_51;
  }
  if ( LODWORD(v15[1].monitor) <= 1 )
    goto LABEL_50;
  v15[2].monitor = mRewardQuestSP;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15[2].monitor, (int32_t)mRewardQuestSP, v16, v17);
  mRewardPhaseSP = this->fields.mRewardPhaseSP;
  if ( mRewardPhaseSP )
  {
    IsNullOrEmpty = sub_1C6BB44(this->fields.mRewardPhaseSP, v15->klass->_1.element_class);
    if ( !IsNullOrEmpty )
      goto LABEL_51;
  }
  if ( LODWORD(v15[1].monitor) <= 2 )
    goto LABEL_50;
  v15[3].klass = (System_Collections_Generic_IEnumerable_TSource__c *)mRewardPhaseSP;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15[3], (int32_t)mRewardPhaseSP, v19, v20);
  v24 = this->fields.mRewardSharedSP;
  if ( v24 )
  {
    IsNullOrEmpty = sub_1C6BB44(this->fields.mRewardSharedSP, v15->klass->_1.element_class);
    if ( !IsNullOrEmpty )
    {
LABEL_51:
      v38 = sub_1C6BC84();
      sub_1C6BB30(v38, 0);
    }
  }
  if ( LODWORD(v15[1].monitor) <= 3 )
LABEL_50:
    sub_1C6BC68(IsNullOrEmpty);
  v15[3].monitor = v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15[3].monitor, (int32_t)v24, v22, v23);
  v25 = QuestBoardListViewItemDraw___c_TypeInfo;
  if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
    v25 = QuestBoardListViewItemDraw___c_TypeInfo;
  }
  _9__352_0 = (System_Func_object__bool__o *)v25->static_fields->__9__352_0;
  if ( !_9__352_0 )
  {
    v27 = iconInfo;
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = QuestBoardListViewItemDraw___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__352_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_UISprite__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__352_0,
      v28,
      Method_QuestBoardListViewItemDraw___c__SetupRewardIconTitle_b__352_0__,
      0);
    static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__352_0 = (struct System_Func_UISprite__bool__o *)_9__352_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__352_0, (int32_t)_9__352_0, v30, v31);
    iconInfo = v27;
  }
  v32 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v15,
                                                         (System_Func_TSource__bool__o *)_9__352_0,
                                                         (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_UISprite___);
  v33 = (System_Action_object__o *)sub_1C6BC54(System_Action_UISprite__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass352_0__SetupRewardIconTitle_g__SetupCommon_1__,
    0);
  BasicHelper__ForEach_object_(
    v32,
    (System_Action_T__o *)v33,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_UISprite___);
  if ( v11 == 2 )
  {
    v34 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v34 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = v34->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
    Phase = QuestBoardRewardIcon_RewardIconInfo__get_Phase(iconInfo, 0);
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Phase);
    IsNullOrEmpty = (__int64)System_String__Format(QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v36, 0);
    if ( this->fields.mRewardPhaseNumSP )
    {
      v37 = (System_String_o *)IsNullOrEmpty;
      UISprite__set_atlas(this->fields.mRewardPhaseNumSP, this->fields.mTerminalAtlas, 0);
      IsNullOrEmpty = (__int64)this->fields.mRewardPhaseNumSP;
      if ( IsNullOrEmpty )
      {
        UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, v37, 0);
        IsNullOrEmpty = (__int64)this->fields.mRewardPhaseNumSP;
        if ( IsNullOrEmpty )
        {
          UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v5->fields.color, 0);
          IsNullOrEmpty = (__int64)this->fields.mRewardPhaseNumSP;
          if ( IsNullOrEmpty )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 840LL))(
              IsNullOrEmpty,
              *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 848LL));
            return;
          }
        }
      }
    }
LABEL_49:
    sub_1C6BC60(IsNullOrEmpty, v7);
  }
}


void QuestBoardListViewItemDraw__StartEntryBanner(
        QuestBoardListViewItemDraw_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v13; // x22
  struct ScrollArrowComponent_array *mBannerArrows; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x21
  UnityEngine_GameObject_o *v17; // x20
  Il2CppObject *v18; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  QuestBoardListViewItemDraw_c *v21; // x0
  float BANNER_ENTORY_EFFECT_DURATION; // s0
  EventDelegate_Callback_o *v23; // x22
  float v24; // s0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2ED1 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardListViewItemDraw___c__DisplayClass404_0__StartEntryBanner_b__0__);
    sub_1C6BA08(&QuestBoardListViewItemDraw___c__DisplayClass404_0_TypeInfo);
    byte_4CB2ED1 = 1;
  }
  v5 = sub_1C6BC54(QuestBoardListViewItemDraw___c__DisplayClass404_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass404_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass404_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endCallback, v10, v11);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2EE4 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2EE4 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(gameObject[7].fields.m_CachedPtr + 169) )
    goto LABEL_16;
  mTerminalBanners = this->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_32;
  if ( !LODWORD(mTerminalBanners->max_length) )
    goto LABEL_31;
  v13 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
LABEL_16:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  if ( !v13 )
    goto LABEL_32;
  TerminalBannerComponent__SetBannerTextureActive((TerminalBannerComponent_o *)v13, 1, 0);
  mBannerArrows = this->fields.mBannerArrows;
  if ( !mBannerArrows )
    goto LABEL_32;
  max_length = mBannerArrows->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    while ( v16 < (unsigned int)max_length )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)mBannerArrows->m_Items[v16], 1, 0);
      LODWORD(max_length) = mBannerArrows->max_length;
      if ( (__int64)++v16 >= (int)max_length )
        goto LABEL_23;
    }
LABEL_31:
    sub_1C6BC68(gameObject);
  }
LABEL_23:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
  if ( !gameObject )
    goto LABEL_32;
  v17 = gameObject;
  v18 = UnityEngine_GameObject__AddComponent_object_(
          gameObject,
          (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v17, 0);
  if ( !v18 )
    goto LABEL_32;
  *(UnityEngine_Vector3_o *)&v18[8].klass = LocalPosition;
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(void **)((char *)&v18[8].monitor + 4) = *(void **)&static_fields->zeroVector.fields.x;
  *((float *)&v18[9].klass + 1) = z;
  v21 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v21 = QuestBoardListViewItemDraw_TypeInfo;
  }
  BANNER_ENTORY_EFFECT_DURATION = v21->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v18[2].klass) = 2;
  *(float *)&v18[3].monitor = BANNER_ENTORY_EFFECT_DURATION;
  v23 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass404_0__StartEntryBanner_b__0__,
    0);
  UITweener__SetOnFinished((UITweener_o *)v18, v23, 0);
  UITweener__PlayForward((UITweener_o *)v18, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             v17,
                                             (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gameObject )
LABEL_32:
    sub_1C6BC60(gameObject, v7);
  gameObject[5].monitor = (void *)0x3F80000000000000LL;
  v24 = QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(gameObject[1].monitor) = 3;
  *(float *)&gameObject[2].monitor = v24;
  UITweener__PlayForward((UITweener_o *)gameObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewItemDraw__UpdateDispBannerPoint(
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
  if ( (byte_4CB2ED3 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2ED3 = 1;
  }
  if ( v4->fields.mBannerCount >= 1 )
  {
    v5 = 0;
    v6 = index;
    do
    {
      mBannerPointSps = v4->fields.mBannerPointSps;
      if ( !mBannerPointSps )
        goto LABEL_15;
      if ( (unsigned int)v5 >= LODWORD(mBannerPointSps->max_length) )
        sub_1C6BC68(this);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v8 = mBannerPointSps->m_Items[v5];
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !v8 )
LABEL_15:
        sub_1C6BC60(this, *(_QWORD *)&index);
      if ( v6 == (_DWORD)v5 )
        v9 = 872;
      else
        v9 = 880;
      UISprite__set_spriteName(
        v8,
        *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v9),
        0);
      ++v5;
    }
    while ( (int)v5 < v4->fields.mBannerCount );
  }
}


void QuestBoardListViewItemDraw__UpdateInfoText(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t strIndex,
        int64_t checkTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mInfoTextList; // x0

  if ( (byte_4CB2E96 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4CB2E96 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0 )
  {
    sub_1C6BC60(mInfoTextList, questBoardItem);
  }
  QuestBoardInformationText__Update(
    (QuestBoardInformationText_o *)mInfoTextList,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    checkTime,
    0);
}


void QuestBoardListViewItemDraw__UpdateItem(
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
      sub_1C6BC60(this, questBoardItem);
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


void QuestBoardListViewItemDraw__UpdateTouch(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v4; // x19
  UnityEngine_Camera_o *mUICamera; // x20
  UnityEngine_Vector2_o ScreenPosition_49352900; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  v4 = this;
  if ( (byte_4CB2ED6 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C6BA08(&CTouch_TypeInfo);
    byte_4CB2ED6 = 1;
  }
  if ( v4->fields.mIsPressedForDragX )
  {
    v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_1C6BC60(this, questBoardManager);
    mUICamera = questBoardManager->fields.mUICamera;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_49352900 = CTouch__getScreenPosition_49352900(mUICamera, 0);
    mIsEnableDragX = v4->fields.mIsEnableDragX;
    v4->fields.mTouchPosNow = ScreenPosition_49352900;
    if ( mIsEnableDragX )
      v4->fields.mTouchPosDif = ScreenPosition_49352900.fields.x - v4->fields.mTouchPosOld.fields.x;
  }
}


void QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_350_2(
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
  if ( (byte_4CB2EE1 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2EE1 = 1;
  }
  if ( !v8 )
    goto LABEL_11;
  UILabel__set_text(v8, message, 0);
  UILabel__AssumeNaturalSize(v8, 0);
  mHeight = v8->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v8, baseHeight, 0);
  v10 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v10 = QuestBoardListViewItemDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v8, v10->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  if ( !label
    || (LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0),
        !transform) )
  {
LABEL_11:
    sub_1C6BC60(label, message);
  }
  v13 = 1.0 - (float)((float)baseHeight / (float)mHeight);
  v14 = fminf(v13, 1.0);
  if ( v13 < 0.0 )
    v14 = 0.0;
  v15.fields.y = 1.0;
  v15.fields.x = v14 + v12;
  v15.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v15, 0);
}


bool QuestBoardListViewItemDraw__get_IsDummy(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.isDummy;
}


bool QuestBoardListViewItemDraw__get_IsEnableDragX(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.mIsEnableDragX;
}


bool QuestBoardListViewItemDraw__get_IsPressed(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.mIsPressed;
}


bool QuestBoardListViewItemDraw__get_IsPressedForDragX(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.mIsPressedForDragX;
}


float QuestBoardListViewItemDraw__get_TouchPosDif(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.mTouchPosDif;
}


int32_t QuestBoardListViewItemDraw__get_bannerState(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields._bannerState_k__BackingField;
}


void QuestBoardListViewItemDraw__setInfoShowing(
        QuestBoardListViewItemDraw_o *this,
        bool onOff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mQuestInfoShowing; // x0

  mQuestInfoShowing = this->fields.mQuestInfoShowing;
  if ( !mQuestInfoShowing )
    sub_1C6BC60(0, onOff);
  UnityEngine_GameObject__SetActive(mQuestInfoShowing, onOff, 0);
}


void QuestBoardListViewItemDraw__set_bannerState(
        QuestBoardListViewItemDraw_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._bannerState_k__BackingField = value;
}


void QuestBoardListViewItemDraw_PhasePresentData___ctor(
        QuestBoardListViewItemDraw_PhasePresentData_o *this,
        int32_t phase,
        int32_t giftId,
        int32_t giftIconId,
        bool isLastPhase,
        const MethodInfo *method)
{
  bool v10; // w23

  v10 = isLastPhase;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Phase_k__BackingField = phase;
  this->fields._GiftId_k__BackingField = giftId;
  this->fields._GiftIconId_k__BackingField = giftIconId;
  this->fields._IsLastPhase_k__BackingField = v10;
}


int32_t QuestBoardListViewItemDraw_PhasePresentData__get_GiftIconId(
        QuestBoardListViewItemDraw_PhasePresentData_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftIconId_k__BackingField;
}


int32_t QuestBoardListViewItemDraw_PhasePresentData__get_GiftId(
        QuestBoardListViewItemDraw_PhasePresentData_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftId_k__BackingField;
}


bool QuestBoardListViewItemDraw_PhasePresentData__get_IsLastPhase(
        QuestBoardListViewItemDraw_PhasePresentData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLastPhase_k__BackingField;
}


int32_t QuestBoardListViewItemDraw_PhasePresentData__get_Phase(
        QuestBoardListViewItemDraw_PhasePresentData_o *this,
        const MethodInfo *method)
{
  return this->fields._Phase_k__BackingField;
}


void QuestBoardListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB2F44 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4CB2F44 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(QuestBoardListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewItemDraw___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)QuestBoardListViewItemDraw___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestBoardListViewItemDraw___c___ctor(QuestBoardListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewItemDraw___c___IsValidSupportSelection_b__378_0(
        QuestBoardListViewItemDraw___c_o *this,
        RestrictionEntity_o *rest,
        const MethodInfo *method)
{
  if ( !rest )
    sub_1C6BC60(this, 0);
  return rest->fields.type == 9;
}


int32_t QuestBoardListViewItemDraw___c___SetAdvanceNoticeText_b__350_1(
        QuestBoardListViewItemDraw___c_o *this,
        QuestReleaseOverwriteEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C6BC60(this, 0);
  return entity->fields.imagePriority;
}


bool QuestBoardListViewItemDraw___c___SetClosedTitleName_b__428_0(
        QuestBoardListViewItemDraw___c_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.closedMessageId != 0;
}


int32_t QuestBoardListViewItemDraw___c___SetClosedTitleName_b__428_1(
        QuestBoardListViewItemDraw___c_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.imagePriority;
}


int32_t QuestBoardListViewItemDraw___c___SetItemOfQuest_b__337_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1C6BC60(this, 0);
  return value->fields.enemyId;
}


bool QuestBoardListViewItemDraw___c___SetupRewardIconTitle_b__352_0(
        QuestBoardListViewItemDraw___c_o *this,
        UISprite_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (QuestBoardListViewItemDraw___c_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)x,
                                                     0)) == 0 )
  {
    sub_1C6BC60(this, x);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass335_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass335_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewItemDraw___c__DisplayClass335_0___IsPurchasedByRarePrism_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass335_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass335_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *warEnt; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_4CB2F45 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw___c__DisplayClass335_0_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB2F45 = 1;
  }
  if ( !quest )
    goto LABEL_17;
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_17;
  warEnt = v4->fields.warEnt;
  if ( !warEnt )
    goto LABEL_17;
  if ( WarInfo_k__BackingField->fields.warId != warEnt->fields.id )
    return 0;
  userQuestMst = v4->fields.userQuestMst;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  this = (QuestBoardListViewItemDraw___c__DisplayClass335_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw___c__DisplayClass335_0_o *)NetworkManager_TypeInfo;
  }
  if ( !userQuestMst )
LABEL_17:
    sub_1C6BC60(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   userQuestMst,
                   (int64_t)this[5].fields.userQuestMst->fields.sb,
                   quest->fields.questId,
                   0);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0);
  return 0;
}


void QuestBoardListViewItemDraw___c__DisplayClass336_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass336_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewItemDraw___c__DisplayClass336_0___HasNewQuestInWar_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass336_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass336_0_o *v3; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8

  v3 = this;
  if ( this->fields.isMainInterlude )
  {
    if ( !quest
      || (this = (QuestBoardListViewItemDraw___c__DisplayClass336_0_o *)MapControl_QuestInfo__GetMine(quest, 0)) == 0 )
    {
LABEL_11:
      sub_1C6BC60(this, quest);
    }
    this = (QuestBoardListViewItemDraw___c__DisplayClass336_0_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 4, 0);
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


void QuestBoardListViewItemDraw___c__DisplayClass337_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass337_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass337_0___SetItemOfQuest_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass337_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass337_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass337_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass337_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass337_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass337_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0);
            return;
          }
        }
      }
LABEL_11:
      sub_1C6BC60(this, method);
    }
  }
}


void QuestBoardListViewItemDraw___c__DisplayClass338_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass338_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass338_0___SetItemOfWarBoard_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass338_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass338_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass338_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass338_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass338_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass338_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0);
            return;
          }
        }
      }
LABEL_11:
      sub_1C6BC60(this, method);
    }
  }
}


void QuestBoardListViewItemDraw___c__DisplayClass350_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass350_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewItemDraw___c__DisplayClass350_0___SetAdvanceNoticeText_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass350_0_o *this,
        QuestReleaseOverwriteEntity_o *entity,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *questInfo; // x8

  if ( !entity || (questInfo = this->fields.questInfo) == 0 )
    sub_1C6BC60(this, entity);
  return entity->fields.imagePriority == questInfo->fields._QuestReleaseImagePriority_k__BackingField;
}


void QuestBoardListViewItemDraw___c__DisplayClass352_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass352_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass352_0___SetupRewardIconTitle_g__SetupCommon_1(
        QuestBoardListViewItemDraw___c__DisplayClass352_0_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_1C6BC60(this, 0);
  UIWidget__set_color((UIWidget_o *)sprite, this->fields.color, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass353_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass353_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass353_0___SetupRewardIconGotAndNotGive_g__SetupCommon_0(
        QuestBoardListViewItemDraw___c__DisplayClass353_0_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  QuestBoardRewardIcon_RewardIconInfo_o *iconInfo; // x0
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  iconInfo = this->fields.iconInfo;
  if ( !iconInfo || (Color = QuestBoardRewardIcon_RewardIconInfo__get_Color(iconInfo, 0), !sprite) )
    sub_1C6BC60(iconInfo, sprite);
  UIWidget__set_color((UIWidget_o *)sprite, Color, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass373_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass373_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewItemDraw___c__DisplayClass373_0___GetCampaignTextListByEventQuestMaster_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass373_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0 )
    sub_1C6BC60(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void QuestBoardListViewItemDraw___c__DisplayClass373_1___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass373_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewItemDraw___c__DisplayClass373_1___GetCampaignTextListByEventQuestMaster_b__1(
        QuestBoardListViewItemDraw___c__DisplayClass373_1_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0 )
    sub_1C6BC60(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void QuestBoardListViewItemDraw___c__DisplayClass375_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass375_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewItemDraw___c__DisplayClass375_0___CreateQuestBoardInformationText_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass375_0_o *this,
        UserOwnItemInfo_o *x,
        const MethodInfo *method)
{
  const MethodInfo_3929724 *v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_Nullable_long__o v9; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v10; // 0:x0.16

  if ( (byte_4CB2F46 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Nullable_long___ctor__);
    byte_4CB2F46 = 1;
  }
  v10.fields.value = this->fields.checkTime;
  *(_QWORD *)&v10.fields.hasValue = &v9;
  *(_QWORD *)&v9.fields.hasValue = 0;
  v9.fields.value = 0;
  System_Nullable_long____ctor(v10, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_1C6BC60(v6, v7);
  return !UserOwnItemInfo__IsExpired(x, v9, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass404_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass404_0___StartEntryBanner_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct QuestBoardListViewItemDraw_o *_4__this; // x8

  if ( (byte_4CB2F47 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2F47 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2F9B )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2F9B = 1;
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
    sub_1C6BC60(v3, method);
  _4__this->fields._bannerState_k__BackingField = 2;
  ActionExtensions__Call(this->fields.endCallback, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass416_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass416_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewItemDraw___c__DisplayClass416_0___LoadBoardIconTexture_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass416_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass416_0_o *v4; // x19
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  QuestBoardListViewItemDraw_c *v8; // x0
  System_String_o *v9; // x19
  struct QuestBoardListViewItemDraw_o *v10; // x8
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct QuestBoardListViewItemDraw_o *v13; // x8
  struct QuestBoardListViewItemDraw_o *v14; // x8
  struct QuestBoardListViewItemDraw_o *v15; // x8
  AssetData_o *boardIconAssetData; // x21
  Il2CppObject *Object_object__51495936; // x0

  v4 = this;
  if ( (byte_4CB2F48 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_16529/*"_alpha"*/);
    sub_1C6BA08(&StringLiteral_4930/*"Custom/SpriteWithMask"*/);
    this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)sub_1C6BA08(&StringLiteral_16263/*"_MaskTex"*/);
    byte_4CB2F48 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)System_String__op_Inequality(
                                                                  v4->fields.loadBoardIconName,
                                                                  _4__this->fields.boardIconName,
                                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v10 = v4->fields.__4__this;
    if ( v10 )
    {
      v10->fields.boardIconAssetData = assetData;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.boardIconAssetData, (int32_t)assetData, v6, v7);
      v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4930/*"Custom/SpriteWithMask"*/, 0);
      v12 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v12, v11, 0);
      v13 = v4->fields.__4__this;
      if ( v13 )
      {
        this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)v13->fields.boardIconTexture;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)((__int64 (__fastcall *)(QuestBoardListViewItemDraw___c__DisplayClass416_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                                                          this,
                                                                          v12,
                                                                          this->klass[1].vtable._2_GetHashCode.methodPtr);
          v14 = v4->fields.__4__this;
          if ( v14 )
          {
            this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)v14->fields.boardIconAssetData;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)AssetData__GetObject_object__51495936(
                                                                              (AssetData_o *)this,
                                                                              v14->fields.boardIconName,
                                                                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
              if ( v12 )
              {
                UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)this, 0);
                v15 = v4->fields.__4__this;
                if ( v15 )
                {
                  boardIconAssetData = v15->fields.boardIconAssetData;
                  this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)System_String__Concat_63966792(
                                                                                  v15->fields.boardIconName,
                                                                                  (System_String_o *)StringLiteral_16529/*"_alpha"*/,
                                                                                  0);
                  if ( boardIconAssetData )
                  {
                    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                                boardIconAssetData,
                                                (System_String_o *)this,
                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
                    UnityEngine_Material__SetTexture(
                      v12,
                      (System_String_o *)StringLiteral_16263/*"_MaskTex"*/,
                      (UnityEngine_Texture_o *)Object_object__51495936,
                      0);
                    this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
                      ActionExtensions__Call(v4->fields.callback, 0);
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
    sub_1C6BC60(this, assetData);
  }
  v8 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v8 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v9 = System_String__Concat_63966792(v8->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH, v4->fields.loadBoardIconName, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v9, 0);
}