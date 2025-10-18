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
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  __int64 v161; // x19
  int32_t v162; // w1
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  int32_t v165; // w1
  CGThumbnailListItem_o *p_RP_SPNAME_FRAME; // x0
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  __int64 v171; // x19
  int32_t v172; // w1
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  int32_t v175; // w1
  CGThumbnailListItem_o *p_RP_SPNAME_POINT; // x0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  QuestBoardListViewItemDraw_c *v179; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v180; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v181; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v182; // x8
  int32_t v183; // w1
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  int32_t v186; // w1
  CGThumbnailListItem_o *p_QUEST_LOSE_NO_SPEND_SPRITE; // x0
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  int32_t v190; // w1
  CGThumbnailListItem_o *p_QUEST_RETREAT_NO_SPEND_SPRITE; // x0
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  int32_t v194; // w1
  CGThumbnailListItem_o *p_QuestBoardFrameNamePrefix; // x0
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  int32_t v198; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED; // x0
  int32_t v200; // w2
  const MethodInfo *v201; // x3
  int32_t v202; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_FORMAT; // x0
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  int32_t v206; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  int32_t v210; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  int32_t v214; // w1
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  int32_t v216; // w2
  const MethodInfo *v217; // x3
  CGThumbnailListItem_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  int32_t v219; // w1
  int32_t v220; // w2
  const MethodInfo *v221; // x3
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  __int64 v224; // x19
  int32_t v225; // w1
  int32_t v226; // w2
  const MethodInfo *v227; // x3
  int32_t v228; // w1
  int32_t v229; // w2
  const MethodInfo *v230; // x3
  int32_t v231; // w1
  int32_t v232; // w2
  const MethodInfo *v233; // x3
  int32_t v234; // w1
  int32_t v235; // w2
  const MethodInfo *v236; // x3
  int32_t v237; // w1
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  int32_t v240; // w1
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  int32_t v243; // w1
  int32_t v244; // w2
  const MethodInfo *v245; // x3
  int32_t v246; // w1
  CGThumbnailListItem_o *p_msQBoardL1Names; // x0
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  int32_t v250; // w1
  CGThumbnailListItem_o *p_msQBoardL2Name_Story; // x0
  int32_t v252; // w2
  const MethodInfo *v253; // x3
  int32_t v254; // w1
  CGThumbnailListItem_o *p_msQBoardL2Name_Hero; // x0
  int32_t v256; // w2
  const MethodInfo *v257; // x3
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  __int64 v260; // x19
  int32_t v261; // w1
  int32_t v262; // w2
  const MethodInfo *v263; // x3
  int32_t v264; // w1
  int32_t v265; // w2
  const MethodInfo *v266; // x3
  int32_t v267; // w1
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  int32_t v270; // w1
  int32_t v271; // w2
  const MethodInfo *v272; // x3
  int32_t v273; // w1
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  int32_t v276; // w1
  int32_t v277; // w2
  const MethodInfo *v278; // x3
  int32_t v279; // w1
  CGThumbnailListItem_o *p_msQBoardL3Names; // x0
  int32_t v281; // w2
  const MethodInfo *v282; // x3
  int32_t v283; // w2
  const MethodInfo *v284; // x3
  __int64 v285; // x19
  int32_t v286; // w1
  int32_t v287; // w2
  const MethodInfo *v288; // x3
  int32_t v289; // w1
  int32_t v290; // w2
  const MethodInfo *v291; // x3
  int32_t v292; // w1
  int32_t v293; // w2
  const MethodInfo *v294; // x3
  int32_t v295; // w1
  int32_t v296; // w2
  const MethodInfo *v297; // x3
  int32_t v298; // w1
  int32_t v299; // w2
  const MethodInfo *v300; // x3
  int32_t v301; // w1
  int32_t v302; // w2
  const MethodInfo *v303; // x3
  int32_t v304; // w1
  CGThumbnailListItem_o *p_msLabelMainSprNames; // x0
  int32_t v306; // w2
  const MethodInfo *v307; // x3
  int32_t v308; // w2
  const MethodInfo *v309; // x3
  __int64 v310; // x19
  int32_t v311; // w1
  int32_t v312; // w2
  const MethodInfo *v313; // x3
  int32_t v314; // w1
  int32_t v315; // w2
  const MethodInfo *v316; // x3
  int32_t v317; // w1
  int32_t v318; // w2
  const MethodInfo *v319; // x3
  int32_t v320; // w1
  int32_t v321; // w2
  const MethodInfo *v322; // x3
  int32_t v323; // w1
  int32_t v324; // w2
  const MethodInfo *v325; // x3
  int32_t v326; // w1
  int32_t v327; // w2
  const MethodInfo *v328; // x3
  int32_t v329; // w1
  int32_t v330; // w2
  const MethodInfo *v331; // x3
  int32_t v332; // w1
  CGThumbnailListItem_o *p_QuestBoardApSpNames; // x0
  int32_t v334; // w2
  const MethodInfo *v335; // x3
  int32_t v336; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_ArrowOff; // x0
  int32_t v338; // w2
  const MethodInfo *v339; // x3
  int32_t v340; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_ArrowOn; // x0
  int32_t v342; // w2
  const MethodInfo *v343; // x3
  int32_t v344; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_ExArrowOff; // x0
  int32_t v346; // w2
  const MethodInfo *v347; // x3
  int32_t v348; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_ExArrowOn; // x0
  int32_t v350; // w2
  const MethodInfo *v351; // x3
  int32_t v352; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_LoopOff; // x0
  int32_t v354; // w2
  const MethodInfo *v355; // x3
  int32_t v356; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_LoopOn; // x0
  int32_t v358; // w2
  const MethodInfo *v359; // x3
  int32_t v360; // w1
  CGThumbnailListItem_o *p_msPhaseSprName_LoopFirstOff; // x0
  int32_t v362; // w2
  const MethodInfo *v363; // x3
  int32_t v364; // w1
  CGThumbnailListItem_o *p_CHAPTER_SP_BASE_NAME; // x0
  int32_t v366; // w2
  const MethodInfo *v367; // x3
  int32_t v368; // w1
  CGThumbnailListItem_o *p_CHAPTER_SP_UNIT_NAME; // x0
  int32_t v370; // w2
  const MethodInfo *v371; // x3
  int32_t v372; // w1
  CGThumbnailListItem_o *p_PRE_BATTLE_ORGANIZATION; // x0
  int32_t v374; // w2
  const MethodInfo *v375; // x3

  if ( (byte_4C3FBF3 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_22872/*"quest_board_icon_"*/);
    sub_1C37058(&StringLiteral_20224/*"icon_reward_step{0}"*/);
    sub_1C37058(&StringLiteral_20499/*"img_quest_lose_no_spend"*/);
    sub_1C37058(&StringLiteral_22884/*"questboard_cap_closed"*/);
    sub_1C37058(&StringLiteral_20580/*"img_slider_on"*/);
    sub_1C37058(&StringLiteral_20451/*"img_loop_off"*/);
    sub_1C37058(&StringLiteral_20525/*"img_questboard_story01"*/);
    sub_1C37058(&StringLiteral_22895/*"questboard_shohi_bg_01"*/);
    sub_1C37058(&StringLiteral_22881/*"questboard_ap_free"*/);
    sub_1C37058(&StringLiteral_22893/*"questboard_icon_cap{0:D2}"*/);
    sub_1C37058(&StringLiteral_20529/*"img_questboard_story03mask"*/);
    sub_1C37058(&StringLiteral_20504/*"img_quest_spend"*/);
    sub_1C37058(&StringLiteral_20509/*"img_questarrow_off"*/);
    sub_1C37058(&StringLiteral_17799/*"chaldea_category_{0}"*/);
    sub_1C37058(&StringLiteral_20527/*"img_questboard_story02mask"*/);
    sub_1C37058(&StringLiteral_20510/*"img_questarrow_on"*/);
    sub_1C37058(&StringLiteral_20521/*"img_questboard_main_"*/);
    sub_1C37058(&StringLiteral_22874/*"quest_board_outline_"*/);
    sub_1C37058(&StringLiteral_20500/*"img_quest_pre_organization"*/);
    sub_1C37058(&StringLiteral_20502/*"img_quest_save"*/);
    sub_1C37058(&StringLiteral_19313/*"event_war_"*/);
    sub_1C37058(&StringLiteral_22882/*"questboard_ap_main"*/);
    sub_1C37058(&StringLiteral_20531/*"img_questboard_story05mask"*/);
    sub_1C37058(&StringLiteral_22896/*"questboard_shohi_bg_02"*/);
    sub_1C37058(&StringLiteral_20519/*"img_questboard_hero03"*/);
    sub_1C37058(&StringLiteral_22887/*"questboard_cap_closed_special_3"*/);
    sub_1C37058(&StringLiteral_20520/*"img_questboard_knockdown"*/);
    sub_1C37058(&StringLiteral_22949/*"raid_point_old"*/);
    sub_1C37058(&StringLiteral_22946/*"raid_point"*/);
    sub_1C37058(&StringLiteral_22886/*"questboard_cap_closed_special_2"*/);
    sub_1C37058(&StringLiteral_20518/*"img_questboard_hero02"*/);
    sub_1C37058(&StringLiteral_20236/*"icon_spot_next"*/);
    sub_1C37058(&StringLiteral_22871/*"quest_board_"*/);
    sub_1C37058(&StringLiteral_22894/*"questboard_shohi_"*/);
    sub_1C37058(&StringLiteral_22947/*"raid_point_frame"*/);
    sub_1C37058(&StringLiteral_20516/*"img_questboard_free_"*/);
    sub_1C37058(&StringLiteral_22948/*"raid_point_frame_old"*/);
    sub_1C37058(&StringLiteral_20514/*"img_questboard_damage"*/);
    sub_1C37058(&StringLiteral_22873/*"quest_board_mask_"*/);
    sub_1C37058(&StringLiteral_6276/*"EventUI/QuestBoardIcon/"*/);
    sub_1C37058(&StringLiteral_20515/*"img_questboard_event{0:D3}"*/);
    sub_1C37058(&StringLiteral_20530/*"img_questboard_story04mask"*/);
    sub_1C37058(&StringLiteral_20533/*"img_questloop_on"*/);
    sub_1C37058(&StringLiteral_20532/*"img_questloop_off"*/);
    sub_1C37058(&StringLiteral_20536/*"img_questtxt_free"*/);
    sub_1C37058(&StringLiteral_22890/*"questboard_cap{0:D3}"*/);
    sub_1C37058(&StringLiteral_20528/*"img_questboard_story03"*/);
    sub_1C37058(&StringLiteral_20511/*"img_questboard_"*/);
    sub_1C37058(&StringLiteral_20506/*"img_quest_unit_{0:D2}"*/);
    sub_1C37058(&StringLiteral_22885/*"questboard_cap_closed_special"*/);
    sub_1C37058(&StringLiteral_20535/*"img_questtxt_event"*/);
    sub_1C37058(&StringLiteral_20517/*"img_questboard_hero01"*/);
    sub_1C37058(&StringLiteral_20507/*"img_questarrow1_off"*/);
    sub_1C37058(&StringLiteral_22883/*"questboard_ap_story"*/);
    sub_1C37058(&StringLiteral_20579/*"img_slider_off"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_20505/*"img_quest_spend2"*/);
    sub_1C37058(&StringLiteral_20498/*"img_quest_lasttime"*/);
    sub_1C37058(&StringLiteral_20508/*"img_questarrow1_on"*/);
    sub_1C37058(&StringLiteral_22888/*"questboard_cap_closed_special_{0}"*/);
    sub_1C37058(&StringLiteral_20526/*"img_questboard_story02"*/);
    sub_1C37058(&StringLiteral_22917/*"qyestboard_ap_free"*/);
    sub_1C37058(&StringLiteral_20235/*"icon_spot_free"*/);
    sub_1C37058(&StringLiteral_22880/*"questboard_ap_"*/);
    sub_1C37058(&StringLiteral_20501/*"img_quest_retreat_no_spend"*/);
    sub_1C37058(&StringLiteral_22889/*"questboard_cap_closed_{0}"*/);
    byte_4C3FBF3 = 1;
  }
  v3 = QuestBoardListViewItemDraw_TypeInfo;
  static_fields = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->POS_Y_ITVL_AREA = xmmword_C10050;
  *(_OWORD *)&static_fields->CLIP_W_AREA = xmmword_C0F6A0;
  static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  *(_OWORD *)&static_fields->PHASE_EXTRA_MAX = xmmword_C10060;
  *(_OWORD *)&static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = xmmword_C0E300;
  static_fields->CAMPAIGN_COST_COLOR.fields.a = 1.0;
  v3->static_fields->OVER_COST_COLOR = (struct UnityEngine_Color_o)xmmword_C0E5D0;
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
  *(_OWORD *)&v9->NEW_W_DEFAULT = xmmword_C0E4D0;
  *(_QWORD *)&v9->CLEAR_POS_AREA.fields.x = 0xC2500000431B0000LL;
  v9->CLEAR_POS_AREA.fields.z = 0.0;
  v10 = v3->static_fields;
  *(_QWORD *)&v10->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v10->CLEAR_POS_QUEST.fields.z = 0.0;
  v11 = v3->static_fields;
  *(_OWORD *)&v11->NEXT_POS_X_AREA_L = xmmword_C0E310;
  v12 = StringLiteral_20236/*"icon_spot_next"*/;
  v11->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20236/*"icon_spot_next"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->NEXT_ICON_SPRITE_NAME, v12, v1, v2);
  v13 = StringLiteral_20235/*"icon_spot_free"*/;
  v14 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v14->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20235/*"icon_spot_free"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->FREE_ICON_SPRITE_NAME, v13, v15, v16);
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
  *(_OWORD *)&v26->COST_BG_WIDTH_SINGLE = xmmword_C0E6E0;
  v26->COST_BG_WIDTH_DOUBLE_QP = 186;
  v27 = StringLiteral_22895/*"questboard_shohi_bg_01"*/;
  v26->COST_BG_ITEM = (struct System_String_o *)StringLiteral_22895/*"questboard_shohi_bg_01"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v26->COST_BG_ITEM, v27, v28, v29);
  v30 = StringLiteral_22896/*"questboard_shohi_bg_02"*/;
  p_COST_BG_QP = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (CGThumbnailListItem_c *)StringLiteral_22896/*"questboard_shohi_bg_02"*/;
  sub_1C36FFC(p_COST_BG_QP, v30, v32, v33);
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
  *(_OWORD *)&v39->COST_2_ICON_NORMAL_POSITION_X = xmmword_C0F520;
  *(_OWORD *)&v39->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_C0FB60;
  *(_OWORD *)&v39->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_C0FA70;
  v39->COST_LABEL_WIDTH_FOR_THREE_ITEM = 30.4;
  *(_QWORD *)&v39->COST_LABEL_DEFAULT_SPACING = 0x800000009LL;
  *(_QWORD *)&v39->SHOHI_SP_POS.fields.x = 0x41C0000041800000LL;
  v39->SHOHI_SP_POS.fields.z = 0.0;
  v40 = v34->static_fields;
  *(_QWORD *)&v40->SHOHI_SP_POS_WAR_BOARD.fields.x = 0x41C8000041900000LL;
  v40->SHOHI_SP_POS_WAR_BOARD.fields.z = 0.0;
  v41 = StringLiteral_20504/*"img_quest_spend"*/;
  p_SHOHI_SP_NAME = (CGThumbnailListItem_o *)&v34->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20504/*"img_quest_spend"*/;
  sub_1C36FFC(p_SHOHI_SP_NAME, v41, v43, v44);
  v45 = StringLiteral_20505/*"img_quest_spend2"*/;
  p_SHOHI_SP_NAME_WAR_BOARD = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (CGThumbnailListItem_c *)StringLiteral_20505/*"img_quest_spend2"*/;
  sub_1C36FFC(p_SHOHI_SP_NAME_WAR_BOARD, v45, v47, v48);
  v51 = QuestBoardListViewItemDraw_TypeInfo;
  v52 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&v52->QUEST_BOARD_PHASE_INTERVAL = xmmword_C0F230;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    v51 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4C3C921 = 1;
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
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    v53 = UnityEngine_Vector3_TypeInfo;
    v51 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4C3C926 = 1;
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
  v80 = StringLiteral_19313/*"event_war_"*/;
  p_EVENT_WAR_SPNAME_PREFIX = (CGThumbnailListItem_o *)&v51->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_19313/*"event_war_"*/;
  sub_1C36FFC(p_EVENT_WAR_SPNAME_PREFIX, v80, v49, v50);
  v82 = StringLiteral_17799/*"chaldea_category_{0}"*/;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_17799/*"chaldea_category_{0}"*/;
  sub_1C36FFC(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v82, v84, v85);
  v86 = StringLiteral_22871/*"quest_board_"*/;
  p_QUEST_BOARD_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22871/*"quest_board_"*/;
  sub_1C36FFC(p_QUEST_BOARD_SPNAME_PREFIX, v86, v88, v89);
  v90 = StringLiteral_20511/*"img_questboard_"*/;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_20511/*"img_questboard_"*/;
  sub_1C36FFC(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v90, v92, v93);
  v94 = StringLiteral_22872/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22872/*"quest_board_icon_"*/;
  sub_1C36FFC(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v94, v96, v97);
  v98 = StringLiteral_22873/*"quest_board_mask_"*/;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22873/*"quest_board_mask_"*/;
  sub_1C36FFC(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v98, v100, v101);
  v102 = StringLiteral_22894/*"questboard_shohi_"*/;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22894/*"questboard_shohi_"*/;
  sub_1C36FFC(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v102, v104, v105);
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v107 = StringLiteral_22880/*"questboard_ap_"*/;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22880/*"questboard_ap_"*/;
  sub_1C36FFC(p_QUEST_BOARD_AP_SPNAME_PREFIX, v107, v108, v109);
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  v111 = StringLiteral_20514/*"img_questboard_damage"*/;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20514/*"img_questboard_damage"*/;
  sub_1C36FFC(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v111, v112, v113);
  p_QUEST_BOARD_PREV_ICON_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  v115 = StringLiteral_20498/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20498/*"img_quest_lasttime"*/;
  sub_1C36FFC(p_QUEST_BOARD_PREV_ICON_NAME, v115, v116, v117);
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  v119 = StringLiteral_20520/*"img_questboard_knockdown"*/;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20520/*"img_questboard_knockdown"*/;
  sub_1C36FFC(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v119, v120, v121);
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  v123 = StringLiteral_6276/*"EventUI/QuestBoardIcon/"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (CGThumbnailListItem_c *)StringLiteral_6276/*"EventUI/QuestBoardIcon/"*/;
  sub_1C36FFC(p_QUEST_BOARD_ICON_TEXTURE_PATH, v123, v124, v125);
  v126 = StringLiteral_22872/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_22872/*"quest_board_icon_"*/;
  sub_1C36FFC(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v126, v128, v129);
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
  v131 = StringLiteral_20224/*"icon_reward_step{0}"*/;
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX->klass = (CGThumbnailListItem_c *)StringLiteral_20224/*"icon_reward_step{0}"*/;
  sub_1C36FFC(p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v131, v132, v133);
  v134 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v134->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 0x300000004ELL;
  *(_QWORD *)&v134->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 0x4000000000000013LL;
  v135 = StringLiteral_20580/*"img_slider_on"*/;
  v134->BANNER_POINT_SPNAME_ON = (struct System_String_o *)StringLiteral_20580/*"img_slider_on"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v134->BANNER_POINT_SPNAME_ON, v135, v136, v137);
  p_BANNER_POINT_SPNAME_OFF = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  v139 = StringLiteral_20579/*"img_slider_off"*/;
  p_BANNER_POINT_SPNAME_OFF->klass = (CGThumbnailListItem_c *)StringLiteral_20579/*"img_slider_off"*/;
  sub_1C36FFC(p_BANNER_POINT_SPNAME_OFF, v139, v140, v141);
  v142 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v142->SHORTCUT_FACE_MASK_SP_W = 0x7C00000088LL;
  v143 = StringLiteral_20527/*"img_questboard_story02mask"*/;
  v142->SHORTCUT_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20527/*"img_questboard_story02mask"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v142->SHORTCUT_FACE_MASK_SPNAME, v143, v144, v145);
  p_QUEST_STORY_FACE_MASK_SPNAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  v147 = StringLiteral_20529/*"img_questboard_story03mask"*/;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (CGThumbnailListItem_c *)StringLiteral_20529/*"img_questboard_story03mask"*/;
  sub_1C36FFC(p_QUEST_STORY_FACE_MASK_SPNAME, v147, v148, v149);
  p_QUEST_MAIN_FACE_MASK_SPNAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  v151 = StringLiteral_20530/*"img_questboard_story04mask"*/;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (CGThumbnailListItem_c *)StringLiteral_20530/*"img_questboard_story04mask"*/;
  sub_1C36FFC(p_QUEST_MAIN_FACE_MASK_SPNAME, v151, v152, v153);
  p_QUEST_EVENT_FACE_MASK_SPNAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  v155 = StringLiteral_20531/*"img_questboard_story05mask"*/;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (CGThumbnailListItem_c *)StringLiteral_20531/*"img_questboard_story05mask"*/;
  sub_1C36FFC(p_QUEST_EVENT_FACE_MASK_SPNAME, v155, v156, v157);
  v158 = sub_1C37100(string___TypeInfo, 2);
  if ( !v158 )
    goto LABEL_49;
  v161 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v162 = StringLiteral_22948/*"raid_point_frame_old"*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_22948/*"raid_point_frame_old"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v158 + 32), v162, v159, v160);
  if ( *(_DWORD *)(v161 + 24) <= 1u )
    goto LABEL_48;
  v165 = StringLiteral_22947/*"raid_point_frame"*/;
  *(_QWORD *)(v161 + 40) = StringLiteral_22947/*"raid_point_frame"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v161 + 40), v165, v163, v164);
  p_RP_SPNAME_FRAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (CGThumbnailListItem_c *)v161;
  sub_1C36FFC(p_RP_SPNAME_FRAME, v161, v167, v168);
  v158 = sub_1C37100(string___TypeInfo, 2);
  if ( !v158 )
    goto LABEL_49;
  v171 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v172 = StringLiteral_22949/*"raid_point_old"*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_22949/*"raid_point_old"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v158 + 32), v172, v169, v170);
  if ( *(_DWORD *)(v171 + 24) <= 1u )
    goto LABEL_48;
  v175 = StringLiteral_22946/*"raid_point"*/;
  *(_QWORD *)(v171 + 40) = StringLiteral_22946/*"raid_point"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v171 + 40), v175, v173, v174);
  p_RP_SPNAME_POINT = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (CGThumbnailListItem_c *)v171;
  sub_1C36FFC(p_RP_SPNAME_POINT, v171, v177, v178);
  v179 = QuestBoardListViewItemDraw_TypeInfo;
  v180 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v180->RESTRICTION_FONT_SPACING_MIN = -1;
  *(_QWORD *)&v180->RESTRICTION_DEFAULT_FONT_SIZE = 18;
  *(_QWORD *)&v180->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v180->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v181 = v179->static_fields;
  *(_QWORD *)&v181->RESTRICTION_FONT_SIZE_ALLOUT = 0x700000000ELL;
  *(_QWORD *)&v181->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v181->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v182 = v179->static_fields;
  *(_QWORD *)&v182->BANNER_ENTORY_EFFECT_DURATION = 0x41F000003F000000LL;
  v183 = StringLiteral_20502/*"img_quest_save"*/;
  v182->QUEST_BOARD_PREV_PAUSE_ICON_NAME = (struct System_String_o *)StringLiteral_20502/*"img_quest_save"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v182->QUEST_BOARD_PREV_PAUSE_ICON_NAME, v183, v184, v185);
  v186 = StringLiteral_20499/*"img_quest_lose_no_spend"*/;
  p_QUEST_LOSE_NO_SPEND_SPRITE = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_LOSE_NO_SPEND_SPRITE;
  p_QUEST_LOSE_NO_SPEND_SPRITE->klass = (CGThumbnailListItem_c *)StringLiteral_20499/*"img_quest_lose_no_spend"*/;
  sub_1C36FFC(p_QUEST_LOSE_NO_SPEND_SPRITE, v186, v188, v189);
  v190 = StringLiteral_20501/*"img_quest_retreat_no_spend"*/;
  p_QUEST_RETREAT_NO_SPEND_SPRITE = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_RETREAT_NO_SPEND_SPRITE;
  p_QUEST_RETREAT_NO_SPEND_SPRITE->klass = (CGThumbnailListItem_c *)StringLiteral_20501/*"img_quest_retreat_no_spend"*/;
  sub_1C36FFC(p_QUEST_RETREAT_NO_SPEND_SPRITE, v190, v192, v193);
  v194 = StringLiteral_22874/*"quest_board_outline_"*/;
  p_QuestBoardFrameNamePrefix = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardFrameNamePrefix;
  p_QuestBoardFrameNamePrefix->klass = (CGThumbnailListItem_c *)StringLiteral_22874/*"quest_board_outline_"*/;
  sub_1C36FFC(p_QuestBoardFrameNamePrefix, v194, v196, v197);
  v198 = StringLiteral_22884/*"questboard_cap_closed"*/;
  p_QBOARD_CAP_CLOSED = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (CGThumbnailListItem_c *)StringLiteral_22884/*"questboard_cap_closed"*/;
  sub_1C36FFC(p_QBOARD_CAP_CLOSED, v198, v200, v201);
  v202 = StringLiteral_22889/*"questboard_cap_closed_{0}"*/;
  p_QBOARD_CAP_CLOSED_FORMAT = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
  p_QBOARD_CAP_CLOSED_FORMAT->klass = (CGThumbnailListItem_c *)StringLiteral_22889/*"questboard_cap_closed_{0}"*/;
  sub_1C36FFC(p_QBOARD_CAP_CLOSED_FORMAT, v202, v204, v205);
  v206 = StringLiteral_22888/*"questboard_cap_closed_special_{0}"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (CGThumbnailListItem_c *)StringLiteral_22888/*"questboard_cap_closed_special_{0}"*/;
  sub_1C36FFC(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v206, v208, v209);
  v210 = StringLiteral_22885/*"questboard_cap_closed_special"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (CGThumbnailListItem_c *)StringLiteral_22885/*"questboard_cap_closed_special"*/;
  sub_1C36FFC(p_QBOARD_CAP_CLOSED_SPECIAL, v210, v212, v213);
  v214 = StringLiteral_22886/*"questboard_cap_closed_special_2"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (CGThumbnailListItem_c *)StringLiteral_22886/*"questboard_cap_closed_special_2"*/;
  sub_1C36FFC(p_QBOARD_CAP_CLOSED_SPECIAL_2, v214, v216, v217);
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  v219 = StringLiteral_22887/*"questboard_cap_closed_special_3"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (CGThumbnailListItem_c *)StringLiteral_22887/*"questboard_cap_closed_special_3"*/;
  sub_1C36FFC(p_QBOARD_CAP_CLOSED_SPECIAL_3, v219, v220, v221);
  v158 = sub_1C37100(string___TypeInfo, 8);
  if ( !v158 )
    goto LABEL_49;
  v224 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v225 = StringLiteral_20515/*"img_questboard_event{0:D3}"*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_20515/*"img_questboard_event{0:D3}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v158 + 32), v225, v222, v223);
  if ( *(_DWORD *)(v224 + 24) <= 1u )
    goto LABEL_48;
  v228 = StringLiteral_22890/*"questboard_cap{0:D3}"*/;
  *(_QWORD *)(v224 + 40) = StringLiteral_22890/*"questboard_cap{0:D3}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v224 + 40), v228, v226, v227);
  if ( *(_DWORD *)(v224 + 24) <= 2u )
    goto LABEL_48;
  v231 = StringLiteral_17799/*"chaldea_category_{0}"*/;
  *(_QWORD *)(v224 + 48) = StringLiteral_17799/*"chaldea_category_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v224 + 48), v231, v229, v230);
  if ( *(_DWORD *)(v224 + 24) <= 3u )
    goto LABEL_48;
  v234 = StringLiteral_20525/*"img_questboard_story01"*/;
  *(_QWORD *)(v224 + 56) = StringLiteral_20525/*"img_questboard_story01"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v224 + 56), v234, v232, v233);
  if ( *(_DWORD *)(v224 + 24) <= 4u )
    goto LABEL_48;
  v237 = StringLiteral_20517/*"img_questboard_hero01"*/;
  *(_QWORD *)(v224 + 64) = StringLiteral_20517/*"img_questboard_hero01"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v224 + 64), v237, v235, v236);
  if ( *(_DWORD *)(v224 + 24) <= 5u )
    goto LABEL_48;
  v240 = StringLiteral_1/*""*/;
  *(_QWORD *)(v224 + 72) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v224 + 72), v240, v238, v239);
  if ( *(_DWORD *)(v224 + 24) <= 6u )
    goto LABEL_48;
  v243 = StringLiteral_22890/*"questboard_cap{0:D3}"*/;
  *(_QWORD *)(v224 + 80) = StringLiteral_22890/*"questboard_cap{0:D3}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v224 + 80), v243, v241, v242);
  if ( *(_DWORD *)(v224 + 24) <= 7u )
    goto LABEL_48;
  v246 = StringLiteral_17799/*"chaldea_category_{0}"*/;
  *(_QWORD *)(v224 + 88) = StringLiteral_17799/*"chaldea_category_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v224 + 88), v246, v244, v245);
  p_msQBoardL1Names = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (CGThumbnailListItem_c *)v224;
  sub_1C36FFC(p_msQBoardL1Names, v224, v248, v249);
  v250 = StringLiteral_20526/*"img_questboard_story02"*/;
  p_msQBoardL2Name_Story = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (CGThumbnailListItem_c *)StringLiteral_20526/*"img_questboard_story02"*/;
  sub_1C36FFC(p_msQBoardL2Name_Story, v250, v252, v253);
  v254 = StringLiteral_20518/*"img_questboard_hero02"*/;
  p_msQBoardL2Name_Hero = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (CGThumbnailListItem_c *)StringLiteral_20518/*"img_questboard_hero02"*/;
  sub_1C36FFC(p_msQBoardL2Name_Hero, v254, v256, v257);
  v158 = sub_1C37100(string___TypeInfo, 7);
  if ( !v158 )
    goto LABEL_49;
  v260 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v261 = StringLiteral_1/*""*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v158 + 32), v261, v258, v259);
  if ( *(_DWORD *)(v260 + 24) <= 1u )
    goto LABEL_48;
  v264 = StringLiteral_20521/*"img_questboard_main_"*/;
  *(_QWORD *)(v260 + 40) = StringLiteral_20521/*"img_questboard_main_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v260 + 40), v264, v262, v263);
  if ( *(_DWORD *)(v260 + 24) <= 2u )
    goto LABEL_48;
  v267 = StringLiteral_20516/*"img_questboard_free_"*/;
  *(_QWORD *)(v260 + 48) = StringLiteral_20516/*"img_questboard_free_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v260 + 48), v267, v265, v266);
  if ( *(_DWORD *)(v260 + 24) <= 3u )
    goto LABEL_48;
  v270 = StringLiteral_20528/*"img_questboard_story03"*/;
  *(_QWORD *)(v260 + 56) = StringLiteral_20528/*"img_questboard_story03"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v260 + 56), v270, v268, v269);
  if ( *(_DWORD *)(v260 + 24) <= 4u )
    goto LABEL_48;
  v273 = StringLiteral_1/*""*/;
  *(_QWORD *)(v260 + 64) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v260 + 64), v273, v271, v272);
  if ( *(_DWORD *)(v260 + 24) <= 5u )
    goto LABEL_48;
  v276 = StringLiteral_20516/*"img_questboard_free_"*/;
  *(_QWORD *)(v260 + 72) = StringLiteral_20516/*"img_questboard_free_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v260 + 72), v276, v274, v275);
  if ( *(_DWORD *)(v260 + 24) <= 6u )
    goto LABEL_48;
  v279 = StringLiteral_20519/*"img_questboard_hero03"*/;
  *(_QWORD *)(v260 + 80) = StringLiteral_20519/*"img_questboard_hero03"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v260 + 80), v279, v277, v278);
  p_msQBoardL3Names = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (CGThumbnailListItem_c *)v260;
  sub_1C36FFC(p_msQBoardL3Names, v260, v281, v282);
  v158 = sub_1C37100(string___TypeInfo, 7);
  if ( !v158 )
    goto LABEL_49;
  v285 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v286 = StringLiteral_1/*""*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v158 + 32), v286, v283, v284);
  if ( *(_DWORD *)(v285 + 24) <= 1u )
    goto LABEL_48;
  v289 = StringLiteral_1/*""*/;
  *(_QWORD *)(v285 + 40) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v285 + 40), v289, v287, v288);
  if ( *(_DWORD *)(v285 + 24) <= 2u )
    goto LABEL_48;
  v292 = StringLiteral_20536/*"img_questtxt_free"*/;
  *(_QWORD *)(v285 + 48) = StringLiteral_20536/*"img_questtxt_free"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v285 + 48), v292, v290, v291);
  if ( *(_DWORD *)(v285 + 24) <= 3u )
    goto LABEL_48;
  v295 = StringLiteral_1/*""*/;
  *(_QWORD *)(v285 + 56) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v285 + 56), v295, v293, v294);
  if ( *(_DWORD *)(v285 + 24) <= 4u
    || (v298 = StringLiteral_1/*""*/,
        *(_QWORD *)(v285 + 64) = StringLiteral_1/*""*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v285 + 64), v298, v296, v297),
        *(_DWORD *)(v285 + 24) <= 5u)
    || (v301 = StringLiteral_20535/*"img_questtxt_event"*/,
        *(_QWORD *)(v285 + 72) = StringLiteral_20535/*"img_questtxt_event"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v285 + 72), v301, v299, v300),
        *(_DWORD *)(v285 + 24) <= 6u) )
  {
LABEL_48:
    sub_1C372BC(v158);
  }
  v304 = StringLiteral_1/*""*/;
  *(_QWORD *)(v285 + 80) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v285 + 80), v304, v302, v303);
  p_msLabelMainSprNames = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (CGThumbnailListItem_c *)v285;
  sub_1C36FFC(p_msLabelMainSprNames, v285, v306, v307);
  v158 = sub_1C37100(string___TypeInfo, 8);
  if ( !v158 )
LABEL_49:
    sub_1C372B4(v158);
  v310 = v158;
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_48;
  v311 = StringLiteral_1/*""*/;
  *(_QWORD *)(v158 + 32) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v158 + 32), v311, v308, v309);
  if ( *(_DWORD *)(v310 + 24) <= 1u )
    goto LABEL_48;
  v314 = StringLiteral_22882/*"questboard_ap_main"*/;
  *(_QWORD *)(v310 + 40) = StringLiteral_22882/*"questboard_ap_main"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v310 + 40), v314, v312, v313);
  if ( *(_DWORD *)(v310 + 24) <= 2u )
    goto LABEL_48;
  v317 = StringLiteral_22881/*"questboard_ap_free"*/;
  *(_QWORD *)(v310 + 48) = StringLiteral_22881/*"questboard_ap_free"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v310 + 48), v317, v315, v316);
  if ( *(_DWORD *)(v310 + 24) <= 3u )
    goto LABEL_48;
  v320 = StringLiteral_22883/*"questboard_ap_story"*/;
  *(_QWORD *)(v310 + 56) = StringLiteral_22883/*"questboard_ap_story"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v310 + 56), v320, v318, v319);
  if ( *(_DWORD *)(v310 + 24) <= 4u )
    goto LABEL_48;
  v323 = StringLiteral_1/*""*/;
  *(_QWORD *)(v310 + 64) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v310 + 64), v323, v321, v322);
  if ( *(_DWORD *)(v310 + 24) <= 5u )
    goto LABEL_48;
  v326 = StringLiteral_22881/*"questboard_ap_free"*/;
  *(_QWORD *)(v310 + 72) = StringLiteral_22881/*"questboard_ap_free"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v310 + 72), v326, v324, v325);
  if ( *(_DWORD *)(v310 + 24) <= 6u )
    goto LABEL_48;
  v329 = StringLiteral_1/*""*/;
  *(_QWORD *)(v310 + 80) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v310 + 80), v329, v327, v328);
  if ( *(_DWORD *)(v310 + 24) <= 7u )
    goto LABEL_48;
  v332 = StringLiteral_22917/*"qyestboard_ap_free"*/;
  *(_QWORD *)(v310 + 88) = StringLiteral_22917/*"qyestboard_ap_free"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v310 + 88), v332, v330, v331);
  p_QuestBoardApSpNames = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (CGThumbnailListItem_c *)v310;
  sub_1C36FFC(p_QuestBoardApSpNames, v310, v334, v335);
  v336 = StringLiteral_20509/*"img_questarrow_off"*/;
  p_msPhaseSprName_ArrowOff = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (CGThumbnailListItem_c *)StringLiteral_20509/*"img_questarrow_off"*/;
  sub_1C36FFC(p_msPhaseSprName_ArrowOff, v336, v338, v339);
  v340 = StringLiteral_20510/*"img_questarrow_on"*/;
  p_msPhaseSprName_ArrowOn = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (CGThumbnailListItem_c *)StringLiteral_20510/*"img_questarrow_on"*/;
  sub_1C36FFC(p_msPhaseSprName_ArrowOn, v340, v342, v343);
  v344 = StringLiteral_20507/*"img_questarrow1_off"*/;
  p_msPhaseSprName_ExArrowOff = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (CGThumbnailListItem_c *)StringLiteral_20507/*"img_questarrow1_off"*/;
  sub_1C36FFC(p_msPhaseSprName_ExArrowOff, v344, v346, v347);
  v348 = StringLiteral_20508/*"img_questarrow1_on"*/;
  p_msPhaseSprName_ExArrowOn = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (CGThumbnailListItem_c *)StringLiteral_20508/*"img_questarrow1_on"*/;
  sub_1C36FFC(p_msPhaseSprName_ExArrowOn, v348, v350, v351);
  v352 = StringLiteral_20532/*"img_questloop_off"*/;
  p_msPhaseSprName_LoopOff = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (CGThumbnailListItem_c *)StringLiteral_20532/*"img_questloop_off"*/;
  sub_1C36FFC(p_msPhaseSprName_LoopOff, v352, v354, v355);
  v356 = StringLiteral_20533/*"img_questloop_on"*/;
  p_msPhaseSprName_LoopOn = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (CGThumbnailListItem_c *)StringLiteral_20533/*"img_questloop_on"*/;
  sub_1C36FFC(p_msPhaseSprName_LoopOn, v356, v358, v359);
  v360 = StringLiteral_20451/*"img_loop_off"*/;
  p_msPhaseSprName_LoopFirstOff = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (CGThumbnailListItem_c *)StringLiteral_20451/*"img_loop_off"*/;
  sub_1C36FFC(p_msPhaseSprName_LoopFirstOff, v360, v362, v363);
  v364 = StringLiteral_22893/*"questboard_icon_cap{0:D2}"*/;
  p_CHAPTER_SP_BASE_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_22893/*"questboard_icon_cap{0:D2}"*/;
  sub_1C36FFC(p_CHAPTER_SP_BASE_NAME, v364, v366, v367);
  v368 = StringLiteral_20506/*"img_quest_unit_{0:D2}"*/;
  p_CHAPTER_SP_UNIT_NAME = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (CGThumbnailListItem_c *)StringLiteral_20506/*"img_quest_unit_{0:D2}"*/;
  sub_1C36FFC(p_CHAPTER_SP_UNIT_NAME, v368, v370, v371);
  v372 = StringLiteral_20500/*"img_quest_pre_organization"*/;
  p_PRE_BATTLE_ORGANIZATION = (CGThumbnailListItem_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (CGThumbnailListItem_c *)StringLiteral_20500/*"img_quest_pre_organization"*/;
  sub_1C36FFC(p_PRE_BATTLE_ORGANIZATION, v372, v374, v375);
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

  if ( (byte_4C3FBF2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UISprite__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&UISprite___TypeInfo);
    byte_4C3FBF2 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1C37100(UnityEngine_GameObject___TypeInfo, 4);
  this->fields.mStatusSp = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mStatusSp, (int32_t)v3, v4, v5);
  v6 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v6 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v7 = (struct UISprite_array *)sub_1C37100(UISprite___TypeInfo, (unsigned int)v6->static_fields->PHASE_EXTRA_MAX);
  this->fields.mPhaseSp = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mPhaseSp, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMultiSecondBattleInformation, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.rewardIconAlphaSyncWidgetList = (struct System_Collections_Generic_List_UIWidget__o *)v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rewardIconAlphaSyncWidgetList, (int32_t)v13, v14, v15);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestBoardListViewItemDraw__Awake(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UILabel_o *mOptionRestrinctionLb; // x8

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  this->fields._bannerState_k__BackingField = 0;
  if ( !mOptionRestrinctionLb )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  BoardOptionEventTargetComponent_o *v5; // x0

  if ( (byte_4C3FBDE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FBDE = 1;
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
      v5 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v5 )
        goto LABEL_16;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v5, 0) )
      {
        v5 = this->fields.eventTargetComponent;
        if ( !v5 )
          goto LABEL_16;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v5, 0) )
        {
          v5 = this->fields.eventTargetComponent;
          if ( v5 )
          {
            BoardOptionEventTargetComponent__SetNextTarget(v5, 0);
            return;
          }
LABEL_16:
          sub_1C372B4(v5);
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
  int32_t eventCampaignEnt; // w1
  int32_t v8; // w25
  QuestBoardInformationText_o *v9; // x26
  QuestBoardListViewItem_o *v10; // x1
  int64_t Time; // x3
  const MethodInfo *v12; // x4
  QuestBoardListViewItemDraw_o *v13; // x0
  int32_t v14; // w2

  while ( 1 )
  {
    if ( (byte_4C3FBD7 & 1) == 0 )
    {
      sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__);
      sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
      sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3FBD7 = 1;
    }
    if ( (byte_4C3FBD8 & 1) == 0 )
    {
      sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
      byte_4C3FBD8 = 1;
    }
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
    if ( !mInfoTextList )
      break;
    eventCampaignEnt = (int32_t)mInfoTextList->fields.eventCampaignEnt;
    if ( eventCampaignEnt < 2 )
      break;
    if ( !questBoardManager )
      goto LABEL_28;
    mInfoTextList = (QuestBoardInformationText_o *)QuestBoardListViewManager__GetAlphaAnimCnt(
                                                     questBoardManager,
                                                     eventCampaignEnt,
                                                     0);
    if ( !this->fields.mInfoTextList )
      goto LABEL_28;
    v8 = (int)mInfoTextList;
    mInfoTextList = (QuestBoardInformationText_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList,
                                                     (int32_t)mInfoTextList,
                                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
      (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__);
  }
  if ( (byte_4C3FBD9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C3FBD9 = 1;
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
  }
  if ( mInfoTextList && LODWORD(mInfoTextList->fields.eventCampaignEnt) )
  {
    mInfoTextList = (QuestBoardInformationText_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)mInfoTextList,
                                                     0,
                                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !mInfoTextList )
LABEL_28:
      sub_1C372B4(mInfoTextList);
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

  if ( (byte_4C3FBDC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    byte_4C3FBDC = 1;
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
  unsigned int v12; // w8
  unsigned int v13; // w8

  if ( (byte_4C3FBCC & 1) == 0 )
  {
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&StringLiteral_1122/*"0"*/);
    byte_4C3FBCC = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_1122/*"0"*/;
  if ( isUppercase )
    v6 = 32;
  else
    v6 = 0;
  v7 = n % 0xAu;
  v8 = 96 - v6;
  v9 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63640072(v9, 5, 0);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v13 = n / 0x64u % 0xA;
      if ( v13 >= 2 )
      {
        if ( !v9 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_63649048(v9, v8 | v13, 0);
      }
      else if ( !v9 )
      {
LABEL_25:
        sub_1C372B4(v10);
      }
      System_Text_StringBuilder__Append_63649048(v9, 107 - v6, 0);
      v12 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v9 )
        goto LABEL_25;
      v12 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v12 >= 2 )
      System_Text_StringBuilder__Append_63649048(v9, v8 | v12, 0);
    System_Text_StringBuilder__Append_63649048(v9, 106 - v6, 0);
    if ( !v7 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                                  v9,
                                  v9->klass->vtable._3_ToString.method);
  }
  else if ( !v9 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_63649048(v9, v8 | v7, 0);
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x23
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x24
  DataManager_o *v8; // x25
  int32_t warId; // w22
  Il2CppObject *MasterData_object; // x21
  int64_t v11; // x19
  __int64 v12; // x8
  QuestBoardInformationText_c **v13; // x23
  BoardMessageEntity_array *v14; // x22
  int v15; // w20
  int v16; // w25
  BoardMessageEntity_o *v17; // x26
  System_String_o *message; // x29
  int64_t closedAt; // x24
  System_Collections_Generic_List_object__o *mInfoTextList; // x27
  QuestBoardInformationText_o *v21; // x0
  Il2CppObject *v22; // x28
  BoardMessageEntity_o *v23; // x1
  System_String_o *v24; // x2
  int64_t v25; // x3
  int64_t v26; // x29
  System_String_o *v27; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  EventCampaignEntity_o *Data; // x0
  System_String_o *v35; // x24
  int64_t v36; // x29
  QuestBoardInformationText_c **v37; // x19
  System_Collections_Generic_List_object__o *v38; // x27
  QuestBoardInformationText_c *v39; // x8
  EventCampaignEntity_o *v40; // x23
  QuestBoardInformationText_o *v41; // x28
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  QuestBoardInformationText_c **v48; // x20
  _BOOL4 HasFlag; // w25
  const MethodInfo *v50; // x3
  struct EventEntity_o *eventEnt; // x8
  BoardMessageEntity_o *OverrideQuestMessage; // x0
  BoardMessageEntity_o *v53; // x25
  il2cpp_array_size_t max_length; // x8
  BoardMessageEntity_o *v55; // x27
  System_Collections_Generic_List_object__o *v56; // x25
  System_String_o *v57; // x24
  int64_t endTime; // x19
  QuestBoardInformationText_o *v59; // x26
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  int v66; // w8
  void *v67; // x23
  unsigned int v68; // w27
  EventEntity_o *v69; // x24
  int32_t id; // w25
  _DWORD *v71; // x26
  const MethodInfo *v72; // x3
  int32_t v73; // w19
  BoardMessageEntity_o *v74; // x25
  System_String_o *v75; // x19
  Il2CppObject *EventName; // x0
  System_String_o *v77; // x19
  System_Collections_Generic_List_object__o *v78; // x25
  int64_t v79; // x26
  QuestBoardInformationText_o *v80; // x24
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  struct MapControl_QuestInfo_o *v87; // [xsp+0h] [xbp-A0h]
  struct MapControl_AreaBoardInfo_o *v88; // [xsp+8h] [xbp-98h]
  DataMasterBase_TMaster__TEntity__PKType__o *v89; // [xsp+10h] [xbp-90h]
  DataManager_o *v90; // [xsp+18h] [xbp-88h]
  int32_t key; // [xsp+2Ch] [xbp-74h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C3FBA8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_BoardMessageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_13430/*"TIME_REST_QUEST_BOARD_EVENT"*/);
    sub_1C37058(&StringLiteral_13428/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4C3FBA8 = 1;
  }
  entity = 0;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_86;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_86;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_86;
  v8 = (DataManager_o *)Instance;
  if ( !Instance )
    goto LABEL_86;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v89 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        v8,
                                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = DataManager__GetMasterData_object_(
               v8,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_86;
  v11 = checkTime;
  v90 = v8;
  v87 = quest_info_k__BackingField;
  v88 = AreaBoardInfo_k__BackingField;
  key = warId;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0);
  if ( !Instance )
    goto LABEL_86;
  v12 = *((_QWORD *)Instance + 3);
  v13 = &QuestBoardInformationText_TypeInfo;
  v14 = (BoardMessageEntity_array *)Instance;
  v15 = v12 - 1;
  if ( (int)v12 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = v14->m_Items[v16];
      if ( !v17 )
        break;
      switch ( v17->fields.referenceType )
      {
        case 1:
          message = v17->fields.message;
          closedAt = v17->fields.closedAt;
          mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          v21 = (QuestBoardInformationText_o *)sub_1C372A4(*v13);
          v22 = (Il2CppObject *)v21;
          v23 = v17;
          v24 = message;
          v25 = closedAt;
          goto LABEL_25;
        case 2:
          Instance = DataManager__GetMasterData_object_(
                       v90,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v17->fields.referenceId,
                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v26 = *((int *)Instance + 39);
          break;
        case 3:
          Instance = DataManager__GetMasterData_object_(
                       v90,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v17->fields.referenceId,
                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v26 = *((int *)Instance + 40);
          break;
        case 4:
          Instance = v89;
          if ( !v89 )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v89,
                       v17->fields.referenceId,
                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v26 = *((_QWORD *)Instance + 12);
          break;
        case 5:
          if ( !MasterData_object )
            goto LABEL_86;
          Data = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v17->fields.referenceId, 0);
          v35 = v17->fields.message;
          v36 = v17->fields.closedAt;
          v37 = v13;
          v38 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          v39 = *v13;
          v40 = Data;
          v41 = (QuestBoardInformationText_o *)sub_1C372A4(v39);
          QuestBoardInformationText___ctor_36469312(v41, v17, v35, v36, checkTime, v40, 0);
          if ( !v38 )
            goto LABEL_86;
          items = v38->fields._items;
          v45 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v38->fields._version;
          if ( !items )
            goto LABEL_86;
          size = v38->fields._size;
          v13 = v37;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)v41,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v38->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v41;
            sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v41, v42, v43);
          }
          v11 = checkTime;
          goto LABEL_37;
        default:
          goto LABEL_37;
      }
      if ( v26 - v11 >= 0 )
      {
        v27 = v17->fields.message;
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        v21 = (QuestBoardInformationText_o *)sub_1C372A4(*v13);
        v22 = (Il2CppObject *)v21;
        v23 = v17;
        v24 = v27;
        v25 = v26;
LABEL_25:
        QuestBoardInformationText___ctor_36469312(v21, v23, v24, v25, v11, 0, 0);
        if ( !mInfoTextList )
          break;
        v30 = mInfoTextList->fields._items;
        v31 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !v30 )
          break;
        v32 = mInfoTextList->fields._size;
        if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            v22,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &v30->obj.klass + v32;
          mInfoTextList->fields._size = v32 + 1;
          v33[4] = (Il2CppClass *)v22;
          sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v22, v28, v29);
        }
      }
LABEL_37:
      if ( v15 == v16 )
        goto LABEL_40;
      if ( (unsigned int)++v16 >= LODWORD(v14->max_length) )
        goto LABEL_87;
    }
LABEL_86:
    sub_1C372B4(Instance);
  }
LABEL_40:
  v48 = v13;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Instance )
    goto LABEL_86;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         key,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
  if ( v88->fields.eventEnt )
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
      eventEnt = v88->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_86;
      OverrideQuestMessage = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                               (QuestBoardListViewItemDraw_o *)Instance,
                               v14,
                               eventEnt->fields.id,
                               v50);
      if ( v88->fields.eventEnt )
      {
        v53 = OverrideQuestMessage;
        Instance = (void *)EventEntity__IsEventPeriod(v88->fields.eventEnt, checkTime, 0);
        if ( !v53 && ((unsigned __int8)Instance & 1) != 0 )
        {
          max_length = v14->max_length;
          if ( max_length )
          {
            if ( !(_DWORD)max_length )
              goto LABEL_87;
            v55 = v14->m_Items[0];
          }
          else
          {
            v55 = 0;
          }
          v56 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13430/*"TIME_REST_QUEST_BOARD_EVENT"*/, 0);
          endTime = v87->fields.endTime;
          v59 = (QuestBoardInformationText_o *)sub_1C372A4(*v13);
          QuestBoardInformationText___ctor_36469312(v59, v55, v57, endTime, checkTime, 0, 0);
          if ( !v56 )
            goto LABEL_86;
          v62 = v56->fields._items;
          v63 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v56->fields._version;
          if ( !v62 )
            goto LABEL_86;
          v64 = v56->fields._size;
          if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v56,
              (Il2CppObject *)v59,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v62->obj.klass + v64;
            v56->fields._size = v64 + 1;
            v65[4] = (Il2CppClass *)v59;
            sub_1C36FFC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v59, v60, v61);
          }
        }
      }
    }
  }
  Instance = v89;
  if ( !v89 )
    goto LABEL_86;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)v89, 7, 1, 0, 0);
  if ( !Instance )
    goto LABEL_86;
  v66 = *((_DWORD *)Instance + 6);
  v67 = Instance;
  if ( v66 >= 1 )
  {
    v68 = 0;
    while ( v68 < v66 )
    {
      v69 = (EventEntity_o *)*((_QWORD *)v67 + (int)v68 + 4);
      if ( !v69 || !MasterData_object )
        goto LABEL_86;
      id = v69->fields.id;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, id, 0);
      if ( Instance )
      {
        v71 = Instance;
        Instance = (void *)EventCampaignEntity__isDispWarId((EventCampaignEntity_o *)Instance, key, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v73 = v71[5];
          v74 = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                  (QuestBoardListViewItemDraw_o *)Instance,
                  v14,
                  id,
                  v72);
          Instance = (void *)CombineAdjustTarget__isTerminalExposable(v73, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 && !v74 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v75 = LocalizationManager__Get((System_String_o *)StringLiteral_13428/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
            EventName = (Il2CppObject *)EventEntity__getEventName(v69, 0);
            v77 = System_String__Format_63602948(v75, EventName, (Il2CppObject *)StringLiteral_25101/*"{0}"*/, 0);
            v78 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
            v79 = EventEntity__GetEndTime(v69, 0, 0);
            v80 = (QuestBoardInformationText_o *)sub_1C372A4(*v48);
            QuestBoardInformationText___ctor(v80, v77, v79, 1, 1, 0, 0);
            if ( !v78 )
              goto LABEL_86;
            v83 = v78->fields._items;
            v84 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
            ++v78->fields._version;
            if ( !v83 )
              goto LABEL_86;
            v85 = v78->fields._size;
            if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v78,
                (Il2CppObject *)v80,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            }
            else
            {
              v86 = &v83->obj.klass + v85;
              v78->fields._size = v85 + 1;
              v86[4] = (Il2CppClass *)v80;
              sub_1C36FFC((CGThumbnailListItem_o *)(v86 + 4), (int32_t)v80, v81, v82);
            }
          }
        }
      }
      v66 = *((_DWORD *)v67 + 6);
      if ( (int)++v68 >= v66 )
        return;
    }
LABEL_87:
    sub_1C372BC(Instance);
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
  int target; // w25
  QuestBoardInformationText_o *v16; // x27
  int32_t id; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *ContinueItemInfoList; // x20
  System_Predicate_object__o *v23; // x21
  Il2CppObject *v24; // x0
  UserOwnItemInfo_o *v25; // x20
  System_String_o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  System_String_o *v34; // x21
  System_String_o *EventName; // x22
  int32_t ImageId; // w20
  TerminalBoardOptionTextData_o *v37; // x23
  int64_t v38; // x19
  QuestBoardInformationText_o *v39; // x0
  bool v40; // w3
  System_String_o *v41; // x1
  int64_t v42; // x2
  TerminalBoardOptionTextData_o *v43; // x5
  bool IsOverrideEntryCondMessage; // w20
  System_String_o *v45; // x0
  System_String_o *v46; // x21
  int64_t EndTime; // x19
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v53; // x0
  int64_t checkTime; // x24
  int64_t v55; // x25
  QuestBoardInformationText_o *v56; // x22
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  QuestBoardInformationText_o *result; // x0
  System_String_o *v64; // x20
  Il2CppObject *v65; // x0
  System_String_o *v66; // x20
  QuestBoardListViewItemDraw_o *v67; // x0
  QuestEntity_o *v68; // x1
  EventCampaignEntity_o *v69; // x2
  bool v70; // w3
  int32_t *v71; // x4
  int32_t *v72; // x5
  bool *v73; // x6
  const MethodInfo *v74; // x7
  int64_t Num_k__BackingField; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C3FBD0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&System_Predicate_UserOwnItemInfo__TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&TerminalBoardOptionTextData_TypeInfo);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass375_0__CreateQuestBoardInformationText_b__0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass375_0_TypeInfo);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_13428/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    sub_1C37058(&StringLiteral_13429/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/);
    byte_4C3FBD0 = 1;
  }
  message = 0;
  v13 = (QuestBoardListViewItemDraw___c__DisplayClass375_0_o *)sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass375_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass375_0___ctor(v13, 0);
  if ( !eventCampaignEnt )
    goto LABEL_71;
  target = eventCampaignEnt->fields.target;
  isTerminalExposable = (Il2CppObject *)CombineAdjustTarget__isTerminalExposable(target, 0);
  v16 = 0;
  if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    return v16;
  if ( !eventEnt )
    goto LABEL_71;
  id = eventEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_71;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_71;
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
        v16 = 0;
        if ( target == 25 || target == 35 )
          return v16;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( !isTerminalExposable )
        goto LABEL_71;
      IsOverrideEntryCondMessage = EventCampaignMaster__IsOverrideEntryCondMessage(
                                     (EventCampaignMaster_o *)isTerminalExposable,
                                     &message,
                                     eventCampaignEnt,
                                     0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13428/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
      v46 = System_String__Format_63602948(v45, (Il2CppObject *)message, (Il2CppObject *)StringLiteral_25101/*"{0}"*/, 0);
      EndTime = EventEntity__GetEndTime(eventEnt, 0, 0);
      v39 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
      v16 = v39;
      v40 = IsOverrideEntryCondMessage;
      v41 = v46;
LABEL_30:
      v42 = EndTime;
      v43 = 0;
LABEL_31:
      QuestBoardInformationText___ctor(v39, v41, v42, v40, 0, v43, 0);
      return v16;
    }
    if ( target == 28 )
    {
      ContinueItemInfoList = (System_Collections_Generic_List_object__o *)UserOwnItemDetail__GetContinueItemInfoList(0);
      v23 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_UserOwnItemInfo__TypeInfo);
      System_Predicate_object____ctor(
        v23,
        (Il2CppObject *)v13,
        Method_QuestBoardListViewItemDraw___c__DisplayClass375_0__CreateQuestBoardInformationText_b__0__,
        0);
      if ( ContinueItemInfoList )
      {
        v24 = System_Collections_Generic_List_object___Find(
                ContinueItemInfoList,
                (System_Predicate_T__o *)v23,
                (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v24 )
        {
          v25 = (UserOwnItemInfo_o *)v24;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13429/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, 0);
          Num_k__BackingField = v25->fields._Num_k__BackingField;
          v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Num_k__BackingField, v27, v28, v29, v30, v31, v32);
          v34 = System_String__Format_63602948(v26, v33, (Il2CppObject *)StringLiteral_25101/*"{0}"*/, 0);
          EventName = EventEntity__getEventName(eventEnt, 0);
          ImageId = UserOwnItemInfo__get_ImageId(v25, 0);
          v37 = (TerminalBoardOptionTextData_o *)sub_1C372A4(TerminalBoardOptionTextData_TypeInfo);
          TerminalBoardOptionTextData___ctor(v37, EventName, v34, ImageId, 0, 0, 0, 0);
          v38 = EventEntity__GetEndTime(eventEnt, 0, 0);
          v39 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
          v16 = v39;
          v40 = 1;
          v41 = v34;
          v42 = v38;
          v43 = v37;
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
                    v21) )
              return 0;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( !questEntity || !isTerminalExposable )
LABEL_71:
              sub_1C372B4(isTerminalExposable);
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
              v16 = 0;
              if ( QuestPhaseEntity__IsNoneSupportFriendPoint(Entity, 0) )
                return v16;
            }
          }
LABEL_68:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_13428/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
          v65 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0);
          v66 = System_String__Format_63602948(v64, v65, (Il2CppObject *)StringLiteral_25101/*"{0}"*/, 0);
          EndTime = EventEntity__GetEndTime(eventEnt, 0, 0);
          v39 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
          v16 = v39;
          v40 = 1;
          v41 = v66;
          goto LABEL_30;
        }
LABEL_59:
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v53 = EventEntity__GetEndTime(eventEnt, 0, 0);
        checkTime = v13->fields.checkTime;
        v55 = v53;
        v56 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
        QuestBoardInformationText___ctor_36469468(v56, eventEnt, detail, v55, checkTime, eventCampaignEnt, 0);
        if ( mInfoTextList )
        {
          items = mInfoTextList->fields._items;
          v60 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++mInfoTextList->fields._version;
          if ( items )
          {
            size = mInfoTextList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                mInfoTextList,
                (Il2CppObject *)v56,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v62 = &items->obj.klass + size;
              mInfoTextList->fields._size = size + 1;
              v62[4] = (Il2CppClass *)v56;
              sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v56, v57, v58);
            }
            return 0;
          }
        }
        goto LABEL_71;
      }
    }
    else if ( target > 24 )
    {
      v16 = 0;
      if ( target == 25 )
        return v16;
      if ( target != 26 )
      {
        if ( target == 35 )
          return v16;
        goto LABEL_68;
      }
      goto LABEL_59;
    }
    if ( target != 12 )
      goto LABEL_43;
    goto LABEL_54;
  }
  sub_1C37574(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v67, v68, v69, v70, v71, v72, v73, v74);
  return result;
}


QuestBoardInformationText_o *QuestBoardListViewItemDraw__CreateQuestBoardInformationText_36390776(
        QuestBoardListViewItemDraw_o *this,
        int64_t endTime,
        int64_t checkTime,
        int32_t warId,
        System_String_o *baseText,
        const MethodInfo *method)
{
  __int64 v10; // x22
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  __int64 v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  System_String_o *IfExists; // x23
  __int64 v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  System_String_o *v51; // x24
  QuestBoardInformationText_o *v52; // x21
  int32_t v54; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v55; // [xsp+18h] [xbp-58h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C3FBD1 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C37058(&StringLiteral_13432/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/);
    sub_1C37058(&StringLiteral_13436/*"TIME_REST_QUEST_BOARD_QUEST_{0}"*/);
    sub_1C37058(&StringLiteral_13433/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR_{0}"*/);
    sub_1C37058(&StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/);
    sub_1C37058(&StringLiteral_13435/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR_{0}"*/);
    byte_4C3FBD1 = 1;
  }
  if ( endTime < 1 )
    return 0;
  if ( System_String__IsNullOrEmpty(baseText, 0) )
  {
    v10 = sub_1C37100(string___TypeInfo, 2);
    v56 = warId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v11, v12, v13, v14, v15, v16);
    v18 = System_String__Format((System_String_o *)StringLiteral_13436/*"TIME_REST_QUEST_BOARD_QUEST_{0}"*/, v17, 0);
    if ( !v10 )
      goto LABEL_23;
    if ( !*(_DWORD *)(v10 + 24) )
      goto LABEL_22;
    *(_QWORD *)(v10 + 32) = v18;
    sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v18, v19, v20);
    if ( *(_DWORD *)(v10 + 24) <= 1u )
      goto LABEL_22;
    v23 = StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/;
    *(_QWORD *)(v10 + 40) = StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 40), v23, v21, v22);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseText = LocalizationManager__GetIfExists((System_String_array *)v10, 0);
  }
  v24 = sub_1C37100(string___TypeInfo, 2);
  v55 = warId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v25, v26, v27, v28, v29, v30);
  v18 = System_String__Format((System_String_o *)StringLiteral_13435/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR_{0}"*/, v31, 0);
  if ( !v24 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v24 + 24)
    || (*(_QWORD *)(v24 + 32) = v18,
        sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v18, v32, v33),
        *(_DWORD *)(v24 + 24) <= 1u) )
  {
LABEL_22:
    sub_1C372BC(v18);
  }
  v36 = StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/;
  *(_QWORD *)(v24 + 40) = StringLiteral_13434/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 40), v36, v34, v35);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v24, 0);
  v38 = sub_1C37100(string___TypeInfo, 2);
  v54 = warId;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v39, v40, v41, v42, v43, v44);
  v18 = System_String__Format((System_String_o *)StringLiteral_13433/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR_{0}"*/, v45, 0);
  if ( !v38 )
LABEL_23:
    sub_1C372B4(v18);
  if ( !*(_DWORD *)(v38 + 24) )
    goto LABEL_22;
  *(_QWORD *)(v38 + 32) = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 32), (int32_t)v18, v46, v47);
  if ( *(_DWORD *)(v38 + 24) <= 1u )
    goto LABEL_22;
  v50 = StringLiteral_13432/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/;
  *(_QWORD *)(v38 + 40) = StringLiteral_13432/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 40), v50, v48, v49);
  v51 = LocalizationManager__GetIfExists((System_String_array *)v38, 0);
  v52 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor_36468396(v52, baseText, endTime, checkTime, IfExists, v51, 0);
  return v52;
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
    sub_1C372B4(this);
  max_length = entityList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C372BC(this);
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
    sub_1C372B4(this);
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
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  int32_t size; // w2
  int v13; // w9
  UILabel_o *mTitleNameLb; // x22
  int32_t questPhase; // w24
  const MethodInfo *v16; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v17; // x22
  int32_t v18; // w2
  struct ServantClassIconComponent_array *v19; // x22
  int v20; // w8
  unsigned int v21; // w24
  System_String_o *v22; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  Il2CppObject *BattleName; // x0
  float v25; // s10
  float v26; // s9
  float v27; // s8
  struct ServantClassIconComponent_array *mClassIcons; // x22
  int max_length; // w8
  unsigned int v30; // w23
  int32_t i; // w22
  struct UISprite_array *mPhaseSp; // x8
  float v33; // s1 OVERLAPPED
  float v34; // s0
  float v35; // s3
  float v36; // s2
  unsigned __int64 v37; // d0 OVERLAPPED
  float b; // s2
  float a; // s3
  int v40; // s1
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // [xsp+10h] [xbp-80h]
  bool isTripleItemConsume; // [xsp+20h] [xbp-70h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+24h] [xbp-6Ch] BYREF
  bool isDoubleItemConsume; // [xsp+28h] [xbp-68h] BYREF
  bool isNotItemConsume; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t fixedVal; // [xsp+30h] [xbp-60h] BYREF
  int32_t costCalcVal; // [xsp+34h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
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

  if ( (byte_4C3FBF0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBF0 = 1;
  }
  entity = 0;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   &entity,
                                                   questInfo->fields.questId,
                                                   (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
    v13 = mInfoTextList->fields._version + 1;
    mInfoTextList->fields._size = 0;
    mInfoTextList->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mInfoTextList->fields._items, 0, size, 0);
    if ( forceUnknownQuestName )
    {
      mTitleNameLb = this->fields.mTitleNameLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ServantClassIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/, 0);
      if ( !mTitleNameLb )
        goto LABEL_90;
      UILabel__set_text(mTitleNameLb, (System_String_o *)Master_object, 0);
    }
    else
    {
      QuestBoardListViewItemDraw__SetClosedTitleName(this, questInfo, (QuestEntity_o *)entity, v10);
    }
    mClassIcons = this->fields.mClassIcons;
    if ( !mClassIcons )
      goto LABEL_90;
    max_length = mClassIcons->max_length;
    v25 = 0.039216;
    v26 = 0.3902;
    if ( max_length >= 1 )
    {
      v30 = 0;
      v27 = 0.5;
      while ( v30 < max_length )
      {
        Master_object = mClassIcons->m_Items[v30];
        if ( !Master_object )
          goto LABEL_90;
        v51.fields.r = 0.5;
        v51.fields.g = 0.5;
        v51.fields.b = 0.5;
        v51.fields.a = 1.0;
        ServantClassIconComponent__SetColor(Master_object, v51, 0);
        max_length = mClassIcons->max_length;
        if ( (int)++v30 >= max_length )
          goto LABEL_48;
      }
      goto LABEL_91;
    }
    v27 = 0.5;
  }
  else
  {
    questPhase = questInfo->fields.questPhase;
    Master_object = (ServantClassIconComponent_o *)MapControl_QuestInfo__GetPhaseMax(questInfo, 0);
    if ( !entity )
      goto LABEL_90;
    v17 = this->fields.mInfoTextList;
    v18 = questPhase + 1 >= (int)Master_object ? (int)Master_object : questPhase + 1;
    Master_object = (ServantClassIconComponent_o *)QuestBoardListViewItemDraw__GetCampaignText(
                                                     this,
                                                     (int32_t)entity[1].klass,
                                                     v18,
                                                     0,
                                                     &costCalcVal,
                                                     &fixedVal,
                                                     &isNotItemConsume,
                                                     v16);
    if ( !v17 )
      goto LABEL_90;
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v17,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    v19 = this->fields.mClassIcons;
    if ( !v19 )
      goto LABEL_90;
    v20 = v19->max_length;
    if ( v20 >= 1 )
    {
      v21 = 0;
      while ( v21 < v20 )
      {
        Master_object = v19->m_Items[v21];
        if ( !Master_object )
          goto LABEL_90;
        v50.fields.r = 1.0;
        v50.fields.g = 1.0;
        v50.fields.b = 1.0;
        v50.fields.a = 1.0;
        ServantClassIconComponent__SetColor(Master_object, v50, 0);
        v20 = v19->max_length;
        if ( (int)++v21 >= v20 )
          goto LABEL_28;
      }
LABEL_91:
      sub_1C372BC(Master_object);
    }
LABEL_28:
    Master_object = (ServantClassIconComponent_o *)entity;
    if ( !entity
      || (Master_object = (ServantClassIconComponent_o *)QuestEntity__getQuestName((QuestEntity_o *)entity, 0)) == 0 )
    {
LABEL_90:
      sub_1C372B4(Master_object);
    }
    v22 = (System_String_o *)Master_object;
    if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_25101/*"{0}"*/, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ServantClassIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !entity )
        goto LABEL_90;
      v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      Master_object = (ServantClassIconComponent_o *)QuestEntity__getServantId((QuestEntity_o *)entity, 0);
      if ( !v23 )
        goto LABEL_90;
      Master_object = (ServantClassIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                       v23,
                                                       (int32_t)Master_object,
                                                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_90;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0);
      v22 = System_String__Format(v22, BattleName, 0);
    }
    Master_object = (ServantClassIconComponent_o *)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_90;
    UILabel__set_text((UILabel_o *)Master_object, v22, 0);
    v25 = 0.078431;
    v26 = 0.78039;
    v27 = 1.0;
  }
LABEL_48:
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_90;
  v52.fields.a = 1.0;
  v52.fields.r = v27;
  v52.fields.g = v27;
  v52.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v52, 0);
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
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_90;
  v53.fields.a = 1.0;
  v53.fields.r = v27;
  v53.fields.g = v27;
  v53.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v53, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mNoBattleObj;
  if ( !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Master_object,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_90;
  v54.fields.a = 1.0;
  v54.fields.r = v27;
  v54.fields.g = v27;
  v54.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v54, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleLevelLb;
  if ( !Master_object )
    goto LABEL_90;
  v55.fields.a = 1.0;
  v55.fields.r = v27;
  v55.fields.g = v27;
  v55.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v55, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleLevelSp;
  if ( !Master_object )
    goto LABEL_90;
  v56.fields.a = 1.0;
  v56.fields.r = v27;
  v56.fields.g = v27;
  v56.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v56, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleLevelStrSp;
  if ( !Master_object )
    goto LABEL_90;
  v57.fields.a = 1.0;
  v57.fields.r = v27;
  v57.fields.g = v27;
  v57.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v57, 0);
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
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_90;
  v58.fields.a = 1.0;
  v58.fields.r = v27;
  v58.fields.g = v27;
  v58.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v58, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_90;
  v59.fields.a = 1.0;
  v59.fields.r = v27;
  v59.fields.g = v27;
  v59.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v59, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_90;
  Master_object = (ServantClassIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Master_object,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_90;
  v60.fields.a = 1.0;
  v60.fields.r = v27;
  v60.fields.g = v27;
  v60.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v60, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_90;
  v61.fields.a = 1.0;
  v61.fields.r = v27;
  v61.fields.g = v27;
  v61.fields.b = v27;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, v61, 0);
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
    v62.fields.a = 1.0;
    v62.fields.r = v27;
    v62.fields.g = v27;
    v62.fields.b = v27;
    UIWidget__set_color((UIWidget_o *)Master_object, v62, 0);
  }
  Master_object = (ServantClassIconComponent_o *)this->fields.mOptionPreBattleSp;
  v33 = v25 * 0.5;
  if ( !isClose )
    v33 = v25;
  if ( !Master_object )
    goto LABEL_90;
  v34 = v26 * 0.5;
  if ( !isClose )
    v34 = v26;
  v35 = 1.0;
  v36 = v33;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(&v33 - 1), 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mOptionRestrinctionSp;
  if ( isClose )
  {
    v37 = vmul_f32(
            *(float32x2_t *)&this->fields.optionRestrinctionOriginColor.fields.r,
            (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    b = this->fields.optionRestrinctionOriginColor.fields.b * 0.5;
  }
  else
  {
    v37 = *(_QWORD *)&this->fields.optionRestrinctionOriginColor.fields.r;
    b = this->fields.optionRestrinctionOriginColor.fields.b;
  }
  if ( !Master_object )
    goto LABEL_90;
  a = this->fields.optionRestrinctionOriginColor.fields.a;
  v40 = HIDWORD(v37);
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v37, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mOptionRestrinctionLb;
  if ( !Master_object )
    goto LABEL_90;
  v63.fields.a = 1.0;
  v63.fields.r = v27;
  v63.fields.g = v27;
  v63.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v63, 0);
  Master_object = (ServantClassIconComponent_o *)this->fields.mClassStrSp;
  if ( !Master_object )
    goto LABEL_90;
  v64.fields.a = 1.0;
  v64.fields.r = v27;
  v64.fields.g = v27;
  v64.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)Master_object, v64, 0);
  v65.fields.a = 1.0;
  v65.fields.r = v27;
  v65.fields.g = v27;
  v65.fields.b = v27;
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    (QuestEntity_o *)entity,
    0,
    costCalcVal,
    fixedVal,
    isNotItemConsume,
    v65,
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    isClose,
    v42);
  if ( questInfo->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, !isClose, v41);
  if ( questInfo->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, !isClose, v41);
}


System_String_o *QuestBoardListViewItemDraw__GetApSpriteFileName(int32_t bannerId, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v2; // x0
  System_String_o *QUEST_BOARD_AP_SPNAME_PREFIX; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = bannerId;
  if ( (byte_4C3FBEA & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBEA = 1;
  }
  v2 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v2 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_AP_SPNAME_PREFIX = v2->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_63561656(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0);
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
  const MethodInfo *v19; // x7
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByWarGroupMaster; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  int64_t *manager; // x8
  __int64 naturalAligment; // x10
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v25; // x20
  int64_t *p_endedAt; // x20
  __int64 endedAt; // t1
  int64_t *v28; // x8
  int64_t v29; // x20
  System_String_o *EventName; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x22
  QuestBoardInformationText_o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_QuestBoardInformationText__o *result; // x0
  QuestBoardListViewItemDraw_o *v41; // x0
  QuestBoardListViewItem_o *v42; // x1
  bool v43; // w2
  bool v44; // w3
  const MethodInfo *v45; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3FBCD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_13438/*"TIME_REST_STRING"*/);
    byte_4C3FBCD = 1;
  }
  entity = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
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
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  CampaignTextListByWarGroupMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
                                                                                      this,
                                                                                      questId,
                                                                                      phase,
                                                                                      v16,
                                                                                      costCalcVal,
                                                                                      fixedVal,
                                                                                      isNotItemConsume,
                                                                                      v19);
  System_Collections_Generic_List_object___AddRange(
    v15,
    CampaignTextListByWarGroupMaster,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_28;
  manager = (int64_t *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_28;
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
    v25 = EntityByQuestIdAndTime;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_28;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
            &entity,
            v25->fields.eventId,
            (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
    if ( !entity )
      goto LABEL_28;
    if ( LODWORD(entity[1].monitor) != 25 )
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    endedAt = v25->fields.endedAt;
    p_endedAt = &v25->fields.endedAt;
    if ( endedAt <= 0 )
      v28 = (int64_t *)&entity[6];
    else
      v28 = p_endedAt;
    v29 = *v28;
    EventName = EventEntity__getEventName((EventEntity_o *)entity, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13438/*"TIME_REST_STRING"*/, 0);
    v32 = System_String__Concat_63601908(
            EventName,
            (System_String_o *)StringLiteral_113/*" "*/,
            v31,
            (System_String_o *)StringLiteral_25101/*"{0}"*/,
            0);
    v33 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v33, v32, v29, 0, 1, 0, 0);
    items = v15->fields._items;
    v37 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++v15->fields._version;
    if ( items )
    {
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v33,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v33;
        sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v33, v34, v35);
      }
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    }
LABEL_28:
    sub_1C372B4(CampaignTextListByEventQuestMaster);
  }
  sub_1C37574(manager);
  QuestBoardListViewItemDraw__SetItemOfFolderForTerminalTopEffect(v41, v42, v43, v44, v45);
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
  DataManager_o *v16; // x21
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v18; // x20
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v20; // x24
  __int64 naturalAligment; // x9
  Il2CppObject *v22; // x21
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_object__o *v24; // x28
  int max_length; // w8
  unsigned int v26; // w22
  EventEntity_o *v27; // x8
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppObject *v33; // x27
  Il2CppClass **v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x21
  __int64 v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t current; // w1
  EventCampaignEntity_o **v46; // x20
  __int64 v47; // x0
  _BOOL8 v48; // x0
  System_Func_object__bool__o *v49; // x27
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x6
  Il2CppObject *QuestBoardInformationText; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x1
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  __int64 v60; // x20
  __int64 v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  System_Func_object__bool__o *v65; // x21
  Il2CppObject *v66; // x0
  const MethodInfo *v67; // x7
  void *v69; // x0
  void *v70; // x19
  int v71; // w1
  __int64 v72; // x20
  int32_t *v73; // [xsp+0h] [xbp-D0h]
  int32_t *v74; // [xsp+8h] [xbp-C8h]
  bool *v75; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+30h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+50h] [xbp-80h] BYREF

  EnabledEventCampaignForQuest = (EventEntity_array *)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4C3FBCE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C37058(&System_Func_EventEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass373_0__GetCampaignTextListByEventQuestMaster_b__0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass373_0_TypeInfo);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass373_1__GetCampaignTextListByEventQuestMaster_b__1__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass373_1_TypeInfo);
    byte_4C3FBCE = 1;
  }
  memset(&v81, 0, sizeof(v81));
  entity = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  v16 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v18 = DataManager__GetMasterData_object_(
          v16,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v16,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_56;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_56;
  v20 = (QuestEntity_o *)Instance;
  Instance = mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_56;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v73 = costCalcVal;
    v74 = fixedVal;
    v75 = isNotItemConsume;
    v22 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    v24 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !EnabledEventCampaignForQuest )
      goto LABEL_56;
    max_length = EnabledEventCampaignForQuest->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= max_length )
          sub_1C372BC(Instance);
        v27 = EnabledEventCampaignForQuest->m_Items[v26];
        if ( !v27 || !v18 )
          break;
        Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)v18, v27->fields.id, 0);
        if ( Instance )
        {
          if ( !v24 )
            break;
          items = v24->fields._items;
          v31 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            break;
          size = v24->fields._size;
          v33 = (Il2CppObject *)Instance;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)Instance,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v33;
            sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v33, v28, v29);
          }
          if ( !v22 )
            break;
          Instance = (void *)EventCampaignReleaseMaster__isRelease(
                               (EventCampaignReleaseMaster_o *)v22,
                               (int32_t)v33[1].klass,
                               HIDWORD(v33[1].klass),
                               0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            v37 = v8->fields._items;
            v38 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v8->fields._version;
            if ( !v37 )
              break;
            v39 = v8->fields._size;
            if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                v33,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &v37->obj.klass + v39;
              v8->fields._size = v39 + 1;
              v40[4] = (Il2CppClass *)v33;
              sub_1C36FFC((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v33, v35, v36);
            }
          }
        }
        max_length = EnabledEventCampaignForQuest->max_length;
        if ( (int)++v26 >= max_length )
          goto LABEL_33;
      }
LABEL_56:
      sub_1C372B4(Instance);
    }
LABEL_33:
    Instance = EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v24,
                 0);
    if ( !Instance )
      goto LABEL_56;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v79,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v81 = v79;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v81,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v41 = sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass373_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass373_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass373_0_o *)v41,
        0);
      if ( !v41 )
        sub_1C372B4(v42);
      current = (int32_t)v81.fields._current;
      *(_QWORD *)(v41 + 16) = v81.fields._current;
      v46 = (EventCampaignEntity_o **)(v41 + 16);
      sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 16), current, v43, v44);
      if ( !Master_object )
        sub_1C372B4(v47);
      v48 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, phase, 0);
      if ( v48 )
      {
        if ( !*v46 )
          sub_1C372B4(v48);
        if ( (*v46)->fields.target == 24 )
        {
          if ( !entity )
            sub_1C372B4(0);
          if ( QuestPhaseEntity__IsNoneSupportFriendPoint(entity, 0) )
            continue;
        }
      }
      v49 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v49,
        (Il2CppObject *)v41,
        Method_QuestBoardListViewItemDraw___c__DisplayClass373_0__GetCampaignTextListByEventQuestMaster_b__0__,
        0);
      v50 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
              (System_Collections_Generic_IEnumerable_TSource__o *)EnabledEventCampaignForQuest,
              (System_Func_TSource__bool__o *)v49,
              (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
      QuestBoardInformationText = (Il2CppObject *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                                    this,
                                                    v20,
                                                    (EventEntity_o *)v50,
                                                    *v46,
                                                    phase,
                                                    isQuestNoneCleared,
                                                    v51);
      v55 = QuestBoardInformationText;
      if ( QuestBoardInformationText )
      {
        if ( !v14 )
          sub_1C372B4(QuestBoardInformationText);
        v56 = v14->fields._items;
        v57 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++v14->fields._version;
        if ( !v56 )
          sub_1C372B4(QuestBoardInformationText);
        v58 = v14->fields._size;
        if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            QuestBoardInformationText,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &v56->obj.klass + v58;
          v14->fields._size = v58 + 1;
          v59[4] = (Il2CppClass *)v55;
          sub_1C36FFC((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v55, v53, v54);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v81,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  else
  {
    sub_1C37574(Instance);
    v70 = v69;
    if ( v71 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v81,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      sub_1D2018C(v70);
    }
    v72 = *(_QWORD *)__cxa_begin_catch(v69);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v81,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v72 )
      sub_1C372AC(v72);
  }
  Instance = EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v8, 0);
  if ( !Instance )
    goto LABEL_56;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v81 = v79;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    v60 = sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass373_1_TypeInfo);
    QuestBoardListViewItemDraw___c__DisplayClass373_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass373_1_o *)v60,
      0);
    if ( !v60 )
      sub_1C372B4(v61);
    v64 = (int32_t)v81.fields._current;
    *(_QWORD *)(v60 + 16) = v81.fields._current;
    sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 16), v64, v62, v63);
    v65 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v65,
      (Il2CppObject *)v60,
      Method_QuestBoardListViewItemDraw___c__DisplayClass373_1__GetCampaignTextListByEventQuestMaster_b__1__,
      0);
    v66 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
            (System_Collections_Generic_IEnumerable_TSource__o *)EnabledEventCampaignForQuest,
            (System_Func_TSource__bool__o *)v65,
            (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    QuestBoardListViewItemDraw__CalcQuestCost(
      (QuestBoardListViewItemDraw_o *)v66,
      v20,
      *(EventCampaignEntity_o **)(v60 + 16),
      isQuestNoneCleared,
      v73,
      v74,
      v75,
      v67);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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
  System_Collections_Generic_List_object__o *v10; // x24
  DataManager_o *Instance; // x0
  DataManager_o *v12; // x20
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v14; // x25
  QuestEntity_o *v15; // x26
  DataManager_o *v16; // x27
  int32_t spotId; // w19
  int32_t klass_high; // w29
  int m_CancellationTokenSource; // w8
  unsigned int v20; // w22
  bool v21; // w28
  EventEntity_o *v22; // x19
  struct DataMasterBase_array *datalist; // x8
  EventCampaignEntity_o *v24; // x20
  const MethodInfo *v25; // x6
  QuestBoardInformationText_o *QuestBoardInformationText; // x19
  const MethodInfo *v27; // x7
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C3FBCF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarGroupMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3FBCF = 1;
  }
  entity = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v12 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  v14 = DataManager__GetMasterData_object_(
          v12,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v12,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                questId,
                                (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_32;
  v15 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 7, 1, 0, 0);
  if ( !v15 )
    goto LABEL_32;
  v16 = Instance;
  spotId = v15->fields.spotId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                spotId,
                                (const MethodInfo_33A10EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    klass_high = HIDWORD(entity[1].klass);
    if ( klass_high )
    {
      if ( !v16 )
        goto LABEL_32;
      m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource >= 1 )
      {
        v20 = 0;
        v21 = isQuestNoneCleared;
        while ( 1 )
        {
          if ( v20 >= m_CancellationTokenSource )
            sub_1C372BC(Instance);
          v22 = (EventEntity_o *)*((_QWORD *)&v16->fields._DispLog + (int)v20);
          if ( !v22 || !v14 )
            break;
          Instance = (DataManager_o *)EventCampaignMaster__getData((EventCampaignMaster_o *)v14, v22->fields.id, 0);
          if ( Instance )
          {
            datalist = Instance->fields.datalist;
            v24 = (EventCampaignEntity_o *)Instance;
            if ( !datalist )
              break;
            if ( datalist->max_length )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarGroupMaster___);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)WarGroupMaster__HasEntity(
                                            (WarGroupMaster_o *)Instance,
                                            klass_high,
                                            v15->fields.afterClear,
                                            v15->fields.type,
                                            v24->fields.targetIds,
                                            0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                QuestBoardInformationText = QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                              this,
                                              v15,
                                              v22,
                                              v24,
                                              phase,
                                              v21,
                                              v25);
                QuestBoardListViewItemDraw__CalcQuestCost(
                  (QuestBoardListViewItemDraw_o *)QuestBoardInformationText,
                  v15,
                  v24,
                  v21,
                  costCalcVal,
                  fixedVal,
                  isNotItemConsume,
                  v27);
                if ( QuestBoardInformationText )
                {
                  if ( !v10 )
                    break;
                  items = v10->fields._items;
                  v31 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
                  ++v10->fields._version;
                  if ( !items )
                    break;
                  size = v10->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)QuestBoardInformationText,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v33 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v33[4] = (Il2CppClass *)QuestBoardInformationText;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)QuestBoardInformationText, v28, v29);
                  }
                }
              }
            }
          }
          m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
          if ( (int)++v20 >= m_CancellationTokenSource )
            return (System_Collections_Generic_List_QuestBoardInformationText__o *)v10;
        }
LABEL_32:
        sub_1C372B4(Instance);
      }
    }
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v10;
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

  if ( (byte_4C3FBB5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    byte_4C3FBB5 = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0);
  v6 = this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_13;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_25101/*"{0}"*/, 0) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
        this = (QuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0);
        if ( MasterData_object )
        {
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                   (int32_t)this,
                                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0);
            return System_String__Format((System_String_o *)v6, BattleName, 0);
          }
        }
      }
LABEL_13:
      sub_1C372B4(this);
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
  int32_t v9; // w2
  __int64 v10; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  WarEntity_o *Entity; // x0
  int32_t PrioredBannerId; // w0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  QuestBoardListViewItemDraw_c *v20; // x8
  int32_t v21; // w19
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v23; // x0
  QuestBoardListViewItemDraw_c *v25; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v27; // x0
  int32_t v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3FBBE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBBE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_object )
    goto LABEL_32;
  if ( isActiveEventWar )
    v9 = 4;
  else
    v9 = 5;
  if ( isActiveEventWar )
    v10 = 60;
  else
    v10 = 56;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Master_object,
                              eventEnt->fields.id,
                              v9,
                              0);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v10);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = (WarEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            warId,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        warId,
                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_object )
      {
        PrioredBannerId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_object, 0);
        v20 = QuestBoardListViewItemDraw_TypeInfo;
        overwriteId = PrioredBannerId;
        v21 = PrioredBannerId;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v20 = QuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v20->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v28 = v21;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v14, v15, v16, v17, v18, v19);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v23, 0);
      }
    }
LABEL_32:
    sub_1C372B4(Master_object);
  }
  v25 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v25 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v25->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v27 = System_Int32__ToString((int32_t)&overwriteId, 0);
  return System_String__Concat_63561656(EVENT_WAR_SPNAME_PREFIX, v27, 0);
}


System_String_o *QuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        QuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  QuestBoardListViewItemDraw_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4C3FBB4 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBB4 = 1;
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

  if ( (byte_4C3FBCB & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBCB = 1;
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

  if ( (byte_4C3FBCA & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBCA = 1;
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
  int32_t MaxPhase; // w0
  int32_t v10; // w22
  int32_t phase; // w20
  int32_t giftId; // w21
  int32_t giftIconId; // w23
  QuestBoardListViewItemDraw_PhasePresentData_o *v14; // x24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  QuestPhasePresentEntity_o *presentEnt; // [xsp+8h] [xbp-38h] BYREF

  v5 = currentPhase;
  if ( (byte_4C3FBBB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhasePresentMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    byte_4C3FBBB = 1;
  }
  presentEnt = 0;
  *phasePresentData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)phasePresentData, 0, (int32_t)questEnt, *(const MethodInfo **)&currentPhase);
  if ( !questEnt )
    goto LABEL_14;
  MaxPhase = QuestEntity__GetMaxPhase(questEnt, 0);
  v10 = MaxPhase;
  if ( MaxPhase - 1 <= v5 )
    v5 = MaxPhase - 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhasePresentMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C372B4(Master_object);
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
    v14 = (QuestBoardListViewItemDraw_PhasePresentData_o *)sub_1C372A4(QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    QuestBoardListViewItemDraw_PhasePresentData___ctor(v14, phase, giftId, giftIconId, phase == v10, 0);
    *phasePresentData = v14;
    sub_1C36FFC((CGThumbnailListItem_o *)phasePresentData, (int32_t)v14, v15, v16);
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

  if ( (byte_4C3FBB7 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_20536/*"img_questtxt_free"*/);
    sub_1C37058(&StringLiteral_20535/*"img_questtxt_event"*/);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBB7 = 1;
  }
  if ( !questEnt )
    sub_1C372B4(this);
  iconId = questEnt->fields.iconId;
  v6 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v12 = &StringLiteral_20535/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v12 = &StringLiteral_20536/*"img_questtxt_free"*/;
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
    return System_String__Concat_63561656(QUEST_BOARD_ICON_SPNAME_PREFIX, v10, 0);
  }
}


System_String_o *QuestBoardListViewItemDraw__GetQuestIconNameForMainType(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int32_t v9; // w20
  int32_t iconId; // w21
  QuestBoardListViewItemDraw_c *v11; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x19
  System_String_o *v14; // x0
  System_String_o *CHAPTER_SP_BASE_NAME; // x20
  Il2CppObject *v17; // x0
  int32_t chapterId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3FBB8 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBB8 = 1;
  }
  if ( !questEnt )
    sub_1C372B4(this);
  v9 = (_DWORD)questEnt + 68;
  iconId = questEnt->fields.iconId;
  v11 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v11 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( iconId < 1 )
  {
    CHAPTER_SP_BASE_NAME = static_fields->CHAPTER_SP_BASE_NAME;
    chapterId = questEnt->fields.chapterId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chapterId, method, v3, v4, v5, v6, v7);
    return System_String__Format(CHAPTER_SP_BASE_NAME, v17, 0);
  }
  else
  {
    QUEST_BOARD_ICON_SPNAME_PREFIX = static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v14 = System_Int32__ToString(v9, 0);
    return System_String__Concat_63561656(QUEST_BOARD_ICON_SPNAME_PREFIX, v14, 0);
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
    return QuestEntity__getRecommendLv_42468408(questEnt, questPhase, 0);
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
    sub_1C372B4(this);
  if ( (unsigned int)(status - 1) >= LODWORD(mStatusSp->max_length) )
    sub_1C372BC(this);
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
          sub_1C372BC(this);
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
    sub_1C372B4(this);
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
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C3FBAE & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1C37058(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass336_0__HasNewQuestInWar_b__0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass336_0_TypeInfo);
    byte_4C3FBAE = 1;
  }
  v8 = (QuestBoardListViewItemDraw___c__DisplayClass336_0_o *)sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass336_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass336_0___ctor(v8, 0);
  if ( !v8 )
    sub_1C372B4(v9);
  v8->fields.isMainInterlude = isMainInterlude;
  v8->fields.warId = warId;
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_MapControl_QuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v8,
    Method_QuestBoardListViewItemDraw___c__DisplayClass336_0__HasNewQuestInWar_b__0__,
    0);
  return BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
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

  if ( (byte_4C3FBC9 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBC9 = 1;
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
    sub_1C372B4(mPhaseObj);
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
  struct System_Collections_Generic_List_UIWidget__o *v4; // x8
  int32_t size; // w2
  int v6; // w9
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3FBD5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIWidget__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIWidget__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIWidget__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__GetEnumerator__);
    byte_4C3FBD5 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  rewardIconAlphaSyncWidgetList = this->fields.rewardIconAlphaSyncWidgetList;
  if ( !rewardIconAlphaSyncWidgetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)rewardIconAlphaSyncWidgetList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIWidget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIWidget__MoveNext__) )
  {
    if ( !v7.fields._current )
      sub_1C372B4(0);
    ((void (__fastcall *)(float))v7.fields._current->klass->vtable[8].methodPtr)(1.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIWidget__Dispose__);
  v4 = this->fields.rewardIconAlphaSyncWidgetList;
  if ( !v4 )
LABEL_13:
    sub_1C372B4(rewardIconAlphaSyncWidgetList);
  size = v4->fields._size;
  v6 = v4->fields._version + 1;
  v4->fields._size = 0;
  v4->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v4->fields._items, 0, size, 0);
}


bool QuestBoardListViewItemDraw__IsBanners(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8

  if ( !questBoardItem || (quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField) == 0 )
    sub_1C372B4(this);
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
    sub_1C372B4(mNextSp);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mNextSp, 0);
}


bool QuestBoardListViewItemDraw__IsDisplayRoadmapButton(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *roadmapButton; // x0

  roadmapButton = (UnityEngine_Component_o *)this->fields.roadmapButton;
  if ( !roadmapButton
    || (roadmapButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(roadmapButton, 0)) == 0 )
  {
    sub_1C372B4(roadmapButton);
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

  if ( (byte_4C3FBE7 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBE7 = 1;
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

  if ( (byte_4C3FBE8 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBE8 = 1;
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

  if ( (byte_4C3FBD9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C3FBD9 = 1;
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
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v7; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3FBEE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3FBEE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1C372B4(v7);
  return UserInterruptionQuestMaster__TryGetEntity(
           (UserInterruptionQuestMaster_o *)Master_object,
           &entity,
           v7->static_fields->userIdNumber,
           questId,
           phase,
           0);
}


bool QuestBoardListViewItemDraw__IsMainWar(QuestBoardListViewItemDraw_o *this, int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0

  if ( (byte_4C3FBB3 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3FBB3 = 1;
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
         (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     warId,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return LODWORD(Instance[6].klass) == 0;
}


bool QuestBoardListViewItemDraw__IsMultiInfoText(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4C3FBD8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C3FBD8 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return mInfoTextList && mInfoTextList->fields._size > 1;
}


bool QuestBoardListViewItemDraw__IsNeedAnimEventTarget(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0

  eventTargetComponent = this->fields.eventTargetComponent;
  if ( !eventTargetComponent )
    sub_1C372B4(0);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  WarEntity_o *v10; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4C3FBAD & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass335_0__IsPurchasedByRarePrism_b__0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass335_0_TypeInfo);
    byte_4C3FBAD = 1;
  }
  v6 = sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass335_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass335_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass335_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_9;
  *(_QWORD *)(v6 + 16) = warEnt;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)warEnt, v8, v9);
  v10 = *(WarEntity_o **)(v6 + 16);
  if ( v10 && WarEntity__IsShop(v10, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v6 + 24) = MasterData_object;
      sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)MasterData_object, v12, v13);
      v14 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_MapControl_QuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v14,
        (Il2CppObject *)v6,
        Method_QuestBoardListViewItemDraw___c__DisplayClass335_0__IsPurchasedByRarePrism_b__0__,
        0);
      return BasicHelper__Any_object_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v14,
               (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_1C372B4(Instance);
  }
  return 0;
}


bool QuestBoardListViewItemDraw__IsRewardIcons(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_RewardIconInfo__o *rewardIconInfoList; // x8

  if ( (byte_4C3FBDC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    byte_4C3FBDC = 1;
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
  ViewWaveEnemyMaster_o *v5; // x21
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  ViewWaveEnemyEntity_array *v7; // x19
  int32_t ReachedWave; // w20
  il2cpp_array_size_t max_length; // x8
  unsigned int v10; // w21
  Il2CppClass **v11; // x22
  char *v12; // x22
  ViewWaveEnemyMaster_o *v13; // t1

  if ( (byte_4C3FBEF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C3FBEF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !questPhaseEntity )
    goto LABEL_26;
  v5 = Master_object;
  if ( !Master_object )
    goto LABEL_26;
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            Master_object,
                            questPhaseEntity->fields.questId,
                            0);
  if ( !EntityListFromQuestId )
    return (char)EntityListFromQuestId;
  v7 = EntityListFromQuestId;
  if ( !EntityListFromQuestId->max_length )
  {
LABEL_23:
    LOBYTE(EntityListFromQuestId) = 0;
    return (char)EntityListFromQuestId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
  if ( !Master_object )
LABEL_26:
    sub_1C372B4(Master_object);
  ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                  (ReachedWaveInfoMaster_o *)Master_object,
                  questPhaseEntity->fields.questId,
                  0);
  Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v5, v7, ReachedWave, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_23;
  max_length = v7->max_length;
  v10 = max_length - 1;
  if ( (int)max_length - 1 < 0 )
    goto LABEL_23;
  if ( v10 >= (unsigned int)max_length )
LABEL_22:
    sub_1C372BC(Master_object);
  while ( 1 )
  {
    v11 = &v7->obj.klass + v10;
    v13 = (ViewWaveEnemyMaster_o *)v11[4];
    v12 = (char *)(v11 + 4);
    Master_object = v13;
    if ( !v13 )
      goto LABEL_26;
    Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyEntity__GetUnknownDispInfo(
                                               (ViewWaveEnemyEntity_o *)Master_object,
                                               0);
    if ( Master_object )
    {
      if ( v10 >= LODWORD(v7->max_length) )
        goto LABEL_22;
      if ( !*(_QWORD *)v12 )
        goto LABEL_26;
      if ( ReachedWave < *(_DWORD *)(*(_QWORD *)v12 + 56LL) )
        break;
    }
    if ( (--v10 & 0x80000000) != 0 )
      goto LABEL_23;
    if ( v10 >= LODWORD(v7->max_length) )
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
  long double v7; // q0
  System_Object_array *RestrictionList; // x21
  QuestBoardListViewItemDraw___c_c *v9; // x0
  System_Func_object__bool__o *_9__378_0; // x22
  Il2CppObject *v11; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x0
  _BOOL4 v17; // w22
  bool v18; // w8
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3FBD2 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C37058(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__378_0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4C3FBD2 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
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
      v9 = QuestBoardListViewItemDraw___c_TypeInfo;
      if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
        v9 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      _9__378_0 = (System_Func_object__bool__o *)v9->static_fields->__9__378_0;
      if ( !_9__378_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v9->static_fields->__9;
        _9__378_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__378_0,
          v11,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__378_0__,
          0);
        static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__378_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__378_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__378_0, (int32_t)_9__378_0, v13, v14);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_object__51187876(
                                  RestrictionList,
                                  (System_Func_T__bool__o *)_9__378_0,
                                  (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C8776C(v7);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C8776C(v7);
  Instance = **(DataManager_o ***)(v16 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !Instance )
  {
LABEL_38:
    sub_1C372B4(Instance);
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(
          (QuestRestrictionInfoMaster_o *)Instance,
          &entity,
          questEntity->fields.id,
          phase,
          0) )
  {
    if ( !QuestEntity__HasFlag_42469280(questEntity, 0x80000, phase, 0)
      && !QuestEntity__HasFlag_42469280(questEntity, 0x100000, phase, 0)
      && !QuestEntity__HasFlag_42469280(questEntity, 0x10000000, phase, 0) )
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
    v18 = !QuestEntity__HasFlag_42469280(questEntity, 2, phase, 0);
    return v17 && v18;
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
  v17 = !QuestRestrictionInfoEntity__HasFlag(entity, 0x10000000, 0);
  if ( ((unsigned __int8)RestrictionList & 1) == 0 )
    goto LABEL_36;
LABEL_34:
  v18 = 0;
  return v17 && v18;
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  QuestBoardListViewItemDraw_c *v20; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v23; // x0
  struct System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_String_o *boardIconName; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x19
  AssetLoader_LoadEndDataHandler_o *v31; // x21
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C3FBEB & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass416_0__LoadBoardIconTexture_b__0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass416_0_TypeInfo);
    byte_4C3FBEB = 1;
  }
  v7 = sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass416_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass416_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v13);
  if ( !questEntity )
    goto LABEL_14;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v20 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v20 = QuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v20->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v32 = iconId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v14, v15, v16, v17, v18, v19);
  v24 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v23, 0);
  this->fields.boardIconName = v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boardIconName, (int32_t)v24, v25, v26);
  boardIconName = this->fields.boardIconName;
  *(_QWORD *)(v7 + 16) = boardIconName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)boardIconName, v28, v29);
  v30 = System_String__Concat_63561656(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0);
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewItemDraw___c__DisplayClass416_0__LoadBoardIconTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v30, v31, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(Instance);
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

  if ( (byte_4C3FBE5 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_1C37058(&TerminalBannerComponent_TypeInfo);
    byte_4C3FBE5 = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (WebViewManager_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)WebViewManager__get_IsBusy(IsBanners, 0);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)IsBanners, 0);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
            sub_1C372BC(IsBanners);
          IsBanners = (WebViewManager_o *)mTerminalBanners->m_Items[v19];
          if ( !IsBanners )
            break;
          TerminalBannerComponent__StartAutoMoveL((TerminalBannerComponent_o *)IsBanners, 0);
          if ( (int)++v19 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_40:
        sub_1C372B4(IsBanners);
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
  BoardOptionEventTargetComponent_o *v4; // x0

  if ( (byte_4C3FBA3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FBA3 = 1;
  }
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, method);
  eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0, 0) )
  {
    v4 = this->fields.eventTargetComponent;
    if ( !v4 )
      sub_1C372B4(0);
    BoardOptionEventTargetComponent__DestroyList(v4, 0);
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
  UnityEngine_Vector2_o ScreenPosition_49050776; // kr00_8
  float v10; // s0
  float v11; // s1
  const MethodInfo *v12; // x3

  v7 = this;
  if ( (byte_4C3FBE0 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&CTouch_TypeInfo);
    byte_4C3FBE0 = 1;
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
          ScreenPosition_49050776 = CTouch__getScreenPosition_49050776(mUICamera, 0);
          v10 = vabds_f32(v7->fields.mPressPos.fields.x, ScreenPosition_49050776.fields.x);
          v11 = vabds_f32(v7->fields.mPressPos.fields.y, ScreenPosition_49050776.fields.y);
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
        sub_1C372B4(this);
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
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  struct TerminalBannerComponent_array *mTerminalBanners; // x8

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
          sub_1C372BC(IsBanners);
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_1C372B4(IsBanners);
        TerminalBannerComponent__OnPress(IsBanners, this, 0);
        ++v6;
      }
      while ( (int)v6 < this->fields.mBannerCount );
    }
    QuestBoardListViewItemDraw__SetDispBannerArrows(this, 1, 0, v5);
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
  if ( (byte_4C3FBDF & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&CTouch_TypeInfo);
    byte_4C3FBDF = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    v8->fields.mIsPressed = 1;
    if ( !questBoardManager || (this = (QuestBoardListViewItemDraw_o *)questBoardManager->fields.scrollView) == 0 )
      sub_1C372B4(this);
    if ( !UIScrollView__IsLimitOverPosition((UIScrollView_o *)this, 0) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8->fields.mPressPos = CTouch__getScreenPosition_49050776(mUICamera, 0);
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
          sub_1C372BC(IsBanners);
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_1C372B4(IsBanners);
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

  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    QuestBoardListViewItemDraw__OnPullBanner(this, questBoardItem, *(const MethodInfo **)&dispMode);
    *(_WORD *)&this->fields.mIsPressed = 0;
    this->fields.mIsEnableDragX = 0;
    if ( !questBoardManager || (scrollView = (UnityEngine_Behaviour_o *)questBoardManager->fields.scrollView) == 0 )
      sub_1C372B4(scrollView);
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
  if ( (byte_4C3FBD3 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    byte_4C3FBD3 = 1;
  }
  mListViewObject = v3->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_9:
    sub_1C372B4(this);
  manager = (QuestBoardListViewManager_o *)mListViewObject->fields.manager;
  if ( manager )
  {
    naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
    {
      sub_1C37574(manager);
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
  QuestBoardListViewItemDraw_o *v4; // x19
  struct System_Collections_Generic_List_UIWidget__o *rewardIconAlphaSyncWidgetList; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *rewardIconInfoList; // x20
  int32_t v9; // w1
  int32_t AlphaAnimCnt; // w0
  System_Collections_Generic_List_object__o *v11; // x22
  QuestBoardListViewItemDraw_o *v12; // x20
  int32_t NextAlphaAnimCnt; // w0
  QuestBoardListViewItemDraw_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *mRewardGetSP; // x1
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  _BOOL4 IsDisplayNotGive; // w22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *mRewardNotGetSP; // x1
  intptr_t v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  intptr_t v29; // x8
  _BOOL4 IsDisplayServantLimitOpened; // w22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *mServantLimitRewardObtainedSP; // x1
  intptr_t v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  intptr_t v37; // x8
  int32_t TitleType; // w20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *mRewardFirstSP; // x1
  intptr_t v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  intptr_t v45; // x8
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *mRewardPhaseSP; // x1
  intptr_t v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  intptr_t v52; // x8
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *mRewardQuestSP; // x1
  intptr_t v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  intptr_t v59; // x8
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *mRewardSharedSP; // x1
  intptr_t v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  intptr_t v66; // x8

  v4 = this;
  if ( (byte_4C3FBD4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
    byte_4C3FBD4 = 1;
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
  if ( (byte_4C3FBDC & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    byte_4C3FBDC = 1;
  }
  rewardIconInfoList = (System_Collections_Generic_List_object__o *)v4->fields.rewardIconInfoList;
  if ( rewardIconInfoList )
  {
    v9 = rewardIconInfoList->fields._size;
    if ( v9 >= 2 )
    {
      if ( questBoardManager )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(questBoardManager, v9, 0);
        this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                 rewardIconInfoList,
                                                 AlphaAnimCnt,
                                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
        v11 = (System_Collections_Generic_List_object__o *)v4->fields.rewardIconInfoList;
        if ( v11 )
        {
          v12 = this;
          NextAlphaAnimCnt = QuestBoardListViewManager__GetNextAlphaAnimCnt(questBoardManager, v11->fields._size, 0);
          this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                   v11,
                                                   NextAlphaAnimCnt,
                                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
          if ( v12 )
          {
            v14 = this;
            this = (QuestBoardListViewItemDraw_o *)QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(
                                                     (QuestBoardRewardIcon_RewardIconInfo_o *)v12,
                                                     0);
            if ( v14 )
            {
              if ( ((unsigned __int8)this & 1) != QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(
                                                    (QuestBoardRewardIcon_RewardIconInfo_o *)v14,
                                                    0) )
              {
                this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                if ( !this )
                  goto LABEL_54;
                mRewardGetSP = (Il2CppObject *)v4->fields.mRewardGetSP;
                m_CachedPtr = this->fields.m_CachedPtr;
                v19 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !m_CachedPtr )
                  goto LABEL_54;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    mRewardGetSP,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v21 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v21 + 32) = mRewardGetSP;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 32), (int32_t)mRewardGetSP, v15, v16);
                }
              }
              IsDisplayNotGive = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayNotGive(
                                   (QuestBoardRewardIcon_RewardIconInfo_o *)v12,
                                   0);
              if ( IsDisplayNotGive != QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayNotGive(
                                         (QuestBoardRewardIcon_RewardIconInfo_o *)v14,
                                         0) )
              {
                this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                if ( !this )
                  goto LABEL_54;
                mRewardNotGetSP = (Il2CppObject *)v4->fields.mRewardNotGetSP;
                v26 = this->fields.m_CachedPtr;
                v27 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v26 )
                  goto LABEL_54;
                v28 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    mRewardNotGetSP,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                }
                else
                {
                  v29 = v26 + 8 * v28;
                  LODWORD(this->fields.m_CancellationTokenSource) = v28 + 1;
                  *(_QWORD *)(v29 + 32) = mRewardNotGetSP;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 32), (int32_t)mRewardNotGetSP, v23, v24);
                }
              }
              IsDisplayServantLimitOpened = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(
                                              (QuestBoardRewardIcon_RewardIconInfo_o *)v12,
                                              0);
              if ( IsDisplayServantLimitOpened != QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(
                                                    (QuestBoardRewardIcon_RewardIconInfo_o *)v14,
                                                    0) )
              {
                this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                if ( !this )
                  goto LABEL_54;
                mServantLimitRewardObtainedSP = (Il2CppObject *)v4->fields.mServantLimitRewardObtainedSP;
                v34 = this->fields.m_CachedPtr;
                v35 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v34 )
                  goto LABEL_54;
                v36 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    mServantLimitRewardObtainedSP,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                }
                else
                {
                  v37 = v34 + 8 * v36;
                  LODWORD(this->fields.m_CancellationTokenSource) = v36 + 1;
                  *(_QWORD *)(v37 + 32) = mServantLimitRewardObtainedSP;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v37 + 32), (int32_t)mServantLimitRewardObtainedSP, v31, v32);
                }
              }
              TitleType = QuestBoardRewardIcon_RewardIconInfo__GetTitleType(
                            (QuestBoardRewardIcon_RewardIconInfo_o *)v12,
                            0);
              if ( TitleType == QuestBoardRewardIcon_RewardIconInfo__GetTitleType(
                                  (QuestBoardRewardIcon_RewardIconInfo_o *)v14,
                                  0) )
                return;
              this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
              if ( this )
              {
                mRewardFirstSP = (Il2CppObject *)v4->fields.mRewardFirstSP;
                v42 = this->fields.m_CachedPtr;
                v43 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( v42 )
                {
                  v44 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      mRewardFirstSP,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v45 = v42 + 8 * v44;
                    LODWORD(this->fields.m_CancellationTokenSource) = v44 + 1;
                    *(_QWORD *)(v45 + 32) = mRewardFirstSP;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 32), (int32_t)mRewardFirstSP, v39, v40);
                  }
                  this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                  if ( this )
                  {
                    mRewardPhaseSP = (Il2CppObject *)v4->fields.mRewardPhaseSP;
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
                          mRewardPhaseSP,
                          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v52 = v49 + 8 * v51;
                        LODWORD(this->fields.m_CancellationTokenSource) = v51 + 1;
                        *(_QWORD *)(v52 + 32) = mRewardPhaseSP;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v52 + 32), (int32_t)mRewardPhaseSP, v46, v47);
                      }
                      this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                      if ( this )
                      {
                        mRewardQuestSP = (Il2CppObject *)v4->fields.mRewardQuestSP;
                        v56 = this->fields.m_CachedPtr;
                        v57 = Method_System_Collections_Generic_List_UIWidget__Add__;
                        ++HIDWORD(this->fields.m_CancellationTokenSource);
                        if ( v56 )
                        {
                          v58 = SLODWORD(this->fields.m_CancellationTokenSource);
                          if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              (System_Collections_Generic_List_object__o *)this,
                              mRewardQuestSP,
                              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v59 = v56 + 8 * v58;
                            LODWORD(this->fields.m_CancellationTokenSource) = v58 + 1;
                            *(_QWORD *)(v59 + 32) = mRewardQuestSP;
                            sub_1C36FFC((CGThumbnailListItem_o *)(v59 + 32), (int32_t)mRewardQuestSP, v53, v54);
                          }
                          this = (QuestBoardListViewItemDraw_o *)v4->fields.rewardIconAlphaSyncWidgetList;
                          if ( this )
                          {
                            mRewardSharedSP = (Il2CppObject *)v4->fields.mRewardSharedSP;
                            v63 = this->fields.m_CachedPtr;
                            v64 = Method_System_Collections_Generic_List_UIWidget__Add__;
                            ++HIDWORD(this->fields.m_CancellationTokenSource);
                            if ( v63 )
                            {
                              v65 = SLODWORD(this->fields.m_CancellationTokenSource);
                              if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  mRewardSharedSP,
                                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v66 = v63 + 8 * v65;
                                LODWORD(this->fields.m_CancellationTokenSource) = v65 + 1;
                                *(_QWORD *)(v66 + 32) = mRewardSharedSP;
                                sub_1C36FFC((CGThumbnailListItem_o *)(v66 + 32), (int32_t)mRewardSharedSP, v60, v61);
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
      sub_1C372B4(this);
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

  if ( (byte_4C3FBEC & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBEC = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0) )
  {
    v3 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v3 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v4 = System_String__Concat_63561656(v3->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH, this->fields.boardIconName, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v4, 0);
    this->fields.boardIconAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boardIconAssetData, 0, v5, v6);
    this->fields.boardIconName = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boardIconName, 0, v7, v8);
  }
}


void QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_4C3FBE2 & 1) == 0 )
  {
    sub_1C37058(&TerminalBannerComponent_TypeInfo);
    byte_4C3FBE2 = 1;
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

  if ( (byte_4C3FBA5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4C3FBA5 = 1;
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
    v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (CGThumbnailListItem_c *)v7;
    sub_1C36FFC(p_mInfoTextList, (int32_t)v7, v8, v9);
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

  if ( (byte_4C3FBD6 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBD6 = 1;
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
    sub_1C372B4(mCostObj);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x26
  System_String_o *monitor; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  char v21; // w27
  int32_t monitor_high; // w29
  char v23; // w21
  __int64 v24; // x8
  Il2CppObject *PrioredName; // x0
  int32_t WarID_ByQuestID; // w28
  int64_t OpenedAt; // x28
  System_Object_array *v28; // x28
  System_DateTime_o v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x29
  System_DateTime_o v39; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x29
  System_DateTime_o v49; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x29
  System_DateTime_o v59; // x0
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x5
  __int64 v64; // x6
  __int64 v65; // x7
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  Il2CppObject *v68; // x29
  bool v69; // w26
  MapControl_WarInfo_o *v70; // x0
  WarEntity_o *Mine; // x0
  Il2CppObject *Master_object; // x27
  System_Collections_Generic_List_object__o *v73; // x28
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v74; // x23
  System_Func_object__bool__o *v75; // x24
  Il2CppObject *v76; // x23
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v77; // x23
  QuestBoardListViewItemDraw___c_c *v78; // x0
  System_Func_object__int__o *_9__350_1; // x24
  Il2CppObject *v80; // x25
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  _BOOL4 v85; // w27
  UILabel_o *mTitleNameLb; // x24
  Il2CppClass *klass; // x1
  struct QuestBoardListViewItemDraw_StaticFields *v88; // x8
  __int64 v89; // x9
  int32_t v90; // w24
  int32_t v91; // w25
  float v92; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v94; // s1 OVERLAPPED
  float v95; // s0
  int v96; // s2
  float v97; // s9
  float v98; // s0 OVERLAPPED
  float v99; // s1 OVERLAPPED
  float v100; // s0
  int v101; // s2
  float v102; // s1
  int v103; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x22
  const MethodInfo *v105; // x4
  const MethodInfo *v106; // x4
  System_String_o *v107; // x20
  UILabel_o *v108; // x21
  float v109; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  UILabel_o *mCondChangeMessage; // x19
  __int64 v112; // x0
  int32_t v113; // [xsp+4h] [xbp-ACh]
  int32_t Minute; // [xsp+Ch] [xbp-A4h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-A0h] BYREF
  int32_t Day; // [xsp+14h] [xbp-9Ch] BYREF
  __int64 v117; // [xsp+18h] [xbp-98h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *v119; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FBBA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____78147488);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
    sub_1C37058(&System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    sub_1C37058(&System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__SetAdvanceNoticeText_b__350_1__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass350_0__SetAdvanceNoticeText_b__0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass350_0_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1C37058(&StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBBA = 1;
  }
  entityList = 0;
  entity = 0;
  dateData = 0;
  v119 = 0;
  v9 = sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass350_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass350_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass350_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_148;
  *(_QWORD *)(v9 + 16) = questInfo;
  v13 = v9 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)questInfo, v11, v12);
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
  mAdvanceNoticeLb = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mAdvanceNoticeLb )
    goto LABEL_148;
  mAdvanceNoticeLb = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)mAdvanceNoticeLb,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !*(_QWORD *)v13 || !mAdvanceNoticeLb )
    goto LABEL_148;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  mAdvanceNoticeLb = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)mAdvanceNoticeLb,
                       &entity,
                       *(_DWORD *)(*(_QWORD *)v13 + 88LL),
                       (const MethodInfo_33A10EC *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (mAdvanceNoticeLb & 1) != 0 )
  {
    mAdvanceNoticeLb = (__int64)entity;
    if ( !entity )
      goto LABEL_148;
    monitor = (System_String_o *)entity[1].monitor;
    mAdvanceNoticeLb = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_148;
    v21 = mAdvanceNoticeLb;
    mAdvanceNoticeLb = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_148;
    monitor_high = HIDWORD(entity[2].monitor);
    v23 = mAdvanceNoticeLb;
  }
  else
  {
    monitor_high = 0;
    v23 = 0;
    v21 = 0;
  }
  v24 = *(_QWORD *)v13;
  if ( !*(_QWORD *)v13 )
    goto LABEL_148;
  switch ( *(_DWORD *)(v24 + 68) )
  {
    case 1:
      mAdvanceNoticeLb = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(_QWORD *)v13 || !mAdvanceNoticeLb )
        goto LABEL_148;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                          (QuestTree_o *)mAdvanceNoticeLb,
                          *(_DWORD *)(*(_QWORD *)v13 + 72LL),
                          0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mAdvanceNoticeLb = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !mAdvanceNoticeLb )
        goto LABEL_148;
      mAdvanceNoticeLb = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)mAdvanceNoticeLb,
                           &v119,
                           WarID_ByQuestID,
                           (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      if ( (mAdvanceNoticeLb & 1) == 0 )
        goto LABEL_52;
      mAdvanceNoticeLb = (__int64)v119;
      if ( !v119 )
        goto LABEL_148;
      PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v119, 0);
LABEL_23:
      mAdvanceNoticeLb = (__int64)System_String__Format(monitor, PrioredName, 0);
      goto LABEL_51;
    case 6:
    case 7:
    case 9:
      v117 = *(_QWORD *)(v24 + 80);
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v117, v15, v16, v17, v18, v19, v20);
      goto LABEL_23;
    case 0xC:
      if ( !questEnt )
        goto LABEL_148;
      OpenedAt = QuestEntity__getOpenedAt(questEnt, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v113 = monitor_high;
      dateData = NetworkManager__getServerDateTime_41367476(OpenedAt, 0).fields._dateData;
      v28 = (System_Object_array *)sub_1C37100(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v29.fields._dateData = (uint64_t)&dateData;
      LODWORD(v117) = System_DateTime__get_Month(v29, 0);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &v117, v30, v31, v32, v33, v34, v35);
      if ( !v28 )
        goto LABEL_148;
      v38 = (Il2CppObject *)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C37194(mAdvanceNoticeLb, v28->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_150;
      }
      if ( !LODWORD(v28->max_length) )
        goto LABEL_149;
      v28->m_Items[0] = v38;
      sub_1C36FFC((CGThumbnailListItem_o *)v28->m_Items, (int32_t)v38, v36, v37);
      v39.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v39, 0);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Day, v40, v41, v42, v43, v44, v45);
      v48 = (Il2CppObject *)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C37194(mAdvanceNoticeLb, v28->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_150;
      }
      if ( LODWORD(v28->max_length) <= 1 )
        goto LABEL_149;
      v28->m_Items[1] = v48;
      sub_1C36FFC((CGThumbnailListItem_o *)&v28->m_Items[1], (int32_t)v48, v46, v47);
      v49.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v49, 0);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v50, v51, v52, v53, v54, v55);
      v58 = (Il2CppObject *)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C37194(mAdvanceNoticeLb, v28->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_150;
      }
      if ( LODWORD(v28->max_length) <= 2 )
        goto LABEL_149;
      v28->m_Items[2] = v58;
      sub_1C36FFC((CGThumbnailListItem_o *)&v28->m_Items[2], (int32_t)v58, v56, v57);
      v59.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v59, 0);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v60, v61, v62, v63, v64, v65);
      v68 = (Il2CppObject *)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C37194(mAdvanceNoticeLb, v28->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
        {
LABEL_150:
          v112 = sub_1C372D8();
          sub_1C37180(v112, 0);
        }
      }
      if ( LODWORD(v28->max_length) <= 3 )
LABEL_149:
        sub_1C372BC(mAdvanceNoticeLb);
      v28->m_Items[3] = v68;
      sub_1C36FFC((CGThumbnailListItem_o *)&v28->m_Items[3], (int32_t)v68, v66, v67);
      mAdvanceNoticeLb = (__int64)System_String__Format_63603084(monitor, v28, 0);
      monitor_high = v113;
LABEL_51:
      monitor = (System_String_o *)mAdvanceNoticeLb;
LABEL_52:
      if ( (v21 & 1) != 0 )
      {
        v69 = 1;
      }
      else
      {
        if ( !*(_QWORD *)v13 )
          goto LABEL_148;
        v70 = *(MapControl_WarInfo_o **)(*(_QWORD *)v13 + 104LL);
        if ( !v70 )
          goto LABEL_61;
        mAdvanceNoticeLb = (__int64)MapControl_WarInfo__GetMine(v70, 0);
        if ( !mAdvanceNoticeLb )
          goto LABEL_61;
        if ( !*(_QWORD *)v13 )
          goto LABEL_148;
        mAdvanceNoticeLb = *(_QWORD *)(*(_QWORD *)v13 + 104LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)mAdvanceNoticeLb, 0);
        if ( Mine )
          v69 = WarEntity__IsChangeDispClosedMessage(Mine, 0);
        else
LABEL_61:
          v69 = 0;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      v73 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v73,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
      entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v73;
      if ( !questEnt || !Master_object )
        goto LABEL_148;
      QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        (QuestReleaseOverwriteMaster_o *)Master_object,
        &entityList,
        questEnt->fields.id,
        checkTime,
        0);
      v74 = entityList;
      v75 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v75,
        (Il2CppObject *)v9,
        Method_QuestBoardListViewItemDraw___c__DisplayClass350_0__SetAdvanceNoticeText_b__0__,
        0);
      v76 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
              (System_Collections_Generic_IEnumerable_TSource__o *)v74,
              (System_Func_TSource__bool__o *)v75,
              (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____78147488);
      if ( !v76 )
      {
        v77 = entityList;
        v78 = QuestBoardListViewItemDraw___c_TypeInfo;
        if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
          v78 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        _9__350_1 = (System_Func_object__int__o *)v78->static_fields->__9__350_1;
        if ( !_9__350_1 )
        {
          if ( !v78->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v78);
            v78 = QuestBoardListViewItemDraw___c_TypeInfo;
          }
          v80 = (Il2CppObject *)v78->static_fields->__9;
          _9__350_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__350_1,
            v80,
            Method_QuestBoardListViewItemDraw___c__SetAdvanceNoticeText_b__350_1__,
            0);
          static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          static_fields->__9__350_1 = (struct System_Func_QuestReleaseOverwriteEntity__int__o *)_9__350_1;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__350_1, (int32_t)_9__350_1, v82, v83);
        }
        v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v77,
                                                                     (System_Func_TSource__TKey__o *)_9__350_1,
                                                                     (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
        v76 = System_Linq_Enumerable__FirstOrDefault_object_(
                v84,
                (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
        if ( !v76 )
        {
          v85 = 0;
          if ( v69 )
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
          if ( v85 )
          {
            mAdvanceNoticeLb = (__int64)this->fields.mCondObject;
            if ( !mAdvanceNoticeLb )
              goto LABEL_148;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0);
            if ( !v76 )
              goto LABEL_148;
            mAdvanceNoticeLb = (__int64)this->fields.mCondChangeMessage;
            if ( !mAdvanceNoticeLb )
              goto LABEL_148;
            UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)v76[3].monitor, 0);
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
      v85 = !System_String__IsNullOrEmpty((System_String_o *)v76[3].monitor, 0);
      if ( !v69 )
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
          mAdvanceNoticeLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/, 0);
          klass = (Il2CppClass *)mAdvanceNoticeLb;
        }
        if ( !mTitleNameLb )
LABEL_148:
          sub_1C372B4(mAdvanceNoticeLb);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mAdvanceNoticeLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/, 0);
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
      v88 = *(struct QuestBoardListViewItemDraw_StaticFields **)(mAdvanceNoticeLb + 184);
      v89 = 48;
      if ( !v85 )
        v89 = 44;
      v90 = *(int32_t *)((char *)&v88->POS_Y_ITVL_AREA + v89);
      if ( v85 )
      {
        if ( !v76 )
          goto LABEL_148;
        v91 = (int32_t)v76[4].klass;
      }
      else
      {
        v91 = 0;
      }
      v92 = (float)monitor_high;
      if ( (v23 & 1) != 0 )
      {
        if ( !*(_DWORD *)(mAdvanceNoticeLb + 224) )
        {
          j_il2cpp_runtime_class_init_0(mAdvanceNoticeLb);
          v88 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
        }
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = v88->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X;
        UIWidget__set_pivot((UIWidget_o *)mAdvanceNoticeLb, 3, 0);
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mAdvanceNoticeLb, 0);
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        v94 = 24.0;
        if ( !v85 )
          v94 = 0.0;
        v96 = 0;
        v95 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v92;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v94 - 1),
          0);
        mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_148;
        v97 = *(float *)(*(_QWORD *)(mAdvanceNoticeLb + 184) + 52LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mAdvanceNoticeLb, 0);
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        v98 = v97 + (float)v91;
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
        v99 = 24.0;
        if ( !v85 )
          v99 = 0.0;
        v101 = 0;
        v100 = v92 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v99 - 1),
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
        v98 = (float)v91 * 0.5;
      }
      v102 = -26.0;
      v103 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)mAdvanceNoticeLb,
        *(UnityEngine_Vector3_o *)&v98,
        0);
      mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !mAdvanceNoticeLb )
        goto LABEL_148;
      UIWidget__set_height((UIWidget_o *)mAdvanceNoticeLb, v90, 0);
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
        v90,
        monitor_high,
        v105);
      if ( v85 )
      {
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !mAdvanceNoticeLb )
          goto LABEL_148;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0);
        if ( !v76 )
          goto LABEL_148;
        v107 = (System_String_o *)v76[3].monitor;
        v108 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v109 = v92 * 0.5;
        QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_350_2(v108, v107, v90, v91, v106);
      }
      else
      {
        v109 = 0.0;
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
            v122.fields.y = 0.0;
            v122.fields.z = 0.0;
            v122.fields.x = v109;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mAdvanceNoticeLb, v122, 0);
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

  if ( (byte_4C3FBBF & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FBBF = 1;
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
           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v10 = this->fields.mNoticeNumberRoot;
    v11 = (UnityEngine_GameObject_o *)v9;
    GameObjectExtensions__SafeSetParent_36138184((UnityEngine_GameObject_o *)v9, v10, 0);
    if ( v11 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v11,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (CGThumbnailListItem_c *)Component_object;
      sub_1C36FFC(p_mNoticeNumber, (int32_t)Component_object, v13, v14);
      goto LABEL_11;
    }
LABEL_13:
    sub_1C372B4(mNoticeNumberRoot);
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
  UnityEngine_GameObject_o *v15; // x23
  QuestBoardListViewItemDraw_c *v16; // x0
  UnityEngine_Object_o *black_mark_prefab_k__BackingField; // x23
  UnityEngine_Object_o *blackMarkEffect; // x23
  Il2CppObject *v19; // x24
  struct UnityEngine_GameObject_o **p_blackMarkEffect; // x23
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *v25; // x23
  int32_t v26; // w23
  UnityEngine_GameObject_o *v27; // x22
  QuestBoardListViewItemDraw_c *v28; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  QuestBoardListViewItemDraw_c *v33; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v34; // x10
  UnityEngine_GameObject_o *v35; // x21
  QuestBoardListViewItemDraw_c *v36; // x0
  UnityEngine_Object_o *white_mark_prefab_k__BackingField; // x21
  UnityEngine_Object_o *whiteMarkEffect; // x21
  Il2CppObject *v39; // x21
  struct UnityEngine_GameObject_o **p_whiteMarkEffect; // x20
  UnityEngine_Transform_o *v41; // x22
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UnityEngine_GameObject_o *v45; // x20
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FBA7 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBA7 = 1;
  }
  if ( !warEntity )
    return;
  if ( !WarEntity__IsBlackMarkWithClear(warEntity, 0) )
    goto LABEL_12;
  lastQuestId = warEntity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsQuestClear_40324848(lastQuestId, -1, 0, 0) )
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
    v15 = this->fields.blackMarkSpace;
    v16 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v16 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v15, v16->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0);
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
      v19 = (Il2CppObject *)questBoardItem->fields._black_mark_prefab_k__BackingField;
      p_blackMarkEffect = &this->fields.blackMarkEffect;
      transform = UnityEngine_GameObject__get_transform(v14, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v22 = UnityEngine_Object__Instantiate_object__51855596(
              v19,
              transform,
              (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v22;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.blackMarkEffect, (int32_t)v22, v23, v24);
      v25 = *p_blackMarkEffect;
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
    v14 = this->fields.blackMarkSpace;
    if ( !v14 )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(v14, 1, 0);
  }
LABEL_31:
  if ( WarEntity__IsWhiteMarkWithClear(warEntity, 0) )
  {
    v26 = warEntity->fields.lastQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_40324848(v26, -1, 0, 0) )
    {
      v27 = this->fields.blackMarkSpace;
      v28 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v28 = QuestBoardListViewItemDraw_TypeInfo;
      }
      static_fields = v28->static_fields;
      p_x = &static_fields->BLACK_MARK_OBJ_POS.fields.x;
      p_y = &static_fields->BLACK_MARK_OBJ_POS.fields.y;
      p_z = &static_fields->BLACK_MARK_OBJ_POS.fields.z;
      goto LABEL_42;
    }
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(warEntity, 0) )
  {
    v27 = this->fields.blackMarkSpace;
    v33 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v33 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v34 = v33->static_fields;
    p_x = &v34->WHITE_MARK_OBJ_UNDER_POS.fields.x;
    p_y = &v34->WHITE_MARK_OBJ_UNDER_POS.fields.y;
    p_z = &v34->WHITE_MARK_OBJ_UNDER_POS.fields.z;
LABEL_42:
    v46.fields.y = *p_y;
    v46.fields.x = *p_x;
    v46.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v27, v46, 0);
    if ( !isWhiteMarkOnly )
      goto LABEL_48;
    goto LABEL_45;
  }
  if ( !isWhiteMarkOnly )
    return;
LABEL_45:
  v35 = this->fields.blackMarkSpace;
  v36 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v36 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v35, v36->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0);
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
      v39 = (Il2CppObject *)questBoardItem->fields._white_mark_prefab_k__BackingField;
      p_whiteMarkEffect = &this->fields.whiteMarkEffect;
      v41 = UnityEngine_GameObject__get_transform(v14, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v42 = UnityEngine_Object__Instantiate_object__51855596(
              v39,
              v41,
              (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
      *p_whiteMarkEffect = (struct UnityEngine_GameObject_o *)v42;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.whiteMarkEffect, (int32_t)v42, v43, v44);
      v45 = *p_whiteMarkEffect;
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v45, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
    v14 = this->fields.blackMarkSpace;
    if ( v14 )
    {
      UnityEngine_GameObject__SetActive(v14, 1, 0);
      return;
    }
LABEL_64:
    sub_1C372B4(v14);
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  int32_t v23; // w21
  UISprite_o *mLabelBoardSectionSp; // x20
  QuestBoardListViewItemDraw_c *v25; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x21
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C3FBB6 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBB6 = 1;
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
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_47;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               questInfo->fields.warId,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
  v23 = QuestBoardSectionId;
  mLabelBoardSectionSp = v4->fields.mLabelBoardSectionSp;
  v25 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v25 = QuestBoardListViewItemDraw_TypeInfo;
  }
  CHAPTER_SP_UNIT_NAME = v25->static_fields->CHAPTER_SP_UNIT_NAME;
  v29 = v23;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v17, v18, v19, v20, v21, v22);
  v28 = System_String__Format(CHAPTER_SP_UNIT_NAME, v27, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mLabelBoardSectionSp, v28, 0);
  if ( !mLabelBoardSectionSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)mLabelBoardSectionSp,
          (unsigned __int8)this & 1,
          0),
        (this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelBoardSectionSp) == 0) )
  {
LABEL_47:
    sub_1C372B4(this);
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
  UnityEngine_GameObject_o *v6; // x19
  QuestBoardListViewItemDraw_c *v7; // x0
  QuestBoardListViewItemDraw_c *v8; // x0

  if ( (byte_4C3FBC2 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBC2 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_1C372B4(0);
  v6 = StatusSp;
  if ( UnityEngine_GameObject__get_activeSelf(StatusSp, 0) )
  {
    v7 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v7 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v6, v7->static_fields->CLEAR_POS_AREA, 0);
    if ( warEnt && WarEntity__HasFlag(warEnt, 256, 0) )
    {
      v8 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v8 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionX(v6, -v8->static_fields->CLEAR_POS_AREA.fields.x, 0);
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
  Il2CppObject *MasterData_object; // x23
  System_String_o *monitor; // x21
  QuestReleaseEntity_array *ListByQuestID; // x0
  QuestBoardListViewItemDraw___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x24
  System_Func_object__bool__o *_9__428_0; // x25
  Il2CppObject *v14; // x26
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x24
  QuestBoardListViewItemDraw___c_c *v20; // x0
  System_Func_object__int__o *_9__428_1; // x25
  Il2CppObject *v22; // x26
  struct QuestBoardListViewItemDraw___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w24
  int v29; // w26
  __int64 v30; // x25
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  char v37; // w23
  Il2CppObject *PrioredName; // x0
  System_String_o *v39; // x0
  int32_t WarID_ByQuestID; // w22
  int64_t OpenedAt; // x22
  System_Object_array *v42; // x22
  System_DateTime_o v43; // x0
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x24
  System_DateTime_o v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x24
  System_DateTime_o v63; // x0
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x5
  __int64 v68; // x6
  __int64 v69; // x7
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x24
  System_DateTime_o v73; // x0
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  __int64 v77; // x5
  __int64 v78; // x6
  __int64 v79; // x7
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  Il2CppObject *v82; // x24
  struct UILabel_o *mTitleNameLb; // x19
  Il2CppClass *klass; // x1
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  __int64 v87; // x0
  int32_t Minute; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t Hour; // [xsp+18h] [xbp-88h] BYREF
  int32_t Day; // [xsp+1Ch] [xbp-84h] BYREF
  __int64 v91; // [xsp+20h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v93; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C3FBF1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_First_QuestReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_QuestReleaseEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_1C37058(&System_Func_QuestReleaseEntity__int__TypeInfo);
    sub_1C37058(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__SetClosedTitleName_b__428_0__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__SetClosedTitleName_b__428_1__);
    sub_1C37058(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1C37058(&StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBF1 = 1;
  }
  v93 = 0;
  entity = 0;
  dateData = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !questInfo || !Instance )
    goto LABEL_80;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  ListByQuestID = QuestReleaseMaster__getListByQuestID((QuestReleaseMaster_o *)Instance, questInfo->fields.questId, 0);
  v11 = QuestBoardListViewItemDraw___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestID;
  if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
    v11 = QuestBoardListViewItemDraw___c_TypeInfo;
  }
  _9__428_0 = (System_Func_object__bool__o *)v11->static_fields->__9__428_0;
  if ( !_9__428_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = QuestBoardListViewItemDraw___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__428_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__428_0,
      v14,
      Method_QuestBoardListViewItemDraw___c__SetClosedTitleName_b__428_0__,
      0);
    static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__428_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__428_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__428_0, (int32_t)_9__428_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__428_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               v18,
                                                               (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
  Instance = System_Linq_Enumerable__Any_object_(
               v19,
               (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
  if ( (Instance & 1) != 0 )
  {
    v20 = QuestBoardListViewItemDraw___c_TypeInfo;
    if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
      v20 = QuestBoardListViewItemDraw___c_TypeInfo;
    }
    _9__428_1 = (System_Func_object__int__o *)v20->static_fields->__9__428_1;
    if ( !_9__428_1 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__428_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_QuestReleaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__428_1,
        v22,
        Method_QuestBoardListViewItemDraw___c__SetClosedTitleName_b__428_1__,
        0);
      v23 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
      v23->__9__428_1 = (struct System_Func_QuestReleaseEntity__int__o *)_9__428_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v23->__9__428_1, (int32_t)_9__428_1, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v19,
                                                                 (System_Func_TSource__TKey__o *)_9__428_1,
                                                                 (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_QuestReleaseEntity__int___);
    Instance = (__int64)System_Linq_Enumerable__First_object_(
                          v26,
                          (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_QuestReleaseEntity___);
    if ( !Instance )
      goto LABEL_80;
    v27 = *(_DWORD *)(Instance + 40);
    v29 = *(_DWORD *)(Instance + 20);
    v28 = *(_DWORD *)(Instance + 24);
    v30 = *(_QWORD *)(Instance + 32);
  }
  else
  {
    v30 = 0;
    v28 = 0;
    v29 = 0;
    v27 = 0;
  }
  if ( !MasterData_object )
    goto LABEL_80;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               &entity,
               v27,
               (const MethodInfo_33A10EC *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_80;
    monitor = (System_String_o *)entity[1].monitor;
    Instance = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0);
    v37 = Instance;
  }
  else
  {
    v37 = 0;
  }
  switch ( v29 )
  {
    case 1:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, v28, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Instance )
        goto LABEL_80;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &v93,
              WarID_ByQuestID,
              (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        goto LABEL_58;
      Instance = (__int64)v93;
      if ( !v93 )
        goto LABEL_80;
      PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v93, 0);
LABEL_30:
      v39 = System_String__Format(monitor, PrioredName, 0);
      goto LABEL_57;
    case 6:
    case 7:
    case 9:
      v91 = v30;
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v91, v31, v32, v33, v34, v35, v36);
      goto LABEL_30;
    case 12:
      if ( !questEnt )
        goto LABEL_80;
      OpenedAt = QuestEntity__getOpenedAt(questEnt, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_41367476(OpenedAt, 0).fields._dateData;
      v42 = (System_Object_array *)sub_1C37100(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v43.fields._dateData = (uint64_t)&dateData;
      LODWORD(v91) = System_DateTime__get_Month(v43, 0);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &v91, v44, v45, v46, v47, v48, v49);
      if ( !v42 )
        goto LABEL_80;
      v52 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = sub_1C37194(Instance, v42->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_82;
      }
      if ( !LODWORD(v42->max_length) )
        goto LABEL_81;
      v42->m_Items[0] = v52;
      sub_1C36FFC((CGThumbnailListItem_o *)v42->m_Items, (int32_t)v52, v50, v51);
      v53.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v53, 0);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day, v54, v55, v56, v57, v58, v59);
      v62 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = sub_1C37194(Instance, v42->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_82;
      }
      if ( LODWORD(v42->max_length) <= 1 )
        goto LABEL_81;
      v42->m_Items[1] = v62;
      sub_1C36FFC((CGThumbnailListItem_o *)&v42->m_Items[1], (int32_t)v62, v60, v61);
      v63.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v63, 0);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v64, v65, v66, v67, v68, v69);
      v72 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = sub_1C37194(Instance, v42->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_82;
      }
      if ( LODWORD(v42->max_length) <= 2 )
        goto LABEL_81;
      v42->m_Items[2] = v72;
      sub_1C36FFC((CGThumbnailListItem_o *)&v42->m_Items[2], (int32_t)v72, v70, v71);
      v73.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v73, 0);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v74, v75, v76, v77, v78, v79);
      v82 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = sub_1C37194(Instance, v42->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_82:
          v87 = sub_1C372D8();
          sub_1C37180(v87, 0);
        }
      }
      if ( LODWORD(v42->max_length) <= 3 )
LABEL_81:
        sub_1C372BC(Instance);
      v42->m_Items[3] = v82;
      sub_1C36FFC((CGThumbnailListItem_o *)&v42->m_Items[3], (int32_t)v82, v80, v81);
      v39 = System_String__Format_63603084(monitor, v42, 0);
LABEL_57:
      monitor = v39;
LABEL_58:
      if ( (v37 & 1) != 0 )
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
            Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/, 0);
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
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/, 0);
          if ( mTitleNameLb )
          {
            klass = (Il2CppClass *)Instance;
            goto LABEL_78;
          }
        }
LABEL_80:
        sub_1C372B4(Instance);
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
  const MethodInfo *v35; // x1
  int bannerId; // w23
  UISprite_o *mCostApSp; // x21
  System_String_o *ApSpriteFileName; // x23
  int32_t ActConsume; // w0
  int32_t v40; // w29
  UserGameEntity_o *v41; // x28
  bool v42; // w24
  BalanceConfig_c *v43; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UISprite_o *mCostRpSp; // x21
  __int64 BpExpresssionType; // x20
  __int64 v47; // x8
  struct System_String_array *RP_SPNAME_POINT; // x8
  struct System_Int32_array *v49; // x8
  char v50; // w23
  QuestBoardListViewItemDraw_o *v51; // x22
  QuestBoardListViewItemDraw_c *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct System_Int32_array *v54; // x8
  int32_t v55; // w20
  BalanceConfig_c *v56; // x0
  UIWidget_o *v57; // x22
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  struct System_Int32_array *v60; // x8
  const MethodInfo *v61; // x1
  int v62; // w23
  UISprite_o *v63; // x22
  System_String_o *v64; // x23
  BalanceConfig_c *v65; // x0
  bool v66; // w24
  Il2CppObject *v67; // x27
  Il2CppObject *v68; // x26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v70; // x8
  ItemEntity_o *v71; // x28
  const MethodInfo *v72; // x7
  struct System_Int32_array *nums; // x8
  UIWidget_o *v74; // x28
  struct System_Int32_array *v75; // x8
  struct System_Int32_array *v76; // x8
  const MethodInfo *v77; // x7
  struct System_Int32_array *v78; // x8
  bool v79; // w28
  UISprite_o *v80; // x21
  struct UIRoot_o *mRoot; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // x21
  Il2CppObject *v83; // x0
  Il2CppObject *v84; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v86; // x8
  UnityEngine_GameObject_o *v87; // x22
  UnityEngine_GameObject_o *v88; // x0
  int klass; // w20
  BalanceConfig_c *v90; // x0
  UIWidget_o *v91; // x21
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_GameObject_o *v93; // x0
  UISprite_o *v94; // x22
  struct UIRoot_o *v95; // x8
  struct System_Int32_array *v96; // x8
  UnityEngine_GameObject_o *v97; // x0
  QuestBoardListViewItemDraw_c *v98; // x8
  UnityEngine_GameObject_o *v99; // x22
  UnityEngine_GameObject_o *v100; // x0
  struct System_Int32_array *v101; // x8
  int32_t v102; // w20
  BalanceConfig_c *v103; // x0
  UIWidget_o *v104; // x22
  UnityEngine_GameObject_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x0
  QuestBoardListViewItemDraw_c *v108; // x8
  UnityEngine_GameObject_o *v109; // x22
  UnityEngine_GameObject_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  struct System_Int32_array *v114; // x8
  UnityEngine_GameObject_o *v115; // x21
  UnityEngine_GameObject_o *v116; // x21
  UnityEngine_GameObject_o *v117; // x21
  UIWidget_o *v118; // x21
  UILabel_o *v119; // x20
  UILabel_o *mCostLb1; // x28
  QuestBoardListViewItemDraw_o *v121; // x0
  const MethodInfo *v122; // x7
  Il2CppObject *Master_object; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v124; // x24
  Il2CppObject *v125; // x0
  Il2CppObject *v126; // x24
  UIWidget_o *v127; // x27
  int64_t v128; // x25
  const MethodInfo *v129; // x7
  QuestBoardListViewItemDraw_o *mCostLb3; // x1
  UserItemEntity_o *v131; // x3
  bool v132; // w5
  char v133; // w6
  int32_t v134; // w2
  ItemEntity_o *v135; // x4
  UILabel_o *v136; // x25
  QuestBoardListViewItemDraw_o *v137; // x0
  const MethodInfo *v138; // x7
  UILabel_o *v139; // x29
  QuestBoardListViewItemDraw_o *v140; // x0
  const MethodInfo *v141; // x7
  UIWidget_o *v142; // x25
  Il2CppObject *v143; // x26
  Il2CppObject *v144; // x25
  struct System_Int32_array *v145; // x8
  struct System_Int32_array *v146; // x8
  ItemEntity_o *v147; // x25
  const MethodInfo *v148; // x7
  struct System_Int32_array *v149; // x8
  UIWidget_o *v150; // x25
  struct System_Int32_array *v151; // x8
  struct System_Int32_array *v152; // x8
  struct System_Int32_array *v153; // x8
  bool *v154; // [xsp+8h] [xbp-D8h]
  QuestConsumeItemEntity_o *v155; // [xsp+20h] [xbp-C0h]
  __int64 v156; // [xsp+28h] [xbp-B8h]
  Il2CppObject *v157; // [xsp+30h] [xbp-B0h] BYREF
  UserItemEntity_o *usrItem; // [xsp+38h] [xbp-A8h] BYREF
  UserItemEntity_o *entity; // [xsp+40h] [xbp-A0h] BYREF
  UserItemEntity_o *v160; // [xsp+48h] [xbp-98h] BYREF
  Il2CppObject *v161; // [xsp+50h] [xbp-90h] BYREF
  int32_t v162; // [xsp+5Ch] [xbp-84h] BYREF
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
  UnityEngine_Color_o v178; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v179; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v23 = this;
  if ( (byte_4C3FBB1 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBB1 = 1;
  }
  v162 = 0;
  v160 = 0;
  v161 = 0;
  usrItem = 0;
  entity = 0;
  v157 = 0;
  if ( !questEnt )
    goto LABEL_465;
  type = questEnt->fields.type;
  *isDoubleItemConsume = 0;
  *isDoubleItemConsumeQp = 0;
  *isTripleItemConsume = 0;
  mCostObj = v23->fields.mCostObj;
  v156 = type;
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
                                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v28 = (UIWidget_o *)this;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v28 )
    goto LABEL_465;
  v29 = 304;
  if ( (_DWORD)v156 == 7 )
    v29 = 316;
  UIWidget__set_width(
    v28,
    *(int32_t *)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v29),
    0);
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getItemConsumeEntity(questEnt, 0, 0);
  mCostBg1 = (UnityEngine_Component_o *)v23->fields.mCostBg1;
  v155 = (QuestConsumeItemEntity_o *)this;
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
    v154 = isDoubleItemConsumeQp;
    ActConsume = QuestEntity__getActConsume(questEnt, costCalcVal, 0);
    if ( fixedVal >= 0 )
      v40 = fixedVal;
    else
      v40 = ActConsume;
    v162 = v40;
    this = (QuestBoardListViewItemDraw_o *)UserGameMaster__getSelfUserGame(0);
    v41 = (UserGameEntity_o *)this;
    switch ( questEnt->fields.consumeType )
    {
      case 1:
        if ( !this )
          goto LABEL_465;
        v42 = v40 > SLODWORD(this->fields.mTerminalAtlas) || v40 > UserGameEntity__getAct((UserGameEntity_o *)this, 0);
        isDoubleItemConsumeQp = v154;
        mCostLb1 = v23->fields.mCostLb1;
        v121 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v162, 0);
        v175.fields.r = r;
        v175.fields.g = g;
        v175.fields.b = b;
        v175.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v121,
          mCostLb1,
          (System_String_o *)v121,
          costCalcVal,
          v175,
          v42,
          isClosed,
          fixedVal >= 0,
          v122);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb2;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v33 = v155;
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
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
        if ( !this )
          goto LABEL_465;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                &v161,
                questEnt->fields.id,
                (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
          goto LABEL_31;
        this = (QuestBoardListViewItemDraw_o *)v161;
        if ( !v161 )
          goto LABEL_465;
        if ( !QuestExtensionEntity__GetDiscountItemId((QuestExtensionEntity_o *)v161, 0) )
          goto LABEL_31;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !v161 )
          goto LABEL_465;
        v124 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        this = (QuestBoardListViewItemDraw_o *)QuestExtensionEntity__GetDiscountItemId(
                                                 (QuestExtensionEntity_o *)v161,
                                                 0);
        if ( !v124 )
          goto LABEL_465;
        v125 = DataMasterBase_object__object__int___GetEntity(
                 v124,
                 (int32_t)this,
                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !v125 )
          goto LABEL_30;
        v126 = v125;
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v127 = (UIWidget_o *)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        if ( !v127 )
          goto LABEL_465;
        UIWidget__set_width(v127, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0);
        *isDoubleItemConsume = 1;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        }
        v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
        v34 = HasFlag;
        if ( !v161 )
          goto LABEL_465;
        v128 = *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors;
        this = (QuestBoardListViewItemDraw_o *)QuestExtensionEntity__GetDiscountItemId(
                                                 (QuestExtensionEntity_o *)v161,
                                                 0);
        if ( !Master_object )
          goto LABEL_465;
        UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &v160, v128, (int32_t)this, 0);
        this = *v32;
        if ( !*v32 )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v33 = v155;
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        mCostLb3 = *v32;
        v131 = v160;
        v132 = isClosed;
        v133 = 1;
        v134 = 0;
        v135 = (ItemEntity_o *)v126;
        goto LABEL_461;
      case 2:
        if ( !this )
          goto LABEL_465;
        v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
        if ( !byte_4C3FBF5 )
        {
          sub_1C37058(&BalanceConfig_TypeInfo);
          byte_4C3FBF5 = 1;
        }
        v34 = HasFlag;
        v65 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v65 = BalanceConfig_TypeInfo;
        }
        v33 = v155;
        v66 = v40 > v65->static_fields->UerGameRpMax || v40 > UserGameEntity__getRp(v41, 0);
        isDoubleItemConsumeQp = v154;
        v136 = v23->fields.mCostLb1;
        v137 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v162, 0);
        v176.fields.r = r;
        v176.fields.g = g;
        v176.fields.b = b;
        v176.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(v137, v136, (System_String_o *)v137, 0, v176, v66, isClosed, 0, v138);
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
        if ( !v155 || !QuestConsumeItemEntity__IsAvailableAt(v155, 0, 0) )
        {
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb1;
          isDoubleItemConsumeQp = v154;
          if ( !this )
            goto LABEL_465;
          v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
          goto LABEL_432;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v67 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
        v68 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        }
        itemIds = v155->fields.itemIds;
        if ( !itemIds )
          goto LABEL_465;
        if ( !LODWORD(itemIds->max_length) )
          goto LABEL_466;
        if ( !v67 )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                 (UserItemMaster_o *)v67,
                                                 &entity,
                                                 *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors,
                                                 itemIds->m_Items[0],
                                                 0);
        v70 = v155->fields.itemIds;
        if ( !v70 )
          goto LABEL_465;
        if ( !LODWORD(v70->max_length) )
          goto LABEL_466;
        if ( !v68 )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v68,
                                                 v70->m_Items[0],
                                                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !v23->fields.mCostLb1 )
          goto LABEL_465;
        v71 = (ItemEntity_o *)this;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v23->fields.mCostLb1,
                                                 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        nums = v155->fields.nums;
        if ( !nums )
          goto LABEL_465;
        if ( !LODWORD(nums->max_length) )
          goto LABEL_466;
        v168.fields.r = r;
        v168.fields.g = g;
        v168.fields.b = b;
        v168.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          v23->fields.mCostLb1,
          nums->m_Items[0],
          entity,
          v71,
          v168,
          isClosed,
          isNotItemConsume,
          v72);
        if ( QuestConsumeItemEntity__IsAvailableAt(v155, 1, 0) )
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
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v74 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v74 )
            goto LABEL_465;
          UIWidget__set_width(v74, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          v75 = v155->fields.itemIds;
          if ( !v75 )
            goto LABEL_465;
          if ( LODWORD(v75->max_length) <= 1 )
            goto LABEL_466;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)v67,
                                                   &entity,
                                                   *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors,
                                                   v75->m_Items[1],
                                                   0);
          v76 = v155->fields.itemIds;
          if ( !v76 )
            goto LABEL_465;
          if ( LODWORD(v76->max_length) <= 1 )
            goto LABEL_466;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v68,
                                                   v76->m_Items[1],
                                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v78 = v155->fields.nums;
          if ( !v78 )
            goto LABEL_465;
          if ( LODWORD(v78->max_length) <= 1 )
            goto LABEL_466;
          v169.fields.r = r;
          v169.fields.g = g;
          v169.fields.b = b;
          v169.fields.a = a;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            (UILabel_o *)*p_mCostLb2,
            v78->m_Items[1],
            entity,
            (ItemEntity_o *)this,
            v169,
            isClosed,
            isNotItemConsume,
            v77);
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
        if ( !QuestConsumeItemEntity__IsAvailableAt(v155, 2, 0) )
        {
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          isDoubleItemConsumeQp = v154;
          v33 = v155;
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
                                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v150 = (UIWidget_o *)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        if ( !v150 )
          goto LABEL_465;
        UIWidget__set_width(
          v150,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        }
        isDoubleItemConsumeQp = v154;
        v151 = v155->fields.itemIds;
        if ( !v151 )
          goto LABEL_465;
        if ( LODWORD(v151->max_length) <= 2 )
          goto LABEL_466;
        this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                 (UserItemMaster_o *)v67,
                                                 &entity,
                                                 *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors,
                                                 v151->m_Items[2],
                                                 0);
        v152 = v155->fields.itemIds;
        if ( !v152 )
          goto LABEL_465;
        if ( LODWORD(v152->max_length) <= 2 )
          goto LABEL_466;
        v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v68,
                                                 v152->m_Items[2],
                                                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v33 = v155;
        v34 = HasFlag;
        v153 = v155->fields.nums;
        if ( !v153 )
          goto LABEL_465;
        if ( LODWORD(v153->max_length) <= 2 )
          goto LABEL_466;
        mCostLb3 = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
        v134 = v153->m_Items[2];
        v131 = entity;
        v132 = isClosed;
        v133 = isNotItemConsume;
        v135 = (ItemEntity_o *)this;
LABEL_461:
        v179.fields.r = r;
        v179.fields.g = g;
        v179.fields.b = b;
        v179.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          (UILabel_o *)mCostLb3,
          v134,
          v131,
          v135,
          v179,
          v132,
          v133,
          v129);
        goto LABEL_32;
      case 4:
        if ( !this )
          goto LABEL_465;
        v79 = v40 > SLODWORD(this->fields.mTerminalAtlas) || v40 > UserGameEntity__getAct((UserGameEntity_o *)this, 0);
        v139 = v23->fields.mCostLb1;
        v140 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v162, 0);
        v177.fields.r = r;
        v177.fields.g = g;
        v177.fields.b = b;
        v177.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v140,
          v139,
          (System_String_o *)v140,
          costCalcVal,
          v177,
          v79,
          isClosed,
          fixedVal >= 0,
          v141);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb2;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        isDoubleItemConsumeQp = v154;
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
        if ( v155 && QuestConsumeItemEntity__IsAvailableAt(v155, 0, 0) )
        {
          *isDoubleItemConsume = 1;
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v142 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v142 )
            goto LABEL_465;
          UIWidget__set_width(v142, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v143 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
          v144 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
          v34 = HasFlag;
          v145 = v155->fields.itemIds;
          if ( !v145 )
            goto LABEL_465;
          if ( !LODWORD(v145->max_length) )
            goto LABEL_466;
          if ( !v143 )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)v143,
                                                   &usrItem,
                                                   *(_QWORD *)&this->fields.mPrevSp->fields.updateAnchors,
                                                   v145->m_Items[0],
                                                   0);
          v33 = v155;
          v146 = v155->fields.itemIds;
          if ( !v146 )
            goto LABEL_465;
          if ( !LODWORD(v146->max_length) )
            goto LABEL_466;
          if ( !v144 )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v144,
                                                   v146->m_Items[0],
                                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !*v32 )
            goto LABEL_465;
          v147 = (ItemEntity_o *)this;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)*v32,
                                                   0);
          if ( !this )
            goto LABEL_465;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v149 = v155->fields.nums;
          if ( !v149 )
            goto LABEL_465;
          if ( !LODWORD(v149->max_length) )
            goto LABEL_466;
          v178.fields.r = r;
          v178.fields.g = g;
          v178.fields.b = b;
          v178.fields.a = a;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            (UILabel_o *)*v32,
            v149->m_Items[0],
            usrItem,
            v147,
            v178,
            isClosed,
            isNotItemConsume,
            v148);
          if ( !QuestConsumeItemEntity__IsAvailableAt(v155, 1, 0) )
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
        isDoubleItemConsumeQp = v154;
        break;
    }
  }
  v32 = (QuestBoardListViewItemDraw_o **)&v23->fields.mCostLb2;
LABEL_30:
  v33 = v155;
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
    v163.fields.r = r;
    v163.fields.g = g;
    v163.fields.b = b;
    v163.fields.a = a;
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v163, 0);
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
    v174.fields.r = r;
    v174.fields.g = g;
    v174.fields.b = b;
    v174.fields.a = a;
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v174, 0);
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
        ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(bannerId, v35);
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
      v80 = v23->fields.mCostApSp;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      }
      mRoot = this->fields.mPrevSp[2].fields.mRoot;
      if ( !mRoot )
        goto LABEL_465;
      if ( (unsigned int)v156 < LODWORD(mRoot->fields.m_CancellationTokenSource) )
      {
        if ( !v80 )
          goto LABEL_465;
        UISprite__set_spriteName(v80, *((System_String_o **)&mRoot->fields.scalingStyle + v156), 0);
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
        v170.fields.r = r;
        v170.fields.g = g;
        v170.fields.b = b;
        v170.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v170, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
        if ( !this )
          goto LABEL_465;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               &v157,
               questEnt->fields.id,
               (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
        {
          this = (QuestBoardListViewItemDraw_o *)v157;
          if ( !v157 )
            goto LABEL_465;
          if ( QuestExtensionEntity__GetDiscountItemId((QuestExtensionEntity_o *)v157, 0) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
            this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
            if ( !v157 )
              goto LABEL_465;
            v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
            this = (QuestBoardListViewItemDraw_o *)QuestExtensionEntity__GetDiscountItemId(
                                                     (QuestExtensionEntity_o *)v157,
                                                     0);
            if ( !v82 )
              goto LABEL_465;
            v83 = DataMasterBase_object__object__int___GetEntity(
                    v82,
                    (int32_t)this,
                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v83 )
            {
              v84 = v83;
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
              ItemIconComponent__SetItem((ItemIconComponent_o *)this, (int32_t)v84[1].klass, -1, 1, 0);
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
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              v86 = QuestBoardListViewItemDraw_TypeInfo;
              v87 = gameObject;
              if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v86 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(v87, (float)v86->static_fields->COST_2_ICON_NORMAL_POSITION_X, 0);
              this = *v32;
              if ( !*v32 )
                goto LABEL_465;
              v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              GameObjectExtensions__SetLocalPositionX(
                v88,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
                0);
              klass = (int)v84[1].klass;
              v90 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v90 = BalanceConfig_TypeInfo;
              }
              if ( klass == v90->static_fields->ItemIdQp )
              {
                *isDoubleItemConsumeQp = 1;
                this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
                if ( !this )
                  goto LABEL_465;
                this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v91 = (UIWidget_o *)this;
                if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                if ( !v91 )
                  goto LABEL_465;
                UIWidget__set_width(v91, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0);
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
                                                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                if ( !this )
                  goto LABEL_465;
                UISprite__set_spriteName(
                  (UISprite_o *)this,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                  0);
                this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
                if ( !this )
                  goto LABEL_465;
                v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                GameObjectExtensions__SetLocalPositionX(
                  v92,
                  (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                  0);
                this = *v32;
                if ( !*v32 )
                  goto LABEL_465;
                v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                GameObjectExtensions__SetLocalPositionX(
                  v93,
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
      v164.fields.r = r;
      v164.fields.g = g;
      v164.fields.b = b;
      v164.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v164, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostRpPointSp;
      if ( !this )
        goto LABEL_465;
      v165.fields.r = r;
      v165.fields.g = g;
      v165.fields.b = b;
      v165.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v165, 0);
      v43 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v43 = BalanceConfig_TypeInfo;
      }
      static_fields = v43->static_fields;
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      mCostRpSp = v23->fields.mCostRpSp;
      BpExpresssionType = static_fields->BpExpresssionType;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      }
      v47 = *(_QWORD *)&this->fields.mPrevSp[1].fields.mInnerUV.fields.m_Height;
      if ( !v47 )
        goto LABEL_465;
      if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v47 + 24) )
        goto LABEL_466;
      if ( !mCostRpSp )
        goto LABEL_465;
      UISprite__set_spriteName(mCostRpSp, *(System_String_o **)(v47 + 8 * BpExpresssionType + 32), 0);
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
      v49 = v33->fields.itemIds;
      if ( !v49 )
        goto LABEL_465;
      if ( !LODWORD(v49->max_length) )
        goto LABEL_466;
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
      if ( !this )
        goto LABEL_465;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, v49->m_Items[0], -1, 1, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon1;
      if ( !this )
        goto LABEL_465;
      v166.fields.r = r;
      v166.fields.g = g;
      v166.fields.b = b;
      v166.fields.a = a;
      ItemIconComponent__SetColor((ItemIconComponent_o *)this, v166, 0);
      this = (QuestBoardListViewItemDraw_o *)QuestConsumeItemEntity__IsAvailableAt(v33, 1, 0);
      if ( !v23->fields.mCostItemIcon2 )
        goto LABEL_465;
      v50 = (char)this;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v23->fields.mCostItemIcon2,
                                               0);
      v51 = this;
      if ( (v50 & 1) != 0 )
      {
        v52 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v52 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(
          (UnityEngine_GameObject_o *)v51,
          (float)v52->static_fields->COST_2_ICON_NORMAL_POSITION_X,
          0);
        this = *v32;
        if ( !*v32 )
          goto LABEL_465;
        v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v53,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
          0);
        v54 = v33->fields.itemIds;
        if ( !v54 )
          goto LABEL_465;
        if ( LODWORD(v54->max_length) <= 1 )
          goto LABEL_466;
        v55 = v54->m_Items[1];
        v56 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v56 = BalanceConfig_TypeInfo;
        }
        if ( v55 == v56->static_fields->ItemIdQp )
        {
          *isDoubleItemConsumeQp = 1;
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
          if ( !this )
            goto LABEL_465;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v57 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v57 )
            goto LABEL_465;
          UIWidget__set_width(v57, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0);
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
                                                   (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
                                                   (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !this )
            goto LABEL_465;
          UISprite__set_spriteName(
            (UISprite_o *)this,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
            0);
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_465;
          v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionX(
            v58,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
            0);
          this = *v32;
          if ( !*v32 )
            goto LABEL_465;
          v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionX(
            v59,
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
        v60 = v33->fields.itemIds;
        if ( !v60 )
          goto LABEL_465;
        if ( LODWORD(v60->max_length) <= 1 )
          goto LABEL_466;
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
        ItemIconComponent__SetItem((ItemIconComponent_o *)this, v60->m_Items[1], -1, 1, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
        v167.fields.r = r;
        v167.fields.g = g;
        v167.fields.b = b;
        v167.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)this, v167, 0);
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
        v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v108 = QuestBoardListViewItemDraw_TypeInfo;
        v109 = v107;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v108 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(
          v109,
          (float)v108->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
        v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v110,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = *v32;
        if ( !*v32 )
          goto LABEL_465;
        v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v111,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_465;
        v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v112,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
        if ( !this )
          goto LABEL_465;
        v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v113,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_465;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v114 = v33->fields.itemIds;
        if ( !v114 )
          goto LABEL_465;
        if ( LODWORD(v114->max_length) > 2 )
        {
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_465;
          ItemIconComponent__SetItem((ItemIconComponent_o *)this, v114->m_Items[2], -1, 1, 0);
          this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_465;
          goto LABEL_320;
        }
LABEL_466:
        sub_1C372BC(this);
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
      v62 = questEnt->fields.bannerId;
      v63 = v23->fields.mCostApSp;
      if ( v62 < 1 )
      {
        if ( !v63 )
          goto LABEL_465;
        UISprite__set_atlas(v23->fields.mCostApSp, v23->fields.mTerminalAtlas, 0);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        v94 = v23->fields.mCostApSp;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        v95 = this->fields.mPrevSp[2].fields.mRoot;
        if ( !v95 )
          goto LABEL_465;
        if ( (unsigned int)v156 >= LODWORD(v95->fields.m_CancellationTokenSource) )
          goto LABEL_466;
        if ( !v94 )
          goto LABEL_465;
        UISprite__set_spriteName(v94, *((System_String_o **)&v95->fields.scalingStyle + v156), 0);
      }
      else
      {
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v64 = QuestBoardListViewItemDraw__GetApSpriteFileName(v62, v61);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v63, v64, 0);
        if ( !v63 )
          goto LABEL_465;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v63, (unsigned __int8)this & 1, 0);
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
      v172.fields.r = r;
      v172.fields.g = g;
      v172.fields.b = b;
      v172.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v172, 0);
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
      v96 = v33->fields.itemIds;
      if ( !v96 )
        goto LABEL_465;
      if ( !LODWORD(v96->max_length) )
        goto LABEL_466;
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      ItemIconComponent__SetItem((ItemIconComponent_o *)this, v96->m_Items[0], -1, 1, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      v173.fields.r = r;
      v173.fields.g = g;
      v173.fields.b = b;
      v173.fields.a = a;
      ItemIconComponent__SetColor((ItemIconComponent_o *)this, v173, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
      if ( !this )
        goto LABEL_465;
      v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v98 = QuestBoardListViewItemDraw_TypeInfo;
      v99 = v97;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v98 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionX(v99, (float)v98->static_fields->COST_2_ICON_NORMAL_POSITION_X, 0);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(
        v100,
        (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
        0);
      v101 = v33->fields.itemIds;
      if ( !v101 )
        goto LABEL_465;
      if ( !LODWORD(v101->max_length) )
        goto LABEL_466;
      v102 = v101->m_Items[0];
      v103 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v103 = BalanceConfig_TypeInfo;
      }
      if ( v102 == v103->static_fields->ItemIdQp )
      {
        *isDoubleItemConsumeQp = 1;
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostObj;
        if ( !this )
          goto LABEL_465;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v104 = (UIWidget_o *)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        if ( !v104 )
          goto LABEL_465;
        UIWidget__set_width(v104, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0);
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
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !this )
          goto LABEL_465;
        UISprite__set_spriteName((UISprite_o *)this, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP, 0);
        this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_465;
        v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v105,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
          0);
        this = *v32;
        if ( !*v32 )
          goto LABEL_465;
        v106 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(
          v106,
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
      v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4C3C926 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      GameObjectExtensions__SetLocalScale(v115, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      this = *v32;
      if ( !*v32 )
        goto LABEL_465;
      v116 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4C3C926 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      GameObjectExtensions__SetLocalScale(v116, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3;
      if ( !this )
        goto LABEL_465;
      v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4C3C926 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      GameObjectExtensions__SetLocalScale(v117, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v118 = (UIWidget_o *)v23->fields.mCostLb1;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !v118 )
        goto LABEL_465;
      UIWidget__set_width(v118, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_DEFAULT_WIDTH, 0);
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
      v119 = v23->fields.mCostLb1;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !v119 )
        goto LABEL_465;
      UILabel__set_spacingX(
        v119,
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
        || (UILabel__SetCondensedScale_49525996(
              (UILabel_o *)this,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
              0.0,
              0),
            (this = *v32) == 0)
        || (UILabel__SetCondensedScale_49525996(
              (UILabel_o *)this,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
              0.0,
              0),
            (this = (QuestBoardListViewItemDraw_o *)v23->fields.mCostLb3) == 0) )
      {
LABEL_465:
        sub_1C372B4(this);
      }
      UILabel__SetCondensedScale_49525996(
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
  if ( (byte_4C3FBC8 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBC8 = 1;
  }
  if ( !label )
    sub_1C372B4(this);
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
  const MethodInfo *v19; // x7
  bool v20; // w22
  System_String_o *v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  System_String_o *v29; // x23
  int32_t v30; // w25
  int32_t num; // w8
  int32_t v32; // [xsp+8h] [xbp-68h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseCol.fields.a;
  b = baseCol.fields.b;
  g = baseCol.fields.g;
  r = baseCol.fields.r;
  v33 = consumeNo;
  if ( (byte_4C3FBC7 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_10827/*"QUEST_BOARD_COST_QP"*/);
    byte_4C3FBC7 = 1;
  }
  if ( isNotItemConsume )
    v33 = 0;
  SelfUserGame = System_Int32__ToString((int32_t)&v33, 0);
  if ( !itemEnt )
    goto LABEL_17;
  if ( itemEnt->fields.type == 1 )
  {
    SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
    if ( SelfUserGame )
    {
      v20 = (__int64)SelfUserGame[4].klass < v33;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10827/*"QUEST_BOARD_COST_QP"*/, 0);
      v32 = v33;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v22, v23, v24, v25, v26, v27);
      SelfUserGame = System_String__Format(v21, v28, 0);
      v29 = SelfUserGame;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C372B4(SelfUserGame);
  }
  v30 = v33;
  v29 = SelfUserGame;
  if ( usrItem
    && (SelfUserGame = (System_String_o *)ItemEntity__IsEnable(itemEnt, 0), ((unsigned __int8)SelfUserGame & 1) != 0) )
  {
    num = usrItem->fields.num;
  }
  else
  {
    num = 0;
  }
  v20 = v30 > num;
LABEL_16:
  v34.fields.r = r;
  v34.fields.g = g;
  v34.fields.b = b;
  v34.fields.a = a;
  QuestBoardListViewItemDraw__SetCostLabel(
    (QuestBoardListViewItemDraw_o *)SelfUserGame,
    label,
    v29,
    0,
    v34,
    v20,
    isClosed,
    isNotItemConsume,
    v19);
}


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
        sub_1C372BC(this);
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
    sub_1C372B4(this);
  }
}


void QuestBoardListViewItemDraw__SetEventTargetAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventTarget; // x20
  UnityEngine_Object_o *eventTargetComponent; // x20
  BoardOptionEventTargetComponent_o *v7; // x0

  if ( (byte_4C3FBDD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FBDD = 1;
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
      v7 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v7 )
        goto LABEL_16;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v7, 0) )
      {
        v7 = this->fields.eventTargetComponent;
        if ( !v7 )
          goto LABEL_16;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v7, 0) )
        {
          v7 = this->fields.eventTargetComponent;
          if ( v7 )
          {
            BoardOptionEventTargetComponent__SetAlpha(v7, alpha, 0);
            return;
          }
LABEL_16:
          sub_1C372B4(v7);
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
  if ( (byte_4C3FBC6 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBC6 = 1;
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
    maskSpriteName = System_String__Concat_63561656(QUEST_BOARD_MASK_SPNAME_PREFIX, v24, 0);
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
    sub_1C372B4(this);
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

  if ( (byte_4C3FBD8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C3FBD8 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_1C372B4(mOptionInfoLb);
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
  QuestBoardListViewEarthLine_o *mOptionSecondBattleInformationObj; // x0
  Il2CppObject *Component_object; // x0
  struct QuestBoardListViewMultiSecondBattleInformation_o **p_secondBattleInformation; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  int32_t size; // w2
  int v22; // w9
  struct UnityEngine_GameObject_array *mStatusSp; // x22
  int max_length; // w8
  unsigned int v25; // w25
  UnityEngine_GameObject_o *mCostObj; // x22
  QuestBoardListViewItemDraw_c *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Object_o *eventTargetComponent; // x22
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x7
  UnityEngine_GameObject_o *v35; // x19
  struct MapControl_AreaBoardInfo_o *v36; // x8
  unsigned int questBoardType; // w8
  struct MapControl_AreaBoardInfo_o *v38; // x8
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3FBA4 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&Method_System_Collections_Generic_List_UISprite__Clear__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBA4 = 1;
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
        if ( !byte_4C3C926 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C926 = 1;
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
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = (struct QuestBoardListViewMultiSecondBattleInformation_o *)Component_object;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.secondBattleInformation, (int32_t)Component_object, v18, v19);
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
        v22 = mMultiSecondBattleInformation->fields._version + 1;
        mMultiSecondBattleInformation->fields._size = 0;
        mMultiSecondBattleInformation->fields._version = v22;
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
        v39.fields.r = 1.0;
        v39.fields.g = 1.0;
        v39.fields.b = 1.0;
        v39.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mOptionSecondBattleInformationObj, v39, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj
          || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 1, 0),
              (mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mStatusObj) == 0)
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0),
              (mStatusSp = this->fields.mStatusSp) == 0) )
        {
LABEL_98:
          sub_1C372B4(mOptionSecondBattleInformationObj);
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v25 = 0;
          do
          {
            if ( v25 >= max_length )
              sub_1C372BC(mOptionSecondBattleInformationObj);
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)mStatusSp->m_Items[v25];
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_98;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0);
            max_length = mStatusSp->max_length;
          }
          while ( (int)++v25 < max_length );
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
        v27 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v27 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(mCostObj, v27->static_fields->COST_OBJ_POS, 0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                                                                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        UIWidget__set_width(
          (UIWidget_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_SINGLE,
          0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostApSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0);
        GameObjectExtensions__SetLocalPosition(
          v28,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS,
          0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostLb1;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0);
        GameObjectExtensions__SetLocalPosition(
          v29,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS,
          0);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_98;
        v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0);
        GameObjectExtensions__SetLocalPosition(v30, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS, 0);
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
            v36 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( v36 )
            {
              questBoardType = v36->fields.questBoardType;
              if ( questBoardType <= 8 && ((1 << questBoardType) & 0x118) != 0 )
                goto LABEL_88;
            }
            goto LABEL_91;
          case 1:
            goto LABEL_97;
          case 2:
          case 3:
            QuestBoardListViewItemDraw__SetItemOfShortcut(this, questBoardItem, v32);
            return;
          case 4:
            v38 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( !v38 )
              goto LABEL_97;
            if ( v38->fields.questBoardType == 2 )
LABEL_91:
              QuestBoardListViewItemDraw__SetItemOfArea(this, questBoardItem, 1, 1, 0, 0, 0, v34);
            else
LABEL_88:
              QuestBoardListViewItemDraw__SetItemOfFolder(this, questBoardItem, 1, 1, v33);
            break;
          case 5:
            QuestBoardListViewItemDraw__SetItemOfWarBoard(this, questBoardItem, v32);
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
              QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(this, questBoardItem, v32);
            else
LABEL_97:
              QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v32);
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
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      GameObjectExtensions__SetLocalScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x0
  System_String_o *EventAddBannerSpriteName; // x23
  QuestBoardListViewItemDraw_o *v47; // x25
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  int32_t v54; // w28
  QuestBoardListViewItemDraw_c *v55; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v57; // x23
  Il2CppObject *v58; // x0
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  const MethodInfo *v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  ScrTerminalListTop_c *v65; // x8
  struct ScrTerminalListTop_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v67; // x0
  bool v68; // zf
  ScrTerminalListTop_c *v69; // x0
  clsQuestCheck_o *v70; // x25
  clsQuestCheck_o *v71; // x25
  QuestBoardListViewItemDraw_c *v72; // x0
  __int64 v73; // x8
  Il2CppObject *Entity; // x0
  bool v75; // w8
  QuestBoardListViewItem_o *v76; // x1
  WarEntity_o *v77; // x2
  QuestBoardListViewItemDraw_o *v78; // x0
  clsQuestCheck_o *v79; // x23
  bool v80; // w0
  QuestBoardListViewItemDraw_c *v81; // x8
  bool v82; // w23
  struct QuestBoardListViewItemDraw_StaticFields *v83; // x8
  __int64 v84; // x9
  QuestBoardListViewItemDraw_o *v85; // x28
  clsQuestCheck_o *v86; // x25
  clsQuestCheck_o *v87; // x25
  ScrTerminalListTop_c *v88; // x0
  System_String_o *NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // x25
  TerminalPramsManager_c *v90; // x0
  ScrTerminalListTop_c *v91; // x8
  int32_t QuestId_k__BackingField; // w25
  TerminalPramsManager_c *v93; // x0
  struct UnityEngine_GameObject_o *v94; // x8
  System_String_o *v95; // x23
  Il2CppObject *v96; // x0
  System_String_o *v97; // x0
  struct UnityEngine_GameObject_o *mGo; // x8
  System_String_o *m_CachedPtr; // x23
  Il2CppObject *v100; // x0
  int v101; // w21
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v103; // x28
  System_String_o *v104; // x23
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  __int64 v108; // x5
  __int64 v109; // x6
  __int64 v110; // x7
  Il2CppObject *v111; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x23
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  __int64 v116; // x5
  __int64 v117; // x6
  __int64 v118; // x7
  Il2CppObject *v119; // x0
  UISprite_o *mcBaseP; // x28
  const MethodInfo *v121; // x2
  QuestBoardListViewItemDraw_o *v122; // x8
  int32_t questCount; // w1
  QuestBoardListViewItemDraw_o **p_mOptionInfoLb; // x23
  const MethodInfo *v125; // x3
  int32_t v126; // w1
  QuestBoardListViewItemDraw_c *v127; // x0
  const MethodInfo *v128; // x2
  const MethodInfo *v129; // x3
  const MethodInfo *v130; // x3
  QuestBoardListViewItem_o *v131; // x20
  const MethodInfo *v132; // x3
  const MethodInfo *v133; // x3
  int32_t status; // w1
  QuestBoardListViewItemDraw_c *v135; // x0
  struct QuestBoardListViewObject_o *v136; // x8
  QuestBoardListViewManager_o *manager; // x22
  __int64 v138; // x9
  bool v139; // w24
  System_Collections_Generic_List_object__o *mInfoTextList; // x24
  int32_t size; // w1
  int32_t AlphaAnimCnt; // w0
  UnityEngine_Object_o *mEarthLine; // x23
  QuestBoardListViewEarthLine_o *v144; // x23
  bool v145; // [xsp+4h] [xbp-9Ch]
  int32_t v146; // [xsp+4h] [xbp-9Ch]
  struct ItemIconComponent_o *checkTime; // [xsp+10h] [xbp-90h]
  bool v151; // [xsp+20h] [xbp-80h]
  bool v152; // [xsp+24h] [xbp-7Ch]
  _BOOL4 IsClosedWar; // [xsp+28h] [xbp-78h]
  _BOOL4 IsMainInterlude; // [xsp+2Ch] [xbp-74h]
  QuestBoardListViewItem_o *questBoardItema; // [xsp+30h] [xbp-70h]
  int32_t PrioredBannerId; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = this;
  if ( (byte_4C3FBA6 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBA6 = 1;
  }
  if ( !questBoardItem )
    goto LABEL_282;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
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
  v152 = isBadgeDisp;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_284;
  }
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  questBoardItema = questBoardItem;
  checkTime = this->fields.mCostItemIcon1;
  v145 = isSpecialClosedBanner;
  if ( warId < 1 )
  {
    v20 = 0;
LABEL_15:
    Mine = 0;
    v22 = 1;
    goto LABEL_16;
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_282;
  v25 = questBoardType == 2 && eventEnt != 0;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             this,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.m_CancellationTokenSource,
                             Mine,
                             v24);
  v28 = questBoardType - 1;
  v151 = IsPurchasedByRarePrism;
  if ( questBoardType == 1 )
  {
    QuestBoardListViewItemDraw__SetupBanner(v11, questBoardItema, v27);
    v29 = warId;
    v30 = v152;
    IsClose = 0;
    v32 = 0;
    goto LABEL_211;
  }
  v29 = warId;
  if ( questBoardType == 2 && eventEnt != 0 )
  {
    v33 = IsPurchasedByRarePrism;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_282;
    IsActiveEventWar = QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0);
    v30 = v152;
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
    v68 = v36 == 0;
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
      v30 = v152;
      QBOARD_CAP_CLOSED_FORMAT = v37->static_fields->QBOARD_CAP_CLOSED_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0);
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v39, v40, v41, v42, v43, v44);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_FORMAT, v45, 0);
    }
    else
    {
      EventAddBannerSpriteName = (System_String_o *)StringLiteral_1/*""*/;
      v30 = v152;
    }
    v69 = ScrTerminalListTop_TypeInfo;
    if ( v145 )
    {
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v69 = ScrTerminalListTop_TypeInfo;
      }
      if ( v29 == v69->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
        goto LABEL_104;
    }
    if ( !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      v69 = ScrTerminalListTop_TypeInfo;
    }
    if ( v29 != v69->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_100;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v70 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v70 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsWarClear(
            v70,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0) )
      goto LABEL_100;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v71 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v71 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsWarClear(
            v71,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
            0) )
    {
LABEL_104:
      v72 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v72 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v73 = 1064;
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
      v72 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v72 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v73 = 1032;
    }
    EventAddBannerSpriteName = *(System_String_o **)((char *)&v72->static_fields->POS_Y_ITVL_AREA + v73);
LABEL_108:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_282;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v29,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v75 = isBlackMarkOnly;
    v76 = questBoardItema;
    v77 = (WarEntity_o *)Entity;
    v78 = v11;
    goto LABEL_171;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           warId,
                                           (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_282;
  v47 = this;
  this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0);
  v54 = (int)this;
  v55 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v55 = QuestBoardListViewItemDraw_TypeInfo;
  }
  msQBoardL1Names = v55->static_fields->msQBoardL1Names;
  if ( !msQBoardL1Names )
    goto LABEL_282;
  if ( v28 >= LODWORD(msQBoardL1Names->max_length) )
    goto LABEL_285;
  v57 = msQBoardL1Names->m_Items[v28];
  PrioredBannerId = v54;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v48, v49, v50, v51, v52, v53);
  EventAddBannerSpriteName = System_String__Format(v57, v58, 0);
  v65 = ScrTerminalListTop_TypeInfo;
  if ( v145 )
  {
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v65 = ScrTerminalListTop_TypeInfo;
    }
    static_fields = v65->static_fields;
    if ( warId == static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      v67 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v67 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v30 = v152;
      EventAddBannerSpriteName = v67->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
      goto LABEL_170;
    }
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = ScrTerminalListTop_TypeInfo;
      static_fields = ScrTerminalListTop_TypeInfo->static_fields;
    }
    if ( warId == static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v79 = (clsQuestCheck_o *)this;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v30 = v152;
      if ( !v79 )
        goto LABEL_282;
      v80 = clsQuestCheck__IsWarClear(
              v79,
              ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
              0);
      v81 = QuestBoardListViewItemDraw_TypeInfo;
      v82 = v80;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v81 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v83 = v81->static_fields;
      v84 = 1064;
      if ( v82 )
        v84 = 1072;
      EventAddBannerSpriteName = *(System_String_o **)((char *)&v83->POS_Y_ITVL_AREA + v84);
      goto LABEL_170;
    }
  }
  v146 = v54;
  v85 = v47;
  if ( !v65->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v65);
    v65 = ScrTerminalListTop_TypeInfo;
  }
  if ( warId != v65->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID )
    goto LABEL_160;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v86 = (clsQuestCheck_o *)this;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v86 )
    goto LABEL_282;
  if ( clsQuestCheck__IsWarClear(
         v86,
         ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
         0) )
  {
    goto LABEL_160;
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v87 = (clsQuestCheck_o *)this;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v87 )
    goto LABEL_282;
  if ( !clsQuestCheck__IsQuestClear(
          v87,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0) )
    goto LABEL_160;
  v88 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v88 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v88->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, 0) )
    goto LABEL_160;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v90 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v90 = TerminalPramsManager_TypeInfo;
  }
  v91 = ScrTerminalListTop_TypeInfo;
  QuestId_k__BackingField = v90->static_fields->_QuestId_k__BackingField;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v91 = ScrTerminalListTop_TypeInfo;
  }
  if ( QuestId_k__BackingField != v91->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    goto LABEL_160;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE6 = 1;
  }
  v93 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  if ( v93->static_fields->_PhaseCnt_k__BackingField != 2 )
  {
LABEL_160:
    v29 = warId;
    v30 = v152;
    v47 = v85;
    if ( isBoardDisp && v152 && !isBlackMarkOnly && !isWhiteMarkOnly )
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
      PrioredBannerId = v146;
      v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v59, v60, v61, v62, v63, v64);
      v97 = System_String__Format(m_CachedPtr, v100, 0);
      goto LABEL_169;
    }
LABEL_285:
    sub_1C372BC(this);
  }
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  v94 = this->fields.mPrevSp[2].fields.mGo;
  if ( !v94 )
    goto LABEL_282;
  if ( LODWORD(v94[1].klass) <= 1 )
    goto LABEL_285;
  v95 = (System_String_o *)v94[1].fields.m_CachedPtr;
  v47 = v85;
  v29 = warId;
  PrioredBannerId = (int32_t)v85->fields.mcBaseP;
  v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v59, v60, v61, v62, v63, v64);
  v97 = System_String__Format(v95, v96, 0);
  v30 = v152;
LABEL_169:
  EventAddBannerSpriteName = v97;
LABEL_170:
  v75 = isBlackMarkOnly;
  v76 = questBoardItema;
  v78 = v11;
  v77 = (WarEntity_o *)v47;
LABEL_171:
  QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v78, v76, v77, v75, isWhiteMarkOnly, v62);
  v32 = 0;
  v68 = !IsClosedWar;
LABEL_172:
  v101 = !v68;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !this )
    goto LABEL_282;
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, v29, 0);
  if ( OpenEntity )
  {
    v103 = OpenEntity;
    IsClose = WarReleaseEntity__IsClose(OpenEntity, 0);
    if ( IsClose )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !Mine )
        goto LABEL_282;
      v104 = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0);
      v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v105, v106, v107, v108, v109, v110);
      EventAddBannerSpriteName = System_String__Format(v104, v111, 0);
    }
    if ( WarReleaseEntity__IsAnnouncement(v103, 0) )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !Mine )
        goto LABEL_282;
      QBOARD_CAP_CLOSED_SPECIAL_FORMAT = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0);
      v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v113, v114, v115, v116, v117, v118);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v119, 0);
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
  if ( v101 )
  {
    this = (QuestBoardListViewItemDraw_o *)v11->fields.mcBaseP;
    if ( !this )
      goto LABEL_282;
    v157.fields.r = 0.5;
    v157.fields.g = 0.5;
    v157.fields.b = 0.5;
    v157.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v157, 0);
  }
  if ( IsClose )
    v122 = 0;
  else
    v122 = v11;
  if ( IsClose )
  {
    questCount = 0;
    this = v11;
  }
  else if ( v30 )
  {
    if ( v25 )
      this = v122;
    else
      this = 0;
    if ( v32 || !v25 )
    {
      questCount = AreaBoardInfo_k__BackingField->fields.questCount;
      this = v122;
      if ( !v122 )
        goto LABEL_282;
    }
    else
    {
      questCount = 0;
      if ( !this )
        goto LABEL_282;
    }
  }
  else
  {
    questCount = 0;
    this = v11;
    if ( !v11 )
      goto LABEL_282;
  }
  QuestBoardListViewItemDraw__SetBadge(this, questCount, v121);
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
                  QuestBoardListViewItemDraw__SetStatusActive(v11, status, 0, v133);
                v135 = QuestBoardListViewItemDraw_TypeInfo;
                if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                  v135 = QuestBoardListViewItemDraw_TypeInfo;
                }
                QuestBoardListViewItemDraw__SetNewIcon(
                  v11,
                  v135->static_fields->NEW_POS_AREA,
                  v135->static_fields->NEW_W_AREA,
                  v135->static_fields->NEW_H_AREA,
                  v133);
                this = (QuestBoardListViewItemDraw_o *)v11->fields.mRarePrismSp;
                if ( this )
                {
                  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v151, 0);
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
  v126 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v126 && v126 != 6 )
    QuestBoardListViewItemDraw__SetStatusActive(v11, v126, v32 || v126 != 1 || !v25, v125);
  v127 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v127 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v11,
    v127->static_fields->NEW_POS_AREA,
    v127->static_fields->NEW_W_AREA,
    v127->static_fields->NEW_H_AREA,
    v125);
  if ( IsClosedWar && IsMainInterlude )
    QuestBoardListViewItemDraw__SetStatusActive(v11, 2, 1, v129);
  QuestBoardListViewItemDraw__SetClearSprite(v11, Mine, v128);
  if ( IsClose )
  {
    this = (QuestBoardListViewItemDraw_o *)v11->fields.mNextSp;
    if ( !this )
      goto LABEL_282;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v131 = questBoardItema;
    if ( !this )
      goto LABEL_282;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    QuestBoardListViewItemDraw__SetNextSprite(v11, AreaBoardInfo_k__BackingField, Mine, v130);
    v131 = questBoardItema;
  }
  QuestBoardListViewItemDraw__CreateInfoTextList(v11, v131, (int64_t)checkTime, v132);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (!IsClosedWar || !IsMainInterlude) && v151, 0);
  v136 = v11->fields.mListViewObject;
  if ( !v136 )
    goto LABEL_282;
  manager = (QuestBoardListViewManager_o *)v136->fields.manager;
  if ( manager )
  {
    v138 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)v138
      || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v138 - 1] != QuestBoardListViewManager_TypeInfo )
    {
      this = (QuestBoardListViewItemDraw_o *)v136->fields.manager;
LABEL_284:
      sub_1C37574(this);
      goto LABEL_285;
    }
  }
  if ( IsMainInterlude )
    goto LABEL_252;
  mInfoTextList = (System_Collections_Generic_List_object__o *)v11->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_282;
  size = mInfoTextList->fields._size;
  if ( size < 1 )
  {
LABEL_252:
    v139 = 0;
  }
  else
  {
    if ( !manager )
      goto LABEL_282;
    AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(manager, size, 0);
    this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                             mInfoTextList,
                                             AlphaAnimCnt,
                                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    v139 = 1;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v139, 0);
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v139, 0);
  mEarthLine = (UnityEngine_Object_o *)v11->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0, 0) )
  {
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    v144 = v11->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v144 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v144,
        *(UnityEngine_Vector3_o *)&this->fields.mPrevSp->fields.mDrawRegion.fields.y,
        v11->fields.mListViewObject,
        v29,
        0);
      goto LABEL_272;
    }
LABEL_282:
    sub_1C372B4(this);
  }
LABEL_272:
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItem__IsDisplayableRoadmapButton(v131, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !manager )
      goto LABEL_282;
  }
  else
  {
    if ( !manager )
      goto LABEL_282;
    if ( v131->fields.index != manager->fields._IndexFirstDisplayableRoadmapButton_k__BackingField )
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
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  QuestBoardListViewItemDraw_c *v38; // x8
  int32_t v39; // w21
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v41; // x24
  Il2CppObject *v42; // x0
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v44; // x24
  QuestBoardListViewItemDraw_c *v45; // x0
  System_String_o *QBOARD_CAP_CLOSED_FORMAT; // x21
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  Il2CppObject *v53; // x0
  QuestBoardListViewItemDraw_c *v54; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x21
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x5
  __int64 v60; // x6
  __int64 v61; // x7
  Il2CppObject *v62; // x0
  System_String_o *EventAddBannerSpriteName; // x0
  BalanceConfig_c *v64; // x0
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  QuestBoardListViewItemDraw_c *v71; // x8
  int32_t v72; // w21
  struct System_String_array *v73; // x8
  System_String_o *v74; // x24
  Il2CppObject *v75; // x0
  QuestBoardListViewItemDraw_c *v76; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *mcBaseP; // x25
  UnityEngine_GameObject_o *v79; // x24
  const MethodInfo *v80; // x3
  _BOOL8 HasFlag; // x0
  const MethodInfo *v82; // x4
  int32_t v83; // w1
  QuestBoardListViewItemDraw_c *v84; // x0
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x3
  QuestBoardListViewItemDraw_c *v88; // x0
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x3
  BalanceConfig_c *v91; // x0
  const MethodInfo *v92; // x2
  struct QuestBoardListViewObject_o *v93; // x8
  __int64 v94; // x9
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x5
  int32_t questCount; // w1
  const MethodInfo *v99; // x3
  bool v100; // w20
  System_Collections_Generic_List_object__o *mInfoTextList; // x20
  int32_t size; // w1
  struct QuestBoardListViewObject_o *v103; // x8
  __int64 v104; // x10
  int32_t AlphaAnimCnt; // w0
  _BOOL8 IsDisplayableRoadmapButton; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+8h] [xbp-98h]
  bool v108; // [xsp+14h] [xbp-8Ch]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-88h]
  int v110; // [xsp+24h] [xbp-7Ch]
  struct ItemIconComponent_o *checkTime; // [xsp+28h] [xbp-78h]
  char v112; // [xsp+30h] [xbp-70h]
  unsigned int v113; // [xsp+34h] [xbp-6Ch]
  int32_t PrioredBannerId; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = this;
  if ( (byte_4C3FBAC & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBAC = 1;
  }
  if ( !questBoardItem )
    goto LABEL_193;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_193;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_193;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  if ( warId )
  {
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    sub_1C37574(this);
    goto LABEL_195;
  }
  checkTime = this->fields.mCostItemIcon1;
  v17 = (v13 & 1) == 0 && MapControl_WarInfo__IsClosedWar((MapControl_WarInfo_o *)manager, 0);
  v108 = isBoardDisp;
  if ( v12 )
    IsMainInterlude = WarEntity__IsMainInterlude(v12, 0);
  else
    IsMainInterlude = 0;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_193;
  questList = (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.m_CancellationTokenSource;
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw__IsPurchasedByRarePrism(this, questList, v12, v19);
  mStatusObj = v7->fields.mStatusObj;
  if ( !mStatusObj )
    goto LABEL_193;
  v112 = (char)this;
  v113 = ((unsigned int)this | !IsMainInterlude) & v14;
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
    v110 = v17;
    if ( v113 == 0 && IsMainInterlude )
    {
      if ( !v12 )
        goto LABEL_193;
      if ( WarEntity__HasFlag(v12, 128, 0) || WarEntity__HasFlag(v12, 32, 0) )
      {
        status = AreaBoardInfo_k__BackingField->fields.status;
        v25 = v17;
LABEL_52:
        v110 = v25 || status == 2;
        goto LABEL_53;
      }
      v64 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v64 = BalanceConfig_TypeInfo;
      }
      if ( warId == v64->static_fields->MainInterludeWarId )
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
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
        v76 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v76 = QuestBoardListViewItemDraw_TypeInfo;
        }
        QBOARD_CAP_CLOSED = v76->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
      }
      else
      {
LABEL_201:
        if ( v12
          && (IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)WarEntity__HasFlag(v12, 128, 0),
              ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0) )
        {
          this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   warId,
                                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0);
          v38 = QuestBoardListViewItemDraw_TypeInfo;
          v39 = (int)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v38 = QuestBoardListViewItemDraw_TypeInfo;
          }
          msQBoardL1Names = v38->static_fields->msQBoardL1Names;
          if ( !msQBoardL1Names )
            goto LABEL_193;
          if ( LODWORD(msQBoardL1Names->max_length) <= 1 )
            goto LABEL_198;
          v41 = msQBoardL1Names->m_Items[1];
          PrioredBannerId = v39;
          v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v32, v33, v34, v35, v36, v37);
          QBOARD_CAP_CLOSED = System_String__Format(v41, v42, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarReleaseMaster___);
          if ( !this )
            goto LABEL_193;
          OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, warId, 0);
          if ( OpenEntity )
          {
            v44 = OpenEntity;
            IsClose = WarReleaseEntity__IsClose(OpenEntity, 0);
            if ( IsClose )
            {
              v45 = QuestBoardListViewItemDraw_TypeInfo;
              if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v45 = QuestBoardListViewItemDraw_TypeInfo;
              }
              QBOARD_CAP_CLOSED_FORMAT = v45->static_fields->QBOARD_CAP_CLOSED_FORMAT;
              PrioredBannerId = WarEntity__GetPrioredBannerId(v12, 0);
              v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v47, v48, v49, v50, v51, v52);
              QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_FORMAT, v53, 0);
            }
            if ( WarReleaseEntity__IsAnnouncement(v44, 0) )
            {
              v54 = QuestBoardListViewItemDraw_TypeInfo;
              if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v54 = QuestBoardListViewItemDraw_TypeInfo;
              }
              QBOARD_CAP_CLOSED_SPECIAL_FORMAT = v54->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
              PrioredBannerId = WarEntity__GetPrioredBannerId(v12, 0);
              v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v56, v57, v58, v59, v60, v61);
              QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v62, 0);
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
                                         (v113 != 0) | (unsigned __int8)v110,
                                         v23);
          }
          else
          {
            this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_193;
            this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
            if ( !this )
              goto LABEL_193;
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     warId,
                                                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_193;
            this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0);
            v71 = QuestBoardListViewItemDraw_TypeInfo;
            v72 = (int)this;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v71 = QuestBoardListViewItemDraw_TypeInfo;
            }
            v73 = v71->static_fields->msQBoardL1Names;
            if ( !v73 )
              goto LABEL_193;
            if ( LODWORD(v73->max_length) <= 2 )
              goto LABEL_198;
            v74 = v73->m_Items[2];
            PrioredBannerId = v72;
            v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v65, v66, v67, v68, v69, v70);
            EventAddBannerSpriteName = System_String__Format(v74, v75, 0);
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
    v79 = gameObject;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetBanner(mcBaseP, QBOARD_CAP_CLOSED, 0);
    if ( !v79 )
      goto LABEL_193;
    UnityEngine_GameObject__SetActive(v79, (unsigned __int8)this & v108 & 1, 0);
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
                                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !this )
      goto LABEL_193;
    v116.fields.r = 1.0;
    v116.fields.g = 1.0;
    v116.fields.b = 1.0;
    v116.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v116, 0);
    if ( v110 )
    {
      this = (QuestBoardListViewItemDraw_o *)v7->fields.mcBaseP;
      if ( !this )
        goto LABEL_193;
      v117.fields.r = 0.5;
      v117.fields.g = 0.5;
      v117.fields.b = 0.5;
      v117.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v117, 0);
    }
  }
  this = (QuestBoardListViewItemDraw_o *)v7->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (!IsMainInterlude || !v17) & v112, 0);
  if ( !v12 || !(HasFlag = WarEntity__HasFlag(v12, 128, 0)) && !(HasFlag = WarEntity__HasFlag(v12, 32, 0)) )
  {
    if ( !IsClose && AreaBoardInfo_k__BackingField->fields.status == 1 )
      QuestBoardListViewItemDraw__SetStatusActive(v7, 1, 1, v80);
    v88 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v88 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v7,
      v88->static_fields->NEW_POS_AREA,
      v88->static_fields->NEW_W_AREA,
      v88->static_fields->NEW_H_AREA,
      v80);
    v91 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v91 = BalanceConfig_TypeInfo;
    }
    if ( warId == v91->static_fields->MainInterludeWarId
      && (AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE) == 2 )
    {
      QuestBoardListViewItemDraw__SetStatusActive(v7, 2, 1, v90);
    }
    QuestBoardListViewItemDraw__SetClearSprite(v7, v12, v89);
    if ( !v12 )
      goto LABEL_171;
    goto LABEL_167;
  }
  v83 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v83 && v83 != 6 && (!IsClose || v83 != 1) )
    QuestBoardListViewItemDraw__SetStatusActive(v7, v83, v113 != 0 || eventEnt == 0 || v83 != 1, v80);
  if ( (v112 & 1) != 0
    && QuestBoardListViewItemDraw__HasNewQuestInWar(
         (QuestBoardListViewItemDraw_o *)HasFlag,
         questList,
         warId,
         IsMainInterlude,
         v82) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v7, 1, 1, v80);
  }
  v84 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v84 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v7,
    v84->static_fields->NEW_POS_AREA,
    v84->static_fields->NEW_W_AREA,
    v84->static_fields->NEW_H_AREA,
    v80);
  if ( IsMainInterlude && v17 )
    QuestBoardListViewItemDraw__SetStatusActive(v7, 2, 1, v86);
  QuestBoardListViewItemDraw__SetClearSprite(v7, v12, v85);
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
    QuestBoardListViewItemDraw__SetNextSprite(v7, AreaBoardInfo_k__BackingField, v12, v87);
  }
  v93 = v7->fields.mListViewObject;
  if ( !v93 )
    goto LABEL_193;
  manager = (QuestBoardListViewItemDraw_o *)v93->fields.manager;
  if ( !manager )
  {
LABEL_196:
    IsDisplayableRoadmapButton = QuestBoardListViewItem__IsDisplayableRoadmapButton(questBoardItem, 0);
    sub_1C372B4(IsDisplayableRoadmapButton);
  }
  v94 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v94
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v94 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_195:
    sub_1C37574(manager);
    goto LABEL_196;
  }
  if ( QuestBoardListViewItem__IsDisplayableRoadmapButton(questBoardItem, 0)
    || questBoardItem->fields.index == HIDWORD(manager->fields.mBannerArrowObj) )
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
    QuestBoardListViewItemDraw__SetStatusActive(v7, 2, 1, v95);
    QuestBoardListViewItemDraw__SetClearSprite(v7, v12, v96);
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(v12, 0) )
    QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v7, questBoardItem, v12, 0, 0, v97);
LABEL_171:
  if ( IsClose || !isBadgeDisp || !(v112 & 1 | (v113 != 0 || eventEnt == 0)) )
    questCount = 0;
  else
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  QuestBoardListViewItemDraw__SetBadge(v7, questCount, v92);
  QuestBoardListViewItemDraw__CreateInfoTextList(v7, questBoardItem, (int64_t)checkTime, v99);
  if ( !IsMainInterlude )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)v7->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_193;
    size = mInfoTextList->fields._size;
    if ( size >= 1 )
    {
      v103 = v7->fields.mListViewObject;
      if ( !v103 )
        goto LABEL_193;
      this = (QuestBoardListViewItemDraw_o *)v103->fields.manager;
      if ( !this )
        goto LABEL_193;
      v104 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment >= (unsigned int)v104
        && (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v104 - 1] == QuestBoardListViewManager_TypeInfo )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)this, size, 0);
        this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                 mInfoTextList,
                                                 AlphaAnimCnt,
                                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
            v100 = 1;
            goto LABEL_186;
          }
        }
LABEL_193:
        sub_1C372B4(this);
      }
      sub_1C37574(this);
LABEL_198:
      sub_1C372BC(this);
    }
  }
  v100 = 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v100, 0);
  this = (QuestBoardListViewItemDraw_o *)v7->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v100, 0);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x29
  DataManager_o *v10; // x24
  QuestEntity_o *PhaseDetailedEntity; // x23
  unsigned int v12; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x9
  int32_t dispType; // w21
  bool HasFlag; // w0
  float v17; // s8
  Il2CppObject *MasterData_object; // x22
  bool v19; // w22
  bool v20; // w0
  int32_t v21; // w20
  _BOOL4 v22; // w8
  QuestBoardListViewItemDraw_o *PhaseMax; // x0
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  char v26; // w22
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v28; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v30; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  struct QuestBoardListViewItemDraw_StaticFields *v32; // x8
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UISprite_o *mcBaseP; // x27
  System_String_o *v36; // x24
  int32_t questId; // w27
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v39; // x8
  UnityEngine_GameObject_o *v40; // x27
  float NEXT_POS_X_QUEST; // s0
  Il2CppObject *Master_object; // x27
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x3
  bool isEntityExistsFromId; // w8
  _BOOL4 IsResetStatus; // w9
  int32_t v47; // w1
  const MethodInfo *v48; // x3
  QuestBoardListViewItemDraw_c *v49; // x0
  const MethodInfo *v50; // x3
  QuestBoardListViewItemDraw_c *v51; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v52; // x8
  QuestBoardListViewItemDraw_c *v53; // x0
  int pickupPriority; // w20
  QuestBoardListViewItemDraw_c *v55; // x0
  bool v56; // zf
  __int64 v57; // x9
  __int64 v58; // x10
  __int64 v59; // x11
  __int64 v60; // x12
  __int64 v61; // x13
  __int64 v62; // x14
  __int64 v63; // x10
  float *v64; // x9
  float *v65; // x10
  __int64 v66; // x11
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  UnityEngine_GameObject_o *v69; // x22
  QuestBoardListViewItemDraw_c *v70; // x0
  QuestBoardListViewItemDraw_o *v71; // x0
  const MethodInfo *v72; // x5
  System_String_o *RecommendLv; // x0
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x2
  UISprite_o *mLabelFaceMaskQuestSp; // x22
  QuestBoardListViewItemDraw_o *v77; // x0
  int32_t z_low; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v80; // x5
  bool v81; // w0
  const MethodInfo *v82; // x3
  UILabel_o *mTitleNameLb; // x22
  const MethodInfo *v84; // x4
  UnityEngine_Color_o *v85; // x26
  QuestBoardListViewItemDraw_o *v86; // x0
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x2
  UISprite_o *mLabelNameSp; // x22
  QuestBoardListViewItemDraw_o *v90; // x0
  const MethodInfo *v91; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v93; // x22
  const MethodInfo *v94; // x3
  float *v95; // x28
  UILabel_o *v96; // x22
  __int64 v97; // x20
  System_String_o *QuestBoardTitleColor; // x0
  bool v99; // w0
  System_String_o **v100; // x8
  System_String_o *v101; // x8
  System_String_o *v102; // x22
  QuestBoardListViewItemDraw_o *v103; // x0
  const MethodInfo *v104; // x4
  const MethodInfo *v105; // x5
  bool v106; // w22
  int v107; // w20
  const MethodInfo *v108; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  const MethodInfo *v110; // x7
  const MethodInfo *v111; // x5
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x9
  int64_t expireAt; // x1
  int32_t warId; // w3
  System_String_o *v115; // x4
  int64_t v116; // x2
  UISprite_o *v117; // x27
  __int64 v118; // x8
  System_String_o *v119; // x24
  System_String_o *v120; // x0
  System_String_o *v121; // x24
  struct MapControl_WarInfo_o *v122; // x8
  Il2CppObject *QuestBoardInformationText_36390776; // x1
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
  bool v145; // w1
  QuestBoardListViewItemDraw_c *v146; // x0
  _BOOL4 v147; // w20
  struct QuestBoardListViewItemDraw_StaticFields *v148; // x8
  __int64 v149; // x9
  __int64 v150; // x10
  __int64 v151; // x11
  int32_t ClearNum; // w22
  UISprite_o *challengeStrSpr; // x25
  UILabel_o *mChallengeLb; // x25
  UnityEngine_GameObject_o *mClearCountObj; // x22
  bool v156; // w1
  QuestBoardListViewItemDraw_c *v157; // x0
  _BOOL4 v158; // w20
  struct QuestBoardListViewItemDraw_StaticFields *v159; // x8
  __int64 v160; // x9
  __int64 v161; // x10
  __int64 v162; // x11
  int v163; // w22
  UILabel_o *clearCountStrLabel; // x25
  UnityEngine_GameObject_o *v165; // x0
  double v166; // d0
  int v167; // w20
  UnityEngine_GameObject_o *v168; // x0
  float v169; // s0
  UnityEngine_GameObject_o *v170; // x0
  UnityEngine_GameObject_o *v171; // x25
  double v172; // d0
  bool v173; // zf
  UILabel_o *mClearCountLabel; // x25
  UnityEngine_GameObject_o *mPhaseObj; // x22
  UnityEngine_GameObject_o *v176; // x21
  UnityEngine_GameObject_o *v177; // x23
  bool v178; // w1
  const MethodInfo *v179; // x4
  int32_t afterClear; // w24
  MapControl_PhaseInfo_o *CurrentPhaseInfo; // x0
  int32_t ReferToQuestPhase; // w0
  int32_t v183; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v185; // x25
  int32_t v186; // w22
  int32_t *p_questPhase; // x8
  int32_t v188; // w0
  int32_t v189; // w28
  uint32_t cctor_finished; // w9
  struct QuestBoardListViewItemDraw_StaticFields *v191; // x8
  int32_t PHASE_NORMAL_MAX; // w21
  bool v193; // w25
  int32_t v194; // w26
  __int64 v195; // x9
  unsigned int v196; // w20
  int32_t v197; // w29
  int v198; // w23
  int v199; // w21
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v201; // x8
  UISprite_o *v202; // x27
  QuestBoardListViewItemDraw_o *v203; // x0
  const MethodInfo *v204; // x6
  System_String_o *PhaseArrowSpriteName; // x0
  QuestBoardListViewItemDraw_o *v206; // x0
  const MethodInfo *v207; // x3
  int32_t PhaseArrowIntervalSize; // w24
  UnityEngine_GameObject_o *v209; // x22
  int32_t v210; // w21
  QuestBoardListViewItemDraw_c *v211; // x0
  UISprite_o *mDamageRecordSp; // x22
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x24
  Il2CppObject *v214; // x22
  int64_t MaxTurnDamage; // x0
  UILabel_o *mDamageRecordLb; // x22
  __int64 v217; // x2
  __int64 v218; // x3
  __int64 v219; // x4
  __int64 v220; // x5
  __int64 v221; // x6
  __int64 v222; // x7
  Il2CppObject *v223; // x0
  UnityEngine_GameObject_o *v224; // x22
  QuestBoardListViewItemDraw_c *v225; // x0
  UISprite_o *mKnockdownRecordSp; // x22
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x24
  QuestKnockdownInfo_o *v228; // x22
  Il2CppObject *v229; // x25
  UILabel_o *mKnockdownRecordCountLb; // x25
  __int64 v231; // x2
  __int64 v232; // x3
  __int64 v233; // x4
  __int64 v234; // x5
  __int64 v235; // x6
  __int64 v236; // x7
  System_String_o *v237; // x26
  Il2CppObject *v238; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x25
  System_String_o *v240; // x24
  __int64 v241; // x2
  __int64 v242; // x3
  __int64 v243; // x4
  __int64 v244; // x5
  __int64 v245; // x6
  __int64 v246; // x7
  Il2CppObject *v247; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x25
  System_String_o *v249; // x26
  long double inited; // q0
  _QWORD *v251; // x27
  __int64 v252; // x8
  __int64 v253; // x0
  __int64 v254; // x0
  UILabel_o *mKnockdownRecordDamageNameLb; // x25
  System_String_o *v256; // x0
  long double v257; // q0
  _QWORD *v258; // x27
  System_String_o *v259; // x26
  __int64 v260; // x8
  __int64 v261; // x0
  __int64 v262; // x0
  UnityEngine_GameObject_o *v263; // x22
  QuestBoardListViewItemDraw_c *v264; // x8
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_GameObject_o *v266; // x20
  UnityEngine_GameObject_o *v267; // x0
  float LocalPositionX; // s8
  QuestBoardListViewItemDraw_c *v269; // x0
  int32_t id; // w22
  TerminalSceneComponent_c *v271; // x0
  __int64 v272; // x22
  __int64 v273; // x1
  UILabel_o *mOptionRestrinctionLb; // x22
  UnityEngine_GameObject_o *v275; // x22
  UnityEngine_Behaviour_o *v276; // x22
  const MethodInfo *v277; // x3
  struct QuestPhaseDetailEntity_BoardList_o *boardMessage; // x8
  System_Collections_Generic_IEnumerable_TSource__o *list; // x0
  __int64 v280; // x20
  __int64 v281; // x25
  __int64 v282; // x8
  __int64 v283; // x8
  bool v284; // w22
  bool v285; // w25
  bool v286; // w28
  int32_t v287; // w2
  const MethodInfo *v288; // x3
  bool v289; // w26
  Il2CppObject *mCostConsumeBattleWinSp; // x1
  __int64 v291; // x8
  _QWORD *v292; // x9
  __int64 v293; // x10
  __int64 v294; // x8
  _BOOL4 v295; // w20
  UISprite_o *v296; // x27
  __int64 v297; // x9
  QuestBoardListViewItemDraw_c *v298; // x0
  UISprite_o *mOptionPreBattleSp; // x26
  System_String_o *PRE_BATTLE_ORGANIZATION; // x24
  int32_t v301; // w2
  const MethodInfo *v302; // x3
  Il2CppObject *v303; // x1
  __int64 v304; // x8
  _QWORD *v305; // x9
  __int64 v306; // x10
  __int64 v307; // x8
  bool v308; // w26
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  char v310; // w22
  UnityEngine_GameObject_o *v311; // x25
  QuestBoardListViewItemDraw_c *v312; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v313; // x8
  const MethodInfo *v314; // x2
  struct UILabel_o *v315; // x22
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v317; // x2
  struct UILabel_o *v318; // x8
  QuestBoardListViewItemDraw_c *v319; // x0
  int32_t RESTRICTION_FONT_SPACING_DEFAULT; // w1
  int32_t mSpacingX; // w20
  QuestBoardListViewItemDraw_c *v322; // x0
  struct System_Int32_array *classIds; // x8
  bool v324; // w22
  QuestBoardListViewItemDraw_o *v325; // x0
  const MethodInfo *v326; // x2
  QuestEntity_o *v327; // x21
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v331; // x22
  QuestBoardListViewItemDraw___c_c *v332; // x0
  System_Func_object__int__o *_9__337_1; // x23
  Il2CppObject *v334; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v335; // x0
  int32_t v336; // w2
  const MethodInfo *v337; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v338; // x0
  System_Int32_array *v339; // x22
  struct ServantClassIconComponent_array *mClassIcons; // x8
  ServantClassIconComponent_o *v341; // x22
  WaveBattleWaveEnemyInfoItem_c *v342; // x0
  struct ServantClassIconComponent_array *v343; // x8
  int max_length; // w20
  int v345; // w21
  struct ServantClassIconComponent_array *v346; // x8
  int v347; // w10
  int v348; // w20
  struct System_Int32_array *v349; // x21
  unsigned int v350; // w9
  __int64 v351; // x23
  Il2CppClass **v352; // x8
  UnityEngine_Component_o *v353; // x22
  UISprite_o *mBoardFrame; // x22
  System_String_o *QuestBoardFrameNamePrefix; // x23
  System_String_o *QuestBoardFrameName; // x0
  System_String_o *v357; // x23
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v360; // w21
  QuestBoardListViewItemDraw_c *v361; // x0
  int32_t *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  UISprite_o *v363; // x27
  __int64 v364; // x8
  QuestBoardListViewItemDraw_o *v365; // x0
  QuestBoardListViewItem_o *v366; // x1
  const MethodInfo *v367; // x2
  const MethodInfo *v368; // [xsp+10h] [xbp-180h]
  int64_t checkTime; // [xsp+28h] [xbp-168h]
  bool v370; // [xsp+34h] [xbp-15Ch]
  QuestBoardListViewItem_o *v371; // [xsp+38h] [xbp-158h]
  int key; // [xsp+40h] [xbp-150h]
  _BOOL4 v373; // [xsp+44h] [xbp-14Ch]
  unsigned int questType; // [xsp+48h] [xbp-148h]
  int32_t questTypea[2]; // [xsp+48h] [xbp-148h]
  _BOOL4 v376; // [xsp+54h] [xbp-13Ch]
  DataManager_o *v377; // [xsp+58h] [xbp-138h]
  int32_t v378; // [xsp+64h] [xbp-12Ch]
  bool v379; // [xsp+68h] [xbp-128h]
  QuestEntity_o *v380; // [xsp+68h] [xbp-128h]
  int32_t questPhase; // [xsp+74h] [xbp-11Ch]
  float *v382; // [xsp+78h] [xbp-118h]
  bool v383; // [xsp+84h] [xbp-10Ch]
  float *v384; // [xsp+88h] [xbp-108h]
  float *v385; // [xsp+90h] [xbp-100h]
  float *v386; // [xsp+98h] [xbp-F8h]
  int64_t totalDamage; // [xsp+A0h] [xbp-F0h] BYREF
  int64_t knockdownNum; // [xsp+A8h] [xbp-E8h] BYREF
  QuestPhaseEntity_o *questPhaseEntity; // [xsp+B0h] [xbp-E0h] BYREF
  QuestPhaseDetailEntity_o *v390; // [xsp+B8h] [xbp-D8h] BYREF
  Il2CppObject *v391; // [xsp+C0h] [xbp-D0h] BYREF
  int64_t endedAt; // [xsp+C8h] [xbp-C8h] BYREF
  System_String_o *infoText; // [xsp+D0h] [xbp-C0h] BYREF
  int32_t v394; // [xsp+D8h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+DCh] [xbp-B4h] BYREF
  int32_t fixedVal[2]; // [xsp+E0h] [xbp-B0h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+E8h] [xbp-A8h] BYREF
  UnityEngine_Color_o color; // [xsp+F0h] [xbp-A0h] BYREF
  Il2CppObject *v399; // [xsp+108h] [xbp-88h] BYREF
  bool isTripleItemConsume; // [xsp+114h] [xbp-7Ch] BYREF
  bool isDoubleItemConsumeQp; // [xsp+118h] [xbp-78h] BYREF
  bool isDoubleItemConsume; // [xsp+11Ch] [xbp-74h] BYREF
  UserQuestEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v404; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v405; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v406; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v407; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v408; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v409; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v410; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v411; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v412; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v413; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v414; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v415; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v416; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v417; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v418; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v419; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v420; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v421; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v422; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v423; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v424; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v425; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v426; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v427; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v428; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v429; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v430; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v431; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3FBAF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Array_Empty_object___);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestExtensionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_QuestBoardInformationText___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&QuestInformationComponent_TypeInfo);
    sub_1C37058(&QuestKnockdownInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__337_1__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass337_0__SetItemOfQuest_b__0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass337_0_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1C37058(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_1C37058(&StringLiteral_22891/*"questboard_challenge"*/);
    sub_1C37058(&StringLiteral_413/*"#786F49"*/);
    sub_1C37058(&StringLiteral_19876/*"gold"*/);
    sub_1C37058(&StringLiteral_10826/*"QUEST_BOARD_CLEAR_COUNT_NAME"*/);
    sub_1C37058(&StringLiteral_10831/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/);
    sub_1C37058(&StringLiteral_10828/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/);
    sub_1C37058(&StringLiteral_25052/*"{0:#,0}"*/);
    sub_1C37058(&StringLiteral_426/*"#FFE898"*/);
    sub_1C37058(&StringLiteral_10830/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/);
    sub_1C37058(&StringLiteral_10829/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_22892/*"questboard_crushing"*/);
    byte_4C3FBAF = 1;
  }
  entity = 0;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  v399 = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)fixedVal = 0;
  phasePresentData = 0;
  isNotItemConsume = 0;
  v394 = 0;
  endedAt = 0;
  infoText = 0;
  v390 = 0;
  v391 = 0;
  questPhaseEntity = 0;
  v5 = sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass337_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass337_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass337_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_641;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_641;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_641;
  v10 = (DataManager_o *)Instance;
  Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0);
  if ( !Instance )
    goto LABEL_641;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0);
  if ( !v10 )
    goto LABEL_641;
  v12 = Instance;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v10,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    v17 = 0.5;
  else
    v17 = 1.0;
  *(float *)(v5 + 24) = v17;
  v382 = (float *)(v5 + 24);
  *(float *)(v5 + 28) = v17;
  *(float *)(v5 + 32) = v17;
  *(_DWORD *)(v5 + 36) = 1065353216;
  v379 = HasFlag;
  v385 = (float *)(v5 + 28);
  v386 = (float *)(v5 + 32);
  v384 = (float *)(v5 + 36);
  MasterData_object = DataManager__GetMasterData_object_(
                        v10,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
  v19 = QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x10000000000000LL, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_641;
  v20 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, quest_info_k__BackingField->fields.questId, 0, 0);
  v21 = quest_info_k__BackingField->fields.questPhase;
  v22 = !v19;
  v383 = !v19;
  if ( !v20 )
    v22 = 0;
  v376 = v22;
  PhaseMax = (QuestBoardListViewItemDraw_o *)MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0);
  v25 = v21 + 1 < (int)PhaseMax ? v21 + 1 : (int)PhaseMax;
  questPhase = v25;
  Instance = QuestBoardListViewItemDraw__IsInterruptedQuest(
               PhaseMax,
               quest_info_k__BackingField->fields.questId,
               v25,
               v24);
  if ( !this->fields.mLabelObj )
    goto LABEL_641;
  v26 = Instance;
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
  v377 = v10;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v10,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestExtensionMaster___);
  if ( !Instance )
    goto LABEL_641;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v399,
               PhaseDetailedEntity->fields.id,
               (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  questType = v12;
  if ( OverwriteBannerId_k__BackingField >= 1 )
  {
    v28 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v28 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    static_fields = v28->static_fields;
    v30 = (QuestBoardListViewItemDraw_c *)&v394;
    QUEST_BOARD_SPNAME_PREFIX = static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v394 = OverwriteBannerId_k__BackingField;
LABEL_59:
    v33 = System_Int32__ToString((int32_t)v30, 0);
    v34 = System_String__Concat_63561656(QUEST_BOARD_SPNAME_PREFIX, v33, 0);
    mcBaseP = this->fields.mcBaseP;
    v36 = v34;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mcBaseP, v36, 0);
    if ( !mcBaseP )
      goto LABEL_641;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, Instance & 1, 0);
    goto LABEL_63;
  }
  if ( PhaseDetailedEntity->fields.bannerId >= 1 )
  {
    v30 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v30 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v32 = v30->static_fields;
    LODWORD(v30) = (_DWORD)PhaseDetailedEntity + 64;
    QUEST_BOARD_SPNAME_PREFIX = v32->QUEST_BOARD_SPNAME_PREFIX;
    goto LABEL_59;
  }
  v117 = this->fields.mcBaseP;
  if ( questType <= 5 && ((1 << questType) & 0x26) != 0 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v118 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1104LL);
    if ( !v118 )
      goto LABEL_641;
    if ( questType >= *(_DWORD *)(v118 + 24) )
      goto LABEL_698;
    v119 = *(System_String_o **)(v118 + 8LL * questType + 32);
    v120 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0);
    v121 = System_String__Concat_63561656(v119, v120, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v117, v121, 0);
  }
  else
  {
    if ( !v117 )
      goto LABEL_641;
    UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0);
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v363 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v364 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1104LL);
    if ( !v364 )
      goto LABEL_641;
    if ( questType >= *(_DWORD *)(v364 + 24) )
      goto LABEL_698;
    if ( !v363 )
      goto LABEL_641;
    UISprite__set_spriteName(v363, *(System_String_o **)(v364 + 8LL * (int)questType + 32), 0);
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
                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_641;
  v408.fields.a = *v384;
  v408.fields.b = *v386;
  v408.fields.g = *v385;
  v408.fields.r = *v382;
  UIWidget__set_color((UIWidget_o *)Instance, v408, 0);
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
      if ( !CondType__IsQuestClear_40324848(questId, -1, 1, 0) )
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
    v39 = QuestBoardListViewItemDraw_TypeInfo;
    v40 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v39 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v40, v39->static_fields->NEXT_POS_X_QUEST, 0);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_641;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 128) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 140) = NEXT_POS_X_QUEST;
  }
  v378 = dispType;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestResetMaster___);
  Instance = sub_1C37100(long___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_641;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_698;
  *(_QWORD *)(Instance + 32) = quest_info_k__BackingField->fields.questId;
  if ( !Master_object )
    goto LABEL_641;
  isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_33A067C *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
  IsResetStatus = 0;
  if ( entity && isEntityExistsFromId )
    IsResetStatus = UserQuestEntity__IsResetStatus(entity, 0);
  v373 = dispType != 2;
  if ( IsResetStatus || v376 || v373 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v47 = 1;
    }
    else
    {
      if ( !IsResetStatus && !v376 )
        goto LABEL_98;
      v47 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v47, 1, v44);
  }
LABEL_98:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v44);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v43);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v49 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v49 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      v49->static_fields->NEW_POS_QUEST_NEXT,
      v49->static_fields->NEW_W_DEFAULT,
      v49->static_fields->NEW_H_DEFAULT,
      v48);
    v51 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v51 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v52 = v51->static_fields;
LABEL_113:
    v56 = (v26 & 1) == 0;
    v57 = 228;
    v58 = 252;
    v59 = 224;
    v60 = 248;
    v61 = 220;
    v62 = 244;
    goto LABEL_114;
  }
  v53 = QuestBoardListViewItemDraw_TypeInfo;
  pickupPriority = quest_info_k__BackingField->fields.pickupPriority;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v53 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v53->static_fields->NEW_POS_QUEST,
    v53->static_fields->NEW_W_DEFAULT,
    v53->static_fields->NEW_H_DEFAULT,
    v48);
  v55 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v55 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v52 = v55->static_fields;
  if ( pickupPriority >= 1 )
    goto LABEL_113;
  v56 = (v26 & 1) == 0;
  v57 = 216;
  v58 = 240;
  v59 = 212;
  v60 = 236;
  v61 = 208;
  v62 = 232;
LABEL_114:
  if ( v56 )
  {
    v63 = v59;
  }
  else
  {
    v57 = v58;
    v63 = v60;
  }
  v64 = (float *)((char *)&v52->POS_Y_ITVL_AREA + v57);
  v65 = (float *)((char *)&v52->POS_Y_ITVL_AREA + v63);
  if ( v56 )
    v66 = v61;
  else
    v66 = v62;
  v404.fields.z = *v64;
  v404.fields.y = *v65;
  LODWORD(v404.fields.x) = *(int32_t *)((char *)&v52->POS_Y_ITVL_AREA + v66);
  QuestBoardListViewItemDraw__SetPrevSprite(this, PhaseDetailedEntity, v404, v26 & 1, v50);
  if ( dispType != 2
    && quest_info_k__BackingField->fields.isNew
    && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v67);
  }
  Instance = (__int64)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v68);
  if ( !Instance )
    goto LABEL_641;
  v69 = (UnityEngine_GameObject_o *)Instance;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v70 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v70 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v69, v70->static_fields->CLEAR_POS_QUEST, 0);
  }
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v379, 0);
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_641;
  v371 = questBoardItem;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_641;
  v409.fields.a = *v384;
  v409.fields.b = *v386;
  v409.fields.g = *v385;
  v409.fields.r = *v382;
  UIWidget__set_color((UIWidget_o *)Instance, v409, 0);
  v370 = !v379;
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  v71,
                  PhaseDetailedEntity,
                  questPhase,
                  !v379,
                  dispType == 2,
                  v72);
  v410.fields.r = *v382;
  v410.fields.g = *v385;
  v410.fields.b = *v386;
  v410.fields.a = *v384;
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, v410, v74);
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  v77 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v77 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  z_low = LODWORD(v77->fields.mPrevSp[1].fields.mOldV1.fields.z);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v77, questType, v75);
  v411.fields.r = *v382;
  v411.fields.g = *v385;
  v411.fields.b = *v386;
  v411.fields.a = *v384;
  v81 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          z_low,
          FaceMaskSpriteName,
          v411,
          v80);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v81 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, questType, v82);
    if ( !mTitleNameLb )
      goto LABEL_641;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0);
    v85 = (UnityEngine_Color_o *)(v5 + 24);
    goto LABEL_155;
  }
  Instance = (__int64)QuestEntity__getQuestName(PhaseDetailedEntity, 0);
  if ( !mTitleNameLb )
    goto LABEL_641;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0);
  if ( questType != 1 || !QuestBoardListViewItemDraw__IsMainWar(v86, quest_info_k__BackingField->fields.warId, v87) )
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
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v90, PhaseDetailedEntity, questType, v91);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0);
    v85 = (UnityEngine_Color_o *)(v5 + 24);
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
                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_641;
    v412.fields.r = *v382;
    v412.fields.a = *v384;
    v412.fields.b = *v386;
    v412.fields.g = *v385;
    UIWidget__set_color((UIWidget_o *)Instance, v412, 0);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_641;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v93 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v93,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass337_0__SetItemOfQuest_b__0__,
        0);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v93, v94);
    }
LABEL_155:
    if ( dispType == 2 )
      goto LABEL_156;
LABEL_157:
    Instance = (__int64)this->fields.mAdvanceNoticeLb;
    v95 = (float *)(v5 + 36);
    if ( !Instance )
      goto LABEL_641;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_159;
  }
  v85 = (UnityEngine_Color_o *)(v5 + 24);
  if ( dispType != 2 )
  {
    QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v88);
    goto LABEL_157;
  }
LABEL_156:
  QuestBoardListViewItemDraw__SetAdvanceNoticeText(
    this,
    quest_info_k__BackingField,
    PhaseDetailedEntity,
    checkTime,
    v84);
  v95 = (float *)(v5 + 36);
LABEL_159:
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v96 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v96 )
    goto LABEL_641;
  UILabel__SetCondensedScale(v96, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0, 0);
  color = *v85;
  if ( v399 && QuestExtensionEntity__IsQuestBoardTitleColorChange((QuestExtensionEntity_o *)v399, 0) )
  {
    Instance = (__int64)v399;
    if ( !v399 )
      goto LABEL_641;
    v97 = StringLiteral_1/*""*/;
    QuestBoardTitleColor = QuestExtensionEntity__GetQuestBoardTitleColor((QuestExtensionEntity_o *)v399, 0);
    v99 = System_String__op_Equality(QuestBoardTitleColor, (System_String_o *)StringLiteral_19876/*"gold"*/, 0);
    v100 = (System_String_o **)&StringLiteral_413/*"#786F49"*/;
    if ( dispType != 2 )
      v100 = (System_String_o **)&StringLiteral_426/*"#FFE898"*/;
    v101 = *v100;
    if ( v99 )
      v102 = v101;
    else
      v102 = (System_String_o *)v97;
    if ( !System_String__IsNullOrEmpty(v102, 0) )
      UnityEngine_ColorUtility__TryParseHtmlString(v102, &color, 0);
  }
  Instance = (__int64)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_641;
  UIWidget__set_color((UIWidget_o *)Instance, color, 0);
  QuestBoardListViewItemDraw__GetPhasePresentGiftData(
    v103,
    &phasePresentData,
    PhaseDetailedEntity,
    quest_info_k__BackingField->fields.questPhase,
    v104);
  v413.fields.r = v85->fields.r;
  v413.fields.g = *v385;
  v413.fields.a = *v95;
  v413.fields.b = *v386;
  QuestBoardListViewItemDraw__SetupRewardIconAll(
    this,
    quest_info_k__BackingField,
    entity,
    phasePresentData,
    dispType == 2,
    v413,
    v105);
  if ( entity && UserQuestEntity__HasStatus(entity, 8, 0) )
  {
    Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    v106 = !WarEntity__IsShop((WarEntity_o *)Instance, 0);
    v107 = 1;
  }
  else
  {
    v107 = 0;
    v106 = 0;
  }
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v106, 0);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v108);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        questPhase,
                        !v376,
                        &fixedVal[1],
                        fixedVal,
                        &isNotItemConsume,
                        v110);
  if ( !mInfoTextList )
    goto LABEL_641;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !QuestEntity__HasFlag(PhaseDetailedEntity, 32, 0) )
  {
    Instance = (__int64)this->fields.mRarePrismSp;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    if ( v107 | UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
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
        v115 = infoText;
        v116 = checkTime;
        warId = 0;
        goto LABEL_206;
      }
      v122 = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
      if ( !v122 )
        goto LABEL_641;
      expireAt = quest_info_k__BackingField->fields.endTime;
      warId = v122->fields.warId;
    }
    v116 = checkTime;
    v115 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_206:
    QuestBoardInformationText_36390776 = (Il2CppObject *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText_36390776(
                                                           (QuestBoardListViewItemDraw_o *)Instance,
                                                           expireAt,
                                                           v116,
                                                           warId,
                                                           v115,
                                                           v111);
    if ( QuestBoardInformationText_36390776 )
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
          QuestBoardInformationText_36390776,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v129 = v126 + 8 * v128;
        *(_DWORD *)(Instance + 24) = v128 + 1;
        *(_QWORD *)(v129 + 32) = QuestBoardInformationText_36390776;
        sub_1C36FFC((CGThumbnailListItem_o *)(v129 + 32), (int32_t)QuestBoardInformationText_36390776, v124, v125);
      }
    }
  }
LABEL_212:
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Instance = System_Linq_Enumerable__Any_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mInfoTextList,
               (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_QuestBoardInformationText___);
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
    sub_1C37574(Instance);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v365, v366, v367);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                   (QuestBoardListViewManager_o *)Instance,
                   v133->fields._size,
                   0);
  Item = System_Collections_Generic_List_object___get_Item(
           v133,
           AlphaAnimCnt,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !Item )
    goto LABEL_641;
  QuestBoardInformationText__SetTime_36471496(
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
  v95 = v384;
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
  v414.fields.r = v85->fields.r;
  v414.fields.g = *v385;
  v414.fields.a = *v95;
  v414.fields.b = *v386;
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    dispType == 2,
    fixedVal[1],
    fixedVal[0],
    isNotItemConsume,
    v414,
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    0,
    v368);
  v140 = v371->fields._OverwriteBannerId_k__BackingField;
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
  if ( v379 )
    v144 = 0;
  else
    v144 = this->fields.mChallengeObj;
  if ( v379 || (Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 0x4000, 0), (Instance & 1) != 0) )
  {
    v145 = 0;
    if ( !mChallengeObj )
      goto LABEL_641;
  }
  else
  {
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 4, 0);
    v145 = (Instance & 1) != 0 && PhaseDetailedEntity->fields.afterClear != 1;
    mChallengeObj = v144;
    if ( !v144 )
      goto LABEL_641;
  }
  UnityEngine_GameObject__SetActive(mChallengeObj, v145, 0);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v146 = QuestBoardListViewItemDraw_TypeInfo;
    v147 = isDoubleItemConsume;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v146 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v148 = v146->static_fields;
    v149 = 532;
    if ( v147 )
    {
      v150 = 528;
    }
    else
    {
      v149 = 520;
      v150 = 516;
    }
    if ( v147 )
      v151 = 524;
    else
      v151 = 512;
    LODWORD(v405.fields.x) = *(int32_t *)((char *)&v148->POS_Y_ITVL_AREA + v151);
    LODWORD(v405.fields.y) = *(int32_t *)((char *)&v148->POS_Y_ITVL_AREA + v150);
    LODWORD(v405.fields.z) = *(int32_t *)((char *)&v148->POS_Y_ITVL_AREA + v149);
    GameObjectExtensions__SetLocalPosition(this->fields.mChallengeObj, v405, 0);
    Instance = (__int64)DataManager__GetMasterData_object_(
                          v377,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_641;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &v391,
      key,
      (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( QuestEntity__HasFlag(PhaseDetailedEntity, 4, 0)
      && (!v391 || EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)v391, 0)) )
    {
      if ( entity )
        ClearNum = UserQuestEntity__getClearNum(entity, 0);
      else
        ClearNum = 0;
      challengeStrSpr = this->fields.challengeStrSpr;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_22892/*"questboard_crushing"*/, 0);
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22891/*"questboard_challenge"*/, 0);
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
  v415.fields.a = *v95;
  v415.fields.r = v85->fields.r;
  v415.fields.b = *v386;
  v415.fields.g = *v385;
  UIWidget__set_color((UIWidget_o *)Instance, v415, 0);
  mClearCountObj = this->fields.mClearCountObj;
  if ( v379 || (Instance = (__int64)v399) == 0 )
  {
    v156 = 0;
  }
  else
  {
    Instance = QuestExtensionEntity__IsActiveClearCnt((QuestExtensionEntity_o *)v399, 0);
    v156 = Instance & 1;
  }
  if ( !mClearCountObj )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive(mClearCountObj, v156, 0);
  Instance = (__int64)this->fields.mClearCountObj;
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v157 = QuestBoardListViewItemDraw_TypeInfo;
    v158 = isDoubleItemConsume;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v157 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v159 = v157->static_fields;
    v160 = 556;
    if ( v158 )
    {
      v161 = 552;
    }
    else
    {
      v160 = 544;
      v161 = 540;
    }
    if ( v158 )
      v162 = 548;
    else
      v162 = 536;
    LODWORD(v406.fields.x) = *(int32_t *)((char *)&v159->POS_Y_ITVL_AREA + v162);
    LODWORD(v406.fields.y) = *(int32_t *)((char *)&v159->POS_Y_ITVL_AREA + v161);
    LODWORD(v406.fields.z) = *(int32_t *)((char *)&v159->POS_Y_ITVL_AREA + v160);
    GameObjectExtensions__SetLocalPosition(this->fields.mClearCountObj, v406, 0);
    Instance = (__int64)v399;
    if ( v399 )
    {
      if ( QuestExtensionEntity__IsActiveClearCnt((QuestExtensionEntity_o *)v399, 0) )
      {
        if ( entity )
          v163 = UserQuestEntity__getClearNum(entity, 0);
        else
          v163 = 0;
        clearCountStrLabel = this->fields.clearCountStrLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10826/*"QUEST_BOARD_CLEAR_COUNT_NAME"*/, 0);
        if ( !clearCountStrLabel )
          goto LABEL_641;
        UILabel__set_text(clearCountStrLabel, (System_String_o *)Instance, 0);
      }
      else
      {
        v163 = 0;
      }
      Instance = (__int64)this->fields.clearCountStrLabel;
      if ( !Instance )
        goto LABEL_641;
      if ( v158 )
      {
        UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0);
        Instance = (__int64)this->fields.clearCountStrLabel;
        if ( !Instance )
          goto LABEL_641;
        v165 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        GameObjectExtensions__SetLocalScaleX(v165, 0.86, 0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v166 = log10((double)v163);
        v167 = v166 == INFINITY ? -2147483647 : (int)v166 + 1;
        v394 = v167;
        Instance = (__int64)this->fields.mClearCountLabel;
        if ( v167 <= 7 )
        {
          if ( !Instance )
            goto LABEL_641;
          v168 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          v169 = v167 <= 5 ? 1.0 : 0.65;
        }
        else
        {
          if ( !Instance )
            goto LABEL_641;
          v168 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          v169 = 0.53;
        }
      }
      else
      {
        UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0);
        Instance = (__int64)this->fields.clearCountStrLabel;
        if ( !Instance )
          goto LABEL_641;
        v170 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        GameObjectExtensions__SetLocalScaleX(v170, 1.0, 0);
        Instance = (__int64)this->fields.mClearCountLabel;
        if ( !Instance )
          goto LABEL_641;
        v171 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v172 = log10((double)v163);
        v173 = (int)v172 + 1 <= 6 || v172 == INFINITY;
        v169 = 1.0;
        if ( !v173 )
          v169 = 0.65;
        v168 = v171;
      }
      GameObjectExtensions__SetLocalScaleX(v168, v169, 0);
      mClearCountLabel = this->fields.mClearCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__GetNumberFormat(v163, 0);
      if ( mClearCountLabel )
      {
        UILabel__set_text(mClearCountLabel, (System_String_o *)Instance, 0);
        goto LABEL_332;
      }
    }
LABEL_641:
    sub_1C372B4(Instance);
  }
LABEL_332:
  Instance = (__int64)this->fields.mClearCountLabel;
  if ( !Instance )
    goto LABEL_641;
  v416.fields.a = *v95;
  v416.fields.r = v85->fields.r;
  v416.fields.b = *v386;
  v416.fields.g = *v385;
  UIWidget__set_color((UIWidget_o *)Instance, v416, 0);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_641;
  mPhaseObj = this->fields.mPhaseObj;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
    v176 = 0;
  else
    v176 = mPhaseObj;
  v380 = PhaseDetailedEntity;
  if ( (Instance & 1) != 0 )
    goto LABEL_343;
  Instance = (__int64)this->fields.mClearCountObj;
  if ( !Instance )
    goto LABEL_641;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  v177 = (Instance & 1) != 0 ? 0LL : v176;
  if ( (Instance & 1) != 0 )
    goto LABEL_343;
  Instance = QuestEntity__HasFlag(v380, 0x4000, 0);
  if ( (Instance & 1) != 0 )
    v266 = 0;
  else
    v266 = v177;
  if ( (Instance & 1) != 0 )
  {
    v178 = 0;
    mPhaseObj = v176;
  }
  else
  {
    Instance = QuestEntity__HasFlag(v380, 0x10000, 0);
    if ( (Instance & 1) != 0 )
      mPhaseObj = 0;
    else
      mPhaseObj = v266;
    if ( (Instance & 1) == 0 )
    {
      if ( v378 == 2 )
      {
        Instance = QuestEntity__HasFlag(v380, 512, 0);
        if ( (Instance & 1) != 0 )
        {
LABEL_343:
          v178 = 0;
          goto LABEL_344;
        }
        v266 = mPhaseObj;
      }
      Instance = QuestEntity__HasFlag(v380, 0x4000000, 0);
      if ( (Instance & 1) != 0 )
      {
        v178 = 0;
      }
      else
      {
        Instance = QuestEntity__HasFlag(v380, 0x2000000000LL, 0);
        v178 = (Instance & 1) == 0 && v383;
      }
      mPhaseObj = v266;
      goto LABEL_344;
    }
    v178 = 0;
    mPhaseObj = v177;
  }
LABEL_344:
  *(_QWORD *)questTypea = quest_info_k__BackingField;
  if ( !mPhaseObj )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive(mPhaseObj, v178, 0);
  Instance = (__int64)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    QuestBoardListViewItemDraw__InitPhase(this, isDoubleItemConsume, isDoubleItemConsumeQp, isTripleItemConsume, v179);
    afterClear = v380->fields.afterClear;
    CurrentPhaseInfo = MapControl_QuestInfo__GetCurrentPhaseInfo(quest_info_k__BackingField, 0);
    if ( !CurrentPhaseInfo )
      goto LABEL_352;
    ReferToQuestPhase = MapControl_PhaseInfo__GetReferToQuestPhase(CurrentPhaseInfo, 0);
    if ( ReferToQuestPhase < 1 )
      goto LABEL_352;
    v183 = ReferToQuestPhase;
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_641;
    QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v183, 0);
    if ( QuestInfo )
    {
      v185 = QuestInfo;
      v186 = MapControl_QuestInfo__GetPhaseMax(QuestInfo, 0);
      p_questPhase = &v185->fields.questPhase;
    }
    else
    {
LABEL_352:
      v188 = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0);
      p_questPhase = &quest_info_k__BackingField->fields.questPhase;
      v186 = v188;
    }
    v189 = *p_questPhase;
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    }
    v191 = *(struct QuestBoardListViewItemDraw_StaticFields **)(Instance + 184);
    PHASE_NORMAL_MAX = v191->PHASE_NORMAL_MAX;
    v193 = afterClear == 2 && v373;
    v194 = v186 > PHASE_NORMAL_MAX;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      v191 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v191->PHASE_NORMAL_MAX;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        v191 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
    }
    v195 = 496;
    if ( v186 > PHASE_NORMAL_MAX )
      v195 = 504;
    v196 = afterClear - 3;
    v197 = 0;
    v198 = -*(int32_t *)((char *)&v191->POS_Y_ITVL_AREA + v195);
    v199 = v186 - 1;
    while ( 1 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v197 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        break;
      mPhaseSp = this->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_641;
      if ( (unsigned int)v197 >= LODWORD(mPhaseSp->max_length) )
        goto LABEL_698;
      v201 = &mPhaseSp->obj.klass + v197;
      v202 = (UISprite_o *)v201[4];
      if ( !v202 )
        goto LABEL_641;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v201[4], 0);
      if ( !Instance )
        goto LABEL_641;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v197 < v186, 0);
      if ( v197 < v186 )
      {
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 v203,
                                 v194,
                                 (v197 < v189) & (unsigned __int8)v383,
                                 v199 == v197,
                                 v193,
                                 (v199 == v197) & (unsigned __int8)(v196 < 2),
                                 v204);
        UISprite__set_spriteName(v202, PhaseArrowSpriteName, 0);
        v417.fields.a = 1.0;
        v417.fields.r = v17;
        v417.fields.g = v17;
        v417.fields.b = v17;
        UIWidget__set_color((UIWidget_o *)v202, v417, 0);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v206,
                                   v194,
                                   v199 == v197 && v196 < 2,
                                   v207);
        Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v202, 0);
        if ( !Instance )
          goto LABEL_641;
        v198 += PhaseArrowIntervalSize;
        v407.fields.x = (float)v198;
        v407.fields.y = 0.0;
        v407.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v407, 0);
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v202->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v202,
          v202->klass->vtable._33_MakePixelPerfect.method);
      }
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      ++v197;
    }
  }
  Instance = (__int64)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_641;
  v209 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  Instance = QuestEntity__HasFlag(v380, 0x4000000, 0);
  if ( !v209 )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive(v209, Instance & 1, 0);
  Instance = (__int64)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v210 = v378;
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v211 = QuestBoardListViewItemDraw_TypeInfo;
    mDamageRecordSp = this->fields.mDamageRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v211 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v211->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mDamageRecordSp, QUEST_BOARD_DAMAGE_RECODE_NAME, 0);
    v214 = DataManager__GetMasterData_object_(
             v377,
             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v214 )
      goto LABEL_641;
    MaxTurnDamage = UserQuestRecordMaster__GetMaxTurnDamage(
                      (UserQuestRecordMaster_o *)v214,
                      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                      v380->fields.id,
                      0);
    mDamageRecordLb = this->fields.mDamageRecordLb;
    knockdownNum = MaxTurnDamage;
    v223 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum, v217, v218, v219, v220, v221, v222);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v223, 0);
    if ( !mDamageRecordLb )
      goto LABEL_641;
    UILabel__set_text(mDamageRecordLb, (System_String_o *)Instance, 0);
    Instance = (__int64)this->fields.mDamageRecordSp;
    if ( !Instance )
      goto LABEL_641;
    v418.fields.a = *v384;
    v418.fields.b = *v386;
    v418.fields.r = *v382;
    v418.fields.g = *v385;
    UIWidget__set_color((UIWidget_o *)Instance, v418, 0);
    Instance = (__int64)this->fields.mDamageRecordLb;
    if ( !Instance )
      goto LABEL_641;
    v419.fields.a = *v384;
    v419.fields.b = *v386;
    v419.fields.g = *v385;
    v419.fields.r = *v382;
    UIWidget__set_color((UIWidget_o *)Instance, v419, 0);
  }
  Instance = (__int64)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_641;
  v224 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  Instance = QuestEntity__HasFlag(v380, 0x2000000000LL, 0);
  if ( !v224 )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive(v224, Instance & 1, 0);
  Instance = (__int64)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    v225 = QuestBoardListViewItemDraw_TypeInfo;
    mKnockdownRecordSp = this->fields.mKnockdownRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v225 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v225->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mKnockdownRecordSp, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0);
    v228 = (QuestKnockdownInfo_o *)sub_1C372A4(QuestKnockdownInfo_TypeInfo);
    QuestKnockdownInfo___ctor(v228, 0);
    v229 = DataManager__GetMasterData_object_(
             v377,
             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v229 )
      goto LABEL_641;
    UserQuestRecordMaster__GetKnockdownRecordinfo(
      (UserQuestRecordMaster_o *)v229,
      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
      v380->fields.id,
      v228,
      0);
    mKnockdownRecordCountLb = this->fields.mKnockdownRecordCountLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10828/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, 0);
    if ( !v228 )
      goto LABEL_641;
    v237 = (System_String_o *)Instance;
    knockdownNum = v228->fields.knockdownNum;
    v238 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum, v231, v232, v233, v234, v235, v236);
    Instance = (__int64)System_String__Format(v237, v238, 0);
    if ( !mKnockdownRecordCountLb )
      goto LABEL_641;
    UILabel__set_text(mKnockdownRecordCountLb, (System_String_o *)Instance, 0);
    mKnockdownRecordDamageLb = this->fields.mKnockdownRecordDamageLb;
    v240 = LocalizationManager__Get((System_String_o *)StringLiteral_10829/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, 0);
    totalDamage = v228->fields.totalDamage;
    v247 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &totalDamage, v241, v242, v243, v244, v245, v246);
    Instance = (__int64)System_String__Format(v240, v247, 0);
    if ( !mKnockdownRecordDamageLb )
      goto LABEL_641;
    UILabel__set_text(mKnockdownRecordDamageLb, (System_String_o *)Instance, 0);
    mKnockdownRecordPlusLb = this->fields.mKnockdownRecordPlusLb;
    v249 = LocalizationManager__Get((System_String_o *)StringLiteral_10831/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, 0);
    v251 = Method_System_Array_Empty_object___;
    v252 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v252 )
    {
      sub_1C877C8(Method_System_Array_Empty_object___);
      v252 = v251[7];
    }
    v253 = *(_QWORD *)(v252 + 16);
    if ( (*(_BYTE *)(v253 + 309) & 1) == 0 )
      v253 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v253 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v253);
    v254 = *(_QWORD *)(v251[7] + 16LL);
    if ( (*(_BYTE *)(v254 + 309) & 1) == 0 )
      v254 = sub_1C8776C(inited);
    Instance = (__int64)System_String__Format_63603084(v249, **(System_Object_array ***)(v254 + 184), 0);
    if ( !mKnockdownRecordPlusLb )
      goto LABEL_641;
    UILabel__set_text(mKnockdownRecordPlusLb, (System_String_o *)Instance, 0);
    mKnockdownRecordDamageNameLb = this->fields.mKnockdownRecordDamageNameLb;
    v256 = LocalizationManager__Get((System_String_o *)StringLiteral_10830/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, 0);
    v258 = Method_System_Array_Empty_object___;
    v259 = v256;
    v260 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v260 )
    {
      sub_1C877C8(Method_System_Array_Empty_object___);
      v260 = v258[7];
    }
    v261 = *(_QWORD *)(v260 + 16);
    if ( (*(_BYTE *)(v261 + 309) & 1) == 0 )
      v261 = sub_1C8776C(v257);
    if ( !*(_DWORD *)(v261 + 224) )
      v257 = j_il2cpp_runtime_class_init_0(v261);
    v262 = *(_QWORD *)(v258[7] + 16LL);
    if ( (*(_BYTE *)(v262 + 309) & 1) == 0 )
      v262 = sub_1C8776C(v257);
    Instance = (__int64)System_String__Format_63603084(v259, **(System_Object_array ***)(v262 + 184), 0);
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
    if ( v228->fields.totalDamage <= 0 )
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0);
      Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_641;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !this->fields.mKnockdownRecordPlusLb )
        goto LABEL_641;
      v263 = (UnityEngine_GameObject_o *)Instance;
      v267 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.mKnockdownRecordPlusLb, 0);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(v267, 0);
      v269 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v269 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = LocalPositionX
                                        + (float)v269->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
    }
    else
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0);
      Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_641;
      v263 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      v264 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v264 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v264->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
    }
    GameObjectExtensions__SetLocalPositionX(v263, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0);
    Instance = (__int64)this->fields.mKnockdownRecordSp;
    if ( !Instance )
      goto LABEL_641;
    v420.fields.a = *v384;
    v420.fields.b = *v386;
    v420.fields.r = *v382;
    v420.fields.g = *v385;
    UIWidget__set_color((UIWidget_o *)Instance, v420, 0);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_641;
    v421.fields.a = *v384;
    v421.fields.b = *v386;
    v421.fields.g = *v385;
    v421.fields.r = *v382;
    UIWidget__set_color((UIWidget_o *)Instance, v421, 0);
    Instance = (__int64)this->fields.mKnockdownRecordDamageNameLb;
    if ( !Instance )
      goto LABEL_641;
    v422.fields.a = *v384;
    v422.fields.b = *v386;
    v422.fields.g = *v385;
    v422.fields.r = *v382;
    UIWidget__set_color((UIWidget_o *)Instance, v422, 0);
    Instance = (__int64)this->fields.mKnockdownRecordPlusLb;
    if ( !Instance )
      goto LABEL_641;
    v423.fields.a = *v384;
    v423.fields.b = *v386;
    v423.fields.g = *v385;
    v423.fields.r = *v382;
    UIWidget__set_color((UIWidget_o *)Instance, v423, 0);
    Instance = (__int64)this->fields.mKnockdownRecordCountLb;
    if ( !Instance )
      goto LABEL_641;
    v424.fields.a = *v384;
    v424.fields.b = *v386;
    v424.fields.g = *v385;
    v424.fields.r = *v382;
    UIWidget__set_color((UIWidget_o *)Instance, v424, 0);
  }
  id = v380->fields.id;
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
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    v271 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v271 = TerminalSceneComponent_TypeInfo;
    }
    v210 = v378;
    Instance = (__int64)v271->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_641;
    if ( TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0) == v380->fields.id )
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
                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    v272 = Instance;
    if ( v378 == 2 )
    {
      Instance = QuestEntity__HasFlag(v380, 0x400000000000000LL, 0);
      v273 = (unsigned int)Instance & v376;
    }
    else
    {
      v273 = 1;
    }
    if ( !v272 )
      goto LABEL_641;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v272 + 392LL))(
      v272,
      v273,
      *(_QWORD *)(*(_QWORD *)v272 + 400LL));
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
  v275 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  GameObjectExtensions__SetLocalScale(v275, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !Instance )
    goto LABEL_641;
  v276 = (UnityEngine_Behaviour_o *)Instance;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v377,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_641;
  Instance = QuestPhaseDetailMaster__TryGetEntity(
               (QuestPhaseDetailMaster_o *)Instance,
               &v390,
               *(_DWORD *)(*(_QWORD *)questTypea + 16LL),
               questPhase,
               0);
  if ( (Instance & 1) == 0 )
    goto LABEL_503;
  if ( !v390 )
    goto LABEL_641;
  if ( !v390->fields.boardMessage )
    goto LABEL_503;
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_641;
  UILabel__set_maxLineCount((UILabel_o *)Instance, 0, 0);
  if ( !v390 )
    goto LABEL_641;
  boardMessage = v390->fields.boardMessage;
  if ( !boardMessage )
    goto LABEL_641;
  list = (System_Collections_Generic_IEnumerable_TSource__o *)boardMessage->fields.list;
  if ( list
    && (Instance = (__int64)System_Linq_Enumerable__ToArray_object_(
                              list,
                              (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0
    && (v280 = *(_QWORD *)(Instance + 24), v281 = Instance, v280) )
  {
    if ( (_DWORD)v280 == 1 )
    {
      v282 = *(_QWORD *)(Instance + 32);
      if ( !v282 )
        goto LABEL_641;
      Instance = *(_QWORD *)(v282 + 16);
      if ( !Instance )
        goto LABEL_641;
      Instance = QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                   (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)Instance,
                   this->fields.mOptionRestrinctionLb,
                   (float)this->fields.restrictionDefaultWidth,
                   0);
      if ( !*(_DWORD *)(v281 + 24) )
        goto LABEL_698;
      v283 = *(_QWORD *)(v281 + 32);
      if ( !v283 )
        goto LABEL_641;
      v284 = Instance;
      Instance = *(_QWORD *)(v283 + 24);
      if ( !Instance )
        goto LABEL_641;
      v285 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
               (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)Instance,
               this->fields.mOptionRestrinctionSp,
               0);
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v276, 1, 0);
      if ( QuestEntity__HasFlag(v380, 0x400000000000000LL, 0) )
      {
        v361 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v361 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v361->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &this->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v276,
        this->fields.mOptionRestrinctionLb,
        this->fields.mOptionRestrinctionSp,
        (QuestPhaseDetailEntity_BoardInfo_array *)v281,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0);
      v285 = 1;
      v284 = 1;
    }
    v286 = (_DWORD)v280 != 1;
  }
  else
  {
LABEL_503:
    v284 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
             this,
             *(_DWORD *)(*(_QWORD *)questTypea + 16LL),
             questPhase,
             v277);
    v286 = 0;
    v285 = 0;
  }
  v289 = QuestEntity__HasFlag(v380, 0x40000000, 0);
  if ( v289 )
  {
    Instance = (__int64)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_641;
    mCostConsumeBattleWinSp = (Il2CppObject *)this->fields.mCostConsumeBattleWinSp;
    v291 = *(_QWORD *)(Instance + 16);
    v292 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v291 )
      goto LABEL_641;
    v293 = *(int *)(Instance + 24);
    if ( (unsigned int)v293 >= *(_DWORD *)(v291 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        mCostConsumeBattleWinSp,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
    }
    else
    {
      v294 = v291 + 8 * v293;
      *(_DWORD *)(Instance + 24) = v293 + 1;
      *(_QWORD *)(v294 + 32) = mCostConsumeBattleWinSp;
      sub_1C36FFC((CGThumbnailListItem_o *)(v294 + 32), (int32_t)mCostConsumeBattleWinSp, v287, v288);
    }
    v295 = QuestEntity__HasFlag(v380, 0x80000000000LL, 0) || QuestEntity__HasFlag(v380, 0x4000, 0);
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v296 = this->fields.mCostConsumeBattleWinSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v296 )
      goto LABEL_641;
    v297 = 1016;
    if ( !v295 )
      v297 = 1008;
    UISprite__set_spriteName(
      v296,
      *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v297),
      0);
  }
  Instance = (__int64)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v289, 0);
  Instance = (__int64)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_641;
  v425.fields.a = *v384;
  v425.fields.b = *v386;
  v425.fields.g = *v385;
  v425.fields.r = *v382;
  UIWidget__set_color((UIWidget_o *)Instance, v425, 0);
  if ( v390 && QuestPhaseDetailEntity__HasFlag(v390, 0x400000, 0) )
  {
    v298 = QuestBoardListViewItemDraw_TypeInfo;
    mOptionPreBattleSp = this->fields.mOptionPreBattleSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v298 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v298->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0);
    Instance = (__int64)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_641;
    v303 = (Il2CppObject *)this->fields.mOptionPreBattleSp;
    v304 = *(_QWORD *)(Instance + 16);
    v305 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v304 )
      goto LABEL_641;
    v306 = *(int *)(Instance + 24);
    if ( (unsigned int)v306 >= *(_DWORD *)(v304 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        v303,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v305[4] + 192LL) + 112LL));
    }
    else
    {
      v307 = v304 + 8 * v306;
      *(_DWORD *)(Instance + 24) = v306 + 1;
      *(_QWORD *)(v307 + 32) = v303;
      sub_1C36FFC((CGThumbnailListItem_o *)(v307 + 32), (int32_t)v303, v301, v302);
    }
    v308 = 1;
  }
  else
  {
    v308 = 0;
  }
  Instance = (__int64)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v308, 0);
  Instance = (__int64)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_641;
  LODWORD(v426.fields.g) = dword_C0CB60[v210 == 2];
  LODWORD(v426.fields.r) = dword_C0DB80[v210 == 2];
  v426.fields.a = 1.0;
  v426.fields.b = v426.fields.g;
  UIWidget__set_color((UIWidget_o *)Instance, v426, 0);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v284 || v285, 0);
  Instance = QuestEntity__HasFlag(v380, 0x400000000000000LL, 0);
  if ( !this->fields.mOptionRestrinctionLb )
    goto LABEL_641;
  v310 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb,
                        0);
  if ( !Instance )
    goto LABEL_641;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_641;
  v311 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  v312 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v312 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v313 = v312->static_fields;
  if ( (v310 & 1) == 0 )
  {
    GameObjectExtensions__SetLocalPosition(v311, v313->RESTRICTION_POS_DEFAULT, 0);
    v318 = this->fields.mOptionRestrinctionLb;
    if ( !v318 )
      goto LABEL_641;
    if ( v318->fields.mWidth <= this->fields.restrictionDefaultWidth )
    {
      mSpacingX = v318->fields.mSpacingX;
      v322 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v322 = QuestBoardListViewItemDraw_TypeInfo;
      }
      RESTRICTION_FONT_SPACING_DEFAULT = v322->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == RESTRICTION_FONT_SPACING_DEFAULT )
        goto LABEL_570;
      if ( !v322->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v322);
        RESTRICTION_FONT_SPACING_DEFAULT = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v319 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v319 = QuestBoardListViewItemDraw_TypeInfo;
      }
      RESTRICTION_FONT_SPACING_DEFAULT = v319->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(this, RESTRICTION_FONT_SPACING_DEFAULT, v317);
LABEL_570:
    if ( v286 )
      goto LABEL_574;
    Instance = (__int64)this->fields.mOptionRestrinctionLb;
    if ( !Instance )
      goto LABEL_641;
    restrictionDefaultWidth = this->fields.restrictionDefaultWidth;
    goto LABEL_573;
  }
  GameObjectExtensions__SetLocalPosition(v311, v313->RESTRICTION_POS_ALLOUT, 0);
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
    v314);
  if ( !v286 )
  {
    v315 = this->fields.mOptionRestrinctionLb;
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v315 )
      goto LABEL_641;
    Instance = (__int64)v315;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
LABEL_573:
    UILabel__SetCondensedScale((UILabel_o *)Instance, restrictionDefaultWidth, 0, 0);
  }
LABEL_574:
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_641;
  v427.fields.b = *v386;
  v427.fields.r = *v382;
  v427.fields.a = *v384;
  v427.fields.g = *v385;
  UIWidget__set_color((UIWidget_o *)Instance, v427, 0);
  Instance = (__int64)this->fields.mOptionRestrinctionSp;
  if ( !Instance )
    goto LABEL_641;
  this->fields.optionRestrinctionOriginColor = *(struct UnityEngine_Color_o *)(Instance + 148);
  if ( v210 == 2 )
  {
    v428.fields.a = *(float *)(Instance + 160);
    v428.fields.r = *(float *)(Instance + 148) * 0.5;
    v428.fields.g = *(float *)(Instance + 152) * 0.5;
    v428.fields.b = *(float *)(Instance + 156) * 0.5;
    UIWidget__set_color((UIWidget_o *)Instance, v428, 0);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v377,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_641;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &questPhaseEntity, v380->fields.id, questPhase, 0);
  LOBYTE(classIds) = (_BYTE)questPhaseEntity;
  if ( questPhaseEntity )
  {
    classIds = questPhaseEntity->fields.classIds;
    if ( classIds )
      LOBYTE(classIds) = LODWORD(classIds->max_length) != 0;
  }
  v324 = ((unsigned __int8)classIds & v370) == 0;
  if ( !v324 && v378 == 2 )
    v324 = QuestEntity__HasFlag(v380, 2048, 0);
  Instance = (__int64)this->fields.mClassIconRoot;
  if ( !Instance )
    goto LABEL_641;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !v324, 0);
  Instance = (__int64)this->fields.mClassStrSp;
  if ( !Instance )
    goto LABEL_641;
  v429.fields.a = *v384;
  v429.fields.b = *v386;
  v429.fields.g = *v385;
  v429.fields.r = *v382;
  UIWidget__set_color((UIWidget_o *)Instance, v429, 0);
  if ( !v324 )
  {
    Instance = QuestBoardListViewItemDraw__IsUnknownWaveBattleClassIcon(v325, questPhaseEntity, v326);
    if ( (Instance & 1) != 0 )
    {
      mClassIcons = this->fields.mClassIcons;
      if ( !mClassIcons )
        goto LABEL_641;
      if ( LODWORD(mClassIcons->max_length) )
      {
        v341 = mClassIcons->m_Items[0];
        if ( !v341 )
          goto LABEL_641;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mClassIcons->m_Items[0], 0);
        if ( !Instance )
          goto LABEL_641;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        v342 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v342 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        ServantClassIconComponent__Set(v341, v342->static_fields->ENEMY_UNKNOWN_CLASSID, 0, 0);
        v430.fields.r = *v382;
        v430.fields.g = *v385;
        v430.fields.b = *v386;
        v430.fields.a = *v384;
        ServantClassIconComponent__SetColor(v341, v430, 0);
        v343 = this->fields.mClassIcons;
        if ( !v343 )
          goto LABEL_641;
        max_length = v343->max_length;
        if ( max_length <= 1 )
          goto LABEL_587;
        v345 = 1;
        while ( (unsigned int)v345 < LODWORD(v343->max_length) )
        {
          Instance = (__int64)v343->m_Items[v345];
          if ( Instance )
          {
            Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
              if ( max_length == ++v345 )
                goto LABEL_587;
              v343 = this->fields.mClassIcons;
              if ( v343 )
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
      v346 = this->fields.mClassIcons;
      if ( !v346 )
        goto LABEL_641;
      v347 = v346->max_length;
      v348 = v347 - 1;
      if ( v347 < 1 )
        goto LABEL_587;
      v349 = questPhaseEntity->fields.classIds;
      v350 = 0;
      while ( v350 < LODWORD(v346->max_length) )
      {
        v351 = (int)v350;
        v352 = &v346->obj.klass + (int)v350;
        v353 = (UnityEngine_Component_o *)v352[4];
        if ( !v353 )
          goto LABEL_641;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v352[4], 0);
        if ( !v349 )
          goto LABEL_641;
        if ( !Instance )
          goto LABEL_641;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)Instance,
          (int)v351 < SLODWORD(v349->max_length),
          0);
        Instance = (__int64)UnityEngine_Component__get_gameObject(v353, 0);
        if ( !Instance )
          goto LABEL_641;
        Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( (unsigned int)v351 >= LODWORD(v349->max_length) )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v353, v349->m_Items[v351], 0, 0);
          v431.fields.r = *v382;
          v431.fields.g = *v385;
          v431.fields.b = *v386;
          v431.fields.a = *v384;
          ServantClassIconComponent__SetColor((ServantClassIconComponent_o *)v353, v431, 0);
        }
        if ( v348 == (_DWORD)v351 )
          goto LABEL_587;
        v346 = this->fields.mClassIcons;
        v350 = v351 + 1;
        if ( !v346 )
          goto LABEL_641;
      }
    }
LABEL_698:
    sub_1C372BC(Instance);
  }
LABEL_587:
  v327 = v380;
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
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !Instance )
            goto LABEL_641;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    (ViewEnemyMaster_o *)Instance,
                                    *(_DWORD *)(*(_QWORD *)questTypea + 16LL),
                                    0);
          if ( EntityListFromQuestId
            && (v331 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                EntityListFromQuestId->max_length) )
          {
            v332 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v332 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            _9__337_1 = (System_Func_object__int__o *)v332->static_fields->__9__337_1;
            if ( !_9__337_1 )
            {
              if ( !v332->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v332);
                v332 = QuestBoardListViewItemDraw___c_TypeInfo;
              }
              v334 = (Il2CppObject *)v332->static_fields->__9;
              _9__337_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ViewEnemyEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__337_1,
                v334,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__337_1__,
                0);
              v335 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v335->__9__337_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__337_1;
              sub_1C36FFC((CGThumbnailListItem_o *)&v335->__9__337_1, (int32_t)_9__337_1, v336, v337);
            }
            v338 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                          v331,
                                                                          (System_Func_TSource__TResult__o *)_9__337_1,
                                                                          (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                                  v338,
                                  (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !this->fields.eventTarget )
              goto LABEL_641;
            v339 = (System_Int32_array *)Instance;
            UnityEngine_GameObject__SetActive(this->fields.eventTarget, 1, 0);
            Instance = (__int64)this->fields.eventTargetComponent;
            v327 = v380;
            if ( !Instance )
              goto LABEL_641;
            BoardOptionEventTargetComponent__CreateEnemyList(
              (BoardOptionEventTargetComponent_o *)Instance,
              *(_DWORD *)(*(_QWORD *)questTypea + 16LL),
              v339,
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
  if ( v399 && QuestExtensionEntity__IsQuestBoardFrameChange((QuestExtensionEntity_o *)v399, 0) )
  {
    mBoardFrame = this->fields.mBoardFrame;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    Instance = (__int64)v399;
    if ( !v399 )
      goto LABEL_641;
    QuestBoardFrameNamePrefix = QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardFrameNamePrefix;
    QuestBoardFrameName = QuestExtensionEntity__GetQuestBoardFrameName((QuestExtensionEntity_o *)v399, 0);
    v357 = System_String__Concat_63561656(QuestBoardFrameNamePrefix, QuestBoardFrameName, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(mBoardFrame, v357, 0);
    Instance = (__int64)this->fields.mBoardFrame;
    if ( !Instance )
      goto LABEL_641;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mBoardFrame;
    v327 = v380;
    if ( !Instance )
      goto LABEL_641;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_641;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  }
  if ( (v376 & (v378 == 2) & QuestEntity__HasFlag(v327, 0x400000000000000LL, 0)) != 0 )
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
        v360 = *(_DWORD *)(*(_QWORD *)questTypea + 16LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_40324848(v360, -1, 1, 0) )
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v7; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v9; // x21
  __int64 naturalAligment; // x9
  int32_t dispType; // w28
  int64_t writeMasterDataThread; // x23
  Il2CppObject *MasterData_object; // x25
  float v14; // s8
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v16; // x0
  System_String_o *RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v18; // x1
  System_String_o *v19; // x0
  QuestBoardListViewItemDraw_c *v20; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x25
  System_String_o *v22; // x0
  UISprite_o *mcBaseP; // x24
  System_String_o *v24; // x25
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x24
  float NEXT_POS_X_QUEST; // s0
  bool activeSelf; // w0
  const MethodInfo *v31; // x3
  QuestBoardListViewItemDraw_c *v32; // x8
  bool v33; // w24
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v35; // x9
  __int64 v36; // x11
  __int64 v37; // x10
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x4
  System_String_o *v42; // x23
  Il2CppObject *v43; // x22
  Il2CppObject *BattleName; // x0
  UILabel_o *mTitleNameLb; // x22
  QuestBoardListViewItemDraw_o *v46; // x0
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // x5
  const MethodInfo *v49; // x1
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  const MethodInfo *v52; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  int32_t v54; // w2
  int64_t *p_expireAt; // x8
  int64_t v56; // x22
  System_Collections_Generic_List_object__o *v57; // x21
  System_String_o *v58; // x24
  QuestBoardInformationText_o *v59; // x23
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  System_Collections_Generic_List_object__o *v66; // x23
  int32_t v67; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v69; // x8
  __int64 v70; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v72; // w9
  int32_t v73; // w8
  bool v74; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v76; // x21
  QuestBoardListViewItemDraw_o *v77; // x0
  const MethodInfo *v78; // x1
  int32_t v79; // [xsp+8h] [xbp-88h] BYREF
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3FBAB & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBAB = 1;
  }
  entity = 0;
  *(_QWORD *)fixedVal = 0;
  phasePresentData = 0;
  isNotItemConsume = 0;
  v79 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_150;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_150;
  v7 = Instance;
  Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_150;
  v9 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_150;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_151;
  }
  if ( !v7 )
    goto LABEL_150;
  dispType = quest_info_k__BackingField->fields.dispType;
  writeMasterDataThread = (int64_t)Instance[3].fields.writeMasterDataThread;
  MasterData_object = DataManager__GetMasterData_object_(
                        v7,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v9 || !MasterData_object )
    goto LABEL_150;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    v9->fields.id,
    0);
  Instance = (DataManager_o *)this->fields.mLabelObj;
  v14 = dispType == 2 ? 0.5 : 1.0;
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
    if ( v9->fields.bannerId < 1 )
      goto LABEL_62;
    v20 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v20 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v20->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v18 = System_Int32__ToString((int)v9 + 64, 0);
    v19 = QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v16 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v16 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = v16->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
    v79 = OverwriteBannerId_k__BackingField;
    v18 = System_Int32__ToString((int32_t)&v79, 0);
    v19 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v22 = System_String__Concat_63561656(v19, v18, 0);
  mcBaseP = this->fields.mcBaseP;
  v24 = v22;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(mcBaseP, v24, 0);
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
                                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_150;
  v85.fields.a = 1.0;
  v85.fields.r = v14;
  v85.fields.g = v14;
  v85.fields.b = v14;
  UIWidget__set_color((UIWidget_o *)Instance, v85, 0);
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
    v27 = QuestBoardListViewItemDraw_TypeInfo;
    v28 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v27 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v28, v27->static_fields->NEXT_POS_X_QUEST, 0);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_150;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_150;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_150;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)&Instance->fields.writeMasterDataThread = NEXT_POS_X_QUEST;
    *((float *)&Instance->fields.writeMasterDataThreadEnd + 1) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v25);
  Instance = (DataManager_o *)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  v32 = QuestBoardListViewItemDraw_TypeInfo;
  v33 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v32 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v32->static_fields;
  v35 = 100;
  v36 = 104;
  if ( v33 )
    v35 = 124;
  v37 = 108;
  if ( v33 )
  {
    v36 = 128;
    v37 = 132;
  }
  LODWORD(v84.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v35);
  LODWORD(v84.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v36);
  LODWORD(v84.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v37);
  QuestBoardListViewItemDraw__SetNewIcon(this, v84, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v31);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v39);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v38);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v9, writeMasterDataThread, v41);
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v40);
    Instance = (DataManager_o *)QuestEntity__getQuestName(v9, 0);
    if ( !Instance )
      goto LABEL_150;
    v42 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25101/*"{0}"*/, 0) )
    {
      v43 = DataManager__GetMasterData_object_(
              v7,
              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (DataManager_o *)QuestEntity__getServantId(v9, 0);
      if ( !v43 )
        goto LABEL_150;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v43,
                                    (int32_t)Instance,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_150;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
      v42 = System_String__Format(v42, BattleName, 0);
    }
    Instance = (DataManager_o *)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_150;
    UILabel__set_text((UILabel_o *)Instance, v42, 0);
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
  v86.fields.a = 1.0;
  v86.fields.r = v14;
  v86.fields.g = v14;
  v86.fields.b = v14;
  UIWidget__set_color((UIWidget_o *)Instance, v86, 0);
  QuestBoardListViewItemDraw__GetPhasePresentGiftData(
    v46,
    &phasePresentData,
    v9,
    quest_info_k__BackingField->fields.questPhase,
    v47);
  v87.fields.a = 1.0;
  v87.fields.r = v14;
  v87.fields.g = v14;
  v87.fields.b = v14;
  QuestBoardListViewItemDraw__SetupRewardIconAll(
    this,
    quest_info_k__BackingField,
    entity,
    phasePresentData,
    dispType == 2,
    v87,
    v48);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v49);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0);
  mInfoTextList = this->fields.mInfoTextList;
  v54 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetCampaignText(
                                this,
                                quest_info_k__BackingField->fields.questId,
                                v54,
                                0,
                                &fixedVal[1],
                                fixedVal,
                                &isNotItemConsume,
                                v52);
  if ( !mInfoTextList )
    goto LABEL_150;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
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
  v56 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (DataManager_o *)QuestEntity__HasFlag(v9, 32, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v57 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
      v59 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v59, v58, v56, 0, 1, 0, 0);
      if ( !v57 )
        goto LABEL_150;
      items = v57->fields._items;
      v63 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v57->fields._version;
      if ( !items )
        goto LABEL_150;
      size = v57->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v57,
          (Il2CppObject *)v59,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &items->obj.klass + size;
        v57->fields._size = size + 1;
        v65[4] = (Il2CppClass *)v59;
        sub_1C36FFC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v59, v60, v61);
      }
    }
  }
LABEL_127:
  v66 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v66 )
    goto LABEL_150;
  v67 = v66->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v67 < 1 )
    goto LABEL_136;
  v69 = this->fields.mListViewObject;
  if ( !v69 )
    goto LABEL_150;
  Instance = (DataManager_o *)v69->fields.manager;
  if ( !Instance )
    goto LABEL_150;
  v70 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)v70
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[v70 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_151:
    sub_1C37574(Instance);
    QuestBoardListViewItemDraw__ResetInfoTextList(v77, v78);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v67, 0);
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                v66,
                                AlphaAnimCnt,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
  v72 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v73 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v72;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v73;
LABEL_136:
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  v74 = v67 > 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v74, 0);
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_150;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v74, 0);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0, 0) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    v76 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v76 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v76,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)&Instance[1].fields._DispLog + 268LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        0);
      return;
    }
LABEL_150:
    sub_1C372B4(Instance);
  }
}


void QuestBoardListViewItemDraw__SetItemOfShortcut(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  int32_t info_kind_k__BackingField; // w28
  DataManager_o *v8; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v10; // x21
  __int64 naturalAligment; // x9
  int32_t dispType; // w27
  int64_t writeMasterDataThread; // x23
  Il2CppObject *MasterData_object; // x24
  float v15; // s8
  UISprite_o *mcBaseP; // x24
  __int64 v17; // x9
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x24
  float NEXT_POS_X_QUEST; // s0
  bool activeSelf; // w0
  const MethodInfo *v24; // x3
  QuestBoardListViewItemDraw_c *v25; // x8
  bool v26; // w24
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v28; // x9
  __int64 v29; // x11
  __int64 v30; // x10
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x4
  System_String_o *v35; // x23
  Il2CppObject *v36; // x24
  Il2CppObject *BattleName; // x0
  UILabel_o *mTitleNameLb; // x23
  int32_t ServantId; // w23
  UILabel_o *mTitleShortcutLb; // x22
  const MethodInfo *v41; // x5
  QuestBoardListViewItemDraw_c *v42; // x0
  UISprite_o *mLabelFaceMaskShortcutSp; // x22
  _BOOL8 v44; // x0
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x5
  const MethodInfo *v47; // x1
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  const MethodInfo *v50; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  int32_t v52; // w2
  int64_t *p_expireAt; // x8
  int64_t v54; // x22
  System_Collections_Generic_List_object__o *v55; // x21
  System_String_o *v56; // x24
  QuestBoardInformationText_o *v57; // x23
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Collections_Generic_List_object__o *v64; // x23
  int32_t v65; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v67; // x8
  __int64 v68; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v70; // w9
  int32_t v71; // w8
  bool v72; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v74; // x21
  QuestBoardListViewItemDraw_o *v75; // x0
  QuestBoardListViewItem_o *v76; // x1
  const MethodInfo *v77; // x2
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3FBAA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBAA = 1;
  }
  entity = 0;
  *(_QWORD *)fixedVal = 0;
  phasePresentData = 0;
  isNotItemConsume = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_152;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_152;
  info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
  v8 = Instance;
  Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_152;
  v10 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_152;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_153;
  }
  if ( !v8 )
    goto LABEL_152;
  dispType = quest_info_k__BackingField->fields.dispType;
  writeMasterDataThread = (int64_t)Instance[3].fields.writeMasterDataThread;
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v10 || !MasterData_object )
    goto LABEL_152;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    v10->fields.id,
    0);
  Instance = (DataManager_o *)this->fields.mLabelObj;
  v15 = dispType == 2 ? 0.5 : 1.0;
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
  v17 = 1096;
  if ( info_kind_k__BackingField == 2 )
    v17 = 1088;
  UISprite__set_spriteName(
    mcBaseP,
    *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v17),
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
                                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_152;
  v83.fields.a = 1.0;
  v83.fields.r = v15;
  v83.fields.g = v15;
  v83.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)Instance, v83, 0);
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
    v20 = QuestBoardListViewItemDraw_TypeInfo;
    v21 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v20 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v21, v20->static_fields->NEXT_POS_X_QUEST, 0);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_152;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_152;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_152;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)&Instance->fields.writeMasterDataThread = NEXT_POS_X_QUEST;
    *((float *)&Instance->fields.writeMasterDataThreadEnd + 1) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v18);
  Instance = (DataManager_o *)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  v25 = QuestBoardListViewItemDraw_TypeInfo;
  v26 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v25 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v25->static_fields;
  v28 = 100;
  v29 = 104;
  if ( v26 )
    v28 = 124;
  v30 = 108;
  if ( v26 )
  {
    v29 = 128;
    v30 = 132;
  }
  LODWORD(v82.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v28);
  LODWORD(v82.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v29);
  LODWORD(v82.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v30);
  QuestBoardListViewItemDraw__SetNewIcon(this, v82, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v24);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v32);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v31);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v10, writeMasterDataThread, v34);
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v33);
    Instance = (DataManager_o *)QuestEntity__getQuestName(v10, 0);
    if ( !Instance )
      goto LABEL_152;
    v35 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25101/*"{0}"*/, 0) )
    {
      v36 = DataManager__GetMasterData_object_(
              v8,
              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (DataManager_o *)QuestEntity__getServantId(v10, 0);
      if ( !v36 )
        goto LABEL_152;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v36,
                                    (int32_t)Instance,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_152;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
      v35 = System_String__Format(v35, BattleName, 0);
    }
    Instance = (DataManager_o *)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_152;
    UILabel__set_text((UILabel_o *)Instance, v35, 0);
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
  v84.fields.a = 1.0;
  v84.fields.r = v15;
  v84.fields.g = v15;
  v84.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)Instance, v84, 0);
  ServantId = QuestEntity__getServantId(v10, 0);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v8,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_152;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                ServantId,
                                (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v85.fields.a = 1.0;
    v85.fields.r = v15;
    v85.fields.g = v15;
    v85.fields.b = v15;
    UIWidget__set_color((UIWidget_o *)Instance, v85, 0);
  }
  else
  {
    if ( !mTitleShortcutLb )
      goto LABEL_152;
    UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v42 = QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskShortcutSp = this->fields.mLabelFaceMaskShortcutSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v42 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v86.fields.a = 1.0;
  v86.fields.r = v15;
  v86.fields.g = v15;
  v86.fields.b = v15;
  v44 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          v10,
          mLabelFaceMaskShortcutSp,
          v42->static_fields->SHORTCUT_FACE_MASK_SP_W,
          v42->static_fields->SHORTCUT_FACE_MASK_SPNAME,
          v86,
          v41);
  QuestBoardListViewItemDraw__GetPhasePresentGiftData(
    (QuestBoardListViewItemDraw_o *)v44,
    &phasePresentData,
    v10,
    quest_info_k__BackingField->fields.questPhase,
    v45);
  v87.fields.a = 1.0;
  v87.fields.r = v15;
  v87.fields.g = v15;
  v87.fields.b = v15;
  QuestBoardListViewItemDraw__SetupRewardIconAll(
    this,
    quest_info_k__BackingField,
    entity,
    phasePresentData,
    dispType == 2,
    v87,
    v46);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v47);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0);
  mInfoTextList = this->fields.mInfoTextList;
  v52 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetCampaignText(
                                this,
                                quest_info_k__BackingField->fields.questId,
                                v52,
                                0,
                                &fixedVal[1],
                                fixedVal,
                                &isNotItemConsume,
                                v50);
  if ( !mInfoTextList
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)mInfoTextList,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__),
        (Instance = (DataManager_o *)this->fields.mRarePrismSp) == 0)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0 )
  {
LABEL_152:
    sub_1C372B4(Instance);
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
  v54 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (DataManager_o *)QuestEntity__HasFlag(v10, 32, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v55 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
      v57 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v57, v56, v54, 0, 1, 0, 0);
      if ( !v55 )
        goto LABEL_152;
      items = v55->fields._items;
      v61 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v55->fields._version;
      if ( !items )
        goto LABEL_152;
      size = v55->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v55,
          (Il2CppObject *)v57,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        v55->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v57;
        sub_1C36FFC((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v57, v58, v59);
      }
    }
  }
LABEL_129:
  v64 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v64 )
    goto LABEL_152;
  v65 = v64->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v65 < 1 )
    goto LABEL_138;
  v67 = this->fields.mListViewObject;
  if ( !v67 )
    goto LABEL_152;
  Instance = (DataManager_o *)v67->fields.manager;
  if ( !Instance )
    goto LABEL_152;
  v68 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)v68
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[v68 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_153:
    sub_1C37574(Instance);
    QuestBoardListViewItemDraw__SetItemOfQuest(v75, v76, v77);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v65, 0);
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                v64,
                                AlphaAnimCnt,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
  v70 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v71 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v70;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v71;
LABEL_138:
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  v72 = v65 > 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v72, 0);
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_152;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v72, 0);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0, 0) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    v74 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v74 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v74,
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  DataManager_o *v10; // x23
  QuestEntity_o *PhaseDetailedEntity; // x22
  unsigned int v12; // w26
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x9
  int32_t dispType; // w27
  int64_t v16; // x28
  bool HasFlag; // w0
  float v18; // s0
  bool v19; // w27
  Il2CppObject *MasterData_object; // x23
  int32_t questId; // w23
  bool IsQuestClear_40324848; // w0
  int32_t questPhase; // w23
  bool v24; // w25
  int32_t PhaseMax; // w8
  QuestBoardListViewItemDraw_c *v26; // x0
  UnityEngine_GameObject_o *mCostObj; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  QuestBoardListViewItemDraw_c *v31; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UISprite_o *v35; // x29
  System_String_o *v36; // x24
  UISprite_o *v37; // x24
  System_String_o *QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x29
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  UISprite_o *mcBaseP; // x28
  System_String_o *SHOHI_SP_NAME_WAR_BOARD; // x1
  UISprite_o *mShohiSp; // x28
  UISprite_o *v44; // x28
  __int64 v45; // x8
  unsigned int v46; // w9
  System_String_o *v47; // x24
  System_String_o *v48; // x0
  System_String_o *v49; // x24
  const MethodInfo *v50; // x3
  UnityEngine_GameObject_o *v51; // x0
  QuestBoardListViewItemDraw_c *v52; // x8
  UnityEngine_GameObject_o *v53; // x28
  float NEXT_POS_X_QUEST; // s0
  int32_t v55; // w1
  bool activeSelf; // w0
  const MethodInfo *v57; // x3
  QuestBoardListViewItemDraw_c *v58; // x8
  bool v59; // w28
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float *p_x; // x9
  float *p_y; // x10
  float *p_z; // x11
  const MethodInfo *v64; // x2
  UnityEngine_GameObject_o *v65; // x28
  _BOOL8 v66; // x0
  const MethodInfo *v67; // x5
  QuestBoardListViewItemDraw_c *v68; // x0
  System_String_o *RecommendLv; // x0
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x2
  QuestBoardListViewItemDraw_o *v72; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x27
  int32_t z_low; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v76; // x5
  bool v77; // w0
  const MethodInfo *v78; // x3
  UILabel_o *mTitleNameLb; // x27
  const MethodInfo *v80; // x4
  QuestBoardListViewItemDraw_o *v81; // x0
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x2
  UISprite_o *mLabelNameSp; // x27
  QuestBoardListViewItemDraw_o *v85; // x0
  const MethodInfo *v86; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v88; // x24
  const MethodInfo *v89; // x3
  UILabel_o *v90; // x24
  QuestBoardListViewItemDraw_o *v91; // x0
  const MethodInfo *v92; // x4
  const MethodInfo *v93; // x5
  const MethodInfo *v94; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x24
  const MethodInfo *v96; // x7
  int64_t *p_expireAt; // x8
  int64_t v98; // x25
  System_Collections_Generic_List_object__o *v99; // x24
  System_String_o *v100; // x27
  QuestBoardInformationText_o *v101; // x26
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  struct System_Object_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  Il2CppClass **v107; // x0
  System_Collections_Generic_List_object__o *v108; // x26
  int32_t v109; // w25
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *v111; // x8
  __int64 v112; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v114; // w9
  int32_t v115; // w8
  bool v116; // w25
  WarBoardQuestEntity_o *v117; // x0
  WarBoardQuestEntity_o *v118; // x21
  UILabel_o *mBoardMessage; // x21
  __int64 v120; // x8
  const MethodInfo *v121; // [xsp+10h] [xbp-B0h]
  int64_t checkTime; // [xsp+20h] [xbp-A0h]
  int32_t phase; // [xsp+2Ch] [xbp-94h]
  int32_t v124; // [xsp+30h] [xbp-90h]
  bool isNotItemConsume; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t fixedVal[2]; // [xsp+38h] [xbp-88h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+40h] [xbp-80h] BYREF
  bool isTripleItemConsume; // [xsp+4Ch] [xbp-74h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+50h] [xbp-70h] BYREF
  bool isDoubleItemConsume; // [xsp+54h] [xbp-6Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FBB0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardQuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_1C37058(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass338_0__SetItemOfWarBoard_b__0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass338_0_TypeInfo);
    sub_1C37058(&StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBB0 = 1;
  }
  entity = 0;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  *(_QWORD *)fixedVal = 0;
  phasePresentData = 0;
  isNotItemConsume = 0;
  v5 = sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass338_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass338_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass338_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_205;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_205;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_205;
  v10 = (DataManager_o *)Instance;
  Instance = MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0);
  if ( !Instance )
    goto LABEL_205;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0);
  Instance = (void *)MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0);
  if ( !v10 )
    goto LABEL_205;
  v12 = (unsigned int)Instance;
  Instance = DataManager__GetMasterData_object_(
               v10,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    sub_1C37574(Instance);
    goto LABEL_207;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  v16 = *((_QWORD *)Instance + 73);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2, 0);
  v18 = 1.0;
  if ( dispType == 2 )
    v18 = 0.5;
  *(float *)(v5 + 24) = v18;
  *(float *)(v5 + 28) = v18;
  *(float *)(v5 + 32) = v18;
  *(_DWORD *)(v5 + 36) = 1065353216;
  v124 = dispType;
  v19 = HasFlag;
  MasterData_object = DataManager__GetMasterData_object_(
                        v10,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
  IsQuestClear_40324848 = CondType__IsQuestClear_40324848(questId, -1, 0, 0);
  questPhase = quest_info_k__BackingField->fields.questPhase;
  v24 = IsQuestClear_40324848;
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
  checkTime = v16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  v26 = QuestBoardListViewItemDraw_TypeInfo;
  mCostObj = this->fields.mCostObj;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v26 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(mCostObj, v26->static_fields->COST_OBJ_POS_WAR_BOARD, 0);
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
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPosition(
    v29,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS_WAR_BOARD,
    0);
  Instance = this->fields.mShohiSp;
  if ( !Instance )
    goto LABEL_205;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPosition(
    v30,
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
    if ( v12 > 7 || ((1 << v12) & 0xA6) == 0 )
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
      v120 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 1104LL);
      if ( !v120 )
        goto LABEL_205;
      if ( v12 >= *(_DWORD *)(v120 + 24) )
LABEL_207:
        sub_1C372BC(Instance);
      if ( !mcBaseP )
        goto LABEL_205;
      SHOHI_SP_NAME_WAR_BOARD = *(System_String_o **)(v120 + 8LL * (int)v12 + 32);
      goto LABEL_71;
    }
    Instance = QuestBoardListViewItemDraw_TypeInfo;
    v44 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = QuestBoardListViewItemDraw_TypeInfo;
    }
    v45 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 1104LL);
    if ( !v45 )
      goto LABEL_205;
    v46 = *(_DWORD *)(v45 + 24);
    if ( v12 == 7 )
    {
      if ( v46 <= 1 )
        goto LABEL_207;
      v47 = *(System_String_o **)(v45 + 40);
    }
    else
    {
      if ( v12 >= v46 )
        goto LABEL_207;
      v47 = *(System_String_o **)(v45 + 8LL * v12 + 32);
    }
    v48 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0);
    v49 = System_String__Concat_63561656(v47, v48, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v44, v49, 0);
  }
  else
  {
    v31 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v31 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v31->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v33 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0);
    v34 = System_String__Concat_63561656(QUEST_BOARD_SPNAME_PREFIX, v33, 0);
    v35 = this->fields.mcBaseP;
    v36 = v34;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (void *)AtlasManager__SetEventUI(v35, v36, 0);
    if ( !v35 )
      goto LABEL_205;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v35, (unsigned __int8)Instance & 1, 0);
    v37 = this->fields.mShohiSp;
    QUEST_BOARD_SHOHI_SPNAME_PREFIX = QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
    v39 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0);
    v40 = System_String__Concat_63561656(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v39, 0);
    if ( !AtlasManager__SetEventUI(v37, v40, 0) )
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
               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    v52 = QuestBoardListViewItemDraw_TypeInfo;
    v53 = v51;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v52 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v53, v52->static_fields->NEXT_POS_X_QUEST, 0);
    Instance = this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_205;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_205;
    Instance = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)Instance,
                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_205;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *((float *)Instance + 32) = NEXT_POS_X_QUEST;
    *((float *)Instance + 35) = NEXT_POS_X_QUEST;
  }
  if ( v124 != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v55 = 1;
    }
    else
    {
      if ( !v24 )
        goto LABEL_108;
      v55 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v55, 1, v50);
  }
LABEL_108:
  Instance = this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  v58 = QuestBoardListViewItemDraw_TypeInfo;
  v59 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v58 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v58->static_fields;
  p_x = &static_fields->NEW_POS_QUEST_NEXT.fields.x;
  p_y = &static_fields->NEW_POS_QUEST_NEXT.fields.y;
  p_z = &static_fields->NEW_POS_QUEST_NEXT.fields.z;
  if ( !v59 )
  {
    p_x = &static_fields->NEW_POS_QUEST.fields.x;
    p_y = &static_fields->NEW_POS_QUEST.fields.y;
    p_z = &static_fields->NEW_POS_QUEST.fields.z;
  }
  v132.fields.z = *p_z;
  v132.fields.y = *p_y;
  v132.fields.x = *p_x;
  QuestBoardListViewItemDraw__SetNewIcon(this, v132, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v57);
  Instance = QuestBoardListViewItemDraw__GetStatusSp(this, 2, v64);
  if ( !Instance )
    goto LABEL_205;
  v65 = (UnityEngine_GameObject_o *)Instance;
  v66 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( v66 )
  {
    v68 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v68 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v65, v68->static_fields->CLEAR_POS_QUEST, 0);
  }
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  (QuestBoardListViewItemDraw_o *)v66,
                  PhaseDetailedEntity,
                  phase,
                  !v19,
                  v124 == 2,
                  v67);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v5 + 24), v70);
  v72 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v72 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  z_low = LODWORD(v72->fields.mPrevSp[1].fields.mOldV1.fields.z);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v72, v12, v71);
  v77 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          z_low,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v5 + 24),
          v76);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v77 )
  {
    Instance = QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v12, v78);
    if ( !mTitleNameLb )
      goto LABEL_205;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0);
    goto LABEL_142;
  }
  Instance = QuestEntity__getQuestName(PhaseDetailedEntity, 0);
  if ( !mTitleNameLb )
    goto LABEL_205;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0);
  if ( v12 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v81, quest_info_k__BackingField->fields.warId, v82) )
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
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v85, PhaseDetailedEntity, v12, v86);
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
                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_205;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0);
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_205;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v88 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v88,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass338_0__SetItemOfWarBoard_b__0__,
        0);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v88, v89);
    }
LABEL_142:
    if ( v124 == 2 )
      goto LABEL_143;
    goto LABEL_144;
  }
  if ( v124 == 2 )
  {
LABEL_143:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v80);
    goto LABEL_146;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v83);
LABEL_144:
  Instance = this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_205;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_146:
  Instance = QuestBoardListViewItemDraw_TypeInfo;
  v90 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v90 )
    goto LABEL_205;
  UILabel__SetCondensedScale(v90, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0, 0);
  Instance = this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_205;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0);
  QuestBoardListViewItemDraw__GetPhasePresentGiftData(
    v91,
    &phasePresentData,
    PhaseDetailedEntity,
    quest_info_k__BackingField->fields.questPhase,
    v92);
  QuestBoardListViewItemDraw__SetupRewardIconAll(
    this,
    quest_info_k__BackingField,
    entity,
    phasePresentData,
    v124 == 2,
    *(UnityEngine_Color_o *)(v5 + 24),
    v93);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v94);
  isNotItemConsume = 0;
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = QuestBoardListViewItemDraw__GetCampaignText(
               this,
               PhaseDetailedEntity->fields.id,
               phase,
               !v24,
               &fixedVal[1],
               fixedVal,
               &isNotItemConsume,
               v96);
  if ( !mInfoTextList )
    goto LABEL_205;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
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
  v98 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (void *)QuestEntity__HasFlag(PhaseDetailedEntity, 32, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v99 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v100 = LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
      v101 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v101, v100, v98, 0, 1, 0, 0);
      if ( !v99 )
        goto LABEL_205;
      items = v99->fields._items;
      v105 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v99->fields._version;
      if ( !items )
        goto LABEL_205;
      size = v99->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v99,
          (Il2CppObject *)v101,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
      }
      else
      {
        v107 = &items->obj.klass + size;
        v99->fields._size = size + 1;
        v107[4] = (Il2CppClass *)v101;
        sub_1C36FFC((CGThumbnailListItem_o *)(v107 + 4), (int32_t)v101, v102, v103);
      }
    }
  }
LABEL_168:
  v108 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v108 )
    goto LABEL_205;
  v109 = v108->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v109 < 1 )
    goto LABEL_177;
  v111 = this->fields.mListViewObject;
  if ( !v111 )
    goto LABEL_205;
  Instance = v111->fields.manager;
  if ( !Instance )
    goto LABEL_205;
  v112 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v112
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v112 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_206;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v109, 0);
  Instance = System_Collections_Generic_List_object___get_Item(
               v108,
               AlphaAnimCnt,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
  v114 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v115 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v114;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v115;
LABEL_177:
  Instance = *p_mOptionInfoLb;
  v116 = v109 > 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v116, 0);
  Instance = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_205;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_205;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v116, 0);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v124 == 2,
    fixedVal[1],
    fixedVal[0],
    isNotItemConsume,
    *(UnityEngine_Color_o *)(v5 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    0,
    v121);
  Instance = this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_205;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_205;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !Instance )
    goto LABEL_205;
  v117 = WarBoardQuestMaster__GetEntity(
           (WarBoardQuestMaster_o *)Instance,
           quest_info_k__BackingField->fields.questId,
           phase,
           0);
  if ( !v117 )
    return;
  v118 = v117;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_205;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !Instance )
    goto LABEL_205;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v118->fields.stageId,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
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
    sub_1C372B4(Instance);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mListViewObject, (int32_t)questBoardObject, (int32_t)method, v3);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *v13; // x22
  Il2CppObject *Component_object; // x19
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C3FBC0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FBC0 = 1;
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
    v15.fields.x = x;
    v15.fields.y = y;
    v15.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v15, 0);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_20;
    StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0);
    if ( !StatusSp )
      goto LABEL_20;
    StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             StatusSp,
                                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !StatusSp )
      goto LABEL_20;
    v13 = (UIWidget_o *)StatusSp;
    UIWidget__set_width((UIWidget_o *)StatusSp, w, 0);
    UIWidget__set_height(v13, h, 0);
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
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_1C372B4(StatusSp);
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

  if ( (byte_4C3FBC3 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBC3 = 1;
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
                                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      sub_1C372B4(mNextSp);
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
  Il2CppObject *Component_object; // x19

  if ( (byte_4C3FBC1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FBC1 = 1;
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
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_1C372B4(v5);
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
  QuestGroupMaster_o *v13; // x23
  __int64 size; // x8
  UISprite_o *mPrevSp; // x20
  QuestBoardListViewItemDraw_c *v16; // x0
  AtlasManager_c *v17; // x8
  System_String_o *QUEST_BOARD_PREV_PAUSE_ICON_NAME; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t id; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v22; // x10
  TerminalPramsManager_c *v23; // x0
  const MethodInfo *v24; // x2
  QuestBoardListViewItemDraw_c *v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C3FBC4 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FBC4 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !questEnt )
    goto LABEL_43;
  v13 = (QuestGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, questEnt->fields.id, 16, 0);
  if ( (_DWORD)Instance )
  {
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(v13, (int32_t)Instance, 16, 0);
    if ( !Instance )
      goto LABEL_43;
    if ( Instance->fields.m_CancellationTokenSource )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ToList_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                    (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
      v11 = (System_Collections_Generic_List_int__o *)Instance;
    }
  }
  if ( !v11 )
LABEL_43:
    sub_1C372B4(Instance);
  size = v11->fields._size;
  if ( (int)size <= 0 )
  {
    id = questEnt->fields.id;
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
        *(const MethodInfo_3786000 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
    v16 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v16 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v17 = AtlasManager_TypeInfo;
    QUEST_BOARD_PREV_PAUSE_ICON_NAME = v16->static_fields->QUEST_BOARD_PREV_PAUSE_ICON_NAME;
    goto LABEL_16;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FBF6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FBF6 = 1;
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
         (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
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
      v17 = AtlasManager_TypeInfo;
      QUEST_BOARD_PREV_PAUSE_ICON_NAME = v25->static_fields->QUEST_BOARD_PREV_ICON_NAME;
LABEL_16:
      if ( !v17->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v17);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v13; // x21
  float v14; // s0
  float v15; // s0
  float v16; // s8
  struct UILabel_o *mTitleLevelLb; // x8
  UnityEngine_Object_o *v18; // x20
  int mWidth; // s8
  float monitor_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_4C3FBED & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FBED = 1;
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
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
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
        v22.fields.r = r;
        v22.fields.g = g;
        v22.fields.b = b;
        v22.fields.a = a;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v22, 0);
        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
        if ( IsNullOrEmpty )
        {
          v23.fields.r = r;
          v23.fields.g = g;
          v23.fields.b = b;
          v23.fields.a = a;
          UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v23, 0);
          IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp;
          if ( IsNullOrEmpty )
          {
            v24.fields.r = r;
            v24.fields.g = g;
            v24.fields.b = b;
            v24.fields.a = a;
            UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v24, 0);
            IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
            if ( IsNullOrEmpty )
            {
              IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0);
              if ( this->fields.mTitleLevelStrSp )
              {
                v13 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
                IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp,
                                                             0);
                if ( IsNullOrEmpty )
                {
                  LODWORD(v14) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)IsNullOrEmpty,
                                                 0);
                  GameObjectExtensions__SetLocalPositionX(v13, v14, 0);
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
                      v15 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v16 = (float)(SLODWORD(IsNullOrEmpty[7].klass) / 2) + (float)(v15 * -0.5);
LABEL_36:
                        gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0);
                        GameObjectExtensions__AddLocalPositionX(gameObject, v16, 0);
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
                                                                   (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      mTitleLevelLb = this->fields.mTitleLevelLb;
                      if ( mTitleLevelLb )
                      {
                        v18 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = mTitleLevelLb->fields.mWidth;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        monitor_low = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v18 )
                            goto LABEL_37;
                          if ( monitor_low > (float)SLODWORD(v18[2].monitor) )
                            monitor_low = (float)SLODWORD(v18[2].monitor);
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v16 = monitor_low * -0.5;
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
    sub_1C372B4(IsNullOrEmpty);
  }
}


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

  if ( (byte_4C3FBB2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FBB2 = 1;
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mOptionRestrinctionSp
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)mOptionRestrinctionSp,
                                                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)QuestRestrictionMaster__GetRestrictionName(
                                                             (QuestRestrictionMaster_o *)mOptionRestrinctionSp,
                                                             questId,
                                                             phase,
                                                             0),
        !mOptionRestrinctionLb) )
  {
LABEL_17:
    sub_1C372B4(mOptionRestrinctionSp);
  }
  UILabel__set_text(mOptionRestrinctionLb, (System_String_o *)mOptionRestrinctionSp, 0);
LABEL_15:
  v9 = this->fields.mOptionRestrinctionLb;
  if ( !v9 )
    goto LABEL_17;
  return !System_String__IsNullOrEmpty(v9->fields.mText, 0);
}


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
    sub_1C372B4(mOptionRestrinctionLb);
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  v3 = *(long double *)&alpha;
  if ( (byte_4C3FBDA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIWidget__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIWidget__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIWidget__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__GetEnumerator__);
    byte_4C3FBDA = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( (byte_4C3FBDC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    byte_4C3FBDC = 1;
  }
  rewardIconInfoList = this->fields.rewardIconInfoList;
  if ( rewardIconInfoList && rewardIconInfoList->fields._size >= 2 )
  {
    mRewardIcon = this->fields.mRewardIcon;
    if ( !mRewardIcon
      || (ItemIconComponent__SetAlpha(mRewardIcon, *(float *)&v3, 0),
          (mRewardIcon = (ItemIconComponent_o *)this->fields.rewardIconAlphaSyncWidgetList) == 0) )
    {
      sub_1C372B4(mRewardIcon);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)mRewardIcon,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIWidget__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIWidget__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C372B4(0);
      ((void (__fastcall *)(long double))v7.fields._current->klass->vtable[8].methodPtr)(v3);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIWidget__Dispose__);
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

  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, status, (const MethodInfo *)isActive);
  if ( !StatusSp || (StatusSp = UnityEngine_GameObject__get_gameObject(StatusSp, 0)) == 0 )
    sub_1C372B4(StatusSp);
  UnityEngine_GameObject__SetActive(StatusSp, isActive, 0);
}


void QuestBoardListViewItemDraw__SetStatusToggle(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *StatusSp; // x0
  Il2CppObject *Component_object; // x19
  const MethodInfo *v6; // x2
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  TimeSyncAlphaSwitcher_o *v8; // x20
  __int64 naturalAligment; // x9
  float v10; // s8
  QuestBoardListViewItemDraw_o *v11; // x0
  MapControl_QuestInfo_o *v12; // x1
  QuestEntity_o *v13; // x2
  int64_t v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_4C3FBC5 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    byte_4C3FBC5 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)StatusSp,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v6);
  if ( !StatusSp )
    goto LABEL_12;
  StatusSp = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)StatusSp,
               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_12;
  v8 = (TimeSyncAlphaSwitcher_o *)StatusSp;
  StatusSp = mListViewObject->fields.manager;
  if ( !StatusSp )
    goto LABEL_12;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)StatusSp + 304LL) >= (unsigned int)naturalAligment
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)StatusSp + 200LL) + 8 * naturalAligment - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( Component_object )
    {
      v10 = *((float *)StatusSp + 148);
      TimeSyncAlphaSwitcher__SetAlphaBlink((TimeSyncAlphaSwitcher_o *)Component_object, 2, 0, v10, 0);
      if ( v8 )
      {
        TimeSyncAlphaSwitcher__SetAlphaBlink(v8, 2, 1, v10, 0);
        return;
      }
    }
LABEL_12:
    sub_1C372B4(StatusSp);
  }
  sub_1C37574(StatusSp);
  QuestBoardListViewItemDraw__SetAdvanceNoticeText(v11, v12, v13, v14, v15);
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
  const MethodInfo *v28; // x1
  struct TerminalBannerComponent_array *v29; // x8
  const MethodInfo *v30; // x1
  int v31; // w20
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  struct UISprite_array *mBannerPointSps; // x8
  int v35; // w9
  int v36; // w20
  int32_t v37; // w21
  __int64 v38; // x0

  v5 = this;
  if ( (byte_4C3FBE1 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FBE1 = 1;
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
      this = (QuestBoardListViewItemDraw_o *)sub_1C37194(
                                               ExchangeSvtCoinBannerEntity,
                                               bannerEntList->obj.klass->_1.element_class);
      if ( !this )
      {
        v38 = sub_1C372D8();
        sub_1C37180(v38, 0);
      }
      if ( (unsigned int)(mBannerCount - 1) >= LODWORD(bannerEntList->max_length) )
        goto LABEL_64;
      v20 = (__int64)bannerEntList + 8 * mBannerCount - 8;
      *(_QWORD *)(v20 + 32) = v17;
      sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v17, v18, v19);
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
    sub_1C372BC(this);
  this = (QuestBoardListViewItemDraw_o *)v21->m_Items[0];
  if ( !this )
    goto LABEL_60;
  TerminalBannerComponent__StartLoadAndDisp((TerminalBannerComponent_o *)this, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FBF7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FBF7 = 1;
  }
  this = (QuestBoardListViewItemDraw_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE1(this->fields.mPrevSp->fields.mWidth) )
  {
    v29 = v5->fields.mTerminalBanners;
    if ( !v29 )
      goto LABEL_60;
    if ( !LODWORD(v29->max_length) )
      goto LABEL_64;
    this = (QuestBoardListViewItemDraw_o *)v29->m_Items[0];
    if ( !this )
      goto LABEL_60;
    TerminalBannerComponent__SetBannerTextureActive((TerminalBannerComponent_o *)this, 0, 0);
  }
  QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(v5, v28);
  QuestBoardListViewItemDraw__SetupEntryBanner(v5, v30);
  AreaBoardInfo_k__BackingField->fields.bannerFocusIndex = 0;
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mBannerArrowObj;
  v5->fields.mIsEnableBannerAutoMoveOld = 0;
  if ( !this )
    goto LABEL_60;
  v31 = v5->fields.mBannerCount;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31 > 1, 0);
  if ( v31 >= 2 )
    QuestBoardListViewItemDraw__SetupBannerArrows(v5, v32);
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mBannerPointGrid;
  if ( !this )
    goto LABEL_60;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31 > 1, 0);
  if ( v31 >= 2 )
  {
    mBannerPointSps = v5->fields.mBannerPointSps;
    if ( mBannerPointSps )
    {
      v35 = mBannerPointSps->max_length;
      v36 = v35 - 1;
      if ( v35 >= 1 )
      {
        v37 = 0;
        while ( (unsigned int)v37 < LODWORD(mBannerPointSps->max_length) )
        {
          this = (QuestBoardListViewItemDraw_o *)mBannerPointSps->m_Items[v37];
          if ( this )
          {
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v37 < v5->fields.mBannerCount, 0);
              if ( v36 == v37 )
                goto LABEL_61;
              mBannerPointSps = v5->fields.mBannerPointSps;
              ++v37;
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
    sub_1C372B4(this);
  }
LABEL_63:
  QuestBoardListViewItemDraw__UpdateDispBannerPoint(v5, 0, v33);
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
        sub_1C372BC(this);
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
    sub_1C372B4(this);
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
  if ( (byte_4C3FBE3 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FBE3 = 1;
  }
  mTerminalBanners = v2->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_35;
  if ( !LODWORD(mTerminalBanners->max_length) )
    sub_1C372BC(this);
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
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)Component_object, 0);
        }
        v7 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v5,
               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)v7, 0);
        }
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3FBF7 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3FBF7 = 1;
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
                                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
    sub_1C372B4(this);
  }
}


void QuestBoardListViewItemDraw__SetupRewardIcon(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  QuestBoardRewardIcon_RewardIconInfo_o *IsNullOrEmpty; // x0
  System_Collections_Generic_List_object__o *rewardIconInfoList; // x21
  int32_t AlphaAnimCnt; // w0
  QuestBoardRewardIcon_RewardIconInfo_o *v8; // x20
  int32_t PriorIconId_k__BackingField; // w1
  int Num_k__BackingField; // w8
  int64_t v11; // x2
  const MethodInfo *v12; // x2
  int64_t v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4C3FBDB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
    byte_4C3FBDB = 1;
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
                                                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_RewardIconInfo__get_Item__);
        if ( IsNullOrEmpty )
        {
          v8 = IsNullOrEmpty;
          PriorIconId_k__BackingField = IsNullOrEmpty->fields._PriorIconId_k__BackingField;
          IsNullOrEmpty = (QuestBoardRewardIcon_RewardIconInfo_o *)this->fields.mRewardIcon;
          Num_k__BackingField = v8->fields._Num_k__BackingField;
          if ( PriorIconId_k__BackingField < 1 )
          {
            if ( IsNullOrEmpty )
            {
              if ( Num_k__BackingField <= 1 )
                v13 = -1;
              else
                v13 = (unsigned int)v8->fields._Num_k__BackingField;
              ItemIconComponent__SetGift_40921900(
                (ItemIconComponent_o *)IsNullOrEmpty,
                v8->fields._GiftType_k__BackingField,
                v8->fields._ObjectId_k__BackingField,
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
              v11 = (unsigned int)v8->fields._Num_k__BackingField;
            ItemIconComponent__SetItemImage_40924348(
              (ItemIconComponent_o *)IsNullOrEmpty,
              PriorIconId_k__BackingField,
              v11,
              0);
LABEL_18:
            QuestBoardListViewItemDraw__SetupRewardIconTitle(this, v8, v12);
            QuestBoardListViewItemDraw__SetupRewardIconGotAndNotGive(this, v8, v14);
            return;
          }
        }
      }
    }
    sub_1C372B4(IsNullOrEmpty);
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
  UnityEngine_Component_o *mRewardIcon; // x0
  const MethodInfo *v21; // x4
  QuestEntity_o *v22; // x24
  _BOOL4 v23; // w20
  int32_t MaxPhase; // w0
  int32_t v25; // w25
  int32_t GiftId_k__BackingField; // w21
  int32_t GiftIconId_k__BackingField; // w23
  int32_t Phase_k__BackingField; // w29
  int32_t id; // w26
  bool v30; // w26
  QuestBoardRewardIcon_RewardIconArgs_o *v31; // x0
  QuestBoardRewardIcon_RewardIconArgs_o *v32; // x27
  System_Collections_Generic_List_object__o *rewardIconInfoList; // x21
  bool IsRepeatReward; // w0
  int32_t giftIconId; // w21
  int32_t giftId; // w23
  bool v37; // w24
  bool IsDisplayGot; // w22
  QuestBoardRewardIcon_RewardIconArgs_o *v39; // x0
  QuestBoardRewardIcon_RewardIconArgs_o *v40; // x25
  System_Collections_Generic_List_object__o *klass; // x21
  const MethodInfo *v42; // x2
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestBoardListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x2
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  QuestBoardListViewItemDraw_o *v50; // x0
  int32_t v51; // w1
  int32_t v52; // w2
  bool v53; // w3
  int32_t *v54; // x4
  int32_t *v55; // x5
  bool *v56; // x6
  const MethodInfo *v57; // x7
  QuestBoardListViewItemDraw_PhasePresentData_o *v58; // [xsp+28h] [xbp-B8h]
  UserQuestEntity_o *v59; // [xsp+30h] [xbp-B0h]
  System_String_o *shardRewardImageName; // [xsp+40h] [xbp-A0h]
  bool IsDisplaySharedReward; // [xsp+48h] [xbp-98h]
  bool IsDisplayServantLimitOpened; // [xsp+4Ch] [xbp-94h]
  bool IsDisplayNotGive; // [xsp+50h] [xbp-90h]
  _BOOL4 v64; // [xsp+54h] [xbp-8Ch]
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentDataa; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C3FBB9 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_RewardIconInfo__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_RewardIconInfo__TypeInfo);
    sub_1C37058(&QuestBoardListViewManager_TypeInfo);
    sub_1C37058(&QuestBoardRewardIcon_RewardIconArgs_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C3FBB9 = 1;
  }
  phasePresentDataa = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_RewardIconInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_RewardIconInfo___ctor__);
  p_rewardIconInfoList = (CGThumbnailListItem_o *)&this->fields.rewardIconInfoList;
  this->fields.rewardIconInfoList = (struct System_Collections_Generic_List_RewardIconInfo__o *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rewardIconInfoList, (int32_t)v16, v18, v19);
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
  v66.fields.r = r;
  v66.fields.g = g;
  v66.fields.b = b;
  v66.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)mRewardIcon, v66, 0);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
  if ( !mRewardIcon )
    goto LABEL_45;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)mRewardIcon,
                                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !mRewardIcon )
    goto LABEL_45;
  v67.fields.r = r;
  v67.fields.g = g;
  v67.fields.b = b;
  v67.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardIcon, v67, 0);
  if ( !questInfo )
    goto LABEL_45;
  mRewardIcon = (UnityEngine_Component_o *)MapControl_QuestInfo__GetMine(questInfo, 0);
  v22 = (QuestEntity_o *)mRewardIcon;
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
      sub_1C372B4(mRewardIcon);
    }
  }
  mRewardIcon = (UnityEngine_Component_o *)QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                                             (QuestBoardListViewItemDraw_o *)mRewardIcon,
                                             &phasePresentDataa,
                                             v22,
                                             0,
                                             v21);
  if ( phasePresentDataa )
  {
    v23 = !phasePresentDataa->fields._IsLastPhase_k__BackingField;
    if ( !v22 )
      goto LABEL_45;
  }
  else
  {
    v23 = 0;
    if ( !v22 )
      goto LABEL_45;
  }
  if ( v22->fields.afterClear == 3 )
  {
    mRewardIcon = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !mRewardIcon )
      goto LABEL_45;
    v64 = !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)mRewardIcon, v22->fields.id, 0, 0);
  }
  else
  {
    LOBYTE(v64) = 0;
  }
  IsDisplayNotGive = QuestBoardRewardIcon_RewardIconUtil__IsDisplayNotGive(questInfo, 0);
  IsDisplayServantLimitOpened = QuestBoardRewardIcon_RewardIconUtil__IsDisplayServantLimitOpened(questInfo, 0);
  IsDisplaySharedReward = QuestBoardRewardIcon_RewardIconUtil__IsDisplaySharedReward(questInfo, 0);
  shardRewardImageName = QuestBoardRewardIcon_RewardIconUtil__GetSharedRewardImageName(questInfo, 0);
  MaxPhase = QuestEntity__GetMaxPhase(v22, 0);
  if ( !phasePresentData )
    goto LABEL_32;
  v25 = MaxPhase;
  GiftId_k__BackingField = phasePresentData->fields._GiftId_k__BackingField;
  GiftIconId_k__BackingField = phasePresentData->fields._GiftIconId_k__BackingField;
  v58 = phasePresentData;
  Phase_k__BackingField = phasePresentData->fields._Phase_k__BackingField;
  id = v22->fields.id;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v59 = userQuestEntity;
  v30 = CondType__IsQuestClear_40324848(id, -1, 0, 0)
     || QuestBoardRewardIcon_RewardIconUtil__IsDisplayGotBySharedReward(questInfo, 0);
  v31 = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1C372A4(QuestBoardRewardIcon_RewardIconArgs_TypeInfo);
  v68.fields.r = r;
  v68.fields.g = g;
  v68.fields.b = b;
  v68.fields.a = a;
  v32 = v31;
  QuestBoardRewardIcon_RewardIconArgs___ctor(
    v31,
    GiftIconId_k__BackingField,
    GiftId_k__BackingField,
    v64,
    Phase_k__BackingField,
    v23,
    Phase_k__BackingField == v25,
    v68,
    IsDisplayNotGive,
    IsDisplayServantLimitOpened,
    v30,
    IsDisplaySharedReward,
    shardRewardImageName,
    0);
  p_rewardIconInfoList = (CGThumbnailListItem_o *)&this->fields.rewardIconInfoList;
  rewardIconInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardIconInfoList;
  mRewardIcon = (UnityEngine_Component_o *)QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfo(v32, 0);
  if ( !rewardIconInfoList )
    goto LABEL_45;
  System_Collections_Generic_List_object___AddRange(
    rewardIconInfoList,
    (System_Collections_Generic_IEnumerable_T__o *)mRewardIcon,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_RewardIconInfo__AddRange__);
  userQuestEntity = v59;
  if ( v58->fields._IsLastPhase_k__BackingField )
  {
LABEL_32:
    IsRepeatReward = QuestEntity__IsRepeatReward(v22, 0);
    giftIconId = v22->fields.giftIconId;
    giftId = v22->fields.giftId;
    v37 = IsRepeatReward;
    IsDisplayGot = QuestBoardRewardIcon_RewardIconUtil__IsDisplayGot(questInfo, userQuestEntity, 0);
    v39 = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1C372A4(QuestBoardRewardIcon_RewardIconArgs_TypeInfo);
    v69.fields.r = r;
    v69.fields.g = g;
    v69.fields.b = b;
    v69.fields.a = a;
    v40 = v39;
    QuestBoardRewardIcon_RewardIconArgs___ctor(
      v39,
      giftIconId,
      giftId,
      v64 && !v37,
      0,
      v23,
      1,
      v69,
      IsDisplayNotGive,
      IsDisplayServantLimitOpened,
      IsDisplayGot,
      IsDisplaySharedReward && !v37,
      shardRewardImageName,
      0);
    klass = (System_Collections_Generic_List_object__o *)p_rewardIconInfoList->klass;
    mRewardIcon = (UnityEngine_Component_o *)QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfo(v40, 0);
    if ( !klass )
      goto LABEL_45;
    System_Collections_Generic_List_object___AddRange(
      klass,
      (System_Collections_Generic_IEnumerable_T__o *)mRewardIcon,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_RewardIconInfo__AddRange__);
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
      sub_1C37574(manager);
      QuestBoardListViewItemDraw__GetCampaignText(v50, v51, v52, v53, v54, v55, v56, v57);
    }
    else
    {
      QuestBoardListViewItemDraw__SetupRewardIcon(this, manager, v42);
      QuestBoardListViewItemDraw__InitRewardIconAlphaSyncWidgets(this, v46);
      QuestBoardListViewItemDraw__RegisterRewardIconAlphaSyncWidgetsByFindingIconDiff(this, manager, v47);
    }
  }
  else
  {
    mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
    if ( !mRewardIcon )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 0, 0);
    p_rewardIconInfoList->klass = 0;
    sub_1C36FFC(p_rewardIconInfoList, 0, v48, v49);
  }
}


void QuestBoardListViewItemDraw__SetupRewardIconGotAndNotGive(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardRewardIcon_RewardIconInfo_o *iconInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 mRewardGetSP; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  QuestBoardRewardIcon_RewardIconInfo_o **v9; // x21
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_GameObject_o *v11; // x22
  QuestBoardRewardIcon_RewardIconInfo_o *v12; // x8
  UnityEngine_GameObject_o *v13; // x21
  UISprite_o *mServantLimitRewardObtainedSP; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UISprite_o *v17; // x22
  System_Collections_Generic_IEnumerable_T__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UISprite_o *mRewardNotGetSP; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UISprite_o *v24; // x19
  System_Action_object__o *v25; // x19
  __int64 v26; // x0

  if ( (byte_4C3FBBD & 1) == 0 )
  {
    sub_1C37058(&System_Action_UISprite__TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass353_0__SetupRewardIconGotAndNotGive_g__SetupCommon_0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass353_0_TypeInfo);
    sub_1C37058(&UISprite___TypeInfo);
    sub_1C37058(&StringLiteral_20223/*"icon_reward_limits_release"*/);
    byte_4C3FBBD = 1;
  }
  v5 = sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass353_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass353_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass353_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = iconInfo;
  v9 = (QuestBoardRewardIcon_RewardIconInfo_o **)(v5 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)iconInfo, v7, v8);
  mRewardGetSP = (__int64)this->fields.mRewardGetSP;
  if ( !mRewardGetSP )
    goto LABEL_31;
  mRewardGetSP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRewardGetSP, 0);
  if ( !*v9 )
    goto LABEL_31;
  v10 = (UnityEngine_GameObject_o *)mRewardGetSP;
  mRewardGetSP = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(*v9, 0);
  if ( !v10 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v10, mRewardGetSP & 1, 0);
  mRewardGetSP = (__int64)this->fields.mRewardNotGetSP;
  if ( !mRewardGetSP )
    goto LABEL_31;
  mRewardGetSP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRewardGetSP, 0);
  if ( !*v9 )
    goto LABEL_31;
  v11 = (UnityEngine_GameObject_o *)mRewardGetSP;
  mRewardGetSP = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayNotGive(*v9, 0);
  if ( !v11 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v11, mRewardGetSP & 1, 0);
  mRewardGetSP = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !mRewardGetSP )
    goto LABEL_31;
  mRewardGetSP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRewardGetSP, 0);
  v12 = *v9;
  if ( !*v9 )
    goto LABEL_31;
  v13 = (UnityEngine_GameObject_o *)mRewardGetSP;
  mRewardGetSP = QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(v12, 0);
  if ( !v13 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v13, mRewardGetSP & 1, 0);
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
  AtlasManager__SetDownloadCommonSprite(mServantLimitRewardObtainedSP, (System_String_o *)StringLiteral_20223/*"icon_reward_limits_release"*/, 0);
  mRewardGetSP = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !mRewardGetSP )
LABEL_31:
    sub_1C372B4(mRewardGetSP);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)mRewardGetSP + 840LL))(
    mRewardGetSP,
    *(_QWORD *)(*(_QWORD *)mRewardGetSP + 848LL));
LABEL_20:
  mRewardGetSP = sub_1C37100(UISprite___TypeInfo, 3);
  if ( !mRewardGetSP )
    goto LABEL_31;
  v17 = this->fields.mRewardGetSP;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)mRewardGetSP;
  if ( v17 )
  {
    mRewardGetSP = sub_1C37194(this->fields.mRewardGetSP, *(_QWORD *)(*(_QWORD *)mRewardGetSP + 64LL));
    if ( !mRewardGetSP )
      goto LABEL_33;
  }
  if ( !LODWORD(v18[1].monitor) )
    goto LABEL_32;
  v18[2].klass = (System_Collections_Generic_IEnumerable_T__c *)v17;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18[2], (int32_t)v17, v15, v16);
  mRewardNotGetSP = this->fields.mRewardNotGetSP;
  if ( mRewardNotGetSP )
  {
    mRewardGetSP = sub_1C37194(this->fields.mRewardNotGetSP, v18->klass->_1.element_class);
    if ( !mRewardGetSP )
      goto LABEL_33;
  }
  if ( LODWORD(v18[1].monitor) <= 1 )
    goto LABEL_32;
  v18[2].monitor = mRewardNotGetSP;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18[2].monitor, (int32_t)mRewardNotGetSP, v19, v20);
  v24 = this->fields.mServantLimitRewardObtainedSP;
  if ( v24 )
  {
    mRewardGetSP = sub_1C37194(v24, v18->klass->_1.element_class);
    if ( !mRewardGetSP )
    {
LABEL_33:
      v26 = sub_1C372D8();
      sub_1C37180(v26, 0);
    }
  }
  if ( LODWORD(v18[1].monitor) <= 2 )
LABEL_32:
    sub_1C372BC(mRewardGetSP);
  v18[3].klass = (System_Collections_Generic_IEnumerable_T__c *)v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18[3], (int32_t)v24, v22, v23);
  v25 = (System_Action_object__o *)sub_1C372A4(System_Action_UISprite__TypeInfo);
  System_Action_object____ctor(
    v25,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass353_0__SetupRewardIconGotAndNotGive_g__SetupCommon_0__,
    0);
  BasicHelper__ForEach_object_(
    v18,
    (System_Action_T__o *)v25,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_UISprite___);
}


void QuestBoardListViewItemDraw__SetupRewardIconTitle(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardRewardIcon_RewardIconInfo_o *iconInfo,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass352_0_o *v5; // x21
  __int64 IsNullOrEmpty; // x0
  System_String_o *SharedRewardImageName; // x0
  UISprite_o *mRewardSharedSP; // x22
  System_String_o *v9; // x23
  int v10; // w22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UISprite_o *mRewardFirstSP; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UISprite_o *mRewardQuestSP; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UISprite_o *mRewardPhaseSP; // x24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UISprite_o *v23; // x24
  QuestBoardListViewItemDraw___c_c *v24; // x0
  System_Func_object__bool__o *_9__352_0; // x24
  QuestBoardRewardIcon_RewardIconInfo_o *v26; // x28
  Il2CppObject *v27; // x25
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_T__o *v31; // x23
  System_Action_object__o *v32; // x24
  QuestBoardListViewItemDraw_c *v33; // x0
  System_String_o *QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  Il2CppObject *v41; // x0
  System_String_o *v42; // x20
  __int64 v43; // x0
  int32_t Phase; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3FBBC & 1) == 0 )
  {
    sub_1C37058(&System_Action_UISprite__TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_UISprite___);
    sub_1C37058(&System_Func_UISprite__bool__TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconTitle_b__352_0__);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass352_0__SetupRewardIconTitle_g__SetupCommon_1__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass352_0_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1C37058(&UISprite___TypeInfo);
    byte_4C3FBBC = 1;
  }
  v5 = (QuestBoardListViewItemDraw___c__DisplayClass352_0_o *)sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass352_0_TypeInfo);
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
    v9 = QuestBoardRewardIcon_RewardIconInfo__get_SharedRewardImageName(iconInfo, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(mRewardSharedSP, v9, 0);
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
  v10 = IsNullOrEmpty;
  IsNullOrEmpty = (__int64)UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.mRewardFirstSP,
                             0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, v10 == 3, 0);
  IsNullOrEmpty = (__int64)this->fields.mRewardQuestSP;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsNullOrEmpty = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, v10 == 1, 0);
  IsNullOrEmpty = (__int64)this->fields.mRewardPhaseSP;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsNullOrEmpty = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, v10 == 2, 0);
  IsNullOrEmpty = (__int64)this->fields.mRewardSharedSP;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsNullOrEmpty = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, v10 == 4, 0);
  IsNullOrEmpty = sub_1C37100(UISprite___TypeInfo, 4);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  mRewardFirstSP = this->fields.mRewardFirstSP;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)IsNullOrEmpty;
  if ( mRewardFirstSP )
  {
    IsNullOrEmpty = sub_1C37194(this->fields.mRewardFirstSP, *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 64LL));
    if ( !IsNullOrEmpty )
      goto LABEL_51;
  }
  if ( !LODWORD(v14[1].monitor) )
    goto LABEL_50;
  v14[2].klass = (System_Collections_Generic_IEnumerable_TSource__c *)mRewardFirstSP;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14[2], (int32_t)mRewardFirstSP, v11, v12);
  mRewardQuestSP = this->fields.mRewardQuestSP;
  if ( mRewardQuestSP )
  {
    IsNullOrEmpty = sub_1C37194(this->fields.mRewardQuestSP, v14->klass->_1.element_class);
    if ( !IsNullOrEmpty )
      goto LABEL_51;
  }
  if ( LODWORD(v14[1].monitor) <= 1 )
    goto LABEL_50;
  v14[2].monitor = mRewardQuestSP;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14[2].monitor, (int32_t)mRewardQuestSP, v15, v16);
  mRewardPhaseSP = this->fields.mRewardPhaseSP;
  if ( mRewardPhaseSP )
  {
    IsNullOrEmpty = sub_1C37194(this->fields.mRewardPhaseSP, v14->klass->_1.element_class);
    if ( !IsNullOrEmpty )
      goto LABEL_51;
  }
  if ( LODWORD(v14[1].monitor) <= 2 )
    goto LABEL_50;
  v14[3].klass = (System_Collections_Generic_IEnumerable_TSource__c *)mRewardPhaseSP;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14[3], (int32_t)mRewardPhaseSP, v18, v19);
  v23 = this->fields.mRewardSharedSP;
  if ( v23 )
  {
    IsNullOrEmpty = sub_1C37194(this->fields.mRewardSharedSP, v14->klass->_1.element_class);
    if ( !IsNullOrEmpty )
    {
LABEL_51:
      v43 = sub_1C372D8();
      sub_1C37180(v43, 0);
    }
  }
  if ( LODWORD(v14[1].monitor) <= 3 )
LABEL_50:
    sub_1C372BC(IsNullOrEmpty);
  v14[3].monitor = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14[3].monitor, (int32_t)v23, v21, v22);
  v24 = QuestBoardListViewItemDraw___c_TypeInfo;
  if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
    v24 = QuestBoardListViewItemDraw___c_TypeInfo;
  }
  _9__352_0 = (System_Func_object__bool__o *)v24->static_fields->__9__352_0;
  if ( !_9__352_0 )
  {
    v26 = iconInfo;
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = QuestBoardListViewItemDraw___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__352_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UISprite__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__352_0,
      v27,
      Method_QuestBoardListViewItemDraw___c__SetupRewardIconTitle_b__352_0__,
      0);
    static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__352_0 = (struct System_Func_UISprite__bool__o *)_9__352_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__352_0, (int32_t)_9__352_0, v29, v30);
    iconInfo = v26;
  }
  v31 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v14,
                                                         (System_Func_TSource__bool__o *)_9__352_0,
                                                         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_UISprite___);
  v32 = (System_Action_object__o *)sub_1C372A4(System_Action_UISprite__TypeInfo);
  System_Action_object____ctor(
    v32,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass352_0__SetupRewardIconTitle_g__SetupCommon_1__,
    0);
  BasicHelper__ForEach_object_(
    v31,
    (System_Action_T__o *)v32,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_UISprite___);
  if ( v10 == 2 )
  {
    v33 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v33 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = v33->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
    Phase = QuestBoardRewardIcon_RewardIconInfo__get_Phase(iconInfo, 0);
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Phase, v35, v36, v37, v38, v39, v40);
    IsNullOrEmpty = (__int64)System_String__Format(QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v41, 0);
    if ( this->fields.mRewardPhaseNumSP )
    {
      v42 = (System_String_o *)IsNullOrEmpty;
      UISprite__set_atlas(this->fields.mRewardPhaseNumSP, this->fields.mTerminalAtlas, 0);
      IsNullOrEmpty = (__int64)this->fields.mRewardPhaseNumSP;
      if ( IsNullOrEmpty )
      {
        UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, v42, 0);
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
    sub_1C372B4(IsNullOrEmpty);
  }
}


void QuestBoardListViewItemDraw__StartEntryBanner(
        QuestBoardListViewItemDraw_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v12; // x22
  struct ScrollArrowComponent_array *mBannerArrows; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x21
  UnityEngine_GameObject_o *v16; // x20
  Il2CppObject *v17; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  QuestBoardListViewItemDraw_c *v20; // x0
  float BANNER_ENTORY_EFFECT_DURATION; // s0
  EventDelegate_Callback_o *v22; // x22
  float v23; // s0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FBE4 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_QuestBoardListViewItemDraw___c__DisplayClass404_0__StartEntryBanner_b__0__);
    sub_1C37058(&QuestBoardListViewItemDraw___c__DisplayClass404_0_TypeInfo);
    byte_4C3FBE4 = 1;
  }
  v5 = sub_1C372A4(QuestBoardListViewItemDraw___c__DisplayClass404_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass404_0___ctor((QuestBoardListViewItemDraw___c__DisplayClass404_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endCallback, v9, v10);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FBF7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FBF7 = 1;
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
  v12 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
LABEL_16:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  if ( !v12 )
    goto LABEL_32;
  TerminalBannerComponent__SetBannerTextureActive((TerminalBannerComponent_o *)v12, 1, 0);
  mBannerArrows = this->fields.mBannerArrows;
  if ( !mBannerArrows )
    goto LABEL_32;
  max_length = mBannerArrows->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < (unsigned int)max_length )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)mBannerArrows->m_Items[v15], 1, 0);
      LODWORD(max_length) = mBannerArrows->max_length;
      if ( (__int64)++v15 >= (int)max_length )
        goto LABEL_23;
    }
LABEL_31:
    sub_1C372BC(gameObject);
  }
LABEL_23:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
  if ( !gameObject )
    goto LABEL_32;
  v16 = gameObject;
  v17 = UnityEngine_GameObject__AddComponent_object_(
          gameObject,
          (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v16, 0);
  if ( !v17 )
    goto LABEL_32;
  *(UnityEngine_Vector3_o *)&v17[8].klass = LocalPosition;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(void **)((char *)&v17[8].monitor + 4) = *(void **)&static_fields->zeroVector.fields.x;
  *((float *)&v17[9].klass + 1) = z;
  v20 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v20 = QuestBoardListViewItemDraw_TypeInfo;
  }
  BANNER_ENTORY_EFFECT_DURATION = v20->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v17[2].klass) = 2;
  *(float *)&v17[3].monitor = BANNER_ENTORY_EFFECT_DURATION;
  v22 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass404_0__StartEntryBanner_b__0__,
    0);
  UITweener__SetOnFinished((UITweener_o *)v17, v22, 0);
  UITweener__PlayForward((UITweener_o *)v17, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             v16,
                                             (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gameObject )
LABEL_32:
    sub_1C372B4(gameObject);
  gameObject[5].monitor = (void *)0x3F80000000000000LL;
  v23 = QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(gameObject[1].monitor) = 3;
  *(float *)&gameObject[2].monitor = v23;
  UITweener__PlayForward((UITweener_o *)gameObject, 0);
}


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
  if ( (byte_4C3FBE6 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBE6 = 1;
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
        sub_1C372BC(this);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v8 = mBannerPointSps->m_Items[v5];
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !v8 )
LABEL_15:
        sub_1C372B4(this);
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

  if ( (byte_4C3FBA9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4C3FBA9 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0 )
  {
    sub_1C372B4(mInfoTextList);
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
      sub_1C372B4(this);
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
  UnityEngine_Vector2_o ScreenPosition_49050776; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  v4 = this;
  if ( (byte_4C3FBE9 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C37058(&CTouch_TypeInfo);
    byte_4C3FBE9 = 1;
  }
  if ( v4->fields.mIsPressedForDragX )
  {
    v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_1C372B4(this);
    mUICamera = questBoardManager->fields.mUICamera;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_49050776 = CTouch__getScreenPosition_49050776(mUICamera, 0);
    mIsEnableDragX = v4->fields.mIsEnableDragX;
    v4->fields.mTouchPosNow = ScreenPosition_49050776;
    if ( mIsEnableDragX )
      v4->fields.mTouchPosDif = ScreenPosition_49050776.fields.x - v4->fields.mTouchPosOld.fields.x;
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
  if ( (byte_4C3FBF4 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C3FBF4 = 1;
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
    sub_1C372B4(label);
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
    sub_1C372B4(0);
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

  if ( (byte_4C3FC57 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4C3FC57 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(QuestBoardListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewItemDraw___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)QuestBoardListViewItemDraw___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return rest->fields.type == 9;
}


int32_t QuestBoardListViewItemDraw___c___SetAdvanceNoticeText_b__350_1(
        QuestBoardListViewItemDraw___c_o *this,
        QuestReleaseOverwriteEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.imagePriority;
}


bool QuestBoardListViewItemDraw___c___SetClosedTitleName_b__428_0(
        QuestBoardListViewItemDraw___c_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.closedMessageId != 0;
}


int32_t QuestBoardListViewItemDraw___c___SetClosedTitleName_b__428_1(
        QuestBoardListViewItemDraw___c_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.imagePriority;
}


int32_t QuestBoardListViewItemDraw___c___SetItemOfQuest_b__337_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  if ( (byte_4C3FC58 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw___c__DisplayClass335_0_o *)sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3FC58 = 1;
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
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  this = (QuestBoardListViewItemDraw___c__DisplayClass335_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw___c__DisplayClass335_0_o *)NetworkManager_TypeInfo;
  }
  if ( !userQuestMst )
LABEL_17:
    sub_1C372B4(this);
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
      sub_1C372B4(this);
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
      sub_1C372B4(this);
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
      sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(iconInfo);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  const MethodInfo_38C8F30 *v3; // x3
  __int64 v6; // x0
  System_Nullable_long__o v8; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v9; // 0:x0.16

  if ( (byte_4C3FC59 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_long___ctor__);
    byte_4C3FC59 = 1;
  }
  v9.fields.value = this->fields.checkTime;
  *(_QWORD *)&v9.fields.hasValue = &v8;
  *(_QWORD *)&v8.fields.hasValue = 0;
  v8.fields.value = 0;
  System_Nullable_long____ctor(v9, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_1C372B4(v6);
  return !UserOwnItemInfo__IsExpired(x, v8, 0);
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

  if ( (byte_4C3FC5A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FC5A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FCAE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FCAE = 1;
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
    sub_1C372B4(v3);
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
  Il2CppObject *Object_object__51154888; // x0

  v4 = this;
  if ( (byte_4C3FC5B & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_16535/*"_alpha"*/);
    sub_1C37058(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)sub_1C37058(&StringLiteral_16269/*"_MaskTex"*/);
    byte_4C3FC5B = 1;
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
      sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields.boardIconAssetData, (int32_t)assetData, v6, v7);
      v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
      v12 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
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
              this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)AssetData__GetObject_object__51154888(
                                                                              (AssetData_o *)this,
                                                                              v14->fields.boardIconName,
                                                                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
              if ( v12 )
              {
                UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)this, 0);
                v15 = v4->fields.__4__this;
                if ( v15 )
                {
                  boardIconAssetData = v15->fields.boardIconAssetData;
                  this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)System_String__Concat_63561656(
                                                                                  v15->fields.boardIconName,
                                                                                  (System_String_o *)StringLiteral_16535/*"_alpha"*/,
                                                                                  0);
                  if ( boardIconAssetData )
                  {
                    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                                boardIconAssetData,
                                                (System_String_o *)this,
                                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
                    UnityEngine_Material__SetTexture(
                      v12,
                      (System_String_o *)StringLiteral_16269/*"_MaskTex"*/,
                      (UnityEngine_Texture_o *)Object_object__51154888,
                      0);
                    this = (QuestBoardListViewItemDraw___c__DisplayClass416_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C372B4(this);
  }
  v8 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v8 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v9 = System_String__Concat_63561656(v8->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH, v4->fields.loadBoardIconName, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v9, 0);
}