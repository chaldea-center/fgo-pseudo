void __fastcall QuestBoardListViewItemDraw___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  QuestBoardListViewItemDraw_c *v7; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v9; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v10; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v11; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v12; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v13; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v14; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v15; // x0
  int64_t v16; // x1
  int64_t v17; // x1
  struct QuestBoardListViewItemDraw_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  QuestBoardListViewItemDraw_c *v25; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v26; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v27; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v28; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v29; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v30; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v31; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v32; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v33; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v34; // x8
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  PartyOrganizationUtility_o *p_COST_BG_QP; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  QuestBoardListViewItemDraw_c *v50; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v51; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v52; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v53; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v54; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v55; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v56; // x9
  int64_t v57; // x1
  PartyOrganizationUtility_o *p_SHOHI_SP_NAME; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x1
  PartyOrganizationUtility_o *p_SHOHI_SP_NAME_WAR_BOARD; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  QuestBoardListViewItemDraw_c *v79; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v80; // x10
  UnityEngine_Vector3_c *v81; // x9
  struct UnityEngine_Vector3_StaticFields *v82; // x11
  float z; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v84; // x10
  struct UnityEngine_Vector3_StaticFields *v85; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v86; // x11
  float v87; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v88; // x11
  struct QuestBoardListViewItemDraw_StaticFields *v89; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v90; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v91; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v92; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v93; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v94; // x10
  struct UnityEngine_Vector3_StaticFields *v95; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v96; // x10
  float v97; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v98; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v99; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v100; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v101; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v102; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v103; // x9
  int64_t v104; // x1
  PartyOrganizationUtility_o *p_EVENT_WAR_SPNAME_PREFIX; // x0
  int64_t v106; // x1
  PartyOrganizationUtility_o *p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_SPNAME_PREFIX; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x1
  PartyOrganizationUtility_o *p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_ICON_SPNAME_PREFIX; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_MASK_SPNAME_PREFIX; // x0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  int64_t v146; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x0
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_AP_SPNAME_PREFIX; // x0
  int64_t v155; // x1
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_DAMAGE_RECODE_NAME; // x0
  int64_t v163; // x1
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_PREV_ICON_NAME; // x0
  int64_t v171; // x1
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x0
  int64_t v179; // x1
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_ICON_TEXTURE_PATH; // x0
  int64_t v187; // x1
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  int64_t v194; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_ICON_TEXTURE_PREFIX; // x0
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x0
  int64_t v203; // x1
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  struct QuestBoardListViewItemDraw_StaticFields *v210; // x8
  int64_t v211; // x1
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  PartyOrganizationUtility_o *p_BANNER_POINT_SPNAME_OFF; // x0
  int64_t v219; // x1
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  struct QuestBoardListViewItemDraw_StaticFields *v226; // x8
  int64_t v227; // x1
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  PartyOrganizationUtility_o *p_QUEST_STORY_FACE_MASK_SPNAME; // x0
  int64_t v235; // x1
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  PartyOrganizationUtility_o *p_QUEST_MAIN_FACE_MASK_SPNAME; // x0
  int64_t v243; // x1
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  PartyOrganizationUtility_o *p_QUEST_EVENT_FACE_MASK_SPNAME; // x0
  int64_t v251; // x1
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  __int64 v258; // x0
  __int64 v259; // x1
  int64_t v260; // x2
  int32_t v261; // w3
  System_String_o *v262; // x4
  BattleSetupInfo_o *v263; // x5
  FollowerInfo_o *v264; // x6
  PartyListViewItem_o *v265; // x7
  int64_t v266; // x19
  int64_t v267; // x1
  int64_t v268; // x2
  int32_t v269; // w3
  System_String_o *v270; // x4
  BattleSetupInfo_o *v271; // x5
  FollowerInfo_o *v272; // x6
  PartyListViewItem_o *v273; // x7
  int64_t v274; // x1
  PartyOrganizationUtility_o *p_RP_SPNAME_FRAME; // x0
  int64_t v276; // x2
  int32_t v277; // w3
  System_String_o *v278; // x4
  BattleSetupInfo_o *v279; // x5
  FollowerInfo_o *v280; // x6
  PartyListViewItem_o *v281; // x7
  int64_t v282; // x2
  int32_t v283; // w3
  System_String_o *v284; // x4
  BattleSetupInfo_o *v285; // x5
  FollowerInfo_o *v286; // x6
  PartyListViewItem_o *v287; // x7
  int64_t v288; // x19
  int64_t v289; // x1
  int64_t v290; // x2
  int32_t v291; // w3
  System_String_o *v292; // x4
  BattleSetupInfo_o *v293; // x5
  FollowerInfo_o *v294; // x6
  PartyListViewItem_o *v295; // x7
  int64_t v296; // x1
  PartyOrganizationUtility_o *p_RP_SPNAME_POINT; // x0
  int64_t v298; // x2
  int32_t v299; // w3
  System_String_o *v300; // x4
  BattleSetupInfo_o *v301; // x5
  FollowerInfo_o *v302; // x6
  PartyListViewItem_o *v303; // x7
  QuestBoardListViewItemDraw_c *v304; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v305; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v306; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v307; // x8
  int64_t v308; // x1
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  int64_t v315; // x1
  PartyOrganizationUtility_o *p_QUEST_LOSE_NO_SPEND_SPRITE; // x0
  int64_t v317; // x2
  int32_t v318; // w3
  System_String_o *v319; // x4
  BattleSetupInfo_o *v320; // x5
  FollowerInfo_o *v321; // x6
  PartyListViewItem_o *v322; // x7
  int64_t v323; // x1
  PartyOrganizationUtility_o *p_QUEST_RETREAT_NO_SPEND_SPRITE; // x0
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  int64_t v331; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED; // x0
  int64_t v333; // x2
  int32_t v334; // w3
  System_String_o *v335; // x4
  BattleSetupInfo_o *v336; // x5
  FollowerInfo_o *v337; // x6
  PartyListViewItem_o *v338; // x7
  int64_t v339; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_FORMAT; // x0
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  int64_t v347; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  int64_t v349; // x2
  int32_t v350; // w3
  System_String_o *v351; // x4
  BattleSetupInfo_o *v352; // x5
  FollowerInfo_o *v353; // x6
  PartyListViewItem_o *v354; // x7
  int64_t v355; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  int64_t v357; // x2
  int32_t v358; // w3
  System_String_o *v359; // x4
  BattleSetupInfo_o *v360; // x5
  FollowerInfo_o *v361; // x6
  PartyListViewItem_o *v362; // x7
  int64_t v363; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  int64_t v365; // x2
  int32_t v366; // w3
  System_String_o *v367; // x4
  BattleSetupInfo_o *v368; // x5
  FollowerInfo_o *v369; // x6
  PartyListViewItem_o *v370; // x7
  int64_t v371; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  int64_t v373; // x2
  int32_t v374; // w3
  System_String_o *v375; // x4
  BattleSetupInfo_o *v376; // x5
  FollowerInfo_o *v377; // x6
  PartyListViewItem_o *v378; // x7
  int64_t v379; // x2
  int32_t v380; // w3
  System_String_o *v381; // x4
  BattleSetupInfo_o *v382; // x5
  FollowerInfo_o *v383; // x6
  PartyListViewItem_o *v384; // x7
  int64_t v385; // x19
  int64_t v386; // x1
  int64_t v387; // x2
  int32_t v388; // w3
  System_String_o *v389; // x4
  BattleSetupInfo_o *v390; // x5
  FollowerInfo_o *v391; // x6
  PartyListViewItem_o *v392; // x7
  int64_t v393; // x1
  int64_t v394; // x2
  int32_t v395; // w3
  System_String_o *v396; // x4
  BattleSetupInfo_o *v397; // x5
  FollowerInfo_o *v398; // x6
  PartyListViewItem_o *v399; // x7
  int64_t v400; // x1
  int64_t v401; // x2
  int32_t v402; // w3
  System_String_o *v403; // x4
  BattleSetupInfo_o *v404; // x5
  FollowerInfo_o *v405; // x6
  PartyListViewItem_o *v406; // x7
  int64_t v407; // x1
  int64_t v408; // x2
  int32_t v409; // w3
  System_String_o *v410; // x4
  BattleSetupInfo_o *v411; // x5
  FollowerInfo_o *v412; // x6
  PartyListViewItem_o *v413; // x7
  int64_t v414; // x1
  int64_t v415; // x2
  int32_t v416; // w3
  System_String_o *v417; // x4
  BattleSetupInfo_o *v418; // x5
  FollowerInfo_o *v419; // x6
  PartyListViewItem_o *v420; // x7
  void *v421; // x1
  int64_t v422; // x2
  int32_t v423; // w3
  System_String_o *v424; // x4
  BattleSetupInfo_o *v425; // x5
  FollowerInfo_o *v426; // x6
  PartyListViewItem_o *v427; // x7
  int64_t v428; // x1
  PartyOrganizationUtility_o *p_msQBoardL1Names; // x0
  int64_t v430; // x2
  int32_t v431; // w3
  System_String_o *v432; // x4
  BattleSetupInfo_o *v433; // x5
  FollowerInfo_o *v434; // x6
  PartyListViewItem_o *v435; // x7
  int64_t v436; // x1
  PartyOrganizationUtility_o *p_msQBoardL2Name_Story; // x0
  int64_t v438; // x2
  int32_t v439; // w3
  System_String_o *v440; // x4
  BattleSetupInfo_o *v441; // x5
  FollowerInfo_o *v442; // x6
  PartyListViewItem_o *v443; // x7
  int64_t v444; // x1
  PartyOrganizationUtility_o *p_msQBoardL2Name_Hero; // x0
  int64_t v446; // x2
  int32_t v447; // w3
  System_String_o *v448; // x4
  BattleSetupInfo_o *v449; // x5
  FollowerInfo_o *v450; // x6
  PartyListViewItem_o *v451; // x7
  int64_t v452; // x2
  int32_t v453; // w3
  System_String_o *v454; // x4
  BattleSetupInfo_o *v455; // x5
  FollowerInfo_o *v456; // x6
  PartyListViewItem_o *v457; // x7
  int64_t v458; // x19
  void *v459; // x1
  int64_t v460; // x2
  int32_t v461; // w3
  System_String_o *v462; // x4
  BattleSetupInfo_o *v463; // x5
  FollowerInfo_o *v464; // x6
  PartyListViewItem_o *v465; // x7
  int64_t v466; // x1
  int64_t v467; // x2
  int32_t v468; // w3
  System_String_o *v469; // x4
  BattleSetupInfo_o *v470; // x5
  FollowerInfo_o *v471; // x6
  PartyListViewItem_o *v472; // x7
  int64_t v473; // x1
  int64_t v474; // x2
  int32_t v475; // w3
  System_String_o *v476; // x4
  BattleSetupInfo_o *v477; // x5
  FollowerInfo_o *v478; // x6
  PartyListViewItem_o *v479; // x7
  int64_t v480; // x1
  int64_t v481; // x2
  int32_t v482; // w3
  System_String_o *v483; // x4
  BattleSetupInfo_o *v484; // x5
  FollowerInfo_o *v485; // x6
  PartyListViewItem_o *v486; // x7
  void *v487; // x1
  int64_t v488; // x2
  int32_t v489; // w3
  System_String_o *v490; // x4
  BattleSetupInfo_o *v491; // x5
  FollowerInfo_o *v492; // x6
  PartyListViewItem_o *v493; // x7
  int64_t v494; // x1
  int64_t v495; // x2
  int32_t v496; // w3
  System_String_o *v497; // x4
  BattleSetupInfo_o *v498; // x5
  FollowerInfo_o *v499; // x6
  PartyListViewItem_o *v500; // x7
  int64_t v501; // x1
  PartyOrganizationUtility_o *p_msQBoardL3Names; // x0
  int64_t v503; // x2
  int32_t v504; // w3
  System_String_o *v505; // x4
  BattleSetupInfo_o *v506; // x5
  FollowerInfo_o *v507; // x6
  PartyListViewItem_o *v508; // x7
  int64_t v509; // x2
  int32_t v510; // w3
  System_String_o *v511; // x4
  BattleSetupInfo_o *v512; // x5
  FollowerInfo_o *v513; // x6
  PartyListViewItem_o *v514; // x7
  int64_t v515; // x19
  void *v516; // x1
  int64_t v517; // x2
  int32_t v518; // w3
  System_String_o *v519; // x4
  BattleSetupInfo_o *v520; // x5
  FollowerInfo_o *v521; // x6
  PartyListViewItem_o *v522; // x7
  void *v523; // x1
  int64_t v524; // x2
  int32_t v525; // w3
  System_String_o *v526; // x4
  BattleSetupInfo_o *v527; // x5
  FollowerInfo_o *v528; // x6
  PartyListViewItem_o *v529; // x7
  int64_t v530; // x1
  int64_t v531; // x2
  int32_t v532; // w3
  System_String_o *v533; // x4
  BattleSetupInfo_o *v534; // x5
  FollowerInfo_o *v535; // x6
  PartyListViewItem_o *v536; // x7
  void *v537; // x1
  int64_t v538; // x2
  int32_t v539; // w3
  System_String_o *v540; // x4
  BattleSetupInfo_o *v541; // x5
  FollowerInfo_o *v542; // x6
  PartyListViewItem_o *v543; // x7
  void *v544; // x1
  int64_t v545; // x2
  int32_t v546; // w3
  System_String_o *v547; // x4
  BattleSetupInfo_o *v548; // x5
  FollowerInfo_o *v549; // x6
  PartyListViewItem_o *v550; // x7
  int64_t v551; // x1
  int64_t v552; // x2
  int32_t v553; // w3
  System_String_o *v554; // x4
  BattleSetupInfo_o *v555; // x5
  FollowerInfo_o *v556; // x6
  PartyListViewItem_o *v557; // x7
  void *v558; // x1
  PartyOrganizationUtility_o *p_msLabelMainSprNames; // x0
  int64_t v560; // x2
  int32_t v561; // w3
  System_String_o *v562; // x4
  BattleSetupInfo_o *v563; // x5
  FollowerInfo_o *v564; // x6
  PartyListViewItem_o *v565; // x7
  int64_t v566; // x2
  int32_t v567; // w3
  System_String_o *v568; // x4
  BattleSetupInfo_o *v569; // x5
  FollowerInfo_o *v570; // x6
  PartyListViewItem_o *v571; // x7
  int64_t v572; // x19
  void *v573; // x1
  int64_t v574; // x2
  int32_t v575; // w3
  System_String_o *v576; // x4
  BattleSetupInfo_o *v577; // x5
  FollowerInfo_o *v578; // x6
  PartyListViewItem_o *v579; // x7
  int64_t v580; // x1
  int64_t v581; // x2
  int32_t v582; // w3
  System_String_o *v583; // x4
  BattleSetupInfo_o *v584; // x5
  FollowerInfo_o *v585; // x6
  PartyListViewItem_o *v586; // x7
  int64_t v587; // x1
  int64_t v588; // x2
  int32_t v589; // w3
  System_String_o *v590; // x4
  BattleSetupInfo_o *v591; // x5
  FollowerInfo_o *v592; // x6
  PartyListViewItem_o *v593; // x7
  int64_t v594; // x1
  int64_t v595; // x2
  int32_t v596; // w3
  System_String_o *v597; // x4
  BattleSetupInfo_o *v598; // x5
  FollowerInfo_o *v599; // x6
  PartyListViewItem_o *v600; // x7
  void *v601; // x1
  int64_t v602; // x2
  int32_t v603; // w3
  System_String_o *v604; // x4
  BattleSetupInfo_o *v605; // x5
  FollowerInfo_o *v606; // x6
  PartyListViewItem_o *v607; // x7
  int64_t v608; // x1
  int64_t v609; // x2
  int32_t v610; // w3
  System_String_o *v611; // x4
  BattleSetupInfo_o *v612; // x5
  FollowerInfo_o *v613; // x6
  PartyListViewItem_o *v614; // x7
  void *v615; // x1
  int64_t v616; // x2
  int32_t v617; // w3
  System_String_o *v618; // x4
  BattleSetupInfo_o *v619; // x5
  FollowerInfo_o *v620; // x6
  PartyListViewItem_o *v621; // x7
  int64_t v622; // x1
  PartyOrganizationUtility_o *p_QuestBoardApSpNames; // x0
  int64_t v624; // x2
  int32_t v625; // w3
  System_String_o *v626; // x4
  BattleSetupInfo_o *v627; // x5
  FollowerInfo_o *v628; // x6
  PartyListViewItem_o *v629; // x7
  int64_t v630; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_ArrowOff; // x0
  int64_t v632; // x2
  int32_t v633; // w3
  System_String_o *v634; // x4
  BattleSetupInfo_o *v635; // x5
  FollowerInfo_o *v636; // x6
  PartyListViewItem_o *v637; // x7
  int64_t v638; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_ArrowOn; // x0
  int64_t v640; // x2
  int32_t v641; // w3
  System_String_o *v642; // x4
  BattleSetupInfo_o *v643; // x5
  FollowerInfo_o *v644; // x6
  PartyListViewItem_o *v645; // x7
  int64_t v646; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_ExArrowOff; // x0
  int64_t v648; // x2
  int32_t v649; // w3
  System_String_o *v650; // x4
  BattleSetupInfo_o *v651; // x5
  FollowerInfo_o *v652; // x6
  PartyListViewItem_o *v653; // x7
  int64_t v654; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_ExArrowOn; // x0
  int64_t v656; // x2
  int32_t v657; // w3
  System_String_o *v658; // x4
  BattleSetupInfo_o *v659; // x5
  FollowerInfo_o *v660; // x6
  PartyListViewItem_o *v661; // x7
  int64_t v662; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_LoopOff; // x0
  int64_t v664; // x2
  int32_t v665; // w3
  System_String_o *v666; // x4
  BattleSetupInfo_o *v667; // x5
  FollowerInfo_o *v668; // x6
  PartyListViewItem_o *v669; // x7
  int64_t v670; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_LoopOn; // x0
  int64_t v672; // x2
  int32_t v673; // w3
  System_String_o *v674; // x4
  BattleSetupInfo_o *v675; // x5
  FollowerInfo_o *v676; // x6
  PartyListViewItem_o *v677; // x7
  int64_t v678; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_LoopFirstOff; // x0
  int64_t v680; // x2
  int32_t v681; // w3
  System_String_o *v682; // x4
  BattleSetupInfo_o *v683; // x5
  FollowerInfo_o *v684; // x6
  PartyListViewItem_o *v685; // x7
  int64_t v686; // x1
  PartyOrganizationUtility_o *p_CHAPTER_SP_BASE_NAME; // x0
  int64_t v688; // x2
  int32_t v689; // w3
  System_String_o *v690; // x4
  BattleSetupInfo_o *v691; // x5
  FollowerInfo_o *v692; // x6
  PartyListViewItem_o *v693; // x7
  int64_t v694; // x1
  PartyOrganizationUtility_o *p_CHAPTER_SP_UNIT_NAME; // x0
  int64_t v696; // x2
  int32_t v697; // w3
  System_String_o *v698; // x4
  BattleSetupInfo_o *v699; // x5
  FollowerInfo_o *v700; // x6
  PartyListViewItem_o *v701; // x7
  int64_t v702; // x1
  PartyOrganizationUtility_o *p_PRE_BATTLE_ORGANIZATION; // x0
  int64_t v704; // x2
  int32_t v705; // w3
  System_String_o *v706; // x4
  BattleSetupInfo_o *v707; // x5
  FollowerInfo_o *v708; // x6
  PartyListViewItem_o *v709; // x7

  if ( (byte_4BD9333 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_23110/*"quest_board_icon_"*/);
    sub_1C21E38(&StringLiteral_20527/*"icon_reward_step{0}"*/);
    sub_1C21E38(&StringLiteral_20763/*"img_quest_lose_no_spend"*/);
    sub_1C21E38(&StringLiteral_23121/*"questboard_cap_closed"*/);
    sub_1C21E38(&StringLiteral_20836/*"img_slider_on"*/);
    sub_1C21E38(&StringLiteral_20718/*"img_loop_off"*/);
    sub_1C21E38(&StringLiteral_20785/*"img_questboard_story01"*/);
    sub_1C21E38(&StringLiteral_23132/*"questboard_shohi_bg_01"*/);
    sub_1C21E38(&StringLiteral_23118/*"questboard_ap_free"*/);
    sub_1C21E38(&StringLiteral_23130/*"questboard_icon_cap{0:D2}"*/);
    sub_1C21E38(&StringLiteral_20789/*"img_questboard_story03mask"*/);
    sub_1C21E38(&StringLiteral_20768/*"img_quest_spend"*/);
    sub_1C21E38(&StringLiteral_20773/*"img_questarrow_off"*/);
    sub_1C21E38(&StringLiteral_18104/*"chaldea_category_{0}"*/);
    sub_1C21E38(&StringLiteral_20787/*"img_questboard_story02mask"*/);
    sub_1C21E38(&StringLiteral_20774/*"img_questarrow_on"*/);
    sub_1C21E38(&StringLiteral_20784/*"img_questboard_main_"*/);
    sub_1C21E38(&StringLiteral_20764/*"img_quest_pre_organization"*/);
    sub_1C21E38(&StringLiteral_20766/*"img_quest_save"*/);
    sub_1C21E38(&StringLiteral_19624/*"event_war_"*/);
    sub_1C21E38(&StringLiteral_23119/*"questboard_ap_main"*/);
    sub_1C21E38(&StringLiteral_20791/*"img_questboard_story05mask"*/);
    sub_1C21E38(&StringLiteral_23133/*"questboard_shohi_bg_02"*/);
    sub_1C21E38(&StringLiteral_20782/*"img_questboard_hero03"*/);
    sub_1C21E38(&StringLiteral_23124/*"questboard_cap_closed_special_3"*/);
    sub_1C21E38(&StringLiteral_20783/*"img_questboard_knockdown"*/);
    sub_1C21E38(&StringLiteral_23186/*"raid_point_old"*/);
    sub_1C21E38(&StringLiteral_23183/*"raid_point"*/);
    sub_1C21E38(&StringLiteral_23123/*"questboard_cap_closed_special_2"*/);
    sub_1C21E38(&StringLiteral_20781/*"img_questboard_hero02"*/);
    sub_1C21E38(&StringLiteral_20539/*"icon_spot_next"*/);
    sub_1C21E38(&StringLiteral_23109/*"quest_board_"*/);
    sub_1C21E38(&StringLiteral_23131/*"questboard_shohi_"*/);
    sub_1C21E38(&StringLiteral_23184/*"raid_point_frame"*/);
    sub_1C21E38(&StringLiteral_20779/*"img_questboard_free_"*/);
    sub_1C21E38(&StringLiteral_23185/*"raid_point_frame_old"*/);
    sub_1C21E38(&StringLiteral_20777/*"img_questboard_damage"*/);
    sub_1C21E38(&StringLiteral_23111/*"quest_board_mask_"*/);
    sub_1C21E38(&StringLiteral_6404/*"EventUI/QuestBoardIcon/"*/);
    sub_1C21E38(&StringLiteral_20778/*"img_questboard_event{0:D3}"*/);
    sub_1C21E38(&StringLiteral_20790/*"img_questboard_story04mask"*/);
    sub_1C21E38(&StringLiteral_20793/*"img_questloop_on"*/);
    sub_1C21E38(&StringLiteral_20792/*"img_questloop_off"*/);
    sub_1C21E38(&StringLiteral_20796/*"img_questtxt_free"*/);
    sub_1C21E38(&StringLiteral_23127/*"questboard_cap{0:D3}"*/);
    sub_1C21E38(&StringLiteral_20788/*"img_questboard_story03"*/);
    sub_1C21E38(&StringLiteral_20775/*"img_questboard_"*/);
    sub_1C21E38(&StringLiteral_20770/*"img_quest_unit_{0:D2}"*/);
    sub_1C21E38(&StringLiteral_23122/*"questboard_cap_closed_special"*/);
    sub_1C21E38(&StringLiteral_20795/*"img_questtxt_event"*/);
    sub_1C21E38(&StringLiteral_20780/*"img_questboard_hero01"*/);
    sub_1C21E38(&StringLiteral_20771/*"img_questarrow1_off"*/);
    sub_1C21E38(&StringLiteral_23120/*"questboard_ap_story"*/);
    sub_1C21E38(&StringLiteral_20835/*"img_slider_off"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_20769/*"img_quest_spend2"*/);
    sub_1C21E38(&StringLiteral_20762/*"img_quest_lasttime"*/);
    sub_1C21E38(&StringLiteral_20772/*"img_questarrow1_on"*/);
    sub_1C21E38(&StringLiteral_23125/*"questboard_cap_closed_special_{0}"*/);
    sub_1C21E38(&StringLiteral_20786/*"img_questboard_story02"*/);
    sub_1C21E38(&StringLiteral_23154/*"qyestboard_ap_free"*/);
    sub_1C21E38(&StringLiteral_20538/*"icon_spot_free"*/);
    sub_1C21E38(&StringLiteral_23117/*"questboard_ap_"*/);
    sub_1C21E38(&StringLiteral_20765/*"img_quest_retreat_no_spend"*/);
    sub_1C21E38(&StringLiteral_23126/*"questboard_cap_closed_{0}"*/);
    byte_4BD9333 = 1;
  }
  v7 = QuestBoardListViewItemDraw_TypeInfo;
  static_fields = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->POS_Y_ITVL_AREA = xmmword_BFF6B0;
  *(_OWORD *)&static_fields->CLIP_W_AREA = xmmword_BFEDA0;
  static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  *(_OWORD *)&static_fields->PHASE_EXTRA_MAX = xmmword_BFF6C0;
  *(_OWORD *)&static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = xmmword_BFDB70;
  static_fields->CAMPAIGN_COST_COLOR.fields.a = 1.0;
  v7->static_fields->OVER_COST_COLOR = (struct UnityEngine_Color_o)xmmword_BFDE00;
  v9 = v7->static_fields;
  *(_QWORD *)&v9->NEW_POS_AREA.fields.x = 0x41D80000C3420000LL;
  v9->NEW_POS_AREA.fields.z = 0.0;
  v10 = v7->static_fields;
  *(_QWORD *)&v10->NEW_POS_SHORTCUT.fields.x = 0x423C0000C3530000LL;
  v10->NEW_POS_SHORTCUT.fields.z = 0.0;
  v11 = v7->static_fields;
  *(_QWORD *)&v11->NEW_POS_QUEST.fields.x = 0x423C0000C3530000LL;
  v11->NEW_POS_QUEST.fields.z = 0.0;
  v12 = v7->static_fields;
  *(_QWORD *)&v12->NEW_POS_QUEST_NEXT.fields.x = 0x42640000C2D20000LL;
  v12->NEW_POS_QUEST_NEXT.fields.z = 0.0;
  v13 = v7->static_fields;
  *(_OWORD *)&v13->NEW_W_DEFAULT = xmmword_BFDD20;
  *(_QWORD *)&v13->CLEAR_POS_AREA.fields.x = 0xC2500000431B0000LL;
  v13->CLEAR_POS_AREA.fields.z = 0.0;
  v14 = v7->static_fields;
  *(_QWORD *)&v14->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v14->CLEAR_POS_QUEST.fields.z = 0.0;
  v15 = v7->static_fields;
  *(_OWORD *)&v15->NEXT_POS_X_AREA_L = xmmword_BFDB80;
  v16 = StringLiteral_20539/*"icon_spot_next"*/;
  v15->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20539/*"icon_spot_next"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->NEXT_ICON_SPRITE_NAME, v16, v1, v2, v3, v4, v5, v6);
  v17 = StringLiteral_20538/*"icon_spot_free"*/;
  v18 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v18->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20538/*"icon_spot_free"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->FREE_ICON_SPRITE_NAME, v17, v19, v20, v21, v22, v23, v24);
  v25 = QuestBoardListViewItemDraw_TypeInfo;
  v26 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v26->PREV_POS_QUEST_PREV.fields.x = 0x42300000C35C0000LL;
  v26->PREV_POS_QUEST_PREV.fields.z = 0.0;
  v27 = v25->static_fields;
  *(_QWORD *)&v27->PREV_POS_QUEST_PREV_NEXT.fields.x = 0x426C0000C2DC0000LL;
  v27->PREV_POS_QUEST_PREV_NEXT.fields.z = 0.0;
  v28 = v25->static_fields;
  *(_QWORD *)&v28->PREV_POS_QUEST_INTERRUPT.fields.x = 0x42300000C3520000LL;
  v28->PREV_POS_QUEST_INTERRUPT.fields.z = 0.0;
  v29 = v25->static_fields;
  *(_QWORD *)&v29->PREV_POS_QUEST_INTERRUPT_NEXT.fields.x = 0x426C0000C2C80000LL;
  v29->PREV_POS_QUEST_INTERRUPT_NEXT.fields.z = 0.0;
  v30 = v25->static_fields;
  *(_QWORD *)&v30->LINE_ST_POS_AREA.fields.x = 0xC0A00000C3570000LL;
  v30->LINE_ST_POS_AREA.fields.z = 0.0;
  v31 = v25->static_fields;
  *(_QWORD *)&v31->LINE_ST_POS_SHORTCUT.fields.x = 0xC0A00000C3700000LL;
  v31->LINE_ST_POS_SHORTCUT.fields.z = 0.0;
  v32 = v25->static_fields;
  *(_QWORD *)&v32->COST_OBJ_POS.fields.x = 0xC1C00000C2F00000LL;
  v32->COST_OBJ_POS.fields.z = 0.0;
  v33 = v25->static_fields;
  *(_QWORD *)&v33->COST_OBJ_POS_WAR_BOARD.fields.x = 0xC1E00000C2F20000LL;
  v33->COST_OBJ_POS_WAR_BOARD.fields.z = 0.0;
  v34 = v25->static_fields;
  *(_OWORD *)&v34->COST_BG_WIDTH_SINGLE = xmmword_BFDF10;
  v34->COST_BG_WIDTH_DOUBLE_QP = 186;
  v35 = StringLiteral_23132/*"questboard_shohi_bg_01"*/;
  v34->COST_BG_ITEM = (struct System_String_o *)StringLiteral_23132/*"questboard_shohi_bg_01"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v34->COST_BG_ITEM, v35, v36, v37, v38, v39, v40, v41);
  v42 = StringLiteral_23133/*"questboard_shohi_bg_02"*/;
  p_COST_BG_QP = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (PartyOrganizationUtility_c *)StringLiteral_23133/*"questboard_shohi_bg_02"*/;
  sub_1C21DDC(p_COST_BG_QP, v42, v44, v45, v46, v47, v48, v49);
  v50 = QuestBoardListViewItemDraw_TypeInfo;
  v51 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v51->COST_1_ICON_AP_POS.fields.x = 1098907648LL;
  v51->COST_1_ICON_AP_POS.fields.z = 0.0;
  v52 = v50->static_fields;
  *(_QWORD *)&v52->COST_1_ICON_AP_POS_WAR_BOARD.fields.x = 1099956224LL;
  v52->COST_1_ICON_AP_POS_WAR_BOARD.fields.z = 0.0;
  v53 = v50->static_fields;
  *(_QWORD *)&v53->COST_1_LABEL_AP_POS.fields.x = 1103888384LL;
  v53->COST_1_LABEL_AP_POS.fields.z = 0.0;
  v54 = v50->static_fields;
  *(_QWORD *)&v54->COST_1_LABEL_AP_POS_WAR_BOARD.fields.x = 1104936960LL;
  v54->COST_1_LABEL_AP_POS_WAR_BOARD.fields.z = 0.0;
  v55 = v50->static_fields;
  *(_OWORD *)&v55->COST_2_ICON_NORMAL_POSITION_X = xmmword_BFEC30;
  *(_OWORD *)&v55->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_BFF1F0;
  *(_OWORD *)&v55->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_BFF140;
  v55->COST_LABEL_WIDTH_FOR_THREE_ITEM = 30.4;
  *(_QWORD *)&v55->COST_LABEL_DEFAULT_SPACING = 0x800000009LL;
  *(_QWORD *)&v55->SHOHI_SP_POS.fields.x = 0x41C0000041800000LL;
  v55->SHOHI_SP_POS.fields.z = 0.0;
  v56 = v50->static_fields;
  *(_QWORD *)&v56->SHOHI_SP_POS_WAR_BOARD.fields.x = 0x41C8000041900000LL;
  v56->SHOHI_SP_POS_WAR_BOARD.fields.z = 0.0;
  v57 = StringLiteral_20768/*"img_quest_spend"*/;
  p_SHOHI_SP_NAME = (PartyOrganizationUtility_o *)&v50->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20768/*"img_quest_spend"*/;
  sub_1C21DDC(p_SHOHI_SP_NAME, v57, v59, v60, v61, v62, v63, v64);
  v65 = StringLiteral_20769/*"img_quest_spend2"*/;
  p_SHOHI_SP_NAME_WAR_BOARD = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (PartyOrganizationUtility_c *)StringLiteral_20769/*"img_quest_spend2"*/;
  sub_1C21DDC(p_SHOHI_SP_NAME_WAR_BOARD, v65, v67, v68, v69, v70, v71, v72);
  v79 = QuestBoardListViewItemDraw_TypeInfo;
  v80 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&v80->QUEST_BOARD_PHASE_INTERVAL = xmmword_BFE960;
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    v79 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4BD6BB1 = 1;
    v80 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  }
  v81 = UnityEngine_Vector3_TypeInfo;
  v82 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v82->zeroVector.fields.z;
  *(_QWORD *)&v80->CHALLENGE_OBJ_POS_SINGLE.fields.x = *(_QWORD *)&v82->zeroVector.fields.x;
  v80->CHALLENGE_OBJ_POS_SINGLE.fields.z = z;
  v84 = v79->static_fields;
  *(_QWORD *)&v84->CHALLENGE_OBJ_POS_DOUBLE.fields.x = 1115160576LL;
  v84->CHALLENGE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v85 = v81->static_fields;
  v86 = v79->static_fields;
  v87 = v85->zeroVector.fields.z;
  *(_QWORD *)&v86->PHASE_OBJ_POS_SINGLE.fields.x = *(_QWORD *)&v85->zeroVector.fields.x;
  v86->PHASE_OBJ_POS_SINGLE.fields.z = v87;
  v88 = v79->static_fields;
  *(_QWORD *)&v88->PHASE_OBJ_POS_DOUBLE.fields.x = 1116995584LL;
  v88->PHASE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v89 = v79->static_fields;
  *(_QWORD *)&v89->PHASE_OBJ_POS_DOUBLE_QP.fields.x = 1117782016LL;
  v89->PHASE_OBJ_POS_DOUBLE_QP.fields.z = 0.0;
  v90 = v79->static_fields;
  *(_QWORD *)&v90->PHASE_OBJ_POS_TRIPLE_ITEM.fields.x = 1118699520LL;
  v90->PHASE_OBJ_POS_TRIPLE_ITEM.fields.z = 0.0;
  v91 = v79->static_fields;
  *(_QWORD *)&v91->PHASE_STR_POS_SINGLE.fields.x = 1116602368LL;
  v91->PHASE_STR_POS_SINGLE.fields.z = 0.0;
  v92 = v79->static_fields;
  *(_QWORD *)&v92->PHASE_STR_POS_DOUBLE.fields.x = 1113063424LL;
  v92->PHASE_STR_POS_DOUBLE.fields.z = 0.0;
  v93 = v79->static_fields;
  *(_QWORD *)&v93->PHASE_STR_POS_DOUBLE_QP.fields.x = 1111228416LL;
  v93->PHASE_STR_POS_DOUBLE_QP.fields.z = 0.0;
  v94 = v79->static_fields;
  *(_QWORD *)&v94->PHASE_STR_POS_TRIPLE_ITEM.fields.x = 1109393408LL;
  v94->PHASE_STR_POS_TRIPLE_ITEM.fields.z = 0.0;
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    v81 = UnityEngine_Vector3_TypeInfo;
    v79 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4BD6BB6 = 1;
  }
  v95 = v81->static_fields;
  v96 = v79->static_fields;
  v97 = v95->oneVector.fields.z;
  *(_QWORD *)&v96->PHASE_STR_SCL_SINGLE.fields.x = *(_QWORD *)&v95->oneVector.fields.x;
  v96->PHASE_STR_SCL_SINGLE.fields.z = v97;
  v98 = v79->static_fields;
  *(_QWORD *)&v98->PHASE_STR_SCL_DOUBLE.fields.x = 0x3F8000003F4CCCCDLL;
  v98->PHASE_STR_SCL_DOUBLE.fields.z = 1.0;
  v99 = v79->static_fields;
  *(_QWORD *)&v99->PHASE_STR_SCL_DOUBLE_QP.fields.x = 0x3F8000003F4CCCCDLL;
  v99->PHASE_STR_SCL_DOUBLE_QP.fields.z = 1.0;
  v100 = v79->static_fields;
  *(_QWORD *)&v100->PHASE_STR_SCL_TRIPLE_ITEM.fields.x = 0x3F8000003F333333LL;
  v100->PHASE_STR_SCL_TRIPLE_ITEM.fields.z = 1.0;
  v101 = v79->static_fields;
  v101->BOARD_MESSAGE_MAX_WITDH = 170;
  *(_QWORD *)&v101->BLACK_MARK_OBJ_POS.fields.x = 0x4284000000000000LL;
  v101->BLACK_MARK_OBJ_POS.fields.z = 0.0;
  v102 = v79->static_fields;
  *(_QWORD *)&v102->BLACK_MARK_OBJ_POS_CENTER.fields.x = 0LL;
  v102->BLACK_MARK_OBJ_POS_CENTER.fields.z = 0.0;
  v103 = v79->static_fields;
  *(_QWORD *)&v103->WHITE_MARK_OBJ_UNDER_POS.fields.x = 0xC284000000000000LL;
  v103->WHITE_MARK_OBJ_UNDER_POS.fields.z = 0.0;
  v104 = StringLiteral_19624/*"event_war_"*/;
  p_EVENT_WAR_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&v79->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_19624/*"event_war_"*/;
  sub_1C21DDC(p_EVENT_WAR_SPNAME_PREFIX, v104, v73, v74, v75, v76, v77, v78);
  v106 = StringLiteral_18104/*"chaldea_category_{0}"*/;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_18104/*"chaldea_category_{0}"*/;
  sub_1C21DDC(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v106, v108, v109, v110, v111, v112, v113);
  v114 = StringLiteral_23109/*"quest_board_"*/;
  p_QUEST_BOARD_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23109/*"quest_board_"*/;
  sub_1C21DDC(p_QUEST_BOARD_SPNAME_PREFIX, v114, v116, v117, v118, v119, v120, v121);
  v122 = StringLiteral_20775/*"img_questboard_"*/;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_20775/*"img_questboard_"*/;
  sub_1C21DDC(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v122, v124, v125, v126, v127, v128, v129);
  v130 = StringLiteral_23110/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23110/*"quest_board_icon_"*/;
  sub_1C21DDC(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v130, v132, v133, v134, v135, v136, v137);
  v138 = StringLiteral_23111/*"quest_board_mask_"*/;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23111/*"quest_board_mask_"*/;
  sub_1C21DDC(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v138, v140, v141, v142, v143, v144, v145);
  v146 = StringLiteral_23131/*"questboard_shohi_"*/;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23131/*"questboard_shohi_"*/;
  sub_1C21DDC(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v146, v148, v149, v150, v151, v152, v153);
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v155 = StringLiteral_23117/*"questboard_ap_"*/;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23117/*"questboard_ap_"*/;
  sub_1C21DDC(p_QUEST_BOARD_AP_SPNAME_PREFIX, v155, v156, v157, v158, v159, v160, v161);
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  v163 = StringLiteral_20777/*"img_questboard_damage"*/;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20777/*"img_questboard_damage"*/;
  sub_1C21DDC(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v163, v164, v165, v166, v167, v168, v169);
  p_QUEST_BOARD_PREV_ICON_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  v171 = StringLiteral_20762/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20762/*"img_quest_lasttime"*/;
  sub_1C21DDC(p_QUEST_BOARD_PREV_ICON_NAME, v171, v172, v173, v174, v175, v176, v177);
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  v179 = StringLiteral_20783/*"img_questboard_knockdown"*/;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20783/*"img_questboard_knockdown"*/;
  sub_1C21DDC(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v179, v180, v181, v182, v183, v184, v185);
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  v187 = StringLiteral_6404/*"EventUI/QuestBoardIcon/"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (PartyOrganizationUtility_c *)StringLiteral_6404/*"EventUI/QuestBoardIcon/"*/;
  sub_1C21DDC(p_QUEST_BOARD_ICON_TEXTURE_PATH, v187, v188, v189, v190, v191, v192, v193);
  v194 = StringLiteral_23110/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23110/*"quest_board_icon_"*/;
  sub_1C21DDC(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v194, v196, v197, v198, v199, v200, v201);
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
  v203 = StringLiteral_20527/*"icon_reward_step{0}"*/;
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_20527/*"icon_reward_step{0}"*/;
  sub_1C21DDC(p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v203, v204, v205, v206, v207, v208, v209);
  v210 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v210->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 0x300000004ELL;
  *(_QWORD *)&v210->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 0x4000000000000013LL;
  v211 = StringLiteral_20836/*"img_slider_on"*/;
  v210->BANNER_POINT_SPNAME_ON = (struct System_String_o *)StringLiteral_20836/*"img_slider_on"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v210->BANNER_POINT_SPNAME_ON, v211, v212, v213, v214, v215, v216, v217);
  p_BANNER_POINT_SPNAME_OFF = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  v219 = StringLiteral_20835/*"img_slider_off"*/;
  p_BANNER_POINT_SPNAME_OFF->klass = (PartyOrganizationUtility_c *)StringLiteral_20835/*"img_slider_off"*/;
  sub_1C21DDC(p_BANNER_POINT_SPNAME_OFF, v219, v220, v221, v222, v223, v224, v225);
  v226 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v226->SHORTCUT_FACE_MASK_SP_W = 0x7C00000088LL;
  v227 = StringLiteral_20787/*"img_questboard_story02mask"*/;
  v226->SHORTCUT_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20787/*"img_questboard_story02mask"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v226->SHORTCUT_FACE_MASK_SPNAME, v227, v228, v229, v230, v231, v232, v233);
  p_QUEST_STORY_FACE_MASK_SPNAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  v235 = StringLiteral_20789/*"img_questboard_story03mask"*/;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20789/*"img_questboard_story03mask"*/;
  sub_1C21DDC(p_QUEST_STORY_FACE_MASK_SPNAME, v235, v236, v237, v238, v239, v240, v241);
  p_QUEST_MAIN_FACE_MASK_SPNAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  v243 = StringLiteral_20790/*"img_questboard_story04mask"*/;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20790/*"img_questboard_story04mask"*/;
  sub_1C21DDC(p_QUEST_MAIN_FACE_MASK_SPNAME, v243, v244, v245, v246, v247, v248, v249);
  p_QUEST_EVENT_FACE_MASK_SPNAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  v251 = StringLiteral_20791/*"img_questboard_story05mask"*/;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20791/*"img_questboard_story05mask"*/;
  sub_1C21DDC(p_QUEST_EVENT_FACE_MASK_SPNAME, v251, v252, v253, v254, v255, v256, v257);
  v258 = sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !v258 )
    goto LABEL_48;
  v266 = v258;
  if ( !*(_DWORD *)(v258 + 24) )
    goto LABEL_47;
  v267 = StringLiteral_23185/*"raid_point_frame_old"*/;
  *(_QWORD *)(v258 + 32) = StringLiteral_23185/*"raid_point_frame_old"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v258 + 32), v267, v260, v261, v262, v263, v264, v265);
  if ( *(_DWORD *)(v266 + 24) <= 1u )
    goto LABEL_47;
  v274 = StringLiteral_23184/*"raid_point_frame"*/;
  *(_QWORD *)(v266 + 40) = StringLiteral_23184/*"raid_point_frame"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v266 + 40), v274, v268, v269, v270, v271, v272, v273);
  p_RP_SPNAME_FRAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (PartyOrganizationUtility_c *)v266;
  sub_1C21DDC(p_RP_SPNAME_FRAME, v266, v276, v277, v278, v279, v280, v281);
  v258 = sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !v258 )
    goto LABEL_48;
  v288 = v258;
  if ( !*(_DWORD *)(v258 + 24) )
    goto LABEL_47;
  v289 = StringLiteral_23186/*"raid_point_old"*/;
  *(_QWORD *)(v258 + 32) = StringLiteral_23186/*"raid_point_old"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v258 + 32), v289, v282, v283, v284, v285, v286, v287);
  if ( *(_DWORD *)(v288 + 24) <= 1u )
    goto LABEL_47;
  v296 = StringLiteral_23183/*"raid_point"*/;
  *(_QWORD *)(v288 + 40) = StringLiteral_23183/*"raid_point"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v288 + 40), v296, v290, v291, v292, v293, v294, v295);
  p_RP_SPNAME_POINT = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (PartyOrganizationUtility_c *)v288;
  sub_1C21DDC(p_RP_SPNAME_POINT, v288, v298, v299, v300, v301, v302, v303);
  v304 = QuestBoardListViewItemDraw_TypeInfo;
  v305 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v305->RESTRICTION_FONT_SPACING_MIN = -1;
  *(_QWORD *)&v305->RESTRICTION_DEFAULT_FONT_SIZE = 18LL;
  *(_QWORD *)&v305->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v305->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v306 = v304->static_fields;
  *(_QWORD *)&v306->RESTRICTION_FONT_SIZE_ALLOUT = 0x700000000ELL;
  *(_QWORD *)&v306->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v306->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v307 = v304->static_fields;
  *(_QWORD *)&v307->BANNER_ENTORY_EFFECT_DURATION = 0x41F000003F000000LL;
  v308 = StringLiteral_20766/*"img_quest_save"*/;
  v307->QUEST_BOARD_PREV_PAUSE_ICON_NAME = (struct System_String_o *)StringLiteral_20766/*"img_quest_save"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v307->QUEST_BOARD_PREV_PAUSE_ICON_NAME,
    v308,
    v309,
    v310,
    v311,
    v312,
    v313,
    v314);
  v315 = StringLiteral_20763/*"img_quest_lose_no_spend"*/;
  p_QUEST_LOSE_NO_SPEND_SPRITE = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_LOSE_NO_SPEND_SPRITE;
  p_QUEST_LOSE_NO_SPEND_SPRITE->klass = (PartyOrganizationUtility_c *)StringLiteral_20763/*"img_quest_lose_no_spend"*/;
  sub_1C21DDC(p_QUEST_LOSE_NO_SPEND_SPRITE, v315, v317, v318, v319, v320, v321, v322);
  v323 = StringLiteral_20765/*"img_quest_retreat_no_spend"*/;
  p_QUEST_RETREAT_NO_SPEND_SPRITE = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_RETREAT_NO_SPEND_SPRITE;
  p_QUEST_RETREAT_NO_SPEND_SPRITE->klass = (PartyOrganizationUtility_c *)StringLiteral_20765/*"img_quest_retreat_no_spend"*/;
  sub_1C21DDC(p_QUEST_RETREAT_NO_SPEND_SPRITE, v323, v325, v326, v327, v328, v329, v330);
  v331 = StringLiteral_23121/*"questboard_cap_closed"*/;
  p_QBOARD_CAP_CLOSED = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (PartyOrganizationUtility_c *)StringLiteral_23121/*"questboard_cap_closed"*/;
  sub_1C21DDC(p_QBOARD_CAP_CLOSED, v331, v333, v334, v335, v336, v337, v338);
  v339 = StringLiteral_23126/*"questboard_cap_closed_{0}"*/;
  p_QBOARD_CAP_CLOSED_FORMAT = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
  p_QBOARD_CAP_CLOSED_FORMAT->klass = (PartyOrganizationUtility_c *)StringLiteral_23126/*"questboard_cap_closed_{0}"*/;
  sub_1C21DDC(p_QBOARD_CAP_CLOSED_FORMAT, v339, v341, v342, v343, v344, v345, v346);
  v347 = StringLiteral_23125/*"questboard_cap_closed_special_{0}"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (PartyOrganizationUtility_c *)StringLiteral_23125/*"questboard_cap_closed_special_{0}"*/;
  sub_1C21DDC(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v347, v349, v350, v351, v352, v353, v354);
  v355 = StringLiteral_23122/*"questboard_cap_closed_special"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (PartyOrganizationUtility_c *)StringLiteral_23122/*"questboard_cap_closed_special"*/;
  sub_1C21DDC(p_QBOARD_CAP_CLOSED_SPECIAL, v355, v357, v358, v359, v360, v361, v362);
  v363 = StringLiteral_23123/*"questboard_cap_closed_special_2"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (PartyOrganizationUtility_c *)StringLiteral_23123/*"questboard_cap_closed_special_2"*/;
  sub_1C21DDC(p_QBOARD_CAP_CLOSED_SPECIAL_2, v363, v365, v366, v367, v368, v369, v370);
  v371 = StringLiteral_23124/*"questboard_cap_closed_special_3"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (PartyOrganizationUtility_c *)StringLiteral_23124/*"questboard_cap_closed_special_3"*/;
  sub_1C21DDC(p_QBOARD_CAP_CLOSED_SPECIAL_3, v371, v373, v374, v375, v376, v377, v378);
  v258 = sub_1C21EE0(string___TypeInfo, 7LL);
  if ( !v258 )
    goto LABEL_48;
  v385 = v258;
  if ( !*(_DWORD *)(v258 + 24) )
    goto LABEL_47;
  v386 = StringLiteral_20778/*"img_questboard_event{0:D3}"*/;
  *(_QWORD *)(v258 + 32) = StringLiteral_20778/*"img_questboard_event{0:D3}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v258 + 32), v386, v379, v380, v381, v382, v383, v384);
  if ( *(_DWORD *)(v385 + 24) <= 1u )
    goto LABEL_47;
  v393 = StringLiteral_23127/*"questboard_cap{0:D3}"*/;
  *(_QWORD *)(v385 + 40) = StringLiteral_23127/*"questboard_cap{0:D3}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v385 + 40), v393, v387, v388, v389, v390, v391, v392);
  if ( *(_DWORD *)(v385 + 24) <= 2u )
    goto LABEL_47;
  v400 = StringLiteral_18104/*"chaldea_category_{0}"*/;
  *(_QWORD *)(v385 + 48) = StringLiteral_18104/*"chaldea_category_{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v385 + 48), v400, v394, v395, v396, v397, v398, v399);
  if ( *(_DWORD *)(v385 + 24) <= 3u )
    goto LABEL_47;
  v407 = StringLiteral_20785/*"img_questboard_story01"*/;
  *(_QWORD *)(v385 + 56) = StringLiteral_20785/*"img_questboard_story01"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v385 + 56), v407, v401, v402, v403, v404, v405, v406);
  if ( *(_DWORD *)(v385 + 24) <= 4u )
    goto LABEL_47;
  v414 = StringLiteral_20780/*"img_questboard_hero01"*/;
  *(_QWORD *)(v385 + 64) = StringLiteral_20780/*"img_questboard_hero01"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v385 + 64), v414, v408, v409, v410, v411, v412, v413);
  if ( *(_DWORD *)(v385 + 24) <= 5u )
    goto LABEL_47;
  v421 = StringLiteral_1/*""*/;
  *(_QWORD *)(v385 + 72) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v385 + 72), (int64_t)v421, v415, v416, v417, v418, v419, v420);
  if ( *(_DWORD *)(v385 + 24) <= 6u )
    goto LABEL_47;
  v428 = StringLiteral_23127/*"questboard_cap{0:D3}"*/;
  *(_QWORD *)(v385 + 80) = StringLiteral_23127/*"questboard_cap{0:D3}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v385 + 80), v428, v422, v423, v424, v425, v426, v427);
  p_msQBoardL1Names = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (PartyOrganizationUtility_c *)v385;
  sub_1C21DDC(p_msQBoardL1Names, v385, v430, v431, v432, v433, v434, v435);
  v436 = StringLiteral_20786/*"img_questboard_story02"*/;
  p_msQBoardL2Name_Story = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (PartyOrganizationUtility_c *)StringLiteral_20786/*"img_questboard_story02"*/;
  sub_1C21DDC(p_msQBoardL2Name_Story, v436, v438, v439, v440, v441, v442, v443);
  v444 = StringLiteral_20781/*"img_questboard_hero02"*/;
  p_msQBoardL2Name_Hero = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (PartyOrganizationUtility_c *)StringLiteral_20781/*"img_questboard_hero02"*/;
  sub_1C21DDC(p_msQBoardL2Name_Hero, v444, v446, v447, v448, v449, v450, v451);
  v258 = sub_1C21EE0(string___TypeInfo, 7LL);
  if ( !v258 )
    goto LABEL_48;
  v458 = v258;
  if ( !*(_DWORD *)(v258 + 24) )
    goto LABEL_47;
  v459 = StringLiteral_1/*""*/;
  *(_QWORD *)(v258 + 32) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v258 + 32), (int64_t)v459, v452, v453, v454, v455, v456, v457);
  if ( *(_DWORD *)(v458 + 24) <= 1u )
    goto LABEL_47;
  v466 = StringLiteral_20784/*"img_questboard_main_"*/;
  *(_QWORD *)(v458 + 40) = StringLiteral_20784/*"img_questboard_main_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v458 + 40), v466, v460, v461, v462, v463, v464, v465);
  if ( *(_DWORD *)(v458 + 24) <= 2u )
    goto LABEL_47;
  v473 = StringLiteral_20779/*"img_questboard_free_"*/;
  *(_QWORD *)(v458 + 48) = StringLiteral_20779/*"img_questboard_free_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v458 + 48), v473, v467, v468, v469, v470, v471, v472);
  if ( *(_DWORD *)(v458 + 24) <= 3u )
    goto LABEL_47;
  v480 = StringLiteral_20788/*"img_questboard_story03"*/;
  *(_QWORD *)(v458 + 56) = StringLiteral_20788/*"img_questboard_story03"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v458 + 56), v480, v474, v475, v476, v477, v478, v479);
  if ( *(_DWORD *)(v458 + 24) <= 4u )
    goto LABEL_47;
  v487 = StringLiteral_1/*""*/;
  *(_QWORD *)(v458 + 64) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v458 + 64), (int64_t)v487, v481, v482, v483, v484, v485, v486);
  if ( *(_DWORD *)(v458 + 24) <= 5u )
    goto LABEL_47;
  v494 = StringLiteral_20779/*"img_questboard_free_"*/;
  *(_QWORD *)(v458 + 72) = StringLiteral_20779/*"img_questboard_free_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v458 + 72), v494, v488, v489, v490, v491, v492, v493);
  if ( *(_DWORD *)(v458 + 24) <= 6u )
    goto LABEL_47;
  v501 = StringLiteral_20782/*"img_questboard_hero03"*/;
  *(_QWORD *)(v458 + 80) = StringLiteral_20782/*"img_questboard_hero03"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v458 + 80), v501, v495, v496, v497, v498, v499, v500);
  p_msQBoardL3Names = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (PartyOrganizationUtility_c *)v458;
  sub_1C21DDC(p_msQBoardL3Names, v458, v503, v504, v505, v506, v507, v508);
  v258 = sub_1C21EE0(string___TypeInfo, 7LL);
  if ( !v258 )
    goto LABEL_48;
  v515 = v258;
  if ( !*(_DWORD *)(v258 + 24) )
    goto LABEL_47;
  v516 = StringLiteral_1/*""*/;
  *(_QWORD *)(v258 + 32) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v258 + 32), (int64_t)v516, v509, v510, v511, v512, v513, v514);
  if ( *(_DWORD *)(v515 + 24) <= 1u )
    goto LABEL_47;
  v523 = StringLiteral_1/*""*/;
  *(_QWORD *)(v515 + 40) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v515 + 40), (int64_t)v523, v517, v518, v519, v520, v521, v522);
  if ( *(_DWORD *)(v515 + 24) <= 2u )
    goto LABEL_47;
  v530 = StringLiteral_20796/*"img_questtxt_free"*/;
  *(_QWORD *)(v515 + 48) = StringLiteral_20796/*"img_questtxt_free"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v515 + 48), v530, v524, v525, v526, v527, v528, v529);
  if ( *(_DWORD *)(v515 + 24) <= 3u )
    goto LABEL_47;
  v537 = StringLiteral_1/*""*/;
  *(_QWORD *)(v515 + 56) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v515 + 56), (int64_t)v537, v531, v532, v533, v534, v535, v536);
  if ( *(_DWORD *)(v515 + 24) <= 4u
    || (v544 = StringLiteral_1/*""*/,
        *(_QWORD *)(v515 + 64) = StringLiteral_1/*""*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v515 + 64), (int64_t)v544, v538, v539, v540, v541, v542, v543),
        *(_DWORD *)(v515 + 24) <= 5u)
    || (v551 = StringLiteral_20795/*"img_questtxt_event"*/,
        *(_QWORD *)(v515 + 72) = StringLiteral_20795/*"img_questtxt_event"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v515 + 72), v551, v545, v546, v547, v548, v549, v550),
        *(_DWORD *)(v515 + 24) <= 6u) )
  {
LABEL_47:
    sub_1C2209C(v258, v259);
  }
  v558 = StringLiteral_1/*""*/;
  *(_QWORD *)(v515 + 80) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v515 + 80), (int64_t)v558, v552, v553, v554, v555, v556, v557);
  p_msLabelMainSprNames = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (PartyOrganizationUtility_c *)v515;
  sub_1C21DDC(p_msLabelMainSprNames, v515, v560, v561, v562, v563, v564, v565);
  v258 = sub_1C21EE0(string___TypeInfo, 8LL);
  if ( !v258 )
LABEL_48:
    sub_1C22094(v258, v259);
  v572 = v258;
  if ( !*(_DWORD *)(v258 + 24) )
    goto LABEL_47;
  v573 = StringLiteral_1/*""*/;
  *(_QWORD *)(v258 + 32) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v258 + 32), (int64_t)v573, v566, v567, v568, v569, v570, v571);
  if ( *(_DWORD *)(v572 + 24) <= 1u )
    goto LABEL_47;
  v580 = StringLiteral_23119/*"questboard_ap_main"*/;
  *(_QWORD *)(v572 + 40) = StringLiteral_23119/*"questboard_ap_main"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v572 + 40), v580, v574, v575, v576, v577, v578, v579);
  if ( *(_DWORD *)(v572 + 24) <= 2u )
    goto LABEL_47;
  v587 = StringLiteral_23118/*"questboard_ap_free"*/;
  *(_QWORD *)(v572 + 48) = StringLiteral_23118/*"questboard_ap_free"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v572 + 48), v587, v581, v582, v583, v584, v585, v586);
  if ( *(_DWORD *)(v572 + 24) <= 3u )
    goto LABEL_47;
  v594 = StringLiteral_23120/*"questboard_ap_story"*/;
  *(_QWORD *)(v572 + 56) = StringLiteral_23120/*"questboard_ap_story"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v572 + 56), v594, v588, v589, v590, v591, v592, v593);
  if ( *(_DWORD *)(v572 + 24) <= 4u )
    goto LABEL_47;
  v601 = StringLiteral_1/*""*/;
  *(_QWORD *)(v572 + 64) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v572 + 64), (int64_t)v601, v595, v596, v597, v598, v599, v600);
  if ( *(_DWORD *)(v572 + 24) <= 5u )
    goto LABEL_47;
  v608 = StringLiteral_23118/*"questboard_ap_free"*/;
  *(_QWORD *)(v572 + 72) = StringLiteral_23118/*"questboard_ap_free"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v572 + 72), v608, v602, v603, v604, v605, v606, v607);
  if ( *(_DWORD *)(v572 + 24) <= 6u )
    goto LABEL_47;
  v615 = StringLiteral_1/*""*/;
  *(_QWORD *)(v572 + 80) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v572 + 80), (int64_t)v615, v609, v610, v611, v612, v613, v614);
  if ( *(_DWORD *)(v572 + 24) <= 7u )
    goto LABEL_47;
  v622 = StringLiteral_23154/*"qyestboard_ap_free"*/;
  *(_QWORD *)(v572 + 88) = StringLiteral_23154/*"qyestboard_ap_free"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v572 + 88), v622, v616, v617, v618, v619, v620, v621);
  p_QuestBoardApSpNames = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (PartyOrganizationUtility_c *)v572;
  sub_1C21DDC(p_QuestBoardApSpNames, v572, v624, v625, v626, v627, v628, v629);
  v630 = StringLiteral_20773/*"img_questarrow_off"*/;
  p_msPhaseSprName_ArrowOff = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (PartyOrganizationUtility_c *)StringLiteral_20773/*"img_questarrow_off"*/;
  sub_1C21DDC(p_msPhaseSprName_ArrowOff, v630, v632, v633, v634, v635, v636, v637);
  v638 = StringLiteral_20774/*"img_questarrow_on"*/;
  p_msPhaseSprName_ArrowOn = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (PartyOrganizationUtility_c *)StringLiteral_20774/*"img_questarrow_on"*/;
  sub_1C21DDC(p_msPhaseSprName_ArrowOn, v638, v640, v641, v642, v643, v644, v645);
  v646 = StringLiteral_20771/*"img_questarrow1_off"*/;
  p_msPhaseSprName_ExArrowOff = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (PartyOrganizationUtility_c *)StringLiteral_20771/*"img_questarrow1_off"*/;
  sub_1C21DDC(p_msPhaseSprName_ExArrowOff, v646, v648, v649, v650, v651, v652, v653);
  v654 = StringLiteral_20772/*"img_questarrow1_on"*/;
  p_msPhaseSprName_ExArrowOn = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (PartyOrganizationUtility_c *)StringLiteral_20772/*"img_questarrow1_on"*/;
  sub_1C21DDC(p_msPhaseSprName_ExArrowOn, v654, v656, v657, v658, v659, v660, v661);
  v662 = StringLiteral_20792/*"img_questloop_off"*/;
  p_msPhaseSprName_LoopOff = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (PartyOrganizationUtility_c *)StringLiteral_20792/*"img_questloop_off"*/;
  sub_1C21DDC(p_msPhaseSprName_LoopOff, v662, v664, v665, v666, v667, v668, v669);
  v670 = StringLiteral_20793/*"img_questloop_on"*/;
  p_msPhaseSprName_LoopOn = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (PartyOrganizationUtility_c *)StringLiteral_20793/*"img_questloop_on"*/;
  sub_1C21DDC(p_msPhaseSprName_LoopOn, v670, v672, v673, v674, v675, v676, v677);
  v678 = StringLiteral_20718/*"img_loop_off"*/;
  p_msPhaseSprName_LoopFirstOff = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (PartyOrganizationUtility_c *)StringLiteral_20718/*"img_loop_off"*/;
  sub_1C21DDC(p_msPhaseSprName_LoopFirstOff, v678, v680, v681, v682, v683, v684, v685);
  v686 = StringLiteral_23130/*"questboard_icon_cap{0:D2}"*/;
  p_CHAPTER_SP_BASE_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_23130/*"questboard_icon_cap{0:D2}"*/;
  sub_1C21DDC(p_CHAPTER_SP_BASE_NAME, v686, v688, v689, v690, v691, v692, v693);
  v694 = StringLiteral_20770/*"img_quest_unit_{0:D2}"*/;
  p_CHAPTER_SP_UNIT_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20770/*"img_quest_unit_{0:D2}"*/;
  sub_1C21DDC(p_CHAPTER_SP_UNIT_NAME, v694, v696, v697, v698, v699, v700, v701);
  v702 = StringLiteral_20764/*"img_quest_pre_organization"*/;
  p_PRE_BATTLE_ORGANIZATION = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (PartyOrganizationUtility_c *)StringLiteral_20764/*"img_quest_pre_organization"*/;
  sub_1C21DDC(p_PRE_BATTLE_ORGANIZATION, v702, v704, v705, v706, v707, v708, v709);
}


void __fastcall QuestBoardListViewItemDraw___ctor(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  QuestBoardListViewItemDraw_c *v10; // x0
  struct UISprite_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BD9332 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UISprite__TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&UISprite___TypeInfo);
    byte_4BD9332 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(UnityEngine_GameObject___TypeInfo, 4LL);
  this->fields.mStatusSp = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mStatusSp, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v10 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v11 = (struct UISprite_array *)sub_1C21EE0(UISprite___TypeInfo, (unsigned int)v10->static_fields->PHASE_EXTRA_MAX);
  this->fields.mPhaseSp = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mPhaseSp, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v18;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mMultiSecondBattleInformation,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__Awake(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UILabel_o *mOptionRestrinctionLb; // x8

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  this->fields._bannerState_k__BackingField = 0;
  if ( !mOptionRestrinctionLb )
    sub_1C22094(this, method);
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
    sub_1C22094(this, questEntity);
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

  if ( (byte_4BD9321 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9321 = 1;
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
          sub_1C22094(v6, v5);
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
    if ( (byte_4BD931D & 1) == 0 )
    {
      sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__);
      sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
      sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD931D = 1;
    }
    if ( (byte_4BD931E & 1) == 0 )
    {
      sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
      byte_4BD931E = 1;
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
                                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
      (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__);
  }
  if ( (byte_4BD931F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4BD931F = 1;
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
  }
  if ( mInfoTextList && LODWORD(mInfoTextList->fields.eventCampaignEnt) )
  {
    mInfoTextList = (QuestBoardInformationText_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)mInfoTextList,
                                                     0,
                                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !mInfoTextList )
LABEL_28:
      sub_1C22094(mInfoTextList, eventCampaignEnt_low);
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
    sub_1C2209C(this, questBoardManager);
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
      ItemIconComponent__SetItemImage_39389052((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1C22094(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 1, 0LL);
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

  if ( (byte_4BD9316 & 1) == 0 )
  {
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BD9316 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_1212/*"0"*/;
  if ( isUppercase )
    v6 = 32;
  else
    v6 = 0;
  v7 = n % 0xAu;
  v8 = 96 - v6;
  v9 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62269980(v9, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v14 = n / 0x64u % 0xA;
      if ( v14 >= 2 )
      {
        if ( !v9 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_62278956(v9, v8 | v14, 0LL);
      }
      else if ( !v9 )
      {
LABEL_25:
        sub_1C22094(v10, v11);
      }
      System_Text_StringBuilder__Append_62278956(v9, 107 - v6, 0LL);
      v13 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v9 )
        goto LABEL_25;
      v13 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v13 >= 2 )
      System_Text_StringBuilder__Append_62278956(v9, v8 | v13, 0LL);
    System_Text_StringBuilder__Append_62278956(v9, 106 - v6, 0LL);
    if ( !v7 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                  v9,
                                  v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v9 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_62278956(v9, v8 | v7, 0LL);
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  EventCampaignEntity_o *Data; // x0
  System_String_o *v40; // x24
  int64_t v41; // x29
  QuestBoardInformationText_c **v42; // x19
  System_Collections_Generic_List_object__o *v43; // x27
  QuestBoardInformationText_c *v44; // x8
  EventCampaignEntity_o *v45; // x23
  QuestBoardInformationText_o *v46; // x28
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  QuestBoardInformationText_c **v57; // x20
  _BOOL4 HasFlag; // w25
  const MethodInfo *v59; // x3
  struct EventEntity_o *eventEnt; // x8
  BoardMessageEntity_o *OverrideQuestMessage; // x0
  BoardMessageEntity_o *v62; // x25
  __int64 v63; // x8
  BoardMessageEntity_o *v64; // x27
  System_Collections_Generic_List_object__o *v65; // x25
  System_String_o *v66; // x24
  int64_t endTime; // x19
  QuestBoardInformationText_o *v68; // x26
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  int v79; // w8
  void *v80; // x23
  unsigned int v81; // w27
  EventEntity_o *v82; // x24
  int32_t id; // w25
  _DWORD *v84; // x26
  const MethodInfo *v85; // x3
  int32_t v86; // w19
  BoardMessageEntity_o *v87; // x25
  System_String_o *v88; // x19
  Il2CppObject *EventName; // x0
  System_String_o *v90; // x19
  System_Collections_Generic_List_object__o *v91; // x25
  int64_t v92; // x26
  QuestBoardInformationText_o *v93; // x24
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  struct MapControl_QuestInfo_o *v104; // [xsp+0h] [xbp-A0h]
  struct MapControl_AreaBoardInfo_o *v105; // [xsp+8h] [xbp-98h]
  DataMasterBase_TMaster__TEntity__PKType__o *v106; // [xsp+10h] [xbp-90h]
  DataManager_o *v107; // [xsp+18h] [xbp-88h]
  int32_t key; // [xsp+2Ch] [xbp-74h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BD92F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BoardMessageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    sub_1C21E38(&StringLiteral_13596/*"TIME_REST_QUEST_BOARD_EVENT"*/);
    sub_1C21E38(&StringLiteral_13594/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4BD92F2 = 1;
  }
  entity = 0LL;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v106 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         v9,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = DataManager__GetMasterData_object_(
               v9,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_86;
  v12 = checkTime;
  v107 = v9;
  v104 = quest_info_k__BackingField;
  v105 = AreaBoardInfo_k__BackingField;
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
          v22 = (QuestBoardInformationText_o *)sub_1C22084(*v14);
          v23 = (Il2CppObject *)v22;
          v24 = v18;
          v25 = message;
          v26 = closedAt;
          goto LABEL_25;
        case 2:
          Instance = DataManager__GetMasterData_object_(
                       v107,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v18->fields.referenceId,
                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v27 = *((int *)Instance + 39);
          break;
        case 3:
          Instance = DataManager__GetMasterData_object_(
                       v107,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v18->fields.referenceId,
                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v27 = *((int *)Instance + 40);
          break;
        case 4:
          Instance = v106;
          if ( !v106 )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v106,
                       v18->fields.referenceId,
                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v27 = *((_QWORD *)Instance + 12);
          break;
        case 5:
          if ( !MasterData_object )
            goto LABEL_86;
          Data = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v18->fields.referenceId, 0LL);
          v40 = v18->fields.message;
          v41 = v18->fields.closedAt;
          v42 = v14;
          v43 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          v44 = *v14;
          v45 = Data;
          v46 = (QuestBoardInformationText_o *)sub_1C22084(v44);
          QuestBoardInformationText___ctor_35043080(v46, v18, v40, v41, checkTime, v45, 0LL);
          if ( !v43 )
            goto LABEL_86;
          items = v43->fields._items;
          v54 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v43->fields._version;
          if ( !items )
            goto LABEL_86;
          size = v43->fields._size;
          v14 = v42;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v43,
              (Il2CppObject *)v46,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &items->obj.klass + size;
            v43->fields._size = size + 1;
            v56[4] = (Il2CppClass *)v46;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v56 + 4), (int64_t)v46, v47, v48, v49, v50, v51, v52);
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
        v22 = (QuestBoardInformationText_o *)sub_1C22084(*v14);
        v23 = (Il2CppObject *)v22;
        v24 = v18;
        v25 = v28;
        v26 = v27;
LABEL_25:
        QuestBoardInformationText___ctor_35043080(v22, v24, v25, v26, v12, 0LL, 0LL);
        if ( !mInfoTextList )
          break;
        v35 = mInfoTextList->fields._items;
        v36 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !v35 )
          break;
        v37 = mInfoTextList->fields._size;
        if ( (unsigned int)v37 >= v35->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            v23,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &v35->obj.klass + v37;
          mInfoTextList->fields._size = v37 + 1;
          v38[4] = (Il2CppClass *)v23;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v23, v29, v30, v31, v32, v33, v34);
        }
      }
LABEL_37:
      if ( v16 == v17 )
        goto LABEL_40;
      if ( ++v17 >= v15->max_length )
        goto LABEL_87;
    }
LABEL_86:
    sub_1C22094(Instance, v6);
  }
LABEL_40:
  v57 = v14;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Instance )
    goto LABEL_86;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         key,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
  if ( v105->fields.eventEnt )
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
      eventEnt = v105->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_86;
      OverrideQuestMessage = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                               (QuestBoardListViewItemDraw_o *)Instance,
                               v15,
                               eventEnt->fields.id,
                               v59);
      if ( v105->fields.eventEnt )
      {
        v62 = OverrideQuestMessage;
        Instance = (void *)EventEntity__IsEventPeriod(v105->fields.eventEnt, checkTime, 0LL);
        if ( !v62 && ((unsigned __int8)Instance & 1) != 0 )
        {
          v63 = *(_QWORD *)&v15->max_length;
          if ( v63 )
          {
            if ( !(_DWORD)v63 )
              goto LABEL_87;
            v64 = v15->m_Items[0];
          }
          else
          {
            v64 = 0LL;
          }
          v65 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_13596/*"TIME_REST_QUEST_BOARD_EVENT"*/, 0LL);
          endTime = v104->fields.endTime;
          v68 = (QuestBoardInformationText_o *)sub_1C22084(*v14);
          QuestBoardInformationText___ctor_35043080(v68, v64, v66, endTime, checkTime, 0LL, 0LL);
          if ( !v65 )
            goto LABEL_86;
          v75 = v65->fields._items;
          v76 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v65->fields._version;
          if ( !v75 )
            goto LABEL_86;
          v77 = v65->fields._size;
          if ( (unsigned int)v77 >= v75->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v65,
              (Il2CppObject *)v68,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
          }
          else
          {
            v78 = &v75->obj.klass + v77;
            v65->fields._size = v77 + 1;
            v78[4] = (Il2CppClass *)v68;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v78 + 4), (int64_t)v68, v69, v70, v71, v72, v73, v74);
          }
        }
      }
    }
  }
  Instance = v106;
  if ( !v106 )
    goto LABEL_86;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)v106, 7, 1, 0, 0LL);
  if ( !Instance )
    goto LABEL_86;
  v79 = *((_DWORD *)Instance + 6);
  v80 = Instance;
  if ( v79 >= 1 )
  {
    v81 = 0;
    while ( v81 < v79 )
    {
      v82 = (EventEntity_o *)*((_QWORD *)v80 + (int)v81 + 4);
      if ( !v82 || !MasterData_object )
        goto LABEL_86;
      id = v82->fields.id;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, id, 0LL);
      if ( Instance )
      {
        v84 = Instance;
        Instance = (void *)EventCampaignEntity__isDispWarId((EventCampaignEntity_o *)Instance, key, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v86 = v84[5];
          v87 = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                  (QuestBoardListViewItemDraw_o *)Instance,
                  v15,
                  id,
                  v85);
          Instance = (void *)CombineAdjustTarget__isTerminalExposable(v86, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && !v87 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v88 = LocalizationManager__Get((System_String_o *)StringLiteral_13594/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
            EventName = (Il2CppObject *)EventEntity__getEventName(v82, 0LL);
            v90 = System_String__Format_63129848(v88, EventName, (Il2CppObject *)StringLiteral_25427/*"{0}"*/, 0LL);
            v91 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
            v92 = EventEntity__GetEndTime(v82, 0, 0LL);
            v93 = (QuestBoardInformationText_o *)sub_1C22084(*v57);
            QuestBoardInformationText___ctor(v93, v90, v92, 1, 1, 0LL, 0LL);
            if ( !v91 )
              goto LABEL_86;
            v100 = v91->fields._items;
            v101 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
            ++v91->fields._version;
            if ( !v100 )
              goto LABEL_86;
            v102 = v91->fields._size;
            if ( (unsigned int)v102 >= v100->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v91,
                (Il2CppObject *)v93,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v103 = &v100->obj.klass + v102;
              v91->fields._size = v102 + 1;
              v103[4] = (Il2CppClass *)v93;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v103 + 4), (int64_t)v93, v94, v95, v96, v97, v98, v99);
            }
          }
        }
      }
      v79 = *((_DWORD *)v80 + 6);
      if ( (int)++v81 >= v79 )
        return;
    }
LABEL_87:
    sub_1C2209C(Instance, v6);
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
  QuestBoardListViewItemDraw___c__DisplayClass356_0_o *v13; // x26
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
  int32_t consumeType; // w8
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v51; // x0
  int64_t checkTime; // x24
  int64_t v53; // x25
  QuestBoardInformationText_o *v54; // x22
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  System_String_o *v65; // x20
  Il2CppObject *v66; // x0
  System_String_o *v67; // x20
  int64_t v68; // x19
  QuestBoardListViewItemDraw_o *v69; // x0
  QuestEntity_o *v70; // x1
  EventCampaignEntity_o *v71; // x2
  bool v72; // w3
  int32_t *v73; // x4
  int32_t *v74; // x5
  bool *v75; // x6
  const MethodInfo *v76; // x7
  int32_t Num_k__BackingField; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BD931A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Predicate_UserOwnItemInfo__TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&TerminalBoardOptionTextData_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass356_0__CreateQuestBoardInformationText_b__0__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass356_0_TypeInfo);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_13594/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    sub_1C21E38(&StringLiteral_13595/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/);
    byte_4BD931A = 1;
  }
  v13 = (QuestBoardListViewItemDraw___c__DisplayClass356_0_o *)sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass356_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass356_0___ctor(v13, 0LL);
  if ( !eventCampaignEnt )
    goto LABEL_67;
  target = eventCampaignEnt->fields.target;
  isTerminalExposable = (Il2CppObject *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v17 = 0LL;
  if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    return v17;
  if ( !eventEnt )
    goto LABEL_67;
  id = eventEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_67;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_67;
  v15 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewManager_TypeInfo )
  {
    if ( !v13 )
      goto LABEL_67;
    v13->fields.checkTime = (int64_t)manager[1].fields.rightItem;
    if ( !isTerminalExposable )
      goto LABEL_67;
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
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13594/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
      v38 = System_String__Format_63129848(
              v37,
              (Il2CppObject *)eventCampaignEnt->fields.entryCondMessage,
              (Il2CppObject *)StringLiteral_25427/*"{0}"*/,
              0LL);
      EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
      v40 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
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
      v24 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_UserOwnItemInfo__TypeInfo);
      System_Predicate_object____ctor(
        v24,
        (Il2CppObject *)v13,
        Method_QuestBoardListViewItemDraw___c__DisplayClass356_0__CreateQuestBoardInformationText_b__0__,
        0LL);
      if ( ContinueItemInfoList )
      {
        v25 = System_Collections_Generic_List_object___Find(
                ContinueItemInfoList,
                (System_Predicate_T__o *)v24,
                (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v25 )
        {
          v26 = (UserOwnItemInfo_o *)v25;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13595/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, 0LL);
          Num_k__BackingField = v26->fields._Num_k__BackingField;
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Num_k__BackingField, v28, v29, v30);
          v32 = System_String__Format_63129848(v27, v31, (Il2CppObject *)StringLiteral_25427/*"{0}"*/, 0LL);
          EventName = EventEntity__getEventName(eventEnt, 0LL);
          ImageId = UserOwnItemInfo__get_ImageId(v26, 0LL);
          v35 = (TerminalBoardOptionTextData_o *)sub_1C22084(TerminalBoardOptionTextData_TypeInfo);
          TerminalBoardOptionTextData___ctor(v35, EventName, v32, ImageId, 0, 0LL);
          v36 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v17 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
          QuestBoardInformationText___ctor(v17, v32, v36, 1, 0, v35, 0LL);
          return v17;
        }
        return 0LL;
      }
LABEL_67:
      sub_1C22094(isTerminalExposable, v15);
    }
    if ( isQuestNoneCleared )
    {
      if ( target > 24 )
      {
        if ( target != 26 )
        {
          if ( target != 25 )
            goto LABEL_64;
LABEL_50:
          if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
            return 0LL;
          if ( !questEntity )
            goto LABEL_67;
          consumeType = questEntity->fields.consumeType;
          if ( consumeType != 4 && consumeType != 1 )
            return 0LL;
LABEL_39:
          if ( target == 24 )
          {
            if ( !QuestBoardListViewItemDraw__IsValidSupportSelection(
                    (QuestBoardListViewItemDraw_o *)isTerminalExposable,
                    questEntity,
                    phase,
                    v22) )
              return 0LL;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( !questEntity || !isTerminalExposable )
              goto LABEL_67;
            Entity = QuestPhaseMaster__GetEntity(
                       (QuestPhaseMaster_o *)isTerminalExposable,
                       questEntity->fields.id,
                       phase,
                       0LL);
            targetIds = eventCampaignEnt->fields.targetIds;
            if ( targetIds && Entity && *(_QWORD *)&targetIds->max_length )
            {
              if ( Entity->fields.isNpcOnly )
                return 0LL;
LABEL_63:
              v17 = 0LL;
              if ( QuestPhaseEntity__IsNoneSupportFriendPoint(Entity, 0LL) )
                return v17;
              goto LABEL_64;
            }
            if ( Entity )
              goto LABEL_63;
          }
LABEL_64:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v65 = LocalizationManager__Get((System_String_o *)StringLiteral_13594/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
          v66 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
          v67 = System_String__Format_63129848(v65, v66, (Il2CppObject *)StringLiteral_25427/*"{0}"*/, 0LL);
          v68 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v40 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
          v41 = v40;
          v44 = 1;
          v42 = v67;
          v43 = v68;
          goto LABEL_27;
        }
LABEL_55:
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v51 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        checkTime = v13->fields.checkTime;
        v53 = v51;
        v54 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
        QuestBoardInformationText___ctor_35043248(v54, eventEnt, detail, v53, checkTime, eventCampaignEnt, 0LL);
        if ( !mInfoTextList )
          goto LABEL_67;
        items = mInfoTextList->fields._items;
        v62 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !items )
          goto LABEL_67;
        size = mInfoTextList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            (Il2CppObject *)v54,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &items->obj.klass + size;
          mInfoTextList->fields._size = size + 1;
          v64[4] = (Il2CppClass *)v54;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v54, v55, v56, v57, v58, v59, v60);
        }
        return 0LL;
      }
LABEL_38:
      if ( target != 12 )
        goto LABEL_39;
      goto LABEL_50;
    }
    if ( target <= 24 )
      goto LABEL_38;
    v17 = 0LL;
    if ( target != 25 )
    {
      if ( target == 26 )
        goto LABEL_55;
      if ( target != 35 )
        goto LABEL_64;
    }
    return v17;
  }
  sub_1C22354(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v69, v70, v71, v72, v73, v74, v75, v76);
  return result;
}


BannerEntity_o *__fastcall QuestBoardListViewItemDraw__FindExchangeSvtCoinBannerEntity(
        QuestBoardListViewItemDraw_o *this,
        BannerEntity_array *entityList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  BannerEntity_o *v5; // x20
  unsigned __int64 v6; // x22
  BannerEntity_o *v7; // x21

  if ( !entityList )
    sub_1C22094(this, 0LL);
  v3 = *(_QWORD *)&entityList->max_length;
  if ( (int)v3 < 1 )
    return 0LL;
  v5 = 0LL;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1C2209C(this, entityList);
    v7 = entityList->m_Items[v6];
    if ( v7 )
    {
      this = (QuestBoardListViewItemDraw_o *)BannerEntity__IsExchangeSvtCoin(entityList->m_Items[v6], 0LL);
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
    LODWORD(v3) = entityList->max_length;
    ++v6;
  }
  while ( (__int64)v6 < (int)v3 );
  return v5;
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
    sub_1C22094(this, boardMessageData);
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
  if ( (byte_4BD932D & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD932D = 1;
  }
  v2 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v2 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_AP_SPNAME_PREFIX = v2->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_63115476(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0LL);
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
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  QuestBoardListViewItemDraw_o *v46; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *v47; // x1
  int32_t v48; // w2
  bool v49; // w3
  const MethodInfo *v50; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD9317 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_13604/*"TIME_REST_STRING"*/);
    byte_4BD9317 = 1;
  }
  entity = 0LL;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
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
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
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
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
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
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_28;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
            &entity,
            v26->fields.eventId,
            (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13604/*"TIME_REST_STRING"*/, 0LL);
    v33 = System_String__Concat_63128740(
            EventName,
            (System_String_o *)StringLiteral_117/*" "*/,
            v32,
            (System_String_o *)StringLiteral_25427/*"{0}"*/,
            0LL);
    v34 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v34, v33, v30, 0, 1, 0LL, 0LL);
    items = v15->fields._items;
    v42 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++v15->fields._version;
    if ( items )
    {
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v34,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v34;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v34, v35, v36, v37, v38, v39, v40);
      }
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v15;
    }
LABEL_28:
    sub_1C22094(CampaignTextListByEventQuestMaster, v19);
  }
  sub_1C22354(manager);
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)QuestBoardListViewItemDraw__HasNewQuestInWar(
                                                                           v46,
                                                                           v47,
                                                                           v48,
                                                                           v49,
                                                                           v50);
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
  System_Collections_Generic_List_object__o *v8; // x29
  EventEntity_array *EnabledEventCampaignForQuest; // x25
  System_Collections_Generic_List_object__o *v14; // x23
  int64_t Instance; // x0
  QuestBoardListViewManager_c *v16; // x1
  DataManager_o *v17; // x21
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v19; // x20
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v21; // x24
  __int64 methodPtr_low; // x9
  Il2CppObject *v23; // x21
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_object__o *v25; // x28
  int max_length; // w8
  unsigned int v27; // w22
  EventEntity_o *v28; // x8
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int64_t v38; // x27
  Il2CppClass **v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  __int64 v50; // x21
  __int64 v51; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *current; // x1
  EventCampaignEntity_o **v60; // x20
  __int64 v61; // x0
  __int64 v62; // x1
  _BOOL8 v63; // x0
  __int64 v64; // x1
  System_Func_object__bool__o *v65; // x27
  Il2CppObject *v66; // x0
  const MethodInfo *v67; // x6
  Il2CppObject *QuestBoardInformationText; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  __int64 v80; // x20
  __int64 v81; // x0
  __int64 v82; // x1
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  Il2CppObject *v89; // x1
  System_Func_object__bool__o *v90; // x21
  Il2CppObject *v91; // x0
  const MethodInfo *v92; // x7
  void *v94; // x0
  void *v95; // x19
  int v96; // w1
  __int64 v97; // x20
  int32_t *v98; // [xsp+0h] [xbp-D0h]
  int32_t *v99; // [xsp+8h] [xbp-C8h]
  bool *v100; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+30h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+50h] [xbp-80h] BYREF

  EnabledEventCampaignForQuest = (EventEntity_array *)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4BD9318 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C21E38(&System_Func_EventEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass354_0__GetCampaignTextListByEventQuestMaster_b__0__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass354_0_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass354_1__GetCampaignTextListByEventQuestMaster_b__1__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass354_1_TypeInfo);
    byte_4BD9318 = 1;
  }
  memset(&v106, 0, sizeof(v106));
  entity = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  v17 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v19 = DataManager__GetMasterData_object_(
          v17,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v17,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        questId,
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_56;
  v21 = (QuestEntity_o *)Instance;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_56;
  v16 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !MasterData_object )
      goto LABEL_56;
    EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                     (EventQuestMaster_o *)MasterData_object,
                                     questId,
                                     phase,
                                     *(_QWORD *)(Instance + 584),
                                     7,
                                     0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v98 = costCalcVal;
    v99 = fixedVal;
    v100 = isNotItemConsume;
    v23 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    v25 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !EnabledEventCampaignForQuest )
      goto LABEL_56;
    max_length = EnabledEventCampaignForQuest->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
          sub_1C2209C(Instance, v16);
        v28 = EnabledEventCampaignForQuest->m_Items[v27];
        if ( !v28 || !v19 )
          break;
        Instance = (int64_t)EventCampaignMaster__getData((EventCampaignMaster_o *)v19, v28->fields.id, 0LL);
        if ( Instance )
        {
          if ( !v25 )
            break;
          items = v25->fields._items;
          v36 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v25->fields._version;
          if ( !items )
            break;
          size = v25->fields._size;
          v38 = Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)Instance,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + size;
            v25->fields._size = size + 1;
            v39[4] = (Il2CppClass *)v38;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), v38, v29, v30, v31, v32, v33, v34);
          }
          if ( !v23 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(
                       (EventCampaignReleaseMaster_o *)v23,
                       *(_DWORD *)(v38 + 16),
                       *(_DWORD *)(v38 + 20),
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            v46 = v8->fields._items;
            v47 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v8->fields._version;
            if ( !v46 )
              break;
            v48 = v8->fields._size;
            if ( (unsigned int)v48 >= v46->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v38,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &v46->obj.klass + v48;
              v8->fields._size = v48 + 1;
              v49[4] = (Il2CppClass *)v38;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v49 + 4), v38, v40, v41, v42, v43, v44, v45);
            }
          }
        }
        max_length = EnabledEventCampaignForQuest->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_33;
      }
LABEL_56:
      sub_1C22094(Instance, v16);
    }
LABEL_33:
    Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                          (System_Collections_Generic_List_EventCampaignEntity__o *)v25,
                          0LL);
    if ( !Instance )
      goto LABEL_56;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v104,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v106 = v104;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v106,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v50 = sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass354_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass354_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass354_0_o *)v50,
        0LL);
      if ( !v50 )
        sub_1C22094(v51, v52);
      current = v106.fields._current;
      *(_QWORD *)(v50 + 16) = v106.fields._current;
      v60 = (EventCampaignEntity_o **)(v50 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v50 + 16), (int64_t)current, v53, v54, v55, v56, v57, v58);
      if ( !Master_object )
        sub_1C22094(v61, v62);
      v63 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, phase, 0LL);
      if ( v63 )
      {
        if ( !*v60 )
          sub_1C22094(v63, v64);
        if ( (*v60)->fields.target == 24 )
        {
          if ( !entity )
            sub_1C22094(0LL, v64);
          if ( QuestPhaseEntity__IsNoneSupportFriendPoint(entity, 0LL) )
            continue;
        }
      }
      v65 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v65,
        (Il2CppObject *)v50,
        Method_QuestBoardListViewItemDraw___c__DisplayClass354_0__GetCampaignTextListByEventQuestMaster_b__0__,
        0LL);
      v66 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
              (System_Collections_Generic_IEnumerable_TSource__o *)EnabledEventCampaignForQuest,
              (System_Func_TSource__bool__o *)v65,
              (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
      QuestBoardInformationText = (Il2CppObject *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                                    this,
                                                    v21,
                                                    (EventEntity_o *)v66,
                                                    *v60,
                                                    phase,
                                                    isQuestNoneCleared,
                                                    v67);
      v75 = (int64_t)QuestBoardInformationText;
      if ( QuestBoardInformationText )
      {
        if ( !v14 )
          sub_1C22094(QuestBoardInformationText, QuestBoardInformationText);
        v76 = v14->fields._items;
        v77 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++v14->fields._version;
        if ( !v76 )
          sub_1C22094(QuestBoardInformationText, QuestBoardInformationText);
        v78 = v14->fields._size;
        if ( (unsigned int)v78 >= v76->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            QuestBoardInformationText,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        }
        else
        {
          v79 = &v76->obj.klass + v78;
          v14->fields._size = v78 + 1;
          v79[4] = (Il2CppClass *)v75;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v79 + 4), v75, v69, v70, v71, v72, v73, v74);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v106,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  else
  {
    sub_1C22354(Instance);
    v95 = v94;
    if ( v96 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v106,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      sub_1D0C8C8(v95);
    }
    v97 = *(_QWORD *)__cxa_begin_catch(v94);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v106,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v97 )
      sub_1C2208C(v97);
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v8,
                        0LL);
  if ( !Instance )
    goto LABEL_56;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v104,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v106 = v104;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v106,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    v80 = sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass354_1_TypeInfo);
    QuestBoardListViewItemDraw___c__DisplayClass354_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass354_1_o *)v80,
      0LL);
    if ( !v80 )
      sub_1C22094(v81, v82);
    v89 = v106.fields._current;
    *(_QWORD *)(v80 + 16) = v106.fields._current;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 16), (int64_t)v89, v83, v84, v85, v86, v87, v88);
    v90 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v90,
      (Il2CppObject *)v80,
      Method_QuestBoardListViewItemDraw___c__DisplayClass354_1__GetCampaignTextListByEventQuestMaster_b__1__,
      0LL);
    v91 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
            (System_Collections_Generic_IEnumerable_TSource__o *)EnabledEventCampaignForQuest,
            (System_Func_TSource__bool__o *)v90,
            (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    QuestBoardListViewItemDraw__CalcQuestCost(
      (QuestBoardListViewItemDraw_o *)v91,
      v21,
      *(EventCampaignEntity_o **)(v80 + 16),
      isQuestNoneCleared,
      v98,
      v99,
      v100,
      v92);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v106,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v14;
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BD9319 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarGroupMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9319 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v13 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  v15 = DataManager__GetMasterData_object_(
          v13,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v13,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                questId,
                                (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_32;
  v16 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 7, 1, 0, 0LL);
  if ( !v16 )
    goto LABEL_32;
  v17 = Instance;
  spotId = v16->fields.spotId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                spotId,
                                (const MethodInfo_325BE14 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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
            sub_1C2209C(Instance, v12);
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
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarGroupMaster___);
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
                  v36 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
                  ++v10->fields._version;
                  if ( !items )
                    break;
                  size = v10->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)QuestBoardInformationText,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v38 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v38[4] = (Il2CppClass *)QuestBoardInformationText;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)(v38 + 4),
                      (int64_t)QuestBoardInformationText,
                      v29,
                      v30,
                      v31,
                      v32,
                      v33,
                      v34);
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
        sub_1C22094(Instance, v12);
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

  if ( (byte_4BD92FF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    byte_4BD92FF = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v6 = this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_13;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_25427/*"{0}"*/, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
        this = (QuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
        if ( MasterData_object )
        {
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                   (int32_t)this,
                                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
            return System_String__Format((System_String_o *)v6, BattleName, 0LL);
          }
        }
      }
LABEL_13:
      sub_1C22094(this, questEnt);
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

  if ( (byte_4BD9308 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD9308 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventAddMaster___);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = (WarEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            warId,
                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        warId,
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
    sub_1C22094(Master_object, v9);
  }
  v23 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v23 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v23->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v25 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_63115476(EVENT_WAR_SPNAME_PREFIX, v25, 0LL);
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        QuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  QuestBoardListViewItemDraw_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4BD92FE & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD92FE = 1;
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

  if ( (byte_4BD9315 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD9315 = 1;
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

  if ( (byte_4BD9314 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9314 = 1;
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  int64_t v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  QuestPhasePresentEntity_o *v20; // x8
  QuestPhasePresentEntity_o *presentEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD9305 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhasePresentMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    byte_4BD9305 = 1;
  }
  presentEnt = 0LL;
  *phasePresentData = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)phasePresentData,
    0LL,
    (int64_t)questEnt,
    currentPhase,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhasePresentMaster___);
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
    v13 = sub_1C22084(QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    QuestBoardListViewItemDraw_PhasePresentData___ctor((QuestBoardListViewItemDraw_PhasePresentData_o *)v13, 0LL);
    v20 = presentEnt;
    if ( presentEnt && v13 )
    {
      *(_QWORD *)(v13 + 16) = *(_QWORD *)&presentEnt->fields.phase;
      *(_DWORD *)(v13 + 24) = v20->fields.giftIconId;
      *phasePresentData = (QuestBoardListViewItemDraw_PhasePresentData_o *)v13;
      sub_1C21DDC((PartyOrganizationUtility_o *)phasePresentData, v13, v14, v15, v16, v17, v18, v19);
      return 1;
    }
LABEL_15:
    sub_1C22094(Master_object, v12);
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

  if ( (byte_4BD9301 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_20796/*"img_questtxt_free"*/);
    sub_1C21E38(&StringLiteral_20795/*"img_questtxt_event"*/);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9301 = 1;
  }
  if ( !questEnt )
    sub_1C22094(this, questEnt);
  iconId = questEnt->fields.iconId;
  v6 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v12 = &StringLiteral_20795/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v12 = &StringLiteral_20796/*"img_questtxt_free"*/;
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
    return System_String__Concat_63115476(QUEST_BOARD_ICON_SPNAME_PREFIX, v10, 0LL);
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

  if ( (byte_4BD9302 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD9302 = 1;
  }
  if ( !questEnt )
    sub_1C22094(this, questEnt);
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
    return System_String__Concat_63115476(QUEST_BOARD_ICON_SPNAME_PREFIX, v11, 0LL);
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
    return QuestEntity__getRecommendLv_40739724(questEnt, questPhase, 0LL);
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
    sub_1C22094(this, status);
  if ( status - 1 >= mStatusSp->max_length )
    sub_1C2209C(this, status);
  return mStatusSp->m_Items[status - 1];
}


bool __fastcall QuestBoardListViewItemDraw__HasExchangeSvtCoinBannerEntity(
        QuestBoardListViewItemDraw_o *this,
        BannerEntity_array *bannerEntList,
        int32_t maxCount,
        const MethodInfo *method)
{
  il2cpp_array_size_t v6; // w21
  bool v7; // w22

  if ( maxCount >= 1 )
  {
    if ( bannerEntList )
    {
      v6 = 0;
      v7 = 1;
      while ( 1 )
      {
        if ( v6 >= bannerEntList->max_length )
          sub_1C2209C(this, bannerEntList);
        this = (QuestBoardListViewItemDraw_o *)bannerEntList->m_Items[v6];
        if ( !this )
          break;
        this = (QuestBoardListViewItemDraw_o *)BannerEntity__IsExchangeSvtCoin((BannerEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v7 = (int)++v6 < maxCount;
          if ( maxCount != v6 )
            continue;
        }
        return v7;
      }
    }
    sub_1C22094(this, bannerEntList);
  }
  return 0;
}


bool __fastcall QuestBoardListViewItemDraw__HasNewQuestInWar(
        QuestBoardListViewItemDraw_o *this,
        System_Collections_Generic_List_MapControl_QuestInfo__o *questList,
        int32_t warId,
        bool isMainInterlude,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass317_0_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4BD92F8 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1C21E38(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass317_0__HasNewQuestInWar_b__0__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass317_0_TypeInfo);
    byte_4BD92F8 = 1;
  }
  v8 = (QuestBoardListViewItemDraw___c__DisplayClass317_0_o *)sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass317_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass317_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C22094(v9, v10);
  v8->fields.isMainInterlude = isMainInterlude;
  v8->fields.warId = warId;
  v11 = (System_Func_object__bool__o *)sub_1C22084(System_Func_MapControl_QuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_QuestBoardListViewItemDraw___c__DisplayClass317_0__HasNewQuestInWar_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
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

  if ( (byte_4BD9313 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD9313 = 1;
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
    sub_1C22094(mPhaseObj, isDoubleItemConsume);
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
    sub_1C22094(this, questBoardItem);
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
    sub_1C22094(mNextSp, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mNextSp, 0LL);
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
    sub_1C22094(roadmapButton, method);
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

  if ( (byte_4BD932A & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD932A = 1;
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

  if ( (byte_4BD932B & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD932B = 1;
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

  if ( (byte_4BD931F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4BD931F = 1;
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
  __int64 v6; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v8; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD9331 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD9331 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1C22094(v8, v6);
  return UserInterruptionQuestMaster__TryGetEntity(
           (UserInterruptionQuestMaster_o *)Master_object,
           &entity,
           v8->static_fields->userIdNumber,
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

  if ( (byte_4BD92FD & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD92FD = 1;
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
         (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     warId,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C22094(Instance, v8);
  }
  return LODWORD(Instance[6].klass) == 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsMultiInfoText(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4BD931E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4BD931E = 1;
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
    sub_1C22094(0LL, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  WarEntity_o *v15; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Func_object__bool__o *v23; // x21

  if ( (byte_4BD92F7 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass316_0__IsPurchasedByRarePrism_b__0__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass316_0_TypeInfo);
    byte_4BD92F7 = 1;
  }
  v6 = sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass316_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass316_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)v6,
    0LL);
  if ( !v6 )
    goto LABEL_9;
  *(_QWORD *)(v6 + 16) = warEnt;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)warEnt, v9, v10, v11, v12, v13, v14);
  v15 = *(WarEntity_o **)(v6 + 16);
  if ( v15 && WarEntity__IsShop(v15, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v6 + 24) = MasterData_object;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)MasterData_object, v17, v18, v19, v20, v21, v22);
      v23 = (System_Func_object__bool__o *)sub_1C22084(System_Func_MapControl_QuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v6,
        Method_QuestBoardListViewItemDraw___c__DisplayClass316_0__IsPurchasedByRarePrism_b__0__,
        0LL);
      return BasicHelper__Any_object_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v23,
               (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_1C22094(Instance, v8);
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
  long double v8; // q0
  System_Object_array *RestrictionList; // x21
  QuestBoardListViewItemDraw___c_c *v10; // x0
  System_Func_object__bool__o *_9__358_0; // x22
  Il2CppObject *v12; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x0
  _BOOL4 v22; // w22
  bool v23; // w8
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD931B & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C21E38(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__358_0__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4BD931B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
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
      v10 = QuestBoardListViewItemDraw___c_TypeInfo;
      if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
        v10 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      _9__358_0 = (System_Func_object__bool__o *)v10->static_fields->__9__358_0;
      if ( !_9__358_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__358_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__358_0,
          v12,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__358_0__,
          0LL);
        static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__358_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__358_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__358_0,
          (int64_t)_9__358_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_object__49917468(
                                  RestrictionList,
                                  (System_Func_T__bool__o *)_9__358_0,
                                  (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C73D14(v8);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C73D14(v8);
  Instance = **(DataManager_o ***)(v21 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !Instance )
  {
LABEL_38:
    sub_1C22094(Instance, v7);
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(
          (QuestRestrictionInfoMaster_o *)Instance,
          &entity,
          questEntity->fields.id,
          phase,
          0LL) )
  {
    if ( !QuestEntity__HasFlag_40740584(questEntity, 0x80000LL, phase, 0LL)
      && !QuestEntity__HasFlag_40740584(questEntity, 0x100000LL, phase, 0LL)
      && !QuestEntity__HasFlag_40740584(questEntity, 0x10000000LL, phase, 0LL) )
    {
      LOBYTE(v22) = questEntity->fields.type != 7;
      if ( ((unsigned __int8)RestrictionList & 1) != 0 )
        goto LABEL_34;
      goto LABEL_36;
    }
LABEL_33:
    LOBYTE(v22) = 0;
    if ( ((unsigned __int8)RestrictionList & 1) != 0 )
      goto LABEL_34;
LABEL_36:
    v23 = !QuestEntity__HasFlag_40740584(questEntity, 2LL, phase, 0LL);
    return v22 && v23;
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
  v22 = !QuestRestrictionInfoEntity__HasFlag(entity, 0x10000000LL, 0LL);
  if ( ((unsigned __int8)RestrictionList & 1) == 0 )
    goto LABEL_36;
LABEL_34:
  v23 = 0;
  return v22 && v23;
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  QuestBoardListViewItemDraw_c *v26; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v29; // x0
  struct System_String_o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_String_o *boardIconName; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_o *v44; // x19
  AssetLoader_LoadEndDataHandler_o *v45; // x21
  int32_t v46; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BD932E & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass392_0__LoadBoardIconTexture_b__0__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass392_0_TypeInfo);
    byte_4BD932E = 1;
  }
  v7 = sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass392_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass392_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass392_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)callback, v16, v17, v18, v19, v20, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v22);
  if ( !questEntity )
    goto LABEL_14;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v26 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v26 = QuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v26->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v46 = iconId;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v23, v24, v25);
  v30 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v29, 0LL);
  this->fields.boardIconName = v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.boardIconName, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  boardIconName = this->fields.boardIconName;
  *(_QWORD *)(v7 + 16) = boardIconName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)boardIconName, v38, v39, v40, v41, v42, v43);
  v44 = System_String__Concat_63115476(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v45 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v45,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewItemDraw___c__DisplayClass392_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v44, v45, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1C22094(Instance, v9);
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

  if ( (byte_4BD9328 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_1C21E38(&TerminalBannerComponent_TypeInfo);
    byte_4BD9328 = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (WebViewManager_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)WebViewManager__get_IsBusy(IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
            sub_1C2209C(IsBanners, v6);
          IsBanners = (WebViewManager_o *)mTerminalBanners->m_Items[v19];
          if ( !IsBanners )
            break;
          TerminalBannerComponent__StartAutoMoveL((TerminalBannerComponent_o *)IsBanners, 0LL);
          if ( (int)++v19 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_40:
        sub_1C22094(IsBanners, v6);
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

  if ( (byte_4BD92ED & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD92ED = 1;
  }
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, method);
  eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
  {
    v5 = this->fields.eventTargetComponent;
    if ( !v5 )
      sub_1C22094(0LL, v4);
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
  UnityEngine_Vector2_o ScreenPosition_47740676; // kr00_8
  float v10; // s0
  float v11; // s1
  const MethodInfo *v12; // x3

  v7 = this;
  if ( (byte_4BD9323 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&CTouch_TypeInfo);
    byte_4BD9323 = 1;
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
          ScreenPosition_47740676 = CTouch__getScreenPosition_47740676(mUICamera, 0LL);
          v10 = vabds_f32(v7->fields.mPressPos.fields.x, ScreenPosition_47740676.fields.x);
          v11 = vabds_f32(v7->fields.mPressPos.fields.y, ScreenPosition_47740676.fields.y);
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
        sub_1C22094(this, questBoardItem);
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
          sub_1C2209C(IsBanners, v5);
        IsBanners = mTerminalBanners->m_Items[v7];
        if ( !IsBanners )
LABEL_10:
          sub_1C22094(IsBanners, v5);
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
  if ( (byte_4BD9322 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&CTouch_TypeInfo);
    byte_4BD9322 = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    v8->fields.mIsPressed = 1;
    if ( !questBoardManager || (this = (QuestBoardListViewItemDraw_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_1C22094(this, questBoardItem);
    if ( !UIScrollView__IsLimitOverPosition((UIScrollView_o *)this, 0LL) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8->fields.mPressPos = CTouch__getScreenPosition_47740676(mUICamera, 0LL);
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
          sub_1C2209C(IsBanners, v5);
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_1C22094(IsBanners, v5);
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
      sub_1C22094(scrollView, v8);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BD932F & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD932F = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0LL) )
  {
    v3 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v3 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v4 = System_String__Concat_63115476(
           v3->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
           this->fields.boardIconName,
           0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v4, 0LL);
    this->fields.boardIconAssetData = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.boardIconAssetData, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.boardIconName = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.boardIconName, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_4BD9325 & 1) == 0 )
  {
    sub_1C21E38(&TerminalBannerComponent_TypeInfo);
    byte_4BD9325 = 1;
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
  PartyOrganizationUtility_o *p_mInfoTextList; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BD92EF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4BD92EF = 1;
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
    p_mInfoTextList = (PartyOrganizationUtility_o *)&this->fields.mInfoTextList;
    v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (PartyOrganizationUtility_c *)v7;
    sub_1C21DDC(p_mInfoTextList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4BD931C & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD931C = 1;
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
    sub_1C22094(mCostObj, questBoardItem);
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
  MapControl_QuestInfo_o *v7; // x25
  __int64 mAdvanceNoticeLb; // x0
  System_String_o *monitor; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  char v14; // w26
  int32_t monitor_high; // w28
  char v16; // w23
  Il2CppObject *PrioredName; // x0
  System_String_o *v18; // x0
  int32_t WarID_ByQuestID; // w27
  int64_t OpenedAt; // x27
  System_Object_array *v21; // x27
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x28
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x28
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x28
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x28
  bool v62; // w25
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v66; // x22
  _BOOL4 v67; // w21
  UILabel_o *mTitleNameLb; // x24
  UILabel_o *mCondChangeMessage; // x19
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v71; // x9
  int32_t v72; // w24
  int32_t leftIndent; // w25
  float v74; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v76; // s1
  float v77; // s0
  int v78; // s2
  float v79; // s9
  float v80; // s0
  float v81; // s1
  float v82; // s0
  int v83; // s2
  float v84; // s1
  int v85; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v87; // x4
  const MethodInfo *v88; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v90; // x21
  float v91; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v93; // x0
  int32_t v94; // [xsp+Ch] [xbp-A4h]
  int32_t Minute; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t Hour; // [xsp+18h] [xbp-98h] BYREF
  int32_t Day; // [xsp+1Ch] [xbp-94h] BYREF
  int64_t questReleaseValue; // [xsp+20h] [xbp-90h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-88h] BYREF
  Il2CppObject *v100; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-78h] BYREF
  System_DateTime_o v102; // 0:x0.8
  System_DateTime_o v103; // 0:x0.8
  System_DateTime_o v104; // 0:x0.8
  System_DateTime_o v105; // 0:x0.8
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  v7 = questInfo;
  if ( (byte_4BD9304 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&StringLiteral_15070/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9304 = 1;
  }
  v100 = 0LL;
  entity = 0LL;
  dateData = 0LL;
  if ( !v7 || v7->fields.questReleaseClosedID <= 0 )
  {
    mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
    if ( !mAdvanceNoticeLb )
      goto LABEL_134;
    UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
    if ( !mAdvanceNoticeLb )
      goto LABEL_134;
    UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mAdvanceNoticeLb = (__int64)this->fields.mCondChangeMessage;
    if ( !mAdvanceNoticeLb )
      goto LABEL_134;
    UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    return;
  }
  mAdvanceNoticeLb = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mAdvanceNoticeLb )
    goto LABEL_134;
  mAdvanceNoticeLb = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)mAdvanceNoticeLb,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !mAdvanceNoticeLb )
    goto LABEL_134;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  mAdvanceNoticeLb = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)mAdvanceNoticeLb,
                       &entity,
                       v7->fields.questReleaseClosedID,
                       (const MethodInfo_325BE14 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (mAdvanceNoticeLb & 1) != 0 )
  {
    mAdvanceNoticeLb = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    monitor = (System_String_o *)entity[1].monitor;
    mAdvanceNoticeLb = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_134;
    v14 = mAdvanceNoticeLb;
    mAdvanceNoticeLb = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_134;
    monitor_high = HIDWORD(entity[2].monitor);
    v16 = mAdvanceNoticeLb;
  }
  else
  {
    monitor_high = 0;
    v16 = 0;
    v14 = 0;
  }
  switch ( v7->fields.questReleaseType )
  {
    case 1:
      mAdvanceNoticeLb = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !mAdvanceNoticeLb )
        goto LABEL_134;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                          (QuestTree_o *)mAdvanceNoticeLb,
                          v7->fields.questReleaseTargetID,
                          0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mAdvanceNoticeLb = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !mAdvanceNoticeLb )
        goto LABEL_134;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)mAdvanceNoticeLb,
              &v100,
              WarID_ByQuestID,
              (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        goto LABEL_48;
      mAdvanceNoticeLb = (__int64)v100;
      if ( !v100 )
        goto LABEL_134;
      PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v100, 0LL);
LABEL_20:
      v18 = System_String__Format(monitor, PrioredName, 0LL);
      goto LABEL_47;
    case 6:
    case 7:
    case 9:
      questReleaseValue = v7->fields.questReleaseValue;
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue, v11, v12, v13);
      goto LABEL_20;
    case 0xC:
      if ( !questEnt )
        goto LABEL_134;
      OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v94 = monitor_high;
      dateData = NetworkManager__getServerDateTime_39807404(OpenedAt, 0LL).fields._dateData;
      v21 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v102.fields._dateData = (uint64_t)&dateData;
      LODWORD(questReleaseValue) = System_DateTime__get_Month(v102, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue, v22, v23, v24);
      if ( !v21 )
        goto LABEL_134;
      v31 = mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C21F74(mAdvanceNoticeLb, v21->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_136;
      }
      if ( !v21->max_length )
        goto LABEL_135;
      v21->m_Items[0] = (Il2CppObject *)v31;
      sub_1C21DDC((PartyOrganizationUtility_o *)v21->m_Items, v31, v25, v26, v27, v28, v29, v30);
      v103.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v103, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Day, v32, v33, v34);
      v41 = mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C21F74(mAdvanceNoticeLb, v21->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_136;
      }
      if ( v21->max_length <= 1 )
        goto LABEL_135;
      v21->m_Items[1] = (Il2CppObject *)v41;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
      v104.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v104, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v42, v43, v44);
      v51 = mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C21F74(mAdvanceNoticeLb, v21->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_136;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_135;
      v21->m_Items[2] = (Il2CppObject *)v51;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
      v105.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v105, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v52, v53, v54);
      v61 = mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C21F74(mAdvanceNoticeLb, v21->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
        {
LABEL_136:
          v93 = sub_1C220B8();
          sub_1C21F60(v93, 0LL);
        }
      }
      if ( v21->max_length <= 3 )
LABEL_135:
        sub_1C2209C(mAdvanceNoticeLb, questInfo);
      v21->m_Items[3] = (Il2CppObject *)v61;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[3], v61, v55, v56, v57, v58, v59, v60);
      v18 = System_String__Format_63129984(monitor, v21, 0LL);
      monitor_high = v94;
LABEL_47:
      monitor = v18;
LABEL_48:
      if ( (v14 & 1) != 0 )
      {
        v62 = 1;
      }
      else
      {
        WarInfo_k__BackingField = v7->fields._WarInfo_k__BackingField;
        if ( !WarInfo_k__BackingField || !MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL) )
          goto LABEL_55;
        mAdvanceNoticeLb = (__int64)v7->fields._WarInfo_k__BackingField;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)mAdvanceNoticeLb, 0LL);
        if ( Mine )
          v62 = WarEntity__IsChangeDispClosedMessage(Mine, 0LL);
        else
LABEL_55:
          v62 = 0;
      }
      mAdvanceNoticeLb = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mAdvanceNoticeLb )
        goto LABEL_134;
      mAdvanceNoticeLb = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)mAdvanceNoticeLb,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
      if ( !questEnt || !mAdvanceNoticeLb )
        goto LABEL_134;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)mAdvanceNoticeLb,
                                 questEnt->fields.id,
                                 checkTime,
                                 0LL);
      v66 = EntityByQuestIdAndTime;
      if ( !EntityByQuestIdAndTime )
      {
        v67 = 0;
        if ( v62 )
          goto LABEL_61;
LABEL_67:
        mAdvanceNoticeLb = (__int64)this->fields.mTitleNameLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, monitor, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( v67 )
        {
          mAdvanceNoticeLb = (__int64)this->fields.mCondObject;
          if ( mAdvanceNoticeLb )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0LL);
            if ( v66 )
            {
              mAdvanceNoticeLb = (__int64)this->fields.mCondChangeMessage;
              if ( mAdvanceNoticeLb )
              {
                UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, v66->fields.overlayClosedMessage, 0LL);
                mCondChangeMessage = this->fields.mCondChangeMessage;
                mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
                if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                if ( mCondChangeMessage )
                {
                  UILabel__SetCondensedScale(
                    mCondChangeMessage,
                    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
                    0,
                    0LL);
                  return;
                }
              }
            }
          }
          goto LABEL_134;
        }
        return;
      }
      v67 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
      if ( !v62 )
        goto LABEL_67;
LABEL_61:
      mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeObj;
      if ( !mAdvanceNoticeLb )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0LL);
      mTitleNameLb = this->fields.mTitleNameLb;
      if ( entity )
      {
        mAdvanceNoticeLb = System_String__op_Inequality(
                             (System_String_o *)entity[2].klass,
                             (System_String_o *)StringLiteral_1/*""*/,
                             0LL);
        if ( (mAdvanceNoticeLb & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_134;
          questInfo = (MapControl_QuestInfo_o *)entity[2].klass;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          mAdvanceNoticeLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15070/*"UNKNOWN_QUEST_NAME"*/, 0LL);
          questInfo = (MapControl_QuestInfo_o *)mAdvanceNoticeLb;
        }
        if ( !mTitleNameLb )
LABEL_134:
          sub_1C22094(mAdvanceNoticeLb, questInfo);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mAdvanceNoticeLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15070/*"UNKNOWN_QUEST_NAME"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_134;
        questInfo = (MapControl_QuestInfo_o *)mAdvanceNoticeLb;
      }
      UILabel__set_text(mTitleNameLb, (System_String_o *)questInfo, 0LL);
      mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      }
      static_fields = *(struct QuestBoardListViewItemDraw_StaticFields **)(mAdvanceNoticeLb + 184);
      v71 = 48LL;
      if ( !v67 )
        v71 = 44LL;
      v72 = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v71);
      if ( v67 )
      {
        if ( !v66 )
          goto LABEL_134;
        leftIndent = v66->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v74 = (float)monitor_high;
      if ( (v16 & 1) != 0 )
      {
        if ( !*(_DWORD *)(mAdvanceNoticeLb + 224) )
        {
          j_il2cpp_runtime_class_init_0(mAdvanceNoticeLb);
          static_fields = QuestBoardListViewItemDraw_TypeInfo->static_fields;
        }
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X;
        UIWidget__set_pivot((UIWidget_o *)mAdvanceNoticeLb, 3, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)mAdvanceNoticeLb,
                                      0LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        v76 = 24.0;
        if ( !v67 )
          v76 = 0.0;
        v78 = 0;
        v77 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v74;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v76 - 1),
          0LL);
        mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_134;
        v79 = *(float *)(*(_QWORD *)(mAdvanceNoticeLb + 184) + 52LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)mAdvanceNoticeLb,
                                      0LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        v80 = v79 + (float)leftIndent;
      }
      else
      {
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        UIWidget__set_pivot((UIWidget_o *)mAdvanceNoticeLb, 4, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)mAdvanceNoticeLb,
                                      0LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        v81 = 24.0;
        if ( !v67 )
          v81 = 0.0;
        v83 = 0;
        v82 = v74 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v81 - 1),
          0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        UIWidget__set_pivot((UIWidget_o *)mAdvanceNoticeLb, 4, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)mAdvanceNoticeLb,
                                      0LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        v80 = (float)leftIndent * 0.5;
      }
      v84 = -26.0;
      v85 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)mAdvanceNoticeLb,
        *(UnityEngine_Vector3_o *)&v80,
        0LL);
      mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !mAdvanceNoticeLb )
        goto LABEL_134;
      UIWidget__set_height((UIWidget_o *)mAdvanceNoticeLb, v72, 0LL);
      mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !mOverwriteAdvanceNoticeLb )
        goto LABEL_134;
      UIWidget__set_height(
        mOverwriteAdvanceNoticeLb,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
        0LL);
      QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_331_0(
        this->fields.mAdvanceNoticeLb,
        monitor,
        v72,
        monitor_high,
        v87);
      if ( v67 )
      {
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0LL);
        if ( !v66 )
          goto LABEL_134;
        overlayClosedMessage = v66->fields.overlayClosedMessage;
        v90 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v91 = v74 * 0.5;
        QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_331_0(
          v90,
          overlayClosedMessage,
          v72,
          leftIndent,
          v88);
      }
      else
      {
        v91 = 0.0;
      }
      mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0LL, 0LL) )
      {
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
        if ( mAdvanceNoticeLb )
        {
          mAdvanceNoticeLb = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)mAdvanceNoticeLb,
                                        0LL);
          if ( mAdvanceNoticeLb )
          {
            v106.fields.y = 0.0;
            v106.fields.z = 0.0;
            v106.fields.x = v91;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mAdvanceNoticeLb, v106, 0LL);
            return;
          }
        }
        goto LABEL_134;
      }
      return;
    default:
      goto LABEL_48;
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
  PartyOrganizationUtility_o *p_mNoticeNumber; // x21
  Il2CppObject *mNoticeNumberPrefab; // x22
  Il2CppObject *v9; // x0
  UnityEngine_GameObject_o *v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *Component_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BD9309 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9309 = 1;
  }
  mNoticeNumberRoot = this->fields.mNoticeNumberRoot;
  if ( !mNoticeNumberRoot )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(mNoticeNumberRoot, 1, 0LL);
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mNoticeNumber = (PartyOrganizationUtility_o *)&this->fields.mNoticeNumber;
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           mNoticeNumberPrefab,
           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v10 = this->fields.mNoticeNumberRoot;
    v11 = (UnityEngine_GameObject_o *)v9;
    GameObjectExtensions__SafeSetParent_34803616((UnityEngine_GameObject_o *)v9, v10, 0LL);
    if ( v11 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v11,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (PartyOrganizationUtility_c *)Component_object;
      sub_1C21DDC(p_mNoticeNumber, (int64_t)Component_object, v13, v14, v15, v16, v17, v18);
      goto LABEL_11;
    }
LABEL_13:
    sub_1C22094(mNoticeNumberRoot, *(_QWORD *)&num);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_o *v30; // x23
  int32_t v31; // w23
  UnityEngine_GameObject_o *v32; // x22
  QuestBoardListViewItemDraw_c *v33; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  QuestBoardListViewItemDraw_c *v38; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v39; // x10
  UnityEngine_GameObject_o *v40; // x21
  QuestBoardListViewItemDraw_c *v41; // x0
  UnityEngine_Object_o *white_mark_prefab_k__BackingField; // x21
  UnityEngine_Object_o *whiteMarkEffect; // x21
  Il2CppObject *v44; // x21
  struct UnityEngine_GameObject_o **p_whiteMarkEffect; // x20
  UnityEngine_Transform_o *v46; // x22
  Il2CppObject *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  UnityEngine_GameObject_o *v54; // x20
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD92F1 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD92F1 = 1;
  }
  if ( !warEntity )
    return;
  if ( !WarEntity__IsBlackMarkWithClear(warEntity, 0LL) )
    goto LABEL_12;
  lastQuestId = warEntity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsQuestClear_38834244(lastQuestId, -1, 0, 0LL) )
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
      v23 = UnityEngine_Object__Instantiate_object__50551272(
              v20,
              transform,
              (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v23;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.blackMarkEffect,
        (int64_t)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v30 = *p_blackMarkEffect;
      if ( !byte_4BD6BB1 )
      {
        sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    v14 = this->fields.blackMarkSpace;
    if ( !v14 )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(v14, 1, 0LL);
  }
LABEL_31:
  if ( WarEntity__IsWhiteMarkWithClear(warEntity, 0LL) )
  {
    v31 = warEntity->fields.lastQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_38834244(v31, -1, 0, 0LL) )
    {
      v32 = this->fields.blackMarkSpace;
      v33 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v33 = QuestBoardListViewItemDraw_TypeInfo;
      }
      static_fields = v33->static_fields;
      p_x = &static_fields->BLACK_MARK_OBJ_POS.fields.x;
      p_y = &static_fields->BLACK_MARK_OBJ_POS.fields.y;
      p_z = &static_fields->BLACK_MARK_OBJ_POS.fields.z;
      goto LABEL_42;
    }
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(warEntity, 0LL) )
  {
    v32 = this->fields.blackMarkSpace;
    v38 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v38 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v39 = v38->static_fields;
    p_x = &v39->WHITE_MARK_OBJ_UNDER_POS.fields.x;
    p_y = &v39->WHITE_MARK_OBJ_UNDER_POS.fields.y;
    p_z = &v39->WHITE_MARK_OBJ_UNDER_POS.fields.z;
LABEL_42:
    v55.fields.y = *p_y;
    v55.fields.x = *p_x;
    v55.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v32, v55, 0LL);
    if ( !isWhiteMarkOnly )
      goto LABEL_48;
    goto LABEL_45;
  }
  if ( !isWhiteMarkOnly )
    return;
LABEL_45:
  v40 = this->fields.blackMarkSpace;
  v41 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v41 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v40, v41->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
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
      v44 = (Il2CppObject *)questBoardItem->fields._white_mark_prefab_k__BackingField;
      p_whiteMarkEffect = &this->fields.whiteMarkEffect;
      v46 = UnityEngine_GameObject__get_transform(v14, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v47 = UnityEngine_Object__Instantiate_object__50551272(
              v44,
              v46,
              (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
      *p_whiteMarkEffect = (struct UnityEngine_GameObject_o *)v47;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.whiteMarkEffect,
        (int64_t)v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      v54 = *p_whiteMarkEffect;
      if ( !byte_4BD6BB1 )
      {
        sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v54, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    v14 = this->fields.blackMarkSpace;
    if ( v14 )
    {
      UnityEngine_GameObject__SetActive(v14, 1, 0LL);
      return;
    }
LABEL_64:
    sub_1C22094(v14, v15);
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
  if ( (byte_4BD9300 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD9300 = 1;
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
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_47;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               questInfo->fields.warId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
    sub_1C22094(this, questInfo);
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

  if ( (byte_4BD930C & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD930C = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_1C22094(0LL, v6);
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
  QuestConsumeItemEntity_o *v29; // x20
  QuestBoardListViewItemDraw_o **p_mCostLb2; // x21
  QuestConsumeItemEntity_o *v31; // x27
  bool v32; // w20
  QuestBoardListViewItemDraw_o **v33; // x26
  int bannerId; // w22
  UISprite_o *mCostApSp; // x21
  System_String_o *ApSpriteFileName; // x22
  int32_t ActConsume; // w0
  int32_t v38; // w29
  UserGameEntity_o *v39; // x28
  bool v40; // w24
  BalanceConfig_c *v41; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UISprite_o *mCostRpSp; // x21
  __int64 BpExpresssionType; // x20
  __int64 v45; // x8
  struct System_String_array *RP_SPNAME_POINT; // x8
  struct System_Int32_array *v47; // x8
  char v48; // w23
  QuestBoardListViewItemDraw_o *v49; // x22
  QuestBoardListViewItemDraw_c *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *v52; // x8
  int32_t v53; // w20
  BalanceConfig_c *v54; // x0
  UIWidget_o *v55; // x22
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  struct System_Int32_array *v58; // x8
  int v59; // w23
  UISprite_o *v60; // x22
  System_String_o *v61; // x23
  BalanceConfig_c *v62; // x0
  bool v63; // w24
  Il2CppObject *Master_object; // x27
  Il2CppObject *v65; // x26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v67; // x8
  ItemEntity_o *v68; // x28
  const MethodInfo *v69; // x7
  struct System_Int32_array *nums; // x8
  UIWidget_o *v71; // x28
  struct System_Int32_array *v72; // x8
  struct System_Int32_array *v73; // x8
  const MethodInfo *v74; // x7
  struct System_Int32_array *v75; // x8
  bool v76; // w28
  UILabel_o *mCostLb1; // x25
  QuestBoardListViewItemDraw_o *v78; // x0
  const MethodInfo *v79; // x7
  UILabel_o *v80; // x25
  QuestBoardListViewItemDraw_o *v81; // x0
  const MethodInfo *v82; // x7
  UILabel_o *v83; // x29
  QuestBoardListViewItemDraw_o *v84; // x0
  const MethodInfo *v85; // x7
  UIWidget_o *v86; // x25
  Il2CppObject *v87; // x26
  Il2CppObject *v88; // x25
  struct System_Int32_array *v89; // x8
  struct System_Int32_array *v90; // x8
  ItemEntity_o *v91; // x25
  const MethodInfo *v92; // x7
  struct System_Int32_array *v93; // x8
  UISprite_o *v94; // x21
  struct UnityEngine_Transform_o *mTrans; // x8
  UISprite_o *v96; // x22
  struct UnityEngine_Transform_o *v97; // x8
  struct System_Int32_array *v98; // x8
  UnityEngine_GameObject_o *v99; // x0
  QuestBoardListViewItemDraw_c *v100; // x8
  UnityEngine_GameObject_o *v101; // x22
  UnityEngine_GameObject_o *v102; // x0
  struct System_Int32_array *v103; // x8
  int32_t v104; // w20
  BalanceConfig_c *v105; // x0
  UIWidget_o *v106; // x22
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  UnityEngine_GameObject_o *v109; // x0
  QuestBoardListViewItemDraw_c *v110; // x8
  UnityEngine_GameObject_o *v111; // x22
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  UnityEngine_GameObject_o *v114; // x0
  UnityEngine_GameObject_o *v115; // x0
  struct System_Int32_array *v116; // x8
  UnityEngine_GameObject_o *v117; // x21
  UnityEngine_GameObject_o *v118; // x21
  UnityEngine_GameObject_o *v119; // x21
  UIWidget_o *v120; // x21
  UILabel_o *v121; // x20
  UIWidget_o *v122; // x25
  struct System_Int32_array *v123; // x8
  struct System_Int32_array *v124; // x8
  const MethodInfo *v125; // x7
  struct System_Int32_array *v126; // x8
  bool *v127; // [xsp+8h] [xbp-B8h]
  bool v128; // [xsp+14h] [xbp-ACh]
  __int64 v129; // [xsp+20h] [xbp-A0h]
  UserItemEntity_o *usrItem; // [xsp+28h] [xbp-98h] BYREF
  UserItemEntity_o *entity; // [xsp+30h] [xbp-90h] BYREF
  int32_t v132; // [xsp+3Ch] [xbp-84h] BYREF
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
  UnityEngine_Color_o v148; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v22 = this;
  if ( (byte_4BD92FB & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD92FB = 1;
  }
  v132 = 0;
  usrItem = 0LL;
  entity = 0LL;
  if ( !questEnt )
    goto LABEL_402;
  type = questEnt->fields.type;
  *isDoubleItemConsume = 0;
  *isDoubleItemConsumeQp = 0;
  *isTripleItemConsume = 0;
  mCostObj = v22->fields.mCostObj;
  v129 = type;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__HasFlag(questEnt, 0x2000LL, 0LL);
  if ( !mCostObj )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive(mCostObj, ((unsigned __int8)this & 1) == 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
  if ( !this )
    goto LABEL_402;
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
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v27 = (UIWidget_o *)this;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  v128 = v25;
  if ( !v27 )
    goto LABEL_402;
  v28 = 304LL;
  if ( (_DWORD)v129 == 7 )
    v28 = 316LL;
  UIWidget__set_width(
    v27,
    *(int32_t *)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v28),
    0LL);
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getItemConsumeEntity(questEnt, 0, 0LL);
  if ( !v22->fields.mCostBg1 )
    goto LABEL_402;
  v29 = (QuestConsumeItemEntity_o *)this;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v22->fields.mCostBg1,
                                           0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg3;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  p_mCostLb2 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !HasFlag )
  {
    v127 = isDoubleItemConsumeQp;
    ActConsume = QuestEntity__getActConsume(questEnt, costCalcVal, 0LL);
    if ( fixedVal >= 0 )
      v38 = fixedVal;
    else
      v38 = ActConsume;
    v132 = v38;
    this = (QuestBoardListViewItemDraw_o *)UserGameMaster__getSelfUserGame(0LL);
    v39 = (UserGameEntity_o *)this;
    switch ( questEnt->fields.consumeType )
    {
      case 1:
        if ( !this )
          goto LABEL_402;
        v40 = v38 > SLODWORD(this->fields.mTerminalAtlas) || v38 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
        isDoubleItemConsumeQp = v127;
        mCostLb1 = v22->fields.mCostLb1;
        v78 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v132, 0LL);
        v141.fields.r = r;
        v141.fields.g = g;
        v141.fields.b = b;
        v141.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v78,
          mCostLb1,
          (System_String_o *)v78,
          costCalcVal,
          v141,
          v40,
          isClosed,
          fixedVal >= 0,
          v79);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        v33 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
        v31 = v29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        v32 = v128;
        if ( !this )
          goto LABEL_402;
        goto LABEL_226;
      case 2:
        if ( !this )
          goto LABEL_402;
        v33 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
        if ( !byte_4BD9335 )
        {
          sub_1C21E38(&BalanceConfig_TypeInfo);
          byte_4BD9335 = 1;
        }
        v62 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v62 = BalanceConfig_TypeInfo;
        }
        v31 = v29;
        v32 = v128;
        v63 = v38 > v62->static_fields->UerGameRpMax || v38 > UserGameEntity__getRp(v39, 0LL);
        isDoubleItemConsumeQp = v127;
        v80 = v22->fields.mCostLb1;
        v81 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v132, 0LL);
        v142.fields.r = r;
        v142.fields.g = g;
        v142.fields.b = b;
        v142.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(v81, v80, (System_String_o *)v81, 0, v142, v63, isClosed, 0, v82);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        if ( !this )
          goto LABEL_402;
LABEL_226:
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        goto LABEL_30;
      case 3:
        if ( !v29 || !QuestConsumeItemEntity__IsAvailableAt(v29, 0, 0LL) )
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
          isDoubleItemConsumeQp = v127;
          if ( !this )
            goto LABEL_402;
          v33 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
          goto LABEL_262;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
        v65 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        }
        itemIds = v29->fields.itemIds;
        if ( !itemIds )
          goto LABEL_402;
        if ( !itemIds->max_length )
          goto LABEL_403;
        if ( !Master_object )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                 (UserItemMaster_o *)Master_object,
                                                 &entity,
                                                 *(_QWORD *)&this->fields.mTitleLevelStrSp->fields.updateAnchors,
                                                 itemIds->m_Items[1],
                                                 0LL);
        v67 = v29->fields.itemIds;
        if ( !v67 )
          goto LABEL_402;
        if ( !v67->max_length )
          goto LABEL_403;
        if ( !v65 )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v65,
                                                 v67->m_Items[1],
                                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !v22->fields.mCostLb1 )
          goto LABEL_402;
        v68 = (ItemEntity_o *)this;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v22->fields.mCostLb1,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        nums = v29->fields.nums;
        if ( !nums )
          goto LABEL_402;
        if ( !nums->max_length )
          goto LABEL_403;
        v139.fields.r = r;
        v139.fields.g = g;
        v139.fields.b = b;
        v139.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          v22->fields.mCostLb1,
          nums->m_Items[1],
          entity,
          v68,
          v139,
          isClosed,
          isNotItemConsume,
          v69);
        if ( QuestConsumeItemEntity__IsAvailableAt(v29, 1, 0LL) )
        {
          *isDoubleItemConsume = 1;
          this = *p_mCostLb2;
          if ( !*p_mCostLb2 )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v71 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v71 )
            goto LABEL_402;
          UIWidget__set_width(v71, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          v72 = v29->fields.itemIds;
          if ( !v72 )
            goto LABEL_402;
          if ( v72->max_length <= 1 )
            goto LABEL_403;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)Master_object,
                                                   &entity,
                                                   *(_QWORD *)&this->fields.mTitleLevelStrSp->fields.updateAnchors,
                                                   v72->m_Items[2],
                                                   0LL);
          v73 = v29->fields.itemIds;
          if ( !v73 )
            goto LABEL_402;
          if ( v73->max_length <= 1 )
            goto LABEL_403;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v65,
                                                   v73->m_Items[2],
                                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v75 = v29->fields.nums;
          if ( !v75 )
            goto LABEL_402;
          if ( v75->max_length <= 1 )
            goto LABEL_403;
          v140.fields.r = r;
          v140.fields.g = g;
          v140.fields.b = b;
          v140.fields.a = a;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            (UILabel_o *)*p_mCostLb2,
            v75->m_Items[2],
            entity,
            (ItemEntity_o *)this,
            v140,
            isClosed,
            isNotItemConsume,
            v74);
        }
        else
        {
          this = *p_mCostLb2;
          if ( !*p_mCostLb2 )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        if ( QuestConsumeItemEntity__IsAvailableAt(v29, 2, 0LL) )
        {
          *isDoubleItemConsume = 0;
          *isTripleItemConsume = 1;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v122 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v122 )
            goto LABEL_402;
          UIWidget__set_width(
            v122,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          isDoubleItemConsumeQp = v127;
          v123 = v29->fields.itemIds;
          if ( !v123 )
            goto LABEL_402;
          if ( v123->max_length <= 2 )
            goto LABEL_403;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)Master_object,
                                                   &entity,
                                                   *(_QWORD *)&this->fields.mTitleLevelStrSp->fields.updateAnchors,
                                                   v123->m_Items[3],
                                                   0LL);
          v124 = v29->fields.itemIds;
          if ( !v124 )
            goto LABEL_402;
          v31 = v29;
          v32 = v128;
          if ( v124->max_length <= 2 )
            goto LABEL_403;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v65,
                                                   v124->m_Items[3],
                                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v126 = v31->fields.nums;
          if ( !v126 )
            goto LABEL_402;
          if ( v126->max_length <= 2 )
            goto LABEL_403;
          v148.fields.r = r;
          v148.fields.g = g;
          v148.fields.b = b;
          v148.fields.a = a;
          v33 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            v22->fields.mCostLb3,
            v126->m_Items[3],
            entity,
            (ItemEntity_o *)this,
            v148,
            isClosed,
            isNotItemConsume,
            v125);
        }
        else
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          isDoubleItemConsumeQp = v127;
          if ( !this )
            goto LABEL_402;
          v33 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
          v31 = v29;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v32 = v128;
        }
        goto LABEL_30;
      case 4:
        if ( !this )
          goto LABEL_402;
        v76 = v38 > SLODWORD(this->fields.mTerminalAtlas) || v38 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
        v83 = v22->fields.mCostLb1;
        v84 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v132, 0LL);
        v143.fields.r = r;
        v143.fields.g = g;
        v143.fields.b = b;
        v143.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v84,
          v83,
          (System_String_o *)v84,
          costCalcVal,
          v143,
          v76,
          isClosed,
          fixedVal >= 0,
          v85);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        isDoubleItemConsumeQp = v127;
        if ( !this )
          goto LABEL_402;
        v33 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( v29 && QuestConsumeItemEntity__IsAvailableAt(v29, 0, 0LL) )
        {
          *isDoubleItemConsume = 1;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v86 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v86 )
            goto LABEL_402;
          UIWidget__set_width(v86, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v87 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
          v88 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          v89 = v29->fields.itemIds;
          if ( !v89 )
            goto LABEL_402;
          v31 = v29;
          v32 = v128;
          if ( !v89->max_length )
            goto LABEL_403;
          if ( !v87 )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)v87,
                                                   &usrItem,
                                                   *(_QWORD *)&this->fields.mTitleLevelStrSp->fields.updateAnchors,
                                                   v89->m_Items[1],
                                                   0LL);
          v90 = v31->fields.itemIds;
          if ( !v90 )
            goto LABEL_402;
          if ( !v90->max_length )
            goto LABEL_403;
          if ( !v88 )
            goto LABEL_402;
          v33 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v88,
                                                   v90->m_Items[1],
                                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !*p_mCostLb2 )
            goto LABEL_402;
          v91 = (ItemEntity_o *)this;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)*p_mCostLb2,
                                                   0LL);
          if ( !this )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v93 = v31->fields.nums;
          if ( !v93 )
            goto LABEL_402;
          if ( !v93->max_length )
            goto LABEL_403;
          v144.fields.r = r;
          v144.fields.g = g;
          v144.fields.b = b;
          v144.fields.a = a;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            (UILabel_o *)*p_mCostLb2,
            v93->m_Items[1],
            usrItem,
            v91,
            v144,
            isClosed,
            isNotItemConsume,
            v92);
          if ( !QuestConsumeItemEntity__IsAvailableAt(v31, 1, 0LL) )
            goto LABEL_30;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_402;
        }
        else
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
          if ( !this )
            goto LABEL_402;
LABEL_262:
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          v32 = v128;
          if ( !this )
            goto LABEL_402;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = *v33;
        if ( !*v33 )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v31 = 0LL;
        goto LABEL_30;
      default:
        isDoubleItemConsumeQp = v127;
        break;
    }
  }
  v31 = v29;
  v32 = v128;
  v33 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
LABEL_30:
  if ( v32 )
  {
    switch ( questEnt->fields.consumeType )
    {
      case 1:
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_402;
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
            goto LABEL_402;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, (unsigned __int8)this & 1, 0LL);
          goto LABEL_275;
        }
        if ( !mCostApSp )
          goto LABEL_402;
        UISprite__set_atlas(v22->fields.mCostApSp, v22->fields.mTerminalAtlas, 0LL);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        v94 = v22->fields.mCostApSp;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        mTrans = this->fields.mTitleLevelStrSp[2].fields.mTrans;
        if ( !mTrans )
          goto LABEL_402;
        if ( (unsigned int)v129 < LODWORD(mTrans[1].klass) )
        {
          if ( !v94 )
            goto LABEL_402;
          UISprite__set_spriteName(v94, *((System_String_o **)&mTrans[1].monitor + v129), 0LL);
LABEL_275:
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
          if ( !this )
            goto LABEL_402;
          ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
          if ( !this )
            goto LABEL_402;
          v145.fields.r = r;
          v145.fields.g = g;
          v145.fields.b = b;
          v145.fields.a = a;
          UIWidget__set_color((UIWidget_o *)this, v145, 0LL);
          goto LABEL_339;
        }
        break;
      case 2:
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_402;
        v135.fields.r = r;
        v135.fields.g = g;
        v135.fields.b = b;
        v135.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v135, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpPointSp;
        if ( !this )
          goto LABEL_402;
        v136.fields.r = r;
        v136.fields.g = g;
        v136.fields.b = b;
        v136.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v136, 0LL);
        v41 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v41 = BalanceConfig_TypeInfo;
        }
        static_fields = v41->static_fields;
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        mCostRpSp = v22->fields.mCostRpSp;
        BpExpresssionType = static_fields->BpExpresssionType;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        v45 = *(_QWORD *)&this->fields.mTitleLevelStrSp[1].fields.mFillAmount;
        if ( !v45 )
          goto LABEL_402;
        if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v45 + 24) )
          break;
        if ( !mCostRpSp )
          goto LABEL_402;
        UISprite__set_spriteName(mCostRpSp, *(System_String_o **)(v45 + 8 * BpExpresssionType + 32), 0LL);
        RP_SPNAME_POINT = QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
        if ( !RP_SPNAME_POINT )
          goto LABEL_402;
        if ( (unsigned int)BpExpresssionType >= RP_SPNAME_POINT->max_length )
          break;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpPointSp;
        if ( !this )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)this, RP_SPNAME_POINT->m_Items[BpExpresssionType], 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_402;
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpPointSp;
        if ( !this )
          goto LABEL_402;
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        goto LABEL_339;
      case 3:
        if ( !v31 )
          goto LABEL_339;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v47 = v31->fields.itemIds;
        if ( !v47 )
          goto LABEL_402;
        if ( !v47->max_length )
          break;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_402;
        ItemIconComponent__SetItem((ItemIconComponent_o *)this, v47->m_Items[1], -1, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_402;
        v137.fields.r = r;
        v137.fields.g = g;
        v137.fields.b = b;
        v137.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)this, v137, 0LL);
        this = (QuestBoardListViewItemDraw_o *)QuestConsumeItemEntity__IsAvailableAt(v31, 1, 0LL);
        if ( !v22->fields.mCostItemIcon2 )
          goto LABEL_402;
        v48 = (char)this;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v22->fields.mCostItemIcon2,
                                                 0LL);
        v49 = this;
        if ( (v48 & 1) != 0 )
        {
          v50 = QuestBoardListViewItemDraw_TypeInfo;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v50 = QuestBoardListViewItemDraw_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            (UnityEngine_GameObject_o *)v49,
            (float)v50->static_fields->COST_2_ICON_NORMAL_POSITION_X,
            0LL);
          this = *v33;
          if ( !*v33 )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(
            gameObject,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
            0LL);
          v52 = v31->fields.itemIds;
          if ( !v52 )
            goto LABEL_402;
          if ( v52->max_length <= 1 )
            break;
          v53 = v52->m_Items[2];
          v54 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v54 = BalanceConfig_TypeInfo;
          }
          if ( v53 == v54->static_fields->ItemIdQp )
          {
            *isDoubleItemConsumeQp = 1;
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
            if ( !this )
              goto LABEL_402;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v55 = (UIWidget_o *)this;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            if ( !v55 )
              goto LABEL_402;
            UIWidget__set_width(v55, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg1;
            if ( !this )
              goto LABEL_402;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_402;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
            if ( !this )
              goto LABEL_402;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_402;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg1;
            if ( !this )
              goto LABEL_402;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            if ( !this )
              goto LABEL_402;
            UISprite__set_spriteName(
              (UISprite_o *)this,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_ITEM,
              0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
            if ( !this )
              goto LABEL_402;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            if ( !this )
              goto LABEL_402;
            UISprite__set_spriteName(
              (UISprite_o *)this,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
              0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
            if ( !this )
              goto LABEL_402;
            v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v56,
              (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
              0LL);
            this = *v33;
            if ( !*v33 )
              goto LABEL_402;
            v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v57,
              (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
              0LL);
          }
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v58 = v31->fields.itemIds;
          if ( !v58 )
            goto LABEL_402;
          if ( v58->max_length <= 1 )
            break;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_402;
          ItemIconComponent__SetItem((ItemIconComponent_o *)this, v58->m_Items[2], -1, 1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_402;
          v138.fields.r = r;
          v138.fields.g = g;
          v138.fields.b = b;
          v138.fields.a = a;
          ItemIconComponent__SetColor((ItemIconComponent_o *)this, v138, 0LL);
        }
        else
        {
          if ( !this )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        if ( !QuestConsumeItemEntity__IsAvailableAt(v31, 2, 0LL) )
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_402;
LABEL_337:
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_402;
LABEL_338:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          goto LABEL_339;
        }
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
        if ( !this )
          goto LABEL_402;
        v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v110 = QuestBoardListViewItemDraw_TypeInfo;
        v111 = v109;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v110 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(
          v111,
          (float)v110->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v112,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = *v33;
        if ( !*v33 )
          goto LABEL_402;
        v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v113,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_402;
        v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v114,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        if ( !this )
          goto LABEL_402;
        v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v115,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v116 = v31->fields.itemIds;
        if ( !v116 )
          goto LABEL_402;
        if ( v116->max_length > 2 )
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_402;
          ItemIconComponent__SetItem((ItemIconComponent_o *)this, v116->m_Items[3], -1, 1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_402;
LABEL_68:
          v134.fields.r = r;
          v134.fields.g = g;
          v134.fields.b = b;
          v134.fields.a = a;
          ItemIconComponent__SetColor((ItemIconComponent_o *)this, v134, 0LL);
          goto LABEL_339;
        }
        break;
      case 4:
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_402;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v59 = questEnt->fields.bannerId;
        v60 = v22->fields.mCostApSp;
        if ( v59 < 1 )
        {
          if ( !v60 )
            goto LABEL_402;
          UISprite__set_atlas(v22->fields.mCostApSp, v22->fields.mTerminalAtlas, 0LL);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
          v96 = v22->fields.mCostApSp;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
          }
          v97 = this->fields.mTitleLevelStrSp[2].fields.mTrans;
          if ( !v97 )
            goto LABEL_402;
          if ( (unsigned int)v129 >= LODWORD(v97[1].klass) )
            break;
          if ( !v96 )
            goto LABEL_402;
          UISprite__set_spriteName(v96, *((System_String_o **)&v97[1].monitor + v129), 0LL);
        }
        else
        {
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v61 = QuestBoardListViewItemDraw__GetApSpriteFileName(v59, (const MethodInfo *)questEnt);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v60, v61, 0LL);
          if ( !v60 )
            goto LABEL_402;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v60, (unsigned __int8)this & 1, 0LL);
        }
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_402;
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
        if ( !this )
          goto LABEL_402;
        v146.fields.r = r;
        v146.fields.g = g;
        v146.fields.b = b;
        v146.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v146, 0LL);
        if ( !v31 )
          goto LABEL_339;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v98 = v31->fields.itemIds;
        if ( !v98 )
          goto LABEL_402;
        if ( !v98->max_length )
          break;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        ItemIconComponent__SetItem((ItemIconComponent_o *)this, v98->m_Items[1], -1, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        v147.fields.r = r;
        v147.fields.g = g;
        v147.fields.b = b;
        v147.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)this, v147, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v100 = QuestBoardListViewItemDraw_TypeInfo;
        v101 = v99;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v100 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(v101, (float)v100->static_fields->COST_2_ICON_NORMAL_POSITION_X, 0LL);
        this = *v33;
        if ( !*v33 )
          goto LABEL_402;
        v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v102,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
          0LL);
        v103 = v31->fields.itemIds;
        if ( !v103 )
          goto LABEL_402;
        if ( !v103->max_length )
          break;
        v104 = v103->m_Items[1];
        v105 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v105 = BalanceConfig_TypeInfo;
        }
        if ( v104 == v105->static_fields->ItemIdQp )
        {
          *isDoubleItemConsumeQp = 1;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v106 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v106 )
            goto LABEL_402;
          UIWidget__set_width(v106, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostBg2;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !this )
            goto LABEL_402;
          UISprite__set_spriteName(
            (UISprite_o *)this,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
            0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_402;
          v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(
            v107,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
            0LL);
          this = *v33;
          if ( !*v33 )
            goto LABEL_402;
          v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(
            v108,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
            0LL);
        }
        if ( !QuestConsumeItemEntity__IsAvailableAt(v31, 1, 0LL) )
          goto LABEL_339;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        goto LABEL_337;
      default:
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
        if ( !this )
          goto LABEL_402;
        goto LABEL_338;
    }
LABEL_403:
    sub_1C2209C(this, questEnt);
  }
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostApSp;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpSp;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
  if ( !this )
    goto LABEL_402;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
  if ( !this )
    goto LABEL_402;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
  if ( !this )
    goto LABEL_402;
  v133.fields.r = r;
  v133.fields.g = g;
  v133.fields.b = b;
  v133.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)this, v133, 0LL);
  if ( v31 && QuestConsumeItemEntity__IsAvailableAt(v31, 1, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_402;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_402;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_402;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
    if ( !this )
      goto LABEL_402;
    goto LABEL_68;
  }
LABEL_339:
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_402;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = *v33;
  if ( !*v33 )
    goto LABEL_402;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_402;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_402;
  v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v117, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = *v33;
  if ( !*v33 )
    goto LABEL_402;
  v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v118, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_402;
  v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v119, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  v120 = (UIWidget_o *)v22->fields.mCostLb1;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v120 )
    goto LABEL_402;
  UIWidget__set_width(v120, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_DEFAULT_WIDTH, 0LL);
  this = *v33;
  if ( !*v33 )
    goto LABEL_402;
  UIWidget__set_width(
    (UIWidget_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_DEFAULT_WIDTH,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_402;
  UIWidget__set_width(
    (UIWidget_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_DEFAULT_WIDTH,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_402;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
    0LL);
  this = *v33;
  if ( !*v33 )
    goto LABEL_402;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_402;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
    0LL);
  if ( *isDoubleItemConsumeQp || !*isTripleItemConsume )
    return;
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  v121 = v22->fields.mCostLb1;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v121 )
    goto LABEL_402;
  UILabel__set_spacingX(
    v121,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
    0LL);
  this = *v33;
  if ( !*v33 )
    goto LABEL_402;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_402;
  UILabel__set_spacingX(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
    0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_402;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = *v33;
  if ( !*v33 )
    goto LABEL_402;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_402;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_402;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = *v33;
  if ( !*v33 )
    goto LABEL_402;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this
    || (((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData),
        (this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1) == 0LL)
    || (UILabel__SetCondensedScale_48213524(
          (UILabel_o *)this,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
          0.0,
          0LL),
        (this = *v33) == 0LL)
    || (UILabel__SetCondensedScale_48213524(
          (UILabel_o *)this,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
          0.0,
          0LL),
        (this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3) == 0LL) )
  {
LABEL_402:
    sub_1C22094(this, questEnt);
  }
  UILabel__SetCondensedScale_48213524(
    (UILabel_o *)this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
    0.0,
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
  if ( (byte_4BD9312 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD9312 = 1;
  }
  if ( !label )
    sub_1C22094(this, label);
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
  if ( (byte_4BD9311 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11038/*"QUEST_BOARD_COST_QP"*/);
    byte_4BD9311 = 1;
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
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11038/*"QUEST_BOARD_COST_QP"*/, 0LL);
      v30 = v31;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v23, v24, v25);
      SelfUserGame = System_String__Format(v22, v26, 0LL);
      v27 = (System_String_o *)SelfUserGame;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C22094(SelfUserGame, v19);
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
        bool isInstant,
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
    v9 = isInstant;
    do
    {
      if ( v7 >= mBannerArrows->max_length )
        sub_1C2209C(this, isDisp);
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
    sub_1C22094(this, isDisp);
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

  if ( (byte_4BD9320 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9320 = 1;
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
          sub_1C22094(v8, v7);
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
  if ( (byte_4BD9310 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD9310 = 1;
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
  AtlasManager__SetFaceImage(mLabelFaceIcon, ServantId, LimitCount, 1, 0LL, 0LL);
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
    maskSpriteName = System_String__Concat_63115476(QUEST_BOARD_MASK_SPNAME_PREFIX, v24, 0LL);
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
    sub_1C22094(this, questEnt);
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

  if ( (byte_4BD931E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4BD931E = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_1C22094(mOptionInfoLb, method);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  int32_t size; // w2
  int v24; // w9
  struct UnityEngine_GameObject_array *mStatusSp; // x22
  int max_length; // w8
  unsigned int v27; // w25
  UnityEngine_GameObject_o *mCostObj; // x22
  QuestBoardListViewItemDraw_c *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Object_o *eventTargetComponent; // x22
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x7
  UnityEngine_GameObject_o *v36; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *v38; // x8
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD92EE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__Clear__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD92EE = 1;
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
        if ( !byte_4BD6BB6 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
        {
          mOptionSecondBattleInformationObj = this->fields.mEarthLine;
          if ( !mOptionSecondBattleInformationObj )
            goto LABEL_92;
          QuestBoardListViewEarthLine__Hide(mOptionSecondBattleInformationObj, 0LL);
        }
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mOptionSecondBattleInformationObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = (struct QuestBoardListViewMultiSecondBattleInformation_o *)Component_object;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.secondBattleInformation,
          (int64_t)Component_object,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.secondBattleInformation;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)*p_secondBattleInformation;
        if ( !*p_secondBattleInformation )
          goto LABEL_92;
        QuestBoardListViewMultiSecondBattleInformation__Reset(
          (QuestBoardListViewMultiSecondBattleInformation_o *)mOptionSecondBattleInformationObj,
          0LL);
        mMultiSecondBattleInformation = this->fields.mMultiSecondBattleInformation;
        if ( !mMultiSecondBattleInformation )
          goto LABEL_92;
        size = mMultiSecondBattleInformation->fields._size;
        v24 = mMultiSecondBattleInformation->fields._version + 1;
        mMultiSecondBattleInformation->fields._size = 0;
        mMultiSecondBattleInformation->fields._version = v24;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)mMultiSecondBattleInformation->fields._items, 0, size, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mOptionPreBattleSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostConsumeBattleWinSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        v39.fields.r = 1.0;
        v39.fields.g = 1.0;
        v39.fields.b = 1.0;
        v39.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mOptionSecondBattleInformationObj, v39, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj
          || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mStatusObj) == 0LL)
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mStatusSp = this->fields.mStatusSp) == 0LL) )
        {
LABEL_92:
          sub_1C22094(mOptionSecondBattleInformationObj, v12);
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v27 = 0;
          do
          {
            if ( v27 >= max_length )
              sub_1C2209C(mOptionSecondBattleInformationObj, v12);
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)mStatusSp->m_Items[v27];
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_92;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
            max_length = mStatusSp->max_length;
          }
          while ( (int)++v27 < max_length );
        }
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mBannerRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNoticeNumberRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNextSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mPrevSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mClassIconRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNoBattleObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mRarePrismSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mQuestInfoBtn;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mQuestInfoShowing;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mDamageRecordSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mKnockdownRecordSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.blackMarkSpace;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mBoardMessage;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.eventTarget;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.alloutRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.roadmapButton;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mServantLimitRewardObtainedSP;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mCostObj = this->fields.mCostObj;
        v29 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v29 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(mCostObj, v29->static_fields->COST_OBJ_POS, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                                                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UIWidget__set_width(
          (UIWidget_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_SINGLE,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostApSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v30,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostLb1;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v31,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v32,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
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
            goto LABEL_92;
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
              goto LABEL_82;
            }
            goto LABEL_85;
          case 1:
            goto LABEL_91;
          case 2:
          case 3:
            QuestBoardListViewItemDraw__SetItemOfShortcut(this, questBoardItem, v34);
            return;
          case 4:
            v38 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( !v38 )
              goto LABEL_91;
            if ( v38->fields.questBoardType == 2 )
LABEL_85:
              QuestBoardListViewItemDraw__SetItemOfArea(this, questBoardItem, 1, 1, 0, 0, 0, v35);
            else
LABEL_82:
              QuestBoardListViewItemDraw__SetItemOfFolder(this, questBoardItem, v34);
            break;
          case 5:
            QuestBoardListViewItemDraw__SetItemOfWarBoard(this, questBoardItem, v34);
            return;
          case 6:
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)questBoardItem->fields._quest_info_k__BackingField;
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_92;
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)MapControl_QuestInfo__GetMine(
                                                                                   (MapControl_QuestInfo_o *)mOptionSecondBattleInformationObj,
                                                                                   0LL);
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_92;
            if ( QuestEntity__HasFlag((QuestEntity_o *)mOptionSecondBattleInformationObj, 0x800000000000000LL, 0LL) )
              QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(this, questBoardItem, v34);
            else
LABEL_91:
              QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v34);
            break;
          default:
            return;
        }
      }
    }
    else
    {
      this->fields.isDummy = 1;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !byte_4BD6BB1 )
      {
        sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      GameObjectExtensions__SetLocalScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  System_String_o *targetCam; // x23
  System_Int32_c *v90; // x0
  struct UIRect_AnchorPoint_o *v91; // x8
  Il2CppObject *v92; // x0
  int v93; // w21
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v95; // x28
  System_String_o *v96; // x23
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  Il2CppObject *v100; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x23
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
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
  struct UISprite_o *checkTime; // [xsp+10h] [xbp-80h]
  bool v134; // [xsp+1Ch] [xbp-74h]
  _BOOL4 IsClosedWar; // [xsp+20h] [xbp-70h]
  _BOOL4 IsMainInterlude; // [xsp+24h] [xbp-6Ch]
  int warId; // [xsp+28h] [xbp-68h]
  int32_t PrioredBannerId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = questBoardItem;
  v13 = this;
  if ( (byte_4BD92F0 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&ScrTerminalListTop_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD92F0 = 1;
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
  checkTime = this->fields.mShohiSp;
  v129 = isSpecialClosedBanner;
  if ( warId < 1 )
  {
    v21 = 0LL;
LABEL_15:
    Mine = 0LL;
    v23 = 1;
    goto LABEL_16;
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
      v66 = 1032LL;
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
      v66 = 1000LL;
    }
    EventAddBannerSpriteName = *(System_String_o **)((char *)&v65->static_fields->POS_Y_ITVL_AREA + v66);
LABEL_107:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_282;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               warId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v68 = v64;
    v69 = v13;
    v70 = v130;
    v71 = v12;
    goto LABEL_171;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           warId,
                                           (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
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
    if ( !byte_4BD7263 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7263 = 1;
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
      rightAnchor = this->fields.mTitleLevelStrSp[2].fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_282;
      v78 = v131;
      if ( LODWORD(rightAnchor->fields.relative) > 1 )
      {
        targetCam = (System_String_o *)rightAnchor->fields.targetCam;
        v43 = v79;
        PrioredBannerId = (int32_t)v79->fields.mcBaseP;
        v90 = int_TypeInfo;
LABEL_169:
        v92 = (Il2CppObject *)j_il2cpp_value_box_0(v90, &PrioredBannerId, v53, v54, v55);
        EventAddBannerSpriteName = System_String__Format(targetCam, v92, 0LL);
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
      v91 = this->fields.mTitleLevelStrSp[2].fields.rightAnchor;
      if ( !v91 )
        goto LABEL_282;
      if ( LODWORD(v91->fields.relative) > 1 )
      {
        targetCam = (System_String_o *)v91->fields.targetCam;
        PrioredBannerId = v128;
        v90 = int_TypeInfo;
        goto LABEL_169;
      }
    }
LABEL_285:
    sub_1C2209C(this, questBoardItem);
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
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
      v77 = 1032LL;
      if ( v75 )
        v77 = 1040LL;
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
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
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
      v96 = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0LL);
      v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v97, v98, v99);
      EventAddBannerSpriteName = System_String__Format(v96, v100, 0LL);
    }
    if ( WarReleaseEntity__IsAnnouncement(v95, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !Mine )
        goto LABEL_282;
      QBOARD_CAP_CLOSED_SPECIAL_FORMAT = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0LL);
      v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v102, v103, v104);
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
      sub_1C22354(this);
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
                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    sub_1C22094(this, questBoardItem);
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
  struct UISprite_o *mShohiSp; // x26
  _BOOL4 IsMainInterlude; // w25
  const MethodInfo *v16; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x29
  _BOOL4 IsPurchasedByRarePrism; // w26
  int v19; // w28
  const MethodInfo *v20; // x4
  bool IsClose; // w29
  unsigned int status; // w8
  _BOOL4 v23; // w9
  QuestBoardListViewItemDraw_c *v24; // x0
  System_String_o *QBOARD_CAP_CLOSED; // x24
  ScrTerminalListTop_c *IsOpenedMainScenarioWar; // x0
  clsQuestCheck_o *v27; // x23
  clsQuestCheck_o *v28; // x23
  MapControl_RootInfo_o *v29; // x23
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  QuestBoardListViewItemDraw_c *v33; // x8
  int32_t v34; // w23
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v36; // x24
  Il2CppObject *v37; // x0
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v39; // x23
  QuestBoardListViewItemDraw_c *v40; // x0
  System_String_o *QBOARD_CAP_CLOSED_FORMAT; // x24
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  QuestBoardListViewItemDraw_c *v46; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x23
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  System_String_o *EventAddBannerSpriteName; // x0
  BalanceConfig_c *v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  QuestBoardListViewItemDraw_c *v57; // x8
  int32_t v58; // w23
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
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+8h] [xbp-88h]
  int v92; // [xsp+14h] [xbp-7Ch]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-78h]
  int64_t v94; // [xsp+20h] [xbp-70h]
  _BOOL4 IsClosedWar; // [xsp+28h] [xbp-68h]
  int32_t PrioredBannerId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = questBoardItem;
  v4 = this;
  if ( (byte_4BD92F6 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&ScrTerminalListTop_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD92F6 = 1;
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    sub_1C22354(this);
    goto LABEL_195;
  }
  mShohiSp = this->fields.mShohiSp;
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
  v94 = (int64_t)mShohiSp;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  v92 = IsClosedWar;
  if ( v19 == 0 && IsMainInterlude )
  {
    if ( !v9 )
      goto LABEL_193;
    if ( WarEntity__HasFlag(v9, 128, 0LL) || WarEntity__HasFlag(v9, 32, 0LL) )
    {
      status = AreaBoardInfo_k__BackingField->fields.status;
      v23 = IsClosedWar;
    }
    else
    {
      v53 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v53 = BalanceConfig_TypeInfo;
      }
      if ( warId != v53->static_fields->MainInterludeWarId )
        goto LABEL_51;
      v23 = IsClosedWar;
      status = AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE;
    }
    v92 = v23 || status == 2;
  }
LABEL_51:
  if ( (_DWORD)manager )
  {
    v24 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v24 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QBOARD_CAP_CLOSED = v24->static_fields->QBOARD_CAP_CLOSED;
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v27 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v27 )
      goto LABEL_193;
    IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)clsQuestCheck__IsWarClear(
                                                        v27,
                                                        ScrTerminalListTop_TypeInfo->static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                        0LL);
    if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
      goto LABEL_201;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v28 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v28 )
      goto LABEL_193;
    if ( !clsQuestCheck__IsWarClear(
            v28,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL) )
      goto LABEL_107;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_193;
    v29 = *(MapControl_RootInfo_o **)&this->fields.m_CachedPtr;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v29 )
      goto LABEL_193;
    IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)MapControl_RootInfo__IsOpenedMainScenarioWar(
                                                        v29,
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
        this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_193;
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( !this )
          goto LABEL_193;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 warId,
                                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_193;
        this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
        v33 = QuestBoardListViewItemDraw_TypeInfo;
        v34 = (int)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v33 = QuestBoardListViewItemDraw_TypeInfo;
        }
        msQBoardL1Names = v33->static_fields->msQBoardL1Names;
        if ( !msQBoardL1Names )
          goto LABEL_193;
        if ( msQBoardL1Names->max_length <= 1 )
          goto LABEL_198;
        v36 = msQBoardL1Names->m_Items[1];
        PrioredBannerId = v34;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v30, v31, v32);
        QBOARD_CAP_CLOSED = System_String__Format(v36, v37, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
        if ( !this )
          goto LABEL_193;
        OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, warId, 0LL);
        if ( OpenEntity )
        {
          v39 = OpenEntity;
          IsClose = WarReleaseEntity__IsClose(OpenEntity, 0LL);
          if ( IsClose )
          {
            v40 = QuestBoardListViewItemDraw_TypeInfo;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v40 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QBOARD_CAP_CLOSED_FORMAT = v40->static_fields->QBOARD_CAP_CLOSED_FORMAT;
            PrioredBannerId = WarEntity__GetPrioredBannerId(v9, 0LL);
            v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v42, v43, v44);
            QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_FORMAT, v45, 0LL);
          }
          if ( WarReleaseEntity__IsAnnouncement(v39, 0LL) )
          {
            v46 = QuestBoardListViewItemDraw_TypeInfo;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v46 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QBOARD_CAP_CLOSED_SPECIAL_FORMAT = v46->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
            PrioredBannerId = WarEntity__GetPrioredBannerId(v9, 0LL);
            v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v48, v49, v50);
            QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v51, 0LL);
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
                                       (v19 != 0) | (unsigned __int8)v92,
                                       v20);
        }
        else
        {
          this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   warId,
                                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
          PrioredBannerId = v58;
          v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v54, v55, v56);
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
                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_193;
  v97.fields.r = 1.0;
  v97.fields.g = 1.0;
  v97.fields.b = 1.0;
  v97.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v97, 0LL);
  if ( v92 )
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
    sub_1C22094(IsDisplayableRoadmapButton, v90);
  }
  v78 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)v78
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v78 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_195:
    sub_1C22354(manager);
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
                                                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
        sub_1C22094(this, questBoardItem);
      }
      sub_1C22354(this);
LABEL_198:
      sub_1C2209C(this, questBoardItem);
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
  int64_t mCostConsumeBattleWinSp; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x22
  DataManager_o *v15; // x20
  QuestEntity_o *PhaseDetailedEntity; // x21
  unsigned int v17; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  int32_t dispType; // w29
  bool HasFlag; // w0
  float v22; // s8
  Il2CppObject *MasterData_object; // x23
  bool v24; // w23
  bool v25; // w0
  int32_t v26; // w20
  _BOOL4 v27; // w8
  QuestBoardListViewItemDraw_o *PhaseMax; // x0
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  char v31; // w23
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v33; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v35; // x1
  System_String_o *v36; // x0
  QuestBoardListViewItemDraw_c *v37; // x0
  System_String_o *v38; // x25
  System_String_o *v39; // x0
  UISprite_o *mcBaseP; // x24
  System_String_o *v41; // x25
  int32_t questId; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v44; // x8
  UnityEngine_GameObject_o *v45; // x24
  float NEXT_POS_X_QUEST; // s0
  int32_t v47; // w24
  bool IsQuestClear_38834244; // w0
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  const MethodInfo *v52; // x3
  QuestBoardListViewItemDraw_c *v53; // x0
  const MethodInfo *v54; // x3
  QuestBoardListViewItemDraw_c *v55; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  QuestBoardListViewItemDraw_c *v57; // x0
  int pickupPriority; // w20
  QuestBoardListViewItemDraw_c *v59; // x0
  bool v60; // zf
  __int64 v61; // x9
  __int64 v62; // x10
  __int64 v63; // x11
  __int64 v64; // x12
  __int64 v65; // x13
  __int64 v66; // x14
  __int64 v67; // x10
  float *v68; // x9
  float *v69; // x10
  __int64 v70; // x11
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x2
  UnityEngine_GameObject_o *v73; // x23
  QuestBoardListViewItemDraw_c *v74; // x0
  QuestBoardListViewItemDraw_o *v75; // x0
  const MethodInfo *v76; // x5
  System_String_o *RecommendLv; // x0
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x2
  QuestBoardListViewItemDraw_o *v80; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x23
  int32_t mMatrixFrame; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v84; // x5
  bool v85; // w0
  const MethodInfo *v86; // x3
  UILabel_o *mTitleNameLb; // x23
  const MethodInfo *v88; // x4
  QuestBoardListViewItemDraw_o *v89; // x0
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x2
  UISprite_o *mLabelNameSp; // x23
  QuestBoardListViewItemDraw_o *v93; // x0
  const MethodInfo *v94; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v96; // x23
  const MethodInfo *v97; // x3
  UILabel_o *v98; // x23
  QuestBoardListViewItemDraw_o *v99; // x0
  const MethodInfo *v100; // x4
  bool PhasePresentGiftData; // w24
  const MethodInfo *v102; // x4
  int32_t v103; // w23
  QuestBoardListViewItemDraw_PhasePresentData_o *v104; // x25
  int32_t afterClear; // w28
  float v106; // s9
  float v107; // s10
  float v108; // s11
  float v109; // s12
  bool IsRepeatReward; // w0
  const MethodInfo *v111; // x6
  const MethodInfo *v112; // x3
  bool v113; // w23
  int v114; // w20
  const MethodInfo *v115; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x23
  const MethodInfo *v117; // x7
  int64_t *p_expireAt; // x8
  int64_t v119; // x23
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  __int64 v124; // x28
  Il2CppObject *v125; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x1
  System_String_o *IfExists; // x26
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  struct MapControl_WarInfo_o *v143; // x8
  __int64 v144; // x25
  Il2CppObject *v145; // x0
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  int64_t v158; // x1
  System_String_o *v159; // x28
  __int64 v160; // x2
  __int64 v161; // x3
  __int64 v162; // x4
  struct MapControl_WarInfo_o *v163; // x8
  __int64 v164; // x25
  Il2CppObject *v165; // x0
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  int64_t v178; // x1
  System_String_o *v179; // x0
  System_Collections_Generic_List_object__o *v180; // x25
  System_String_o *v181; // x27
  QuestBoardInformationText_o *v182; // x24
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  struct System_Object_array *items; // x8
  _QWORD *v190; // x9
  __int64 size; // x10
  Il2CppClass **v192; // x0
  UISprite_o *v193; // x28
  __int64 v194; // x8
  System_String_o *v195; // x24
  System_String_o *v196; // x0
  System_String_o *v197; // x24
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x28
  char v199; // w23
  struct QuestBoardListViewObject_o *v200; // x8
  System_Collections_Generic_List_object__o *v201; // x24
  __int64 v202; // x9
  int32_t AlphaAnimCnt; // w0
  Il2CppObject *Item; // x24
  int32_t v205; // w9
  int32_t v206; // w8
  const MethodInfo *v207; // x1
  int32_t endTime; // w24
  UISprite_o *mCostApSp; // x23
  System_String_o *ApSpriteFileName; // x24
  UnityEngine_GameObject_o *mChallengeObj; // x23
  struct UnityEngine_GameObject_o *v212; // x20
  QuestBoardListViewItemDraw_c *v213; // x0
  _BOOL4 v214; // w20
  struct QuestBoardListViewItemDraw_StaticFields *v215; // x8
  __int64 v216; // x9
  __int64 v217; // x10
  __int64 v218; // x11
  int32_t ClearNum; // w23
  UISprite_o *challengeStrSpr; // x24
  UILabel_o *mChallengeLb; // x24
  UnityEngine_GameObject_o *mPhaseObj; // x23
  UnityEngine_GameObject_o *v223; // x21
  UnityEngine_GameObject_o *v224; // x20
  const MethodInfo *v225; // x4
  int32_t v226; // w28
  MapControl_PhaseInfo_o *CurrentPhaseInfo; // x0
  int32_t ReferToQuestPhase; // w0
  int32_t v229; // w23
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v231; // x24
  int32_t v232; // w23
  int32_t *p_questPhase; // x8
  int32_t v234; // w0
  signed int v235; // w25
  uint32_t cctor_finished; // w9
  struct QuestBoardListViewItemDraw_StaticFields *v237; // x8
  int32_t PHASE_NORMAL_MAX; // w21
  bool v239; // w26
  _BOOL4 v240; // w27
  __int64 v241; // x9
  signed int v242; // w20
  unsigned int v243; // w29
  int v244; // w22
  int v245; // w21
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v247; // x8
  UISprite_o *v248; // x28
  QuestBoardListViewItemDraw_o *v249; // x0
  const MethodInfo *v250; // x6
  System_String_o *PhaseArrowSpriteName; // x0
  QuestBoardListViewItemDraw_o *v252; // x0
  const MethodInfo *v253; // x3
  int32_t PhaseArrowIntervalSize; // w24
  QuestEntity_o *v255; // x21
  UnityEngine_GameObject_o *v256; // x23
  QuestBoardListViewItemDraw_c *v257; // x0
  UISprite_o *mDamageRecordSp; // x23
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x24
  Il2CppObject *v260; // x23
  int64_t MaxTurnDamage; // x0
  UILabel_o *mDamageRecordLb; // x23
  __int64 v263; // x2
  __int64 v264; // x3
  __int64 v265; // x4
  Il2CppObject *v266; // x0
  UnityEngine_GameObject_o *v267; // x23
  QuestBoardListViewItemDraw_c *v268; // x0
  UISprite_o *mKnockdownRecordSp; // x23
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x24
  QuestKnockdownInfo_o *v271; // x23
  Il2CppObject *v272; // x24
  UILabel_o *mKnockdownRecordCountLb; // x24
  __int64 v274; // x2
  __int64 v275; // x3
  __int64 v276; // x4
  System_String_o *v277; // x25
  Il2CppObject *v278; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x24
  System_String_o *v280; // x25
  __int64 v281; // x2
  __int64 v282; // x3
  __int64 v283; // x4
  Il2CppObject *v284; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x26
  System_String_o *v286; // x27
  long double inited; // q0
  _QWORD *v288; // x24
  __int64 v289; // x8
  __int64 v290; // x0
  __int64 v291; // x0
  UILabel_o *mKnockdownRecordDamageNameLb; // x26
  System_String_o *v293; // x0
  long double v294; // q0
  _QWORD *v295; // x24
  System_String_o *v296; // x27
  __int64 v297; // x8
  __int64 v298; // x0
  __int64 v299; // x0
  UnityEngine_GameObject_o *v300; // x0
  QuestBoardListViewItemDraw_c *v301; // x8
  UnityEngine_GameObject_o *v302; // x23
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_GameObject_o *v304; // x0
  float LocalPositionX; // s0
  QuestBoardListViewItemDraw_c *v306; // x0
  float v307; // s8
  int32_t id; // w23
  TerminalSceneComponent_c *v309; // x0
  __int64 v310; // x23
  UILabel_o *mOptionRestrinctionLb; // x23
  UnityEngine_GameObject_o *v312; // x23
  UnityEngine_Behaviour_o *v313; // x23
  const MethodInfo *v314; // x3
  struct QuestPhaseDetailEntity_BoardList_o *boardMessage; // x8
  System_Collections_Generic_IEnumerable_TSource__o *list; // x0
  __int64 v317; // x8
  QuestPhaseDetailEntity_BoardInfo_array *v318; // x26
  __int64 v319; // x8
  QuestPhaseDetailEntity_BoardInfo_o *v320; // x8
  bool v321; // w23
  bool v322; // w26
  char v323; // w28
  int64_t v324; // x2
  int32_t v325; // w3
  System_String_o *v326; // x4
  BattleSetupInfo_o *v327; // x5
  FollowerInfo_o *v328; // x6
  PartyListViewItem_o *v329; // x7
  bool v330; // w27
  __int64 v331; // x8
  _QWORD *v332; // x9
  __int64 v333; // x10
  __int64 v334; // x8
  _BOOL4 v335; // w20
  UISprite_o *v336; // x24
  __int64 v337; // x9
  QuestBoardListViewItemDraw_c *v338; // x0
  UISprite_o *mOptionPreBattleSp; // x24
  System_String_o *PRE_BATTLE_ORGANIZATION; // x25
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  __int64 v347; // x8
  _QWORD *v348; // x9
  __int64 v349; // x10
  __int64 v350; // x8
  bool v351; // w24
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  char v353; // w23
  UnityEngine_GameObject_o *v354; // x0
  QuestBoardListViewItemDraw_c *v355; // x8
  UnityEngine_GameObject_o *v356; // x24
  struct QuestBoardListViewItemDraw_StaticFields *v357; // x8
  const MethodInfo *v358; // x2
  struct UILabel_o *v359; // x23
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v361; // x2
  struct UILabel_o *v362; // x8
  QuestBoardListViewItemDraw_c *v363; // x0
  QuestBoardListViewItemDraw_c *v364; // x0
  int32_t mSpacingX; // w20
  QuestPhaseEntity_o *v366; // x0
  QuestPhaseEntity_o *v367; // x23
  struct System_Int32_array *classIds; // x8
  bool v369; // w24
  struct ServantClassIconComponent_array *mClassIcons; // x8
  int max_length; // w9
  int v372; // w20
  struct System_Int32_array *v373; // x21
  il2cpp_array_size_t v374; // w9
  __int64 v375; // x22
  Il2CppClass **v376; // x8
  UnityEngine_Component_o *v377; // x23
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v381; // x22
  QuestBoardListViewItemDraw___c_c *v382; // x0
  System_Func_object__int__o *_9__318_1; // x23
  Il2CppObject *v384; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v385; // x0
  int64_t v386; // x2
  int32_t v387; // w3
  System_String_o *v388; // x4
  BattleSetupInfo_o *v389; // x5
  FollowerInfo_o *v390; // x6
  PartyListViewItem_o *v391; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v392; // x0
  System_Int32_array *v393; // x22
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v396; // w21
  QuestBoardListViewItemDraw_c *v397; // x0
  int32_t *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  UISprite_o *v399; // x24
  __int64 v400; // x8
  QuestBoardListViewItemDraw_o *v401; // x0
  QuestBoardListViewItem_o *v402; // x1
  const MethodInfo *v403; // x2
  const MethodInfo *v404; // [xsp+8h] [xbp-148h]
  int64_t checkTime; // [xsp+28h] [xbp-128h]
  bool v406; // [xsp+34h] [xbp-11Ch]
  int key; // [xsp+38h] [xbp-118h]
  bool v408; // [xsp+3Ch] [xbp-114h]
  MapControl_QuestInfo_o *v409; // [xsp+40h] [xbp-110h]
  MapControl_QuestInfo_o *v410; // [xsp+40h] [xbp-110h]
  _BOOL4 v411; // [xsp+48h] [xbp-108h]
  bool v412; // [xsp+4Ch] [xbp-104h]
  int32_t v413; // [xsp+4Ch] [xbp-104h]
  __int64 v414; // [xsp+50h] [xbp-100h]
  QuestEntity_o *v415; // [xsp+58h] [xbp-F8h]
  DataManager_o *v416; // [xsp+60h] [xbp-F0h]
  int32_t questPhase; // [xsp+68h] [xbp-E8h]
  _BOOL4 v418; // [xsp+6Ch] [xbp-E4h]
  int64_t totalDamage; // [xsp+70h] [xbp-E0h] BYREF
  int64_t knockdownNum; // [xsp+78h] [xbp-D8h] BYREF
  int32_t warId; // [xsp+84h] [xbp-CCh] BYREF
  QuestPhaseDetailEntity_o *v422; // [xsp+88h] [xbp-C8h] BYREF
  Il2CppObject *v423; // [xsp+90h] [xbp-C0h] BYREF
  int32_t v424; // [xsp+98h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+9Ch] [xbp-B4h] BYREF
  int32_t fixedVal[2]; // [xsp+A0h] [xbp-B0h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+A8h] [xbp-A8h] BYREF
  bool isTripleItemConsume; // [xsp+B4h] [xbp-9Ch] BYREF
  bool isDoubleItemConsumeQp; // [xsp+B8h] [xbp-98h] BYREF
  bool isDoubleItemConsume; // [xsp+BCh] [xbp-94h] BYREF
  UserQuestEntity_o *entity; // [xsp+C8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v432; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v433; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v434; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v435; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v436; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v437; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v438; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD92F9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Array_Empty_object___);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_QuestBoardInformationText___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&QuestInformationComponent_TypeInfo);
    sub_1C21E38(&QuestKnockdownInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__318_1__);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass318_0__SetItemOfQuest_b__0__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass318_0_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_1C21E38(&StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C21E38(&StringLiteral_13598/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/);
    sub_1C21E38(&StringLiteral_23128/*"questboard_challenge"*/);
    sub_1C21E38(&StringLiteral_11042/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/);
    sub_1C21E38(&StringLiteral_13602/*"TIME_REST_QUEST_BOARD_QUEST_{0}"*/);
    sub_1C21E38(&StringLiteral_11039/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C21E38(&StringLiteral_11041/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/);
    sub_1C21E38(&StringLiteral_13599/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR_{0}"*/);
    sub_1C21E38(&StringLiteral_11040/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/);
    sub_1C21E38(&StringLiteral_13600/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_23129/*"questboard_crushing"*/);
    sub_1C21E38(&StringLiteral_13601/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR_{0}"*/);
    byte_4BD92F9 = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  v424 = 0;
  v422 = 0LL;
  v423 = 0LL;
  v5 = sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass318_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass318_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass318_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_543;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_543;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_543;
  v15 = (DataManager_o *)Instance;
  Instance = (__int64)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_543;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v15 )
    goto LABEL_543;
  v17 = Instance;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v15,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_543;
  if ( !Instance )
    goto LABEL_543;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  key = Instance;
  if ( !mListViewObject )
    goto LABEL_543;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_543;
  v416 = v15;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_608;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *(_QWORD *)(Instance + 584);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  if ( dispType == 2 )
    v22 = 0.5;
  else
    v22 = 1.0;
  *(float *)(v5 + 24) = v22;
  *(float *)(v5 + 28) = v22;
  *(float *)(v5 + 32) = v22;
  *(_DWORD *)(v5 + 36) = 1065353216;
  v412 = HasFlag;
  MasterData_object = DataManager__GetMasterData_object_(
                        v15,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_543;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    PhaseDetailedEntity->fields.id,
    0LL);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_543;
  v24 = QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x10000000000000LL, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_543;
  v25 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, quest_info_k__BackingField->fields.questId, 0, 0LL);
  v26 = quest_info_k__BackingField->fields.questPhase;
  v27 = !v24;
  v418 = v27;
  if ( !v25 )
    v27 = 0;
  v411 = v27;
  PhaseMax = (QuestBoardListViewItemDraw_o *)MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v30 = v26 + 1 < (int)PhaseMax ? v26 + 1 : (int)PhaseMax;
  questPhase = v30;
  Instance = QuestBoardListViewItemDraw__IsInterruptedQuest(
               PhaseMax,
               quest_info_k__BackingField->fields.questId,
               v30,
               v29);
  if ( !this->fields.mLabelObj )
    goto LABEL_543;
  v31 = Instance;
  UnityEngine_GameObject__SetActive(this->fields.mLabelObj, 1, 0LL);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  v409 = (MapControl_QuestInfo_o *)questBoardItem;
  if ( OverwriteBannerId_k__BackingField >= 1 )
  {
    v33 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v33 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    QUEST_BOARD_SPNAME_PREFIX = v33->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v424 = OverwriteBannerId_k__BackingField;
    v35 = System_Int32__ToString((int32_t)&v424, 0LL);
    v36 = QUEST_BOARD_SPNAME_PREFIX;
LABEL_58:
    v39 = System_String__Concat_63115476(v36, v35, 0LL);
    mcBaseP = this->fields.mcBaseP;
    v41 = v39;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mcBaseP, v41, 0LL);
    if ( !mcBaseP )
      goto LABEL_543;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, Instance & 1, 0LL);
    goto LABEL_62;
  }
  if ( PhaseDetailedEntity->fields.bannerId >= 1 )
  {
    v37 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v37 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v38 = v37->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v35 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
    v36 = v38;
    goto LABEL_58;
  }
  v193 = this->fields.mcBaseP;
  if ( v17 <= 5 && ((1 << v17) & 0x26) != 0 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v194 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1072LL);
    if ( !v194 )
      goto LABEL_543;
    if ( v17 >= *(_DWORD *)(v194 + 24) )
      goto LABEL_607;
    v195 = *(System_String_o **)(v194 + 8LL * v17 + 32);
    v196 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
    v197 = System_String__Concat_63115476(v195, v196, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v193, v197, 0LL);
  }
  else
  {
    if ( !v193 )
      goto LABEL_543;
    UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0LL);
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v399 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v400 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1072LL);
    if ( !v400 )
      goto LABEL_543;
    if ( v17 >= *(_DWORD *)(v400 + 24) )
      goto LABEL_607;
    if ( !v399 )
      goto LABEL_543;
    UISprite__set_spriteName(v399, *(System_String_o **)(v400 + 8LL * (int)v17 + 32), 0LL);
  }
LABEL_62:
  Instance = (__int64)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_543;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_543;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 1
    && MapControl_QuestInfo__IsDisaplayable(quest_info_k__BackingField, 0LL) )
  {
    Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
    if ( !Instance )
      goto LABEL_543;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x400000000000LL, 0LL) )
    {
      questId = quest_info_k__BackingField->fields.questId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_38834244(questId, -1, 1, 0LL) )
        goto LABEL_74;
    }
  }
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
LABEL_74:
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_543;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_543;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_543;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v44 = QuestBoardListViewItemDraw_TypeInfo;
    v45 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v44 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v45, v44->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_543;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_543;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_543;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 128) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 140) = NEXT_POS_X_QUEST;
  }
  v47 = quest_info_k__BackingField->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_38834244 = CondType__IsQuestClear_38834244(v47, -1, 0, 0LL);
  if ( IsQuestClear_38834244 || dispType != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v51 = 1;
    }
    else
    {
      if ( !IsQuestClear_38834244 )
        goto LABEL_92;
      v51 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v51, 1, v50);
  }
LABEL_92:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v50);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v49);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v53 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v53 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      v53->static_fields->NEW_POS_QUEST_NEXT,
      v53->static_fields->NEW_W_DEFAULT,
      v53->static_fields->NEW_H_DEFAULT,
      v52);
    v55 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v55 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v55->static_fields;
LABEL_107:
    v60 = (v31 & 1) == 0;
    v61 = 228LL;
    v62 = 252LL;
    v63 = 224LL;
    v64 = 248LL;
    v65 = 220LL;
    v66 = 244LL;
    goto LABEL_108;
  }
  v57 = QuestBoardListViewItemDraw_TypeInfo;
  pickupPriority = quest_info_k__BackingField->fields.pickupPriority;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v57 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v57->static_fields->NEW_POS_QUEST,
    v57->static_fields->NEW_W_DEFAULT,
    v57->static_fields->NEW_H_DEFAULT,
    v52);
  v59 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v59 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v59->static_fields;
  if ( pickupPriority >= 1 )
    goto LABEL_107;
  v60 = (v31 & 1) == 0;
  v61 = 216LL;
  v62 = 240LL;
  v63 = 212LL;
  v64 = 236LL;
  v65 = 208LL;
  v66 = 232LL;
LABEL_108:
  if ( !v60 )
    v61 = v62;
  if ( v60 )
    v67 = v63;
  else
    v67 = v64;
  v68 = (float *)((char *)&static_fields->POS_Y_ITVL_AREA + v61);
  v69 = (float *)((char *)&static_fields->POS_Y_ITVL_AREA + v67);
  if ( v60 )
    v70 = v65;
  else
    v70 = v66;
  v432.fields.z = *v68;
  v432.fields.y = *v69;
  LODWORD(v432.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v70);
  QuestBoardListViewItemDraw__SetPrevSprite(this, PhaseDetailedEntity, v432, v31 & 1, v54);
  if ( dispType != 2
    && quest_info_k__BackingField->fields.isNew
    && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v71);
  }
  Instance = (__int64)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v72);
  if ( !Instance )
    goto LABEL_543;
  v73 = (UnityEngine_GameObject_o *)Instance;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v74 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v74 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v73, v74->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v412, 0LL);
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_543;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  v406 = !v412;
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  v75,
                  PhaseDetailedEntity,
                  questPhase,
                  !v412,
                  dispType == 2,
                  v76);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v5 + 24), v78);
  v80 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v80 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mMatrixFrame = v80->fields.mTitleLevelStrSp[1].fields.mMatrixFrame;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v80, v17, v79);
  v85 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          mMatrixFrame,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v5 + 24),
          v84);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v85 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v17, v86);
    if ( !mTitleNameLb )
      goto LABEL_543;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    goto LABEL_151;
  }
  Instance = (__int64)QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_543;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v17 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v89, quest_info_k__BackingField->fields.warId, v90) )
  {
    Instance = (__int64)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_543;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_543;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_543;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v93, PhaseDetailedEntity, v17, v94);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_543;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_543;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_543;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_543;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_543;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_543;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v96 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v96,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass318_0__SetItemOfQuest_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v96, v97);
    }
LABEL_151:
    if ( dispType == 2 )
      goto LABEL_152;
    goto LABEL_153;
  }
  if ( dispType == 2 )
  {
LABEL_152:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v88);
    goto LABEL_155;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v91);
LABEL_153:
  Instance = (__int64)this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_543;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_155:
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v98 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v98 )
    goto LABEL_543;
  v408 = dispType != 2;
  UILabel__SetCondensedScale(v98, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0, 0LL);
  Instance = (__int64)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_543;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v99,
                           &phasePresentData,
                           PhaseDetailedEntity,
                           quest_info_k__BackingField->fields.questPhase,
                           v100);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    phasePresentData,
    dispType == 2,
    *(UnityEngine_Color_o *)(v5 + 24),
    v102);
  v103 = quest_info_k__BackingField->fields.questId;
  v104 = phasePresentData;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v106 = *(float *)(v5 + 24);
  v107 = *(float *)(v5 + 28);
  v108 = *(float *)(v5 + 32);
  v109 = *(float *)(v5 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v435.fields.r = v106;
  v435.fields.g = v107;
  v435.fields.b = v108;
  v435.fields.a = v109;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    v103,
    PhasePresentGiftData,
    v104,
    afterClear,
    v435,
    IsRepeatReward,
    v111);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v5 + 24),
    v112);
  if ( entity && UserQuestEntity__HasStatus(entity, 8, 0LL) )
  {
    Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_543;
    Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_543;
    v113 = !WarEntity__IsShop((WarEntity_o *)Instance, 0LL);
    v114 = 1;
  }
  else
  {
    v114 = 0;
    v113 = 0;
  }
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v113, 0LL);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v115);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        questPhase,
                        !v411,
                        &fixedVal[1],
                        fixedVal,
                        &isNotItemConsume,
                        v117);
  if ( !mInfoTextList )
    goto LABEL_543;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  v414 = v5;
  v415 = PhaseDetailedEntity;
  if ( v114 | UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_543;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_207;
    if ( !entity )
      goto LABEL_543;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v119 = *p_expireAt;
  if ( *p_expireAt >= 1 && !QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL) )
  {
    Instance = sub_1C21EE0(string___TypeInfo, 2LL);
    WarInfo_k__BackingField = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !WarInfo_k__BackingField )
      goto LABEL_543;
    v124 = Instance;
    LODWORD(knockdownNum) = WarInfo_k__BackingField->fields.warId;
    v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &knockdownNum, v120, v121, v122);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_13602/*"TIME_REST_QUEST_BOARD_QUEST_{0}"*/, v125, 0LL);
    if ( !v124 )
      goto LABEL_543;
    if ( !*(_DWORD *)(v124 + 24) )
      goto LABEL_607;
    *(_QWORD *)(v124 + 32) = Instance;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v124 + 32), Instance, v126, v127, v128, v129, v130, v131);
    if ( *(_DWORD *)(v124 + 24) <= 1u )
      goto LABEL_607;
    v138 = StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/;
    *(_QWORD *)(v124 + 40) = StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v124 + 40), v138, v132, v133, v134, v135, v136, v137);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IfExists = LocalizationManager__GetIfExists((System_String_array *)v124, 0LL);
    Instance = sub_1C21EE0(string___TypeInfo, 2LL);
    v143 = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !v143 )
      goto LABEL_543;
    v144 = Instance;
    LODWORD(totalDamage) = v143->fields.warId;
    v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalDamage, v140, v141, v142);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_13601/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR_{0}"*/, v145, 0LL);
    if ( !v144 )
      goto LABEL_543;
    if ( !*(_DWORD *)(v144 + 24) )
      goto LABEL_607;
    *(_QWORD *)(v144 + 32) = Instance;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v144 + 32), Instance, v146, v147, v148, v149, v150, v151);
    if ( *(_DWORD *)(v144 + 24) <= 1u )
      goto LABEL_607;
    v158 = StringLiteral_13600/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/;
    *(_QWORD *)(v144 + 40) = StringLiteral_13600/*"TIME_REST_QUEST_BOARD_QUEST_DEFAULT_COLOR"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v144 + 40), v158, v152, v153, v154, v155, v156, v157);
    v159 = LocalizationManager__GetIfExists((System_String_array *)v144, 0LL);
    Instance = sub_1C21EE0(string___TypeInfo, 2LL);
    v163 = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !v163 )
      goto LABEL_543;
    v164 = Instance;
    warId = v163->fields.warId;
    v165 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v160, v161, v162);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_13599/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR_{0}"*/, v165, 0LL);
    if ( !v164 )
      goto LABEL_543;
    if ( !*(_DWORD *)(v164 + 24) )
      goto LABEL_607;
    *(_QWORD *)(v164 + 32) = Instance;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v164 + 32), Instance, v166, v167, v168, v169, v170, v171);
    if ( *(_DWORD *)(v164 + 24) <= 1u )
      goto LABEL_607;
    v178 = StringLiteral_13598/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/;
    *(_QWORD *)(v164 + 40) = StringLiteral_13598/*"TIME_REST_QUEST_BOARD_QUEST_CHANGED_COLOR"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v164 + 40), v178, v172, v173, v174, v175, v176, v177);
    v179 = LocalizationManager__GetIfExists((System_String_array *)v164, 0LL);
    v180 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    v181 = v179;
    v182 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor_35042164(v182, IfExists, v119, checkTime, v159, v181, 0LL);
    if ( !v180 )
      goto LABEL_543;
    items = v180->fields._items;
    v5 = v414;
    v190 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++v180->fields._version;
    if ( !items )
      goto LABEL_543;
    size = v180->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v180,
        (Il2CppObject *)v182,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
    }
    else
    {
      v192 = &items->obj.klass + size;
      v180->fields._size = size + 1;
      v192[4] = (Il2CppClass *)v182;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v192 + 4), (int64_t)v182, v183, v184, v185, v186, v187, v188);
    }
  }
LABEL_207:
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Instance = System_Linq_Enumerable__Any_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mInfoTextList,
               (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_QuestBoardInformationText___);
  v199 = Instance;
  if ( (Instance & 1) == 0 )
    goto LABEL_218;
  v200 = this->fields.mListViewObject;
  if ( !v200 )
    goto LABEL_543;
  v201 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v201 )
    goto LABEL_543;
  Instance = (__int64)v200->fields.manager;
  if ( !Instance )
    goto LABEL_543;
  v202 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v202
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v202 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_608:
    sub_1C22354(Instance);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v401, v402, v403);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                   (QuestBoardListViewManager_o *)Instance,
                   v201->fields._size,
                   0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v201,
           AlphaAnimCnt,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Item )
    goto LABEL_543;
  QuestBoardInformationText__SetTime_35045252(
    (QuestBoardInformationText_o *)Item,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    Instance,
    0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_543;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v205 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v206 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v205;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v206;
LABEL_218:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v199 & 1, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v199 & 1, 0LL);
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
    v404);
  endTime = v409->fields.endTime;
  if ( endTime >= 1 )
  {
    mCostApSp = this->fields.mCostApSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(endTime, v207);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
    if ( !mCostApSp )
      goto LABEL_543;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, Instance & 1, 0LL);
  }
  mChallengeObj = this->fields.mChallengeObj;
  if ( v412 )
    v212 = 0LL;
  else
    v212 = this->fields.mChallengeObj;
  if ( v412 || (Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 0x4000LL, 0LL), (Instance & 1) != 0) )
  {
    mCostConsumeBattleWinSp = 0LL;
    if ( !mChallengeObj )
      goto LABEL_543;
  }
  else
  {
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 4LL, 0LL);
    mCostConsumeBattleWinSp = (Instance & 1) != 0 && PhaseDetailedEntity->fields.afterClear != 1;
    mChallengeObj = v212;
    if ( !v212 )
      goto LABEL_543;
  }
  UnityEngine_GameObject__SetActive(mChallengeObj, mCostConsumeBattleWinSp, 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_543;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v213 = QuestBoardListViewItemDraw_TypeInfo;
    v214 = isDoubleItemConsume;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v213 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v215 = v213->static_fields;
    v216 = 532LL;
    if ( !v214 )
      v216 = 520LL;
    if ( v214 )
      v217 = 528LL;
    else
      v217 = 516LL;
    if ( v214 )
      v218 = 524LL;
    else
      v218 = 512LL;
    LODWORD(v433.fields.x) = *(int32_t *)((char *)&v215->POS_Y_ITVL_AREA + v218);
    LODWORD(v433.fields.y) = *(int32_t *)((char *)&v215->POS_Y_ITVL_AREA + v217);
    LODWORD(v433.fields.z) = *(int32_t *)((char *)&v215->POS_Y_ITVL_AREA + v216);
    GameObjectExtensions__SetLocalPosition(this->fields.mChallengeObj, v433, 0LL);
    Instance = (__int64)DataManager__GetMasterData_object_(
                          v416,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_543;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &v423,
      key,
      (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( QuestEntity__HasFlag(PhaseDetailedEntity, 4LL, 0LL)
      && (!v423 || EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)v423, 0LL)) )
    {
      if ( entity )
        ClearNum = UserQuestEntity__getClearNum(entity, 0LL);
      else
        ClearNum = 0;
      challengeStrSpr = this->fields.challengeStrSpr;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_23129/*"questboard_crushing"*/, 0LL);
    }
    else
    {
      if ( entity )
        ClearNum = entity->fields.challengeNum;
      else
        ClearNum = 0;
      Instance = (__int64)this->fields.challengeStrSpr;
      if ( !Instance )
        goto LABEL_543;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_23128/*"questboard_challenge"*/, 0LL);
    }
    mChallengeLb = this->fields.mChallengeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__GetNumberFormat(ClearNum, 0LL);
    if ( !mChallengeLb
      || (UILabel__set_text(mChallengeLb, (System_String_o *)Instance, 0LL),
          (Instance = (__int64)this->fields.challengeStrSpr) == 0) )
    {
LABEL_543:
      sub_1C22094(Instance, mCostConsumeBattleWinSp);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  Instance = (__int64)this->fields.mChallengeLb;
  if ( !Instance )
    goto LABEL_543;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_543;
  mPhaseObj = this->fields.mPhaseObj;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
    v223 = 0LL;
  else
    v223 = mPhaseObj;
  if ( (Instance & 1) != 0 )
    goto LABEL_284;
  Instance = QuestEntity__HasFlag(v415, 0x4000LL, 0LL);
  v224 = (Instance & 1) != 0 ? 0LL : v223;
  if ( (Instance & 1) != 0 )
    goto LABEL_284;
  Instance = QuestEntity__HasFlag(v415, 0x10000LL, 0LL);
  if ( (Instance & 1) != 0 )
    mPhaseObj = 0LL;
  else
    mPhaseObj = v224;
  if ( (Instance & 1) == 0 )
  {
    if ( dispType == 2 )
    {
      Instance = QuestEntity__HasFlag(v415, 512LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
LABEL_284:
        mCostConsumeBattleWinSp = 0LL;
        goto LABEL_285;
      }
      v224 = mPhaseObj;
    }
    Instance = QuestEntity__HasFlag(v415, 0x4000000LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      mCostConsumeBattleWinSp = 0LL;
    }
    else
    {
      Instance = QuestEntity__HasFlag(v415, 0x2000000000LL, 0LL);
      mCostConsumeBattleWinSp = (Instance & 1) == 0 && v418;
    }
    mPhaseObj = v224;
    goto LABEL_285;
  }
  mCostConsumeBattleWinSp = 0LL;
  mPhaseObj = v223;
LABEL_285:
  v410 = quest_info_k__BackingField;
  if ( !mPhaseObj )
    goto LABEL_543;
  v413 = dispType;
  UnityEngine_GameObject__SetActive(mPhaseObj, mCostConsumeBattleWinSp, 0LL);
  Instance = (__int64)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_543;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    QuestBoardListViewItemDraw__InitPhase(this, isDoubleItemConsume, isDoubleItemConsumeQp, isTripleItemConsume, v225);
    v226 = v415->fields.afterClear;
    CurrentPhaseInfo = MapControl_QuestInfo__GetCurrentPhaseInfo(quest_info_k__BackingField, 0LL);
    if ( !CurrentPhaseInfo )
      goto LABEL_293;
    ReferToQuestPhase = MapControl_PhaseInfo__GetReferToQuestPhase(CurrentPhaseInfo, 0LL);
    if ( ReferToQuestPhase < 1 )
      goto LABEL_293;
    v229 = ReferToQuestPhase;
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_543;
    QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v229, 0LL);
    if ( QuestInfo )
    {
      v231 = QuestInfo;
      v232 = MapControl_QuestInfo__GetPhaseMax(QuestInfo, 0LL);
      p_questPhase = &v231->fields.questPhase;
    }
    else
    {
LABEL_293:
      v234 = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
      p_questPhase = &quest_info_k__BackingField->fields.questPhase;
      v232 = v234;
    }
    v235 = *p_questPhase;
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    }
    v237 = *(struct QuestBoardListViewItemDraw_StaticFields **)(Instance + 184);
    PHASE_NORMAL_MAX = v237->PHASE_NORMAL_MAX;
    v239 = v226 == 2 && v408;
    v240 = v232 > PHASE_NORMAL_MAX;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      v237 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v237->PHASE_NORMAL_MAX;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        v237 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
    }
    v241 = 496LL;
    if ( v232 > PHASE_NORMAL_MAX )
      v241 = 504LL;
    v242 = 0;
    v243 = v226 - 3;
    v244 = v232 - 1;
    v245 = -*(int32_t *)((char *)&v237->POS_Y_ITVL_AREA + v241);
    while ( 1 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v242 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        break;
      mPhaseSp = this->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_543;
      if ( v242 >= mPhaseSp->max_length )
        goto LABEL_607;
      v247 = &mPhaseSp->obj.klass + v242;
      v248 = (UISprite_o *)v247[4];
      if ( !v248 )
        goto LABEL_543;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v247[4], 0LL);
      if ( !Instance )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v242 < v232, 0LL);
      if ( v242 < v232 )
      {
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 v249,
                                 v240,
                                 (v242 < v235) & (unsigned __int8)v418,
                                 v244 == v242,
                                 v239,
                                 (v244 == v242) & (unsigned __int8)(v243 < 2),
                                 v250);
        UISprite__set_spriteName(v248, PhaseArrowSpriteName, 0LL);
        v436.fields.a = 1.0;
        v436.fields.r = v22;
        v436.fields.g = v22;
        v436.fields.b = v22;
        UIWidget__set_color((UIWidget_o *)v248, v436, 0LL);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v252,
                                   v240,
                                   v244 == v242 && v243 < 2,
                                   v253);
        Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v248, 0LL);
        if ( !Instance )
          goto LABEL_543;
        v245 += PhaseArrowIntervalSize;
        v434.fields.x = (float)v245;
        v434.fields.y = 0.0;
        v434.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v434, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v248->klass->vtable._33_MakePixelPerfect.method)(
          v248,
          v248->klass->vtable._34_get_minWidth.methodPtr);
      }
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      ++v242;
    }
  }
  Instance = (__int64)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_543;
  v255 = v415;
  v256 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v415, 0x4000000LL, 0LL);
  if ( !v256 )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive(v256, Instance & 1, 0LL);
  Instance = (__int64)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v257 = QuestBoardListViewItemDraw_TypeInfo;
    mDamageRecordSp = this->fields.mDamageRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v257 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v257->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mDamageRecordSp, QUEST_BOARD_DAMAGE_RECODE_NAME, 0LL);
    v260 = DataManager__GetMasterData_object_(
             v416,
             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v260 )
      goto LABEL_543;
    MaxTurnDamage = UserQuestRecordMaster__GetMaxTurnDamage(
                      (UserQuestRecordMaster_o *)v260,
                      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                      v415->fields.id,
                      0LL);
    mDamageRecordLb = this->fields.mDamageRecordLb;
    knockdownNum = MaxTurnDamage;
    v266 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum, v263, v264, v265);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v266, 0LL);
    if ( !mDamageRecordLb )
      goto LABEL_543;
    UILabel__set_text(mDamageRecordLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.mDamageRecordSp;
    if ( !Instance )
      goto LABEL_543;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
    Instance = (__int64)this->fields.mDamageRecordLb;
    if ( !Instance )
      goto LABEL_543;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
  }
  Instance = (__int64)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_543;
  v267 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v415, 0x2000000000LL, 0LL);
  if ( !v267 )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive(v267, Instance & 1, 0LL);
  Instance = (__int64)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v268 = QuestBoardListViewItemDraw_TypeInfo;
    mKnockdownRecordSp = this->fields.mKnockdownRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v268 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v268->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mKnockdownRecordSp, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0LL);
    v271 = (QuestKnockdownInfo_o *)sub_1C22084(QuestKnockdownInfo_TypeInfo);
    QuestKnockdownInfo___ctor(v271, 0LL);
    v272 = DataManager__GetMasterData_object_(
             v416,
             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v272 )
      goto LABEL_543;
    UserQuestRecordMaster__GetKnockdownRecordinfo(
      (UserQuestRecordMaster_o *)v272,
      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
      v415->fields.id,
      v271,
      0LL);
    mKnockdownRecordCountLb = this->fields.mKnockdownRecordCountLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11039/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, 0LL);
    if ( !v271 )
      goto LABEL_543;
    v277 = (System_String_o *)Instance;
    knockdownNum = v271->fields.knockdownNum;
    v278 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum, v274, v275, v276);
    Instance = (__int64)System_String__Format(v277, v278, 0LL);
    if ( !mKnockdownRecordCountLb )
      goto LABEL_543;
    UILabel__set_text(mKnockdownRecordCountLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageLb = this->fields.mKnockdownRecordDamageLb;
    v280 = LocalizationManager__Get((System_String_o *)StringLiteral_11040/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, 0LL);
    totalDamage = v271->fields.totalDamage;
    v284 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &totalDamage, v281, v282, v283);
    Instance = (__int64)System_String__Format(v280, v284, 0LL);
    if ( !mKnockdownRecordDamageLb )
      goto LABEL_543;
    UILabel__set_text(mKnockdownRecordDamageLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordPlusLb = this->fields.mKnockdownRecordPlusLb;
    v286 = LocalizationManager__Get((System_String_o *)StringLiteral_11042/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, 0LL);
    v288 = Method_System_Array_Empty_object___;
    v289 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v289 )
    {
      sub_1C73D70(Method_System_Array_Empty_object___);
      v289 = v288[7];
    }
    v290 = *(_QWORD *)(v289 + 16);
    if ( (*(_BYTE *)(v290 + 309) & 1) == 0 )
      v290 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v290 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v290);
    v291 = *(_QWORD *)(v288[7] + 16LL);
    if ( (*(_BYTE *)(v291 + 309) & 1) == 0 )
      v291 = sub_1C73D14(inited);
    Instance = (__int64)System_String__Format_63129984(v286, **(System_Object_array ***)(v291 + 184), 0LL);
    if ( !mKnockdownRecordPlusLb )
      goto LABEL_543;
    UILabel__set_text(mKnockdownRecordPlusLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageNameLb = this->fields.mKnockdownRecordDamageNameLb;
    v293 = LocalizationManager__Get((System_String_o *)StringLiteral_11041/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, 0LL);
    v295 = Method_System_Array_Empty_object___;
    v296 = v293;
    v297 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v297 )
    {
      sub_1C73D70(Method_System_Array_Empty_object___);
      v297 = v295[7];
    }
    v298 = *(_QWORD *)(v297 + 16);
    if ( (*(_BYTE *)(v298 + 309) & 1) == 0 )
      v298 = sub_1C73D14(v294);
    if ( !*(_DWORD *)(v298 + 224) )
      v294 = j_il2cpp_runtime_class_init_0(v298);
    v299 = *(_QWORD *)(v295[7] + 16LL);
    if ( (*(_BYTE *)(v299 + 309) & 1) == 0 )
      v299 = sub_1C73D14(v294);
    Instance = (__int64)System_String__Format_63129984(v296, **(System_Object_array ***)(v299 + 184), 0LL);
    if ( !mKnockdownRecordDamageNameLb )
      goto LABEL_543;
    UILabel__set_text(mKnockdownRecordDamageNameLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_543;
    UILabel__SetCondensedScale(
      (UILabel_o *)Instance,
      QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH,
      0,
      0LL);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_543;
    if ( v271->fields.totalDamage <= 0 )
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0LL);
      Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_543;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !this->fields.mKnockdownRecordPlusLb )
        goto LABEL_543;
      v302 = (UnityEngine_GameObject_o *)Instance;
      v304 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.mKnockdownRecordPlusLb, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(v304, 0LL);
      v306 = QuestBoardListViewItemDraw_TypeInfo;
      v307 = LocalPositionX;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v306 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = v307 + (float)v306->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
    }
    else
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0LL);
      Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_543;
      v300 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v301 = QuestBoardListViewItemDraw_TypeInfo;
      v302 = v300;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v301 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v301->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
    }
    GameObjectExtensions__SetLocalPositionX(v302, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordSp;
    if ( !Instance )
      goto LABEL_543;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_543;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordDamageNameLb;
    if ( !Instance )
      goto LABEL_543;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordPlusLb;
    if ( !Instance )
      goto LABEL_543;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
    Instance = (__int64)this->fields.mKnockdownRecordCountLb;
    if ( !Instance )
      goto LABEL_543;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
  }
  id = v415->fields.id;
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  if ( QuestInformationComponent__IsDisplayQuestInformation(id, 0LL) )
  {
    Instance = (__int64)this->fields.mQuestInfoBtn;
    if ( !Instance )
      goto LABEL_543;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v309 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v309 = TerminalSceneComponent_TypeInfo;
    }
    v255 = v415;
    Instance = (__int64)v309->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_543;
    if ( TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL) == v415->fields.id )
    {
      Instance = (__int64)this->fields.mQuestInfoShowing;
      if ( !Instance )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    }
    Instance = (__int64)this->fields.mQuestInfoBtn;
    if ( !Instance )
      goto LABEL_543;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    v310 = Instance;
    if ( v413 == 2 )
    {
      Instance = QuestEntity__HasFlag(v415, 0x400000000000000LL, 0LL);
      mCostConsumeBattleWinSp = (unsigned int)Instance & v411;
    }
    else
    {
      mCostConsumeBattleWinSp = 1LL;
    }
    if ( !v310 )
      goto LABEL_543;
    (*(void (__fastcall **)(__int64, int64_t, _QWORD))(*(_QWORD *)v310 + 392LL))(
      v310,
      mCostConsumeBattleWinSp,
      *(_QWORD *)(*(_QWORD *)v310 + 400LL));
  }
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mOptionRestrinctionLb )
    goto LABEL_543;
  UILabel__set_fontSize(
    mOptionRestrinctionLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE,
    0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_543;
  UILabel__set_overflowMethod((UILabel_o *)Instance, 2, 0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_543;
  v312 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v312, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !Instance )
    goto LABEL_543;
  v313 = (UnityEngine_Behaviour_o *)Instance;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v416,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_543;
  Instance = QuestPhaseDetailMaster__TryGetEntity(
               (QuestPhaseDetailMaster_o *)Instance,
               &v422,
               v410->fields.questId,
               questPhase,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_444;
  if ( !v422 )
    goto LABEL_543;
  if ( !v422->fields.boardMessage )
    goto LABEL_444;
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_543;
  UILabel__set_maxLineCount((UILabel_o *)Instance, 0, 0LL);
  if ( !v422 )
    goto LABEL_543;
  boardMessage = v422->fields.boardMessage;
  if ( !boardMessage )
    goto LABEL_543;
  list = (System_Collections_Generic_IEnumerable_TSource__o *)boardMessage->fields.list;
  if ( list
    && (Instance = (__int64)System_Linq_Enumerable__ToArray_object_(
                              list,
                              (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0
    && (v317 = *(_QWORD *)(Instance + 24), v318 = (QuestPhaseDetailEntity_BoardInfo_array *)Instance, v317) )
  {
    if ( (_DWORD)v317 == 1 )
    {
      v319 = *(_QWORD *)(Instance + 32);
      if ( !v319 )
        goto LABEL_543;
      Instance = *(_QWORD *)(v319 + 16);
      if ( !Instance )
        goto LABEL_543;
      Instance = QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                   (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)Instance,
                   this->fields.mOptionRestrinctionLb,
                   (float)this->fields.restrictionDefaultWidth,
                   0LL);
      if ( !v318->max_length )
        goto LABEL_607;
      v320 = v318->m_Items[0];
      if ( !v320 )
        goto LABEL_543;
      v321 = Instance;
      Instance = (__int64)v320->fields.image;
      if ( !Instance )
        goto LABEL_543;
      v322 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
               (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)Instance,
               this->fields.mOptionRestrinctionSp,
               0LL);
      v323 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v313, 1, 0LL);
      if ( QuestEntity__HasFlag(v255, 0x400000000000000LL, 0LL) )
      {
        v397 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v397 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v397->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &this->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v313,
        this->fields.mOptionRestrinctionLb,
        this->fields.mOptionRestrinctionSp,
        v318,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0LL);
      v323 = 1;
      v321 = 1;
      v322 = 1;
    }
  }
  else
  {
LABEL_444:
    v321 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
             this,
             v410->fields.questId,
             questPhase,
             v314);
    v323 = 0;
    v322 = 0;
  }
  v330 = QuestEntity__HasFlag(v255, 0x40000000LL, 0LL);
  if ( v330 )
  {
    Instance = (__int64)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_543;
    mCostConsumeBattleWinSp = (int64_t)this->fields.mCostConsumeBattleWinSp;
    v331 = *(_QWORD *)(Instance + 16);
    v332 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v331 )
      goto LABEL_543;
    v333 = *(int *)(Instance + 24);
    if ( (unsigned int)v333 >= *(_DWORD *)(v331 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)mCostConsumeBattleWinSp,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v332[4] + 192LL) + 112LL));
    }
    else
    {
      v334 = v331 + 8 * v333;
      *(_DWORD *)(Instance + 24) = v333 + 1;
      *(_QWORD *)(v334 + 32) = mCostConsumeBattleWinSp;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)(v334 + 32),
        mCostConsumeBattleWinSp,
        v324,
        v325,
        v326,
        v327,
        v328,
        v329);
    }
    v335 = QuestEntity__HasFlag(v255, 0x80000000000LL, 0LL) || QuestEntity__HasFlag(v255, 0x4000LL, 0LL);
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v336 = this->fields.mCostConsumeBattleWinSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v336 )
      goto LABEL_543;
    v337 = 992LL;
    if ( !v335 )
      v337 = 984LL;
    UISprite__set_spriteName(
      v336,
      *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v337),
      0LL);
  }
  Instance = (__int64)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v330, 0LL);
  Instance = (__int64)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_543;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
  if ( v422 && QuestPhaseDetailEntity__HasFlag(v422, 0x400000LL, 0LL) )
  {
    v338 = QuestBoardListViewItemDraw_TypeInfo;
    mOptionPreBattleSp = this->fields.mOptionPreBattleSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v338 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v338->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0LL);
    Instance = (__int64)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_543;
    mCostConsumeBattleWinSp = (int64_t)this->fields.mOptionPreBattleSp;
    v347 = *(_QWORD *)(Instance + 16);
    v348 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v347 )
      goto LABEL_543;
    v349 = *(int *)(Instance + 24);
    if ( (unsigned int)v349 >= *(_DWORD *)(v347 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)mCostConsumeBattleWinSp,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
    }
    else
    {
      v350 = v347 + 8 * v349;
      *(_DWORD *)(Instance + 24) = v349 + 1;
      *(_QWORD *)(v350 + 32) = mCostConsumeBattleWinSp;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)(v350 + 32),
        mCostConsumeBattleWinSp,
        v341,
        v342,
        v343,
        v344,
        v345,
        v346);
    }
    v351 = 1;
  }
  else
  {
    v351 = 0;
  }
  Instance = (__int64)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v351, 0LL);
  Instance = (__int64)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_543;
  LODWORD(v437.fields.g) = dword_BFC4F0[v413 == 2];
  LODWORD(v437.fields.r) = dword_BFD458[v413 == 2];
  v437.fields.a = 1.0;
  v437.fields.b = v437.fields.g;
  UIWidget__set_color((UIWidget_o *)Instance, v437, 0LL);
  mMultiSecondBattleInformation = this->fields.mMultiSecondBattleInformation;
  if ( !mMultiSecondBattleInformation )
    goto LABEL_543;
  if ( mMultiSecondBattleInformation->fields._size >= 2 )
  {
    Instance = (__int64)this->fields.secondBattleInformation;
    if ( !Instance )
      goto LABEL_543;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.secondBattleInformation;
    if ( !Instance )
      goto LABEL_543;
    QuestBoardListViewMultiSecondBattleInformation__Init(
      (QuestBoardListViewMultiSecondBattleInformation_o *)Instance,
      this->fields.mMultiSecondBattleInformation,
      0LL);
  }
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v321 || v322, 0LL);
  Instance = QuestEntity__HasFlag(v255, 0x400000000000000LL, 0LL);
  if ( !this->fields.mOptionRestrinctionLb )
    goto LABEL_543;
  v353 = Instance;
  Instance = (__int64)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb,
                        0LL);
  if ( !Instance )
    goto LABEL_543;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_543;
  v354 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v355 = QuestBoardListViewItemDraw_TypeInfo;
  v356 = v354;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v355 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v357 = v355->static_fields;
  if ( (v353 & 1) == 0 )
  {
    GameObjectExtensions__SetLocalPosition(v356, v357->RESTRICTION_POS_DEFAULT, 0LL);
    v362 = this->fields.mOptionRestrinctionLb;
    if ( !v362 )
      goto LABEL_543;
    if ( v362->fields.mWidth <= this->fields.restrictionDefaultWidth )
    {
      v364 = QuestBoardListViewItemDraw_TypeInfo;
      mSpacingX = v362->fields.mSpacingX;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v364 = QuestBoardListViewItemDraw_TypeInfo;
      }
      mCostConsumeBattleWinSp = (unsigned int)v364->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == (_DWORD)mCostConsumeBattleWinSp )
        goto LABEL_511;
      if ( !v364->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v364);
        LODWORD(mCostConsumeBattleWinSp) = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v363 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v363 = QuestBoardListViewItemDraw_TypeInfo;
      }
      LODWORD(mCostConsumeBattleWinSp) = v363->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(this, mCostConsumeBattleWinSp, v361);
LABEL_511:
    if ( (v323 & 1) != 0 )
      goto LABEL_515;
    Instance = (__int64)this->fields.mOptionRestrinctionLb;
    if ( !Instance )
      goto LABEL_543;
    restrictionDefaultWidth = this->fields.restrictionDefaultWidth;
    goto LABEL_514;
  }
  GameObjectExtensions__SetLocalPosition(v356, v357->RESTRICTION_POS_ALLOUT, 0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_543;
  UILabel__set_fontSize(
    (UILabel_o *)Instance,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SIZE_ALLOUT,
    0LL);
  QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
    this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT,
    v358);
  if ( (v323 & 1) == 0 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v359 = this->fields.mOptionRestrinctionLb;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v359 )
      goto LABEL_543;
    Instance = (__int64)v359;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
LABEL_514:
    UILabel__SetCondensedScale((UILabel_o *)Instance, restrictionDefaultWidth, 0, 0LL);
  }
LABEL_515:
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_543;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
  if ( v413 == 2 )
  {
    Instance = (__int64)this->fields.mOptionRestrinctionSp;
    if ( !Instance )
      goto LABEL_543;
    v438.fields.a = *(float *)(Instance + 160);
    v438.fields.r = *(float *)(Instance + 148) * 0.5;
    v438.fields.g = *(float *)(Instance + 152) * 0.5;
    v438.fields.b = *(float *)(Instance + 156) * 0.5;
    UIWidget__set_color((UIWidget_o *)Instance, v438, 0LL);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v416,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_543;
  v366 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, v255->fields.id, questPhase, 0LL);
  v367 = v366;
  if ( v366 )
  {
    classIds = v366->fields.classIds;
    if ( classIds )
      LOBYTE(classIds) = classIds->max_length != 0;
  }
  else
  {
    LOBYTE(classIds) = 0;
  }
  v369 = ((unsigned __int8)classIds & v406) == 0;
  if ( !v369 && !v408 )
    v369 = QuestEntity__HasFlag(v255, 2048LL, 0LL);
  Instance = (__int64)this->fields.mClassIconRoot;
  if ( !Instance )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !v369, 0LL);
  Instance = (__int64)this->fields.mClassStrSp;
  if ( !Instance )
    goto LABEL_543;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v414 + 24), 0LL);
  if ( !v369 )
  {
    if ( !v367 )
      goto LABEL_543;
    mClassIcons = this->fields.mClassIcons;
    if ( !mClassIcons )
      goto LABEL_543;
    max_length = mClassIcons->max_length;
    v372 = max_length - 1;
    if ( max_length >= 1 )
    {
      v373 = v367->fields.classIds;
      v374 = 0;
      while ( v374 < mClassIcons->max_length )
      {
        v375 = (int)v374;
        v376 = &mClassIcons->obj.klass + (int)v374;
        v377 = (UnityEngine_Component_o *)v376[4];
        if ( !v377 )
          goto LABEL_543;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v376[4], 0LL);
        if ( !v373 )
          goto LABEL_543;
        if ( !Instance )
          goto LABEL_543;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)Instance,
          (int)v375 < (signed int)v373->max_length,
          0LL);
        Instance = (__int64)UnityEngine_Component__get_gameObject(v377, 0LL);
        if ( !Instance )
          goto LABEL_543;
        Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( (unsigned int)v375 >= v373->max_length )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v377, v373->m_Items[v375 + 1], 0LL);
          ServantClassIconComponent__SetColor(
            (ServantClassIconComponent_o *)v377,
            *(UnityEngine_Color_o *)(v414 + 24),
            0LL);
        }
        if ( v372 == (_DWORD)v375 )
          goto LABEL_544;
        mClassIcons = this->fields.mClassIcons;
        v374 = v375 + 1;
        if ( !mClassIcons )
          goto LABEL_543;
      }
LABEL_607:
      sub_1C2209C(Instance, mCostConsumeBattleWinSp);
    }
  }
LABEL_544:
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
          goto LABEL_543;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
        {
          Instance = (__int64)this->fields.eventTargetComponent;
          if ( !Instance )
            goto LABEL_543;
          BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)Instance, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !Instance )
            goto LABEL_543;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    (ViewEnemyMaster_o *)Instance,
                                    v410->fields.questId,
                                    0LL);
          if ( EntityListFromQuestId
            && (v381 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                *(_QWORD *)&EntityListFromQuestId->max_length) )
          {
            v382 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v382 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            _9__318_1 = (System_Func_object__int__o *)v382->static_fields->__9__318_1;
            if ( !_9__318_1 )
            {
              if ( !v382->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v382);
                v382 = QuestBoardListViewItemDraw___c_TypeInfo;
              }
              v384 = (Il2CppObject *)v382->static_fields->__9;
              _9__318_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_ViewEnemyEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__318_1,
                v384,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__318_1__,
                0LL);
              v385 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v385->__9__318_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__318_1;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v385->__9__318_1,
                (int64_t)_9__318_1,
                v386,
                v387,
                v388,
                v389,
                v390,
                v391);
            }
            v392 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                          v381,
                                                                          (System_Func_TSource__TResult__o *)_9__318_1,
                                                                          (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                                  v392,
                                  (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !this->fields.eventTarget )
              goto LABEL_543;
            v393 = (System_Int32_array *)Instance;
            UnityEngine_GameObject__SetActive(this->fields.eventTarget, 1, 0LL);
            Instance = (__int64)this->fields.eventTargetComponent;
            if ( !Instance )
              goto LABEL_543;
            BoardOptionEventTargetComponent__CreateEnemyList(
              (BoardOptionEventTargetComponent_o *)Instance,
              v410->fields.questId,
              v393,
              0LL);
          }
          else
          {
            Instance = (__int64)this->fields.eventTarget;
            if ( !Instance )
              goto LABEL_543;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          }
        }
      }
    }
  }
  if ( (v411 & (v413 == 2) & QuestEntity__HasFlag(v415, 0x400000000000000LL, 0LL)) != 0 )
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
        if ( !v410->fields.questReleaseType )
          goto LABEL_586;
        v396 = v410->fields.questId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_38834244(v396, -1, 1, 0LL) )
        {
LABEL_586:
          Instance = (__int64)this->fields.alloutRoot;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            Instance = (__int64)this->fields.alloutRootComponent;
            if ( Instance )
            {
              BoardOptionAlloutComponent__SetIcon((BoardOptionAlloutComponent_o *)Instance, v410->fields.questId, 0LL);
              return;
            }
          }
          goto LABEL_543;
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
  DataManager_o *Instance; // x0
  QuestBoardListViewManager_c *v6; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v8; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v10; // x21
  __int64 methodPtr_low; // x9
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
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  System_Collections_Generic_List_object__o *v78; // x23
  int32_t v79; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v81; // x8
  __int64 v82; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v84; // w9
  int32_t v85; // w8
  bool v86; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v88; // x21
  QuestBoardListViewItemDraw_o *v89; // x0
  const MethodInfo *v90; // x1
  int32_t v91; // [xsp+8h] [xbp-88h] BYREF
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD92F5 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD92F5 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  v91 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_151;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_151;
  v8 = Instance;
  Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_151;
  v10 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_151;
  v6 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_152;
  }
  if ( !v8 )
    goto LABEL_151;
  dispType = quest_info_k__BackingField->fields.dispType;
  writeMasterDataThread = (int64_t)Instance[3].fields.writeMasterDataThread;
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v10 || !MasterData_object )
    goto LABEL_151;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    v10->fields.id,
    0LL);
  Instance = (DataManager_o *)this->fields.mLabelObj;
  v15 = dispType == 2 ? 0.5 : 1.0;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mLabelFaceObj;
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v10->fields.bannerId < 1 )
      goto LABEL_61;
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
    v91 = OverwriteBannerId_k__BackingField;
    v19 = System_Int32__ToString((int32_t)&v91, 0LL);
    v20 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v23 = System_String__Concat_63115476(v20, v19, 0LL);
  mcBaseP = this->fields.mcBaseP;
  v25 = v23;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(mcBaseP, v25, 0LL);
  if ( !mcBaseP )
    goto LABEL_151;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, (unsigned __int8)Instance & 1, 0LL);
LABEL_61:
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_151;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[2]._1.interopData);
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_151;
  v97.fields.a = 1.0;
  v97.fields.r = v15;
  v97.fields.g = v15;
  v97.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)Instance, v97, 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_151;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_151;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_151;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v28 = QuestBoardListViewItemDraw_TypeInfo;
    v29 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v28 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v29, v28->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_151;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_151;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_151;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)&Instance->fields.writeMasterDataThread = NEXT_POS_X_QUEST;
    *((float *)&Instance->fields.writeMasterDataThreadEnd + 1) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v26);
  Instance = (DataManager_o *)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
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
  LODWORD(v96.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v36);
  LODWORD(v96.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v37);
  LODWORD(v96.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v38);
  QuestBoardListViewItemDraw__SetNewIcon(this, v96, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v32);
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
    Instance = (DataManager_o *)QuestEntity__getQuestName(v10, 0LL);
    if ( !Instance )
      goto LABEL_151;
    v43 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25427/*"{0}"*/, 0LL) )
    {
      v44 = DataManager__GetMasterData_object_(
              v8,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (DataManager_o *)QuestEntity__getServantId(v10, 0LL);
      if ( !v44 )
        goto LABEL_151;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v44,
                                    (int32_t)Instance,
                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_151;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v43 = System_String__Format(v43, BattleName, 0LL);
    }
    Instance = (DataManager_o *)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_151;
    UILabel__set_text((UILabel_o *)Instance, v43, 0LL);
    Instance = (DataManager_o *)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_151;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mTitleNameLb )
    goto LABEL_151;
  UILabel__SetCondensedScale(
    mTitleNameLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_151;
  v98.fields.a = 1.0;
  v98.fields.r = v15;
  v98.fields.g = v15;
  v98.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)Instance, v98, 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v47,
                           &phasePresentData,
                           v10,
                           quest_info_k__BackingField->fields.questPhase,
                           v48);
  v99.fields.a = 1.0;
  v99.fields.r = v15;
  v99.fields.g = v15;
  v99.fields.b = v15;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v10, phasePresentData, dispType == 2, v99, v50);
  questId = quest_info_k__BackingField->fields.questId;
  v52 = phasePresentData;
  afterClear = v10->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v10, 0LL);
  v100.fields.a = 1.0;
  v100.fields.r = v15;
  v100.fields.g = v15;
  v100.fields.b = v15;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    questId,
    PhasePresentGiftData,
    v52,
    afterClear,
    v100,
    IsRepeatReward,
    v55);
  v101.fields.a = 1.0;
  v101.fields.r = v15;
  v101.fields.g = v15;
  v101.fields.b = v15;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v101, v56);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v57);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  mInfoTextList = this->fields.mInfoTextList;
  v62 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetCampaignText(
                                this,
                                quest_info_k__BackingField->fields.questId,
                                v62,
                                0,
                                &fixedVal[1],
                                fixedVal,
                                &isNotItemConsume,
                                v60);
  if ( !mInfoTextList )
    goto LABEL_151;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Instance = (DataManager_o *)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_151;
    Instance = (DataManager_o *)UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_128;
    if ( !entity )
      goto LABEL_151;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v64 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (DataManager_o *)QuestEntity__HasFlag(v10, 32LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v65 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v67 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v67, v66, v64, 0, 1, 0LL, 0LL);
      if ( !v65 )
        goto LABEL_151;
      items = v65->fields._items;
      v75 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v65->fields._version;
      if ( !items )
        goto LABEL_151;
      size = v65->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v65,
          (Il2CppObject *)v67,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v77 = &items->obj.klass + size;
        v65->fields._size = size + 1;
        v77[4] = (Il2CppClass *)v67;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v67, v68, v69, v70, v71, v72, v73);
      }
    }
  }
LABEL_128:
  v78 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v78 )
    goto LABEL_151;
  v79 = v78->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v79 < 1 )
    goto LABEL_137;
  v81 = this->fields.mListViewObject;
  if ( !v81 )
    goto LABEL_151;
  Instance = (DataManager_o *)v81->fields.manager;
  if ( !Instance )
    goto LABEL_151;
  v82 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v82
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[v82 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_152:
    sub_1C22354(Instance);
    QuestBoardListViewItemDraw__ResetInfoTextList(v89, v90);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v79, 0LL);
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                v78,
                                AlphaAnimCnt,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Instance )
    goto LABEL_151;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0LL);
  Instance = (DataManager_o *)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_151;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v84 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v85 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v84;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v85;
LABEL_137:
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  v86 = v79 > 0;
  if ( !*p_mOptionInfoLb )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v86, 0LL);
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v86, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    v88 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v88 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v88,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)&Instance[1].fields._DispLog + 268LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        0LL);
      return;
    }
LABEL_151:
    sub_1C22094(Instance, v6);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfShortcut(
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
  __int64 methodPtr_low; // x9
  int32_t dispType; // w25
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
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  System_Collections_Generic_List_object__o *v76; // x23
  int32_t v77; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v79; // x8
  __int64 v80; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v82; // w9
  int32_t v83; // w8
  bool v84; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v86; // x21
  QuestBoardListViewItemDraw_o *v87; // x0
  QuestBoardListViewItem_o *v88; // x1
  const MethodInfo *v89; // x2
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD92F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD92F4 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_153;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_153;
  info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
  v9 = Instance;
  Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_153;
  v11 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_153;
  v6 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_154;
  }
  if ( !v9 )
    goto LABEL_153;
  dispType = quest_info_k__BackingField->fields.dispType;
  writeMasterDataThread = (int64_t)Instance[3].fields.writeMasterDataThread;
  MasterData_object = DataManager__GetMasterData_object_(
                        v9,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v11 || !MasterData_object )
    goto LABEL_153;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    v11->fields.id,
    0LL);
  Instance = (DataManager_o *)this->fields.mLabelObj;
  v16 = dispType == 2 ? 0.5 : 1.0;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_153;
  UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0LL);
  Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
  mcBaseP = this->fields.mcBaseP;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mcBaseP )
    goto LABEL_153;
  v18 = 1064LL;
  if ( info_kind_k__BackingField == 2 )
    v18 = 1056LL;
  UISprite__set_spriteName(
    mcBaseP,
    *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v18),
    0LL);
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_153;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[2]._1.interopData);
  Instance = (DataManager_o *)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_153;
  v95.fields.a = 1.0;
  v95.fields.r = v16;
  v95.fields.g = v16;
  v95.fields.b = v16;
  UIWidget__set_color((UIWidget_o *)Instance, v95, 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_153;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_153;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_153;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v21 = QuestBoardListViewItemDraw_TypeInfo;
    v22 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v21 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v22, v21->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_153;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_153;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_153;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)&Instance->fields.writeMasterDataThread = NEXT_POS_X_QUEST;
    *((float *)&Instance->fields.writeMasterDataThreadEnd + 1) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v19);
  Instance = (DataManager_o *)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
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
  LODWORD(v94.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v29);
  LODWORD(v94.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v30);
  LODWORD(v94.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v31);
  QuestBoardListViewItemDraw__SetNewIcon(this, v94, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v25);
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
    Instance = (DataManager_o *)QuestEntity__getQuestName(v11, 0LL);
    if ( !Instance )
      goto LABEL_153;
    v36 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25427/*"{0}"*/, 0LL) )
    {
      v37 = DataManager__GetMasterData_object_(
              v9,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (DataManager_o *)QuestEntity__getServantId(v11, 0LL);
      if ( !v37 )
        goto LABEL_153;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v37,
                                    (int32_t)Instance,
                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_153;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v36 = System_String__Format(v36, BattleName, 0LL);
    }
    Instance = (DataManager_o *)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_153;
    UILabel__set_text((UILabel_o *)Instance, v36, 0LL);
    Instance = (DataManager_o *)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_153;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mTitleNameLb )
    goto LABEL_153;
  UILabel__SetCondensedScale(
    mTitleNameLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_153;
  v96.fields.a = 1.0;
  v96.fields.r = v16;
  v96.fields.g = v16;
  v96.fields.b = v16;
  UIWidget__set_color((UIWidget_o *)Instance, v96, 0LL);
  ServantId = QuestEntity__getServantId(v11, 0LL);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v9,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                ServantId,
                                (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( Instance )
  {
    Instance = (DataManager_o *)ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0, 0LL);
    if ( !mTitleShortcutLb )
      goto LABEL_153;
    UILabel__set_text(mTitleShortcutLb, (System_String_o *)Instance, 0LL);
    Instance = (DataManager_o *)this->fields.mTitleShortcutLb;
    if ( !Instance )
      goto LABEL_153;
    v97.fields.a = 1.0;
    v97.fields.r = v16;
    v97.fields.g = v16;
    v97.fields.b = v16;
    UIWidget__set_color((UIWidget_o *)Instance, v97, 0LL);
  }
  else
  {
    if ( !mTitleShortcutLb )
      goto LABEL_153;
    UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v43 = QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskShortcutSp = this->fields.mLabelFaceMaskShortcutSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v43 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v98.fields.a = 1.0;
  v98.fields.r = v16;
  v98.fields.g = v16;
  v98.fields.b = v16;
  v45 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          v11,
          mLabelFaceMaskShortcutSp,
          v43->static_fields->SHORTCUT_FACE_MASK_SP_W,
          v43->static_fields->SHORTCUT_FACE_MASK_SPNAME,
          v98,
          v42);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           (QuestBoardListViewItemDraw_o *)v45,
                           &phasePresentData,
                           v11,
                           quest_info_k__BackingField->fields.questPhase,
                           v46);
  v99.fields.a = 1.0;
  v99.fields.r = v16;
  v99.fields.g = v16;
  v99.fields.b = v16;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v11, phasePresentData, dispType == 2, v99, v48);
  questId = quest_info_k__BackingField->fields.questId;
  v50 = phasePresentData;
  afterClear = v11->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v11, 0LL);
  v100.fields.a = 1.0;
  v100.fields.r = v16;
  v100.fields.g = v16;
  v100.fields.b = v16;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    questId,
    PhasePresentGiftData,
    v50,
    afterClear,
    v100,
    IsRepeatReward,
    v53);
  v101.fields.a = 1.0;
  v101.fields.r = v16;
  v101.fields.g = v16;
  v101.fields.b = v16;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v101, v54);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v55);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  mInfoTextList = this->fields.mInfoTextList;
  v60 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetCampaignText(
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
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__),
        (Instance = (DataManager_o *)this->fields.mRarePrismSp) == 0LL)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_153:
    sub_1C22094(Instance, v6);
  }
  Instance = (DataManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_153;
    Instance = (DataManager_o *)UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_130;
    if ( !entity )
      goto LABEL_153;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v62 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (DataManager_o *)QuestEntity__HasFlag(v11, 32LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v63 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v65 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v65, v64, v62, 0, 1, 0LL, 0LL);
      if ( !v63 )
        goto LABEL_153;
      items = v63->fields._items;
      v73 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v63->fields._version;
      if ( !items )
        goto LABEL_153;
      size = v63->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v63,
          (Il2CppObject *)v65,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        v63->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v65;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v65, v66, v67, v68, v69, v70, v71);
      }
    }
  }
LABEL_130:
  v76 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v76 )
    goto LABEL_153;
  v77 = v76->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v77 < 1 )
    goto LABEL_139;
  v79 = this->fields.mListViewObject;
  if ( !v79 )
    goto LABEL_153;
  Instance = (DataManager_o *)v79->fields.manager;
  if ( !Instance )
    goto LABEL_153;
  v80 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v80
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[v80 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_154:
    sub_1C22354(Instance);
    QuestBoardListViewItemDraw__SetItemOfQuest(v87, v88, v89);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v77, 0LL);
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                v76,
                                AlphaAnimCnt,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Instance )
    goto LABEL_153;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0LL);
  Instance = (DataManager_o *)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_153;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v82 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v83 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v82;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v83;
LABEL_139:
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  v84 = v77 > 0;
  if ( !*p_mOptionInfoLb )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v84, 0LL);
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v84, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    v86 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v86 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v86,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)&Instance[1].fields._DispLog + 268LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        0LL);
      return;
    }
    goto LABEL_153;
  }
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfWarBoard(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *Instance; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  DataManager_o *v15; // x23
  QuestEntity_o *PhaseDetailedEntity; // x22
  unsigned int v17; // w26
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  int32_t dispType; // w27
  bool HasFlag; // w0
  float v22; // s0
  bool v23; // w27
  Il2CppObject *MasterData_object; // x23
  int32_t questId; // w23
  bool IsQuestClear_38834244; // w0
  int32_t v27; // w23
  int32_t PhaseMax; // w8
  QuestBoardListViewItemDraw_c *v29; // x0
  UnityEngine_GameObject_o *mCostObj; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  QuestBoardListViewItemDraw_c *v34; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x25
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UISprite_o *v38; // x29
  System_String_o *v39; // x25
  UISprite_o *v40; // x25
  System_String_o *QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x29
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  UISprite_o *mcBaseP; // x28
  System_String_o *SHOHI_SP_NAME_WAR_BOARD; // x1
  UISprite_o *mShohiSp; // x28
  UISprite_o *v47; // x28
  __int64 v48; // x8
  unsigned int v49; // w9
  System_String_o *v50; // x25
  System_String_o *v51; // x0
  System_String_o *v52; // x25
  const MethodInfo *v53; // x3
  UnityEngine_GameObject_o *v54; // x0
  QuestBoardListViewItemDraw_c *v55; // x8
  UnityEngine_GameObject_o *v56; // x28
  float NEXT_POS_X_QUEST; // s0
  int32_t v58; // w1
  bool activeSelf; // w0
  const MethodInfo *v60; // x3
  QuestBoardListViewItemDraw_c *v61; // x8
  bool v62; // w28
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float *p_x; // x9
  float *p_y; // x10
  float *p_z; // x11
  const MethodInfo *v67; // x2
  UnityEngine_GameObject_o *v68; // x28
  _BOOL8 v69; // x0
  const MethodInfo *v70; // x5
  QuestBoardListViewItemDraw_c *v71; // x0
  System_String_o *RecommendLv; // x0
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x2
  QuestBoardListViewItemDraw_o *v75; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x27
  int32_t mMatrixFrame; // w25
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v79; // x5
  bool v80; // w0
  const MethodInfo *v81; // x3
  UILabel_o *mTitleNameLb; // x27
  const MethodInfo *v83; // x4
  QuestBoardListViewItemDraw_o *v84; // x0
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x2
  UISprite_o *mLabelNameSp; // x27
  QuestBoardListViewItemDraw_o *v88; // x0
  const MethodInfo *v89; // x3
  System_String_o *QuestIconName; // x25
  System_Action_o *v91; // x25
  const MethodInfo *v92; // x3
  UILabel_o *v93; // x25
  QuestBoardListViewItemDraw_o *v94; // x0
  const MethodInfo *v95; // x4
  bool PhasePresentGiftData; // w26
  const MethodInfo *v97; // x4
  int32_t v98; // w25
  QuestBoardListViewItemDraw_PhasePresentData_o *v99; // x27
  int32_t afterClear; // w28
  float v101; // s8
  float v102; // s9
  float v103; // s10
  float v104; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v106; // x6
  const MethodInfo *v107; // x3
  const MethodInfo *v108; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x25
  const MethodInfo *v110; // x7
  int64_t *p_expireAt; // x8
  int64_t v112; // x25
  System_Collections_Generic_List_object__o *v113; // x24
  System_String_o *v114; // x27
  QuestBoardInformationText_o *v115; // x26
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  struct System_Object_array *items; // x8
  _QWORD *v123; // x9
  __int64 size; // x10
  Il2CppClass **v125; // x0
  System_Collections_Generic_List_object__o *v126; // x26
  int32_t v127; // w25
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *v129; // x8
  __int64 v130; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v132; // w9
  int32_t v133; // w8
  bool v134; // w25
  WarBoardQuestEntity_o *v135; // x0
  WarBoardQuestEntity_o *v136; // x21
  UILabel_o *mBoardMessage; // x21
  __int64 v138; // x8
  const MethodInfo *v139; // [xsp+8h] [xbp-C8h]
  int64_t checkTime; // [xsp+10h] [xbp-C0h]
  bool v141; // [xsp+18h] [xbp-B8h]
  int32_t questPhase; // [xsp+1Ch] [xbp-B4h]
  int32_t v143; // [xsp+20h] [xbp-B0h]
  bool isNotItemConsume; // [xsp+24h] [xbp-ACh] BYREF
  int32_t fixedVal[2]; // [xsp+28h] [xbp-A8h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+30h] [xbp-A0h] BYREF
  bool isTripleItemConsume; // [xsp+3Ch] [xbp-94h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+40h] [xbp-90h] BYREF
  bool isDoubleItemConsume; // [xsp+44h] [xbp-8Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD92FA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarBoardQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_1C21E38(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass319_0__SetItemOfWarBoard_b__0__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass319_0_TypeInfo);
    sub_1C21E38(&StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD92FA = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  v5 = sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass319_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass319_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass319_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_208;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_208;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_208;
  v15 = (DataManager_o *)Instance;
  Instance = MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_208;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = (void *)MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v15 )
    goto LABEL_208;
  v17 = (unsigned int)Instance;
  Instance = DataManager__GetMasterData_object_(
               v15,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_208;
  if ( !Instance )
    goto LABEL_208;
  Instance = (void *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_208;
  Instance = mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_208;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_209:
    sub_1C22354(Instance);
    goto LABEL_210;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *((_QWORD *)Instance + 73);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  v22 = 1.0;
  if ( dispType == 2 )
    v22 = 0.5;
  *(float *)(v5 + 24) = v22;
  *(float *)(v5 + 28) = v22;
  *(float *)(v5 + 32) = v22;
  *(_DWORD *)(v5 + 36) = 1065353216;
  v143 = dispType;
  v23 = HasFlag;
  MasterData_object = DataManager__GetMasterData_object_(
                        v15,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_208;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
    PhaseDetailedEntity->fields.id,
    0LL);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  questId = quest_info_k__BackingField->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_38834244 = CondType__IsQuestClear_38834244(questId, -1, 0, 0LL);
  v27 = quest_info_k__BackingField->fields.questPhase;
  v141 = IsQuestClear_38834244;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = this->fields.mLabelObj;
  if ( v27 + 1 < PhaseMax )
    PhaseMax = v27 + 1;
  questPhase = PhaseMax;
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v29 = QuestBoardListViewItemDraw_TypeInfo;
  mCostObj = this->fields.mCostObj;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v29 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(mCostObj, v29->static_fields->COST_OBJ_POS_WAR_BOARD, 0LL);
  Instance = this->fields.mCostApSp;
  if ( !Instance )
    goto LABEL_208;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS_WAR_BOARD,
    0LL);
  Instance = this->fields.mCostLb1;
  if ( !Instance )
    goto LABEL_208;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v32,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS_WAR_BOARD,
    0LL);
  Instance = this->fields.mShohiSp;
  if ( !Instance )
    goto LABEL_208;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v33,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS_WAR_BOARD,
    0LL);
  if ( PhaseDetailedEntity->fields.bannerId < 1 )
  {
    Instance = QuestBoardListViewItemDraw_TypeInfo;
    mShohiSp = this->fields.mShohiSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !mShohiSp )
      goto LABEL_208;
    UISprite__set_spriteName(mShohiSp, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD, 0LL);
    if ( v17 > 7 || ((1 << v17) & 0xA6) == 0 )
    {
      Instance = this->fields.mcBaseP;
      if ( !Instance )
        goto LABEL_208;
      UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0LL);
      Instance = QuestBoardListViewItemDraw_TypeInfo;
      mcBaseP = this->fields.mcBaseP;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = QuestBoardListViewItemDraw_TypeInfo;
      }
      v138 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 1072LL);
      if ( !v138 )
        goto LABEL_208;
      if ( v17 >= *(_DWORD *)(v138 + 24) )
LABEL_210:
        sub_1C2209C(Instance, v7);
      if ( !mcBaseP )
        goto LABEL_208;
      SHOHI_SP_NAME_WAR_BOARD = *(System_String_o **)(v138 + 8LL * (int)v17 + 32);
      goto LABEL_70;
    }
    Instance = QuestBoardListViewItemDraw_TypeInfo;
    v47 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = QuestBoardListViewItemDraw_TypeInfo;
    }
    v48 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 1072LL);
    if ( !v48 )
      goto LABEL_208;
    v49 = *(_DWORD *)(v48 + 24);
    if ( v17 == 7 )
    {
      if ( v49 <= 1 )
        goto LABEL_210;
      v50 = *(System_String_o **)(v48 + 40);
    }
    else
    {
      if ( v17 >= v49 )
        goto LABEL_210;
      v50 = *(System_String_o **)(v48 + 8LL * v17 + 32);
    }
    v51 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
    v52 = System_String__Concat_63115476(v50, v51, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v47, v52, 0LL);
  }
  else
  {
    v34 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v34 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v34->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v36 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
    v37 = System_String__Concat_63115476(QUEST_BOARD_SPNAME_PREFIX, v36, 0LL);
    v38 = this->fields.mcBaseP;
    v39 = v37;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (void *)AtlasManager__SetEventUI(v38, v39, 0LL);
    if ( !v38 )
      goto LABEL_208;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v38, (unsigned __int8)Instance & 1, 0LL);
    v40 = this->fields.mShohiSp;
    QUEST_BOARD_SHOHI_SPNAME_PREFIX = QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
    v42 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
    v43 = System_String__Concat_63115476(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v42, 0LL);
    if ( !AtlasManager__SetEventUI(v40, v43, 0LL) )
    {
      Instance = QuestBoardListViewItemDraw_TypeInfo;
      mcBaseP = this->fields.mShohiSp;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !mcBaseP )
        goto LABEL_208;
      SHOHI_SP_NAME_WAR_BOARD = QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
LABEL_70:
      UISprite__set_spriteName(mcBaseP, SHOHI_SP_NAME_WAR_BOARD, 0LL);
    }
  }
  Instance = this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_208;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)Instance,
               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_208;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_208;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_208;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_208;
    v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v55 = QuestBoardListViewItemDraw_TypeInfo;
    v56 = v54;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v55 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v56, v55->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_208;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_208;
    Instance = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)Instance,
                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_208;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *((float *)Instance + 32) = NEXT_POS_X_QUEST;
    *((float *)Instance + 35) = NEXT_POS_X_QUEST;
  }
  if ( v143 != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v58 = 1;
    }
    else
    {
      if ( !v141 )
        goto LABEL_107;
      v58 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v58, 1, v53);
  }
LABEL_107:
  Instance = this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v61 = QuestBoardListViewItemDraw_TypeInfo;
  v62 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v61 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v61->static_fields;
  p_x = &static_fields->NEW_POS_QUEST_NEXT.fields.x;
  p_y = &static_fields->NEW_POS_QUEST_NEXT.fields.y;
  p_z = &static_fields->NEW_POS_QUEST_NEXT.fields.z;
  if ( !v62 )
    p_x = &static_fields->NEW_POS_QUEST.fields.x;
  if ( !v62 )
    p_y = &static_fields->NEW_POS_QUEST.fields.y;
  if ( !v62 )
    p_z = &static_fields->NEW_POS_QUEST.fields.z;
  v151.fields.z = *p_z;
  v151.fields.y = *p_y;
  v151.fields.x = *p_x;
  QuestBoardListViewItemDraw__SetNewIcon(this, v151, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v60);
  Instance = QuestBoardListViewItemDraw__GetStatusSp(this, 2, v67);
  if ( !Instance )
    goto LABEL_208;
  v68 = (UnityEngine_GameObject_o *)Instance;
  v69 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v69 )
  {
    v71 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v71 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v68, v71->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  (QuestBoardListViewItemDraw_o *)v69,
                  PhaseDetailedEntity,
                  questPhase,
                  !v23,
                  v143 == 2,
                  v70);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v5 + 24), v73);
  v75 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v75 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mMatrixFrame = v75->fields.mTitleLevelStrSp[1].fields.mMatrixFrame;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v75, v17, v74);
  v80 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          mMatrixFrame,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v5 + 24),
          v79);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v80 )
  {
    Instance = QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v17, v81);
    if ( !mTitleNameLb )
      goto LABEL_208;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    goto LABEL_145;
  }
  Instance = QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_208;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v17 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v84, quest_info_k__BackingField->fields.warId, v85) )
  {
    Instance = this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_208;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_208;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_208;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v88, PhaseDetailedEntity, v17, v89);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (void *)AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_208;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, (unsigned __int8)Instance & 1, 0LL);
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_208;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_208;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_208;
    Instance = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)Instance,
                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_208;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_208;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v91 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v91,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass319_0__SetItemOfWarBoard_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v91, v92);
    }
LABEL_145:
    if ( v143 == 2 )
      goto LABEL_146;
    goto LABEL_147;
  }
  if ( v143 == 2 )
  {
LABEL_146:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v83);
    goto LABEL_149;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v86);
LABEL_147:
  Instance = this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_208;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_149:
  Instance = QuestBoardListViewItemDraw_TypeInfo;
  v93 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v93 )
    goto LABEL_208;
  UILabel__SetCondensedScale(v93, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0, 0LL);
  Instance = this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_208;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v94,
                           &phasePresentData,
                           PhaseDetailedEntity,
                           quest_info_k__BackingField->fields.questPhase,
                           v95);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    phasePresentData,
    v143 == 2,
    *(UnityEngine_Color_o *)(v5 + 24),
    v97);
  v98 = quest_info_k__BackingField->fields.questId;
  v99 = phasePresentData;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v101 = *(float *)(v5 + 24);
  v102 = *(float *)(v5 + 28);
  v103 = *(float *)(v5 + 32);
  v104 = *(float *)(v5 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v152.fields.r = v101;
  v152.fields.g = v102;
  v152.fields.b = v103;
  v152.fields.a = v104;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    v98,
    PhasePresentGiftData,
    v99,
    afterClear,
    v152,
    IsRepeatReward,
    v106);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v5 + 24),
    v107);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v108);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = QuestBoardListViewItemDraw__GetCampaignText(
               this,
               PhaseDetailedEntity->fields.id,
               questPhase,
               !v141,
               &fixedVal[1],
               fixedVal,
               &isNotItemConsume,
               v110);
  if ( !mInfoTextList )
    goto LABEL_208;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Instance = this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  Instance = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_208;
    Instance = (void *)UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_171;
    if ( !entity )
      goto LABEL_208;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v112 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (void *)QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v113 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v114 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v115 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v115, v114, v112, 0, 1, 0LL, 0LL);
      if ( !v113 )
        goto LABEL_208;
      items = v113->fields._items;
      v123 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v113->fields._version;
      if ( !items )
        goto LABEL_208;
      size = v113->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v113,
          (Il2CppObject *)v115,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
      }
      else
      {
        v125 = &items->obj.klass + size;
        v113->fields._size = size + 1;
        v125[4] = (Il2CppClass *)v115;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v125 + 4), (int64_t)v115, v116, v117, v118, v119, v120, v121);
      }
    }
  }
LABEL_171:
  v126 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v126 )
    goto LABEL_208;
  v127 = v126->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v127 < 1 )
    goto LABEL_180;
  v129 = this->fields.mListViewObject;
  if ( !v129 )
    goto LABEL_208;
  Instance = v129->fields.manager;
  if ( !Instance )
    goto LABEL_208;
  v130 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v130
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v130 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_209;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v127, 0LL);
  Instance = System_Collections_Generic_List_object___get_Item(
               v126,
               AlphaAnimCnt,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Instance )
    goto LABEL_208;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0LL);
  Instance = this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_208;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v132 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v133 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v132;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v133;
LABEL_180:
  Instance = *p_mOptionInfoLb;
  v134 = v127 > 0;
  if ( !*p_mOptionInfoLb )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v134, 0LL);
  Instance = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v134, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v143 == 2,
    fixedVal[1],
    fixedVal[0],
    isNotItemConsume,
    *(UnityEngine_Color_o *)(v5 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    v139);
  Instance = this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_208;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_208;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !Instance )
    goto LABEL_208;
  v135 = WarBoardQuestMaster__GetEntity(
           (WarBoardQuestMaster_o *)Instance,
           quest_info_k__BackingField->fields.questId,
           questPhase,
           0LL);
  if ( !v135 )
    return;
  v136 = v135;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_208;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !Instance )
    goto LABEL_208;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v136->fields.stageId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( Instance )
  {
    if ( !this->fields.mBoardMessage )
      goto LABEL_208;
    UILabel__set_text(this->fields.mBoardMessage, *((System_String_o **)Instance + 6), 0LL);
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
          0LL),
        (Instance = this->fields.mBoardMessage) == 0LL) )
  {
LABEL_208:
    sub_1C22094(Instance, v7);
  }
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetListViewObject(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewObject_o *questBoardObject,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mListViewObject = questBoardObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mListViewObject,
    (int64_t)questBoardObject,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4BD930A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD930A = 1;
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
                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_1C22094(StatusSp, v12);
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

  if ( (byte_4BD930D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD930D = 1;
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
                                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      sub_1C22094(mNextSp, info);
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

  if ( (byte_4BD930B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD930B = 1;
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
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_1C22094(v5, v6);
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
  if ( (byte_4BD930E & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD930E = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                                    (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
      v11 = (System_Collections_Generic_List_int__o *)Instance;
    }
  }
  if ( !v11 )
LABEL_43:
    sub_1C22094(Instance, id);
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
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
  if ( !byte_4BD9336 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9336 = 1;
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
         (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
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
  if ( (byte_4BD9330 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9330 = 1;
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
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
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
                                                                   (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
    sub_1C22094(IsNullOrEmpty, v12);
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

  if ( (byte_4BD92FC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD92FC = 1;
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mOptionRestrinctionSp
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)mOptionRestrinctionSp,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)QuestRestrictionMaster__GetRestrictionName(
                                                             (QuestRestrictionMaster_o *)mOptionRestrinctionSp,
                                                             questId,
                                                             phase,
                                                             0LL),
        !mOptionRestrinctionLb) )
  {
LABEL_17:
    sub_1C22094(mOptionRestrinctionSp, *(_QWORD *)&questId);
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
    sub_1C22094(mOptionRestrinctionLb, *(_QWORD *)&spacingX);
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
      sub_1C22094(0LL, method);
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
    sub_1C22094(StatusSp, v6);
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

  if ( (byte_4BD930F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    byte_4BD930F = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       StatusSp,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v7);
  if ( !StatusSp )
    goto LABEL_12;
  StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                           StatusSp,
                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_1C22094(StatusSp, v5);
  }
  sub_1C22354(StatusSp);
  QuestBoardListViewItemDraw__SetAdvanceNoticeText(v12, v13, v14, v15, v16);
}


void __fastcall QuestBoardListViewItemDraw__SetupBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestBoardListViewItemDraw_o *v5; // x19
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x24
  BannerEntity_array *bannerEntList; // x20
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  int32_t max_length; // w8
  BannerEntity_array *v11; // x1
  int32_t v12; // w2
  _BOOL8 HasExchangeSvtCoinBannerEntity; // x0
  const MethodInfo *v14; // x2
  BannerEntity_o *ExchangeSvtCoinBannerEntity; // x0
  int32_t mBannerCount; // w22
  int64_t v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  char *v24; // x0
  struct TerminalBannerComponent_array *v25; // x8
  __int64 v26; // x21
  int v27; // w26
  unsigned int v28; // w9
  UnityEngine_Component_o *v29; // x22
  unsigned int v30; // w10
  TerminalBannerComponent_o *v31; // x23
  struct TerminalBannerComponent_array *v32; // x8
  const MethodInfo *v33; // x1
  int v34; // w20
  const MethodInfo *v35; // x2
  struct UISprite_array *mBannerPointSps; // x8
  int v37; // w9
  int v38; // w20
  int32_t v39; // w21
  __int64 v40; // x0

  v5 = this;
  if ( (byte_4BD9324 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9324 = 1;
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
  if ( (signed int)bannerEntList->max_length >= max_length )
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
      v17 = (int64_t)ExchangeSvtCoinBannerEntity;
      this = (QuestBoardListViewItemDraw_o *)sub_1C21F74(
                                               ExchangeSvtCoinBannerEntity,
                                               bannerEntList->obj.klass->_1.element_class);
      if ( !this )
      {
        v40 = sub_1C220B8();
        sub_1C21F60(v40, 0LL);
      }
      if ( mBannerCount - 1 >= bannerEntList->max_length )
        goto LABEL_64;
      v24 = (char *)bannerEntList + 8 * mBannerCount - 8;
      *((_QWORD *)v24 + 4) = v17;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 32), v17, v18, v19, v20, v21, v22, v23);
    }
  }
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mBannerRoot;
  if ( !this )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v25 = v5->fields.mTerminalBanners;
  if ( !v25 )
    goto LABEL_60;
  v26 = 0LL;
  v27 = v25->max_length & ~((int)v25->max_length >> 31);
  while ( v27 != (_DWORD)v26 )
  {
    v28 = v25->max_length;
    if ( (unsigned int)v26 >= v28 )
      goto LABEL_64;
    v29 = (UnityEngine_Component_o *)v25->m_Items[v26];
    v30 = v26 + 1;
    if ( (int)v26 + 1 >= v5->fields.mBannerCount )
    {
      v31 = 0LL;
    }
    else
    {
      if ( v30 >= v28 )
        goto LABEL_64;
      v31 = v25->m_Items[v30];
    }
    if ( v29 )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v29, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v26 < v5->fields.mBannerCount, 0LL);
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v29, 0LL);
        if ( this )
        {
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__get_activeSelf(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( (unsigned int)v26 >= bannerEntList->max_length )
              goto LABEL_64;
            TerminalBannerComponent__Setup(
              (TerminalBannerComponent_o *)v29,
              v26,
              bannerEntList->m_Items[v26],
              v5->fields.mBannerCount,
              v31,
              0LL);
          }
          v25 = v5->fields.mTerminalBanners;
          ++v26;
          if ( v25 )
            continue;
        }
      }
    }
    goto LABEL_60;
  }
  if ( !v25->max_length )
LABEL_64:
    sub_1C2209C(this, questBoardItem);
  this = (QuestBoardListViewItemDraw_o *)v25->m_Items[0];
  if ( !this )
    goto LABEL_60;
  TerminalBannerComponent__StartLoadAndDisp((TerminalBannerComponent_o *)this, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9337 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9337 = 1;
  }
  this = (QuestBoardListViewItemDraw_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE1(this->fields.mTitleLevelStrSp->fields.mWidth) )
  {
    v32 = v5->fields.mTerminalBanners;
    if ( !v32 )
      goto LABEL_60;
    if ( !v32->max_length )
      goto LABEL_64;
    this = (QuestBoardListViewItemDraw_o *)v32->m_Items[0];
    if ( !this )
      goto LABEL_60;
    TerminalBannerComponent__SetBannerTextureActive((TerminalBannerComponent_o *)this, 0, 0LL);
  }
  QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(v5, (const MethodInfo *)questBoardItem);
  QuestBoardListViewItemDraw__SetupEntryBanner(v5, v33);
  AreaBoardInfo_k__BackingField->fields.bannerFocusIndex = 0;
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mBannerArrowObj;
  v5->fields.mIsEnableBannerAutoMoveOld = 0;
  if ( !this )
    goto LABEL_60;
  v34 = v5->fields.mBannerCount;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v34 > 1, 0LL);
  if ( v34 >= 2 )
    QuestBoardListViewItemDraw__SetupBannerArrows(v5, (const MethodInfo *)questBoardItem);
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mBannerPointGrid;
  if ( !this )
    goto LABEL_60;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v34 > 1, 0LL);
  if ( v34 >= 2 )
  {
    mBannerPointSps = v5->fields.mBannerPointSps;
    if ( mBannerPointSps )
    {
      v37 = mBannerPointSps->max_length;
      v38 = v37 - 1;
      if ( v37 >= 1 )
      {
        v39 = 0;
        while ( v39 < mBannerPointSps->max_length )
        {
          this = (QuestBoardListViewItemDraw_o *)mBannerPointSps->m_Items[v39];
          if ( this )
          {
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v39 < v5->fields.mBannerCount, 0LL);
              if ( v38 == v39 )
                goto LABEL_61;
              mBannerPointSps = v5->fields.mBannerPointSps;
              ++v39;
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
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, Il2CppClass *))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType);
        goto LABEL_63;
      }
    }
LABEL_60:
    sub_1C22094(this, questBoardItem);
  }
LABEL_63:
  QuestBoardListViewItemDraw__UpdateDispBannerPoint(v5, 0, v35);
}


void __fastcall QuestBoardListViewItemDraw__SetupBannerArrows(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct ScrollArrowComponent_array *mBannerArrows; // x8
  int max_length; // w20
  QuestBoardListViewItemDraw_o *v4; // x19
  il2cpp_array_size_t v5; // w9
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
      if ( v5 >= mBannerArrows->max_length )
LABEL_12:
        sub_1C2209C(this, method);
      v6 = (int)v5;
      this = (QuestBoardListViewItemDraw_o *)mBannerArrows->m_Items[v5];
      if ( !this )
        break;
      ScrollArrowComponent__SetDisp((ScrollArrowComponent_o *)this, 0, 1, 0LL);
      v7 = v4->fields.mBannerArrows;
      if ( !v7 )
        break;
      if ( (unsigned int)v6 >= v7->max_length )
        goto LABEL_12;
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v7->m_Items[v6], 0, 0LL);
      v5 = v6 + 1;
      if ( max_length == (_DWORD)v6 + 1 )
        return;
      mBannerArrows = v4->fields.mBannerArrows;
    }
    while ( mBannerArrows );
LABEL_10:
    sub_1C22094(this, method);
  }
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
  if ( (byte_4BD9326 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9326 = 1;
  }
  mTerminalBanners = v2->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_35;
  if ( !mTerminalBanners->max_length )
    sub_1C2209C(this, method);
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
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)Component_object, 0LL);
        }
        v7 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v5,
               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)v7, 0LL);
        }
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9337 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9337 = 1;
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
                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
    sub_1C22094(this, method);
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
  if ( (byte_4BD9306 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4BD9306 = 1;
  }
  if ( afterClearType == 3 )
  {
    Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    sub_1C22094(Instance, *(_QWORD *)&questId);
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
  QuestBoardListViewItemDraw_o **v11; // x19
  int32_t questId; // w22
  int32_t questPhase; // w27
  int32_t PhaseMax; // w8
  int32_t v15; // w24
  Il2CppObject *Master_object; // x25
  Il2CppObject *v17; // x21
  bool IsLimitCountSealQuest; // w21
  bool IsOpenQuestBehaviorCond; // w23
  bool v20; // w22
  UISprite_o *v21; // x20
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v11 = (QuestBoardListViewItemDraw_o **)this;
  if ( (byte_4BD9307 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&StringLiteral_20526/*"icon_reward_limits_release"*/);
    byte_4BD9307 = 1;
  }
  if ( !questInfo )
    goto LABEL_45;
  questId = questInfo->fields.questId;
  questPhase = questInfo->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(questInfo, 0LL);
  if ( questPhase + 1 < PhaseMax )
    v15 = questPhase + 1;
  else
    v15 = PhaseMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)CondType__IsQuestClear_38834244(questId, -1, 0, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_45;
    IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                              (ServantLimitImageMaster_o *)v17,
                              questId,
                              0LL);
    if ( Master_object )
    {
      IsOpenQuestBehaviorCond = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                  (QuestBehaviorMaster_o *)Master_object,
                                  questId,
                                  v15,
                                  5,
                                  0LL);
      if ( IsLimitCountSealQuest )
      {
        IsLimitCountSealQuest = 1;
        goto LABEL_21;
      }
      goto LABEL_18;
    }
  }
  else
  {
    if ( Master_object )
    {
      IsOpenQuestBehaviorCond = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                  (QuestBehaviorMaster_o *)Master_object,
                                  questId,
                                  v15,
                                  5,
                                  0LL);
LABEL_18:
      IsLimitCountSealQuest = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                (QuestBehaviorMaster_o *)Master_object,
                                questId,
                                v15,
                                10,
                                0LL);
      goto LABEL_21;
    }
    IsLimitCountSealQuest = 0;
  }
  IsOpenQuestBehaviorCond = 0;
LABEL_21:
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)CondType__IsQuestClear_38834244(questId, -1, 0, 0LL);
  v20 = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !userQuestEnt )
      goto LABEL_45;
    v20 = !UserQuestEntity__HasStatus(userQuestEnt, 4, 0LL) && !IsLimitCountSealQuest && !IsOpenQuestBehaviorCond;
  }
  this = v11[50];
  if ( !this )
    goto LABEL_45;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v20, 0LL);
  this = v11[50];
  if ( !this )
    goto LABEL_45;
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v22, 0LL);
  this = v11[52];
  if ( !this
    || (this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsOpenQuestBehaviorCond, 0LL),
        (this = v11[52]) == 0LL) )
  {
LABEL_45:
    sub_1C22094(this, questInfo);
  }
  v23.fields.r = r;
  v23.fields.g = g;
  v23.fields.b = b;
  v23.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v23, 0LL);
  v21 = (UISprite_o *)v11[53];
  if ( IsLimitCountSealQuest )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v21, (System_String_o *)StringLiteral_20526/*"icon_reward_limits_release"*/, 0LL);
    this = v11[53];
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = v11[53];
        if ( this )
        {
          ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          this = v11[53];
          if ( this )
          {
            v24.fields.b = b;
            v24.fields.a = a;
            v24.fields.r = r;
            v24.fields.g = g;
            UIWidget__set_color((UIWidget_o *)this, v24, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_45;
  }
  if ( !v21 )
    goto LABEL_45;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11[53], 0LL);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 giftIconId; // x1
  int64_t mRewardIcon; // x0
  int32_t *p_giftId; // x8
  int32_t v20; // w25
  bool v21; // w1
  GiftMaster_o *v22; // x24
  System_Collections_Generic_IEnumerable_TSource__o *GiftListById; // x23
  QuestBoardListViewItemDraw___c_c *v24; // x8
  System_Func_object__bool__o *_9__330_0; // x26
  Il2CppObject *v26; // x27
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  char v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Object_array *v35; // x23
  __int64 v36; // x25
  int64_t v37; // x2
  char v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Func_object__bool__o *v43; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  int giftId; // w1
  GiftEntity_array *v46; // x0
  QuestBoardListViewItemDraw___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  System_Func_object__bool__o *_9__330_1; // x22
  Il2CppObject *v50; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v51; // x0
  int64_t v52; // x2
  char v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x10
  Il2CppObject *v61; // x8
  int monitor_high; // w9
  int32_t v63; // w2
  bool v64; // w1
  int32_t v65; // w3
  int64_t v66; // x2
  char v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4BD9303 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C21E38(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&QuestBoardListViewManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__330_0__);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__330_1__);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass330_0__SetupRewardIconDisp_b__2__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass330_0_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4BD9303 = 1;
  }
  entity = 0LL;
  this->fields.mRewardIconInfs = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs,
    0LL,
    (int64_t)phasePresentData,
    isClosed,
    (System_String_o *)method,
    v6,
    v7,
    v8);
  mRewardIcon = (int64_t)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_84;
  mRewardIcon = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRewardIcon, 0LL);
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
  v20 = *p_giftId;
  if ( isClosed )
  {
    if ( !questEnt )
      goto LABEL_84;
    mRewardIcon = QuestEntity__HasFlag(questEnt, 4096LL, 0LL);
    if ( (mRewardIcon & 1) != 0 )
    {
      mRewardIcon = (int64_t)this->fields.mRewardIcon;
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
    if ( v20 < 1 )
    {
      mRewardIcon = (int64_t)this->fields.mRewardObj;
      if ( !mRewardIcon )
        goto LABEL_84;
      v21 = 0;
      goto LABEL_23;
    }
    mRewardIcon = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mRewardIcon )
      goto LABEL_84;
    mRewardIcon = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)mRewardIcon,
                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !mRewardIcon )
      goto LABEL_84;
    v22 = (GiftMaster_o *)mRewardIcon;
    GiftListById = (System_Collections_Generic_IEnumerable_TSource__o *)GiftMaster__GetGiftListById(
                                                                          (GiftMaster_o *)mRewardIcon,
                                                                          v20,
                                                                          0LL);
    v24 = QuestBoardListViewItemDraw___c_TypeInfo;
    if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
      v24 = QuestBoardListViewItemDraw___c_TypeInfo;
    }
    _9__330_0 = (System_Func_object__bool__o *)v24->static_fields->__9__330_0;
    if ( !_9__330_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__330_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__330_0,
        v26,
        Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__330_0__,
        0LL);
      static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__330_0 = (struct System_Func_GiftEntity__bool__o *)_9__330_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__330_0,
        (int64_t)_9__330_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = System_Linq_Enumerable__Where_object_(
            GiftListById,
            (System_Func_TSource__bool__o *)_9__330_0,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    v35 = System_Linq_Enumerable__ToArray_object_(
            v34,
            (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    mRewardIcon = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftDetailMaster___);
    if ( !mRewardIcon )
      goto LABEL_84;
    mRewardIcon = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)mRewardIcon,
                    &entity,
                    v20,
                    (const MethodInfo_325BE14 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    if ( v35 && (mRewardIcon & 1) != 0 )
    {
      v36 = sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass330_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass330_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass330_0_o *)v36,
        0LL);
      mRewardIcon = (int64_t)entity;
      if ( !entity )
        goto LABEL_84;
      mRewardIcon = (int64_t)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds((GiftDetailEntity_o *)entity, 0LL);
      if ( !v36 )
        goto LABEL_84;
      *(_QWORD *)(v36 + 16) = mRewardIcon;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 16), mRewardIcon, v37, v38, v39, v40, v41, v42);
      mRewardIcon = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v36 + 16), 0LL);
      if ( (mRewardIcon & 1) != 0 )
      {
LABEL_47:
        if ( !phasePresentData || *(_QWORD *)&v35->max_length )
          goto LABEL_89;
        if ( questEnt )
        {
          giftId = questEnt->fields.giftId;
          if ( giftId < 1 )
            goto LABEL_89;
          v46 = GiftMaster__GetGiftListById(v22, giftId, 0LL);
          v47 = QuestBoardListViewItemDraw___c_TypeInfo;
          v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v46;
          if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
            v47 = QuestBoardListViewItemDraw___c_TypeInfo;
          }
          _9__330_1 = (System_Func_object__bool__o *)v47->static_fields->__9__330_1;
          if ( !_9__330_1 )
          {
            if ( !v47->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v47);
              v47 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            v50 = (Il2CppObject *)v47->static_fields->__9;
            _9__330_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GiftEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__330_1,
              v50,
              Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__330_1__,
              0LL);
            v51 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
            v51->__9__330_1 = (struct System_Func_GiftEntity__bool__o *)_9__330_1;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v51->__9__330_1,
              (int64_t)_9__330_1,
              v52,
              v53,
              v54,
              v55,
              v56,
              v57);
          }
          v58 = System_Linq_Enumerable__Where_object_(
                  v48,
                  (System_Func_TSource__bool__o *)_9__330_1,
                  (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
          mRewardIcon = (int64_t)System_Linq_Enumerable__ToArray_object_(
                                   v58,
                                   (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
          v35 = (System_Object_array *)mRewardIcon;
          if ( mRewardIcon )
          {
LABEL_89:
            giftIconId = *(_QWORD *)&v35->max_length;
            if ( !giftIconId )
            {
              mRewardIcon = (int64_t)this->fields.mRewardObj;
              if ( !mRewardIcon )
                goto LABEL_84;
              v64 = 0;
              goto LABEL_83;
            }
            mListViewObject = this->fields.mListViewObject;
            if ( mListViewObject )
            {
              mRewardIcon = (int64_t)mListViewObject->fields.manager;
              if ( mRewardIcon )
              {
                methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
                if ( *(unsigned __int8 *)(*(_QWORD *)mRewardIcon + 304LL) >= (unsigned int)methodPtr_low
                  && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)mRewardIcon + 200LL)
                                                     + 8 * methodPtr_low
                                                     - 8) == QuestBoardListViewManager_TypeInfo )
                {
                  mRewardIcon = QuestBoardListViewManager__GetAlphaAnimCnt(
                                  (QuestBoardListViewManager_o *)mRewardIcon,
                                  giftIconId,
                                  0LL);
                  if ( (unsigned int)mRewardIcon < v35->max_length )
                  {
                    v61 = v35->m_Items[(int)mRewardIcon];
                    if ( !v61 )
                      goto LABEL_84;
                    giftIconId = HIDWORD(v61[2].monitor);
                    mRewardIcon = (int64_t)this->fields.mRewardIcon;
                    monitor_high = HIDWORD(v61[1].monitor);
                    if ( (int)giftIconId < 1 )
                    {
                      if ( !mRewardIcon )
                        goto LABEL_84;
                      if ( monitor_high <= 1 )
                        v65 = -1;
                      else
                        v65 = HIDWORD(v61[1].monitor);
                      ItemIconComponent__SetGift_39386620(
                        (ItemIconComponent_o *)mRewardIcon,
                        HIDWORD(v61[1].klass),
                        (int32_t)v61[1].monitor,
                        v65,
                        1,
                        0LL);
                    }
                    else
                    {
                      if ( !mRewardIcon )
                        goto LABEL_84;
                      if ( monitor_high <= 1 )
                        v63 = -1;
                      else
                        v63 = HIDWORD(v61[1].monitor);
                      ItemIconComponent__SetItemImage_39389052((ItemIconComponent_o *)mRewardIcon, giftIconId, v63, 0LL);
                    }
                    mRewardIcon = (int64_t)this->fields.mRewardIcon;
                    if ( mRewardIcon )
                    {
                      mRewardIcon = (int64_t)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)mRewardIcon,
                                               0LL);
                      if ( mRewardIcon )
                      {
                        v64 = 1;
LABEL_83:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, v64, 0LL);
                        this->fields.mRewardIconInfs = (struct GiftEntity_array *)v35;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs,
                          (int64_t)v35,
                          v66,
                          v67,
                          v68,
                          v69,
                          v70,
                          v71);
                        goto LABEL_24;
                      }
                    }
                    goto LABEL_84;
                  }
                }
                else
                {
                  sub_1C22354(mRewardIcon);
                }
                sub_1C2209C(mRewardIcon, giftIconId);
              }
            }
          }
        }
LABEL_84:
        sub_1C22094(mRewardIcon, giftIconId);
      }
      v43 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v43,
        (Il2CppObject *)v36,
        Method_QuestBoardListViewItemDraw___c__DisplayClass330_0__SetupRewardIconDisp_b__2__,
        0LL);
      v44 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v35,
              (System_Func_TSource__bool__o *)v43,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      mRewardIcon = (int64_t)System_Linq_Enumerable__ToArray_object_(
                               v44,
                               (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v35 = (System_Object_array *)mRewardIcon;
    }
    if ( !v35 )
      goto LABEL_84;
    goto LABEL_47;
  }
  mRewardIcon = (int64_t)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_84;
LABEL_20:
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)mRewardIcon, giftIconId, 0LL);
  mRewardIcon = (int64_t)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_84;
  mRewardIcon = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRewardIcon, 0LL);
  if ( !mRewardIcon )
    goto LABEL_84;
  v21 = 1;
LABEL_23:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, v21, 0LL);
LABEL_24:
  mRewardIcon = (int64_t)this->fields.mRewardObj;
  if ( !mRewardIcon )
    goto LABEL_84;
  mRewardIcon = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mRewardIcon,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !mRewardIcon )
    goto LABEL_84;
  v73.fields.r = r;
  v73.fields.g = g;
  v73.fields.b = b;
  v73.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardIcon, v73, 0LL);
  mRewardIcon = (int64_t)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_84;
  v74.fields.r = r;
  v74.fields.g = g;
  v74.fields.b = b;
  v74.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)mRewardIcon, v74, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v21; // x22
  struct ScrollArrowComponent_array *mBannerArrows; // x20
  __int64 v23; // x8
  unsigned __int64 v24; // x21
  UnityEngine_GameObject_o *v25; // x20
  Il2CppObject *v26; // x21
  int v27; // s0
  int v28; // s1
  int v29; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  QuestBoardListViewItemDraw_c *v32; // x0
  float BANNER_ENTORY_EFFECT_DURATION; // s0
  EventDelegate_Callback_o *v34; // x22
  float v35; // s0

  if ( (byte_4BD9327 & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass380_0__StartEntryBanner_b__0__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass380_0_TypeInfo);
    byte_4BD9327 = 1;
  }
  v5 = sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass380_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass380_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)endCallback, v14, v15, v16, v17, v18, v19);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9337 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9337 = 1;
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
    goto LABEL_32;
  if ( !mTerminalBanners->max_length )
    goto LABEL_31;
  v21 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
LABEL_16:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
    return;
  }
  if ( !v21 )
    goto LABEL_32;
  TerminalBannerComponent__SetBannerTextureActive((TerminalBannerComponent_o *)v21, 1, 0LL);
  mBannerArrows = this->fields.mBannerArrows;
  if ( !mBannerArrows )
    goto LABEL_32;
  v23 = *(_QWORD *)&mBannerArrows->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    while ( v24 < (unsigned int)v23 )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)mBannerArrows->m_Items[v24], 1, 0LL);
      LODWORD(v23) = mBannerArrows->max_length;
      if ( (__int64)++v24 >= (int)v23 )
        goto LABEL_23;
    }
LABEL_31:
    sub_1C2209C(gameObject, v7);
  }
LABEL_23:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v25 = gameObject;
  v26 = UnityEngine_GameObject__AddComponent_object_(
          gameObject,
          (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v27 = GameObjectExtensions__GetLocalPosition(v25, 0LL);
  if ( !v26 )
    goto LABEL_32;
  LODWORD(v26[8].klass) = v27;
  HIDWORD(v26[8].klass) = v28;
  LODWORD(v26[8].monitor) = v29;
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(void **)((char *)&v26[8].monitor + 4) = *(void **)&static_fields->zeroVector.fields.x;
  *((float *)&v26[9].klass + 1) = z;
  v32 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v32 = QuestBoardListViewItemDraw_TypeInfo;
  }
  BANNER_ENTORY_EFFECT_DURATION = v32->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v26[2].klass) = 2;
  *(float *)&v26[3].monitor = BANNER_ENTORY_EFFECT_DURATION;
  v34 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v34,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass380_0__StartEntryBanner_b__0__,
    0LL);
  UITweener__SetOnFinished((UITweener_o *)v26, v34, 0LL);
  UITweener__PlayForward((UITweener_o *)v26, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             v25,
                                             (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gameObject )
LABEL_32:
    sub_1C22094(gameObject, v7);
  gameObject[5].monitor = (void *)0x3F80000000000000LL;
  v35 = QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(gameObject[1].monitor) = 3;
  *(float *)&gameObject[2].monitor = v35;
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
  if ( (byte_4BD9329 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD9329 = 1;
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
        sub_1C2209C(this, *(_QWORD *)&index);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v8 = mBannerPointSps->m_Items[v5];
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !v8 )
LABEL_15:
        sub_1C22094(this, *(_QWORD *)&index);
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

  if ( (byte_4BD92F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4BD92F3 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0LL )
  {
    sub_1C22094(mInfoTextList, questBoardItem);
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
      sub_1C22094(this, questBoardItem);
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
  UnityEngine_Vector2_o ScreenPosition_47740676; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  v4 = this;
  if ( (byte_4BD932C & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C21E38(&CTouch_TypeInfo);
    byte_4BD932C = 1;
  }
  if ( v4->fields.mIsPressedForDragX )
  {
    v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_1C22094(this, questBoardManager);
    mUICamera = questBoardManager->fields.mUICamera;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_47740676 = CTouch__getScreenPosition_47740676(mUICamera, 0LL);
    mIsEnableDragX = v4->fields.mIsEnableDragX;
    v4->fields.mTouchPosNow = ScreenPosition_47740676;
    if ( mIsEnableDragX )
      v4->fields.mTouchPosDif = ScreenPosition_47740676.fields.x - v4->fields.mTouchPosOld.fields.x;
  }
}


void __fastcall QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_331_0(
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
  if ( (byte_4BD9334 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4BD9334 = 1;
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
  UILabel__SetCondensedScale(v8, v10->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  if ( !label
    || (LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_11:
    sub_1C22094(label, message);
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
    sub_1C22094(0LL, onOff);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD9372 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_4BD9372 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestBoardListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestBoardListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewItemDraw___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestBoardListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestBoardListViewItemDraw___c___ctor(QuestBoardListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c___IsValidSupportSelection_b__358_0(
        QuestBoardListViewItemDraw___c_o *this,
        RestrictionEntity_o *rest,
        const MethodInfo *method)
{
  if ( !rest )
    sub_1C22094(this, 0LL);
  return rest->fields.type == 9;
}


int32_t __fastcall QuestBoardListViewItemDraw___c___SetItemOfQuest_b__318_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1C22094(this, 0LL);
  return value->fields.enemyId;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__330_0(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C22094(this, 0LL);
  return ent->fields.type != 15;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__330_1(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C22094(this, 0LL);
  return ent->fields.type != 15;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass316_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass316_0___IsPurchasedByRarePrism_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass316_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass316_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *warEnt; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_4BD9373 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD9373 = 1;
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
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)NetworkManager_TypeInfo;
  }
  if ( !userQuestMst )
LABEL_17:
    sub_1C22094(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   userQuestMst,
                   (int64_t)this[5].fields.userQuestMst->fields.sb,
                   quest->fields.questId,
                   0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass317_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass317_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass317_0___HasNewQuestInWar_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass317_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass317_0_o *v3; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8

  v3 = this;
  if ( this->fields.isMainInterlude )
  {
    if ( !quest
      || (this = (QuestBoardListViewItemDraw___c__DisplayClass317_0_o *)MapControl_QuestInfo__GetMine(quest, 0LL)) == 0LL )
    {
LABEL_11:
      sub_1C22094(this, quest);
    }
    this = (QuestBoardListViewItemDraw___c__DisplayClass317_0_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 4LL, 0LL);
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


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass318_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass318_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass318_0___SetItemOfQuest_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass318_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass318_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass318_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass318_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass318_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass318_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_1C22094(this, method);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass319_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass319_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass319_0___SetItemOfWarBoard_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass319_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass319_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass319_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass319_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass319_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass319_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_1C22094(this, method);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass330_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass330_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass330_0___SetupRewardIconDisp_b__2(
        QuestBoardListViewItemDraw___c__DisplayClass330_0_o *this,
        GiftEntity_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Int32_array *itemIds; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_4BD9374 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int____77629760);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewItemDraw___c__DisplayClass330_1__SetupRewardIconDisp_b__3__);
    sub_1C21E38(&QuestBoardListViewItemDraw___c__DisplayClass330_1_TypeInfo);
    byte_4BD9374 = 1;
  }
  v5 = sub_1C22084(QuestBoardListViewItemDraw___c__DisplayClass330_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = info;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)info, v8, v9, v10, v11, v12, v13);
  itemIds = this->fields.itemIds;
  v15 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass330_1__SetupRewardIconDisp_b__3__,
    0LL);
  return !BasicHelper__Any_int__49916656(
            itemIds,
            (System_Func_T__bool__o *)v15,
            (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass330_1___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass330_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass330_1___SetupRewardIconDisp_b__3(
        QuestBoardListViewItemDraw___c__DisplayClass330_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct GiftEntity_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C22094(this, x);
  return info->fields.objectId == x;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass354_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass354_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass354_0___GetCampaignTextListByEventQuestMaster_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass354_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_1C22094(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass354_1___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass354_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass354_1___GetCampaignTextListByEventQuestMaster_b__1(
        QuestBoardListViewItemDraw___c__DisplayClass354_1_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_1C22094(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass356_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass356_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass356_0___CreateQuestBoardInformationText_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass356_0_o *this,
        UserOwnItemInfo_o *x,
        const MethodInfo *method)
{
  const MethodInfo_376BF2C *v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_Nullable_long__o v9; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v10; // 0:x0.16

  if ( (byte_4BD9375 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Nullable_long___ctor__);
    byte_4BD9375 = 1;
  }
  v10.fields.value = this->fields.checkTime;
  *(_QWORD *)&v10.fields.hasValue = &v9;
  *(_QWORD *)&v9.fields.hasValue = 0LL;
  v9.fields.value = 0LL;
  System_Nullable_long____ctor(v10, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_1C22094(v6, v7);
  return !UserOwnItemInfo__IsExpired(x, v9, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass380_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass380_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass380_0___StartEntryBanner_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass380_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct QuestBoardListViewItemDraw_o *_4__this; // x8

  if ( (byte_4BD9376 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9376 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9403 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9403 = 1;
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
    sub_1C22094(v3, method);
  _4__this->fields._bannerState_k__BackingField = 2;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass392_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass392_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass392_0___LoadBoardIconTexture_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass392_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass392_0_o *v4; // x19
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  QuestBoardListViewItemDraw_c *v12; // x0
  System_String_o *v13; // x19
  struct QuestBoardListViewItemDraw_o *v14; // x8
  UnityEngine_Shader_o *v15; // x21
  UnityEngine_Material_o *v16; // x20
  struct QuestBoardListViewItemDraw_o *v17; // x8
  struct QuestBoardListViewItemDraw_o *v18; // x8
  struct QuestBoardListViewItemDraw_o *v19; // x8
  AssetData_o *boardIconAssetData; // x21
  Il2CppObject *Object_object__49880776; // x0

  v4 = this;
  if ( (byte_4BD9377 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_16806/*"_alpha"*/);
    sub_1C21E38(&StringLiteral_5081/*"Custom/SpriteWithMask"*/);
    this = (QuestBoardListViewItemDraw___c__DisplayClass392_0_o *)sub_1C21E38(&StringLiteral_16545/*"_MaskTex"*/);
    byte_4BD9377 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (QuestBoardListViewItemDraw___c__DisplayClass392_0_o *)System_String__op_Inequality(
                                                                  v4->fields.loadBoardIconName,
                                                                  _4__this->fields.boardIconName,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v14 = v4->fields.__4__this;
    if ( v14 )
    {
      v14->fields.boardIconAssetData = assetData;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v14->fields.boardIconAssetData,
        (int64_t)assetData,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5081/*"Custom/SpriteWithMask"*/, 0LL);
      v16 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v16, v15, 0LL);
      v17 = v4->fields.__4__this;
      if ( v17 )
      {
        this = (QuestBoardListViewItemDraw___c__DisplayClass392_0_o *)v17->fields.boardIconTexture;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass392_0_o *)((__int64 (__fastcall *)(QuestBoardListViewItemDraw___c__DisplayClass392_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                          this,
                                                                          v16,
                                                                          this->klass[1].vtable._3_ToString.methodPtr);
          v18 = v4->fields.__4__this;
          if ( v18 )
          {
            this = (QuestBoardListViewItemDraw___c__DisplayClass392_0_o *)v18->fields.boardIconAssetData;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw___c__DisplayClass392_0_o *)AssetData__GetObject_object__49880776(
                                                                              (AssetData_o *)this,
                                                                              v18->fields.boardIconName,
                                                                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
              if ( v16 )
              {
                UnityEngine_Material__set_mainTexture(v16, (UnityEngine_Texture_o *)this, 0LL);
                v19 = v4->fields.__4__this;
                if ( v19 )
                {
                  boardIconAssetData = v19->fields.boardIconAssetData;
                  this = (QuestBoardListViewItemDraw___c__DisplayClass392_0_o *)System_String__Concat_63115476(
                                                                                  v19->fields.boardIconName,
                                                                                  (System_String_o *)StringLiteral_16806/*"_alpha"*/,
                                                                                  0LL);
                  if ( boardIconAssetData )
                  {
                    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                                boardIconAssetData,
                                                (System_String_o *)this,
                                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
                    UnityEngine_Material__SetTexture(
                      v16,
                      (System_String_o *)StringLiteral_16545/*"_MaskTex"*/,
                      (UnityEngine_Texture_o *)Object_object__49880776,
                      0LL);
                    this = (QuestBoardListViewItemDraw___c__DisplayClass392_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C22094(this, assetData);
  }
  v12 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v12 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v13 = System_String__Concat_63115476(
          v12->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          v4->fields.loadBoardIconName,
          0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v13, 0LL);
}