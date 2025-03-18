void __fastcall QuestBoardListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  QuestBoardListViewItemDraw_c *v74; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v76; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v77; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v78; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v79; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v80; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v81; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v82; // x0
  int64_t v83; // x1
  int64_t v84; // x1
  struct QuestBoardListViewItemDraw_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  QuestBoardListViewItemDraw_c *v92; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v93; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v94; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v95; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v96; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v97; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v98; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v99; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v100; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v101; // x8
  int64_t v102; // x1
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x1
  PartyOrganizationUtility_o *p_COST_BG_QP; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  QuestBoardListViewItemDraw_c *v117; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v118; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v119; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v120; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v121; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v122; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v123; // x9
  int64_t v124; // x1
  PartyOrganizationUtility_o *p_SHOHI_SP_NAME; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int64_t v132; // x1
  PartyOrganizationUtility_o *p_SHOHI_SP_NAME_WAR_BOARD; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  __int64 v140; // x1
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  QuestBoardListViewItemDraw_c *v147; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v148; // x10
  UnityEngine_Vector3_c *v149; // x9
  struct UnityEngine_Vector3_StaticFields *v150; // x11
  float z; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v152; // x10
  struct UnityEngine_Vector3_StaticFields *v153; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v154; // x11
  float v155; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v156; // x11
  struct QuestBoardListViewItemDraw_StaticFields *v157; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v158; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v159; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v160; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v161; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v162; // x10
  struct UnityEngine_Vector3_StaticFields *v163; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v164; // x10
  float v165; // s1
  struct QuestBoardListViewItemDraw_StaticFields *v166; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v167; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v168; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v169; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v170; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v171; // x9
  int64_t v172; // x1
  PartyOrganizationUtility_o *p_EVENT_WAR_SPNAME_PREFIX; // x0
  int64_t v174; // x1
  PartyOrganizationUtility_o *p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x0
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int64_t v182; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_SPNAME_PREFIX; // x0
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  int64_t v190; // x1
  PartyOrganizationUtility_o *p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x0
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  int64_t v198; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_ICON_SPNAME_PREFIX; // x0
  int64_t v200; // x2
  int32_t v201; // w3
  System_String_o *v202; // x4
  BattleSetupInfo_o *v203; // x5
  FollowerInfo_o *v204; // x6
  PartyListViewItem_o *v205; // x7
  int64_t v206; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_MASK_SPNAME_PREFIX; // x0
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  int64_t v214; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x0
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_AP_SPNAME_PREFIX; // x0
  int64_t v223; // x1
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_DAMAGE_RECODE_NAME; // x0
  int64_t v231; // x1
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_PREV_ICON_NAME; // x0
  int64_t v239; // x1
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x0
  int64_t v247; // x1
  int64_t v248; // x2
  int32_t v249; // w3
  System_String_o *v250; // x4
  BattleSetupInfo_o *v251; // x5
  FollowerInfo_o *v252; // x6
  PartyListViewItem_o *v253; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_ICON_TEXTURE_PATH; // x0
  int64_t v255; // x1
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  int64_t v262; // x1
  PartyOrganizationUtility_o *p_QUEST_BOARD_ICON_TEXTURE_PREFIX; // x0
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7
  PartyOrganizationUtility_o *p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x0
  int64_t v271; // x1
  int64_t v272; // x2
  int32_t v273; // w3
  System_String_o *v274; // x4
  BattleSetupInfo_o *v275; // x5
  FollowerInfo_o *v276; // x6
  PartyListViewItem_o *v277; // x7
  struct QuestBoardListViewItemDraw_StaticFields *v278; // x8
  int64_t v279; // x1
  int64_t v280; // x2
  int32_t v281; // w3
  System_String_o *v282; // x4
  BattleSetupInfo_o *v283; // x5
  FollowerInfo_o *v284; // x6
  PartyListViewItem_o *v285; // x7
  PartyOrganizationUtility_o *p_BANNER_POINT_SPNAME_OFF; // x0
  int64_t v287; // x1
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  struct QuestBoardListViewItemDraw_StaticFields *v294; // x8
  int64_t v295; // x1
  int64_t v296; // x2
  int32_t v297; // w3
  System_String_o *v298; // x4
  BattleSetupInfo_o *v299; // x5
  FollowerInfo_o *v300; // x6
  PartyListViewItem_o *v301; // x7
  PartyOrganizationUtility_o *p_QUEST_STORY_FACE_MASK_SPNAME; // x0
  int64_t v303; // x1
  int64_t v304; // x2
  int32_t v305; // w3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  PartyOrganizationUtility_o *p_QUEST_MAIN_FACE_MASK_SPNAME; // x0
  int64_t v311; // x1
  int64_t v312; // x2
  int32_t v313; // w3
  System_String_o *v314; // x4
  BattleSetupInfo_o *v315; // x5
  FollowerInfo_o *v316; // x6
  PartyListViewItem_o *v317; // x7
  PartyOrganizationUtility_o *p_QUEST_EVENT_FACE_MASK_SPNAME; // x0
  int64_t v319; // x1
  int64_t v320; // x2
  int32_t v321; // w3
  System_String_o *v322; // x4
  BattleSetupInfo_o *v323; // x5
  FollowerInfo_o *v324; // x6
  PartyListViewItem_o *v325; // x7
  __int64 v326; // x0
  __int64 v327; // x1
  int64_t v328; // x2
  int32_t v329; // w3
  System_String_o *v330; // x4
  BattleSetupInfo_o *v331; // x5
  FollowerInfo_o *v332; // x6
  PartyListViewItem_o *v333; // x7
  int64_t v334; // x19
  int64_t v335; // x1
  int64_t v336; // x2
  int32_t v337; // w3
  System_String_o *v338; // x4
  BattleSetupInfo_o *v339; // x5
  FollowerInfo_o *v340; // x6
  PartyListViewItem_o *v341; // x7
  int64_t v342; // x1
  PartyOrganizationUtility_o *p_RP_SPNAME_FRAME; // x0
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  int64_t v350; // x2
  int32_t v351; // w3
  System_String_o *v352; // x4
  BattleSetupInfo_o *v353; // x5
  FollowerInfo_o *v354; // x6
  PartyListViewItem_o *v355; // x7
  int64_t v356; // x19
  int64_t v357; // x1
  int64_t v358; // x2
  int32_t v359; // w3
  System_String_o *v360; // x4
  BattleSetupInfo_o *v361; // x5
  FollowerInfo_o *v362; // x6
  PartyListViewItem_o *v363; // x7
  int64_t v364; // x1
  PartyOrganizationUtility_o *p_RP_SPNAME_POINT; // x0
  int64_t v366; // x2
  int32_t v367; // w3
  System_String_o *v368; // x4
  BattleSetupInfo_o *v369; // x5
  FollowerInfo_o *v370; // x6
  PartyListViewItem_o *v371; // x7
  QuestBoardListViewItemDraw_c *v372; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v373; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v374; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v375; // x8
  int64_t v376; // x1
  int64_t v377; // x2
  int32_t v378; // w3
  System_String_o *v379; // x4
  BattleSetupInfo_o *v380; // x5
  FollowerInfo_o *v381; // x6
  PartyListViewItem_o *v382; // x7
  int64_t v383; // x1
  PartyOrganizationUtility_o *p_QUEST_LOSE_NO_SPEND_SPRITE; // x0
  int64_t v385; // x2
  int32_t v386; // w3
  System_String_o *v387; // x4
  BattleSetupInfo_o *v388; // x5
  FollowerInfo_o *v389; // x6
  PartyListViewItem_o *v390; // x7
  int64_t v391; // x1
  PartyOrganizationUtility_o *p_QUEST_RETREAT_NO_SPEND_SPRITE; // x0
  int64_t v393; // x2
  int32_t v394; // w3
  System_String_o *v395; // x4
  BattleSetupInfo_o *v396; // x5
  FollowerInfo_o *v397; // x6
  PartyListViewItem_o *v398; // x7
  int64_t v399; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED; // x0
  int64_t v401; // x2
  int32_t v402; // w3
  System_String_o *v403; // x4
  BattleSetupInfo_o *v404; // x5
  FollowerInfo_o *v405; // x6
  PartyListViewItem_o *v406; // x7
  int64_t v407; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_FORMAT; // x0
  int64_t v409; // x2
  int32_t v410; // w3
  System_String_o *v411; // x4
  BattleSetupInfo_o *v412; // x5
  FollowerInfo_o *v413; // x6
  PartyListViewItem_o *v414; // x7
  int64_t v415; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  int64_t v417; // x2
  int32_t v418; // w3
  System_String_o *v419; // x4
  BattleSetupInfo_o *v420; // x5
  FollowerInfo_o *v421; // x6
  PartyListViewItem_o *v422; // x7
  int64_t v423; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  int64_t v425; // x2
  int32_t v426; // w3
  System_String_o *v427; // x4
  BattleSetupInfo_o *v428; // x5
  FollowerInfo_o *v429; // x6
  PartyListViewItem_o *v430; // x7
  int64_t v431; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  int64_t v433; // x2
  int32_t v434; // w3
  System_String_o *v435; // x4
  BattleSetupInfo_o *v436; // x5
  FollowerInfo_o *v437; // x6
  PartyListViewItem_o *v438; // x7
  int64_t v439; // x1
  PartyOrganizationUtility_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  int64_t v441; // x2
  int32_t v442; // w3
  System_String_o *v443; // x4
  BattleSetupInfo_o *v444; // x5
  FollowerInfo_o *v445; // x6
  PartyListViewItem_o *v446; // x7
  int64_t v447; // x2
  int32_t v448; // w3
  System_String_o *v449; // x4
  BattleSetupInfo_o *v450; // x5
  FollowerInfo_o *v451; // x6
  PartyListViewItem_o *v452; // x7
  int64_t v453; // x19
  int64_t v454; // x1
  int64_t v455; // x2
  int32_t v456; // w3
  System_String_o *v457; // x4
  BattleSetupInfo_o *v458; // x5
  FollowerInfo_o *v459; // x6
  PartyListViewItem_o *v460; // x7
  int64_t v461; // x1
  int64_t v462; // x2
  int32_t v463; // w3
  System_String_o *v464; // x4
  BattleSetupInfo_o *v465; // x5
  FollowerInfo_o *v466; // x6
  PartyListViewItem_o *v467; // x7
  int64_t v468; // x1
  int64_t v469; // x2
  int32_t v470; // w3
  System_String_o *v471; // x4
  BattleSetupInfo_o *v472; // x5
  FollowerInfo_o *v473; // x6
  PartyListViewItem_o *v474; // x7
  int64_t v475; // x1
  int64_t v476; // x2
  int32_t v477; // w3
  System_String_o *v478; // x4
  BattleSetupInfo_o *v479; // x5
  FollowerInfo_o *v480; // x6
  PartyListViewItem_o *v481; // x7
  int64_t v482; // x1
  int64_t v483; // x2
  int32_t v484; // w3
  System_String_o *v485; // x4
  BattleSetupInfo_o *v486; // x5
  FollowerInfo_o *v487; // x6
  PartyListViewItem_o *v488; // x7
  void *v489; // x1
  int64_t v490; // x2
  int32_t v491; // w3
  System_String_o *v492; // x4
  BattleSetupInfo_o *v493; // x5
  FollowerInfo_o *v494; // x6
  PartyListViewItem_o *v495; // x7
  int64_t v496; // x1
  PartyOrganizationUtility_o *p_msQBoardL1Names; // x0
  int64_t v498; // x2
  int32_t v499; // w3
  System_String_o *v500; // x4
  BattleSetupInfo_o *v501; // x5
  FollowerInfo_o *v502; // x6
  PartyListViewItem_o *v503; // x7
  int64_t v504; // x1
  PartyOrganizationUtility_o *p_msQBoardL2Name_Story; // x0
  int64_t v506; // x2
  int32_t v507; // w3
  System_String_o *v508; // x4
  BattleSetupInfo_o *v509; // x5
  FollowerInfo_o *v510; // x6
  PartyListViewItem_o *v511; // x7
  int64_t v512; // x1
  PartyOrganizationUtility_o *p_msQBoardL2Name_Hero; // x0
  int64_t v514; // x2
  int32_t v515; // w3
  System_String_o *v516; // x4
  BattleSetupInfo_o *v517; // x5
  FollowerInfo_o *v518; // x6
  PartyListViewItem_o *v519; // x7
  int64_t v520; // x2
  int32_t v521; // w3
  System_String_o *v522; // x4
  BattleSetupInfo_o *v523; // x5
  FollowerInfo_o *v524; // x6
  PartyListViewItem_o *v525; // x7
  int64_t v526; // x19
  void *v527; // x1
  int64_t v528; // x2
  int32_t v529; // w3
  System_String_o *v530; // x4
  BattleSetupInfo_o *v531; // x5
  FollowerInfo_o *v532; // x6
  PartyListViewItem_o *v533; // x7
  int64_t v534; // x1
  int64_t v535; // x2
  int32_t v536; // w3
  System_String_o *v537; // x4
  BattleSetupInfo_o *v538; // x5
  FollowerInfo_o *v539; // x6
  PartyListViewItem_o *v540; // x7
  int64_t v541; // x1
  int64_t v542; // x2
  int32_t v543; // w3
  System_String_o *v544; // x4
  BattleSetupInfo_o *v545; // x5
  FollowerInfo_o *v546; // x6
  PartyListViewItem_o *v547; // x7
  int64_t v548; // x1
  int64_t v549; // x2
  int32_t v550; // w3
  System_String_o *v551; // x4
  BattleSetupInfo_o *v552; // x5
  FollowerInfo_o *v553; // x6
  PartyListViewItem_o *v554; // x7
  void *v555; // x1
  int64_t v556; // x2
  int32_t v557; // w3
  System_String_o *v558; // x4
  BattleSetupInfo_o *v559; // x5
  FollowerInfo_o *v560; // x6
  PartyListViewItem_o *v561; // x7
  int64_t v562; // x1
  int64_t v563; // x2
  int32_t v564; // w3
  System_String_o *v565; // x4
  BattleSetupInfo_o *v566; // x5
  FollowerInfo_o *v567; // x6
  PartyListViewItem_o *v568; // x7
  int64_t v569; // x1
  PartyOrganizationUtility_o *p_msQBoardL3Names; // x0
  int64_t v571; // x2
  int32_t v572; // w3
  System_String_o *v573; // x4
  BattleSetupInfo_o *v574; // x5
  FollowerInfo_o *v575; // x6
  PartyListViewItem_o *v576; // x7
  int64_t v577; // x2
  int32_t v578; // w3
  System_String_o *v579; // x4
  BattleSetupInfo_o *v580; // x5
  FollowerInfo_o *v581; // x6
  PartyListViewItem_o *v582; // x7
  int64_t v583; // x19
  void *v584; // x1
  int64_t v585; // x2
  int32_t v586; // w3
  System_String_o *v587; // x4
  BattleSetupInfo_o *v588; // x5
  FollowerInfo_o *v589; // x6
  PartyListViewItem_o *v590; // x7
  void *v591; // x1
  int64_t v592; // x2
  int32_t v593; // w3
  System_String_o *v594; // x4
  BattleSetupInfo_o *v595; // x5
  FollowerInfo_o *v596; // x6
  PartyListViewItem_o *v597; // x7
  int64_t v598; // x1
  int64_t v599; // x2
  int32_t v600; // w3
  System_String_o *v601; // x4
  BattleSetupInfo_o *v602; // x5
  FollowerInfo_o *v603; // x6
  PartyListViewItem_o *v604; // x7
  void *v605; // x1
  int64_t v606; // x2
  int32_t v607; // w3
  System_String_o *v608; // x4
  BattleSetupInfo_o *v609; // x5
  FollowerInfo_o *v610; // x6
  PartyListViewItem_o *v611; // x7
  void *v612; // x1
  int64_t v613; // x2
  int32_t v614; // w3
  System_String_o *v615; // x4
  BattleSetupInfo_o *v616; // x5
  FollowerInfo_o *v617; // x6
  PartyListViewItem_o *v618; // x7
  int64_t v619; // x1
  int64_t v620; // x2
  int32_t v621; // w3
  System_String_o *v622; // x4
  BattleSetupInfo_o *v623; // x5
  FollowerInfo_o *v624; // x6
  PartyListViewItem_o *v625; // x7
  void *v626; // x1
  PartyOrganizationUtility_o *p_msLabelMainSprNames; // x0
  int64_t v628; // x2
  int32_t v629; // w3
  System_String_o *v630; // x4
  BattleSetupInfo_o *v631; // x5
  FollowerInfo_o *v632; // x6
  PartyListViewItem_o *v633; // x7
  int64_t v634; // x2
  int32_t v635; // w3
  System_String_o *v636; // x4
  BattleSetupInfo_o *v637; // x5
  FollowerInfo_o *v638; // x6
  PartyListViewItem_o *v639; // x7
  int64_t v640; // x19
  void *v641; // x1
  int64_t v642; // x2
  int32_t v643; // w3
  System_String_o *v644; // x4
  BattleSetupInfo_o *v645; // x5
  FollowerInfo_o *v646; // x6
  PartyListViewItem_o *v647; // x7
  int64_t v648; // x1
  int64_t v649; // x2
  int32_t v650; // w3
  System_String_o *v651; // x4
  BattleSetupInfo_o *v652; // x5
  FollowerInfo_o *v653; // x6
  PartyListViewItem_o *v654; // x7
  int64_t v655; // x1
  int64_t v656; // x2
  int32_t v657; // w3
  System_String_o *v658; // x4
  BattleSetupInfo_o *v659; // x5
  FollowerInfo_o *v660; // x6
  PartyListViewItem_o *v661; // x7
  int64_t v662; // x1
  int64_t v663; // x2
  int32_t v664; // w3
  System_String_o *v665; // x4
  BattleSetupInfo_o *v666; // x5
  FollowerInfo_o *v667; // x6
  PartyListViewItem_o *v668; // x7
  void *v669; // x1
  int64_t v670; // x2
  int32_t v671; // w3
  System_String_o *v672; // x4
  BattleSetupInfo_o *v673; // x5
  FollowerInfo_o *v674; // x6
  PartyListViewItem_o *v675; // x7
  int64_t v676; // x1
  int64_t v677; // x2
  int32_t v678; // w3
  System_String_o *v679; // x4
  BattleSetupInfo_o *v680; // x5
  FollowerInfo_o *v681; // x6
  PartyListViewItem_o *v682; // x7
  void *v683; // x1
  int64_t v684; // x2
  int32_t v685; // w3
  System_String_o *v686; // x4
  BattleSetupInfo_o *v687; // x5
  FollowerInfo_o *v688; // x6
  PartyListViewItem_o *v689; // x7
  int64_t v690; // x1
  PartyOrganizationUtility_o *p_QuestBoardApSpNames; // x0
  int64_t v692; // x2
  int32_t v693; // w3
  System_String_o *v694; // x4
  BattleSetupInfo_o *v695; // x5
  FollowerInfo_o *v696; // x6
  PartyListViewItem_o *v697; // x7
  int64_t v698; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_ArrowOff; // x0
  int64_t v700; // x2
  int32_t v701; // w3
  System_String_o *v702; // x4
  BattleSetupInfo_o *v703; // x5
  FollowerInfo_o *v704; // x6
  PartyListViewItem_o *v705; // x7
  int64_t v706; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_ArrowOn; // x0
  int64_t v708; // x2
  int32_t v709; // w3
  System_String_o *v710; // x4
  BattleSetupInfo_o *v711; // x5
  FollowerInfo_o *v712; // x6
  PartyListViewItem_o *v713; // x7
  int64_t v714; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_ExArrowOff; // x0
  int64_t v716; // x2
  int32_t v717; // w3
  System_String_o *v718; // x4
  BattleSetupInfo_o *v719; // x5
  FollowerInfo_o *v720; // x6
  PartyListViewItem_o *v721; // x7
  int64_t v722; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_ExArrowOn; // x0
  int64_t v724; // x2
  int32_t v725; // w3
  System_String_o *v726; // x4
  BattleSetupInfo_o *v727; // x5
  FollowerInfo_o *v728; // x6
  PartyListViewItem_o *v729; // x7
  int64_t v730; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_LoopOff; // x0
  int64_t v732; // x2
  int32_t v733; // w3
  System_String_o *v734; // x4
  BattleSetupInfo_o *v735; // x5
  FollowerInfo_o *v736; // x6
  PartyListViewItem_o *v737; // x7
  int64_t v738; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_LoopOn; // x0
  int64_t v740; // x2
  int32_t v741; // w3
  System_String_o *v742; // x4
  BattleSetupInfo_o *v743; // x5
  FollowerInfo_o *v744; // x6
  PartyListViewItem_o *v745; // x7
  int64_t v746; // x1
  PartyOrganizationUtility_o *p_msPhaseSprName_LoopFirstOff; // x0
  int64_t v748; // x2
  int32_t v749; // w3
  System_String_o *v750; // x4
  BattleSetupInfo_o *v751; // x5
  FollowerInfo_o *v752; // x6
  PartyListViewItem_o *v753; // x7
  int64_t v754; // x1
  PartyOrganizationUtility_o *p_CHAPTER_SP_BASE_NAME; // x0
  int64_t v756; // x2
  int32_t v757; // w3
  System_String_o *v758; // x4
  BattleSetupInfo_o *v759; // x5
  FollowerInfo_o *v760; // x6
  PartyListViewItem_o *v761; // x7
  int64_t v762; // x1
  PartyOrganizationUtility_o *p_CHAPTER_SP_UNIT_NAME; // x0
  int64_t v764; // x2
  int32_t v765; // w3
  System_String_o *v766; // x4
  BattleSetupInfo_o *v767; // x5
  FollowerInfo_o *v768; // x6
  PartyListViewItem_o *v769; // x7
  int64_t v770; // x1
  PartyOrganizationUtility_o *p_PRE_BATTLE_ORGANIZATION; // x0
  int64_t v772; // x2
  int32_t v773; // w3
  System_String_o *v774; // x4
  BattleSetupInfo_o *v775; // x5
  FollowerInfo_o *v776; // x6
  PartyListViewItem_o *v777; // x7

  if ( (byte_4C1ED24 & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v1);
    sub_1C3B764(&string___TypeInfo, v8);
    sub_1C3B764(&StringLiteral_23169/*"startFade2"*/, v9);
    sub_1C3B764(&StringLiteral_20573/*"ja"*/, v10);
    sub_1C3B764(&StringLiteral_20809/*"listframes5_bg"*/, v11);
    sub_1C3B764(&StringLiteral_23180/*"starting capture"*/, v12);
    sub_1C3B764(&StringLiteral_20882/*"low-limit"*/, v13);
    sub_1C3B764(&StringLiteral_20764/*"lightsteelblue"*/, v14);
    sub_1C3B764(&StringLiteral_20831/*"localEP"*/, v15);
    sub_1C3B764(&StringLiteral_23191/*"statusCode"*/, v16);
    sub_1C3B764(&StringLiteral_23177/*"startat"*/, v17);
    sub_1C3B764(&StringLiteral_23189/*"static"*/, v18);
    sub_1C3B764(&StringLiteral_20835/*"localPosition.y"*/, v19);
    sub_1C3B764(&StringLiteral_20814/*"listframes{0}_txt_costume"*/, v20);
    sub_1C3B764(&StringLiteral_20819/*"listframes{0}_txt_point"*/, v21);
    sub_1C3B764(&StringLiteral_18149/*"dd"*/, v22);
    sub_1C3B764(&StringLiteral_20833/*"localPosition"*/, v23);
    sub_1C3B764(&StringLiteral_20820/*"listframes{0}_txt_quest"*/, v24);
    sub_1C3B764(&StringLiteral_20830/*"local-name"*/, v25);
    sub_1C3B764(&StringLiteral_20810/*"listframes6_bg"*/, v26);
    sub_1C3B764(&StringLiteral_20812/*"listframes{0}"*/, v27);
    sub_1C3B764(&StringLiteral_19671/*"http://www.w3.org/2001/04/xmldsig-more#hmac-sha256"*/, v28);
    sub_1C3B764(&StringLiteral_23178/*"starting Accept()"*/, v29);
    sub_1C3B764(&StringLiteral_20837/*"localRotation.w"*/, v30);
    sub_1C3B764(&StringLiteral_23192/*"statusDescription"*/, v31);
    sub_1C3B764(&StringLiteral_20828/*"load_mark_"*/, v32);
    sub_1C3B764(&StringLiteral_23183/*"starts-with"*/, v33);
    sub_1C3B764(&StringLiteral_20829/*"loadingbgm"*/, v34);
    sub_1C3B764(&StringLiteral_23244/*"stretch-to-fill | scale-and-crop | scale-to-fit"*/, v35);
    sub_1C3B764(&StringLiteral_23241/*"stretch"*/, v36);
    sub_1C3B764(&StringLiteral_23182/*"startingonly_bg"*/, v37);
    sub_1C3B764(&StringLiteral_20827/*"load_mark"*/, v38);
    sub_1C3B764(&StringLiteral_20585/*"java.lang.Double"*/, v39);
    sub_1C3B764(&StringLiteral_23168/*"startFade"*/, v40);
    sub_1C3B764(&StringLiteral_23190/*"status"*/, v41);
    sub_1C3B764(&StringLiteral_23242/*"stretch-mode"*/, v42);
    sub_1C3B764(&StringLiteral_20825/*"loadEvents"*/, v43);
    sub_1C3B764(&StringLiteral_23243/*"stretch-to-fill"*/, v44);
    sub_1C3B764(&StringLiteral_20823/*"load"*/, v45);
    sub_1C3B764(&StringLiteral_23170/*"startIndex"*/, v46);
    sub_1C3B764(&StringLiteral_6398/*"FREE_GACHA_RESET_AT"*/, v47);
    sub_1C3B764(&StringLiteral_20824/*"load2"*/, v48);
    sub_1C3B764(&StringLiteral_20836/*"localPosition.z"*/, v49);
    sub_1C3B764(&StringLiteral_20839/*"localRotation.y"*/, v50);
    sub_1C3B764(&StringLiteral_20838/*"localRotation.x"*/, v51);
    sub_1C3B764(&StringLiteral_20842/*"localScale.y"*/, v52);
    sub_1C3B764(&StringLiteral_23186/*"state.Fsm == null"*/, v53);
    sub_1C3B764(&StringLiteral_20834/*"localPosition.x"*/, v54);
    sub_1C3B764(&StringLiteral_20821/*"lo"*/, v55);
    sub_1C3B764(&StringLiteral_20816/*"listframes{0}_txt_item"*/, v56);
    sub_1C3B764(&StringLiteral_23181/*"starting identity capture"*/, v57);
    sub_1C3B764(&StringLiteral_20841/*"localScale.x"*/, v58);
    sub_1C3B764(&StringLiteral_20826/*"loadFactor"*/, v59);
    sub_1C3B764(&StringLiteral_20817/*"listframes{0}_txt_mysticcode"*/, v60);
    sub_1C3B764(&StringLiteral_23179/*"starting Connect()"*/, v61);
    sub_1C3B764(&StringLiteral_20881/*"lotteryShopId"*/, v62);
    sub_1C3B764(&StringLiteral_1/*""*/, v63);
    sub_1C3B764(&StringLiteral_20815/*"listframes{0}_txt_eventbonus"*/, v64);
    sub_1C3B764(&StringLiteral_20808/*"listframes5"*/, v65);
    sub_1C3B764(&StringLiteral_20818/*"listframes{0}_txt_plain"*/, v66);
    sub_1C3B764(&StringLiteral_23184/*"state"*/, v67);
    sub_1C3B764(&StringLiteral_20832/*"localName"*/, v68);
    sub_1C3B764(&StringLiteral_23212/*"stay_dog_{0}_action"*/, v69);
    sub_1C3B764(&StringLiteral_20584/*"java.lang.Class"*/, v70);
    sub_1C3B764(&StringLiteral_23176/*"startVoice"*/, v71);
    sub_1C3B764(&StringLiteral_20811/*"listframes_shadow"*/, v72);
    sub_1C3B764(&StringLiteral_23185/*"state = {0}"*/, v73);
    byte_4C1ED24 = 1;
  }
  v74 = QuestBoardListViewItemDraw_TypeInfo;
  static_fields = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->POS_Y_ITVL_AREA = xmmword_C0EAE0;
  *(_OWORD *)&static_fields->CLIP_W_AREA = xmmword_C0E1A0;
  static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  *(_OWORD *)&static_fields->PHASE_EXTRA_MAX = xmmword_C0EAF0;
  *(_OWORD *)&static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = xmmword_C0CF60;
  static_fields->CAMPAIGN_COST_COLOR.fields.a = 1.0;
  v74->static_fields->OVER_COST_COLOR = (struct UnityEngine_Color_o)xmmword_C0D1F0;
  v76 = v74->static_fields;
  *(_QWORD *)&v76->NEW_POS_AREA.fields.x = 0x41D80000C3420000LL;
  v76->NEW_POS_AREA.fields.z = 0.0;
  v77 = v74->static_fields;
  *(_QWORD *)&v77->NEW_POS_SHORTCUT.fields.x = 0x423C0000C3530000LL;
  v77->NEW_POS_SHORTCUT.fields.z = 0.0;
  v78 = v74->static_fields;
  *(_QWORD *)&v78->NEW_POS_QUEST.fields.x = 0x423C0000C3530000LL;
  v78->NEW_POS_QUEST.fields.z = 0.0;
  v79 = v74->static_fields;
  *(_QWORD *)&v79->NEW_POS_QUEST_NEXT.fields.x = 0x42640000C2D20000LL;
  v79->NEW_POS_QUEST_NEXT.fields.z = 0.0;
  v80 = v74->static_fields;
  *(_OWORD *)&v80->NEW_W_DEFAULT = xmmword_C0D110;
  *(_QWORD *)&v80->CLEAR_POS_AREA.fields.x = 0xC2500000431B0000LL;
  v80->CLEAR_POS_AREA.fields.z = 0.0;
  v81 = v74->static_fields;
  *(_QWORD *)&v81->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v81->CLEAR_POS_QUEST.fields.z = 0.0;
  v82 = v74->static_fields;
  *(_OWORD *)&v82->NEXT_POS_X_AREA_L = xmmword_C0CF70;
  v83 = StringLiteral_20585/*"java.lang.Double"*/;
  v82->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20585/*"java.lang.Double"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v82->NEXT_ICON_SPRITE_NAME, v83, v2, v3, v4, v5, v6, v7);
  v84 = StringLiteral_20584/*"java.lang.Class"*/;
  v85 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v85->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_20584/*"java.lang.Class"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v85->FREE_ICON_SPRITE_NAME, v84, v86, v87, v88, v89, v90, v91);
  v92 = QuestBoardListViewItemDraw_TypeInfo;
  v93 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v93->PREV_POS_QUEST_PREV.fields.x = 0x42300000C35C0000LL;
  v93->PREV_POS_QUEST_PREV.fields.z = 0.0;
  v94 = v92->static_fields;
  *(_QWORD *)&v94->PREV_POS_QUEST_PREV_NEXT.fields.x = 0x426C0000C2DC0000LL;
  v94->PREV_POS_QUEST_PREV_NEXT.fields.z = 0.0;
  v95 = v92->static_fields;
  *(_QWORD *)&v95->PREV_POS_QUEST_INTERRUPT.fields.x = 0x42300000C3520000LL;
  v95->PREV_POS_QUEST_INTERRUPT.fields.z = 0.0;
  v96 = v92->static_fields;
  *(_QWORD *)&v96->PREV_POS_QUEST_INTERRUPT_NEXT.fields.x = 0x426C0000C2C80000LL;
  v96->PREV_POS_QUEST_INTERRUPT_NEXT.fields.z = 0.0;
  v97 = v92->static_fields;
  *(_QWORD *)&v97->LINE_ST_POS_AREA.fields.x = 0xC0A00000C3570000LL;
  v97->LINE_ST_POS_AREA.fields.z = 0.0;
  v98 = v92->static_fields;
  *(_QWORD *)&v98->LINE_ST_POS_SHORTCUT.fields.x = 0xC0A00000C3700000LL;
  v98->LINE_ST_POS_SHORTCUT.fields.z = 0.0;
  v99 = v92->static_fields;
  *(_QWORD *)&v99->COST_OBJ_POS.fields.x = 0xC1C00000C2F00000LL;
  v99->COST_OBJ_POS.fields.z = 0.0;
  v100 = v92->static_fields;
  *(_QWORD *)&v100->COST_OBJ_POS_WAR_BOARD.fields.x = 0xC1E00000C2F20000LL;
  v100->COST_OBJ_POS_WAR_BOARD.fields.z = 0.0;
  v101 = v92->static_fields;
  *(_OWORD *)&v101->COST_BG_WIDTH_SINGLE = xmmword_C0D300;
  v101->COST_BG_WIDTH_DOUBLE_QP = 186;
  v102 = StringLiteral_23191/*"statusCode"*/;
  v101->COST_BG_ITEM = (struct System_String_o *)StringLiteral_23191/*"statusCode"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v101->COST_BG_ITEM, v102, v103, v104, v105, v106, v107, v108);
  v109 = StringLiteral_23192/*"statusDescription"*/;
  p_COST_BG_QP = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (PartyOrganizationUtility_c *)StringLiteral_23192/*"statusDescription"*/;
  sub_1C3B708(p_COST_BG_QP, v109, v111, v112, v113, v114, v115, v116);
  v117 = QuestBoardListViewItemDraw_TypeInfo;
  v118 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v118->COST_1_ICON_AP_POS.fields.x = 1098907648LL;
  v118->COST_1_ICON_AP_POS.fields.z = 0.0;
  v119 = v117->static_fields;
  *(_QWORD *)&v119->COST_1_ICON_AP_POS_WAR_BOARD.fields.x = 1099956224LL;
  v119->COST_1_ICON_AP_POS_WAR_BOARD.fields.z = 0.0;
  v120 = v117->static_fields;
  *(_QWORD *)&v120->COST_1_LABEL_AP_POS.fields.x = 1103888384LL;
  v120->COST_1_LABEL_AP_POS.fields.z = 0.0;
  v121 = v117->static_fields;
  *(_QWORD *)&v121->COST_1_LABEL_AP_POS_WAR_BOARD.fields.x = 1104936960LL;
  v121->COST_1_LABEL_AP_POS_WAR_BOARD.fields.z = 0.0;
  v122 = v117->static_fields;
  *(_OWORD *)&v122->COST_2_ICON_NORMAL_POSITION_X = xmmword_C0E030;
  *(_OWORD *)&v122->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_C0E600;
  *(_OWORD *)&v122->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = xmmword_C0E550;
  v122->COST_LABEL_WIDTH_FOR_THREE_ITEM = 30.4;
  *(_QWORD *)&v122->COST_LABEL_DEFAULT_SPACING = 0x800000009LL;
  *(_QWORD *)&v122->SHOHI_SP_POS.fields.x = 0x41C0000041800000LL;
  v122->SHOHI_SP_POS.fields.z = 0.0;
  v123 = v117->static_fields;
  *(_QWORD *)&v123->SHOHI_SP_POS_WAR_BOARD.fields.x = 0x41C8000041900000LL;
  v123->SHOHI_SP_POS_WAR_BOARD.fields.z = 0.0;
  v124 = StringLiteral_20814/*"listframes{0}_txt_costume"*/;
  p_SHOHI_SP_NAME = (PartyOrganizationUtility_o *)&v117->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20814/*"listframes{0}_txt_costume"*/;
  sub_1C3B708(p_SHOHI_SP_NAME, v124, v126, v127, v128, v129, v130, v131);
  v132 = StringLiteral_20815/*"listframes{0}_txt_eventbonus"*/;
  p_SHOHI_SP_NAME_WAR_BOARD = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (PartyOrganizationUtility_c *)StringLiteral_20815/*"listframes{0}_txt_eventbonus"*/;
  sub_1C3B708(p_SHOHI_SP_NAME_WAR_BOARD, v132, v134, v135, v136, v137, v138, v139);
  v147 = QuestBoardListViewItemDraw_TypeInfo;
  v148 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&v148->QUEST_BOARD_PHASE_INTERVAL = xmmword_C0DD50;
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v140);
    v147 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4C1C511 = 1;
    v148 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  }
  v149 = UnityEngine_Vector3_TypeInfo;
  v150 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v150->zeroVector.fields.z;
  *(_QWORD *)&v148->CHALLENGE_OBJ_POS_SINGLE.fields.x = *(_QWORD *)&v150->zeroVector.fields.x;
  v148->CHALLENGE_OBJ_POS_SINGLE.fields.z = z;
  v152 = v147->static_fields;
  *(_QWORD *)&v152->CHALLENGE_OBJ_POS_DOUBLE.fields.x = 1115160576LL;
  v152->CHALLENGE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v153 = v149->static_fields;
  v154 = v147->static_fields;
  v155 = v153->zeroVector.fields.z;
  *(_QWORD *)&v154->PHASE_OBJ_POS_SINGLE.fields.x = *(_QWORD *)&v153->zeroVector.fields.x;
  v154->PHASE_OBJ_POS_SINGLE.fields.z = v155;
  v156 = v147->static_fields;
  *(_QWORD *)&v156->PHASE_OBJ_POS_DOUBLE.fields.x = 1116995584LL;
  v156->PHASE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v157 = v147->static_fields;
  *(_QWORD *)&v157->PHASE_OBJ_POS_DOUBLE_QP.fields.x = 1117782016LL;
  v157->PHASE_OBJ_POS_DOUBLE_QP.fields.z = 0.0;
  v158 = v147->static_fields;
  *(_QWORD *)&v158->PHASE_OBJ_POS_TRIPLE_ITEM.fields.x = 1118699520LL;
  v158->PHASE_OBJ_POS_TRIPLE_ITEM.fields.z = 0.0;
  v159 = v147->static_fields;
  *(_QWORD *)&v159->PHASE_STR_POS_SINGLE.fields.x = 1116602368LL;
  v159->PHASE_STR_POS_SINGLE.fields.z = 0.0;
  v160 = v147->static_fields;
  *(_QWORD *)&v160->PHASE_STR_POS_DOUBLE.fields.x = 1113063424LL;
  v160->PHASE_STR_POS_DOUBLE.fields.z = 0.0;
  v161 = v147->static_fields;
  *(_QWORD *)&v161->PHASE_STR_POS_DOUBLE_QP.fields.x = 1111228416LL;
  v161->PHASE_STR_POS_DOUBLE_QP.fields.z = 0.0;
  v162 = v147->static_fields;
  *(_QWORD *)&v162->PHASE_STR_POS_TRIPLE_ITEM.fields.x = 1109393408LL;
  v162->PHASE_STR_POS_TRIPLE_ITEM.fields.z = 0.0;
  if ( !byte_4C1C516 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v140);
    v149 = UnityEngine_Vector3_TypeInfo;
    v147 = QuestBoardListViewItemDraw_TypeInfo;
    byte_4C1C516 = 1;
  }
  v163 = v149->static_fields;
  v164 = v147->static_fields;
  v165 = v163->oneVector.fields.z;
  *(_QWORD *)&v164->PHASE_STR_SCL_SINGLE.fields.x = *(_QWORD *)&v163->oneVector.fields.x;
  v164->PHASE_STR_SCL_SINGLE.fields.z = v165;
  v166 = v147->static_fields;
  *(_QWORD *)&v166->PHASE_STR_SCL_DOUBLE.fields.x = 0x3F8000003F4CCCCDLL;
  v166->PHASE_STR_SCL_DOUBLE.fields.z = 1.0;
  v167 = v147->static_fields;
  *(_QWORD *)&v167->PHASE_STR_SCL_DOUBLE_QP.fields.x = 0x3F8000003F4CCCCDLL;
  v167->PHASE_STR_SCL_DOUBLE_QP.fields.z = 1.0;
  v168 = v147->static_fields;
  *(_QWORD *)&v168->PHASE_STR_SCL_TRIPLE_ITEM.fields.x = 0x3F8000003F333333LL;
  v168->PHASE_STR_SCL_TRIPLE_ITEM.fields.z = 1.0;
  v169 = v147->static_fields;
  v169->BOARD_MESSAGE_MAX_WITDH = 170;
  *(_QWORD *)&v169->BLACK_MARK_OBJ_POS.fields.x = 0x4284000000000000LL;
  v169->BLACK_MARK_OBJ_POS.fields.z = 0.0;
  v170 = v147->static_fields;
  *(_QWORD *)&v170->BLACK_MARK_OBJ_POS_CENTER.fields.x = 0LL;
  v170->BLACK_MARK_OBJ_POS_CENTER.fields.z = 0.0;
  v171 = v147->static_fields;
  *(_QWORD *)&v171->WHITE_MARK_OBJ_UNDER_POS.fields.x = 0xC284000000000000LL;
  v171->WHITE_MARK_OBJ_UNDER_POS.fields.z = 0.0;
  v172 = StringLiteral_19671/*"http://www.w3.org/2001/04/xmldsig-more#hmac-sha256"*/;
  p_EVENT_WAR_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&v147->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_19671/*"http://www.w3.org/2001/04/xmldsig-more#hmac-sha256"*/;
  sub_1C3B708(p_EVENT_WAR_SPNAME_PREFIX, v172, v141, v142, v143, v144, v145, v146);
  v174 = StringLiteral_18149/*"dd"*/;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_18149/*"dd"*/;
  sub_1C3B708(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v174, v176, v177, v178, v179, v180, v181);
  v182 = StringLiteral_23168/*"startFade"*/;
  p_QUEST_BOARD_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23168/*"startFade"*/;
  sub_1C3B708(p_QUEST_BOARD_SPNAME_PREFIX, v182, v184, v185, v186, v187, v188, v189);
  v190 = StringLiteral_20821/*"lo"*/;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_20821/*"lo"*/;
  sub_1C3B708(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v190, v192, v193, v194, v195, v196, v197);
  v198 = StringLiteral_23169/*"startFade2"*/;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23169/*"startFade2"*/;
  sub_1C3B708(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v198, v200, v201, v202, v203, v204, v205);
  v206 = StringLiteral_23170/*"startIndex"*/;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23170/*"startIndex"*/;
  sub_1C3B708(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v206, v208, v209, v210, v211, v212, v213);
  v214 = StringLiteral_23190/*"status"*/;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23190/*"status"*/;
  sub_1C3B708(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v214, v216, v217, v218, v219, v220, v221);
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v223 = StringLiteral_23176/*"startVoice"*/;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23176/*"startVoice"*/;
  sub_1C3B708(p_QUEST_BOARD_AP_SPNAME_PREFIX, v223, v224, v225, v226, v227, v228, v229);
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  v231 = StringLiteral_20823/*"load"*/;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20823/*"load"*/;
  sub_1C3B708(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v231, v232, v233, v234, v235, v236, v237);
  p_QUEST_BOARD_PREV_ICON_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  v239 = StringLiteral_20808/*"listframes5"*/;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20808/*"listframes5"*/;
  sub_1C3B708(p_QUEST_BOARD_PREV_ICON_NAME, v239, v240, v241, v242, v243, v244, v245);
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  v247 = StringLiteral_20829/*"loadingbgm"*/;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20829/*"loadingbgm"*/;
  sub_1C3B708(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v247, v248, v249, v250, v251, v252, v253);
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  v255 = StringLiteral_6398/*"FREE_GACHA_RESET_AT"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (PartyOrganizationUtility_c *)StringLiteral_6398/*"FREE_GACHA_RESET_AT"*/;
  sub_1C3B708(p_QUEST_BOARD_ICON_TEXTURE_PATH, v255, v256, v257, v258, v259, v260, v261);
  v262 = StringLiteral_23169/*"startFade2"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_23169/*"startFade2"*/;
  sub_1C3B708(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v262, v264, v265, v266, v267, v268, v269);
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
  v271 = StringLiteral_20573/*"ja"*/;
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX->klass = (PartyOrganizationUtility_c *)StringLiteral_20573/*"ja"*/;
  sub_1C3B708(p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v271, v272, v273, v274, v275, v276, v277);
  v278 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v278->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 0x300000004ELL;
  *(_QWORD *)&v278->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 0x4000000000000013LL;
  v279 = StringLiteral_20882/*"low-limit"*/;
  v278->BANNER_POINT_SPNAME_ON = (struct System_String_o *)StringLiteral_20882/*"low-limit"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v278->BANNER_POINT_SPNAME_ON, v279, v280, v281, v282, v283, v284, v285);
  p_BANNER_POINT_SPNAME_OFF = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  v287 = StringLiteral_20881/*"lotteryShopId"*/;
  p_BANNER_POINT_SPNAME_OFF->klass = (PartyOrganizationUtility_c *)StringLiteral_20881/*"lotteryShopId"*/;
  sub_1C3B708(p_BANNER_POINT_SPNAME_OFF, v287, v288, v289, v290, v291, v292, v293);
  v294 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v294->SHORTCUT_FACE_MASK_SP_W = 0x7C00000088LL;
  v295 = StringLiteral_20833/*"localPosition"*/;
  v294->SHORTCUT_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20833/*"localPosition"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v294->SHORTCUT_FACE_MASK_SPNAME, v295, v296, v297, v298, v299, v300, v301);
  p_QUEST_STORY_FACE_MASK_SPNAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  v303 = StringLiteral_20835/*"localPosition.y"*/;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20835/*"localPosition.y"*/;
  sub_1C3B708(p_QUEST_STORY_FACE_MASK_SPNAME, v303, v304, v305, v306, v307, v308, v309);
  p_QUEST_MAIN_FACE_MASK_SPNAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  v311 = StringLiteral_20836/*"localPosition.z"*/;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20836/*"localPosition.z"*/;
  sub_1C3B708(p_QUEST_MAIN_FACE_MASK_SPNAME, v311, v312, v313, v314, v315, v316, v317);
  p_QUEST_EVENT_FACE_MASK_SPNAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  v319 = StringLiteral_20837/*"localRotation.w"*/;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20837/*"localRotation.w"*/;
  sub_1C3B708(p_QUEST_EVENT_FACE_MASK_SPNAME, v319, v320, v321, v322, v323, v324, v325);
  v326 = sub_1C3B80C(string___TypeInfo, 2LL);
  if ( !v326 )
    goto LABEL_48;
  v334 = v326;
  if ( !*(_DWORD *)(v326 + 24) )
    goto LABEL_47;
  v335 = StringLiteral_23243/*"stretch-to-fill"*/;
  *(_QWORD *)(v326 + 32) = StringLiteral_23243/*"stretch-to-fill"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v326 + 32), v335, v328, v329, v330, v331, v332, v333);
  if ( *(_DWORD *)(v334 + 24) <= 1u )
    goto LABEL_47;
  v342 = StringLiteral_23242/*"stretch-mode"*/;
  *(_QWORD *)(v334 + 40) = StringLiteral_23242/*"stretch-mode"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v334 + 40), v342, v336, v337, v338, v339, v340, v341);
  p_RP_SPNAME_FRAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (PartyOrganizationUtility_c *)v334;
  sub_1C3B708(p_RP_SPNAME_FRAME, v334, v344, v345, v346, v347, v348, v349);
  v326 = sub_1C3B80C(string___TypeInfo, 2LL);
  if ( !v326 )
    goto LABEL_48;
  v356 = v326;
  if ( !*(_DWORD *)(v326 + 24) )
    goto LABEL_47;
  v357 = StringLiteral_23244/*"stretch-to-fill | scale-and-crop | scale-to-fit"*/;
  *(_QWORD *)(v326 + 32) = StringLiteral_23244/*"stretch-to-fill | scale-and-crop | scale-to-fit"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v326 + 32), v357, v350, v351, v352, v353, v354, v355);
  if ( *(_DWORD *)(v356 + 24) <= 1u )
    goto LABEL_47;
  v364 = StringLiteral_23241/*"stretch"*/;
  *(_QWORD *)(v356 + 40) = StringLiteral_23241/*"stretch"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v356 + 40), v364, v358, v359, v360, v361, v362, v363);
  p_RP_SPNAME_POINT = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (PartyOrganizationUtility_c *)v356;
  sub_1C3B708(p_RP_SPNAME_POINT, v356, v366, v367, v368, v369, v370, v371);
  v372 = QuestBoardListViewItemDraw_TypeInfo;
  v373 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v373->RESTRICTION_FONT_SPACING_MIN = -1;
  *(_QWORD *)&v373->RESTRICTION_DEFAULT_FONT_SIZE = 18LL;
  *(_QWORD *)&v373->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v373->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v374 = v372->static_fields;
  *(_QWORD *)&v374->RESTRICTION_FONT_SIZE_ALLOUT = 0x700000000ELL;
  *(_QWORD *)&v374->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v374->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v375 = v372->static_fields;
  *(_QWORD *)&v375->BANNER_ENTORY_EFFECT_DURATION = 0x41F000003F000000LL;
  v376 = StringLiteral_20812/*"listframes{0}"*/;
  v375->QUEST_BOARD_PREV_PAUSE_ICON_NAME = (struct System_String_o *)StringLiteral_20812/*"listframes{0}"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v375->QUEST_BOARD_PREV_PAUSE_ICON_NAME,
    v376,
    v377,
    v378,
    v379,
    v380,
    v381,
    v382);
  v383 = StringLiteral_20809/*"listframes5_bg"*/;
  p_QUEST_LOSE_NO_SPEND_SPRITE = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_LOSE_NO_SPEND_SPRITE;
  p_QUEST_LOSE_NO_SPEND_SPRITE->klass = (PartyOrganizationUtility_c *)StringLiteral_20809/*"listframes5_bg"*/;
  sub_1C3B708(p_QUEST_LOSE_NO_SPEND_SPRITE, v383, v385, v386, v387, v388, v389, v390);
  v391 = StringLiteral_20811/*"listframes_shadow"*/;
  p_QUEST_RETREAT_NO_SPEND_SPRITE = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_RETREAT_NO_SPEND_SPRITE;
  p_QUEST_RETREAT_NO_SPEND_SPRITE->klass = (PartyOrganizationUtility_c *)StringLiteral_20811/*"listframes_shadow"*/;
  sub_1C3B708(p_QUEST_RETREAT_NO_SPEND_SPRITE, v391, v393, v394, v395, v396, v397, v398);
  v399 = StringLiteral_23180/*"starting capture"*/;
  p_QBOARD_CAP_CLOSED = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (PartyOrganizationUtility_c *)StringLiteral_23180/*"starting capture"*/;
  sub_1C3B708(p_QBOARD_CAP_CLOSED, v399, v401, v402, v403, v404, v405, v406);
  v407 = StringLiteral_23185/*"state = {0}"*/;
  p_QBOARD_CAP_CLOSED_FORMAT = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
  p_QBOARD_CAP_CLOSED_FORMAT->klass = (PartyOrganizationUtility_c *)StringLiteral_23185/*"state = {0}"*/;
  sub_1C3B708(p_QBOARD_CAP_CLOSED_FORMAT, v407, v409, v410, v411, v412, v413, v414);
  v415 = StringLiteral_23184/*"state"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (PartyOrganizationUtility_c *)StringLiteral_23184/*"state"*/;
  sub_1C3B708(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v415, v417, v418, v419, v420, v421, v422);
  v423 = StringLiteral_23181/*"starting identity capture"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (PartyOrganizationUtility_c *)StringLiteral_23181/*"starting identity capture"*/;
  sub_1C3B708(p_QBOARD_CAP_CLOSED_SPECIAL, v423, v425, v426, v427, v428, v429, v430);
  v431 = StringLiteral_23182/*"startingonly_bg"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (PartyOrganizationUtility_c *)StringLiteral_23182/*"startingonly_bg"*/;
  sub_1C3B708(p_QBOARD_CAP_CLOSED_SPECIAL_2, v431, v433, v434, v435, v436, v437, v438);
  v439 = StringLiteral_23183/*"starts-with"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (PartyOrganizationUtility_c *)StringLiteral_23183/*"starts-with"*/;
  sub_1C3B708(p_QBOARD_CAP_CLOSED_SPECIAL_3, v439, v441, v442, v443, v444, v445, v446);
  v326 = sub_1C3B80C(string___TypeInfo, 7LL);
  if ( !v326 )
    goto LABEL_48;
  v453 = v326;
  if ( !*(_DWORD *)(v326 + 24) )
    goto LABEL_47;
  v454 = StringLiteral_20824/*"load2"*/;
  *(_QWORD *)(v326 + 32) = StringLiteral_20824/*"load2"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v326 + 32), v454, v447, v448, v449, v450, v451, v452);
  if ( *(_DWORD *)(v453 + 24) <= 1u )
    goto LABEL_47;
  v461 = StringLiteral_23186/*"state.Fsm == null"*/;
  *(_QWORD *)(v453 + 40) = StringLiteral_23186/*"state.Fsm == null"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v453 + 40), v461, v455, v456, v457, v458, v459, v460);
  if ( *(_DWORD *)(v453 + 24) <= 2u )
    goto LABEL_47;
  v468 = StringLiteral_18149/*"dd"*/;
  *(_QWORD *)(v453 + 48) = StringLiteral_18149/*"dd"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v453 + 48), v468, v462, v463, v464, v465, v466, v467);
  if ( *(_DWORD *)(v453 + 24) <= 3u )
    goto LABEL_47;
  v475 = StringLiteral_20831/*"localEP"*/;
  *(_QWORD *)(v453 + 56) = StringLiteral_20831/*"localEP"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v453 + 56), v475, v469, v470, v471, v472, v473, v474);
  if ( *(_DWORD *)(v453 + 24) <= 4u )
    goto LABEL_47;
  v482 = StringLiteral_20826/*"loadFactor"*/;
  *(_QWORD *)(v453 + 64) = StringLiteral_20826/*"loadFactor"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v453 + 64), v482, v476, v477, v478, v479, v480, v481);
  if ( *(_DWORD *)(v453 + 24) <= 5u )
    goto LABEL_47;
  v489 = StringLiteral_1/*""*/;
  *(_QWORD *)(v453 + 72) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v453 + 72), (int64_t)v489, v483, v484, v485, v486, v487, v488);
  if ( *(_DWORD *)(v453 + 24) <= 6u )
    goto LABEL_47;
  v496 = StringLiteral_23186/*"state.Fsm == null"*/;
  *(_QWORD *)(v453 + 80) = StringLiteral_23186/*"state.Fsm == null"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v453 + 80), v496, v490, v491, v492, v493, v494, v495);
  p_msQBoardL1Names = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (PartyOrganizationUtility_c *)v453;
  sub_1C3B708(p_msQBoardL1Names, v453, v498, v499, v500, v501, v502, v503);
  v504 = StringLiteral_20832/*"localName"*/;
  p_msQBoardL2Name_Story = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (PartyOrganizationUtility_c *)StringLiteral_20832/*"localName"*/;
  sub_1C3B708(p_msQBoardL2Name_Story, v504, v506, v507, v508, v509, v510, v511);
  v512 = StringLiteral_20827/*"load_mark"*/;
  p_msQBoardL2Name_Hero = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (PartyOrganizationUtility_c *)StringLiteral_20827/*"load_mark"*/;
  sub_1C3B708(p_msQBoardL2Name_Hero, v512, v514, v515, v516, v517, v518, v519);
  v326 = sub_1C3B80C(string___TypeInfo, 7LL);
  if ( !v326 )
    goto LABEL_48;
  v526 = v326;
  if ( !*(_DWORD *)(v326 + 24) )
    goto LABEL_47;
  v527 = StringLiteral_1/*""*/;
  *(_QWORD *)(v326 + 32) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v326 + 32), (int64_t)v527, v520, v521, v522, v523, v524, v525);
  if ( *(_DWORD *)(v526 + 24) <= 1u )
    goto LABEL_47;
  v534 = StringLiteral_20830/*"local-name"*/;
  *(_QWORD *)(v526 + 40) = StringLiteral_20830/*"local-name"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v526 + 40), v534, v528, v529, v530, v531, v532, v533);
  if ( *(_DWORD *)(v526 + 24) <= 2u )
    goto LABEL_47;
  v541 = StringLiteral_20825/*"loadEvents"*/;
  *(_QWORD *)(v526 + 48) = StringLiteral_20825/*"loadEvents"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v526 + 48), v541, v535, v536, v537, v538, v539, v540);
  if ( *(_DWORD *)(v526 + 24) <= 3u )
    goto LABEL_47;
  v548 = StringLiteral_20834/*"localPosition.x"*/;
  *(_QWORD *)(v526 + 56) = StringLiteral_20834/*"localPosition.x"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v526 + 56), v548, v542, v543, v544, v545, v546, v547);
  if ( *(_DWORD *)(v526 + 24) <= 4u )
    goto LABEL_47;
  v555 = StringLiteral_1/*""*/;
  *(_QWORD *)(v526 + 64) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v526 + 64), (int64_t)v555, v549, v550, v551, v552, v553, v554);
  if ( *(_DWORD *)(v526 + 24) <= 5u )
    goto LABEL_47;
  v562 = StringLiteral_20825/*"loadEvents"*/;
  *(_QWORD *)(v526 + 72) = StringLiteral_20825/*"loadEvents"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v526 + 72), v562, v556, v557, v558, v559, v560, v561);
  if ( *(_DWORD *)(v526 + 24) <= 6u )
    goto LABEL_47;
  v569 = StringLiteral_20828/*"load_mark_"*/;
  *(_QWORD *)(v526 + 80) = StringLiteral_20828/*"load_mark_"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v526 + 80), v569, v563, v564, v565, v566, v567, v568);
  p_msQBoardL3Names = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (PartyOrganizationUtility_c *)v526;
  sub_1C3B708(p_msQBoardL3Names, v526, v571, v572, v573, v574, v575, v576);
  v326 = sub_1C3B80C(string___TypeInfo, 7LL);
  if ( !v326 )
    goto LABEL_48;
  v583 = v326;
  if ( !*(_DWORD *)(v326 + 24) )
    goto LABEL_47;
  v584 = StringLiteral_1/*""*/;
  *(_QWORD *)(v326 + 32) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v326 + 32), (int64_t)v584, v577, v578, v579, v580, v581, v582);
  if ( *(_DWORD *)(v583 + 24) <= 1u )
    goto LABEL_47;
  v591 = StringLiteral_1/*""*/;
  *(_QWORD *)(v583 + 40) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v583 + 40), (int64_t)v591, v585, v586, v587, v588, v589, v590);
  if ( *(_DWORD *)(v583 + 24) <= 2u )
    goto LABEL_47;
  v598 = StringLiteral_20842/*"localScale.y"*/;
  *(_QWORD *)(v583 + 48) = StringLiteral_20842/*"localScale.y"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v583 + 48), v598, v592, v593, v594, v595, v596, v597);
  if ( *(_DWORD *)(v583 + 24) <= 3u )
    goto LABEL_47;
  v605 = StringLiteral_1/*""*/;
  *(_QWORD *)(v583 + 56) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v583 + 56), (int64_t)v605, v599, v600, v601, v602, v603, v604);
  if ( *(_DWORD *)(v583 + 24) <= 4u
    || (v612 = StringLiteral_1/*""*/,
        *(_QWORD *)(v583 + 64) = StringLiteral_1/*""*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v583 + 64), (int64_t)v612, v606, v607, v608, v609, v610, v611),
        *(_DWORD *)(v583 + 24) <= 5u)
    || (v619 = StringLiteral_20841/*"localScale.x"*/,
        *(_QWORD *)(v583 + 72) = StringLiteral_20841/*"localScale.x"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v583 + 72), v619, v613, v614, v615, v616, v617, v618),
        *(_DWORD *)(v583 + 24) <= 6u) )
  {
LABEL_47:
    sub_1C3B9C8(v326, v327);
  }
  v626 = StringLiteral_1/*""*/;
  *(_QWORD *)(v583 + 80) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v583 + 80), (int64_t)v626, v620, v621, v622, v623, v624, v625);
  p_msLabelMainSprNames = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (PartyOrganizationUtility_c *)v583;
  sub_1C3B708(p_msLabelMainSprNames, v583, v628, v629, v630, v631, v632, v633);
  v326 = sub_1C3B80C(string___TypeInfo, 8LL);
  if ( !v326 )
LABEL_48:
    sub_1C3B9C0(v326, v327);
  v640 = v326;
  if ( !*(_DWORD *)(v326 + 24) )
    goto LABEL_47;
  v641 = StringLiteral_1/*""*/;
  *(_QWORD *)(v326 + 32) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v326 + 32), (int64_t)v641, v634, v635, v636, v637, v638, v639);
  if ( *(_DWORD *)(v640 + 24) <= 1u )
    goto LABEL_47;
  v648 = StringLiteral_23178/*"starting Accept()"*/;
  *(_QWORD *)(v640 + 40) = StringLiteral_23178/*"starting Accept()"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v640 + 40), v648, v642, v643, v644, v645, v646, v647);
  if ( *(_DWORD *)(v640 + 24) <= 2u )
    goto LABEL_47;
  v655 = StringLiteral_23177/*"startat"*/;
  *(_QWORD *)(v640 + 48) = StringLiteral_23177/*"startat"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v640 + 48), v655, v649, v650, v651, v652, v653, v654);
  if ( *(_DWORD *)(v640 + 24) <= 3u )
    goto LABEL_47;
  v662 = StringLiteral_23179/*"starting Connect()"*/;
  *(_QWORD *)(v640 + 56) = StringLiteral_23179/*"starting Connect()"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v640 + 56), v662, v656, v657, v658, v659, v660, v661);
  if ( *(_DWORD *)(v640 + 24) <= 4u )
    goto LABEL_47;
  v669 = StringLiteral_1/*""*/;
  *(_QWORD *)(v640 + 64) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v640 + 64), (int64_t)v669, v663, v664, v665, v666, v667, v668);
  if ( *(_DWORD *)(v640 + 24) <= 5u )
    goto LABEL_47;
  v676 = StringLiteral_23177/*"startat"*/;
  *(_QWORD *)(v640 + 72) = StringLiteral_23177/*"startat"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v640 + 72), v676, v670, v671, v672, v673, v674, v675);
  if ( *(_DWORD *)(v640 + 24) <= 6u )
    goto LABEL_47;
  v683 = StringLiteral_1/*""*/;
  *(_QWORD *)(v640 + 80) = StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v640 + 80), (int64_t)v683, v677, v678, v679, v680, v681, v682);
  if ( *(_DWORD *)(v640 + 24) <= 7u )
    goto LABEL_47;
  v690 = StringLiteral_23212/*"stay_dog_{0}_action"*/;
  *(_QWORD *)(v640 + 88) = StringLiteral_23212/*"stay_dog_{0}_action"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v640 + 88), v690, v684, v685, v686, v687, v688, v689);
  p_QuestBoardApSpNames = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (PartyOrganizationUtility_c *)v640;
  sub_1C3B708(p_QuestBoardApSpNames, v640, v692, v693, v694, v695, v696, v697);
  v698 = StringLiteral_20819/*"listframes{0}_txt_point"*/;
  p_msPhaseSprName_ArrowOff = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (PartyOrganizationUtility_c *)StringLiteral_20819/*"listframes{0}_txt_point"*/;
  sub_1C3B708(p_msPhaseSprName_ArrowOff, v698, v700, v701, v702, v703, v704, v705);
  v706 = StringLiteral_20820/*"listframes{0}_txt_quest"*/;
  p_msPhaseSprName_ArrowOn = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (PartyOrganizationUtility_c *)StringLiteral_20820/*"listframes{0}_txt_quest"*/;
  sub_1C3B708(p_msPhaseSprName_ArrowOn, v706, v708, v709, v710, v711, v712, v713);
  v714 = StringLiteral_20817/*"listframes{0}_txt_mysticcode"*/;
  p_msPhaseSprName_ExArrowOff = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (PartyOrganizationUtility_c *)StringLiteral_20817/*"listframes{0}_txt_mysticcode"*/;
  sub_1C3B708(p_msPhaseSprName_ExArrowOff, v714, v716, v717, v718, v719, v720, v721);
  v722 = StringLiteral_20818/*"listframes{0}_txt_plain"*/;
  p_msPhaseSprName_ExArrowOn = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (PartyOrganizationUtility_c *)StringLiteral_20818/*"listframes{0}_txt_plain"*/;
  sub_1C3B708(p_msPhaseSprName_ExArrowOn, v722, v724, v725, v726, v727, v728, v729);
  v730 = StringLiteral_20838/*"localRotation.x"*/;
  p_msPhaseSprName_LoopOff = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (PartyOrganizationUtility_c *)StringLiteral_20838/*"localRotation.x"*/;
  sub_1C3B708(p_msPhaseSprName_LoopOff, v730, v732, v733, v734, v735, v736, v737);
  v738 = StringLiteral_20839/*"localRotation.y"*/;
  p_msPhaseSprName_LoopOn = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (PartyOrganizationUtility_c *)StringLiteral_20839/*"localRotation.y"*/;
  sub_1C3B708(p_msPhaseSprName_LoopOn, v738, v740, v741, v742, v743, v744, v745);
  v746 = StringLiteral_20764/*"lightsteelblue"*/;
  p_msPhaseSprName_LoopFirstOff = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (PartyOrganizationUtility_c *)StringLiteral_20764/*"lightsteelblue"*/;
  sub_1C3B708(p_msPhaseSprName_LoopFirstOff, v746, v748, v749, v750, v751, v752, v753);
  v754 = StringLiteral_23189/*"static"*/;
  p_CHAPTER_SP_BASE_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_23189/*"static"*/;
  sub_1C3B708(p_CHAPTER_SP_BASE_NAME, v754, v756, v757, v758, v759, v760, v761);
  v762 = StringLiteral_20816/*"listframes{0}_txt_item"*/;
  p_CHAPTER_SP_UNIT_NAME = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (PartyOrganizationUtility_c *)StringLiteral_20816/*"listframes{0}_txt_item"*/;
  sub_1C3B708(p_CHAPTER_SP_UNIT_NAME, v762, v764, v765, v766, v767, v768, v769);
  v770 = StringLiteral_20810/*"listframes6_bg"*/;
  p_PRE_BATTLE_ORGANIZATION = (PartyOrganizationUtility_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (PartyOrganizationUtility_c *)StringLiteral_20810/*"listframes6_bg"*/;
  sub_1C3B708(p_PRE_BATTLE_ORGANIZATION, v770, v772, v773, v774, v775, v776, v777);
}


void __fastcall QuestBoardListViewItemDraw___ctor(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  QuestBoardListViewItemDraw_c *v14; // x0
  struct UISprite_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C1ED23 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_GameObject___TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_UISprite___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_UISprite__TypeInfo, v4);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v5);
    sub_1C3B764(&UISprite___TypeInfo, v6);
    byte_4C1ED23 = 1;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1C3B80C(UnityEngine_GameObject___TypeInfo, 4LL);
  this->fields.mStatusSp = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mStatusSp, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v14 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v15 = (struct UISprite_array *)sub_1C3B80C(UISprite___TypeInfo, (unsigned int)v14->static_fields->PHASE_EXTRA_MAX);
  this->fields.mPhaseSp = v15;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mPhaseSp, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v22;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mMultiSecondBattleInformation,
    (int64_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__Awake(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UILabel_o *mOptionRestrinctionLb; // x8

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  this->fields._bannerState_k__BackingField = 0;
  if ( !mOptionRestrinctionLb )
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, questEntity);
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

  if ( (byte_4C1ED11 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1ED11 = 1;
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
          sub_1C3B9C0(v6, v5);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestBoardInformationText_o *mInfoTextList; // x0
  int32_t v10; // w25
  QuestBoardInformationText_o *v11; // x26
  QuestBoardListViewItem_o *v12; // x1
  int64_t Time; // x3
  const MethodInfo *v14; // x4
  QuestBoardListViewItemDraw_o *v15; // x0
  int32_t v16; // w2

  while ( 1 )
  {
    if ( (byte_4C1ED0D & 1) == 0 )
    {
      sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__, questBoardItem);
      sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v6);
      sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v7);
      sub_1C3B764(&NetworkManager_TypeInfo, v8);
      byte_4C1ED0D = 1;
    }
    if ( (byte_4C1ED0E & 1) == 0 )
    {
      sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, questBoardItem);
      byte_4C1ED0E = 1;
    }
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
    if ( !mInfoTextList )
      break;
    questBoardItem = (QuestBoardListViewItem_o *)LODWORD(mInfoTextList->fields.eventCampaignEnt);
    if ( (int)questBoardItem < 2 )
      break;
    if ( !questBoardManager )
      goto LABEL_28;
    mInfoTextList = (QuestBoardInformationText_o *)QuestBoardListViewManager__GetAlphaAnimCnt(
                                                     questBoardManager,
                                                     (int32_t)questBoardItem,
                                                     0LL);
    if ( !this->fields.mInfoTextList )
      goto LABEL_28;
    v10 = (int)mInfoTextList;
    mInfoTextList = (QuestBoardInformationText_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList,
                                                     (int32_t)mInfoTextList,
                                                     (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !mInfoTextList )
      goto LABEL_28;
    v11 = mInfoTextList;
    if ( !QuestBoardInformationText__IsQuestOpened(mInfoTextList, 0LL) )
    {
      if ( !QuestBoardInformationText__ChangeText(v11, &this->fields.mOptionInfoLb, 0LL) )
        return;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      v15 = this;
      v16 = v10;
      goto LABEL_26;
    }
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_28;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)mInfoTextList,
      v10,
      (const MethodInfo_368D440 *)Method_System_Collections_Generic_List_QuestBoardInformationText__RemoveAt__);
  }
  if ( (byte_4C1ED0F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, questBoardItem);
    byte_4C1ED0F = 1;
    mInfoTextList = (QuestBoardInformationText_o *)this->fields.mInfoTextList;
  }
  if ( mInfoTextList && LODWORD(mInfoTextList->fields.eventCampaignEnt) )
  {
    mInfoTextList = (QuestBoardInformationText_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)mInfoTextList,
                                                     0,
                                                     (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !mInfoTextList )
LABEL_28:
      sub_1C3B9C0(mInfoTextList, questBoardItem);
    if ( QuestBoardInformationText__ChangeText(mInfoTextList, &this->fields.mOptionInfoLb, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      v15 = this;
      v16 = 0;
LABEL_26:
      QuestBoardListViewItemDraw__UpdateInfoText(v15, v12, v16, Time, v14);
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
    sub_1C3B9C8(this, questBoardManager);
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
      ItemIconComponent__SetItemImage_39568612((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1C3B9C0(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_39566180((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestBoardListViewItemDraw__ConvertToChineseAscii(
        QuestBoardListViewItemDraw_o *this,
        int32_t n,
        bool isUppercase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int16 v7; // w23
  unsigned int v8; // w21
  __int16 v9; // w22
  System_Text_StringBuilder_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int v14; // w8
  unsigned int v15; // w8

  if ( (byte_4C1ED05 & 1) == 0 )
  {
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&n);
    sub_1C3B764(&StringLiteral_1191/*"1.0"*/, v6);
    byte_4C1ED05 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_1191/*"1.0"*/;
  if ( isUppercase )
    v7 = 32;
  else
    v7 = 0;
  v8 = n % 0xAu;
  v9 = 96 - v7;
  v10 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62523116(v10, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v15 = n / 0x64u % 0xA;
      if ( v15 >= 2 )
      {
        if ( !v10 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_62532092(v10, v9 | v15, 0LL);
      }
      else if ( !v10 )
      {
LABEL_25:
        sub_1C3B9C0(v11, v12);
      }
      System_Text_StringBuilder__Append_62532092(v10, 107 - v7, 0LL);
      v14 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v10 )
        goto LABEL_25;
      v14 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v14 >= 2 )
      System_Text_StringBuilder__Append_62532092(v10, v9 | v14, 0LL);
    System_Text_StringBuilder__Append_62532092(v10, 106 - v7, 0LL);
    if ( !v8 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                  v10,
                                  v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v10 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_62532092(v10, v9 | v8, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                              v10,
                              v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall QuestBoardListViewItemDraw__CreateInfoTextList(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int64_t checkTime,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  __int64 v21; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x23
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x24
  DataManager_o *v24; // x25
  int32_t warId; // w22
  Il2CppObject *MasterData_object; // x21
  int64_t v27; // x19
  __int64 v28; // x8
  QuestBoardInformationText_c **v29; // x23
  BoardMessageEntity_array *v30; // x22
  int v31; // w20
  int v32; // w25
  BoardMessageEntity_o *v33; // x26
  System_String_o *message; // x29
  int64_t closedAt; // x24
  System_Collections_Generic_List_object__o *mInfoTextList; // x27
  QuestBoardInformationText_o *v37; // x0
  Il2CppObject *v38; // x28
  BoardMessageEntity_o *v39; // x1
  System_String_o *v40; // x2
  int64_t v41; // x3
  int64_t v42; // x29
  System_String_o *v43; // x24
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  EventCampaignEntity_o *Data; // x0
  System_String_o *v55; // x24
  int64_t v56; // x29
  QuestBoardInformationText_c **v57; // x19
  System_Collections_Generic_List_object__o *v58; // x27
  QuestBoardInformationText_c *v59; // x8
  EventCampaignEntity_o *v60; // x23
  QuestBoardInformationText_o *v61; // x28
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  QuestBoardInformationText_c **v72; // x20
  _BOOL4 HasFlag; // w25
  const MethodInfo *v74; // x3
  struct EventEntity_o *eventEnt; // x8
  BoardMessageEntity_o *OverrideQuestMessage; // x0
  BoardMessageEntity_o *v77; // x25
  __int64 v78; // x8
  BoardMessageEntity_o *v79; // x27
  System_Collections_Generic_List_object__o *v80; // x25
  System_String_o *v81; // x24
  int64_t endTime; // x19
  QuestBoardInformationText_o *v83; // x26
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  int v94; // w8
  void *v95; // x23
  unsigned int v96; // w27
  EventEntity_o *v97; // x24
  int32_t id; // w25
  _DWORD *v99; // x26
  const MethodInfo *v100; // x3
  int32_t v101; // w19
  BoardMessageEntity_o *v102; // x25
  System_String_o *v103; // x19
  Il2CppObject *EventName; // x0
  System_String_o *v105; // x19
  System_Collections_Generic_List_object__o *v106; // x25
  int64_t v107; // x26
  QuestBoardInformationText_o *v108; // x24
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  struct MapControl_QuestInfo_o *v119; // [xsp+0h] [xbp-A0h]
  struct MapControl_AreaBoardInfo_o *v120; // [xsp+8h] [xbp-98h]
  DataMasterBase_TMaster__TEntity__PKType__o *v121; // [xsp+10h] [xbp-90h]
  DataManager_o *v122; // [xsp+18h] [xbp-88h]
  int32_t key; // [xsp+2Ch] [xbp-74h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C1ECE1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_BoardMessageMaster___, questBoardItem);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v13);
    sub_1C3B764(&LocalizationManager_TypeInfo, v14);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C3B764(&StringLiteral_25497, v17);
    sub_1C3B764(&StringLiteral_13634/*"The default value '{0}' of element '{1}' is invalid according to the type specified by xsi:type."*/, v18);
    sub_1C3B764(&StringLiteral_13632/*"The data connection was made from an address that is different than the address to which the FTP connection was made."*/, v19);
    byte_4C1ECE1 = 1;
  }
  entity = 0LL;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_86;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_86;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_86;
  v24 = (DataManager_o *)Instance;
  if ( !Instance )
    goto LABEL_86;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v121 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         v24,
                                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = DataManager__GetMasterData_object_(
               v24,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_86;
  v27 = checkTime;
  v122 = v24;
  v119 = quest_info_k__BackingField;
  v120 = AreaBoardInfo_k__BackingField;
  key = warId;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0LL);
  if ( !Instance )
    goto LABEL_86;
  v28 = *((_QWORD *)Instance + 3);
  v29 = &QuestBoardInformationText_TypeInfo;
  v30 = (BoardMessageEntity_array *)Instance;
  v31 = v28 - 1;
  if ( (int)v28 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      v33 = v30->m_Items[v32];
      if ( !v33 )
        break;
      switch ( v33->fields.referenceType )
      {
        case 1:
          message = v33->fields.message;
          closedAt = v33->fields.closedAt;
          mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          v37 = (QuestBoardInformationText_o *)sub_1C3B9B0(*v29);
          v38 = (Il2CppObject *)v37;
          v39 = v33;
          v40 = message;
          v41 = closedAt;
          goto LABEL_25;
        case 2:
          Instance = DataManager__GetMasterData_object_(
                       v122,
                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v33->fields.referenceId,
                       (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v42 = *((int *)Instance + 39);
          break;
        case 3:
          Instance = DataManager__GetMasterData_object_(
                       v122,
                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v33->fields.referenceId,
                       (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v42 = *((int *)Instance + 40);
          break;
        case 4:
          Instance = v121;
          if ( !v121 )
            goto LABEL_86;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v121,
                       v33->fields.referenceId,
                       (const MethodInfo_329AE48 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_37;
          v42 = *((_QWORD *)Instance + 12);
          break;
        case 5:
          if ( !MasterData_object )
            goto LABEL_86;
          Data = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v33->fields.referenceId, 0LL);
          v55 = v33->fields.message;
          v56 = v33->fields.closedAt;
          v57 = v29;
          v58 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          v59 = *v29;
          v60 = Data;
          v61 = (QuestBoardInformationText_o *)sub_1C3B9B0(v59);
          QuestBoardInformationText___ctor_35210092(v61, v33, v55, v56, checkTime, v60, 0LL);
          if ( !v58 )
            goto LABEL_86;
          items = v58->fields._items;
          v69 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v58->fields._version;
          if ( !items )
            goto LABEL_86;
          size = v58->fields._size;
          v29 = v57;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v58,
              (Il2CppObject *)v61,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            v71 = &items->obj.klass + size;
            v58->fields._size = size + 1;
            v71[4] = (Il2CppClass *)v61;
            sub_1C3B708((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)v61, v62, v63, v64, v65, v66, v67);
          }
          v27 = checkTime;
          goto LABEL_37;
        default:
          goto LABEL_37;
      }
      if ( v42 - v27 >= 0 )
      {
        v43 = v33->fields.message;
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        v37 = (QuestBoardInformationText_o *)sub_1C3B9B0(*v29);
        v38 = (Il2CppObject *)v37;
        v39 = v33;
        v40 = v43;
        v41 = v42;
LABEL_25:
        QuestBoardInformationText___ctor_35210092(v37, v39, v40, v41, v27, 0LL, 0LL);
        if ( !mInfoTextList )
          break;
        v50 = mInfoTextList->fields._items;
        v51 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++mInfoTextList->fields._version;
        if ( !v50 )
          break;
        v52 = mInfoTextList->fields._size;
        if ( (unsigned int)v52 >= v50->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mInfoTextList,
            v38,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &v50->obj.klass + v52;
          mInfoTextList->fields._size = v52 + 1;
          v53[4] = (Il2CppClass *)v38;
          sub_1C3B708((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v38, v44, v45, v46, v47, v48, v49);
        }
      }
LABEL_37:
      if ( v31 == v32 )
        goto LABEL_40;
      if ( ++v32 >= v30->max_length )
        goto LABEL_87;
    }
LABEL_86:
    sub_1C3B9C0(Instance, v21);
  }
LABEL_40:
  v72 = v29;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Instance )
    goto LABEL_86;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         key,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
  if ( v120->fields.eventEnt )
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
      eventEnt = v120->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_86;
      OverrideQuestMessage = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                               (QuestBoardListViewItemDraw_o *)Instance,
                               v30,
                               eventEnt->fields.id,
                               v74);
      if ( v120->fields.eventEnt )
      {
        v77 = OverrideQuestMessage;
        Instance = (void *)EventEntity__IsEventPeriod(v120->fields.eventEnt, checkTime, 0LL);
        if ( !v77 && ((unsigned __int8)Instance & 1) != 0 )
        {
          v78 = *(_QWORD *)&v30->max_length;
          if ( v78 )
          {
            if ( !(_DWORD)v78 )
              goto LABEL_87;
            v79 = v30->m_Items[0];
          }
          else
          {
            v79 = 0LL;
          }
          v80 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v81 = LocalizationManager__Get((System_String_o *)StringLiteral_13634/*"The default value '{0}' of element '{1}' is invalid according to the type specified by xsi:type."*/, 0LL);
          endTime = v119->fields.endTime;
          v83 = (QuestBoardInformationText_o *)sub_1C3B9B0(*v29);
          QuestBoardInformationText___ctor_35210092(v83, v79, v81, endTime, checkTime, 0LL, 0LL);
          if ( !v80 )
            goto LABEL_86;
          v90 = v80->fields._items;
          v91 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v80->fields._version;
          if ( !v90 )
            goto LABEL_86;
          v92 = v80->fields._size;
          if ( (unsigned int)v92 >= v90->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v80,
              (Il2CppObject *)v83,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
          }
          else
          {
            v93 = &v90->obj.klass + v92;
            v80->fields._size = v92 + 1;
            v93[4] = (Il2CppClass *)v83;
            sub_1C3B708((PartyOrganizationUtility_o *)(v93 + 4), (int64_t)v83, v84, v85, v86, v87, v88, v89);
          }
        }
      }
    }
  }
  Instance = v121;
  if ( !v121 )
    goto LABEL_86;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)v121, 7, 1, 0, 0LL);
  if ( !Instance )
    goto LABEL_86;
  v94 = *((_DWORD *)Instance + 6);
  v95 = Instance;
  if ( v94 >= 1 )
  {
    v96 = 0;
    while ( v96 < v94 )
    {
      v97 = (EventEntity_o *)*((_QWORD *)v95 + (int)v96 + 4);
      if ( !v97 || !MasterData_object )
        goto LABEL_86;
      id = v97->fields.id;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, id, 0LL);
      if ( Instance )
      {
        v99 = Instance;
        Instance = (void *)EventCampaignEntity__isDispWarId((EventCampaignEntity_o *)Instance, key, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v101 = v99[5];
          v102 = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                   (QuestBoardListViewItemDraw_o *)Instance,
                   v30,
                   id,
                   v100);
          Instance = (void *)CombineAdjustTarget__isTerminalExposable(v101, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && !v102 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v103 = LocalizationManager__Get((System_String_o *)StringLiteral_13632/*"The data connection was made from an address that is different than the address to which the FTP connection was made."*/, 0LL);
            EventName = (Il2CppObject *)EventEntity__getEventName(v97, 0LL);
            v105 = System_String__Format_63382984(v103, EventName, (Il2CppObject *)StringLiteral_25497, 0LL);
            v106 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
            v107 = EventEntity__GetEndTime(v97, 0, 0LL);
            v108 = (QuestBoardInformationText_o *)sub_1C3B9B0(*v72);
            QuestBoardInformationText___ctor(v108, v105, v107, 1, 1, 0LL, 0LL);
            if ( !v106 )
              goto LABEL_86;
            v115 = v106->fields._items;
            v116 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
            ++v106->fields._version;
            if ( !v115 )
              goto LABEL_86;
            v117 = v106->fields._size;
            if ( (unsigned int)v117 >= v115->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v106,
                (Il2CppObject *)v108,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
            }
            else
            {
              v118 = &v115->obj.klass + v117;
              v106->fields._size = v117 + 1;
              v118[4] = (Il2CppClass *)v108;
              sub_1C3B708((PartyOrganizationUtility_o *)(v118 + 4), (int64_t)v108, v109, v110, v111, v112, v113, v114);
            }
          }
        }
      }
      v94 = *((_DWORD *)v95 + 6);
      if ( (int)++v96 >= v94 )
        return;
    }
LABEL_87:
    sub_1C3B9C8(Instance, v21);
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
  QuestBoardListViewItemDraw___c__DisplayClass356_0_o *v30; // x26
  Il2CppObject *isTerminalExposable; // x0
  QuestBoardListViewManager_c *v32; // x1
  int target; // w25
  QuestBoardInformationText_o *v34; // x27
  int32_t id; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_object__o *ContinueItemInfoList; // x20
  System_Predicate_object__o *v41; // x21
  Il2CppObject *v42; // x0
  UserOwnItemInfo_o *v43; // x20
  System_String_o *v44; // x21
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  System_String_o *v49; // x21
  System_String_o *EventName; // x22
  int32_t ImageId; // w20
  TerminalBoardOptionTextData_o *v52; // x23
  int64_t v53; // x19
  QuestBoardInformationText_o *v54; // x0
  bool v55; // w3
  System_String_o *v56; // x1
  int64_t v57; // x2
  TerminalBoardOptionTextData_o *v58; // x5
  bool IsOverrideEntryCondMessage; // w20
  System_String_o *v60; // x0
  System_String_o *v61; // x21
  int64_t EndTime; // x19
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v68; // x0
  int64_t checkTime; // x24
  int64_t v70; // x25
  QuestBoardInformationText_o *v71; // x22
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  QuestBoardInformationText_o *result; // x0
  System_String_o *v83; // x20
  Il2CppObject *v84; // x0
  System_String_o *v85; // x20
  QuestBoardListViewItemDraw_o *v86; // x0
  QuestEntity_o *v87; // x1
  EventCampaignEntity_o *v88; // x2
  bool v89; // w3
  int32_t *v90; // x4
  int32_t *v91; // x5
  bool *v92; // x6
  const MethodInfo *v93; // x7
  int32_t Num_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C1ED09 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventCampaignMaster___, questEntity);
    sub_1C3B764(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14);
    sub_1C3B764(&DataManager_TypeInfo, v15);
    sub_1C3B764(&int_TypeInfo, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__, v18);
    sub_1C3B764(&LocalizationManager_TypeInfo, v19);
    sub_1C3B764(&System_Predicate_UserOwnItemInfo__TypeInfo, v20);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v21);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v22);
    sub_1C3B764(&TerminalBoardOptionTextData_TypeInfo, v23);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__DisplayClass356_0__CreateQuestBoardInformationText_b__0__, v24);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass356_0_TypeInfo, v25);
    sub_1C3B764(&StringLiteral_25497, v26);
    sub_1C3B764(&StringLiteral_1/*""*/, v27);
    sub_1C3B764(&StringLiteral_13632/*"The data connection was made from an address that is different than the address to which the FTP connection was made."*/, v28);
    sub_1C3B764(&StringLiteral_13633/*"The data type of the simple content is not a valid restriction of the base complex type."*/, v29);
    byte_4C1ED09 = 1;
  }
  message = 0LL;
  v30 = (QuestBoardListViewItemDraw___c__DisplayClass356_0_o *)sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass356_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass356_0___ctor(v30, 0LL);
  if ( !eventCampaignEnt )
    goto LABEL_71;
  target = eventCampaignEnt->fields.target;
  isTerminalExposable = (Il2CppObject *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v34 = 0LL;
  if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    return v34;
  if ( !eventEnt )
    goto LABEL_71;
  id = eventEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_71;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_71;
  v32 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewManager_TypeInfo )
  {
    if ( !v30 )
      goto LABEL_71;
    v30->fields.checkTime = (int64_t)manager[1].fields.rightItem;
    if ( !isTerminalExposable )
      goto LABEL_71;
    isTerminalExposable = (Il2CppObject *)EventCampaignReleaseMaster__isRelease(
                                            (EventCampaignReleaseMaster_o *)isTerminalExposable,
                                            id,
                                            eventCampaignEnt->fields.target,
                                            0LL);
    if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    {
      if ( !isQuestNoneCleared )
      {
        v34 = 0LL;
        if ( target == 25 || target == 35 )
          return v34;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( !isTerminalExposable )
        goto LABEL_71;
      IsOverrideEntryCondMessage = EventCampaignMaster__IsOverrideEntryCondMessage(
                                     (EventCampaignMaster_o *)isTerminalExposable,
                                     &message,
                                     eventCampaignEnt,
                                     0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_13632/*"The data connection was made from an address that is different than the address to which the FTP connection was made."*/, 0LL);
      v61 = System_String__Format_63382984(v60, (Il2CppObject *)message, (Il2CppObject *)StringLiteral_25497, 0LL);
      EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
      v54 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
      v34 = v54;
      v55 = IsOverrideEntryCondMessage;
      v56 = v61;
LABEL_30:
      v57 = EndTime;
      v58 = 0LL;
LABEL_31:
      QuestBoardInformationText___ctor(v54, v56, v57, v55, 0, v58, 0LL);
      return v34;
    }
    if ( target == 28 )
    {
      ContinueItemInfoList = (System_Collections_Generic_List_object__o *)UserOwnItemDetail__GetContinueItemInfoList(0LL);
      v41 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_UserOwnItemInfo__TypeInfo);
      System_Predicate_object____ctor(
        v41,
        (Il2CppObject *)v30,
        Method_QuestBoardListViewItemDraw___c__DisplayClass356_0__CreateQuestBoardInformationText_b__0__,
        0LL);
      if ( ContinueItemInfoList )
      {
        v42 = System_Collections_Generic_List_object___Find(
                ContinueItemInfoList,
                (System_Predicate_T__o *)v41,
                (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v42 )
        {
          v43 = (UserOwnItemInfo_o *)v42;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v44 = LocalizationManager__Get((System_String_o *)StringLiteral_13633/*"The data type of the simple content is not a valid restriction of the base complex type."*/, 0LL);
          Num_k__BackingField = v43->fields._Num_k__BackingField;
          v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Num_k__BackingField, v45, v46, v47);
          v49 = System_String__Format_63382984(v44, v48, (Il2CppObject *)StringLiteral_25497, 0LL);
          EventName = EventEntity__getEventName(eventEnt, 0LL);
          ImageId = UserOwnItemInfo__get_ImageId(v43, 0LL);
          v52 = (TerminalBoardOptionTextData_o *)sub_1C3B9B0(TerminalBoardOptionTextData_TypeInfo);
          TerminalBoardOptionTextData___ctor(v52, EventName, v49, ImageId, 0, 0LL);
          v53 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v54 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
          v34 = v54;
          v55 = 1;
          v56 = v49;
          v57 = v53;
          v58 = v52;
          goto LABEL_31;
        }
        return 0LL;
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
            return 0LL;
          if ( !questEntity )
            goto LABEL_71;
          consumeType = questEntity->fields.consumeType;
          if ( consumeType != 4 && consumeType != 1 )
            return 0LL;
LABEL_43:
          if ( target == 24 )
          {
            if ( !QuestBoardListViewItemDraw__IsValidSupportSelection(
                    (QuestBoardListViewItemDraw_o *)isTerminalExposable,
                    questEntity,
                    phase,
                    v39) )
              return 0LL;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            isTerminalExposable = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( !questEntity || !isTerminalExposable )
LABEL_71:
              sub_1C3B9C0(isTerminalExposable, v32);
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
              goto LABEL_67;
            }
            if ( Entity )
            {
LABEL_67:
              v34 = 0LL;
              if ( QuestPhaseEntity__IsNoneSupportFriendPoint(Entity, 0LL) )
                return v34;
            }
          }
LABEL_68:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v83 = LocalizationManager__Get((System_String_o *)StringLiteral_13632/*"The data connection was made from an address that is different than the address to which the FTP connection was made."*/, 0LL);
          v84 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
          v85 = System_String__Format_63382984(v83, v84, (Il2CppObject *)StringLiteral_25497, 0LL);
          EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v54 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
          v34 = v54;
          v55 = 1;
          v56 = v85;
          goto LABEL_30;
        }
LABEL_59:
        mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v68 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        checkTime = v30->fields.checkTime;
        v70 = v68;
        v71 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
        QuestBoardInformationText___ctor_35210260(v71, eventEnt, detail, v70, checkTime, eventCampaignEnt, 0LL);
        if ( mInfoTextList )
        {
          items = mInfoTextList->fields._items;
          v79 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++mInfoTextList->fields._version;
          if ( items )
          {
            size = mInfoTextList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                mInfoTextList,
                (Il2CppObject *)v71,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            }
            else
            {
              v81 = &items->obj.klass + size;
              mInfoTextList->fields._size = size + 1;
              v81[4] = (Il2CppClass *)v71;
              sub_1C3B708((PartyOrganizationUtility_o *)(v81 + 4), (int64_t)v71, v72, v73, v74, v75, v76, v77);
            }
            return 0LL;
          }
        }
        goto LABEL_71;
      }
    }
    else if ( target > 24 )
    {
      v34 = 0LL;
      if ( target == 25 )
        return v34;
      if ( target != 26 )
      {
        if ( target == 35 )
          return v34;
        goto LABEL_68;
      }
      goto LABEL_59;
    }
    if ( target != 12 )
      goto LABEL_43;
    goto LABEL_54;
  }
  sub_1C3BC80(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v86, v87, v88, v89, v90, v91, v92, v93);
  return result;
}


QuestBoardInformationText_o *__fastcall QuestBoardListViewItemDraw__CreateQuestBoardInformationText_35167640(
        QuestBoardListViewItemDraw_o *this,
        int64_t endTime,
        int64_t checkTime,
        int32_t warId,
        System_String_o *baseText,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  __int64 v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  System_String_o *IfExists; // x23
  __int64 v58; // x24
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  System_String_o *v76; // x24
  QuestBoardInformationText_o *v77; // x21
  int32_t v79; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v80; // [xsp+18h] [xbp-58h] BYREF
  int32_t v81; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C1ED0A & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, endTime);
    sub_1C3B764(&LocalizationManager_TypeInfo, v10);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v11);
    sub_1C3B764(&string___TypeInfo, v12);
    sub_1C3B764(&StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/, v13);
    sub_1C3B764(&StringLiteral_13636/*"The default value of '{0}' attribute is invalid according to its datatype."*/, v14);
    sub_1C3B764(&StringLiteral_13640/*"The derived particle cannot have more members than the base particle - All:All,Sequence:Sequence -- Recurse Rule 2 / Choice:Choice -- RecurseLax."*/, v15);
    sub_1C3B764(&StringLiteral_13637/*"The derived element {0} at ({1}, {2}) is not a valid restriction of the base all particle at ({3}, {4}) according to Elt:All/Choice/Sequence -- RecurseAsIfGroup."*/, v16);
    sub_1C3B764(&StringLiteral_13638/*"The derived element {0} at ({1}, {2}) is not a valid restriction of the base choice particle at ({3}, {4}) according to Elt:All/Choice/Sequence -- RecurseAsIfGroup."*/, v17);
    sub_1C3B764(&StringLiteral_13639/*"The derived element {0} at ({1}, {2}) is not a valid restriction of the base sequence particle at ({3}, {4}) according to Elt:All/Choice/Sequence -- RecurseAsIfGroup."*/, v18);
    byte_4C1ED0A = 1;
  }
  if ( endTime < 1 )
    return 0LL;
  if ( System_String__IsNullOrEmpty(baseText, 0LL) )
  {
    v19 = sub_1C3B80C(string___TypeInfo, 2LL);
    v81 = warId;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v20, v21, v22);
    v24 = System_String__Format((System_String_o *)StringLiteral_13640/*"The derived particle cannot have more members than the base particle - All:All,Sequence:Sequence -- Recurse Rule 2 / Choice:Choice -- RecurseLax."*/, v23, 0LL);
    if ( !v19 )
      goto LABEL_23;
    if ( !*(_DWORD *)(v19 + 24) )
      goto LABEL_22;
    *(_QWORD *)(v19 + 32) = v24;
    sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v24, v26, v27, v28, v29, v30, v31);
    if ( *(_DWORD *)(v19 + 24) <= 1u )
      goto LABEL_22;
    v38 = StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/;
    *(_QWORD *)(v19 + 40) = StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/;
    sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 40), v38, v32, v33, v34, v35, v36, v37);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseText = LocalizationManager__GetIfExists((System_String_array *)v19, 0LL);
  }
  v39 = sub_1C3B80C(string___TypeInfo, 2LL);
  v80 = warId;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v40, v41, v42);
  v24 = System_String__Format((System_String_o *)StringLiteral_13639/*"The derived element {0} at ({1}, {2}) is not a valid restriction of the base sequence particle at ({3}, {4}) according to Elt:All/Choice/Sequence -- RecurseAsIfGroup."*/, v43, 0LL);
  if ( !v39 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v39 + 24)
    || (*(_QWORD *)(v39 + 32) = v24,
        sub_1C3B708((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v24, v44, v45, v46, v47, v48, v49),
        *(_DWORD *)(v39 + 24) <= 1u) )
  {
LABEL_22:
    sub_1C3B9C8(v24, v25);
  }
  v56 = StringLiteral_13638/*"The derived element {0} at ({1}, {2}) is not a valid restriction of the base choice particle at ({3}, {4}) according to Elt:All/Choice/Sequence -- RecurseAsIfGroup."*/;
  *(_QWORD *)(v39 + 40) = StringLiteral_13638/*"The derived element {0} at ({1}, {2}) is not a valid restriction of the base choice particle at ({3}, {4}) according to Elt:All/Choice/Sequence -- RecurseAsIfGroup."*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v39 + 40), v56, v50, v51, v52, v53, v54, v55);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v39, 0LL);
  v58 = sub_1C3B80C(string___TypeInfo, 2LL);
  v79 = warId;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v59, v60, v61);
  v24 = System_String__Format((System_String_o *)StringLiteral_13637/*"The derived element {0} at ({1}, {2}) is not a valid restriction of the base all particle at ({3}, {4}) according to Elt:All/Choice/Sequence -- RecurseAsIfGroup."*/, v62, 0LL);
  if ( !v58 )
LABEL_23:
    sub_1C3B9C0(v24, v25);
  if ( !*(_DWORD *)(v58 + 24) )
    goto LABEL_22;
  *(_QWORD *)(v58 + 32) = v24;
  sub_1C3B708((PartyOrganizationUtility_o *)(v58 + 32), (int64_t)v24, v63, v64, v65, v66, v67, v68);
  if ( *(_DWORD *)(v58 + 24) <= 1u )
    goto LABEL_22;
  v75 = StringLiteral_13636/*"The default value of '{0}' attribute is invalid according to its datatype."*/;
  *(_QWORD *)(v58 + 40) = StringLiteral_13636/*"The default value of '{0}' attribute is invalid according to its datatype."*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v58 + 40), v75, v69, v70, v71, v72, v73, v74);
  v76 = LocalizationManager__GetIfExists((System_String_array *)v58, 0LL);
  v77 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor_35209176(v77, baseText, endTime, checkTime, IfExists, v76, 0LL);
  return v77;
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
    sub_1C3B9C0(this, 0LL);
  v3 = *(_QWORD *)&entityList->max_length;
  if ( (int)v3 < 1 )
    return 0LL;
  v5 = 0LL;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1C3B9C8(this, entityList);
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
    sub_1C3B9C0(this, boardMessageData);
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
  if ( (byte_4C1ED1D & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_4C1ED1D = 1;
  }
  v2 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v2 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_AP_SPNAME_PREFIX = v2->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_63368612(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_Generic_List_object__o *v28; // x19
  bool v29; // w26
  const MethodInfo *v30; // x7
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  QuestBoardListViewManager_c *v32; // x1
  const MethodInfo *v33; // x7
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByWarGroupMaster; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  int64_t *manager; // x8
  __int64 methodPtr_low; // x10
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v39; // x20
  int64_t *p_endedAt; // x20
  __int64 endedAt; // t1
  int64_t *v42; // x8
  int64_t v43; // x20
  System_String_o *EventName; // x21
  System_String_o *v45; // x0
  System_String_o *v46; // x22
  QuestBoardInformationText_o *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  QuestBoardListViewItemDraw_o *v59; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *v60; // x1
  int32_t v61; // w2
  bool v62; // w3
  const MethodInfo *v63; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C1ED06 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v15);
    sub_1C3B764(&DataManager_TypeInfo, v16);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v20);
    sub_1C3B764(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v21);
    sub_1C3B764(&LocalizationManager_TypeInfo, v22);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v23);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v24);
    sub_1C3B764(&StringLiteral_25497, v25);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v26);
    sub_1C3B764(&StringLiteral_13642/*"The derived particle's range is not a valid restriction of the base particle's range according to All:All,Sequence:Sequence -- Recurse Rule 1 or Choice:Choice -- RecurseLax."*/, v27);
    byte_4C1ED06 = 1;
  }
  entity = 0LL;
  v28 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  v29 = isQuestNoneCleared;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        questId,
                                                                                        phase,
                                                                                        v29,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        v30);
  if ( !v28 )
    goto LABEL_28;
  System_Collections_Generic_List_object___AddRange(
    v28,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  CampaignTextListByWarGroupMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
                                                                                      this,
                                                                                      questId,
                                                                                      phase,
                                                                                      v29,
                                                                                      costCalcVal,
                                                                                      fixedVal,
                                                                                      isNotItemConsume,
                                                                                      v33);
  System_Collections_Generic_List_object___AddRange(
    v28,
    CampaignTextListByWarGroupMaster,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_28;
  manager = (int64_t *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_28;
  v32 = QuestBoardListViewManager_TypeInfo;
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
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v28;
    v39 = EntityByQuestIdAndTime;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_28;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
            &entity,
            v39->fields.eventId,
            (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v28;
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
    if ( !entity )
      goto LABEL_28;
    if ( LODWORD(entity[1].monitor) != 25 )
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v28;
    endedAt = v39->fields.endedAt;
    p_endedAt = &v39->fields.endedAt;
    if ( endedAt <= 0 )
      v42 = (int64_t *)&entity[6];
    else
      v42 = p_endedAt;
    v43 = *v42;
    EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13642/*"The derived particle's range is not a valid restriction of the base particle's range according to All:All,Sequence:Sequence -- Recurse Rule 1 or Choice:Choice -- RecurseLax."*/, 0LL);
    v46 = System_String__Concat_63381876(
            EventName,
            (System_String_o *)StringLiteral_117/*"   "*/,
            v45,
            (System_String_o *)StringLiteral_25497,
            0LL);
    v47 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v47, v46, v43, 0, 1, 0LL, 0LL);
    items = v28->fields._items;
    v55 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++v28->fields._version;
    if ( items )
    {
      size = v28->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)v47,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v47;
        sub_1C3B708((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v47, v48, v49, v50, v51, v52, v53);
      }
      return (System_Collections_Generic_List_QuestBoardInformationText__o *)v28;
    }
LABEL_28:
    sub_1C3B9C0(CampaignTextListByEventQuestMaster, v32);
  }
  sub_1C3BC80(manager);
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)QuestBoardListViewItemDraw__HasNewQuestInWar(
                                                                           v59,
                                                                           v60,
                                                                           v61,
                                                                           v62,
                                                                           v63);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  System_Collections_Generic_List_object__o *v38; // x23
  int64_t Instance; // x0
  QuestBoardListViewManager_c *v40; // x1
  DataManager_o *v41; // x21
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v43; // x20
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v45; // x24
  __int64 methodPtr_low; // x9
  Il2CppObject *v47; // x21
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_object__o *v49; // x28
  int max_length; // w8
  unsigned int v51; // w22
  EventEntity_o *v52; // x8
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  int64_t v62; // x27
  Il2CppClass **v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  __int64 v74; // x21
  __int64 v75; // x0
  __int64 v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  Il2CppObject *current; // x1
  EventCampaignEntity_o **v84; // x20
  __int64 v85; // x0
  __int64 v86; // x1
  _BOOL8 v87; // x0
  __int64 v88; // x1
  System_Func_object__bool__o *v89; // x27
  Il2CppObject *v90; // x0
  const MethodInfo *v91; // x6
  Il2CppObject *QuestBoardInformationText; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x1
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  __int64 v104; // x20
  __int64 v105; // x0
  __int64 v106; // x1
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  Il2CppObject *v113; // x1
  System_Func_object__bool__o *v114; // x21
  Il2CppObject *v115; // x0
  const MethodInfo *v116; // x7
  void *v118; // x0
  void *v119; // x19
  int v120; // w1
  __int64 v121; // x20
  int32_t *v122; // [xsp+0h] [xbp-D0h]
  int32_t *v123; // [xsp+8h] [xbp-C8h]
  bool *v124; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v128; // [xsp+30h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+50h] [xbp-80h] BYREF

  EnabledEventCampaignForQuest = (EventEntity_array *)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4C1ED07 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventQuestMaster___, v15);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v16);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v17);
    sub_1C3B764(&DataManager_TypeInfo, v18);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v23);
    sub_1C3B764(&System_Func_EventEntity__bool__TypeInfo, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v28);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v29);
    sub_1C3B764(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v30);
    sub_1C3B764(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v31);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v32);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_1C3B764(
      &Method_QuestBoardListViewItemDraw___c__DisplayClass354_0__GetCampaignTextListByEventQuestMaster_b__0__,
      v34);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass354_0_TypeInfo, v35);
    sub_1C3B764(
      &Method_QuestBoardListViewItemDraw___c__DisplayClass354_1__GetCampaignTextListByEventQuestMaster_b__1__,
      v36);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass354_1_TypeInfo, v37);
    byte_4C1ED07 = 1;
  }
  memset(&v130, 0, sizeof(v130));
  entity = 0LL;
  v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  v41 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v43 = DataManager__GetMasterData_object_(
          v41,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v41,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        questId,
                        (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_56;
  v45 = (QuestEntity_o *)Instance;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_56;
  v40 = QuestBoardListViewManager_TypeInfo;
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
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v122 = costCalcVal;
    v123 = fixedVal;
    v124 = isNotItemConsume;
    v47 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    v49 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v49,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !EnabledEventCampaignForQuest )
      goto LABEL_56;
    max_length = EnabledEventCampaignForQuest->max_length;
    if ( max_length >= 1 )
    {
      v51 = 0;
      while ( 1 )
      {
        if ( v51 >= max_length )
          sub_1C3B9C8(Instance, v40);
        v52 = EnabledEventCampaignForQuest->m_Items[v51];
        if ( !v52 || !v43 )
          break;
        Instance = (int64_t)EventCampaignMaster__getData((EventCampaignMaster_o *)v43, v52->fields.id, 0LL);
        if ( Instance )
        {
          if ( !v49 )
            break;
          items = v49->fields._items;
          v60 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v49->fields._version;
          if ( !items )
            break;
          size = v49->fields._size;
          v62 = Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v49,
              (Il2CppObject *)Instance,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &items->obj.klass + size;
            v49->fields._size = size + 1;
            v63[4] = (Il2CppClass *)v62;
            sub_1C3B708((PartyOrganizationUtility_o *)(v63 + 4), v62, v53, v54, v55, v56, v57, v58);
          }
          if ( !v47 )
            break;
          Instance = EventCampaignReleaseMaster__isRelease(
                       (EventCampaignReleaseMaster_o *)v47,
                       *(_DWORD *)(v62 + 16),
                       *(_DWORD *)(v62 + 20),
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            v70 = v8->fields._items;
            v71 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v8->fields._version;
            if ( !v70 )
              break;
            v72 = v8->fields._size;
            if ( (unsigned int)v72 >= v70->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v62,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            }
            else
            {
              v73 = &v70->obj.klass + v72;
              v8->fields._size = v72 + 1;
              v73[4] = (Il2CppClass *)v62;
              sub_1C3B708((PartyOrganizationUtility_o *)(v73 + 4), v62, v64, v65, v66, v67, v68, v69);
            }
          }
        }
        max_length = EnabledEventCampaignForQuest->max_length;
        if ( (int)++v51 >= max_length )
          goto LABEL_33;
      }
LABEL_56:
      sub_1C3B9C0(Instance, v40);
    }
LABEL_33:
    Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                          (System_Collections_Generic_List_EventCampaignEntity__o *)v49,
                          0LL);
    if ( !Instance )
      goto LABEL_56;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v128,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v130 = v128;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v130,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v74 = sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass354_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass354_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass354_0_o *)v74,
        0LL);
      if ( !v74 )
        sub_1C3B9C0(v75, v76);
      current = v130.fields._current;
      *(_QWORD *)(v74 + 16) = v130.fields._current;
      v84 = (EventCampaignEntity_o **)(v74 + 16);
      sub_1C3B708((PartyOrganizationUtility_o *)(v74 + 16), (int64_t)current, v77, v78, v79, v80, v81, v82);
      if ( !Master_object )
        sub_1C3B9C0(v85, v86);
      v87 = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, phase, 0LL);
      if ( v87 )
      {
        if ( !*v84 )
          sub_1C3B9C0(v87, v88);
        if ( (*v84)->fields.target == 24 )
        {
          if ( !entity )
            sub_1C3B9C0(0LL, v88);
          if ( QuestPhaseEntity__IsNoneSupportFriendPoint(entity, 0LL) )
            continue;
        }
      }
      v89 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v89,
        (Il2CppObject *)v74,
        Method_QuestBoardListViewItemDraw___c__DisplayClass354_0__GetCampaignTextListByEventQuestMaster_b__0__,
        0LL);
      v90 = System_Linq_Enumerable__FirstOrDefault_object__50415372(
              (System_Collections_Generic_IEnumerable_TSource__o *)EnabledEventCampaignForQuest,
              (System_Func_TSource__bool__o *)v89,
              (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
      QuestBoardInformationText = (Il2CppObject *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                                    this,
                                                    v45,
                                                    (EventEntity_o *)v90,
                                                    *v84,
                                                    phase,
                                                    isQuestNoneCleared,
                                                    v91);
      v99 = (int64_t)QuestBoardInformationText;
      if ( QuestBoardInformationText )
      {
        if ( !v38 )
          sub_1C3B9C0(QuestBoardInformationText, QuestBoardInformationText);
        v100 = v38->fields._items;
        v101 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
        ++v38->fields._version;
        if ( !v100 )
          sub_1C3B9C0(QuestBoardInformationText, QuestBoardInformationText);
        v102 = v38->fields._size;
        if ( (unsigned int)v102 >= v100->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v38,
            QuestBoardInformationText,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
        }
        else
        {
          v103 = &v100->obj.klass + v102;
          v38->fields._size = v102 + 1;
          v103[4] = (Il2CppClass *)v99;
          sub_1C3B708((PartyOrganizationUtility_o *)(v103 + 4), v99, v93, v94, v95, v96, v97, v98);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v130,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  else
  {
    sub_1C3BC80(Instance);
    v119 = v118;
    if ( v120 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v130,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      sub_1D261F4(v119);
    }
    v121 = *(_QWORD *)__cxa_begin_catch(v118);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v130,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v121 )
      sub_1C3B9B8(v121);
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v8,
                        0LL);
  if ( !Instance )
    goto LABEL_56;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v128,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v130 = v128;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v130,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    v104 = sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass354_1_TypeInfo);
    QuestBoardListViewItemDraw___c__DisplayClass354_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass354_1_o *)v104,
      0LL);
    if ( !v104 )
      sub_1C3B9C0(v105, v106);
    v113 = v130.fields._current;
    *(_QWORD *)(v104 + 16) = v130.fields._current;
    sub_1C3B708((PartyOrganizationUtility_o *)(v104 + 16), (int64_t)v113, v107, v108, v109, v110, v111, v112);
    v114 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v114,
      (Il2CppObject *)v104,
      Method_QuestBoardListViewItemDraw___c__DisplayClass354_1__GetCampaignTextListByEventQuestMaster_b__1__,
      0LL);
    v115 = System_Linq_Enumerable__FirstOrDefault_object__50415372(
             (System_Collections_Generic_IEnumerable_TSource__o *)EnabledEventCampaignForQuest,
             (System_Func_TSource__bool__o *)v114,
             (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    QuestBoardListViewItemDraw__CalcQuestCost(
      (QuestBoardListViewItemDraw_o *)v115,
      v45,
      *(EventCampaignEntity_o **)(v104 + 16),
      isQuestNoneCleared,
      v122,
      v123,
      v124,
      v116);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v130,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v38;
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_Generic_List_object__o *v20; // x24
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x20
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v25; // x25
  QuestEntity_o *v26; // x26
  DataManager_o *v27; // x27
  int32_t spotId; // w19
  int32_t klass_high; // w29
  int m_CancellationTokenSource; // w8
  unsigned int v31; // w22
  bool v32; // w28
  EventEntity_o *v33; // x19
  struct DataMasterBase_array *datalist; // x8
  EventCampaignEntity_o *v35; // x20
  const MethodInfo *v36; // x6
  QuestBoardInformationText_o *QuestBoardInformationText; // x19
  const MethodInfo *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C1ED08 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_SpotMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarGroupMaster___, v13);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v14);
    sub_1C3B764(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v17);
    sub_1C3B764(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v18);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4C1ED08 = 1;
  }
  entity = 0LL;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v23 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  v25 = DataManager__GetMasterData_object_(
          v23,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v23,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                questId,
                                (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_32;
  v26 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 7, 1, 0, 0LL);
  if ( !v26 )
    goto LABEL_32;
  v27 = Instance;
  spotId = v26->fields.spotId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                spotId,
                                (const MethodInfo_329AE94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    klass_high = HIDWORD(entity[1].klass);
    if ( klass_high )
    {
      if ( !v27 )
        goto LABEL_32;
      m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource >= 1 )
      {
        v31 = 0;
        v32 = isQuestNoneCleared;
        while ( 1 )
        {
          if ( v31 >= m_CancellationTokenSource )
            sub_1C3B9C8(Instance, v22);
          v33 = (EventEntity_o *)*((_QWORD *)&v27->fields._DispLog + (int)v31);
          if ( !v33 || !v25 )
            break;
          Instance = (DataManager_o *)EventCampaignMaster__getData((EventCampaignMaster_o *)v25, v33->fields.id, 0LL);
          if ( Instance )
          {
            datalist = Instance->fields.datalist;
            v35 = (EventCampaignEntity_o *)Instance;
            if ( !datalist )
              break;
            if ( *(_QWORD *)&datalist->max_length )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarGroupMaster___);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)WarGroupMaster__HasEntity(
                                            (WarGroupMaster_o *)Instance,
                                            klass_high,
                                            v26->fields.afterClear,
                                            v26->fields.type,
                                            v35->fields.targetIds,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                QuestBoardInformationText = QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                              this,
                                              v26,
                                              v33,
                                              v35,
                                              phase,
                                              v32,
                                              v36);
                QuestBoardListViewItemDraw__CalcQuestCost(
                  (QuestBoardListViewItemDraw_o *)QuestBoardInformationText,
                  v26,
                  v35,
                  v32,
                  costCalcVal,
                  fixedVal,
                  isNotItemConsume,
                  v38);
                if ( QuestBoardInformationText )
                {
                  if ( !v20 )
                    break;
                  items = v20->fields._items;
                  v46 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
                  ++v20->fields._version;
                  if ( !items )
                    break;
                  size = v20->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v20,
                      (Il2CppObject *)QuestBoardInformationText,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v48 = &items->obj.klass + size;
                    v20->fields._size = size + 1;
                    v48[4] = (Il2CppClass *)QuestBoardInformationText;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)(v48 + 4),
                      (int64_t)QuestBoardInformationText,
                      v39,
                      v40,
                      v41,
                      v42,
                      v43,
                      v44);
                  }
                }
              }
            }
          }
          m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource;
          if ( (int)++v31 >= m_CancellationTokenSource )
            return (System_Collections_Generic_List_QuestBoardInformationText__o *)v20;
        }
LABEL_32:
        sub_1C3B9C0(Instance, v22);
      }
    }
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v20;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetDispQuestName(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestBoardListViewItemDraw_o *v9; // x20
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *BattleName; // x1

  if ( (byte_4C1ECEE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, questEnt);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&StringLiteral_25497, v8);
    byte_4C1ECEE = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v9 = this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_13;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_25497, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
        this = (QuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
        if ( MasterData_object )
        {
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                   (int32_t)this,
                                                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
            return System_String__Format((System_String_o *)v9, BattleName, 0LL);
          }
        }
      }
LABEL_13:
      sub_1C3B9C0(this, questEnt);
    }
  }
  return (System_String_o *)v9;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
        QuestBoardListViewItemDraw_o *this,
        EventEntity_o *eventEnt,
        int32_t warId,
        bool isActiveEventWar,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  __int64 v16; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  WarEntity_o *Entity; // x0
  int32_t PrioredBannerId; // w0
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  QuestBoardListViewItemDraw_c *v23; // x8
  int v24; // w19
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v26; // x0
  QuestBoardListViewItemDraw_c *v28; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v30; // x0
  int v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C1ECF7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventAddMaster___, eventEnt);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v10);
    sub_1C3B764(&int_TypeInfo, v11);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v12);
    byte_4C1ECF7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_object )
    goto LABEL_32;
  if ( isActiveEventWar )
    v15 = 4;
  else
    v15 = 5;
  if ( isActiveEventWar )
    v16 = 60LL;
  else
    v16 = 56LL;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Master_object,
                              eventEnt->fields.id,
                              v15,
                              0LL);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v16);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = (WarEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            warId,
                            (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        warId,
                        (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_object )
      {
        PrioredBannerId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_object, 0LL);
        v23 = QuestBoardListViewItemDraw_TypeInfo;
        overwriteId = PrioredBannerId;
        v24 = PrioredBannerId;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v23 = QuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v23->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v31 = v24;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v20, v21, v22);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v26, 0LL);
      }
    }
LABEL_32:
    sub_1C3B9C0(Master_object, v14);
  }
  v28 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v28 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v28->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v30 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_63368612(EVENT_WAR_SPNAME_PREFIX, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        QuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o **v5; // x8
  QuestBoardListViewItemDraw_c *v6; // x0
  __int64 v7; // x8

  if ( (byte_4C1ECED & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&questType);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C1ECED = 1;
  }
  v5 = (System_String_o **)&StringLiteral_1/*""*/;
  switch ( questType )
  {
    case 1:
      v6 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v6 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v7 = 888LL;
      goto LABEL_13;
    case 2:
    case 5:
      v6 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v6 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v7 = 896LL;
      goto LABEL_13;
    case 3:
      v6 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v6 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v7 = 880LL;
LABEL_13:
      v5 = (System_String_o **)((char *)v6->static_fields + v7);
      break;
    default:
      return *v5;
  }
  return *v5;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C1ED04 & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&phaseType);
    byte_4C1ED04 = 1;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
        QuestBoardListViewItemDraw_o *this,
        int32_t phaseType,
        bool isOn,
        bool isLastIndex,
        bool isRepeatFirst,
        bool isRepeatLast,
        const MethodInfo *method)
{
  __int64 v12; // x1
  QuestBoardListViewItemDraw_c *v13; // x0
  System_String_o **p_msPhaseSprName_LoopFirstOff; // x8
  QuestBoardListViewItemDraw_c *v16; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  QuestBoardListViewItemDraw_c *v18; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v19; // x8
  QuestBoardListViewItemDraw_c *v20; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v21; // x8

  if ( (byte_4C1ED03 & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&phaseType);
    sub_1C3B764(&StringLiteral_1/*""*/, v12);
    byte_4C1ED03 = 1;
  }
  if ( isLastIndex && isRepeatFirst )
  {
    v13 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v13 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_msPhaseSprName_LoopFirstOff = &v13->static_fields->msPhaseSprName_LoopFirstOff;
  }
  else if ( isRepeatLast )
  {
    v16 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v16 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v16->static_fields;
    if ( isOn )
      p_msPhaseSprName_LoopFirstOff = &static_fields->msPhaseSprName_LoopOn;
    else
      p_msPhaseSprName_LoopFirstOff = &static_fields->msPhaseSprName_LoopOff;
  }
  else if ( phaseType == 1 )
  {
    v20 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v20 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v21 = v20->static_fields;
    if ( isOn )
      p_msPhaseSprName_LoopFirstOff = &v21->msPhaseSprName_ExArrowOn;
    else
      p_msPhaseSprName_LoopFirstOff = &v21->msPhaseSprName_ExArrowOff;
  }
  else if ( phaseType )
  {
    p_msPhaseSprName_LoopFirstOff = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    v18 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v18 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v19 = v18->static_fields;
    if ( isOn )
      p_msPhaseSprName_LoopFirstOff = &v19->msPhaseSprName_ArrowOn;
    else
      p_msPhaseSprName_LoopFirstOff = &v19->msPhaseSprName_ArrowOff;
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
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  int64_t v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  QuestPhasePresentEntity_o *v22; // x8
  QuestPhasePresentEntity_o *presentEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1ECF4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhasePresentMaster___, phasePresentData);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&QuestBoardListViewItemDraw_PhasePresentData_TypeInfo, v12);
    byte_4C1ECF4 = 1;
  }
  presentEnt = 0LL;
  *phasePresentData = 0LL;
  sub_1C3B708(
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhasePresentMaster___);
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
    v15 = sub_1C3B9B0(QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    QuestBoardListViewItemDraw_PhasePresentData___ctor((QuestBoardListViewItemDraw_PhasePresentData_o *)v15, 0LL);
    v22 = presentEnt;
    if ( presentEnt && v15 )
    {
      *(_QWORD *)(v15 + 16) = *(_QWORD *)&presentEnt->fields.phase;
      *(_DWORD *)(v15 + 24) = v22->fields.giftIconId;
      *phasePresentData = (QuestBoardListViewItemDraw_PhasePresentData_o *)v15;
      sub_1C3B708((PartyOrganizationUtility_o *)phasePresentData, v15, v16, v17, v18, v19, v20, v21);
      return 1;
    }
LABEL_15:
    sub_1C3B9C0(Master_object, v14);
  }
  return 0;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetQuestIconName(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w19
  int32_t iconId; // t1
  QuestBoardListViewItemDraw_c *v11; // x0
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x20
  System_String_o *v13; // x1
  __int64 *v15; // x8

  if ( (byte_4C1ECF0 & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, questEnt);
    sub_1C3B764(&StringLiteral_20842/*"localScale.y"*/, v6);
    sub_1C3B764(&StringLiteral_20841/*"localScale.x"*/, v7);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&StringLiteral_1/*""*/, v8);
    byte_4C1ECF0 = 1;
  }
  if ( !questEnt )
    sub_1C3B9C0(this, questEnt);
  iconId = questEnt->fields.iconId;
  v9 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v15 = &StringLiteral_20841/*"localScale.x"*/;
    }
    else if ( questType == 2 )
    {
      v15 = &StringLiteral_20842/*"localScale.y"*/;
    }
    else
    {
      v15 = (__int64 *)&StringLiteral_1/*""*/;
    }
    return (System_String_o *)*v15;
  }
  else
  {
    v11 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v11 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_ICON_SPNAME_PREFIX = v11->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v13 = System_Int32__ToString(v9, 0LL);
    return System_String__Concat_63368612(QUEST_BOARD_ICON_SPNAME_PREFIX, v13, 0LL);
  }
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetQuestIconNameForMainType(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t v7; // w20
  int32_t iconId; // w21
  QuestBoardListViewItemDraw_c *v9; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x19
  System_String_o *v12; // x0
  System_String_o *CHAPTER_SP_BASE_NAME; // x20
  Il2CppObject *v15; // x0
  int32_t chapterId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C1ECF1 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, questEnt);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v6);
    byte_4C1ECF1 = 1;
  }
  if ( !questEnt )
    sub_1C3B9C0(this, questEnt);
  v7 = (_DWORD)questEnt + 68;
  iconId = questEnt->fields.iconId;
  v9 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v9 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( iconId < 1 )
  {
    CHAPTER_SP_BASE_NAME = static_fields->CHAPTER_SP_BASE_NAME;
    chapterId = questEnt->fields.chapterId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chapterId, method, v3, v4);
    return System_String__Format(CHAPTER_SP_BASE_NAME, v15, 0LL);
  }
  else
  {
    QUEST_BOARD_ICON_SPNAME_PREFIX = static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v12 = System_Int32__ToString(v7, 0LL);
    return System_String__Concat_63368612(QUEST_BOARD_ICON_SPNAME_PREFIX, v12, 0LL);
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
    return QuestEntity__getRecommendLv_40925104(questEnt, questPhase, 0LL);
  else
    return 0LL;
}


RoadmapButtonPrefab_o *__fastcall QuestBoardListViewItemDraw__GetRoadmapButton(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.roadmapButton;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall QuestBoardListViewItemDraw__GetStatusSp(
        QuestBoardListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *mStatusSp; // x8

  mStatusSp = this->fields.mStatusSp;
  if ( !mStatusSp )
    sub_1C3B9C0(this, status);
  if ( status - 1 >= mStatusSp->max_length )
    sub_1C3B9C8(this, *(_QWORD *)&status);
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
          sub_1C3B9C8(this, bannerEntList);
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
    sub_1C3B9C0(this, bannerEntList);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestBoardListViewItemDraw___c__DisplayClass317_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4C1ECE7 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_MapControl_QuestInfo___, questList);
    sub_1C3B764(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v8);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__DisplayClass317_0__HasNewQuestInWar_b__0__, v9);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass317_0_TypeInfo, v10);
    byte_4C1ECE7 = 1;
  }
  v11 = (QuestBoardListViewItemDraw___c__DisplayClass317_0_o *)sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass317_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass317_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_1C3B9C0(v12, v13);
  v11->fields.isMainInterlude = isMainInterlude;
  v11->fields.warId = warId;
  v14 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_MapControl_QuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v11,
    Method_QuestBoardListViewItemDraw___c__DisplayClass317_0__HasNewQuestInWar_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
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

  if ( (byte_4C1ED02 & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, isDoubleItemConsume);
    byte_4C1ED02 = 1;
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
    sub_1C3B9C0(mPhaseObj, isDoubleItemConsume);
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
    sub_1C3B9C0(this, questBoardItem);
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
    sub_1C3B9C0(mNextSp, method);
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
    sub_1C3B9C0(roadmapButton, method);
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

  if ( (byte_4C1ED1A & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_4C1ED1A = 1;
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

  if ( (byte_4C1ED1B & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_4C1ED1B = 1;
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

  if ( (byte_4C1ED0F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_4C1ED0F = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBoardListViewItemDraw__IsInterruptedQuest(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v10; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1ED21 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    byte_4C1ED21 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1C3B9C0(v10, v8);
  return UserInterruptionQuestMaster__TryGetEntity(
           (UserInterruptionQuestMaster_o *)Master_object,
           &entity,
           v10->static_fields->userIdNumber,
           questId,
           phase,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBoardListViewItemDraw__IsMainWar(
        QuestBoardListViewItemDraw_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4C1ECEC & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&warId);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C1ECEC = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->FesWarId == warId )
    return 1;
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
         warId,
         (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     warId,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C3B9C0(Instance, v12);
  }
  return LODWORD(Instance[6].klass) == 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsMultiInfoText(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4C1ED0E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_4C1ED0E = 1;
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
    sub_1C3B9C0(0LL, method);
  return BoardOptionEventTargetComponent__IsNeedAnim(eventTargetComponent, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
        QuestBoardListViewItemDraw_o *this,
        System_Collections_Generic_List_MapControl_QuestInfo__o *questList,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  WarEntity_o *v20; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Func_object__bool__o *v28; // x21

  if ( (byte_4C1ECE6 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_MapControl_QuestInfo___, questList);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1C3B764(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__DisplayClass316_0__IsPurchasedByRarePrism_b__0__, v9);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass316_0_TypeInfo, v10);
    byte_4C1ECE6 = 1;
  }
  v11 = sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass316_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass316_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = warEnt;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)warEnt, v14, v15, v16, v17, v18, v19);
  v20 = *(WarEntity_o **)(v11 + 16);
  if ( v20 && WarEntity__IsShop(v20, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v11 + 24) = MasterData_object;
      sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)MasterData_object, v22, v23, v24, v25, v26, v27);
      v28 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_MapControl_QuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v28,
        (Il2CppObject *)v11,
        Method_QuestBoardListViewItemDraw___c__DisplayClass316_0__IsPurchasedByRarePrism_b__0__,
        0LL);
      return BasicHelper__Any_object_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v28,
               (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_1C3B9C0(Instance, v13);
  }
  return 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsRewardIcons(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x8

  mRewardIconInfs = this->fields.mRewardIconInfs;
  return mRewardIconInfs && (signed int)mRewardIconInfs->max_length > 1;
}


bool __fastcall QuestBoardListViewItemDraw__IsUnknownWaveBattleClassIcon(
        QuestBoardListViewItemDraw_o *this,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  ViewWaveEnemyMaster_o *Master_object; // x0
  __int64 v7; // x1
  ViewWaveEnemyMaster_o *v8; // x21
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  ViewWaveEnemyEntity_array *v10; // x19
  int32_t ReachedWave; // w20
  __int64 v12; // x8
  unsigned int v13; // w21
  Il2CppClass **v14; // x22
  char *v15; // x22
  ViewWaveEnemyMaster_o *v16; // t1

  if ( (byte_4C1ED22 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___, questPhaseEntity);
    sub_1C3B764(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v4);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    byte_4C1ED22 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !questPhaseEntity )
    goto LABEL_26;
  v8 = Master_object;
  if ( !Master_object )
    goto LABEL_26;
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            Master_object,
                            questPhaseEntity->fields.questId,
                            0LL);
  if ( !EntityListFromQuestId )
    return (char)EntityListFromQuestId;
  v10 = EntityListFromQuestId;
  if ( !*(_QWORD *)&EntityListFromQuestId->max_length )
  {
LABEL_23:
    LOBYTE(EntityListFromQuestId) = 0;
    return (char)EntityListFromQuestId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
  if ( !Master_object )
LABEL_26:
    sub_1C3B9C0(Master_object, v7);
  ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                  (ReachedWaveInfoMaster_o *)Master_object,
                  questPhaseEntity->fields.questId,
                  0LL);
  Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v8, v10, ReachedWave, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_23;
  v12 = *(_QWORD *)&v10->max_length;
  v13 = v12 - 1;
  if ( (int)v12 - 1 < 0 )
    goto LABEL_23;
  if ( v13 >= (unsigned int)v12 )
LABEL_22:
    sub_1C3B9C8(Master_object, v7);
  while ( 1 )
  {
    v14 = &v10->obj.klass + v13;
    v16 = (ViewWaveEnemyMaster_o *)v14[4];
    v15 = (char *)(v14 + 4);
    Master_object = v16;
    if ( !v16 )
      goto LABEL_26;
    Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyEntity__GetUnknownDispInfo(
                                               (ViewWaveEnemyEntity_o *)Master_object,
                                               0LL);
    if ( Master_object )
    {
      if ( v13 >= v10->max_length )
        goto LABEL_22;
      if ( !*(_QWORD *)v15 )
        goto LABEL_26;
      if ( ReachedWave < *(_DWORD *)(*(_QWORD *)v15 + 56LL) )
        break;
    }
    if ( (--v13 & 0x80000000) != 0 )
      goto LABEL_23;
    if ( v13 >= v10->max_length )
      goto LABEL_22;
  }
  LOBYTE(EntityListFromQuestId) = 1;
  return (char)EntityListFromQuestId;
}


bool __fastcall QuestBoardListViewItemDraw__IsValidSupportSelection(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  long double v15; // q0
  System_Object_array *RestrictionList; // x21
  QuestBoardListViewItemDraw___c_c *v17; // x0
  System_Func_object__bool__o *_9__359_0; // x22
  Il2CppObject *v19; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x0
  __int64 v28; // x0
  _BOOL4 v29; // w22
  bool v30; // w8
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1ED0B & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_RestrictionEntity___, questEntity);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, v7);
    sub_1C3B764(&System_Func_RestrictionEntity__bool__TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__359_0__, v11);
    sub_1C3B764(&QuestBoardListViewItemDraw___c_TypeInfo, v12);
    byte_4C1ED0B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
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
      v17 = QuestBoardListViewItemDraw___c_TypeInfo;
      if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
        v17 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      _9__359_0 = (System_Func_object__bool__o *)v17->static_fields->__9__359_0;
      if ( !_9__359_0 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v17->static_fields->__9;
        _9__359_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__359_0,
          v19,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__359_0__,
          0LL);
        static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__359_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__359_0;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&static_fields->__9__359_0,
          (int64_t)_9__359_0,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_object__50179104(
                                  RestrictionList,
                                  (System_Func_T__bool__o *)_9__359_0,
                                  (const MethodInfo_2FDAC20 *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C8D640(v15);
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C8D640(v15);
  Instance = **(DataManager_o ***)(v28 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !Instance )
  {
LABEL_38:
    sub_1C3B9C0(Instance, v14);
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(
          (QuestRestrictionInfoMaster_o *)Instance,
          &entity,
          questEntity->fields.id,
          phase,
          0LL) )
  {
    if ( !QuestEntity__HasFlag_40925964(questEntity, 0x80000LL, phase, 0LL)
      && !QuestEntity__HasFlag_40925964(questEntity, 0x100000LL, phase, 0LL)
      && !QuestEntity__HasFlag_40925964(questEntity, 0x10000000LL, phase, 0LL) )
    {
      LOBYTE(v29) = questEntity->fields.type != 7;
      if ( ((unsigned __int8)RestrictionList & 1) != 0 )
        goto LABEL_34;
      goto LABEL_36;
    }
LABEL_33:
    LOBYTE(v29) = 0;
    if ( ((unsigned __int8)RestrictionList & 1) != 0 )
      goto LABEL_34;
LABEL_36:
    v30 = !QuestEntity__HasFlag_40925964(questEntity, 2LL, phase, 0LL);
    return v29 && v30;
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
  v29 = !QuestRestrictionInfoEntity__HasFlag(entity, 0x10000000LL, 0LL);
  if ( ((unsigned __int8)RestrictionList & 1) == 0 )
    goto LABEL_36;
LABEL_34:
  v30 = 0;
  return v29 && v30;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  QuestBoardListViewItemDraw_c *v32; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v35; // x0
  struct System_String_o *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_String_o *boardIconName; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_o *v50; // x19
  AssetLoader_LoadEndDataHandler_o *v51; // x21
  int32_t v52; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C1ED1E & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, questEntity);
    sub_1C3B764(&int_TypeInfo, v7);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__DisplayClass393_0__LoadBoardIconTexture_b__0__, v11);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass393_0_TypeInfo, v12);
    byte_4C1ED1E = 1;
  }
  v13 = sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass393_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass393_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass393_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v28);
  if ( !questEntity )
    goto LABEL_14;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v32 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v32 = QuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v32->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v52 = iconId;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v29, v30, v31);
  v36 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v35, 0LL);
  this->fields.boardIconName = v36;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.boardIconName, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  boardIconName = this->fields.boardIconName;
  *(_QWORD *)(v13 + 16) = boardIconName;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)boardIconName, v44, v45, v46, v47, v48, v49);
  v50 = System_String__Concat_63368612(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v51 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v51,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewItemDraw___c__DisplayClass393_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v50, v51, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1C3B9C0(Instance, v15);
  }
}


void __fastcall QuestBoardListViewItemDraw__MoveBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *IsBanners; // x0
  const MethodInfo *v8; // x1
  char v9; // w21
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x21
  int32_t bannerFocusIndex; // w22
  __int64 v13; // x23
  struct TerminalBannerComponent_array *v14; // x8
  Il2CppClass **v15; // x8
  TerminalBannerComponent_o *v16; // x20
  const MethodInfo *v17; // x2
  int32_t v18; // w1
  char v19; // w21
  float realtimeSinceStartup; // s8
  __int64 v21; // x22
  struct TerminalBannerComponent_array *mTerminalBanners; // x8

  if ( (byte_4C1ED18 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, questBoardItem);
    sub_1C3B764(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v5);
    sub_1C3B764(&TerminalBannerComponent_TypeInfo, v6);
    byte_4C1ED18 = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (WebViewManager_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)WebViewManager__get_IsBusy(IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = (WebViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_40;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_MasterMission((CommonUI_o *)IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
  {
LABEL_12:
    v9 = 0;
  }
  else
  {
    v19 = (char)IsBanners;
    if ( !this->fields.mIsEnableBannerAutoMoveOld )
      QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(this, v8);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    if ( (float)(realtimeSinceStartup - this->fields.mBannerAutoMoveTimeOld) >= this->fields.mBannerAutoMoveTimeInterval )
    {
      if ( this->fields.mBannerCount >= 1 )
      {
        v21 = 0LL;
        while ( 1 )
        {
          mTerminalBanners = this->fields.mTerminalBanners;
          if ( !mTerminalBanners )
            break;
          if ( (unsigned int)v21 >= mTerminalBanners->max_length )
LABEL_41:
            sub_1C3B9C8(IsBanners, v8);
          IsBanners = (WebViewManager_o *)mTerminalBanners->m_Items[v21];
          if ( !IsBanners )
            break;
          TerminalBannerComponent__StartAutoMoveL((TerminalBannerComponent_o *)IsBanners, 0LL);
          if ( (int)++v21 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_40:
        sub_1C3B9C0(IsBanners, v8);
      }
LABEL_37:
      this->fields.mBannerAutoMoveTimeOld = realtimeSinceStartup;
      v9 = (v19 & 1) == 0;
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
      v9 = 1;
    }
  }
  this->fields.mIsEnableBannerAutoMoveOld = v9;
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
    v13 = 0LL;
    do
    {
      v14 = this->fields.mTerminalBanners;
      if ( !v14 )
        goto LABEL_40;
      if ( (unsigned int)v13 >= v14->max_length )
        goto LABEL_41;
      v15 = &v14->obj.klass + v13;
      v16 = (TerminalBannerComponent_o *)v15[4];
      if ( !v16 )
        goto LABEL_40;
      TerminalBannerComponent__Move((TerminalBannerComponent_o *)v15[4], this, 0LL);
      IsBanners = (WebViewManager_o *)TerminalBannerComponent__IsFocus(v16, 0LL);
      if ( ((unsigned __int8)IsBanners & 1) != 0 )
        AreaBoardInfo_k__BackingField->fields.bannerFocusIndex = v16->fields.mIdx;
      ++v13;
    }
    while ( (int)v13 < this->fields.mBannerCount );
    v18 = AreaBoardInfo_k__BackingField->fields.bannerFocusIndex;
    if ( v18 != bannerFocusIndex )
      QuestBoardListViewItemDraw__UpdateDispBannerPoint(this, v18, v17);
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

  if ( (byte_4C1ECDC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1ECDC = 1;
  }
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, method);
  eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
  {
    v5 = this->fields.eventTargetComponent;
    if ( !v5 )
      sub_1C3B9C0(0LL, v4);
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
  UnityEngine_Vector2_o ScreenPosition_48001872; // kr00_8
  float v10; // s0
  float v11; // s1
  const MethodInfo *v12; // x3

  v7 = this;
  if ( (byte_4C1ED13 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&CTouch_TypeInfo, questBoardItem);
    byte_4C1ED13 = 1;
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
          ScreenPosition_48001872 = CTouch__getScreenPosition_48001872(mUICamera, 0LL);
          v10 = vabds_f32(v7->fields.mPressPos.fields.x, ScreenPosition_48001872.fields.x);
          v11 = vabds_f32(v7->fields.mPressPos.fields.y, ScreenPosition_48001872.fields.y);
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
        sub_1C3B9C0(this, questBoardItem);
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
          sub_1C3B9C8(IsBanners, v5);
        IsBanners = mTerminalBanners->m_Items[v7];
        if ( !IsBanners )
LABEL_10:
          sub_1C3B9C0(IsBanners, v5);
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
  if ( (byte_4C1ED12 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&CTouch_TypeInfo, questBoardItem);
    byte_4C1ED12 = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    v8->fields.mIsPressed = 1;
    if ( !questBoardManager || (this = (QuestBoardListViewItemDraw_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_1C3B9C0(this, questBoardItem);
    if ( !UIScrollView__IsLimitOverPosition((UIScrollView_o *)this, 0LL) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8->fields.mPressPos = CTouch__getScreenPosition_48001872(mUICamera, 0LL);
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
          sub_1C3B9C8(IsBanners, v5);
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_1C3B9C0(IsBanners, v5);
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
      sub_1C3B9C0(scrollView, v8);
    UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
    this->fields.mTouchPosDif = 0.0;
  }
}


void __fastcall QuestBoardListViewItemDraw__ReleaseBoardIconTexture(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  QuestBoardListViewItemDraw_c *v4; // x0
  System_String_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C1ED1F & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v3);
    byte_4C1ED1F = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0LL) )
  {
    v4 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v4 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v5 = System_String__Concat_63368612(
           v4->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
           this->fields.boardIconName,
           0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0LL);
    this->fields.boardIconAssetData = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.boardIconAssetData, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.boardIconName = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.boardIconName, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_4C1ED15 & 1) == 0 )
  {
    sub_1C3B764(&TerminalBannerComponent_TypeInfo, method);
    byte_4C1ED15 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  int32_t size; // w2
  int v7; // w9
  PartyOrganizationUtility_o *p_mInfoTextList; // x19
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4C1ECDE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v4);
    byte_4C1ECDE = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    v7 = mInfoTextList->fields._version + 1;
    mInfoTextList->fields._size = 0;
    mInfoTextList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mInfoTextList->fields._items, 0, size, 0LL);
  }
  else
  {
    p_mInfoTextList = (PartyOrganizationUtility_o *)&this->fields.mInfoTextList;
    v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (PartyOrganizationUtility_c *)v9;
    sub_1C3B708(p_mInfoTextList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4C1ED0C & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, questBoardItem);
    byte_4C1ED0C = 1;
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
    sub_1C3B9C0(mCostObj, questBoardItem);
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
  __int64 mAdvanceNoticeLb; // x0
  System_String_o *monitor; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  char v31; // w26
  int32_t monitor_high; // w28
  char v33; // w23
  Il2CppObject *PrioredName; // x0
  System_String_o *v35; // x0
  int32_t WarID_ByQuestID; // w27
  int64_t OpenedAt; // x27
  System_Object_array *v38; // x27
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x28
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x28
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x28
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x28
  bool v79; // w25
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v83; // x22
  _BOOL4 v84; // w21
  UILabel_o *mTitleNameLb; // x24
  UILabel_o *mCondChangeMessage; // x19
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v88; // x9
  int32_t v89; // w24
  int32_t leftIndent; // w25
  float v91; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v93; // s1
  float v94; // s0
  int v95; // s2
  float v96; // s9
  float v97; // s0
  float v98; // s1
  float v99; // s0
  int v100; // s2
  float v101; // s1
  int v102; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v104; // x4
  const MethodInfo *v105; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v107; // x21
  float v108; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v110; // x0
  int32_t v111; // [xsp+Ch] [xbp-A4h]
  int32_t Minute; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t Hour; // [xsp+18h] [xbp-98h] BYREF
  int32_t Day; // [xsp+1Ch] [xbp-94h] BYREF
  int64_t questReleaseValue; // [xsp+20h] [xbp-90h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-88h] BYREF
  Il2CppObject *v117; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-78h] BYREF
  System_DateTime_o v119; // 0:x0.8
  System_DateTime_o v120; // 0:x0.8
  System_DateTime_o v121; // 0:x0.8
  System_DateTime_o v122; // 0:x0.8
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4

  v7 = questInfo;
  if ( (byte_4C1ECF3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ClosedMessageMaster___, questInfo);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v10);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v12);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v13);
    sub_1C3B764(&System_DateTime_TypeInfo, v14);
    sub_1C3B764(&int_TypeInfo, v15);
    sub_1C3B764(&long_TypeInfo, v16);
    sub_1C3B764(&LocalizationManager_TypeInfo, v17);
    sub_1C3B764(&NetworkManager_TypeInfo, v18);
    sub_1C3B764(&object___TypeInfo, v19);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v20);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v21);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v23);
    sub_1C3B764(&StringLiteral_15108/*"WARBOARD_SWAP_CONFIRMATION_SVT_MESSAGE_HAS_COST"*/, v24);
    sub_1C3B764(&StringLiteral_1/*""*/, v25);
    byte_4C1ECF3 = 1;
  }
  v117 = 0LL;
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
  mAdvanceNoticeLb = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mAdvanceNoticeLb )
    goto LABEL_134;
  mAdvanceNoticeLb = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)mAdvanceNoticeLb,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !mAdvanceNoticeLb )
    goto LABEL_134;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  mAdvanceNoticeLb = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)mAdvanceNoticeLb,
                       &entity,
                       v7->fields.questReleaseClosedID,
                       (const MethodInfo_329AE94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (mAdvanceNoticeLb & 1) != 0 )
  {
    mAdvanceNoticeLb = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    monitor = (System_String_o *)entity[1].monitor;
    mAdvanceNoticeLb = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_134;
    v31 = mAdvanceNoticeLb;
    mAdvanceNoticeLb = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_134;
    monitor_high = HIDWORD(entity[2].monitor);
    v33 = mAdvanceNoticeLb;
  }
  else
  {
    monitor_high = 0;
    v33 = 0;
    v31 = 0;
  }
  switch ( v7->fields.questReleaseType )
  {
    case 1:
      mAdvanceNoticeLb = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !mAdvanceNoticeLb )
        goto LABEL_134;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                          (QuestTree_o *)mAdvanceNoticeLb,
                          v7->fields.questReleaseTargetID,
                          0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mAdvanceNoticeLb = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !mAdvanceNoticeLb )
        goto LABEL_134;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)mAdvanceNoticeLb,
              &v117,
              WarID_ByQuestID,
              (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        goto LABEL_48;
      mAdvanceNoticeLb = (__int64)v117;
      if ( !v117 )
        goto LABEL_134;
      PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v117, 0LL);
LABEL_20:
      v35 = System_String__Format(monitor, PrioredName, 0LL);
      goto LABEL_47;
    case 6:
    case 7:
    case 9:
      questReleaseValue = v7->fields.questReleaseValue;
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue, v28, v29, v30);
      goto LABEL_20;
    case 0xC:
      if ( !questEnt )
        goto LABEL_134;
      OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v111 = monitor_high;
      dateData = NetworkManager__getServerDateTime_39987360(OpenedAt, 0LL).fields._dateData;
      v38 = (System_Object_array *)sub_1C3B80C(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v119.fields._dateData = (uint64_t)&dateData;
      LODWORD(questReleaseValue) = System_DateTime__get_Month(v119, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue, v39, v40, v41);
      if ( !v38 )
        goto LABEL_134;
      v48 = mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C3B8A0(mAdvanceNoticeLb, v38->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_136;
      }
      if ( !v38->max_length )
        goto LABEL_135;
      v38->m_Items[0] = (Il2CppObject *)v48;
      sub_1C3B708((PartyOrganizationUtility_o *)v38->m_Items, v48, v42, v43, v44, v45, v46, v47);
      v120.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v120, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Day, v49, v50, v51);
      v58 = mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C3B8A0(mAdvanceNoticeLb, v38->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_136;
      }
      if ( v38->max_length <= 1 )
        goto LABEL_135;
      v38->m_Items[1] = (Il2CppObject *)v58;
      sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[1], v58, v52, v53, v54, v55, v56, v57);
      v121.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v121, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v59, v60, v61);
      v68 = mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C3B8A0(mAdvanceNoticeLb, v38->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_136;
      }
      if ( v38->max_length <= 2 )
        goto LABEL_135;
      v38->m_Items[2] = (Il2CppObject *)v68;
      sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[2], v68, v62, v63, v64, v65, v66, v67);
      v122.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v122, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v69, v70, v71);
      v78 = mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_1C3B8A0(mAdvanceNoticeLb, v38->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
        {
LABEL_136:
          v110 = sub_1C3B9E4();
          sub_1C3B88C(v110, 0LL);
        }
      }
      if ( v38->max_length <= 3 )
LABEL_135:
        sub_1C3B9C8(mAdvanceNoticeLb, questInfo);
      v38->m_Items[3] = (Il2CppObject *)v78;
      sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[3], v78, v72, v73, v74, v75, v76, v77);
      v35 = System_String__Format_63383120(monitor, v38, 0LL);
      monitor_high = v111;
LABEL_47:
      monitor = v35;
LABEL_48:
      if ( (v31 & 1) != 0 )
      {
        v79 = 1;
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
          v79 = WarEntity__IsChangeDispClosedMessage(Mine, 0LL);
        else
LABEL_55:
          v79 = 0;
      }
      mAdvanceNoticeLb = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mAdvanceNoticeLb )
        goto LABEL_134;
      mAdvanceNoticeLb = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)mAdvanceNoticeLb,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
      if ( !questEnt || !mAdvanceNoticeLb )
        goto LABEL_134;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)mAdvanceNoticeLb,
                                 questEnt->fields.id,
                                 checkTime,
                                 0LL);
      v83 = EntityByQuestIdAndTime;
      if ( !EntityByQuestIdAndTime )
      {
        v84 = 0;
        if ( v79 )
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
        if ( v84 )
        {
          mAdvanceNoticeLb = (__int64)this->fields.mCondObject;
          if ( mAdvanceNoticeLb )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0LL);
            if ( v83 )
            {
              mAdvanceNoticeLb = (__int64)this->fields.mCondChangeMessage;
              if ( mAdvanceNoticeLb )
              {
                UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, v83->fields.overlayClosedMessage, 0LL);
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
      v84 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
      if ( !v79 )
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
          mAdvanceNoticeLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15108/*"WARBOARD_SWAP_CONFIRMATION_SVT_MESSAGE_HAS_COST"*/, 0LL);
          questInfo = (MapControl_QuestInfo_o *)mAdvanceNoticeLb;
        }
        if ( !mTitleNameLb )
LABEL_134:
          sub_1C3B9C0(mAdvanceNoticeLb, questInfo);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mAdvanceNoticeLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15108/*"WARBOARD_SWAP_CONFIRMATION_SVT_MESSAGE_HAS_COST"*/, 0LL);
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
      v88 = 48LL;
      if ( !v84 )
        v88 = 44LL;
      v89 = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v88);
      if ( v84 )
      {
        if ( !v83 )
          goto LABEL_134;
        leftIndent = v83->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v91 = (float)monitor_high;
      if ( (v33 & 1) != 0 )
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
        v93 = 24.0;
        if ( !v84 )
          v93 = 0.0;
        v95 = 0;
        v94 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v91;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v93 - 1),
          0LL);
        mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_134;
        v96 = *(float *)(*(_QWORD *)(mAdvanceNoticeLb + 184) + 52LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)mAdvanceNoticeLb,
                                      0LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        v97 = v96 + (float)leftIndent;
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
        v98 = 24.0;
        if ( !v84 )
          v98 = 0.0;
        v100 = 0;
        v99 = v91 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v98 - 1),
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
        v97 = (float)leftIndent * 0.5;
      }
      v101 = -26.0;
      v102 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)mAdvanceNoticeLb,
        *(UnityEngine_Vector3_o *)&v97,
        0LL);
      mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !mAdvanceNoticeLb )
        goto LABEL_134;
      UIWidget__set_height((UIWidget_o *)mAdvanceNoticeLb, v89, 0LL);
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
        v89,
        monitor_high,
        v104);
      if ( v84 )
      {
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !mAdvanceNoticeLb )
          goto LABEL_134;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0LL);
        if ( !v83 )
          goto LABEL_134;
        overlayClosedMessage = v83->fields.overlayClosedMessage;
        v107 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v108 = v91 * 0.5;
        QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_331_0(
          v107,
          overlayClosedMessage,
          v89,
          leftIndent,
          v105);
      }
      else
      {
        v108 = 0.0;
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
            v123.fields.y = 0.0;
            v123.fields.z = 0.0;
            v123.fields.x = v108;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mAdvanceNoticeLb, v123, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *mNoticeNumberRoot; // x0
  UnityEngine_Object_o *mNoticeNumber; // x22
  PartyOrganizationUtility_o *p_mNoticeNumber; // x21
  Il2CppObject *mNoticeNumberPrefab; // x22
  Il2CppObject *v11; // x0
  UnityEngine_GameObject_o *v12; // x1
  UnityEngine_GameObject_o *v13; // x20
  Il2CppObject *Component_object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4C1ECF8 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&num);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    byte_4C1ECF8 = 1;
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
    v11 = UnityEngine_Object__Instantiate_object_(
            mNoticeNumberPrefab,
            (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v12 = this->fields.mNoticeNumberRoot;
    v13 = (UnityEngine_GameObject_o *)v11;
    GameObjectExtensions__SafeSetParent_34969340((UnityEngine_GameObject_o *)v11, v12, 0LL);
    if ( v13 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v13,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (PartyOrganizationUtility_c *)Component_object;
      sub_1C3B708(p_mNoticeNumber, (int64_t)Component_object, v15, v16, v17, v18, v19, v20);
      goto LABEL_11;
    }
LABEL_13:
    sub_1C3B9C0(mNoticeNumberRoot, *(_QWORD *)&num);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t lastQuestId; // w24
  UnityEngine_GameObject_o *blackMarkSpace; // x24
  QuestBoardListViewItemDraw_c *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x23
  QuestBoardListViewItemDraw_c *v20; // x0
  UnityEngine_Object_o *black_mark_prefab_k__BackingField; // x23
  UnityEngine_Object_o *blackMarkEffect; // x23
  Il2CppObject *v23; // x24
  struct UnityEngine_GameObject_o **p_blackMarkEffect; // x23
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  UnityEngine_GameObject_o *v34; // x23
  int32_t v35; // w23
  UnityEngine_GameObject_o *v36; // x22
  QuestBoardListViewItemDraw_c *v37; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  QuestBoardListViewItemDraw_c *v42; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v43; // x10
  UnityEngine_GameObject_o *v44; // x21
  QuestBoardListViewItemDraw_c *v45; // x0
  UnityEngine_Object_o *white_mark_prefab_k__BackingField; // x21
  UnityEngine_Object_o *whiteMarkEffect; // x21
  Il2CppObject *v48; // x21
  struct UnityEngine_GameObject_o **p_whiteMarkEffect; // x20
  UnityEngine_Transform_o *v50; // x22
  Il2CppObject *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  UnityEngine_GameObject_o *v59; // x20
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1ECE0 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, questBoardItem);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v13);
    byte_4C1ECE0 = 1;
  }
  if ( !warEntity )
    return;
  if ( !WarEntity__IsBlackMarkWithClear(warEntity, 0LL) )
    goto LABEL_12;
  lastQuestId = warEntity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsQuestClear_39011304(lastQuestId, -1, 0, 0LL) )
  {
LABEL_12:
    if ( !isBlackMarkOnly )
      goto LABEL_31;
    goto LABEL_13;
  }
  blackMarkSpace = this->fields.blackMarkSpace;
  v16 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v16 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(blackMarkSpace, v16->static_fields->BLACK_MARK_OBJ_POS, 0LL);
  if ( isBlackMarkOnly )
  {
LABEL_13:
    v19 = this->fields.blackMarkSpace;
    v20 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v20 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v19, v20->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
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
      v17 = this->fields.blackMarkSpace;
      if ( !v17 )
        goto LABEL_64;
      v23 = (Il2CppObject *)questBoardItem->fields._black_mark_prefab_k__BackingField;
      p_blackMarkEffect = &this->fields.blackMarkEffect;
      transform = UnityEngine_GameObject__get_transform(v17, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v26 = UnityEngine_Object__Instantiate_object__50818788(
              v23,
              transform,
              (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v26;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.blackMarkEffect,
        (int64_t)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v34 = *p_blackMarkEffect;
      if ( !byte_4C1C511 )
      {
        sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v33);
        byte_4C1C511 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v34, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    v17 = this->fields.blackMarkSpace;
    if ( !v17 )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(v17, 1, 0LL);
  }
LABEL_31:
  if ( WarEntity__IsWhiteMarkWithClear(warEntity, 0LL) )
  {
    v35 = warEntity->fields.lastQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_39011304(v35, -1, 0, 0LL) )
    {
      v36 = this->fields.blackMarkSpace;
      v37 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v37 = QuestBoardListViewItemDraw_TypeInfo;
      }
      static_fields = v37->static_fields;
      p_x = &static_fields->BLACK_MARK_OBJ_POS.fields.x;
      p_y = &static_fields->BLACK_MARK_OBJ_POS.fields.y;
      p_z = &static_fields->BLACK_MARK_OBJ_POS.fields.z;
      goto LABEL_42;
    }
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(warEntity, 0LL) )
  {
    v36 = this->fields.blackMarkSpace;
    v42 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v42 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v43 = v42->static_fields;
    p_x = &v43->WHITE_MARK_OBJ_UNDER_POS.fields.x;
    p_y = &v43->WHITE_MARK_OBJ_UNDER_POS.fields.y;
    p_z = &v43->WHITE_MARK_OBJ_UNDER_POS.fields.z;
LABEL_42:
    v60.fields.y = *p_y;
    v60.fields.x = *p_x;
    v60.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v36, v60, 0LL);
    if ( !isWhiteMarkOnly )
      goto LABEL_48;
    goto LABEL_45;
  }
  if ( !isWhiteMarkOnly )
    return;
LABEL_45:
  v44 = this->fields.blackMarkSpace;
  v45 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v45 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v44, v45->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
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
      v17 = this->fields.blackMarkSpace;
      if ( !v17 )
        goto LABEL_64;
      v48 = (Il2CppObject *)questBoardItem->fields._white_mark_prefab_k__BackingField;
      p_whiteMarkEffect = &this->fields.whiteMarkEffect;
      v50 = UnityEngine_GameObject__get_transform(v17, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v51 = UnityEngine_Object__Instantiate_object__50818788(
              v48,
              v50,
              (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
      *p_whiteMarkEffect = (struct UnityEngine_GameObject_o *)v51;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.whiteMarkEffect,
        (int64_t)v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      v59 = *p_whiteMarkEffect;
      if ( !byte_4C1C511 )
      {
        sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v58);
        byte_4C1C511 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v59, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    v17 = this->fields.blackMarkSpace;
    if ( v17 )
    {
      UnityEngine_GameObject__SetActive(v17, 1, 0LL);
      return;
    }
LABEL_64:
    sub_1C3B9C0(v17, v18);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetChapterSubIdDisp(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  QuestEntity_o *v12; // x21
  Il2CppObject *Entity; // x22
  const MethodInfo *v14; // x3
  _BOOL4 HasFlag; // w23
  _BOOL8 v16; // x0
  UILabel_o *mLabelSubSectionNumLb; // x22
  Il2CppObject *Component_object; // x22
  UISprite_o *mLabelChapterSp; // x22
  QuestBoardListViewItemDraw_o *v20; // x0
  const MethodInfo *v21; // x2
  System_String_o *QuestIconNameForMainType; // x21
  int32_t QuestBoardSectionId; // w0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int v27; // w21
  UISprite_o *mLabelBoardSectionSp; // x20
  QuestBoardListViewItemDraw_c *v29; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x22
  Il2CppObject *v31; // x0
  System_String_o *v32; // x21
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C1ECEF & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, questInfo);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v8);
    sub_1C3B764(&int_TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v11);
    byte_4C1ECEF = 1;
  }
  if ( !questInfo )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)MapControl_QuestInfo__GetMine(questInfo, 0LL);
  if ( !this )
    goto LABEL_47;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)this, 0LL);
  if ( !v4->fields.mLabelSubSectionNumLb )
    goto LABEL_47;
  v12 = (QuestEntity_o *)this;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v4->fields.mLabelSubSectionNumLb,
                                           0LL);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v12 )
    goto LABEL_47;
  if ( v12->fields.iconId <= 0
    && !QuestEntity__HasFlag(v12, 0x2000000000000000LL, 0LL)
    && System_String__IsNullOrEmpty(v12->fields.chapterSubStr, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_47;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               questInfo->fields.warId,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    HasFlag = QuestEntity__HasFlag(v12, 0x40000LL, 0LL);
    v16 = Entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal((WarEntity_o *)Entity, 0LL);
    mLabelSubSectionNumLb = v4->fields.mLabelSubSectionNumLb;
    if ( HasFlag || v16 )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw__ConvertToChineseAscii(
                                               (QuestBoardListViewItemDraw_o *)v16,
                                               v12->fields.chapterSubId,
                                               v16,
                                               v14);
      if ( !mLabelSubSectionNumLb )
        goto LABEL_47;
    }
    else
    {
      this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v12 + 116, 0LL);
      if ( !mLabelSubSectionNumLb )
        goto LABEL_47;
    }
    UILabel__set_text(mLabelSubSectionNumLb, (System_String_o *)this, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelSubSectionNumLb;
    if ( !this )
      goto LABEL_47;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v20, v12, v21);
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
  v27 = QuestBoardSectionId;
  mLabelBoardSectionSp = v4->fields.mLabelBoardSectionSp;
  v29 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v29 = QuestBoardListViewItemDraw_TypeInfo;
  }
  CHAPTER_SP_UNIT_NAME = v29->static_fields->CHAPTER_SP_UNIT_NAME;
  v33 = v27;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v24, v25, v26);
  v32 = System_String__Format(CHAPTER_SP_UNIT_NAME, v31, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mLabelBoardSectionSp, v32, 0LL);
  if ( !mLabelBoardSectionSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)mLabelBoardSectionSp,
          (unsigned __int8)this & 1,
          0LL),
        (this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelBoardSectionSp) == 0LL) )
  {
LABEL_47:
    sub_1C3B9C0(this, questInfo);
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

  if ( (byte_4C1ECFB & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, warEnt);
    byte_4C1ECFB = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_1C3B9C0(0LL, v6);
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 type; // x8
  UnityEngine_GameObject_o *mCostObj; // x21
  _BOOL4 v34; // w20
  _BOOL4 HasFlag; // w28
  UIWidget_o *v36; // x21
  __int64 v37; // x9
  QuestConsumeItemEntity_o *v38; // x20
  QuestBoardListViewItemDraw_o **p_mCostLb2; // x21
  QuestConsumeItemEntity_o *v40; // x27
  bool v41; // w20
  QuestBoardListViewItemDraw_o **v42; // x26
  int bannerId; // w22
  UISprite_o *mCostApSp; // x21
  System_String_o *ApSpriteFileName; // x22
  int32_t ActConsume; // w0
  int32_t v47; // w29
  UserGameEntity_o *v48; // x28
  bool v49; // w24
  BalanceConfig_c *v50; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UISprite_o *mCostRpSp; // x21
  __int64 BpExpresssionType; // x20
  __int64 v54; // x8
  struct System_String_array *RP_SPNAME_POINT; // x8
  struct System_Int32_array *v56; // x8
  char v57; // w23
  QuestBoardListViewItemDraw_o *v58; // x22
  QuestBoardListViewItemDraw_c *v59; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *v61; // x8
  int32_t v62; // w20
  BalanceConfig_c *v63; // x0
  UIWidget_o *v64; // x22
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  struct System_Int32_array *v67; // x8
  int v68; // w23
  UISprite_o *v69; // x22
  System_String_o *v70; // x23
  BalanceConfig_c *v71; // x0
  bool v72; // w24
  Il2CppObject *Master_object; // x27
  Il2CppObject *v74; // x26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v76; // x8
  ItemEntity_o *v77; // x28
  const MethodInfo *v78; // x7
  struct System_Int32_array *nums; // x8
  UIWidget_o *v80; // x28
  struct System_Int32_array *v81; // x8
  struct System_Int32_array *v82; // x8
  const MethodInfo *v83; // x7
  struct System_Int32_array *v84; // x8
  bool v85; // w28
  UILabel_o *mCostLb1; // x25
  QuestBoardListViewItemDraw_o *v87; // x0
  const MethodInfo *v88; // x7
  UILabel_o *v89; // x25
  QuestBoardListViewItemDraw_o *v90; // x0
  const MethodInfo *v91; // x7
  UILabel_o *v92; // x29
  QuestBoardListViewItemDraw_o *v93; // x0
  const MethodInfo *v94; // x7
  UIWidget_o *v95; // x25
  Il2CppObject *v96; // x26
  Il2CppObject *v97; // x25
  struct System_Int32_array *v98; // x8
  struct System_Int32_array *v99; // x8
  ItemEntity_o *v100; // x25
  const MethodInfo *v101; // x7
  struct System_Int32_array *v102; // x8
  UISprite_o *v103; // x21
  struct UnityEngine_Transform_o *mTrans; // x8
  UISprite_o *v105; // x22
  struct UnityEngine_Transform_o *v106; // x8
  struct System_Int32_array *v107; // x8
  UnityEngine_GameObject_o *v108; // x0
  QuestBoardListViewItemDraw_c *v109; // x8
  UnityEngine_GameObject_o *v110; // x22
  UnityEngine_GameObject_o *v111; // x0
  struct System_Int32_array *v112; // x8
  int32_t v113; // w20
  BalanceConfig_c *v114; // x0
  UIWidget_o *v115; // x22
  UnityEngine_GameObject_o *v116; // x0
  UnityEngine_GameObject_o *v117; // x0
  UnityEngine_GameObject_o *v118; // x0
  QuestBoardListViewItemDraw_c *v119; // x8
  UnityEngine_GameObject_o *v120; // x22
  UnityEngine_GameObject_o *v121; // x0
  UnityEngine_GameObject_o *v122; // x0
  UnityEngine_GameObject_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  struct System_Int32_array *v125; // x8
  __int64 v126; // x1
  UnityEngine_GameObject_o *v127; // x21
  __int64 v128; // x1
  UnityEngine_GameObject_o *v129; // x21
  __int64 v130; // x1
  UnityEngine_GameObject_o *v131; // x21
  UIWidget_o *v132; // x21
  UILabel_o *v133; // x20
  UIWidget_o *v134; // x25
  struct System_Int32_array *v135; // x8
  struct System_Int32_array *v136; // x8
  const MethodInfo *v137; // x7
  struct System_Int32_array *v138; // x8
  bool *v139; // [xsp+8h] [xbp-B8h]
  bool v140; // [xsp+14h] [xbp-ACh]
  __int64 v141; // [xsp+20h] [xbp-A0h]
  UserItemEntity_o *usrItem; // [xsp+28h] [xbp-98h] BYREF
  UserItemEntity_o *entity; // [xsp+30h] [xbp-90h] BYREF
  int32_t v144; // [xsp+3Ch] [xbp-84h] BYREF
  UnityEngine_Color_o v145; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v146; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v147; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v148; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v149; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v150; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v158; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v159; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v160; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v22 = this;
  if ( (byte_4C1ECEA & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, questEnt);
    sub_1C3B764(&BalanceConfig_TypeInfo, v23);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UISprite___, v24);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, v25);
    sub_1C3B764(&Method_DataManager_GetMaster_UserItemMaster___, v26);
    sub_1C3B764(&DataManager_TypeInfo, v27);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v28);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v29);
    sub_1C3B764(&NetworkManager_TypeInfo, v30);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v31);
    byte_4C1ECEA = 1;
  }
  v144 = 0;
  usrItem = 0LL;
  entity = 0LL;
  if ( !questEnt )
    goto LABEL_402;
  type = questEnt->fields.type;
  *isDoubleItemConsume = 0;
  *isDoubleItemConsumeQp = 0;
  *isTripleItemConsume = 0;
  mCostObj = v22->fields.mCostObj;
  v141 = type;
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
    v34 = !QuestEntity__HasFlag(questEnt, 128LL, 0LL);
    HasFlag = QuestEntity__HasFlag(questEnt, 256LL, 0LL);
  }
  else
  {
    HasFlag = 0;
    LOBYTE(v34) = 1;
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
                                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v36 = (UIWidget_o *)this;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  v140 = v34;
  if ( !v36 )
    goto LABEL_402;
  v37 = 304LL;
  if ( (_DWORD)v141 == 7 )
    v37 = 316LL;
  UIWidget__set_width(
    v36,
    *(int32_t *)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v37),
    0LL);
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getItemConsumeEntity(questEnt, 0, 0LL);
  if ( !v22->fields.mCostBg1 )
    goto LABEL_402;
  v38 = (QuestConsumeItemEntity_o *)this;
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
    v139 = isDoubleItemConsumeQp;
    ActConsume = QuestEntity__getActConsume(questEnt, costCalcVal, 0LL);
    if ( fixedVal >= 0 )
      v47 = fixedVal;
    else
      v47 = ActConsume;
    v144 = v47;
    this = (QuestBoardListViewItemDraw_o *)UserGameMaster__getSelfUserGame(0LL);
    v48 = (UserGameEntity_o *)this;
    switch ( questEnt->fields.consumeType )
    {
      case 1:
        if ( !this )
          goto LABEL_402;
        v49 = v47 > SLODWORD(this->fields.mTerminalAtlas) || v47 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
        isDoubleItemConsumeQp = v139;
        mCostLb1 = v22->fields.mCostLb1;
        v87 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v144, 0LL);
        v153.fields.r = r;
        v153.fields.g = g;
        v153.fields.b = b;
        v153.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v87,
          mCostLb1,
          (System_String_o *)v87,
          costCalcVal,
          v153,
          v49,
          isClosed,
          fixedVal >= 0,
          v88);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        v42 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
        v40 = v38;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        v41 = v140;
        if ( !this )
          goto LABEL_402;
        goto LABEL_226;
      case 2:
        if ( !this )
          goto LABEL_402;
        v42 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
        if ( !byte_4C1ED26 )
        {
          sub_1C3B764(&BalanceConfig_TypeInfo, questEnt);
          byte_4C1ED26 = 1;
        }
        v71 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v71 = BalanceConfig_TypeInfo;
        }
        v40 = v38;
        v41 = v140;
        v72 = v47 > v71->static_fields->UerGameRpMax || v47 > UserGameEntity__getRp(v48, 0LL);
        isDoubleItemConsumeQp = v139;
        v89 = v22->fields.mCostLb1;
        v90 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v144, 0LL);
        v154.fields.r = r;
        v154.fields.g = g;
        v154.fields.b = b;
        v154.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(v90, v89, (System_String_o *)v90, 0, v154, v72, isClosed, 0, v91);
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
        if ( !v38 || !QuestConsumeItemEntity__IsAvailableAt(v38, 0, 0LL) )
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
          isDoubleItemConsumeQp = v139;
          if ( !this )
            goto LABEL_402;
          v42 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
          goto LABEL_262;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserItemMaster___);
        v74 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, questEnt);
          byte_4C1C955 = 1;
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
        }
        itemIds = v38->fields.itemIds;
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
        v76 = v38->fields.itemIds;
        if ( !v76 )
          goto LABEL_402;
        if ( !v76->max_length )
          goto LABEL_403;
        if ( !v74 )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v74,
                                                 v76->m_Items[1],
                                                 (const MethodInfo_329AE48 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !v22->fields.mCostLb1 )
          goto LABEL_402;
        v77 = (ItemEntity_o *)this;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v22->fields.mCostLb1,
                                                 0LL);
        if ( !this )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        nums = v38->fields.nums;
        if ( !nums )
          goto LABEL_402;
        if ( !nums->max_length )
          goto LABEL_403;
        v151.fields.r = r;
        v151.fields.g = g;
        v151.fields.b = b;
        v151.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          v22->fields.mCostLb1,
          nums->m_Items[1],
          entity,
          v77,
          v151,
          isClosed,
          isNotItemConsume,
          v78);
        if ( QuestConsumeItemEntity__IsAvailableAt(v38, 1, 0LL) )
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
                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v80 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v80 )
            goto LABEL_402;
          UIWidget__set_width(v80, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C1C955 )
          {
            sub_1C3B764(&NetworkManager_TypeInfo, questEnt);
            byte_4C1C955 = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          v81 = v38->fields.itemIds;
          if ( !v81 )
            goto LABEL_402;
          if ( v81->max_length <= 1 )
            goto LABEL_403;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)Master_object,
                                                   &entity,
                                                   *(_QWORD *)&this->fields.mTitleLevelStrSp->fields.updateAnchors,
                                                   v81->m_Items[2],
                                                   0LL);
          v82 = v38->fields.itemIds;
          if ( !v82 )
            goto LABEL_402;
          if ( v82->max_length <= 1 )
            goto LABEL_403;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v74,
                                                   v82->m_Items[2],
                                                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v84 = v38->fields.nums;
          if ( !v84 )
            goto LABEL_402;
          if ( v84->max_length <= 1 )
            goto LABEL_403;
          v152.fields.r = r;
          v152.fields.g = g;
          v152.fields.b = b;
          v152.fields.a = a;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            (UILabel_o *)*p_mCostLb2,
            v84->m_Items[2],
            entity,
            (ItemEntity_o *)this,
            v152,
            isClosed,
            isNotItemConsume,
            v83);
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
        if ( QuestConsumeItemEntity__IsAvailableAt(v38, 2, 0LL) )
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
                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v134 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v134 )
            goto LABEL_402;
          UIWidget__set_width(
            v134,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C1C955 )
          {
            sub_1C3B764(&NetworkManager_TypeInfo, questEnt);
            byte_4C1C955 = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          isDoubleItemConsumeQp = v139;
          v135 = v38->fields.itemIds;
          if ( !v135 )
            goto LABEL_402;
          if ( v135->max_length <= 2 )
            goto LABEL_403;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)Master_object,
                                                   &entity,
                                                   *(_QWORD *)&this->fields.mTitleLevelStrSp->fields.updateAnchors,
                                                   v135->m_Items[3],
                                                   0LL);
          v136 = v38->fields.itemIds;
          if ( !v136 )
            goto LABEL_402;
          v40 = v38;
          v41 = v140;
          if ( v136->max_length <= 2 )
            goto LABEL_403;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v74,
                                                   v136->m_Items[3],
                                                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v138 = v40->fields.nums;
          if ( !v138 )
            goto LABEL_402;
          if ( v138->max_length <= 2 )
            goto LABEL_403;
          v160.fields.r = r;
          v160.fields.g = g;
          v160.fields.b = b;
          v160.fields.a = a;
          v42 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            v22->fields.mCostLb3,
            v138->m_Items[3],
            entity,
            (ItemEntity_o *)this,
            v160,
            isClosed,
            isNotItemConsume,
            v137);
        }
        else
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          isDoubleItemConsumeQp = v139;
          if ( !this )
            goto LABEL_402;
          v42 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
          v40 = v38;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v41 = v140;
        }
        goto LABEL_30;
      case 4:
        if ( !this )
          goto LABEL_402;
        v85 = v47 > SLODWORD(this->fields.mTerminalAtlas) || v47 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
        v92 = v22->fields.mCostLb1;
        v93 = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int32_t)&v144, 0LL);
        v155.fields.r = r;
        v155.fields.g = g;
        v155.fields.b = b;
        v155.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabel(
          v93,
          v92,
          (System_String_o *)v93,
          costCalcVal,
          v155,
          v85,
          isClosed,
          fixedVal >= 0,
          v94);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb2;
        if ( !this )
          goto LABEL_402;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        isDoubleItemConsumeQp = v139;
        if ( !this )
          goto LABEL_402;
        v42 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
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
        if ( v38 && QuestConsumeItemEntity__IsAvailableAt(v38, 0, 0LL) )
        {
          *isDoubleItemConsume = 1;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v95 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v95 )
            goto LABEL_402;
          UIWidget__set_width(v95, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v96 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserItemMaster___);
          v97 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C1C955 )
          {
            sub_1C3B764(&NetworkManager_TypeInfo, questEnt);
            byte_4C1C955 = 1;
          }
          this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          v98 = v38->fields.itemIds;
          if ( !v98 )
            goto LABEL_402;
          v40 = v38;
          v41 = v140;
          if ( !v98->max_length )
            goto LABEL_403;
          if ( !v96 )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)v96,
                                                   &usrItem,
                                                   *(_QWORD *)&this->fields.mTitleLevelStrSp->fields.updateAnchors,
                                                   v98->m_Items[1],
                                                   0LL);
          v99 = v40->fields.itemIds;
          if ( !v99 )
            goto LABEL_402;
          if ( !v99->max_length )
            goto LABEL_403;
          if ( !v97 )
            goto LABEL_402;
          v42 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v97,
                                                   v99->m_Items[1],
                                                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !*p_mCostLb2 )
            goto LABEL_402;
          v100 = (ItemEntity_o *)this;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)*p_mCostLb2,
                                                   0LL);
          if ( !this )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v102 = v40->fields.nums;
          if ( !v102 )
            goto LABEL_402;
          if ( !v102->max_length )
            goto LABEL_403;
          v156.fields.r = r;
          v156.fields.g = g;
          v156.fields.b = b;
          v156.fields.a = a;
          QuestBoardListViewItemDraw__SetCostLabelItem(
            this,
            (UILabel_o *)*p_mCostLb2,
            v102->m_Items[1],
            usrItem,
            v100,
            v156,
            isClosed,
            isNotItemConsume,
            v101);
          if ( !QuestConsumeItemEntity__IsAvailableAt(v40, 1, 0LL) )
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
          v41 = v140;
          if ( !this )
            goto LABEL_402;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = *v42;
        if ( !*v42 )
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
        v40 = 0LL;
        goto LABEL_30;
      default:
        isDoubleItemConsumeQp = v139;
        break;
    }
  }
  v40 = v38;
  v41 = v140;
  v42 = (QuestBoardListViewItemDraw_o **)&v22->fields.mCostLb2;
LABEL_30:
  if ( v41 )
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
        v103 = v22->fields.mCostApSp;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        mTrans = this->fields.mTitleLevelStrSp[2].fields.mTrans;
        if ( !mTrans )
          goto LABEL_402;
        if ( (unsigned int)v141 < LODWORD(mTrans[1].klass) )
        {
          if ( !v103 )
            goto LABEL_402;
          UISprite__set_spriteName(v103, *((System_String_o **)&mTrans[1].monitor + v141), 0LL);
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
          v157.fields.r = r;
          v157.fields.g = g;
          v157.fields.b = b;
          v157.fields.a = a;
          UIWidget__set_color((UIWidget_o *)this, v157, 0LL);
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
        v147.fields.r = r;
        v147.fields.g = g;
        v147.fields.b = b;
        v147.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v147, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostRpPointSp;
        if ( !this )
          goto LABEL_402;
        v148.fields.r = r;
        v148.fields.g = g;
        v148.fields.b = b;
        v148.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v148, 0LL);
        v50 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v50 = BalanceConfig_TypeInfo;
        }
        static_fields = v50->static_fields;
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        mCostRpSp = v22->fields.mCostRpSp;
        BpExpresssionType = static_fields->BpExpresssionType;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        v54 = *(_QWORD *)&this->fields.mTitleLevelStrSp[1].fields.mFillAmount;
        if ( !v54 )
          goto LABEL_402;
        if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v54 + 24) )
          break;
        if ( !mCostRpSp )
          goto LABEL_402;
        UISprite__set_spriteName(mCostRpSp, *(System_String_o **)(v54 + 8 * BpExpresssionType + 32), 0LL);
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
        if ( !v40 )
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
        v56 = v40->fields.itemIds;
        if ( !v56 )
          goto LABEL_402;
        if ( !v56->max_length )
          break;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_402;
        ItemIconComponent__SetItem((ItemIconComponent_o *)this, v56->m_Items[1], -1, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon1;
        if ( !this )
          goto LABEL_402;
        v149.fields.r = r;
        v149.fields.g = g;
        v149.fields.b = b;
        v149.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)this, v149, 0LL);
        this = (QuestBoardListViewItemDraw_o *)QuestConsumeItemEntity__IsAvailableAt(v40, 1, 0LL);
        if ( !v22->fields.mCostItemIcon2 )
          goto LABEL_402;
        v57 = (char)this;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v22->fields.mCostItemIcon2,
                                                 0LL);
        v58 = this;
        if ( (v57 & 1) != 0 )
        {
          v59 = QuestBoardListViewItemDraw_TypeInfo;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v59 = QuestBoardListViewItemDraw_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            (UnityEngine_GameObject_o *)v58,
            (float)v59->static_fields->COST_2_ICON_NORMAL_POSITION_X,
            0LL);
          this = *v42;
          if ( !*v42 )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(
            gameObject,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
            0LL);
          v61 = v40->fields.itemIds;
          if ( !v61 )
            goto LABEL_402;
          if ( v61->max_length <= 1 )
            break;
          v62 = v61->m_Items[2];
          v63 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v63 = BalanceConfig_TypeInfo;
          }
          if ( v62 == v63->static_fields->ItemIdQp )
          {
            *isDoubleItemConsumeQp = 1;
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
            if ( !this )
              goto LABEL_402;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v64 = (UIWidget_o *)this;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            if ( !v64 )
              goto LABEL_402;
            UIWidget__set_width(v64, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0LL);
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
                                                     (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
                                                     (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UISprite___);
            if ( !this )
              goto LABEL_402;
            UISprite__set_spriteName(
              (UISprite_o *)this,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
              0LL);
            this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
            if ( !this )
              goto LABEL_402;
            v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v65,
              (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
              0LL);
            this = *v42;
            if ( !*v42 )
              goto LABEL_402;
            v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v66,
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
          v67 = v40->fields.itemIds;
          if ( !v67 )
            goto LABEL_402;
          if ( v67->max_length <= 1 )
            break;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_402;
          ItemIconComponent__SetItem((ItemIconComponent_o *)this, v67->m_Items[2], -1, 1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_402;
          v150.fields.r = r;
          v150.fields.g = g;
          v150.fields.b = b;
          v150.fields.a = a;
          ItemIconComponent__SetColor((ItemIconComponent_o *)this, v150, 0LL);
        }
        else
        {
          if ( !this )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        if ( !QuestConsumeItemEntity__IsAvailableAt(v40, 2, 0LL) )
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
        v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v119 = QuestBoardListViewItemDraw_TypeInfo;
        v120 = v118;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v119 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(
          v120,
          (float)v119->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v121,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = *v42;
        if ( !*v42 )
          goto LABEL_402;
        v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v122,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
        if ( !this )
          goto LABEL_402;
        v123 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v123,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
        if ( !this )
          goto LABEL_402;
        v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v124,
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
        v125 = v40->fields.itemIds;
        if ( !v125 )
          goto LABEL_402;
        if ( v125->max_length > 2 )
        {
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_402;
          ItemIconComponent__SetItem((ItemIconComponent_o *)this, v125->m_Items[3], -1, 1, 0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon3;
          if ( !this )
            goto LABEL_402;
LABEL_68:
          v146.fields.r = r;
          v146.fields.g = g;
          v146.fields.b = b;
          v146.fields.a = a;
          ItemIconComponent__SetColor((ItemIconComponent_o *)this, v146, 0LL);
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
        v68 = questEnt->fields.bannerId;
        v69 = v22->fields.mCostApSp;
        if ( v68 < 1 )
        {
          if ( !v69 )
            goto LABEL_402;
          UISprite__set_atlas(v22->fields.mCostApSp, v22->fields.mTerminalAtlas, 0LL);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
          v105 = v22->fields.mCostApSp;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
          }
          v106 = this->fields.mTitleLevelStrSp[2].fields.mTrans;
          if ( !v106 )
            goto LABEL_402;
          if ( (unsigned int)v141 >= LODWORD(v106[1].klass) )
            break;
          if ( !v105 )
            goto LABEL_402;
          UISprite__set_spriteName(v105, *((System_String_o **)&v106[1].monitor + v141), 0LL);
        }
        else
        {
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v70 = QuestBoardListViewItemDraw__GetApSpriteFileName(v68, (const MethodInfo *)questEnt);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v69, v70, 0LL);
          if ( !v69 )
            goto LABEL_402;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v69, (unsigned __int8)this & 1, 0LL);
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
        v158.fields.r = r;
        v158.fields.g = g;
        v158.fields.b = b;
        v158.fields.a = a;
        UIWidget__set_color((UIWidget_o *)this, v158, 0LL);
        if ( !v40 )
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
        v107 = v40->fields.itemIds;
        if ( !v107 )
          goto LABEL_402;
        if ( !v107->max_length )
          break;
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        ItemIconComponent__SetItem((ItemIconComponent_o *)this, v107->m_Items[1], -1, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        v159.fields.r = r;
        v159.fields.g = g;
        v159.fields.b = b;
        v159.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)this, v159, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
        if ( !this )
          goto LABEL_402;
        v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v109 = QuestBoardListViewItemDraw_TypeInfo;
        v110 = v108;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v109 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(v110, (float)v109->static_fields->COST_2_ICON_NORMAL_POSITION_X, 0LL);
        this = *v42;
        if ( !*v42 )
          goto LABEL_402;
        v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(
          v111,
          (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
          0LL);
        v112 = v40->fields.itemIds;
        if ( !v112 )
          goto LABEL_402;
        if ( !v112->max_length )
          break;
        v113 = v112->m_Items[1];
        v114 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v114 = BalanceConfig_TypeInfo;
        }
        if ( v113 == v114->static_fields->ItemIdQp )
        {
          *isDoubleItemConsumeQp = 1;
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostObj;
          if ( !this )
            goto LABEL_402;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          v115 = (UIWidget_o *)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          if ( !v115 )
            goto LABEL_402;
          UIWidget__set_width(v115, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP, 0LL);
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
                                                   (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !this )
            goto LABEL_402;
          UISprite__set_spriteName(
            (UISprite_o *)this,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
            0LL);
          this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostItemIcon2;
          if ( !this )
            goto LABEL_402;
          v116 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(
            v116,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
            0LL);
          this = *v42;
          if ( !*v42 )
            goto LABEL_402;
          v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(
            v117,
            (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
            0LL);
        }
        if ( !QuestConsumeItemEntity__IsAvailableAt(v40, 1, 0LL) )
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
    sub_1C3B9C8(this, questEnt);
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
  v145.fields.r = r;
  v145.fields.g = g;
  v145.fields.b = b;
  v145.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)this, v145, 0LL);
  if ( v40 && QuestConsumeItemEntity__IsAvailableAt(v40, 1, 0LL) )
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
  this = *v42;
  if ( !*v42 )
    goto LABEL_402;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_402;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb1;
  if ( !this )
    goto LABEL_402;
  v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4C1C516 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v126);
    byte_4C1C516 = 1;
  }
  GameObjectExtensions__SetLocalScale(v127, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = *v42;
  if ( !*v42 )
    goto LABEL_402;
  v129 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4C1C516 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v128);
    byte_4C1C516 = 1;
  }
  GameObjectExtensions__SetLocalScale(v129, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3;
  if ( !this )
    goto LABEL_402;
  v131 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4C1C516 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v130);
    byte_4C1C516 = 1;
  }
  GameObjectExtensions__SetLocalScale(v131, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  v132 = (UIWidget_o *)v22->fields.mCostLb1;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v132 )
    goto LABEL_402;
  UIWidget__set_width(v132, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_DEFAULT_WIDTH, 0LL);
  this = *v42;
  if ( !*v42 )
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
  this = *v42;
  if ( !*v42 )
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
  v133 = v22->fields.mCostLb1;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v133 )
    goto LABEL_402;
  UILabel__set_spacingX(
    v133,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
    0LL);
  this = *v42;
  if ( !*v42 )
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
  this = *v42;
  if ( !*v42 )
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
  this = *v42;
  if ( !*v42 )
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
    || (UILabel__SetCondensedScale_48474720(
          (UILabel_o *)this,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
          0.0,
          0LL),
        (this = *v42) == 0LL)
    || (UILabel__SetCondensedScale_48474720(
          (UILabel_o *)this,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
          0.0,
          0LL),
        (this = (QuestBoardListViewItemDraw_o *)v22->fields.mCostLb3) == 0LL) )
  {
LABEL_402:
    sub_1C3B9C0(this, questEnt);
  }
  UILabel__SetCondensedScale_48474720(
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
  if ( (byte_4C1ED01 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, label);
    byte_4C1ED01 = 1;
  }
  if ( !label )
    sub_1C3B9C0(this, label);
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
  __int64 v18; // x1
  __int64 v19; // x1
  void *SelfUserGame; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x7
  bool v23; // w22
  System_String_o *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
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
  if ( (byte_4C1ED00 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, label);
    sub_1C3B764(&LocalizationManager_TypeInfo, v18);
    sub_1C3B764(&StringLiteral_11053/*"Request Entity Too Large"*/, v19);
    byte_4C1ED00 = 1;
  }
  if ( isNotItemConsume )
    v33 = 0;
  SelfUserGame = System_Int32__ToString((int32_t)&v33, 0LL);
  if ( !itemEnt )
    goto LABEL_17;
  if ( itemEnt->fields.type == 1 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v23 = v33 > *((_DWORD *)SelfUserGame + 24);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11053/*"Request Entity Too Large"*/, 0LL);
      v32 = v33;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v25, v26, v27);
      SelfUserGame = System_String__Format(v24, v28, 0LL);
      v29 = (System_String_o *)SelfUserGame;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C3B9C0(SelfUserGame, v21);
  }
  v30 = v33;
  v29 = (System_String_o *)SelfUserGame;
  if ( usrItem && (SelfUserGame = (void *)ItemEntity__IsEnable(itemEnt, 0LL), ((unsigned __int8)SelfUserGame & 1) != 0) )
    num = usrItem->fields.num;
  else
    num = 0;
  v23 = v30 > num;
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
    v23,
    isClosed,
    isNotItemConsume,
    v22);
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
        sub_1C3B9C8(this, isDisp);
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
    sub_1C3B9C0(this, isDisp);
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

  if ( (byte_4C1ED10 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1ED10 = 1;
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
          sub_1C3B9C0(v8, v7);
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
  __int64 v16; // x1
  int32_t charaIconId; // w24
  UISprite_o *mLabelFaceIcon; // x24
  int32_t ServantId; // w25
  int32_t LimitCount; // w26
  int32_t v21; // w22
  int32_t bannerId; // t1
  QuestBoardListViewItemDraw_c *v23; // x0
  System_String_o *QUEST_BOARD_MASK_SPNAME_PREFIX; // x21
  System_String_o *v25; // x0
  UISpriteData_o *Sprite; // x21
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v15 = this;
  if ( (byte_4C1ECFF & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, questEnt);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v16);
    byte_4C1ECFF = 1;
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
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v28, 0LL);
  if ( !maskSprite )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, 1, 0LL);
  v29.fields.r = r;
  v29.fields.g = g;
  v29.fields.b = b;
  v29.fields.a = a;
  UIWidget__set_color((UIWidget_o *)maskSprite, v29, 0LL);
  bannerId = questEnt->fields.bannerId;
  v21 = (_DWORD)questEnt + 64;
  if ( bannerId < 1 )
  {
    UISprite__set_atlas(maskSprite, v15->fields.mTerminalAtlas, 0LL);
    UISprite__set_spriteName(maskSprite, maskSpriteName, 0LL);
  }
  else
  {
    v23 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v23 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_MASK_SPNAME_PREFIX = v23->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
    v25 = System_Int32__ToString(v21, 0LL);
    maskSpriteName = System_String__Concat_63368612(QUEST_BOARD_MASK_SPNAME_PREFIX, v25, 0LL);
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
    sub_1C3B9C0(this, questEnt);
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

  if ( (byte_4C1ED0E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_4C1ED0E = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_1C3B9C0(mOptionInfoLb, method);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  int32_t info_kind_k__BackingField; // w23
  QuestEntity_o *Mine; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_Object_o *mEarthLine; // x22
  __int64 v17; // x1
  QuestBoardListViewEarthLine_o *mOptionSecondBattleInformationObj; // x0
  Il2CppObject *Component_object; // x0
  struct QuestBoardListViewMultiSecondBattleInformation_o **p_secondBattleInformation; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  int32_t size; // w2
  int v29; // w9
  struct UnityEngine_GameObject_array *mStatusSp; // x22
  int max_length; // w8
  unsigned int v32; // w25
  UnityEngine_GameObject_o *mCostObj; // x22
  QuestBoardListViewItemDraw_c *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Object_o *eventTargetComponent; // x22
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x7
  __int64 v41; // x1
  UnityEngine_GameObject_o *v42; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *v44; // x8
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1ECDD & 1) == 0 )
  {
    sub_1C3B764(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___,
      questBoardItem);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UISprite__Clear__, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v10);
    byte_4C1ECDD = 1;
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
        if ( !byte_4C1C516 )
        {
          sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v14);
          byte_4C1C516 = 1;
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
                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = (struct QuestBoardListViewMultiSecondBattleInformation_o *)Component_object;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.secondBattleInformation,
          (int64_t)Component_object,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
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
        v29 = mMultiSecondBattleInformation->fields._version + 1;
        mMultiSecondBattleInformation->fields._size = 0;
        mMultiSecondBattleInformation->fields._version = v29;
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
        v45.fields.r = 1.0;
        v45.fields.g = 1.0;
        v45.fields.b = 1.0;
        v45.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mOptionSecondBattleInformationObj, v45, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj
          || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mStatusObj) == 0LL)
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mStatusSp = this->fields.mStatusSp) == 0LL) )
        {
LABEL_92:
          sub_1C3B9C0(mOptionSecondBattleInformationObj, v17);
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v32 = 0;
          do
          {
            if ( v32 >= max_length )
              sub_1C3B9C8(mOptionSecondBattleInformationObj, v17);
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)mStatusSp->m_Items[v32];
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_92;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
            max_length = mStatusSp->max_length;
          }
          while ( (int)++v32 < max_length );
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
        v34 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v34 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(mCostObj, v34->static_fields->COST_OBJ_POS, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                                                                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        UIWidget__set_width(
          (UIWidget_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_SINGLE,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostApSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v35,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostLb1;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v36,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_92;
        v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v37,
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
            QuestBoardListViewItemDraw__SetItemOfShortcut(this, questBoardItem, v39);
            return;
          case 4:
            v44 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( !v44 )
              goto LABEL_91;
            if ( v44->fields.questBoardType == 2 )
LABEL_85:
              QuestBoardListViewItemDraw__SetItemOfArea(this, questBoardItem, 1, 1, 0, 0, 0, v40);
            else
LABEL_82:
              QuestBoardListViewItemDraw__SetItemOfFolder(this, questBoardItem, v39);
            break;
          case 5:
            QuestBoardListViewItemDraw__SetItemOfWarBoard(this, questBoardItem, v39);
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
              QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(this, questBoardItem, v39);
            else
LABEL_91:
              QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v39);
            break;
          default:
            return;
        }
      }
    }
    else
    {
      this->fields.isDummy = 1;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !byte_4C1C511 )
      {
        sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v41);
        byte_4C1C511 = 1;
      }
      GameObjectExtensions__SetLocalScale(v42, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  int32_t questBoardType; // w28
  EventEntity_o *eventEnt; // x23
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v36; // x27
  WarEntity_o *Mine; // x26
  char v38; // w21
  UnityEngine_Object_o *eventTargetComponent; // x27
  const MethodInfo *v40; // x3
  _BOOL4 v41; // w27
  il2cpp_array_size_t v42; // w21
  const MethodInfo *v43; // x2
  bool IsPurchasedByRarePrism; // w29
  bool v45; // w28
  bool IsClose; // w25
  bool v47; // w24
  _BOOL8 IsActiveEventWar; // x0
  const MethodInfo *v49; // x4
  int v50; // w21
  QuestBoardListViewItemDraw_c *v51; // x0
  System_String_o *QBOARD_CAP_CLOSED_FORMAT; // x23
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  System_String_o *EventAddBannerSpriteName; // x23
  QuestBoardListViewItemDraw_o *v58; // x25
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int32_t v62; // w10
  QuestBoardListViewItemDraw_c *v63; // x8
  int32_t v64; // w23
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v66; // x23
  Il2CppObject *v67; // x0
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  const MethodInfo *v71; // x5
  ScrTerminalListTop_c *v72; // x8
  struct ScrTerminalListTop_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v74; // x0
  bool v75; // zf
  ScrTerminalListTop_c *v76; // x0
  clsQuestCheck_o *v77; // x25
  clsQuestCheck_o *v78; // x25
  bool v79; // w24
  QuestBoardListViewItemDraw_c *v80; // x0
  __int64 v81; // x8
  Il2CppObject *Entity; // x2
  bool v83; // w4
  QuestBoardListViewItemDraw_o *v84; // x0
  bool v85; // w3
  QuestBoardListViewItem_o *v86; // x1
  clsQuestCheck_o *v87; // x23
  bool v88; // w0
  QuestBoardListViewItemDraw_c *v89; // x8
  bool v90; // w23
  struct QuestBoardListViewItemDraw_StaticFields *v91; // x8
  __int64 v92; // x9
  bool v93; // w21
  QuestBoardListViewItemDraw_o *v94; // x28
  clsQuestCheck_o *v95; // x25
  clsQuestCheck_o *v96; // x25
  ScrTerminalListTop_c *v97; // x0
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w25
  TerminalPramsManager_c *v99; // x0
  ScrTerminalListTop_c *v100; // x8
  int32_t QuestId_k__BackingField; // w25
  TerminalPramsManager_c *v102; // x0
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  System_String_o *targetCam; // x23
  System_Int32_c *v105; // x0
  struct UIRect_AnchorPoint_o *v106; // x8
  Il2CppObject *v107; // x0
  int v108; // w21
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v110; // x28
  System_String_o *v111; // x23
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  Il2CppObject *v115; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x23
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  Il2CppObject *v120; // x0
  UISprite_o *mcBaseP; // x28
  const MethodInfo *v122; // x2
  QuestBoardListViewItemDraw_o *v123; // x8
  QuestBoardListViewItemDraw_o **p_mOptionInfoLb; // x23
  const MethodInfo *v125; // x3
  int32_t v126; // w1
  QuestBoardListViewItemDraw_c *v127; // x0
  const MethodInfo *v128; // x2
  const MethodInfo *v129; // x3
  const MethodInfo *v130; // x3
  const MethodInfo *v131; // x3
  const MethodInfo *v132; // x3
  int32_t status; // w1
  QuestBoardListViewItemDraw_c *v134; // x0
  struct QuestBoardListViewObject_o *v135; // x8
  QuestBoardListViewManager_o *manager; // x22
  __int64 v137; // x9
  bool v138; // w24
  System_Collections_Generic_List_object__o *mInfoTextList; // x24
  int32_t AlphaAnimCnt; // w0
  UnityEngine_Object_o *mEarthLine; // x23
  QuestBoardListViewEarthLine_o *v142; // x23
  int32_t v143; // [xsp+0h] [xbp-90h]
  bool v144; // [xsp+4h] [xbp-8Ch]
  bool v145; // [xsp+8h] [xbp-88h]
  bool v146; // [xsp+Ch] [xbp-84h]
  struct UISprite_o *checkTime; // [xsp+10h] [xbp-80h]
  bool v149; // [xsp+1Ch] [xbp-74h]
  _BOOL4 IsClosedWar; // [xsp+20h] [xbp-70h]
  _BOOL4 IsMainInterlude; // [xsp+24h] [xbp-6Ch]
  int warId; // [xsp+28h] [xbp-68h]
  int32_t PrioredBannerId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = questBoardItem;
  v13 = this;
  if ( (byte_4C1ECDF & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, questBoardItem);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMaster_WarReleaseMaster___, v15);
    sub_1C3B764(&DataManager_TypeInfo, v16);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v17);
    sub_1C3B764(&int_TypeInfo, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v20);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v21);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v22);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v23);
    sub_1C3B764(&ScrTerminalListTop_TypeInfo, v24);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v25);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v27);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&StringLiteral_1/*""*/, v28);
    byte_4C1ECDF = 1;
  }
  if ( !v12 )
    goto LABEL_282;
  quest_info_k__BackingField = v12->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_282;
  v149 = isBadgeDisp;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  v145 = isBlackMarkOnly;
  v146 = isWhiteMarkOnly;
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
  v144 = isSpecialClosedBanner;
  if ( warId < 1 )
  {
    v36 = 0LL;
LABEL_15:
    Mine = 0LL;
    v38 = 1;
    goto LABEL_16;
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_282;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, warId, 0LL);
  v36 = WarInfoByWarID;
  if ( !WarInfoByWarID )
    goto LABEL_15;
  Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
  v38 = 0;
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
    if ( (v38 & 1) != 0 )
    {
LABEL_36:
      IsClosedWar = 0;
      goto LABEL_39;
    }
  }
  else
  {
    IsMainInterlude = 0;
    if ( (v38 & 1) != 0 )
      goto LABEL_36;
  }
  IsClosedWar = MapControl_WarInfo__IsClosedWar(v36, 0LL);
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
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_282;
  v41 = questBoardType == 2 && eventEnt != 0LL;
  v42 = questBoardType - 1;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             this,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.m_CancellationTokenSource,
                             Mine,
                             v40);
  if ( questBoardType == 1 )
  {
    QuestBoardListViewItemDraw__SetupBanner(v13, v12, v43);
    v45 = v149;
    IsClose = 0;
    v47 = 0;
    goto LABEL_211;
  }
  if ( questBoardType == 2 && eventEnt != 0LL )
  {
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_282;
    IsActiveEventWar = QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0LL);
    v47 = (!IsMainInterlude || IsPurchasedByRarePrism) && IsActiveEventWar;
    if ( IsMainInterlude )
    {
      v50 = IsClosedWar;
      if ( IsMainInterlude && !IsPurchasedByRarePrism || !IsActiveEventWar )
        v50 = AreaBoardInfo_k__BackingField->fields.status == 2 || IsClosedWar;
    }
    else
    {
      v50 = IsClosedWar;
    }
    EventAddBannerSpriteName = QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (QuestBoardListViewItemDraw_o *)IsActiveEventWar,
                                 eventEnt,
                                 warId,
                                 v50 | v47,
                                 v49);
    v75 = v50 == 0;
    goto LABEL_172;
  }
  if ( AreaBoardInfo_k__BackingField->fields.status == 6 && questBoardType == 2 )
  {
    if ( Mine )
    {
      v51 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v51 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED_FORMAT = v51->static_fields->QBOARD_CAP_CLOSED_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0LL);
      v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v53, v54, v55);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_FORMAT, v56, 0LL);
    }
    else
    {
      EventAddBannerSpriteName = (System_String_o *)StringLiteral_1/*""*/;
    }
    v76 = ScrTerminalListTop_TypeInfo;
    if ( v144 )
    {
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v76 = ScrTerminalListTop_TypeInfo;
      }
      if ( warId == v76->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
        goto LABEL_103;
    }
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = ScrTerminalListTop_TypeInfo;
    }
    if ( warId != v76->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_96;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v77 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v77 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsWarClear(
            v77,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL) )
      goto LABEL_96;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v78 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v78 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsWarClear(
            v78,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
            0LL) )
    {
LABEL_103:
      v80 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v80 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v79 = v146;
      v81 = 1032LL;
    }
    else
    {
LABEL_96:
      v79 = v146;
      if ( System_String__op_Inequality(EventAddBannerSpriteName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__IsExistBanner(EventAddBannerSpriteName, 0LL) )
          goto LABEL_107;
      }
      v80 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v80 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v81 = 1000LL;
    }
    EventAddBannerSpriteName = *(System_String_o **)((char *)&v80->static_fields->POS_Y_ITVL_AREA + v81);
LABEL_107:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_282;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               warId,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v83 = v79;
    v84 = v13;
    v85 = v145;
    v86 = v12;
    goto LABEL_171;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !this )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           warId,
                                           (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_282;
  v58 = this;
  this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
  v62 = (int)this;
  v63 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    v64 = (int)this;
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v63 = QuestBoardListViewItemDraw_TypeInfo;
    v62 = v64;
  }
  msQBoardL1Names = v63->static_fields->msQBoardL1Names;
  if ( !msQBoardL1Names )
    goto LABEL_282;
  if ( v42 >= msQBoardL1Names->max_length )
    goto LABEL_285;
  v66 = msQBoardL1Names->m_Items[v42];
  v143 = v62;
  PrioredBannerId = v62;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v59, v60, v61);
  EventAddBannerSpriteName = System_String__Format(v66, v67, 0LL);
  v72 = ScrTerminalListTop_TypeInfo;
  if ( !v144 )
  {
LABEL_123:
    v94 = v58;
    if ( !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v72 = ScrTerminalListTop_TypeInfo;
    }
    if ( warId != v72->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID )
      goto LABEL_160;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v95 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v95 )
      goto LABEL_282;
    if ( clsQuestCheck__IsWarClear(
           v95,
           ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
           0LL) )
    {
      goto LABEL_160;
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v96 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v96 )
      goto LABEL_282;
    if ( !clsQuestCheck__IsQuestClear(
            v96,
            ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
            0,
            0LL) )
      goto LABEL_160;
    v97 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v97 = ScrTerminalListTop_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v97->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, 0LL) )
      goto LABEL_160;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, questBoardItem);
      byte_4C1CBC4 = 1;
    }
    v99 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v99 = TerminalPramsManager_TypeInfo;
    }
    v100 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v99->static_fields->_QuestId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v100 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField != v100->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
      goto LABEL_160;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CBC3 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, questBoardItem);
      byte_4C1CBC3 = 1;
    }
    v102 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v102 = TerminalPramsManager_TypeInfo;
    }
    if ( v102->static_fields->_PhaseCnt_k__BackingField == 2 )
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
      v93 = v146;
      if ( LODWORD(rightAnchor->fields.relative) > 1 )
      {
        targetCam = (System_String_o *)rightAnchor->fields.targetCam;
        v58 = v94;
        PrioredBannerId = (int32_t)v94->fields.mcBaseP;
        v105 = int_TypeInfo;
LABEL_169:
        v107 = (Il2CppObject *)j_il2cpp_value_box_0(v105, &PrioredBannerId, v68, v69, v70);
        EventAddBannerSpriteName = System_String__Format(targetCam, v107, 0LL);
        goto LABEL_170;
      }
    }
    else
    {
LABEL_160:
      v93 = v146;
      v58 = v94;
      if ( isBoardDisp && v149 && !isBlackMarkOnly && !v146 )
        goto LABEL_170;
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      }
      v106 = this->fields.mTitleLevelStrSp[2].fields.rightAnchor;
      if ( !v106 )
        goto LABEL_282;
      if ( LODWORD(v106->fields.relative) > 1 )
      {
        targetCam = (System_String_o *)v106->fields.targetCam;
        PrioredBannerId = v143;
        v105 = int_TypeInfo;
        goto LABEL_169;
      }
    }
LABEL_285:
    sub_1C3B9C8(this, questBoardItem);
  }
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v72 = ScrTerminalListTop_TypeInfo;
  }
  static_fields = v72->static_fields;
  if ( warId != static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
  {
    if ( !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v72 = ScrTerminalListTop_TypeInfo;
      static_fields = ScrTerminalListTop_TypeInfo->static_fields;
    }
    if ( warId == static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v87 = (clsQuestCheck_o *)this;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      if ( !v87 )
        goto LABEL_282;
      v88 = clsQuestCheck__IsWarClear(
              v87,
              ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
              0LL);
      v89 = QuestBoardListViewItemDraw_TypeInfo;
      v90 = v88;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v89 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v91 = v89->static_fields;
      v92 = 1032LL;
      if ( v90 )
        v92 = 1040LL;
      EventAddBannerSpriteName = *(System_String_o **)((char *)&v91->POS_Y_ITVL_AREA + v92);
      goto LABEL_122;
    }
    goto LABEL_123;
  }
  v74 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v74 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EventAddBannerSpriteName = v74->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
LABEL_122:
  v93 = v146;
LABEL_170:
  v85 = isBlackMarkOnly;
  v83 = v93;
  v84 = v13;
  v86 = v12;
  Entity = (Il2CppObject *)v58;
LABEL_171:
  QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v84, v86, (WarEntity_o *)Entity, v85, v83, v71);
  v47 = 0;
  v75 = !IsClosedWar;
LABEL_172:
  v108 = !v75;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !this )
    goto LABEL_282;
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, warId, 0LL);
  if ( OpenEntity )
  {
    v110 = OpenEntity;
    IsClose = WarReleaseEntity__IsClose(OpenEntity, 0LL);
    if ( IsClose )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !Mine )
        goto LABEL_282;
      v111 = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0LL);
      v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v112, v113, v114);
      EventAddBannerSpriteName = System_String__Format(v111, v115, 0LL);
    }
    if ( WarReleaseEntity__IsAnnouncement(v110, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !Mine )
        goto LABEL_282;
      QBOARD_CAP_CLOSED_SPECIAL_FORMAT = QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0LL);
      v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v117, v118, v119);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v120, 0LL);
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
  v45 = v149;
  if ( v108 )
  {
    this = (QuestBoardListViewItemDraw_o *)v13->fields.mcBaseP;
    if ( !this )
      goto LABEL_282;
    v154.fields.r = 0.5;
    v154.fields.g = 0.5;
    v154.fields.b = 0.5;
    v154.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v154, 0LL);
  }
  if ( IsClose )
    v123 = 0LL;
  else
    v123 = v13;
  if ( IsClose )
  {
    LODWORD(questBoardItem) = 0;
    this = v13;
  }
  else if ( v149 )
  {
    if ( v41 )
      this = v123;
    else
      this = 0LL;
    if ( v47 || !v41 )
    {
      questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)AreaBoardInfo_k__BackingField->fields.questCount;
      this = v123;
      if ( !v123 )
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
  QuestBoardListViewItemDraw__SetBadge(this, (int32_t)questBoardItem, v122);
LABEL_211:
  this = (QuestBoardListViewItemDraw_o *)v13->fields.mcBaseP;
  if ( !this )
    goto LABEL_282;
  p_mOptionInfoLb = (QuestBoardListViewItemDraw_o **)&v13->fields.mOptionInfoLb;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( !v45 )
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
                  QuestBoardListViewItemDraw__SetStatusActive(v13, status, 0, v132);
                v134 = QuestBoardListViewItemDraw_TypeInfo;
                if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                  v134 = QuestBoardListViewItemDraw_TypeInfo;
                }
                QuestBoardListViewItemDraw__SetNewIcon(
                  v13,
                  v134->static_fields->NEW_POS_AREA,
                  v134->static_fields->NEW_W_AREA,
                  v134->static_fields->NEW_H_AREA,
                  v132);
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
  v126 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v126 && v126 != 6 )
    QuestBoardListViewItemDraw__SetStatusActive(v13, v126, v47 || v126 != 1 || !v41, v125);
  v127 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v127 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v13,
    v127->static_fields->NEW_POS_AREA,
    v127->static_fields->NEW_W_AREA,
    v127->static_fields->NEW_H_AREA,
    v125);
  if ( IsClosedWar && IsMainInterlude )
    QuestBoardListViewItemDraw__SetStatusActive(v13, 2, 1, v129);
  QuestBoardListViewItemDraw__SetClearSprite(v13, Mine, v128);
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
    QuestBoardListViewItemDraw__SetNextSprite(v13, AreaBoardInfo_k__BackingField, Mine, v130);
  }
  QuestBoardListViewItemDraw__CreateInfoTextList(v13, v12, (int64_t)checkTime, v131);
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
  v135 = v13->fields.mListViewObject;
  if ( !v135 )
    goto LABEL_282;
  manager = (QuestBoardListViewManager_o *)v135->fields.manager;
  if ( manager )
  {
    questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
    v137 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v137
      || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v137 - 1] != QuestBoardListViewManager_TypeInfo )
    {
      this = (QuestBoardListViewItemDraw_o *)v135->fields.manager;
LABEL_284:
      sub_1C3BC80(this);
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
    v138 = 0;
  }
  else
  {
    if ( !manager )
      goto LABEL_282;
    AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(manager, (int32_t)questBoardItem, 0LL);
    this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                             mInfoTextList,
                                             AlphaAnimCnt,
                                             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    v138 = 1;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v138, 0LL);
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_282;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_282;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v138, 0LL);
  mEarthLine = (UnityEngine_Object_o *)v13->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    v142 = v13->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v142 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v142,
        *(UnityEngine_Vector3_o *)&this->fields.mTitleLevelStrSp->fields.mDrawRegion.fields.y,
        v13->fields.mListViewObject,
        warId,
        0LL);
      goto LABEL_272;
    }
LABEL_282:
    sub_1C3B9C0(this, questBoardItem);
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x21
  int32_t warId; // w27
  MapControl_WarInfo_o *v24; // x24
  WarEntity_o *v25; // x22
  __int64 manager; // x23
  int v27; // w28
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  struct UISprite_o *mShohiSp; // x26
  _BOOL4 IsMainInterlude; // w25
  const MethodInfo *v32; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x29
  _BOOL4 IsPurchasedByRarePrism; // w26
  int v35; // w28
  const MethodInfo *v36; // x4
  bool IsClose; // w29
  unsigned int status; // w8
  _BOOL4 v39; // w9
  QuestBoardListViewItemDraw_c *v40; // x0
  System_String_o *QBOARD_CAP_CLOSED; // x24
  ScrTerminalListTop_c *IsOpenedMainScenarioWar; // x0
  clsQuestCheck_o *v43; // x23
  clsQuestCheck_o *v44; // x23
  MapControl_RootInfo_o *v45; // x23
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  QuestBoardListViewItemDraw_c *v49; // x8
  int32_t v50; // w23
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v52; // x24
  Il2CppObject *v53; // x0
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v55; // x23
  QuestBoardListViewItemDraw_c *v56; // x0
  System_String_o *QBOARD_CAP_CLOSED_FORMAT; // x24
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  QuestBoardListViewItemDraw_c *v62; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x23
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x0
  System_String_o *EventAddBannerSpriteName; // x0
  BalanceConfig_c *v69; // x0
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  QuestBoardListViewItemDraw_c *v73; // x8
  int32_t v74; // w23
  struct System_String_array *v75; // x8
  System_String_o *v76; // x24
  Il2CppObject *v77; // x0
  QuestBoardListViewItemDraw_c *v78; // x0
  UISprite_o *mcBaseP; // x23
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
  struct QuestBoardListViewObject_o *v102; // x8
  __int64 v103; // x10
  int32_t AlphaAnimCnt; // w0
  _BOOL8 IsDisplayableRoadmapButton; // x0
  __int64 v106; // x1
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+8h] [xbp-88h]
  int v108; // [xsp+14h] [xbp-7Ch]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-78h]
  int64_t v110; // [xsp+20h] [xbp-70h]
  _BOOL4 IsClosedWar; // [xsp+28h] [xbp-68h]
  int32_t PrioredBannerId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = questBoardItem;
  v4 = this;
  if ( (byte_4C1ECE5 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, questBoardItem);
    sub_1C3B764(&BalanceConfig_TypeInfo, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_WarReleaseMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v9);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_1C3B764(&int_TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v13);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v14);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v15);
    sub_1C3B764(&ScrTerminalListTop_TypeInfo, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v18);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v19);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&StringLiteral_1/*""*/, v20);
    byte_4C1ECE5 = 1;
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, warId, 0LL);
    v24 = (MapControl_WarInfo_o *)this;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
      v25 = (WarEntity_o *)this;
      manager = 0LL;
      goto LABEL_12;
    }
  }
  else
  {
    v24 = 0LL;
  }
  v25 = 0LL;
  manager = 1LL;
LABEL_12:
  eventEnt = AreaBoardInfo_k__BackingField->fields.eventEnt;
  if ( eventEnt )
  {
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_193;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0LL);
    v27 = (unsigned __int8)this & 1;
  }
  else
  {
    v27 = 0;
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
    sub_1C3BC80(this);
    goto LABEL_195;
  }
  mShohiSp = this->fields.mShohiSp;
  if ( (manager & 1) != 0 )
  {
    IsClosedWar = 0;
    if ( v25 )
    {
LABEL_22:
      IsMainInterlude = WarEntity__IsMainInterlude(v25, 0LL);
      goto LABEL_25;
    }
  }
  else
  {
    IsClosedWar = MapControl_WarInfo__IsClosedWar(v24, 0LL);
    if ( v25 )
      goto LABEL_22;
  }
  IsMainInterlude = 0;
LABEL_25:
  v110 = (int64_t)mShohiSp;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_193;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             this,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)m_CancellationTokenSource,
                             v25,
                             v32);
  v35 = (IsPurchasedByRarePrism || !IsMainInterlude) & v27;
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
  v108 = IsClosedWar;
  if ( v35 == 0 && IsMainInterlude )
  {
    if ( !v25 )
      goto LABEL_193;
    if ( WarEntity__HasFlag(v25, 128, 0LL) || WarEntity__HasFlag(v25, 32, 0LL) )
    {
      status = AreaBoardInfo_k__BackingField->fields.status;
      v39 = IsClosedWar;
    }
    else
    {
      v69 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v69 = BalanceConfig_TypeInfo;
      }
      if ( warId != v69->static_fields->MainInterludeWarId )
        goto LABEL_51;
      v39 = IsClosedWar;
      status = AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE;
    }
    v108 = v39 || status == 2;
  }
LABEL_51:
  if ( (_DWORD)manager )
  {
    v40 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v40 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QBOARD_CAP_CLOSED = v40->static_fields->QBOARD_CAP_CLOSED;
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v43 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v43 )
      goto LABEL_193;
    IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)clsQuestCheck__IsWarClear(
                                                        v43,
                                                        ScrTerminalListTop_TypeInfo->static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                        0LL);
    if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
      goto LABEL_201;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v44 = (clsQuestCheck_o *)this;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v44 )
      goto LABEL_193;
    if ( !clsQuestCheck__IsWarClear(
            v44,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL) )
      goto LABEL_107;
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_193;
    v45 = *(MapControl_RootInfo_o **)&this->fields.m_CachedPtr;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v45 )
      goto LABEL_193;
    IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)MapControl_RootInfo__IsOpenedMainScenarioWar(
                                                        v45,
                                                        ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                        0LL);
    if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
    {
LABEL_107:
      v78 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v78 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED = v78->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
    }
    else
    {
LABEL_201:
      if ( v25
        && (IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)WarEntity__HasFlag(v25, 128, 0LL),
            ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0) )
      {
        this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_193;
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( !this )
          goto LABEL_193;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 warId,
                                                 (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_193;
        this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
        v49 = QuestBoardListViewItemDraw_TypeInfo;
        v50 = (int)this;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v49 = QuestBoardListViewItemDraw_TypeInfo;
        }
        msQBoardL1Names = v49->static_fields->msQBoardL1Names;
        if ( !msQBoardL1Names )
          goto LABEL_193;
        if ( msQBoardL1Names->max_length <= 1 )
          goto LABEL_198;
        v52 = msQBoardL1Names->m_Items[1];
        PrioredBannerId = v50;
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v46, v47, v48);
        QBOARD_CAP_CLOSED = System_String__Format(v52, v53, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
        if ( !this )
          goto LABEL_193;
        OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, warId, 0LL);
        if ( OpenEntity )
        {
          v55 = OpenEntity;
          IsClose = WarReleaseEntity__IsClose(OpenEntity, 0LL);
          if ( IsClose )
          {
            v56 = QuestBoardListViewItemDraw_TypeInfo;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v56 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QBOARD_CAP_CLOSED_FORMAT = v56->static_fields->QBOARD_CAP_CLOSED_FORMAT;
            PrioredBannerId = WarEntity__GetPrioredBannerId(v25, 0LL);
            v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v58, v59, v60);
            QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_FORMAT, v61, 0LL);
          }
          if ( WarReleaseEntity__IsAnnouncement(v55, 0LL) )
          {
            v62 = QuestBoardListViewItemDraw_TypeInfo;
            if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v62 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QBOARD_CAP_CLOSED_SPECIAL_FORMAT = v62->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
            PrioredBannerId = WarEntity__GetPrioredBannerId(v25, 0LL);
            v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v64, v65, v66);
            QBOARD_CAP_CLOSED = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v67, 0LL);
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
                                       (v35 != 0) | (unsigned __int8)v108,
                                       v36);
        }
        else
        {
          this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   warId,
                                                   (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_193;
          this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
          v73 = QuestBoardListViewItemDraw_TypeInfo;
          v74 = (int)this;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v73 = QuestBoardListViewItemDraw_TypeInfo;
          }
          v75 = v73->static_fields->msQBoardL1Names;
          if ( !v75 )
            goto LABEL_193;
          if ( v75->max_length <= 2 )
            goto LABEL_198;
          v76 = v75->m_Items[2];
          PrioredBannerId = v74;
          v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v70, v71, v72);
          EventAddBannerSpriteName = System_String__Format(v76, v77, 0LL);
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
                                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_193;
  v113.fields.r = 1.0;
  v113.fields.g = 1.0;
  v113.fields.b = 1.0;
  v113.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v113, 0LL);
  if ( v108 )
  {
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
    if ( !this )
      goto LABEL_193;
    v114.fields.r = 0.5;
    v114.fields.g = 0.5;
    v114.fields.b = 0.5;
    v114.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v114, 0LL);
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
  if ( !v25 || !(HasFlag = WarEntity__HasFlag(v25, 128, 0LL)) && !(HasFlag = WarEntity__HasFlag(v25, 32, 0LL)) )
  {
    if ( !IsClose && AreaBoardInfo_k__BackingField->fields.status == 1 )
      QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v80);
    v88 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v88 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v4,
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
      QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v90);
    }
    QuestBoardListViewItemDraw__SetClearSprite(v4, v25, v89);
    if ( !v25 )
      goto LABEL_171;
    goto LABEL_167;
  }
  v83 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v83 && v83 != 6 && (!IsClose || v83 != 1) )
    QuestBoardListViewItemDraw__SetStatusActive(v4, v83, v35 != 0 || eventEnt == 0LL || v83 != 1, v80);
  if ( IsPurchasedByRarePrism
    && QuestBoardListViewItemDraw__HasNewQuestInWar(
         (QuestBoardListViewItemDraw_o *)HasFlag,
         questList,
         warId,
         IsMainInterlude,
         v82) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v80);
  }
  v84 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v84 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v4,
    v84->static_fields->NEW_POS_AREA,
    v84->static_fields->NEW_W_AREA,
    v84->static_fields->NEW_H_AREA,
    v80);
  if ( IsMainInterlude && IsClosedWar )
    QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v86);
  QuestBoardListViewItemDraw__SetClearSprite(v4, v25, v85);
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
    QuestBoardListViewItemDraw__SetNextSprite(v4, AreaBoardInfo_k__BackingField, v25, v87);
  }
  v93 = v4->fields.mListViewObject;
  if ( !v93 )
    goto LABEL_193;
  manager = (__int64)v93->fields.manager;
  if ( !manager )
  {
LABEL_196:
    IsDisplayableRoadmapButton = QuestBoardListViewItem__IsDisplayableRoadmapButton(v3, 0LL);
    sub_1C3B9C0(IsDisplayableRoadmapButton, v106);
  }
  v94 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)v94
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v94 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_195:
    sub_1C3BC80(manager);
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
  if ( WarEntity__IsContainPrioredEntity(v25, 18, 0LL) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v95);
    QuestBoardListViewItemDraw__SetClearSprite(v4, v25, v96);
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(v25, 0LL) )
    QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v4, v3, v25, 0, 0, v97);
LABEL_171:
  if ( IsClose || !IsPurchasedByRarePrism && v35 == 0 && eventEnt != 0LL )
    questCount = 0;
  else
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  QuestBoardListViewItemDraw__SetBadge(v4, questCount, v92);
  QuestBoardListViewItemDraw__CreateInfoTextList(v4, v3, v110, v99);
  if ( !IsMainInterlude )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)v4->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_193;
    questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
    if ( (int)questBoardItem >= 1 )
    {
      v102 = v4->fields.mListViewObject;
      if ( !v102 )
        goto LABEL_193;
      this = (QuestBoardListViewItemDraw_o *)v102->fields.manager;
      if ( !this )
        goto LABEL_193;
      v103 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v103
        && (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v103 - 1] == QuestBoardListViewManager_TypeInfo )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                         (QuestBoardListViewManager_o *)this,
                         (int32_t)questBoardItem,
                         0LL);
        this = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                 mInfoTextList,
                                                 AlphaAnimCnt,
                                                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
            v100 = 1;
            goto LABEL_186;
          }
        }
LABEL_193:
        sub_1C3B9C0(this, questBoardItem);
      }
      sub_1C3BC80(this);
LABEL_198:
      sub_1C3B9C8(this, questBoardItem);
    }
  }
  v100 = 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v100, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_193;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_193;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v100, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x28
  int64_t Instance; // x0
  int64_t QuestBoardInformationText_35167640; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x23
  DataManager_o *v67; // x25
  QuestEntity_o *PhaseDetailedEntity; // x21
  unsigned int v69; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  int32_t dispType; // w29
  bool HasFlag; // w0
  float v74; // s8
  Il2CppObject *MasterData_object; // x22
  bool v76; // w22
  bool v77; // w0
  int32_t v78; // w20
  _BOOL4 v79; // w8
  QuestBoardListViewItemDraw_o *PhaseMax; // x0
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  char v83; // w22
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v85; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v87; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  struct QuestBoardListViewItemDraw_StaticFields *v89; // x8
  System_String_o *v90; // x0
  System_String_o *v91; // x0
  UISprite_o *mcBaseP; // x27
  System_String_o *v93; // x24
  int32_t questId; // w27
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v96; // x8
  UnityEngine_GameObject_o *v97; // x27
  float NEXT_POS_X_QUEST; // s0
  int32_t v99; // w27
  bool IsQuestClear_39011304; // w0
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x3
  int32_t v103; // w1
  const MethodInfo *v104; // x3
  QuestBoardListViewItemDraw_c *v105; // x0
  const MethodInfo *v106; // x3
  QuestBoardListViewItemDraw_c *v107; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v108; // x8
  QuestBoardListViewItemDraw_c *v109; // x0
  int pickupPriority; // w20
  QuestBoardListViewItemDraw_c *v111; // x0
  bool v112; // zf
  __int64 v113; // x9
  __int64 v114; // x10
  __int64 v115; // x11
  __int64 v116; // x12
  __int64 v117; // x13
  __int64 v118; // x14
  __int64 v119; // x10
  float *v120; // x9
  float *v121; // x10
  __int64 v122; // x11
  const MethodInfo *v123; // x1
  const MethodInfo *v124; // x2
  UnityEngine_GameObject_o *v125; // x22
  QuestBoardListViewItemDraw_c *v126; // x0
  QuestBoardListViewItemDraw_o *v127; // x0
  const MethodInfo *v128; // x5
  System_String_o *RecommendLv; // x0
  const MethodInfo *v130; // x2
  const MethodInfo *v131; // x2
  UISprite_o *mLabelFaceMaskQuestSp; // x22
  QuestBoardListViewItemDraw_o *v133; // x0
  int32_t mMatrixFrame; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v136; // x5
  bool v137; // w0
  const MethodInfo *v138; // x3
  UILabel_o *mTitleNameLb; // x22
  const MethodInfo *v140; // x4
  float *v141; // x26
  QuestBoardListViewItemDraw_o *v142; // x0
  const MethodInfo *v143; // x2
  const MethodInfo *v144; // x2
  UISprite_o *mLabelNameSp; // x22
  QuestBoardListViewItemDraw_o *v146; // x0
  const MethodInfo *v147; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v149; // x22
  const MethodInfo *v150; // x3
  float *v151; // x20
  float *v152; // x28
  UILabel_o *v153; // x22
  QuestBoardListViewItemDraw_o *v154; // x0
  const MethodInfo *v155; // x4
  bool PhasePresentGiftData; // w0
  bool v157; // w24
  const MethodInfo *v158; // x4
  float *v159; // x20
  int32_t v160; // w22
  QuestBoardListViewItemDraw_PhasePresentData_o *v161; // x27
  int32_t afterClear; // w28
  float v163; // s9
  float v164; // s10
  float v165; // s11
  float v166; // s12
  bool IsRepeatReward; // w0
  int32_t v168; // w4
  float *v169; // x28
  const MethodInfo *v170; // x6
  const MethodInfo *v171; // x3
  bool v172; // w22
  int v173; // w20
  const MethodInfo *v174; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  const MethodInfo *v176; // x7
  const MethodInfo *v177; // x5
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x9
  int64_t expireAt; // x1
  int32_t warId; // w3
  System_String_o *v181; // x4
  int64_t v182; // x2
  UISprite_o *v183; // x27
  __int64 v184; // x8
  System_String_o *v185; // x24
  System_String_o *v186; // x0
  System_String_o *v187; // x24
  struct MapControl_WarInfo_o *v188; // x8
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  __int64 v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  __int64 v198; // x8
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x27
  char v200; // w22
  struct QuestBoardListViewObject_o *v201; // x8
  System_Collections_Generic_List_object__o *v202; // x28
  __int64 v203; // x9
  int32_t AlphaAnimCnt; // w0
  Il2CppObject *Item; // x28
  int32_t v206; // w9
  int32_t v207; // w8
  const MethodInfo *v208; // x1
  int32_t endTime; // w25
  UISprite_o *mCostApSp; // x22
  System_String_o *ApSpriteFileName; // x24
  UnityEngine_GameObject_o *mChallengeObj; // x22
  struct UnityEngine_GameObject_o *v213; // x20
  DataManager_o *v214; // x24
  _BOOL4 v215; // w20
  QuestBoardListViewItemDraw_c *v216; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v217; // x8
  __int64 v218; // x9
  __int64 v219; // x10
  __int64 v220; // x11
  int32_t ClearNum; // w22
  UISprite_o *challengeStrSpr; // x25
  UILabel_o *mChallengeLb; // x25
  UnityEngine_GameObject_o *mPhaseObj; // x22
  UnityEngine_GameObject_o *v225; // x21
  UnityEngine_GameObject_o *v226; // x20
  const MethodInfo *v227; // x4
  int32_t v228; // w24
  MapControl_PhaseInfo_o *CurrentPhaseInfo; // x0
  int32_t ReferToQuestPhase; // w0
  int32_t v231; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v233; // x25
  int32_t v234; // w22
  int32_t *p_questPhase; // x8
  int32_t v236; // w0
  signed int v237; // w28
  uint32_t cctor_finished; // w9
  struct QuestBoardListViewItemDraw_StaticFields *v239; // x8
  int32_t PHASE_NORMAL_MAX; // w21
  bool v241; // w25
  _BOOL4 v242; // w26
  __int64 v243; // x9
  unsigned int v244; // w23
  signed int v245; // w20
  int v246; // w29
  int v247; // w21
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v249; // x8
  UISprite_o *v250; // x27
  QuestBoardListViewItemDraw_o *v251; // x0
  const MethodInfo *v252; // x6
  System_String_o *PhaseArrowSpriteName; // x0
  QuestBoardListViewItemDraw_o *v254; // x0
  const MethodInfo *v255; // x3
  int32_t PhaseArrowIntervalSize; // w24
  QuestEntity_o *v257; // x21
  UnityEngine_GameObject_o *v258; // x22
  QuestBoardListViewItemDraw_c *v259; // x0
  UISprite_o *mDamageRecordSp; // x22
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x24
  Il2CppObject *v262; // x22
  int64_t MaxTurnDamage; // x0
  UILabel_o *mDamageRecordLb; // x22
  __int64 v265; // x2
  __int64 v266; // x3
  __int64 v267; // x4
  Il2CppObject *v268; // x0
  UnityEngine_GameObject_o *v269; // x22
  DataManager_o *v270; // x25
  QuestBoardListViewItemDraw_c *v271; // x0
  UISprite_o *mKnockdownRecordSp; // x22
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x24
  QuestKnockdownInfo_o *v274; // x22
  Il2CppObject *v275; // x25
  UILabel_o *mKnockdownRecordCountLb; // x25
  __int64 v277; // x2
  __int64 v278; // x3
  __int64 v279; // x4
  System_String_o *v280; // x26
  Il2CppObject *v281; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x25
  System_String_o *v283; // x24
  __int64 v284; // x2
  __int64 v285; // x3
  __int64 v286; // x4
  Il2CppObject *v287; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x25
  System_String_o *v289; // x26
  long double inited; // q0
  _QWORD *v291; // x27
  __int64 v292; // x8
  __int64 v293; // x0
  __int64 v294; // x0
  UILabel_o *mKnockdownRecordDamageNameLb; // x25
  System_String_o *v296; // x0
  long double v297; // q0
  _QWORD *v298; // x27
  System_String_o *v299; // x26
  __int64 v300; // x8
  __int64 v301; // x0
  __int64 v302; // x0
  UnityEngine_GameObject_o *v303; // x22
  QuestBoardListViewItemDraw_c *v304; // x8
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_GameObject_o *v306; // x0
  float LocalPositionX; // s8
  QuestBoardListViewItemDraw_c *v308; // x0
  int32_t id; // w22
  TerminalSceneComponent_c *v310; // x0
  int64_t v311; // x22
  UILabel_o *mOptionRestrinctionLb; // x22
  __int64 v313; // x1
  UnityEngine_GameObject_o *v314; // x22
  UnityEngine_Behaviour_o *v315; // x22
  const MethodInfo *v316; // x3
  struct QuestPhaseDetailEntity_BoardList_o *boardMessage; // x8
  System_Collections_Generic_IEnumerable_TSource__o *list; // x0
  __int64 v319; // x8
  QuestPhaseDetailEntity_BoardInfo_array *v320; // x25
  __int64 v321; // x8
  QuestPhaseDetailEntity_BoardInfo_o *v322; // x8
  bool v323; // w22
  bool v324; // w25
  char v325; // w28
  int64_t v326; // x2
  int32_t v327; // w3
  System_String_o *v328; // x4
  BattleSetupInfo_o *v329; // x5
  FollowerInfo_o *v330; // x6
  PartyListViewItem_o *v331; // x7
  bool v332; // w26
  __int64 v333; // x8
  _QWORD *v334; // x9
  __int64 v335; // x10
  __int64 v336; // x8
  _BOOL4 v337; // w20
  UISprite_o *mCostConsumeBattleWinSp; // x27
  __int64 v339; // x9
  QuestBoardListViewItemDraw_c *v340; // x0
  UISprite_o *mOptionPreBattleSp; // x26
  System_String_o *PRE_BATTLE_ORGANIZATION; // x24
  int64_t v343; // x2
  int32_t v344; // w3
  System_String_o *v345; // x4
  BattleSetupInfo_o *v346; // x5
  FollowerInfo_o *v347; // x6
  PartyListViewItem_o *v348; // x7
  __int64 v349; // x8
  _QWORD *v350; // x9
  __int64 v351; // x10
  __int64 v352; // x8
  bool v353; // w26
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  char v355; // w22
  UnityEngine_GameObject_o *v356; // x25
  QuestBoardListViewItemDraw_c *v357; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v358; // x8
  const MethodInfo *v359; // x2
  struct UILabel_o *v360; // x22
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v362; // x2
  struct UILabel_o *v363; // x8
  QuestBoardListViewItemDraw_c *v364; // x0
  int32_t mSpacingX; // w20
  QuestBoardListViewItemDraw_c *v366; // x0
  QuestPhaseEntity_o *v367; // x0
  QuestPhaseEntity_o *v368; // x22
  struct System_Int32_array *classIds; // x8
  bool v370; // w23
  QuestBoardListViewItemDraw_o *v371; // x0
  const MethodInfo *v372; // x2
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v376; // x22
  QuestBoardListViewItemDraw___c_c *v377; // x0
  System_Func_object__int__o *_9__318_1; // x23
  Il2CppObject *v379; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v380; // x0
  int64_t v381; // x2
  int32_t v382; // w3
  System_String_o *v383; // x4
  BattleSetupInfo_o *v384; // x5
  FollowerInfo_o *v385; // x6
  PartyListViewItem_o *v386; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v387; // x0
  System_Int32_array *v388; // x22
  struct ServantClassIconComponent_array *mClassIcons; // x8
  ServantClassIconComponent_o *v390; // x22
  WaveBattleWaveEnemyInfoItem_c *v391; // x0
  struct ServantClassIconComponent_array *v392; // x8
  int max_length; // w20
  int v394; // w21
  struct ServantClassIconComponent_array *v395; // x8
  int v396; // w9
  int v397; // w20
  struct System_Int32_array *v398; // x21
  il2cpp_array_size_t v399; // w9
  __int64 v400; // x23
  Il2CppClass **v401; // x8
  UnityEngine_Component_o *v402; // x22
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v405; // w21
  QuestBoardListViewItemDraw_c *v406; // x0
  int32_t *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  UISprite_o *v408; // x27
  __int64 v409; // x8
  QuestBoardListViewItemDraw_o *v410; // x0
  QuestBoardListViewItem_o *v411; // x1
  const MethodInfo *v412; // x2
  const MethodInfo *v413; // [xsp+8h] [xbp-168h]
  int64_t checkTime; // [xsp+20h] [xbp-150h]
  bool v415; // [xsp+28h] [xbp-148h]
  int key; // [xsp+2Ch] [xbp-144h]
  MapControl_QuestInfo_o *v417; // [xsp+30h] [xbp-140h]
  MapControl_QuestInfo_o *v418; // [xsp+30h] [xbp-140h]
  _BOOL4 v419; // [xsp+3Ch] [xbp-134h]
  bool v420; // [xsp+40h] [xbp-130h]
  unsigned int questType; // [xsp+44h] [xbp-12Ch]
  int32_t questTypea; // [xsp+44h] [xbp-12Ch]
  bool v423; // [xsp+48h] [xbp-128h]
  QuestEntity_o *v424; // [xsp+48h] [xbp-128h]
  DataManager_o *v425; // [xsp+50h] [xbp-120h]
  int32_t questPhase; // [xsp+5Ch] [xbp-114h]
  float *v427; // [xsp+60h] [xbp-110h]
  _BOOL4 v428; // [xsp+6Ch] [xbp-104h]
  float *v429; // [xsp+70h] [xbp-100h]
  float *v430; // [xsp+78h] [xbp-F8h]
  float *v431; // [xsp+80h] [xbp-F0h]
  int64_t totalDamage; // [xsp+88h] [xbp-E8h] BYREF
  int64_t knockdownNum; // [xsp+90h] [xbp-E0h] BYREF
  QuestPhaseDetailEntity_o *v434; // [xsp+98h] [xbp-D8h] BYREF
  Il2CppObject *v435; // [xsp+A0h] [xbp-D0h] BYREF
  int64_t endedAt; // [xsp+A8h] [xbp-C8h] BYREF
  System_String_o *infoText; // [xsp+B0h] [xbp-C0h] BYREF
  int32_t v438; // [xsp+B8h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+BCh] [xbp-B4h] BYREF
  int32_t fixedVal[2]; // [xsp+C0h] [xbp-B0h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+C8h] [xbp-A8h] BYREF
  bool isTripleItemConsume; // [xsp+D4h] [xbp-9Ch] BYREF
  bool isDoubleItemConsumeQp; // [xsp+D8h] [xbp-98h] BYREF
  bool isDoubleItemConsume; // [xsp+DCh] [xbp-94h] BYREF
  UserQuestEntity_o *entity; // [xsp+E8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v446; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v447; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v448; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v449; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v450; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v451; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v452; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v453; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v454; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v455; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v456; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v457; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v458; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v459; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v460; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v461; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v462; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v463; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v464; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v465; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v466; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v467; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v468; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v469; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v470; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v471; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v472; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v473; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v474; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1ECE8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, questBoardItem);
    sub_1C3B764(&Method_System_Array_Empty_object___, v5);
    sub_1C3B764(&AtlasManager_TypeInfo, v6);
    sub_1C3B764(&CondType_TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestRecordMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMaster_ViewEnemyMaster___, v14);
    sub_1C3B764(&DataManager_TypeInfo, v15);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v16);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_QuestBoardInformationText___, v17);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v18);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___, v19);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v20);
    sub_1C3B764(&System_Func_ViewEnemyEntity__int__TypeInfo, v21);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___, v22);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v23);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v24);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v25);
    sub_1C3B764(&long_TypeInfo, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_UISprite__Add__, v28);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v29);
    sub_1C3B764(&Method_System_Collections_Generic_List_UISprite__get_Count__, v30);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v31);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v32);
    sub_1C3B764(&LocalizationManager_TypeInfo, v33);
    sub_1C3B764(&NetworkManager_TypeInfo, v34);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v35);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v36);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v37);
    sub_1C3B764(&QuestInformationComponent_TypeInfo, v38);
    sub_1C3B764(&QuestKnockdownInfo_TypeInfo, v39);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v41);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v42);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v43);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__318_1__, v44);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__DisplayClass318_0__SetItemOfQuest_b__0__, v45);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass318_0_TypeInfo, v46);
    sub_1C3B764(&QuestBoardListViewItemDraw___c_TypeInfo, v47);
    sub_1C3B764(&WaveBattleWaveEnemyInfoItem_TypeInfo, v48);
    sub_1C3B764(&StringLiteral_23187/*"state:{0}"*/, v49);
    sub_1C3B764(&StringLiteral_11057/*"Request timeout"*/, v50);
    sub_1C3B764(&StringLiteral_11054/*"Request Header Fields Too Large"*/, v51);
    sub_1C3B764(&StringLiteral_25446, v52);
    sub_1C3B764(&StringLiteral_11056/*"Request being submitted"*/, v53);
    sub_1C3B764(&StringLiteral_11055/*"Request Timeout"*/, v54);
    sub_1C3B764(&StringLiteral_1/*""*/, v55);
    sub_1C3B764(&StringLiteral_23188/*"stateMachine"*/, v56);
    byte_4C1ECE8 = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  v438 = 0;
  endedAt = 0LL;
  infoText = 0LL;
  v434 = 0LL;
  v435 = 0LL;
  v57 = sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass318_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass318_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass318_0_o *)v57,
    0LL);
  if ( !v57 )
    goto LABEL_575;
  *(_QWORD *)(v57 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v57 + 16), (int64_t)this, v60, v61, v62, v63, v64, v65);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_575;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_575;
  v67 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_575;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v67 )
    goto LABEL_575;
  v69 = Instance;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v67,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_575;
  if ( !Instance )
    goto LABEL_575;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  key = Instance;
  if ( !mListViewObject )
    goto LABEL_575;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_575;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_616;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *(_QWORD *)(Instance + 584);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  if ( dispType == 2 )
    v74 = 0.5;
  else
    v74 = 1.0;
  *(float *)(v57 + 24) = v74;
  v427 = (float *)(v57 + 24);
  *(float *)(v57 + 28) = v74;
  *(float *)(v57 + 32) = v74;
  *(_DWORD *)(v57 + 36) = 1065353216;
  v423 = HasFlag;
  v429 = (float *)(v57 + 28);
  v430 = (float *)(v57 + 32);
  v431 = (float *)(v57 + 36);
  MasterData_object = DataManager__GetMasterData_object_(
                        v67,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, QuestBoardInformationText_35167640);
    byte_4C1C955 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_575;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    PhaseDetailedEntity->fields.id,
    0LL);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_575;
  v76 = QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x10000000000000LL, 0LL);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_575;
  v77 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, quest_info_k__BackingField->fields.questId, 0, 0LL);
  v78 = quest_info_k__BackingField->fields.questPhase;
  v79 = !v76;
  v428 = v79;
  if ( !v77 )
    v79 = 0;
  v419 = v79;
  PhaseMax = (QuestBoardListViewItemDraw_o *)MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v82 = v78 + 1 < (int)PhaseMax ? v78 + 1 : (int)PhaseMax;
  questPhase = v82;
  Instance = QuestBoardListViewItemDraw__IsInterruptedQuest(
               PhaseMax,
               quest_info_k__BackingField->fields.questId,
               v82,
               v81);
  if ( !this->fields.mLabelObj )
    goto LABEL_575;
  v83 = Instance;
  UnityEngine_GameObject__SetActive(this->fields.mLabelObj, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  questType = v69;
  if ( OverwriteBannerId_k__BackingField >= 1 )
  {
    v85 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v85 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    static_fields = v85->static_fields;
    v87 = (QuestBoardListViewItemDraw_c *)&v438;
    QUEST_BOARD_SPNAME_PREFIX = static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v438 = OverwriteBannerId_k__BackingField;
LABEL_58:
    v90 = System_Int32__ToString((int32_t)v87, 0LL);
    v91 = System_String__Concat_63368612(QUEST_BOARD_SPNAME_PREFIX, v90, 0LL);
    mcBaseP = this->fields.mcBaseP;
    v93 = v91;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mcBaseP, v93, 0LL);
    if ( !mcBaseP )
      goto LABEL_575;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, Instance & 1, 0LL);
    goto LABEL_62;
  }
  if ( PhaseDetailedEntity->fields.bannerId >= 1 )
  {
    v87 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v87 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v89 = v87->static_fields;
    LODWORD(v87) = (_DWORD)PhaseDetailedEntity + 64;
    QUEST_BOARD_SPNAME_PREFIX = v89->QUEST_BOARD_SPNAME_PREFIX;
    goto LABEL_58;
  }
  v183 = this->fields.mcBaseP;
  if ( questType <= 5 && ((1 << questType) & 0x26) != 0 )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    v184 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1072LL);
    if ( !v184 )
      goto LABEL_575;
    if ( questType >= *(_DWORD *)(v184 + 24) )
      goto LABEL_615;
    v185 = *(System_String_o **)(v184 + 8LL * questType + 32);
    v186 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
    v187 = System_String__Concat_63368612(v185, v186, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v183, v187, 0LL);
  }
  else
  {
    if ( !v183 )
      goto LABEL_575;
    UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0LL);
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v408 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    v409 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1072LL);
    if ( !v409 )
      goto LABEL_575;
    if ( questType >= *(_DWORD *)(v409 + 24) )
      goto LABEL_615;
    if ( !v408 )
      goto LABEL_575;
    UISprite__set_spriteName(v408, *(System_String_o **)(v409 + 8LL * (int)questType + 32), 0LL);
  }
LABEL_62:
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_575;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_575;
  v449.fields.a = *v431;
  v449.fields.b = *v430;
  v449.fields.g = *v429;
  v449.fields.r = *v427;
  UIWidget__set_color((UIWidget_o *)Instance, v449, 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 1
    && MapControl_QuestInfo__IsDisaplayable(quest_info_k__BackingField, 0LL) )
  {
    Instance = (int64_t)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
    if ( !Instance )
      goto LABEL_575;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x400000000000LL, 0LL) )
    {
      questId = quest_info_k__BackingField->fields.questId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_39011304(questId, -1, 1, 0LL) )
        goto LABEL_74;
    }
  }
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
LABEL_74:
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_575;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_575;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_575;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v96 = QuestBoardListViewItemDraw_TypeInfo;
    v97 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v96 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v97, v96->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_575;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_575;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_575;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 128) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 140) = NEXT_POS_X_QUEST;
  }
  v99 = quest_info_k__BackingField->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v420 = dispType != 2;
  IsQuestClear_39011304 = CondType__IsQuestClear_39011304(v99, -1, 0, 0LL);
  if ( IsQuestClear_39011304 || dispType != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v103 = 1;
    }
    else
    {
      if ( !IsQuestClear_39011304 )
        goto LABEL_92;
      v103 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v103, 1, v102);
  }
LABEL_92:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v102);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v101);
  Instance = (int64_t)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v105 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v105 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      v105->static_fields->NEW_POS_QUEST_NEXT,
      v105->static_fields->NEW_W_DEFAULT,
      v105->static_fields->NEW_H_DEFAULT,
      v104);
    v107 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v107 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v108 = v107->static_fields;
LABEL_107:
    v112 = (v83 & 1) == 0;
    v113 = 228LL;
    v114 = 252LL;
    v115 = 224LL;
    v116 = 248LL;
    v117 = 220LL;
    v118 = 244LL;
    goto LABEL_108;
  }
  v109 = QuestBoardListViewItemDraw_TypeInfo;
  pickupPriority = quest_info_k__BackingField->fields.pickupPriority;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v109 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v109->static_fields->NEW_POS_QUEST,
    v109->static_fields->NEW_W_DEFAULT,
    v109->static_fields->NEW_H_DEFAULT,
    v104);
  v111 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v111 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v108 = v111->static_fields;
  if ( pickupPriority >= 1 )
    goto LABEL_107;
  v112 = (v83 & 1) == 0;
  v113 = 216LL;
  v114 = 240LL;
  v115 = 212LL;
  v116 = 236LL;
  v117 = 208LL;
  v118 = 232LL;
LABEL_108:
  if ( !v112 )
    v113 = v114;
  if ( v112 )
    v119 = v115;
  else
    v119 = v116;
  v120 = (float *)((char *)&v108->POS_Y_ITVL_AREA + v113);
  v121 = (float *)((char *)&v108->POS_Y_ITVL_AREA + v119);
  if ( v112 )
    v122 = v117;
  else
    v122 = v118;
  v446.fields.z = *v120;
  v446.fields.y = *v121;
  LODWORD(v446.fields.x) = *(int32_t *)((char *)&v108->POS_Y_ITVL_AREA + v122);
  QuestBoardListViewItemDraw__SetPrevSprite(this, PhaseDetailedEntity, v446, v83 & 1, v106);
  if ( dispType != 2
    && quest_info_k__BackingField->fields.isNew
    && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v123);
  }
  Instance = (int64_t)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v124);
  if ( !Instance )
    goto LABEL_575;
  v125 = (UnityEngine_GameObject_o *)Instance;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v126 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v126 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v125, v126->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  Instance = (int64_t)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v423, 0LL);
  Instance = (int64_t)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_575;
  v417 = (MapControl_QuestInfo_o *)questBoardItem;
  v425 = v67;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_575;
  v450.fields.a = *v431;
  v450.fields.b = *v430;
  v450.fields.g = *v429;
  v450.fields.r = *v427;
  UIWidget__set_color((UIWidget_o *)Instance, v450, 0LL);
  v415 = !v423;
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  v127,
                  PhaseDetailedEntity,
                  questPhase,
                  !v423,
                  dispType == 2,
                  v128);
  v451.fields.r = *v427;
  v451.fields.g = *v429;
  v451.fields.b = *v430;
  v451.fields.a = *v431;
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, v451, v130);
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  v133 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v133 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mMatrixFrame = v133->fields.mTitleLevelStrSp[1].fields.mMatrixFrame;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v133, questType, v131);
  v452.fields.r = *v427;
  v452.fields.g = *v429;
  v452.fields.b = *v430;
  v452.fields.a = *v431;
  v137 = QuestBoardListViewItemDraw__SetFaceImage(
           this,
           PhaseDetailedEntity,
           mLabelFaceMaskQuestSp,
           mMatrixFrame,
           FaceMaskSpriteName,
           v452,
           v136);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v137 )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, questType, v138);
    if ( !mTitleNameLb )
      goto LABEL_575;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    v141 = (float *)(v57 + 24);
    goto LABEL_151;
  }
  Instance = (int64_t)QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_575;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( questType != 1 || !QuestBoardListViewItemDraw__IsMainWar(v142, quest_info_k__BackingField->fields.warId, v143) )
  {
    Instance = (int64_t)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_575;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_575;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_575;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v146, PhaseDetailedEntity, questType, v147);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    v141 = (float *)(v57 + 24);
    if ( !mLabelNameSp )
      goto LABEL_575;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_575;
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_575;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_575;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_575;
    v453.fields.r = *v427;
    v453.fields.a = *v431;
    v453.fields.b = *v430;
    v453.fields.g = *v429;
    UIWidget__set_color((UIWidget_o *)Instance, v453, 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_575;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v57 + 40) = PhaseDetailedEntity->fields.id;
      v149 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v149,
        (Il2CppObject *)v57,
        Method_QuestBoardListViewItemDraw___c__DisplayClass318_0__SetItemOfQuest_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v149, v150);
    }
LABEL_151:
    if ( dispType == 2 )
      goto LABEL_152;
    goto LABEL_153;
  }
  v141 = (float *)(v57 + 24);
  if ( dispType == 2 )
  {
LABEL_152:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v140);
    v151 = (float *)(v57 + 36);
    v152 = (float *)(v57 + 28);
    goto LABEL_155;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v144);
LABEL_153:
  Instance = (int64_t)this->fields.mAdvanceNoticeLb;
  v151 = (float *)(v57 + 36);
  v152 = (float *)(v57 + 28);
  if ( !Instance )
    goto LABEL_575;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_155:
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  v153 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v153 )
    goto LABEL_575;
  UILabel__SetCondensedScale(v153, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_575;
  v454.fields.a = *v151;
  v454.fields.g = *v152;
  v454.fields.r = *v141;
  v454.fields.b = *v430;
  UIWidget__set_color((UIWidget_o *)Instance, v454, 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v154,
                           &phasePresentData,
                           PhaseDetailedEntity,
                           quest_info_k__BackingField->fields.questPhase,
                           v155);
  v455.fields.r = *v141;
  v455.fields.g = *v152;
  v455.fields.b = *v430;
  v455.fields.a = *v151;
  v157 = PhasePresentGiftData;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    phasePresentData,
    dispType == 2,
    v455,
    v158);
  v159 = v152;
  v160 = quest_info_k__BackingField->fields.questId;
  v161 = phasePresentData;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v163 = *v141;
  v164 = *v159;
  v165 = *v430;
  v166 = *v431;
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v168 = afterClear;
  v169 = v431;
  v456.fields.r = v163;
  v456.fields.g = v164;
  v456.fields.b = v165;
  v456.fields.a = v166;
  QuestBoardListViewItemDraw__SetupRewardDisp(this, v160, v157, v161, v168, v456, IsRepeatReward, v170);
  v457.fields.r = *v141;
  v457.fields.g = *v159;
  v457.fields.b = *v430;
  v457.fields.a = *v431;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v457, v171);
  if ( entity && UserQuestEntity__HasStatus(entity, 8, 0LL) )
  {
    Instance = (int64_t)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_575;
    Instance = (int64_t)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_575;
    v172 = !WarEntity__IsShop((WarEntity_o *)Instance, 0LL);
    v173 = 1;
  }
  else
  {
    v173 = 0;
    v172 = 0;
  }
  Instance = (int64_t)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v172, 0LL);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v174);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        questPhase,
                        !v419,
                        &fixedVal[1],
                        fixedVal,
                        &isNotItemConsume,
                        v176);
  if ( !mInfoTextList )
    goto LABEL_575;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL) )
  {
    Instance = (int64_t)this->fields.mRarePrismSp;
    if ( !Instance )
      goto LABEL_575;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_575;
    if ( v173 | UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
    {
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_575;
      Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_198;
      if ( !entity )
        goto LABEL_575;
      WarInfo_k__BackingField = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_575;
      expireAt = entity->fields.expireAt;
      warId = WarInfo_k__BackingField->fields.warId;
    }
    else
    {
      Instance = QuestMaster__TryGetPrivilegePeriodMessage(&infoText, &endedAt, PhaseDetailedEntity->fields.id, 0LL);
      if ( (Instance & 1) != 0 )
      {
        expireAt = endedAt;
        v181 = infoText;
        v182 = checkTime;
        warId = 0;
        goto LABEL_192;
      }
      v188 = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
      if ( !v188 )
        goto LABEL_575;
      expireAt = quest_info_k__BackingField->fields.endTime;
      warId = v188->fields.warId;
    }
    v182 = checkTime;
    v181 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_192:
    QuestBoardInformationText_35167640 = (int64_t)QuestBoardListViewItemDraw__CreateQuestBoardInformationText_35167640(
                                                    (QuestBoardListViewItemDraw_o *)Instance,
                                                    expireAt,
                                                    v182,
                                                    warId,
                                                    v181,
                                                    v177);
    if ( QuestBoardInformationText_35167640 )
    {
      Instance = (int64_t)this->fields.mInfoTextList;
      if ( !Instance )
        goto LABEL_575;
      v195 = *(_QWORD *)(Instance + 16);
      v196 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v195 )
        goto LABEL_575;
      v197 = *(int *)(Instance + 24);
      if ( (unsigned int)v197 >= *(_DWORD *)(v195 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)QuestBoardInformationText_35167640,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
      }
      else
      {
        v198 = v195 + 8 * v197;
        *(_DWORD *)(Instance + 24) = v197 + 1;
        *(_QWORD *)(v198 + 32) = QuestBoardInformationText_35167640;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)(v198 + 32),
          QuestBoardInformationText_35167640,
          v189,
          v190,
          v191,
          v192,
          v193,
          v194);
      }
    }
  }
LABEL_198:
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Instance = System_Linq_Enumerable__Any_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mInfoTextList,
               (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_QuestBoardInformationText___);
  v200 = Instance;
  if ( (Instance & 1) == 0 )
    goto LABEL_209;
  v201 = this->fields.mListViewObject;
  if ( !v201 )
    goto LABEL_575;
  v202 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v202 )
    goto LABEL_575;
  Instance = (int64_t)v201->fields.manager;
  if ( !Instance )
    goto LABEL_575;
  v203 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v203
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v203 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_616:
    sub_1C3BC80(Instance);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v410, v411, v412);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                   (QuestBoardListViewManager_o *)Instance,
                   v202->fields._size,
                   0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v202,
           AlphaAnimCnt,
           (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !Item )
    goto LABEL_575;
  QuestBoardInformationText__SetTime_35212264(
    (QuestBoardInformationText_o *)Item,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    Instance,
    0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_575;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v206 = fixedVal[1];
  v169 = v431;
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v207 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v206;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v207;
LABEL_209:
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v200 & 1, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v200 & 1, 0LL);
  v458.fields.r = *v141;
  v458.fields.g = *v429;
  v458.fields.a = *v169;
  v458.fields.b = *v430;
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    dispType == 2,
    fixedVal[1],
    fixedVal[0],
    isNotItemConsume,
    v458,
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    v413);
  endTime = v417->fields.endTime;
  if ( endTime >= 1 )
  {
    mCostApSp = this->fields.mCostApSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(endTime, v208);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
    if ( !mCostApSp )
      goto LABEL_575;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, Instance & 1, 0LL);
  }
  mChallengeObj = this->fields.mChallengeObj;
  if ( v423 )
    v213 = 0LL;
  else
    v213 = this->fields.mChallengeObj;
  if ( v423 )
  {
    v214 = v425;
    goto LABEL_228;
  }
  Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 0x4000LL, 0LL);
  v214 = v425;
  if ( (Instance & 1) != 0 )
  {
LABEL_228:
    QuestBoardInformationText_35167640 = 0LL;
    if ( !mChallengeObj )
      goto LABEL_575;
    goto LABEL_234;
  }
  Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 4LL, 0LL);
  QuestBoardInformationText_35167640 = (Instance & 1) != 0 && PhaseDetailedEntity->fields.afterClear != 1;
  mChallengeObj = v213;
  if ( !v213 )
    goto LABEL_575;
LABEL_234:
  UnityEngine_GameObject__SetActive(mChallengeObj, QuestBoardInformationText_35167640, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_575;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v215 = isDoubleItemConsume;
    v216 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v216 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v217 = v216->static_fields;
    v218 = 532LL;
    if ( !v215 )
      v218 = 520LL;
    if ( v215 )
      v219 = 528LL;
    else
      v219 = 516LL;
    if ( v215 )
      v220 = 524LL;
    else
      v220 = 512LL;
    LODWORD(v447.fields.x) = *(int32_t *)((char *)&v217->POS_Y_ITVL_AREA + v220);
    LODWORD(v447.fields.y) = *(int32_t *)((char *)&v217->POS_Y_ITVL_AREA + v219);
    LODWORD(v447.fields.z) = *(int32_t *)((char *)&v217->POS_Y_ITVL_AREA + v218);
    GameObjectExtensions__SetLocalPosition(this->fields.mChallengeObj, v447, 0LL);
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          v214,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_575;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &v435,
      key,
      (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( QuestEntity__HasFlag(PhaseDetailedEntity, 4LL, 0LL)
      && (!v435 || EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)v435, 0LL)) )
    {
      if ( entity )
        ClearNum = UserQuestEntity__getClearNum(entity, 0LL);
      else
        ClearNum = 0;
      challengeStrSpr = this->fields.challengeStrSpr;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_23188/*"stateMachine"*/, 0LL);
    }
    else
    {
      if ( entity )
        ClearNum = entity->fields.challengeNum;
      else
        ClearNum = 0;
      Instance = (int64_t)this->fields.challengeStrSpr;
      if ( !Instance )
        goto LABEL_575;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_23187/*"state:{0}"*/, 0LL);
    }
    mChallengeLb = this->fields.mChallengeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__GetNumberFormat(ClearNum, 0LL);
    if ( !mChallengeLb
      || (UILabel__set_text(mChallengeLb, (System_String_o *)Instance, 0LL),
          (Instance = (int64_t)this->fields.challengeStrSpr) == 0) )
    {
LABEL_575:
      sub_1C3B9C0(Instance, QuestBoardInformationText_35167640);
    }
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  Instance = (int64_t)this->fields.mChallengeLb;
  if ( !Instance )
    goto LABEL_575;
  v459.fields.a = *v169;
  v459.fields.r = *v141;
  v459.fields.b = *v430;
  v424 = PhaseDetailedEntity;
  v459.fields.g = *v429;
  UIWidget__set_color((UIWidget_o *)Instance, v459, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_575;
  mPhaseObj = this->fields.mPhaseObj;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
    v225 = 0LL;
  else
    v225 = mPhaseObj;
  if ( (Instance & 1) != 0 )
    goto LABEL_276;
  Instance = QuestEntity__HasFlag(v424, 0x4000LL, 0LL);
  v226 = (Instance & 1) != 0 ? 0LL : v225;
  if ( (Instance & 1) != 0 )
    goto LABEL_276;
  Instance = QuestEntity__HasFlag(v424, 0x10000LL, 0LL);
  if ( (Instance & 1) != 0 )
    mPhaseObj = 0LL;
  else
    mPhaseObj = v226;
  if ( (Instance & 1) == 0 )
  {
    if ( dispType == 2 )
    {
      Instance = QuestEntity__HasFlag(v424, 512LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
LABEL_276:
        QuestBoardInformationText_35167640 = 0LL;
        goto LABEL_277;
      }
      v226 = mPhaseObj;
    }
    Instance = QuestEntity__HasFlag(v424, 0x4000000LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      QuestBoardInformationText_35167640 = 0LL;
    }
    else
    {
      Instance = QuestEntity__HasFlag(v424, 0x2000000000LL, 0LL);
      QuestBoardInformationText_35167640 = (Instance & 1) == 0 && v428;
    }
    mPhaseObj = v226;
    goto LABEL_277;
  }
  QuestBoardInformationText_35167640 = 0LL;
  mPhaseObj = v225;
LABEL_277:
  v418 = quest_info_k__BackingField;
  if ( !mPhaseObj )
    goto LABEL_575;
  questTypea = dispType;
  UnityEngine_GameObject__SetActive(mPhaseObj, QuestBoardInformationText_35167640, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_575;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    QuestBoardListViewItemDraw__InitPhase(this, isDoubleItemConsume, isDoubleItemConsumeQp, isTripleItemConsume, v227);
    v228 = v424->fields.afterClear;
    CurrentPhaseInfo = MapControl_QuestInfo__GetCurrentPhaseInfo(quest_info_k__BackingField, 0LL);
    if ( !CurrentPhaseInfo )
      goto LABEL_285;
    ReferToQuestPhase = MapControl_PhaseInfo__GetReferToQuestPhase(CurrentPhaseInfo, 0LL);
    if ( ReferToQuestPhase < 1 )
      goto LABEL_285;
    v231 = ReferToQuestPhase;
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_575;
    QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v231, 0LL);
    if ( QuestInfo )
    {
      v233 = QuestInfo;
      v234 = MapControl_QuestInfo__GetPhaseMax(QuestInfo, 0LL);
      p_questPhase = &v233->fields.questPhase;
    }
    else
    {
LABEL_285:
      v236 = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
      p_questPhase = &quest_info_k__BackingField->fields.questPhase;
      v234 = v236;
    }
    v237 = *p_questPhase;
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
    }
    v239 = *(struct QuestBoardListViewItemDraw_StaticFields **)(Instance + 184);
    PHASE_NORMAL_MAX = v239->PHASE_NORMAL_MAX;
    v241 = v228 == 2 && v420;
    v242 = v234 > PHASE_NORMAL_MAX;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      v239 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v239->PHASE_NORMAL_MAX;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
        v239 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
    }
    v243 = 496LL;
    if ( v234 > PHASE_NORMAL_MAX )
      v243 = 504LL;
    v244 = v228 - 3;
    v245 = 0;
    v246 = -*(int32_t *)((char *)&v239->POS_Y_ITVL_AREA + v243);
    v247 = v234 - 1;
    while ( 1 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v245 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        break;
      mPhaseSp = this->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_575;
      if ( v245 >= mPhaseSp->max_length )
        goto LABEL_615;
      v249 = &mPhaseSp->obj.klass + v245;
      v250 = (UISprite_o *)v249[4];
      if ( !v250 )
        goto LABEL_575;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v249[4], 0LL);
      if ( !Instance )
        goto LABEL_575;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v245 < v234, 0LL);
      if ( v245 < v234 )
      {
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 v251,
                                 v242,
                                 (v245 < v237) & (unsigned __int8)v428,
                                 v247 == v245,
                                 v241,
                                 (v247 == v245) & (unsigned __int8)(v244 < 2),
                                 v252);
        UISprite__set_spriteName(v250, PhaseArrowSpriteName, 0LL);
        v460.fields.a = 1.0;
        v460.fields.r = v74;
        v460.fields.g = v74;
        v460.fields.b = v74;
        UIWidget__set_color((UIWidget_o *)v250, v460, 0LL);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v254,
                                   v242,
                                   v247 == v245 && v244 < 2,
                                   v255);
        Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v250, 0LL);
        if ( !Instance )
          goto LABEL_575;
        v246 += PhaseArrowIntervalSize;
        v448.fields.x = (float)v246;
        v448.fields.y = 0.0;
        v448.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v448, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v250->klass->vtable._33_MakePixelPerfect.method)(
          v250,
          v250->klass->vtable._34_get_minWidth.methodPtr);
      }
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      ++v245;
    }
  }
  Instance = (int64_t)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_575;
  v257 = v424;
  v258 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v424, 0x4000000LL, 0LL);
  if ( !v258 )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive(v258, Instance & 1, 0LL);
  Instance = (int64_t)this->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v259 = QuestBoardListViewItemDraw_TypeInfo;
    mDamageRecordSp = this->fields.mDamageRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v259 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v259->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mDamageRecordSp, QUEST_BOARD_DAMAGE_RECODE_NAME, 0LL);
    v262 = DataManager__GetMasterData_object_(
             v425,
             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, QuestBoardInformationText_35167640);
      byte_4C1C955 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !v262 )
      goto LABEL_575;
    MaxTurnDamage = UserQuestRecordMaster__GetMaxTurnDamage(
                      (UserQuestRecordMaster_o *)v262,
                      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                      v424->fields.id,
                      0LL);
    mDamageRecordLb = this->fields.mDamageRecordLb;
    knockdownNum = MaxTurnDamage;
    v268 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum, v265, v266, v267);
    Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_25446, v268, 0LL);
    if ( !mDamageRecordLb )
      goto LABEL_575;
    UILabel__set_text(mDamageRecordLb, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.mDamageRecordSp;
    if ( !Instance )
      goto LABEL_575;
    v461.fields.a = *v431;
    v461.fields.b = *v430;
    v461.fields.g = *v429;
    v461.fields.r = *v427;
    UIWidget__set_color((UIWidget_o *)Instance, v461, 0LL);
    Instance = (int64_t)this->fields.mDamageRecordLb;
    if ( !Instance )
      goto LABEL_575;
    v462.fields.a = *v431;
    v462.fields.b = *v430;
    v462.fields.g = *v429;
    v462.fields.r = *v427;
    UIWidget__set_color((UIWidget_o *)Instance, v462, 0LL);
  }
  Instance = (int64_t)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_575;
  v269 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v424, 0x2000000000LL, 0LL);
  v270 = v425;
  if ( !v269 )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive(v269, Instance & 1, 0LL);
  Instance = (int64_t)this->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v271 = QuestBoardListViewItemDraw_TypeInfo;
    mKnockdownRecordSp = this->fields.mKnockdownRecordSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v271 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v271->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mKnockdownRecordSp, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0LL);
    v274 = (QuestKnockdownInfo_o *)sub_1C3B9B0(QuestKnockdownInfo_TypeInfo);
    QuestKnockdownInfo___ctor(v274, 0LL);
    v275 = DataManager__GetMasterData_object_(
             v425,
             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, QuestBoardInformationText_35167640);
      byte_4C1C955 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !v275 )
      goto LABEL_575;
    UserQuestRecordMaster__GetKnockdownRecordinfo(
      (UserQuestRecordMaster_o *)v275,
      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
      v424->fields.id,
      v274,
      0LL);
    mKnockdownRecordCountLb = this->fields.mKnockdownRecordCountLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11054/*"Request Header Fields Too Large"*/, 0LL);
    if ( !v274 )
      goto LABEL_575;
    v280 = (System_String_o *)Instance;
    knockdownNum = v274->fields.knockdownNum;
    v281 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum, v277, v278, v279);
    Instance = (int64_t)System_String__Format(v280, v281, 0LL);
    if ( !mKnockdownRecordCountLb )
      goto LABEL_575;
    UILabel__set_text(mKnockdownRecordCountLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageLb = this->fields.mKnockdownRecordDamageLb;
    v283 = LocalizationManager__Get((System_String_o *)StringLiteral_11055/*"Request Timeout"*/, 0LL);
    totalDamage = v274->fields.totalDamage;
    v287 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &totalDamage, v284, v285, v286);
    Instance = (int64_t)System_String__Format(v283, v287, 0LL);
    if ( !mKnockdownRecordDamageLb )
      goto LABEL_575;
    UILabel__set_text(mKnockdownRecordDamageLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordPlusLb = this->fields.mKnockdownRecordPlusLb;
    v289 = LocalizationManager__Get((System_String_o *)StringLiteral_11057/*"Request timeout"*/, 0LL);
    v291 = Method_System_Array_Empty_object___;
    v292 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v292 )
    {
      sub_1C8D69C(Method_System_Array_Empty_object___);
      v292 = v291[7];
    }
    v293 = *(_QWORD *)(v292 + 16);
    if ( (*(_BYTE *)(v293 + 309) & 1) == 0 )
      v293 = sub_1C8D640(inited);
    if ( !*(_DWORD *)(v293 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v293);
    v294 = *(_QWORD *)(v291[7] + 16LL);
    if ( (*(_BYTE *)(v294 + 309) & 1) == 0 )
      v294 = sub_1C8D640(inited);
    Instance = (int64_t)System_String__Format_63383120(v289, **(System_Object_array ***)(v294 + 184), 0LL);
    if ( !mKnockdownRecordPlusLb )
      goto LABEL_575;
    UILabel__set_text(mKnockdownRecordPlusLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageNameLb = this->fields.mKnockdownRecordDamageNameLb;
    v296 = LocalizationManager__Get((System_String_o *)StringLiteral_11056/*"Request being submitted"*/, 0LL);
    v298 = Method_System_Array_Empty_object___;
    v299 = v296;
    v300 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v300 )
    {
      sub_1C8D69C(Method_System_Array_Empty_object___);
      v300 = v298[7];
    }
    v301 = *(_QWORD *)(v300 + 16);
    if ( (*(_BYTE *)(v301 + 309) & 1) == 0 )
      v301 = sub_1C8D640(v297);
    if ( !*(_DWORD *)(v301 + 224) )
      v297 = j_il2cpp_runtime_class_init_0(v301);
    v302 = *(_QWORD *)(v298[7] + 16LL);
    if ( (*(_BYTE *)(v302 + 309) & 1) == 0 )
      v302 = sub_1C8D640(v297);
    Instance = (int64_t)System_String__Format_63383120(v299, **(System_Object_array ***)(v302 + 184), 0LL);
    if ( !mKnockdownRecordDamageNameLb )
      goto LABEL_575;
    UILabel__set_text(mKnockdownRecordDamageNameLb, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_575;
    UILabel__SetCondensedScale(
      (UILabel_o *)Instance,
      QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH,
      0,
      0LL);
    Instance = (int64_t)this->fields.mKnockdownRecordDamageLb;
    v270 = v425;
    if ( !Instance )
      goto LABEL_575;
    if ( v274->fields.totalDamage <= 0 )
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0LL);
      Instance = (int64_t)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_575;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !this->fields.mKnockdownRecordPlusLb )
        goto LABEL_575;
      v303 = (UnityEngine_GameObject_o *)Instance;
      v306 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.mKnockdownRecordPlusLb, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(v306, 0LL);
      v308 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v308 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = LocalPositionX
                                        + (float)v308->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
    }
    else
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0LL);
      Instance = (int64_t)this->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_575;
      v303 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v304 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v304 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v304->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
    }
    GameObjectExtensions__SetLocalPositionX(v303, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0LL);
    Instance = (int64_t)this->fields.mKnockdownRecordSp;
    if ( !Instance )
      goto LABEL_575;
    v463.fields.a = *v431;
    v463.fields.b = *v430;
    v463.fields.g = *v429;
    v463.fields.r = *v427;
    UIWidget__set_color((UIWidget_o *)Instance, v463, 0LL);
    Instance = (int64_t)this->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_575;
    v464.fields.a = *v431;
    v464.fields.b = *v430;
    v464.fields.g = *v429;
    v464.fields.r = *v427;
    UIWidget__set_color((UIWidget_o *)Instance, v464, 0LL);
    Instance = (int64_t)this->fields.mKnockdownRecordDamageNameLb;
    if ( !Instance )
      goto LABEL_575;
    v465.fields.a = *v431;
    v465.fields.b = *v430;
    v465.fields.g = *v429;
    v465.fields.r = *v427;
    UIWidget__set_color((UIWidget_o *)Instance, v465, 0LL);
    Instance = (int64_t)this->fields.mKnockdownRecordPlusLb;
    if ( !Instance )
      goto LABEL_575;
    v466.fields.a = *v431;
    v466.fields.b = *v430;
    v466.fields.g = *v429;
    v466.fields.r = *v427;
    UIWidget__set_color((UIWidget_o *)Instance, v466, 0LL);
    Instance = (int64_t)this->fields.mKnockdownRecordCountLb;
    if ( !Instance )
      goto LABEL_575;
    v467.fields.a = *v431;
    v467.fields.b = *v430;
    v467.fields.g = *v429;
    v467.fields.r = *v427;
    UIWidget__set_color((UIWidget_o *)Instance, v467, 0LL);
  }
  id = v424->fields.id;
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  if ( QuestInformationComponent__IsDisplayQuestInformation(id, 0LL) )
  {
    Instance = (int64_t)this->fields.mQuestInfoBtn;
    if ( !Instance )
      goto LABEL_575;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, QuestBoardInformationText_35167640);
      byte_4C1CAE3 = 1;
    }
    v310 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v310 = TerminalSceneComponent_TypeInfo;
    }
    v257 = v424;
    Instance = (int64_t)v310->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_575;
    if ( TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL) == v424->fields.id )
    {
      Instance = (int64_t)this->fields.mQuestInfoShowing;
      if ( !Instance )
        goto LABEL_575;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    }
    Instance = (int64_t)this->fields.mQuestInfoBtn;
    if ( !Instance )
      goto LABEL_575;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    v311 = Instance;
    if ( questTypea == 2 )
    {
      Instance = QuestEntity__HasFlag(v424, 0x400000000000000LL, 0LL);
      QuestBoardInformationText_35167640 = (unsigned int)Instance & v419;
    }
    else
    {
      QuestBoardInformationText_35167640 = 1LL;
    }
    if ( !v311 )
      goto LABEL_575;
    (*(void (__fastcall **)(int64_t, int64_t, _QWORD))(*(_QWORD *)v311 + 392LL))(
      v311,
      QuestBoardInformationText_35167640,
      *(_QWORD *)(*(_QWORD *)v311 + 400LL));
  }
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !mOptionRestrinctionLb )
    goto LABEL_575;
  UILabel__set_fontSize(
    mOptionRestrinctionLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE,
    0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_575;
  UILabel__set_overflowMethod((UILabel_o *)Instance, 2, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_575;
  v314 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !byte_4C1C516 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v313);
    byte_4C1C516 = 1;
  }
  GameObjectExtensions__SetLocalScale(v314, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !Instance )
    goto LABEL_575;
  v315 = (UnityEngine_Behaviour_o *)Instance;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v270,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_575;
  Instance = QuestPhaseDetailMaster__TryGetEntity(
               (QuestPhaseDetailMaster_o *)Instance,
               &v434,
               v418->fields.questId,
               questPhase,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_436;
  if ( !v434 )
    goto LABEL_575;
  if ( !v434->fields.boardMessage )
    goto LABEL_436;
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_575;
  UILabel__set_maxLineCount((UILabel_o *)Instance, 0, 0LL);
  if ( !v434 )
    goto LABEL_575;
  boardMessage = v434->fields.boardMessage;
  if ( !boardMessage )
    goto LABEL_575;
  list = (System_Collections_Generic_IEnumerable_TSource__o *)boardMessage->fields.list;
  if ( list
    && (Instance = (int64_t)System_Linq_Enumerable__ToArray_object_(
                              list,
                              (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0
    && (v319 = *(_QWORD *)(Instance + 24), v320 = (QuestPhaseDetailEntity_BoardInfo_array *)Instance, v319) )
  {
    if ( (_DWORD)v319 == 1 )
    {
      v321 = *(_QWORD *)(Instance + 32);
      if ( !v321 )
        goto LABEL_575;
      Instance = *(_QWORD *)(v321 + 16);
      if ( !Instance )
        goto LABEL_575;
      Instance = QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                   (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)Instance,
                   this->fields.mOptionRestrinctionLb,
                   (float)this->fields.restrictionDefaultWidth,
                   0LL);
      if ( !v320->max_length )
        goto LABEL_615;
      v322 = v320->m_Items[0];
      if ( !v322 )
        goto LABEL_575;
      v323 = Instance;
      Instance = (int64_t)v322->fields.image;
      if ( !Instance )
        goto LABEL_575;
      v324 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
               (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)Instance,
               this->fields.mOptionRestrinctionSp,
               0LL);
      v325 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v315, 1, 0LL);
      if ( QuestEntity__HasFlag(v257, 0x400000000000000LL, 0LL) )
      {
        v406 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v406 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v406->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &this->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v315,
        this->fields.mOptionRestrinctionLb,
        this->fields.mOptionRestrinctionSp,
        v320,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0LL);
      v325 = 1;
      v323 = 1;
      v324 = 1;
    }
  }
  else
  {
LABEL_436:
    v323 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
             this,
             v418->fields.questId,
             questPhase,
             v316);
    v325 = 0;
    v324 = 0;
  }
  v332 = QuestEntity__HasFlag(v257, 0x40000000LL, 0LL);
  if ( v332 )
  {
    Instance = (int64_t)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_575;
    QuestBoardInformationText_35167640 = (int64_t)this->fields.mCostConsumeBattleWinSp;
    v333 = *(_QWORD *)(Instance + 16);
    v334 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v333 )
      goto LABEL_575;
    v335 = *(int *)(Instance + 24);
    if ( (unsigned int)v335 >= *(_DWORD *)(v333 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)QuestBoardInformationText_35167640,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v334[4] + 192LL) + 112LL));
    }
    else
    {
      v336 = v333 + 8 * v335;
      *(_DWORD *)(Instance + 24) = v335 + 1;
      *(_QWORD *)(v336 + 32) = QuestBoardInformationText_35167640;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)(v336 + 32),
        QuestBoardInformationText_35167640,
        v326,
        v327,
        v328,
        v329,
        v330,
        v331);
    }
    v337 = QuestEntity__HasFlag(v257, 0x80000000000LL, 0LL) || QuestEntity__HasFlag(v257, 0x4000LL, 0LL);
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    mCostConsumeBattleWinSp = this->fields.mCostConsumeBattleWinSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !mCostConsumeBattleWinSp )
      goto LABEL_575;
    v339 = 992LL;
    if ( !v337 )
      v339 = 984LL;
    UISprite__set_spriteName(
      mCostConsumeBattleWinSp,
      *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v339),
      0LL);
  }
  Instance = (int64_t)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v332, 0LL);
  Instance = (int64_t)this->fields.mCostConsumeBattleWinSp;
  if ( !Instance )
    goto LABEL_575;
  v468.fields.a = *v431;
  v468.fields.b = *v430;
  v468.fields.g = *v429;
  v468.fields.r = *v427;
  UIWidget__set_color((UIWidget_o *)Instance, v468, 0LL);
  if ( v434 && QuestPhaseDetailEntity__HasFlag(v434, 0x400000LL, 0LL) )
  {
    v340 = QuestBoardListViewItemDraw_TypeInfo;
    mOptionPreBattleSp = this->fields.mOptionPreBattleSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v340 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v340->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0LL);
    Instance = (int64_t)this->fields.mMultiSecondBattleInformation;
    if ( !Instance )
      goto LABEL_575;
    QuestBoardInformationText_35167640 = (int64_t)this->fields.mOptionPreBattleSp;
    v349 = *(_QWORD *)(Instance + 16);
    v350 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v349 )
      goto LABEL_575;
    v351 = *(int *)(Instance + 24);
    if ( (unsigned int)v351 >= *(_DWORD *)(v349 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)QuestBoardInformationText_35167640,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v350[4] + 192LL) + 112LL));
    }
    else
    {
      v352 = v349 + 8 * v351;
      *(_DWORD *)(Instance + 24) = v351 + 1;
      *(_QWORD *)(v352 + 32) = QuestBoardInformationText_35167640;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)(v352 + 32),
        QuestBoardInformationText_35167640,
        v343,
        v344,
        v345,
        v346,
        v347,
        v348);
    }
    v353 = 1;
  }
  else
  {
    v353 = 0;
  }
  Instance = (int64_t)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v353, 0LL);
  Instance = (int64_t)this->fields.mOptionPreBattleSp;
  if ( !Instance )
    goto LABEL_575;
  LODWORD(v469.fields.g) = dword_C0B8A0[questTypea == 2];
  LODWORD(v469.fields.r) = dword_C0C848[questTypea == 2];
  v469.fields.a = 1.0;
  v469.fields.b = v469.fields.g;
  UIWidget__set_color((UIWidget_o *)Instance, v469, 0LL);
  mMultiSecondBattleInformation = this->fields.mMultiSecondBattleInformation;
  if ( !mMultiSecondBattleInformation )
    goto LABEL_575;
  if ( mMultiSecondBattleInformation->fields._size >= 2 )
  {
    Instance = (int64_t)this->fields.secondBattleInformation;
    if ( !Instance )
      goto LABEL_575;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.secondBattleInformation;
    if ( !Instance )
      goto LABEL_575;
    QuestBoardListViewMultiSecondBattleInformation__Init(
      (QuestBoardListViewMultiSecondBattleInformation_o *)Instance,
      this->fields.mMultiSecondBattleInformation,
      0LL);
  }
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v323 || v324, 0LL);
  Instance = QuestEntity__HasFlag(v257, 0x400000000000000LL, 0LL);
  if ( !this->fields.mOptionRestrinctionLb )
    goto LABEL_575;
  v355 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb,
                        0LL);
  if ( !Instance )
    goto LABEL_575;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_575;
  v356 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v357 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v357 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v358 = v357->static_fields;
  if ( (v355 & 1) == 0 )
  {
    GameObjectExtensions__SetLocalPosition(v356, v358->RESTRICTION_POS_DEFAULT, 0LL);
    v363 = this->fields.mOptionRestrinctionLb;
    if ( !v363 )
      goto LABEL_575;
    if ( v363->fields.mWidth <= this->fields.restrictionDefaultWidth )
    {
      mSpacingX = v363->fields.mSpacingX;
      v366 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v366 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QuestBoardInformationText_35167640 = (unsigned int)v366->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == (_DWORD)QuestBoardInformationText_35167640 )
        goto LABEL_503;
      if ( !v366->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v366);
        LODWORD(QuestBoardInformationText_35167640) = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v364 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v364 = QuestBoardListViewItemDraw_TypeInfo;
      }
      LODWORD(QuestBoardInformationText_35167640) = v364->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(this, QuestBoardInformationText_35167640, v362);
LABEL_503:
    if ( (v325 & 1) != 0 )
      goto LABEL_507;
    Instance = (int64_t)this->fields.mOptionRestrinctionLb;
    if ( !Instance )
      goto LABEL_575;
    restrictionDefaultWidth = this->fields.restrictionDefaultWidth;
    goto LABEL_506;
  }
  GameObjectExtensions__SetLocalPosition(v356, v358->RESTRICTION_POS_ALLOUT, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_575;
  UILabel__set_fontSize(
    (UILabel_o *)Instance,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SIZE_ALLOUT,
    0LL);
  QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
    this,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT,
    v359);
  if ( (v325 & 1) == 0 )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v360 = this->fields.mOptionRestrinctionLb;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v360 )
      goto LABEL_575;
    Instance = (int64_t)v360;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
LABEL_506:
    UILabel__SetCondensedScale((UILabel_o *)Instance, restrictionDefaultWidth, 0, 0LL);
  }
LABEL_507:
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_575;
  v470.fields.b = *v430;
  v470.fields.r = *v427;
  v470.fields.a = *v431;
  v470.fields.g = *v429;
  UIWidget__set_color((UIWidget_o *)Instance, v470, 0LL);
  if ( questTypea == 2 )
  {
    Instance = (int64_t)this->fields.mOptionRestrinctionSp;
    if ( !Instance )
      goto LABEL_575;
    v471.fields.a = *(float *)(Instance + 160);
    v471.fields.r = *(float *)(Instance + 148) * 0.5;
    v471.fields.g = *(float *)(Instance + 152) * 0.5;
    v471.fields.b = *(float *)(Instance + 156) * 0.5;
    UIWidget__set_color((UIWidget_o *)Instance, v471, 0LL);
  }
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        v425,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_575;
  v367 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, v257->fields.id, questPhase, 0LL);
  v368 = v367;
  if ( v367 )
  {
    classIds = v367->fields.classIds;
    if ( classIds )
      LOBYTE(classIds) = classIds->max_length != 0;
  }
  else
  {
    LOBYTE(classIds) = 0;
  }
  v370 = ((unsigned __int8)classIds & v415) == 0;
  if ( !v370 && !v420 )
    v370 = QuestEntity__HasFlag(v257, 2048LL, 0LL);
  Instance = (int64_t)this->fields.mClassIconRoot;
  if ( !Instance )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !v370, 0LL);
  Instance = (int64_t)this->fields.mClassStrSp;
  if ( !Instance )
    goto LABEL_575;
  v472.fields.a = *v431;
  v472.fields.b = *v430;
  v472.fields.g = *v429;
  v472.fields.r = *v427;
  UIWidget__set_color((UIWidget_o *)Instance, v472, 0LL);
  if ( !v370 )
  {
    Instance = QuestBoardListViewItemDraw__IsUnknownWaveBattleClassIcon(v371, v368, v372);
    if ( (Instance & 1) != 0 )
    {
      mClassIcons = this->fields.mClassIcons;
      if ( !mClassIcons )
        goto LABEL_575;
      if ( mClassIcons->max_length )
      {
        v390 = mClassIcons->m_Items[0];
        if ( !v390 )
          goto LABEL_575;
        Instance = (int64_t)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)mClassIcons->m_Items[0],
                              0LL);
        if ( !Instance )
          goto LABEL_575;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v391 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v391 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        ServantClassIconComponent__Set(v390, v391->static_fields->ENEMY_UNKNOWN_CLASSID, 0, 0LL);
        v473.fields.r = *v427;
        v473.fields.g = *v429;
        v473.fields.b = *v430;
        v473.fields.a = *v431;
        ServantClassIconComponent__SetColor(v390, v473, 0LL);
        v392 = this->fields.mClassIcons;
        if ( !v392 )
          goto LABEL_575;
        max_length = v392->max_length;
        if ( max_length <= 1 )
          goto LABEL_521;
        v394 = 1;
        while ( v394 < v392->max_length )
        {
          Instance = (int64_t)v392->m_Items[v394];
          if ( Instance )
          {
            Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              if ( max_length == ++v394 )
                goto LABEL_521;
              v392 = this->fields.mClassIcons;
              if ( v392 )
                continue;
            }
          }
          goto LABEL_575;
        }
      }
    }
    else
    {
      if ( !v368 )
        goto LABEL_575;
      v395 = this->fields.mClassIcons;
      if ( !v395 )
        goto LABEL_575;
      v396 = v395->max_length;
      v397 = v396 - 1;
      if ( v396 < 1 )
        goto LABEL_521;
      v398 = v368->fields.classIds;
      v399 = 0;
      while ( v399 < v395->max_length )
      {
        v400 = (int)v399;
        v401 = &v395->obj.klass + (int)v399;
        v402 = (UnityEngine_Component_o *)v401[4];
        if ( !v402 )
          goto LABEL_575;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v401[4], 0LL);
        if ( !v398 )
          goto LABEL_575;
        if ( !Instance )
          goto LABEL_575;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)Instance,
          (int)v400 < (signed int)v398->max_length,
          0LL);
        Instance = (int64_t)UnityEngine_Component__get_gameObject(v402, 0LL);
        if ( !Instance )
          goto LABEL_575;
        Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( (unsigned int)v400 >= v398->max_length )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v402, v398->m_Items[v400 + 1], 0, 0LL);
          v474.fields.r = *v427;
          v474.fields.g = *v429;
          v474.fields.b = *v430;
          v474.fields.a = *v431;
          ServantClassIconComponent__SetColor((ServantClassIconComponent_o *)v402, v474, 0LL);
        }
        if ( v397 == (_DWORD)v400 )
          goto LABEL_521;
        v395 = this->fields.mClassIcons;
        v399 = v400 + 1;
        if ( !v395 )
          goto LABEL_575;
      }
    }
LABEL_615:
    sub_1C3B9C8(Instance, QuestBoardInformationText_35167640);
  }
LABEL_521:
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
        Instance = (int64_t)this->fields.mQuestInfoBtn;
        if ( !Instance )
          goto LABEL_575;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
        {
          Instance = (int64_t)this->fields.eventTargetComponent;
          if ( !Instance )
            goto LABEL_575;
          BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)Instance, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !Instance )
            goto LABEL_575;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    (ViewEnemyMaster_o *)Instance,
                                    v418->fields.questId,
                                    0LL);
          if ( EntityListFromQuestId
            && (v376 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                *(_QWORD *)&EntityListFromQuestId->max_length) )
          {
            v377 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v377 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            _9__318_1 = (System_Func_object__int__o *)v377->static_fields->__9__318_1;
            if ( !_9__318_1 )
            {
              if ( !v377->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v377);
                v377 = QuestBoardListViewItemDraw___c_TypeInfo;
              }
              v379 = (Il2CppObject *)v377->static_fields->__9;
              _9__318_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ViewEnemyEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__318_1,
                v379,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__318_1__,
                0LL);
              v380 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v380->__9__318_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__318_1;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&v380->__9__318_1,
                (int64_t)_9__318_1,
                v381,
                v382,
                v383,
                v384,
                v385,
                v386);
            }
            v387 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                          v376,
                                                                          (System_Func_TSource__TResult__o *)_9__318_1,
                                                                          (const MethodInfo_30221C0 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                  v387,
                                  (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !this->fields.eventTarget )
              goto LABEL_575;
            v388 = (System_Int32_array *)Instance;
            UnityEngine_GameObject__SetActive(this->fields.eventTarget, 1, 0LL);
            Instance = (int64_t)this->fields.eventTargetComponent;
            if ( !Instance )
              goto LABEL_575;
            BoardOptionEventTargetComponent__CreateEnemyList(
              (BoardOptionEventTargetComponent_o *)Instance,
              v418->fields.questId,
              v388,
              0LL);
          }
          else
          {
            Instance = (int64_t)this->fields.eventTarget;
            if ( !Instance )
              goto LABEL_575;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          }
        }
      }
    }
  }
  if ( (v419 & (questTypea == 2) & QuestEntity__HasFlag(v424, 0x400000000000000LL, 0LL)) != 0 )
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
        if ( !v418->fields.questReleaseType )
          goto LABEL_594;
        v405 = v418->fields.questId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_39011304(v405, -1, 1, 0LL) )
        {
LABEL_594:
          Instance = (int64_t)this->fields.alloutRoot;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            Instance = (int64_t)this->fields.alloutRootComponent;
            if ( Instance )
            {
              BoardOptionAlloutComponent__SetIcon((BoardOptionAlloutComponent_o *)Instance, v418->fields.questId, 0LL);
              return;
            }
          }
          goto LABEL_575;
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
  DataManager_o *Instance; // x0
  QuestBoardListViewManager_c *v25; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v27; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v29; // x21
  __int64 methodPtr_low; // x9
  int32_t dispType; // w28
  int64_t writeMasterDataThread; // x23
  Il2CppObject *MasterData_object; // x25
  float v34; // s8
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v36; // x0
  System_String_o *RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v38; // x1
  System_String_o *v39; // x0
  QuestBoardListViewItemDraw_c *v40; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x25
  System_String_o *v42; // x0
  UISprite_o *mcBaseP; // x24
  System_String_o *v44; // x25
  const MethodInfo *v45; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v47; // x8
  UnityEngine_GameObject_o *v48; // x24
  float NEXT_POS_X_QUEST; // s0
  bool activeSelf; // w0
  const MethodInfo *v51; // x3
  QuestBoardListViewItemDraw_c *v52; // x8
  bool v53; // w24
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v55; // x9
  __int64 v56; // x11
  __int64 v57; // x10
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x4
  System_String_o *v62; // x23
  Il2CppObject *v63; // x22
  Il2CppObject *BattleName; // x0
  UILabel_o *mTitleNameLb; // x22
  QuestBoardListViewItemDraw_o *v66; // x0
  const MethodInfo *v67; // x4
  bool PhasePresentGiftData; // w23
  const MethodInfo *v69; // x4
  int32_t questId; // w22
  QuestBoardListViewItemDraw_PhasePresentData_o *v71; // x24
  int32_t afterClear; // w25
  bool IsRepeatReward; // w0
  const MethodInfo *v74; // x6
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x1
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  const MethodInfo *v79; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  int32_t v81; // w2
  int64_t *p_expireAt; // x8
  int64_t v83; // x22
  System_Collections_Generic_List_object__o *v84; // x21
  System_String_o *v85; // x24
  QuestBoardInformationText_o *v86; // x23
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct System_Object_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  Il2CppClass **v96; // x0
  System_Collections_Generic_List_object__o *v97; // x23
  int32_t v98; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v100; // x8
  __int64 v101; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v103; // w9
  int32_t v104; // w8
  bool v105; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v107; // x21
  QuestBoardListViewItemDraw_o *v108; // x0
  const MethodInfo *v109; // x1
  int32_t v110; // [xsp+8h] [xbp-88h] BYREF
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1ECE4 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, questBoardItem);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v8);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v13);
    sub_1C3B764(&LocalizationManager_TypeInfo, v14);
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v16);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v17);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v18);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v19);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C3B764(&StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/, v21);
    sub_1C3B764(&StringLiteral_25497, v22);
    sub_1C3B764(&StringLiteral_1/*""*/, v23);
    byte_4C1ECE4 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  v110 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_151;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_151;
  v27 = Instance;
  Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_151;
  v29 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_151;
  v25 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_152;
  }
  if ( !v27 )
    goto LABEL_151;
  dispType = quest_info_k__BackingField->fields.dispType;
  writeMasterDataThread = (int64_t)Instance[3].fields.writeMasterDataThread;
  MasterData_object = DataManager__GetMasterData_object_(
                        v27,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v25);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v29 || !MasterData_object )
    goto LABEL_151;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    v29->fields.id,
    0LL);
  Instance = (DataManager_o *)this->fields.mLabelObj;
  v34 = dispType == 2 ? 0.5 : 1.0;
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
    if ( v29->fields.bannerId < 1 )
      goto LABEL_61;
    v40 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v40 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v40->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v38 = System_Int32__ToString((int)v29 + 64, 0LL);
    v39 = QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v36 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v36 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = v36->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
    v110 = OverwriteBannerId_k__BackingField;
    v38 = System_Int32__ToString((int32_t)&v110, 0LL);
    v39 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v42 = System_String__Concat_63368612(v39, v38, 0LL);
  mcBaseP = this->fields.mcBaseP;
  v44 = v42;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(mcBaseP, v44, 0LL);
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
                                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_151;
  v116.fields.a = 1.0;
  v116.fields.r = v34;
  v116.fields.g = v34;
  v116.fields.b = v34;
  UIWidget__set_color((UIWidget_o *)Instance, v116, 0LL);
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
    v47 = QuestBoardListViewItemDraw_TypeInfo;
    v48 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v47 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v48, v47->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_151;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_151;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_151;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)&Instance->fields.writeMasterDataThread = NEXT_POS_X_QUEST;
    *((float *)&Instance->fields.writeMasterDataThreadEnd + 1) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v45);
  Instance = (DataManager_o *)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v52 = QuestBoardListViewItemDraw_TypeInfo;
  v53 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v52 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v52->static_fields;
  v55 = 100LL;
  v56 = 104LL;
  if ( v53 )
    v55 = 124LL;
  v57 = 108LL;
  if ( v53 )
    v56 = 128LL;
  if ( v53 )
    v57 = 132LL;
  LODWORD(v115.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v55);
  LODWORD(v115.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v56);
  LODWORD(v115.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v57);
  QuestBoardListViewItemDraw__SetNewIcon(this, v115, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v51);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v59);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v58);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v29, writeMasterDataThread, v61);
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v60);
    Instance = (DataManager_o *)QuestEntity__getQuestName(v29, 0LL);
    if ( !Instance )
      goto LABEL_151;
    v62 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25497, 0LL) )
    {
      v63 = DataManager__GetMasterData_object_(
              v27,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (DataManager_o *)QuestEntity__getServantId(v29, 0LL);
      if ( !v63 )
        goto LABEL_151;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v63,
                                    (int32_t)Instance,
                                    (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_151;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v62 = System_String__Format(v62, BattleName, 0LL);
    }
    Instance = (DataManager_o *)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_151;
    UILabel__set_text((UILabel_o *)Instance, v62, 0LL);
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
  v117.fields.a = 1.0;
  v117.fields.r = v34;
  v117.fields.g = v34;
  v117.fields.b = v34;
  UIWidget__set_color((UIWidget_o *)Instance, v117, 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v66,
                           &phasePresentData,
                           v29,
                           quest_info_k__BackingField->fields.questPhase,
                           v67);
  v118.fields.a = 1.0;
  v118.fields.r = v34;
  v118.fields.g = v34;
  v118.fields.b = v34;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v29, phasePresentData, dispType == 2, v118, v69);
  questId = quest_info_k__BackingField->fields.questId;
  v71 = phasePresentData;
  afterClear = v29->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v29, 0LL);
  v119.fields.a = 1.0;
  v119.fields.r = v34;
  v119.fields.g = v34;
  v119.fields.b = v34;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    questId,
    PhasePresentGiftData,
    v71,
    afterClear,
    v119,
    IsRepeatReward,
    v74);
  v120.fields.a = 1.0;
  v120.fields.r = v34;
  v120.fields.g = v34;
  v120.fields.b = v34;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v120, v75);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v76);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  mInfoTextList = this->fields.mInfoTextList;
  v81 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetCampaignText(
                                this,
                                quest_info_k__BackingField->fields.questId,
                                v81,
                                0,
                                &fixedVal[1],
                                fixedVal,
                                &isNotItemConsume,
                                v79);
  if ( !mInfoTextList )
    goto LABEL_151;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
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
  v83 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (DataManager_o *)QuestEntity__HasFlag(v29, 32LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v84 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/, 0LL);
      v86 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v86, v85, v83, 0, 1, 0LL, 0LL);
      if ( !v84 )
        goto LABEL_151;
      items = v84->fields._items;
      v94 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v84->fields._version;
      if ( !items )
        goto LABEL_151;
      size = v84->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v84,
          (Il2CppObject *)v86,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
      }
      else
      {
        v96 = &items->obj.klass + size;
        v84->fields._size = size + 1;
        v96[4] = (Il2CppClass *)v86;
        sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 4), (int64_t)v86, v87, v88, v89, v90, v91, v92);
      }
    }
  }
LABEL_128:
  v97 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v97 )
    goto LABEL_151;
  v98 = v97->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v98 < 1 )
    goto LABEL_137;
  v100 = this->fields.mListViewObject;
  if ( !v100 )
    goto LABEL_151;
  Instance = (DataManager_o *)v100->fields.manager;
  if ( !Instance )
    goto LABEL_151;
  v101 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v101
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[v101 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_152:
    sub_1C3BC80(Instance);
    QuestBoardListViewItemDraw__ResetInfoTextList(v108, v109);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v98, 0LL);
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                v97,
                                AlphaAnimCnt,
                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
  v103 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v104 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v103;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v104;
LABEL_137:
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  v105 = v98 > 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v105, 0LL);
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_151;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v105, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    v107 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v107 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v107,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)&Instance[1].fields._DispLog + 268LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        0LL);
      return;
    }
LABEL_151:
    sub_1C3B9C0(Instance, v25);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetItemOfShortcut(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  QuestBoardListViewManager_c *v24; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  int32_t info_kind_k__BackingField; // w28
  DataManager_o *v27; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v29; // x21
  __int64 methodPtr_low; // x9
  int32_t dispType; // w25
  int64_t writeMasterDataThread; // x23
  Il2CppObject *MasterData_object; // x24
  float v34; // s8
  UISprite_o *mcBaseP; // x24
  __int64 v36; // x9
  const MethodInfo *v37; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v39; // x8
  UnityEngine_GameObject_o *v40; // x24
  float NEXT_POS_X_QUEST; // s0
  bool activeSelf; // w0
  const MethodInfo *v43; // x3
  QuestBoardListViewItemDraw_c *v44; // x8
  bool v45; // w24
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v47; // x9
  __int64 v48; // x11
  __int64 v49; // x10
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x4
  System_String_o *v54; // x23
  Il2CppObject *v55; // x24
  Il2CppObject *BattleName; // x0
  UILabel_o *mTitleNameLb; // x23
  int32_t ServantId; // w23
  UILabel_o *mTitleShortcutLb; // x22
  const MethodInfo *v60; // x5
  QuestBoardListViewItemDraw_c *v61; // x0
  UISprite_o *mLabelFaceMaskShortcutSp; // x22
  _BOOL8 v63; // x0
  const MethodInfo *v64; // x4
  bool PhasePresentGiftData; // w22
  const MethodInfo *v66; // x4
  int32_t questId; // w23
  QuestBoardListViewItemDraw_PhasePresentData_o *v68; // x24
  int32_t afterClear; // w25
  bool IsRepeatReward; // w0
  const MethodInfo *v71; // x6
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x1
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  const MethodInfo *v76; // x7
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x22
  int32_t v78; // w2
  int64_t *p_expireAt; // x8
  int64_t v80; // x22
  System_Collections_Generic_List_object__o *v81; // x21
  System_String_o *v82; // x24
  QuestBoardInformationText_o *v83; // x23
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x0
  System_Collections_Generic_List_object__o *v94; // x23
  int32_t v95; // w22
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v97; // x8
  __int64 v98; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v100; // w9
  int32_t v101; // w8
  bool v102; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  QuestBoardListViewEarthLine_o *v104; // x21
  QuestBoardListViewItemDraw_o *v105; // x0
  QuestBoardListViewItem_o *v106; // x1
  const MethodInfo *v107; // x2
  bool isNotItemConsume; // [xsp+Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+10h] [xbp-80h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+18h] [xbp-78h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1ECE3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, questBoardItem);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v7);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v12);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&NetworkManager_TypeInfo, v14);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v15);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v16);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v17);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v18);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C3B764(&StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/, v20);
    sub_1C3B764(&StringLiteral_25497, v21);
    sub_1C3B764(&StringLiteral_1/*""*/, v22);
    byte_4C1ECE3 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_153;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_153;
  info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
  v27 = Instance;
  Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_153;
  v29 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_153;
  v24 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_154;
  }
  if ( !v27 )
    goto LABEL_153;
  dispType = quest_info_k__BackingField->fields.dispType;
  writeMasterDataThread = (int64_t)Instance[3].fields.writeMasterDataThread;
  MasterData_object = DataManager__GetMasterData_object_(
                        v27,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v24);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v29 || !MasterData_object )
    goto LABEL_153;
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    v29->fields.id,
    0LL);
  Instance = (DataManager_o *)this->fields.mLabelObj;
  v34 = dispType == 2 ? 0.5 : 1.0;
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
  v36 = 1064LL;
  if ( info_kind_k__BackingField == 2 )
    v36 = 1056LL;
  UISprite__set_spriteName(
    mcBaseP,
    *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v36),
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
                                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_153;
  v113.fields.a = 1.0;
  v113.fields.r = v34;
  v113.fields.g = v34;
  v113.fields.b = v34;
  UIWidget__set_color((UIWidget_o *)Instance, v113, 0LL);
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
    v39 = QuestBoardListViewItemDraw_TypeInfo;
    v40 = gameObject;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v39 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v40, v39->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (DataManager_o *)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_153;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_153;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_153;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)&Instance->fields.writeMasterDataThread = NEXT_POS_X_QUEST;
    *((float *)&Instance->fields.writeMasterDataThreadEnd + 1) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v37);
  Instance = (DataManager_o *)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v44 = QuestBoardListViewItemDraw_TypeInfo;
  v45 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v44 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v44->static_fields;
  v47 = 100LL;
  v48 = 104LL;
  if ( v45 )
    v47 = 124LL;
  v49 = 108LL;
  if ( v45 )
    v48 = 128LL;
  if ( v45 )
    v49 = 132LL;
  LODWORD(v112.fields.x) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v47);
  LODWORD(v112.fields.y) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v48);
  LODWORD(v112.fields.z) = *(int32_t *)((char *)&static_fields->POS_Y_ITVL_AREA + v49);
  QuestBoardListViewItemDraw__SetNewIcon(this, v112, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v43);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v51);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v50);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v29, writeMasterDataThread, v53);
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v52);
    Instance = (DataManager_o *)QuestEntity__getQuestName(v29, 0LL);
    if ( !Instance )
      goto LABEL_153;
    v54 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25497, 0LL) )
    {
      v55 = DataManager__GetMasterData_object_(
              v27,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (DataManager_o *)QuestEntity__getServantId(v29, 0LL);
      if ( !v55 )
        goto LABEL_153;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v55,
                                    (int32_t)Instance,
                                    (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_153;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v54 = System_String__Format(v54, BattleName, 0LL);
    }
    Instance = (DataManager_o *)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_153;
    UILabel__set_text((UILabel_o *)Instance, v54, 0LL);
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
  v114.fields.a = 1.0;
  v114.fields.r = v34;
  v114.fields.g = v34;
  v114.fields.b = v34;
  UIWidget__set_color((UIWidget_o *)Instance, v114, 0LL);
  ServantId = QuestEntity__getServantId(v29, 0LL);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v27,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_153;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                ServantId,
                                (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v115.fields.a = 1.0;
    v115.fields.r = v34;
    v115.fields.g = v34;
    v115.fields.b = v34;
    UIWidget__set_color((UIWidget_o *)Instance, v115, 0LL);
  }
  else
  {
    if ( !mTitleShortcutLb )
      goto LABEL_153;
    UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v61 = QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskShortcutSp = this->fields.mLabelFaceMaskShortcutSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v61 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v116.fields.a = 1.0;
  v116.fields.r = v34;
  v116.fields.g = v34;
  v116.fields.b = v34;
  v63 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          v29,
          mLabelFaceMaskShortcutSp,
          v61->static_fields->SHORTCUT_FACE_MASK_SP_W,
          v61->static_fields->SHORTCUT_FACE_MASK_SPNAME,
          v116,
          v60);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           (QuestBoardListViewItemDraw_o *)v63,
                           &phasePresentData,
                           v29,
                           quest_info_k__BackingField->fields.questPhase,
                           v64);
  v117.fields.a = 1.0;
  v117.fields.r = v34;
  v117.fields.g = v34;
  v117.fields.b = v34;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v29, phasePresentData, dispType == 2, v117, v66);
  questId = quest_info_k__BackingField->fields.questId;
  v68 = phasePresentData;
  afterClear = v29->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v29, 0LL);
  v118.fields.a = 1.0;
  v118.fields.r = v34;
  v118.fields.g = v34;
  v118.fields.b = v34;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    questId,
    PhasePresentGiftData,
    v68,
    afterClear,
    v118,
    IsRepeatReward,
    v71);
  v119.fields.a = 1.0;
  v119.fields.r = v34;
  v119.fields.g = v34;
  v119.fields.b = v34;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v119, v72);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v73);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  mInfoTextList = this->fields.mInfoTextList;
  v78 = questPhase + 1 < PhaseMax ? questPhase + 1 : PhaseMax;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetCampaignText(
                                this,
                                quest_info_k__BackingField->fields.questId,
                                v78,
                                0,
                                &fixedVal[1],
                                fixedVal,
                                &isNotItemConsume,
                                v76);
  if ( !mInfoTextList
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)mInfoTextList,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__),
        (Instance = (DataManager_o *)this->fields.mRarePrismSp) == 0LL)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_153:
    sub_1C3B9C0(Instance, v24);
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
  v80 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (DataManager_o *)QuestEntity__HasFlag(v29, 32LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v81 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/, 0LL);
      v83 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v83, v82, v80, 0, 1, 0LL, 0LL);
      if ( !v81 )
        goto LABEL_153;
      items = v81->fields._items;
      v91 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v81->fields._version;
      if ( !items )
        goto LABEL_153;
      size = v81->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v81,
          (Il2CppObject *)v83,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = &items->obj.klass + size;
        v81->fields._size = size + 1;
        v93[4] = (Il2CppClass *)v83;
        sub_1C3B708((PartyOrganizationUtility_o *)(v93 + 4), (int64_t)v83, v84, v85, v86, v87, v88, v89);
      }
    }
  }
LABEL_130:
  v94 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v94 )
    goto LABEL_153;
  v95 = v94->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v95 < 1 )
    goto LABEL_139;
  v97 = this->fields.mListViewObject;
  if ( !v97 )
    goto LABEL_153;
  Instance = (DataManager_o *)v97->fields.manager;
  if ( !Instance )
    goto LABEL_153;
  v98 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v98
    || (QuestBoardListViewManager_c *)Instance->klass->_2.typeHierarchy[v98 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_154:
    sub_1C3BC80(Instance);
    QuestBoardListViewItemDraw__SetItemOfQuest(v105, v106, v107);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v95, 0LL);
  Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                v94,
                                AlphaAnimCnt,
                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
  v100 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v101 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v100;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v101;
LABEL_139:
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  v102 = v95 > 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v102, 0LL);
  Instance = (DataManager_o *)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_153;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v102, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    v104 = this->fields.mEarthLine;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (DataManager_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v104 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v104,
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x20
  void *Instance; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  DataManager_o *v38; // x23
  QuestEntity_o *PhaseDetailedEntity; // x22
  unsigned int v40; // w26
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x9
  int32_t dispType; // w27
  bool HasFlag; // w0
  float v45; // s0
  bool v46; // w27
  Il2CppObject *MasterData_object; // x23
  int32_t questId; // w23
  bool IsQuestClear_39011304; // w0
  int32_t v50; // w23
  int32_t PhaseMax; // w8
  QuestBoardListViewItemDraw_c *v52; // x0
  UnityEngine_GameObject_o *mCostObj; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  QuestBoardListViewItemDraw_c *v57; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x25
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  UISprite_o *v61; // x29
  System_String_o *v62; // x25
  UISprite_o *v63; // x25
  System_String_o *QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x29
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  UISprite_o *mcBaseP; // x28
  System_String_o *SHOHI_SP_NAME_WAR_BOARD; // x1
  UISprite_o *mShohiSp; // x28
  UISprite_o *v70; // x28
  __int64 v71; // x8
  unsigned int v72; // w9
  System_String_o *v73; // x25
  System_String_o *v74; // x0
  System_String_o *v75; // x25
  const MethodInfo *v76; // x3
  UnityEngine_GameObject_o *v77; // x0
  QuestBoardListViewItemDraw_c *v78; // x8
  UnityEngine_GameObject_o *v79; // x28
  float NEXT_POS_X_QUEST; // s0
  int32_t v81; // w1
  bool activeSelf; // w0
  const MethodInfo *v83; // x3
  QuestBoardListViewItemDraw_c *v84; // x8
  bool v85; // w28
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float *p_x; // x9
  float *p_y; // x10
  float *p_z; // x11
  const MethodInfo *v90; // x2
  UnityEngine_GameObject_o *v91; // x28
  _BOOL8 v92; // x0
  const MethodInfo *v93; // x5
  QuestBoardListViewItemDraw_c *v94; // x0
  System_String_o *RecommendLv; // x0
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x2
  QuestBoardListViewItemDraw_o *v98; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x27
  int32_t mMatrixFrame; // w25
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v102; // x5
  bool v103; // w0
  const MethodInfo *v104; // x3
  UILabel_o *mTitleNameLb; // x27
  const MethodInfo *v106; // x4
  QuestBoardListViewItemDraw_o *v107; // x0
  const MethodInfo *v108; // x2
  const MethodInfo *v109; // x2
  UISprite_o *mLabelNameSp; // x27
  QuestBoardListViewItemDraw_o *v111; // x0
  const MethodInfo *v112; // x3
  System_String_o *QuestIconName; // x25
  System_Action_o *v114; // x25
  const MethodInfo *v115; // x3
  UILabel_o *v116; // x25
  QuestBoardListViewItemDraw_o *v117; // x0
  const MethodInfo *v118; // x4
  bool PhasePresentGiftData; // w26
  const MethodInfo *v120; // x4
  int32_t v121; // w25
  QuestBoardListViewItemDraw_PhasePresentData_o *v122; // x27
  int32_t afterClear; // w28
  float v124; // s8
  float v125; // s9
  float v126; // s10
  float v127; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v129; // x6
  const MethodInfo *v130; // x3
  const MethodInfo *v131; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x25
  const MethodInfo *v133; // x7
  int64_t *p_expireAt; // x8
  int64_t v135; // x25
  System_Collections_Generic_List_object__o *v136; // x24
  System_String_o *v137; // x27
  QuestBoardInformationText_o *v138; // x26
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  struct System_Object_array *items; // x8
  _QWORD *v146; // x9
  __int64 size; // x10
  Il2CppClass **v148; // x0
  System_Collections_Generic_List_object__o *v149; // x26
  int32_t v150; // w25
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *v152; // x8
  __int64 v153; // x9
  int32_t AlphaAnimCnt; // w0
  int32_t v155; // w9
  int32_t v156; // w8
  bool v157; // w25
  WarBoardQuestEntity_o *v158; // x0
  WarBoardQuestEntity_o *v159; // x21
  UILabel_o *mBoardMessage; // x21
  __int64 v161; // x8
  const MethodInfo *v162; // [xsp+8h] [xbp-C8h]
  int64_t checkTime; // [xsp+10h] [xbp-C0h]
  bool v164; // [xsp+18h] [xbp-B8h]
  int32_t questPhase; // [xsp+1Ch] [xbp-B4h]
  int32_t v166; // [xsp+20h] [xbp-B0h]
  bool isNotItemConsume; // [xsp+24h] [xbp-ACh] BYREF
  int32_t fixedVal[2]; // [xsp+28h] [xbp-A8h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+30h] [xbp-A0h] BYREF
  bool isTripleItemConsume; // [xsp+3Ch] [xbp-94h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+40h] [xbp-90h] BYREF
  bool isDoubleItemConsume; // [xsp+44h] [xbp-8Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v174; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v175; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1ECE9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, questBoardItem);
    sub_1C3B764(&AtlasManager_TypeInfo, v5);
    sub_1C3B764(&CondType_TypeInfo, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarBoardQuestMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v10);
    sub_1C3B764(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v11);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v12);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v17);
    sub_1C3B764(&LocalizationManager_TypeInfo, v18);
    sub_1C3B764(&NetworkManager_TypeInfo, v19);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v20);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v21);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v22);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__DisplayClass319_0__SetItemOfWarBoard_b__0__, v24);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass319_0_TypeInfo, v25);
    sub_1C3B764(&StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/, v26);
    sub_1C3B764(&StringLiteral_1/*""*/, v27);
    byte_4C1ECE9 = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  isNotItemConsume = 0;
  v28 = sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass319_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass319_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass319_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_208;
  *(_QWORD *)(v28 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)this, v31, v32, v33, v34, v35, v36);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_208;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_208;
  v38 = (DataManager_o *)Instance;
  Instance = MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_208;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = (void *)MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v38 )
    goto LABEL_208;
  v40 = (unsigned int)Instance;
  Instance = DataManager__GetMasterData_object_(
               v38,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    sub_1C3BC80(Instance);
    goto LABEL_210;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *((_QWORD *)Instance + 73);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  v45 = 1.0;
  if ( dispType == 2 )
    v45 = 0.5;
  *(float *)(v28 + 24) = v45;
  *(float *)(v28 + 28) = v45;
  *(float *)(v28 + 32) = v45;
  *(_DWORD *)(v28 + 36) = 1065353216;
  v166 = dispType;
  v46 = HasFlag;
  MasterData_object = DataManager__GetMasterData_object_(
                        v38,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v30);
    byte_4C1C955 = 1;
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
  IsQuestClear_39011304 = CondType__IsQuestClear_39011304(questId, -1, 0, 0LL);
  v50 = quest_info_k__BackingField->fields.questPhase;
  v164 = IsQuestClear_39011304;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = this->fields.mLabelObj;
  if ( v50 + 1 < PhaseMax )
    PhaseMax = v50 + 1;
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
  v52 = QuestBoardListViewItemDraw_TypeInfo;
  mCostObj = this->fields.mCostObj;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v52 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(mCostObj, v52->static_fields->COST_OBJ_POS_WAR_BOARD, 0LL);
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
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v55,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS_WAR_BOARD,
    0LL);
  Instance = this->fields.mShohiSp;
  if ( !Instance )
    goto LABEL_208;
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v56,
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
    if ( v40 > 7 || ((1 << v40) & 0xA6) == 0 )
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
      v161 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 1072LL);
      if ( !v161 )
        goto LABEL_208;
      if ( v40 >= *(_DWORD *)(v161 + 24) )
LABEL_210:
        sub_1C3B9C8(Instance, v30);
      if ( !mcBaseP )
        goto LABEL_208;
      SHOHI_SP_NAME_WAR_BOARD = *(System_String_o **)(v161 + 8LL * (int)v40 + 32);
      goto LABEL_70;
    }
    Instance = QuestBoardListViewItemDraw_TypeInfo;
    v70 = this->fields.mcBaseP;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = QuestBoardListViewItemDraw_TypeInfo;
    }
    v71 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 1072LL);
    if ( !v71 )
      goto LABEL_208;
    v72 = *(_DWORD *)(v71 + 24);
    if ( v40 == 7 )
    {
      if ( v72 <= 1 )
        goto LABEL_210;
      v73 = *(System_String_o **)(v71 + 40);
    }
    else
    {
      if ( v40 >= v72 )
        goto LABEL_210;
      v73 = *(System_String_o **)(v71 + 8LL * v40 + 32);
    }
    v74 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
    v75 = System_String__Concat_63368612(v73, v74, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v70, v75, 0LL);
  }
  else
  {
    v57 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v57 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v57->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v59 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
    v60 = System_String__Concat_63368612(QUEST_BOARD_SPNAME_PREFIX, v59, 0LL);
    v61 = this->fields.mcBaseP;
    v62 = v60;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (void *)AtlasManager__SetEventUI(v61, v62, 0LL);
    if ( !v61 )
      goto LABEL_208;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v61, (unsigned __int8)Instance & 1, 0LL);
    v63 = this->fields.mShohiSp;
    QUEST_BOARD_SHOHI_SPNAME_PREFIX = QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
    v65 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
    v66 = System_String__Concat_63368612(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v65, 0LL);
    if ( !AtlasManager__SetEventUI(v63, v66, 0LL) )
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
               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_208;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
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
    v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v78 = QuestBoardListViewItemDraw_TypeInfo;
    v79 = v77;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v78 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v79, v78->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_208;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_208;
    Instance = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)Instance,
                 (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_208;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *((float *)Instance + 32) = NEXT_POS_X_QUEST;
    *((float *)Instance + 35) = NEXT_POS_X_QUEST;
  }
  if ( v166 != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v81 = 1;
    }
    else
    {
      if ( !v164 )
        goto LABEL_107;
      v81 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v81, 1, v76);
  }
LABEL_107:
  Instance = this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v84 = QuestBoardListViewItemDraw_TypeInfo;
  v85 = activeSelf;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v84 = QuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v84->static_fields;
  p_x = &static_fields->NEW_POS_QUEST_NEXT.fields.x;
  p_y = &static_fields->NEW_POS_QUEST_NEXT.fields.y;
  p_z = &static_fields->NEW_POS_QUEST_NEXT.fields.z;
  if ( !v85 )
    p_x = &static_fields->NEW_POS_QUEST.fields.x;
  if ( !v85 )
    p_y = &static_fields->NEW_POS_QUEST.fields.y;
  if ( !v85 )
    p_z = &static_fields->NEW_POS_QUEST.fields.z;
  v174.fields.z = *p_z;
  v174.fields.y = *p_y;
  v174.fields.x = *p_x;
  QuestBoardListViewItemDraw__SetNewIcon(this, v174, static_fields->NEW_W_DEFAULT, static_fields->NEW_H_DEFAULT, v83);
  Instance = QuestBoardListViewItemDraw__GetStatusSp(this, 2, v90);
  if ( !Instance )
    goto LABEL_208;
  v91 = (UnityEngine_GameObject_o *)Instance;
  v92 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v92 )
  {
    v94 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v94 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v91, v94->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  (QuestBoardListViewItemDraw_o *)v92,
                  PhaseDetailedEntity,
                  questPhase,
                  !v46,
                  v166 == 2,
                  v93);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v28 + 24), v96);
  v98 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v98 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mMatrixFrame = v98->fields.mTitleLevelStrSp[1].fields.mMatrixFrame;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v98, v40, v97);
  v103 = QuestBoardListViewItemDraw__SetFaceImage(
           this,
           PhaseDetailedEntity,
           mLabelFaceMaskQuestSp,
           mMatrixFrame,
           FaceMaskSpriteName,
           *(UnityEngine_Color_o *)(v28 + 24),
           v102);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v103 )
  {
    Instance = QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v40, v104);
    if ( !mTitleNameLb )
      goto LABEL_208;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    goto LABEL_145;
  }
  Instance = QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_208;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v40 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v107, quest_info_k__BackingField->fields.warId, v108) )
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
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v111, PhaseDetailedEntity, v40, v112);
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
                 (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_208;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
    Instance = this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_208;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v28 + 40) = PhaseDetailedEntity->fields.id;
      v114 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v114,
        (Il2CppObject *)v28,
        Method_QuestBoardListViewItemDraw___c__DisplayClass319_0__SetItemOfWarBoard_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v114, v115);
    }
LABEL_145:
    if ( v166 == 2 )
      goto LABEL_146;
    goto LABEL_147;
  }
  if ( v166 == 2 )
  {
LABEL_146:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v106);
    goto LABEL_149;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v109);
LABEL_147:
  Instance = this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_208;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_149:
  Instance = QuestBoardListViewItemDraw_TypeInfo;
  v116 = this->fields.mTitleNameLb;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  if ( !v116 )
    goto LABEL_208;
  UILabel__SetCondensedScale(v116, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0, 0LL);
  Instance = this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_208;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v117,
                           &phasePresentData,
                           PhaseDetailedEntity,
                           quest_info_k__BackingField->fields.questPhase,
                           v118);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    phasePresentData,
    v166 == 2,
    *(UnityEngine_Color_o *)(v28 + 24),
    v120);
  v121 = quest_info_k__BackingField->fields.questId;
  v122 = phasePresentData;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v124 = *(float *)(v28 + 24);
  v125 = *(float *)(v28 + 28);
  v126 = *(float *)(v28 + 32);
  v127 = *(float *)(v28 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v175.fields.r = v124;
  v175.fields.g = v125;
  v175.fields.b = v126;
  v175.fields.a = v127;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    v121,
    PhasePresentGiftData,
    v122,
    afterClear,
    v175,
    IsRepeatReward,
    v129);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v28 + 24),
    v130);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v131);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  mInfoTextList = this->fields.mInfoTextList;
  Instance = QuestBoardListViewItemDraw__GetCampaignText(
               this,
               PhaseDetailedEntity->fields.id,
               questPhase,
               !v164,
               &fixedVal[1],
               fixedVal,
               &isNotItemConsume,
               v133);
  if ( !mInfoTextList )
    goto LABEL_208;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
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
  v135 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = (void *)QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v136 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v137 = LocalizationManager__Get((System_String_o *)StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/, 0LL);
      v138 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
      QuestBoardInformationText___ctor(v138, v137, v135, 0, 1, 0LL, 0LL);
      if ( !v136 )
        goto LABEL_208;
      items = v136->fields._items;
      v146 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
      ++v136->fields._version;
      if ( !items )
        goto LABEL_208;
      size = v136->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v136,
          (Il2CppObject *)v138,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
      }
      else
      {
        v148 = &items->obj.klass + size;
        v136->fields._size = size + 1;
        v148[4] = (Il2CppClass *)v138;
        sub_1C3B708((PartyOrganizationUtility_o *)(v148 + 4), (int64_t)v138, v139, v140, v141, v142, v143, v144);
      }
    }
  }
LABEL_171:
  v149 = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !v149 )
    goto LABEL_208;
  v150 = v149->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( v150 < 1 )
    goto LABEL_180;
  v152 = this->fields.mListViewObject;
  if ( !v152 )
    goto LABEL_208;
  Instance = v152->fields.manager;
  if ( !Instance )
    goto LABEL_208;
  v153 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v153
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v153 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_209;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, v150, 0LL);
  Instance = System_Collections_Generic_List_object___get_Item(
               v149,
               AlphaAnimCnt,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
  v155 = fixedVal[1];
  quest_info_k__BackingField->fields.isNotItemConsume = isNotItemConsume;
  v156 = fixedVal[0];
  quest_info_k__BackingField->fields.costCalcVal = v155;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = v156;
LABEL_180:
  Instance = *p_mOptionInfoLb;
  v157 = v150 > 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v157, 0LL);
  Instance = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_208;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_208;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v157, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v166 == 2,
    fixedVal[1],
    fixedVal[0],
    isNotItemConsume,
    *(UnityEngine_Color_o *)(v28 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    v162);
  Instance = this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_208;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_208;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !Instance )
    goto LABEL_208;
  v158 = WarBoardQuestMaster__GetEntity(
           (WarBoardQuestMaster_o *)Instance,
           quest_info_k__BackingField->fields.questId,
           questPhase,
           0LL);
  if ( !v158 )
    return;
  v159 = v158;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_208;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !Instance )
    goto LABEL_208;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v159->fields.stageId,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
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
    sub_1C3B9C0(Instance, v30);
  }
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
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
  sub_1C3B708(
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
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *StatusSp; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *v16; // x22
  Il2CppObject *Component_object; // x19
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C1ECF9 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, *(_QWORD *)&w);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    byte_4C1ECF9 = 1;
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
    v18.fields.x = x;
    v18.fields.y = y;
    v18.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v18, 0LL);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_20;
    StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
    if ( !StatusSp )
      goto LABEL_20;
    StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             StatusSp,
                                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !StatusSp )
      goto LABEL_20;
    v16 = (UIWidget_o *)StatusSp;
    UIWidget__set_width((UIWidget_o *)StatusSp, w, 0LL);
    UIWidget__set_height(v16, h, 0LL);
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
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_1C3B9C0(StatusSp, v14);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetNextSprite(
        QuestBoardListViewItemDraw_o *this,
        MapControl_AreaBoardInfo_o *info,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Component_o *mNextSp; // x0
  UISprite_o *v9; // x21
  __int64 v10; // x8
  UnityEngine_Component_o *v11; // x20
  QuestBoardListViewItemDraw_c *v12; // x0
  __int64 v13; // x8
  int v14; // s0

  if ( (byte_4C1ECFC & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, info);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v7);
    byte_4C1ECFC = 1;
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
    v9 = this->fields.mNextSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v9 )
      goto LABEL_36;
    v10 = 200LL;
  }
  else
  {
    mNextSp = (UnityEngine_Component_o *)QuestBoardListViewItemDraw_TypeInfo;
    v9 = this->fields.mNextSp;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    if ( !v9 )
      goto LABEL_36;
    v10 = 192LL;
  }
  UISprite__set_spriteName(
    v9,
    *(System_String_o **)((char *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA + v10),
    0LL);
  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp )
    goto LABEL_36;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0LL);
  if ( !mNextSp )
    goto LABEL_36;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)mNextSp,
                                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  v11 = mNextSp;
  if ( !warEnt )
    goto LABEL_30;
  mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 0x400000, 0LL);
  if ( ((unsigned __int8)mNextSp & 1) == 0 )
  {
    mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 256, 0LL);
    if ( ((unsigned __int8)mNextSp & 1) != 0 )
    {
      if ( v11 )
      {
        v12 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v12 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v13 = 176LL;
        goto LABEL_34;
      }
LABEL_36:
      sub_1C3B9C0(mNextSp, info);
    }
LABEL_30:
    if ( v11 )
    {
      v12 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v12 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v13 = 180LL;
      goto LABEL_34;
    }
    goto LABEL_36;
  }
  if ( !v11 )
    goto LABEL_36;
  v12 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v12 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v13 = 184LL;
LABEL_34:
  v14 = *(int32_t *)((char *)&v12->static_fields->POS_Y_ITVL_AREA + v13);
  LODWORD(v11[5].monitor) = v14;
  *((_DWORD *)&v11[5].fields + 1) = v14;
}


void __fastcall QuestBoardListViewItemDraw__SetPickupIcon(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *StatusSp; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4C1ECFA & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1ECFA = 1;
  }
  StatusSp = (UnityEngine_Object_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(StatusSp, 0LL, 0LL);
  if ( !v6 )
  {
    if ( StatusSp )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)StatusSp,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v6 )
        return;
      if ( Component_object )
      {
        TimeSyncAlphaSwitcher__Clear((TimeSyncAlphaSwitcher_o *)Component_object, 0LL);
        return;
      }
    }
    sub_1C3B9C0(v6, v7);
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
  System_Collections_Generic_List_int__o *v21; // x21
  DataManager_o *Instance; // x0
  __int64 id; // x1
  QuestGroupMaster_o *v24; // x23
  __int64 size; // x8
  UISprite_o *mPrevSp; // x20
  QuestBoardListViewItemDraw_c *v27; // x0
  AtlasManager_c *v28; // x8
  System_String_o *QUEST_BOARD_PREV_PAUSE_ICON_NAME; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *items; // x9
  _QWORD *v32; // x10
  TerminalPramsManager_c *v33; // x0
  const MethodInfo *v34; // x2
  QuestBoardListViewItemDraw_c *v35; // x0
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C1ECFD & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, questEnt);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_int___, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v18);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v20);
    byte_4C1ECFD = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !questEnt )
    goto LABEL_43;
  v24 = (QuestGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, questEnt->fields.id, 16, 0LL);
  if ( (_DWORD)Instance )
  {
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(v24, (int32_t)Instance, 16, 0LL);
    if ( !Instance )
      goto LABEL_43;
    if ( Instance->fields.m_CancellationTokenSource )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ToList_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                    (const MethodInfo_302E840 *)Method_System_Linq_Enumerable_ToList_int___);
      v21 = (System_Collections_Generic_List_int__o *)Instance;
    }
  }
  if ( !v21 )
LABEL_43:
    sub_1C3B9C0(Instance, id);
  size = v21->fields._size;
  if ( (int)size <= 0 )
  {
    id = (unsigned int)questEnt->fields.id;
    items = v21->fields._items;
    v32 = Method_System_Collections_Generic_List_int__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_43;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v21,
        id,
        *(const MethodInfo_366EC48 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      if ( isInterruptedQuest )
        goto LABEL_13;
    }
    else
    {
      v21->fields._size = size + 1;
      items->m_Items[size + 1] = id;
      if ( isInterruptedQuest )
        goto LABEL_13;
    }
  }
  else if ( isInterruptedQuest )
  {
LABEL_13:
    mPrevSp = this->fields.mPrevSp;
    v27 = QuestBoardListViewItemDraw_TypeInfo;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v27 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v28 = AtlasManager_TypeInfo;
    QUEST_BOARD_PREV_PAUSE_ICON_NAME = v27->static_fields->QUEST_BOARD_PREV_PAUSE_ICON_NAME;
    goto LABEL_16;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ED27 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, id);
    byte_4C1ED27 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  if ( System_Collections_Generic_List_int___Contains(
         v21,
         v33->static_fields->_LastPlayedQuestId_k__BackingField,
         (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 1, v34);
    if ( !Instance )
      goto LABEL_43;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
    {
      mPrevSp = this->fields.mPrevSp;
      v35 = QuestBoardListViewItemDraw_TypeInfo;
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v35 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v28 = AtlasManager_TypeInfo;
      QUEST_BOARD_PREV_PAUSE_ICON_NAME = v35->static_fields->QUEST_BOARD_PREV_ICON_NAME;
LABEL_16:
      if ( !v28->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v28);
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
            v36.fields.x = x;
            v36.fields.y = y;
            v36.fields.z = z;
            GameObjectExtensions__SetLocalPosition(gameObject, v36, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *mTitleLevelRoot; // x20
  UnityEngine_Component_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v16; // x21
  float v17; // s0
  float v18; // s0
  float v19; // s8
  struct UILabel_o *mTitleLevelLb; // x8
  UnityEngine_Object_o *v21; // x20
  int mWidth; // s8
  float klass_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_4C1ED20 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, recommendLv);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    byte_4C1ED20 = 1;
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
                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
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
        v25.fields.r = r;
        v25.fields.g = g;
        v25.fields.b = b;
        v25.fields.a = a;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v25, 0LL);
        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
        if ( IsNullOrEmpty )
        {
          v26.fields.r = r;
          v26.fields.g = g;
          v26.fields.b = b;
          v26.fields.a = a;
          UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v26, 0LL);
          IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp;
          if ( IsNullOrEmpty )
          {
            v27.fields.r = r;
            v27.fields.g = g;
            v27.fields.b = b;
            v27.fields.a = a;
            UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v27, 0LL);
            IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
            if ( IsNullOrEmpty )
            {
              IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
              if ( this->fields.mTitleLevelStrSp )
              {
                v16 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
                IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp,
                                                             0LL);
                if ( IsNullOrEmpty )
                {
                  LODWORD(v17) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)IsNullOrEmpty,
                                                 0LL);
                  GameObjectExtensions__SetLocalPositionX(v16, v17, 0LL);
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
                      v18 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0LL);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v19 = (float)(SLODWORD(IsNullOrEmpty[7].klass) / 2) + (float)(v18 * -0.5);
LABEL_36:
                        gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
                        GameObjectExtensions__AddLocalPositionX(gameObject, v19, 0LL);
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
                                                                   (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      mTitleLevelLb = this->fields.mTitleLevelLb;
                      if ( mTitleLevelLb )
                      {
                        v21 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = mTitleLevelLb->fields.mWidth;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        klass_low = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v21 )
                            goto LABEL_37;
                          if ( klass_low > (float)SLODWORD(v21[2].klass) )
                            klass_low = (float)SLODWORD(v21[2].klass);
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v19 = klass_low * -0.5;
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
    sub_1C3B9C0(IsNullOrEmpty, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *mOptionRestrinctionSp; // x0
  UILabel_o *mOptionRestrinctionLb; // x22
  struct UILabel_o *v13; // x8
  RestrictionBaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1ECEB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C1ECEB = 1;
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mOptionRestrinctionSp
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)mOptionRestrinctionSp,
                                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)QuestRestrictionMaster__GetRestrictionName(
                                                             (QuestRestrictionMaster_o *)mOptionRestrinctionSp,
                                                             questId,
                                                             phase,
                                                             0LL),
        !mOptionRestrinctionLb) )
  {
LABEL_17:
    sub_1C3B9C0(mOptionRestrinctionSp, *(_QWORD *)&questId);
  }
  UILabel__set_text(mOptionRestrinctionLb, (System_String_o *)mOptionRestrinctionSp, 0LL);
LABEL_15:
  v13 = this->fields.mOptionRestrinctionLb;
  if ( !v13 )
    goto LABEL_17;
  return !System_String__IsNullOrEmpty(v13->fields.mText, 0LL);
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
    sub_1C3B9C0(mOptionRestrinctionLb, *(_QWORD *)&spacingX);
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
      sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(StatusSp, v6);
  UnityEngine_GameObject__SetActive(StatusSp, isActive, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetStatusToggle(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *StatusSp; // x0
  QuestBoardListViewManager_c *v6; // x1
  Il2CppObject *Component_object; // x19
  const MethodInfo *v8; // x2
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  TimeSyncAlphaSwitcher_o *v10; // x20
  __int64 methodPtr_low; // x9
  float v12; // s8
  QuestBoardListViewItemDraw_o *v13; // x0
  MapControl_QuestInfo_o *v14; // x1
  QuestEntity_o *v15; // x2
  int64_t v16; // x3
  const MethodInfo *v17; // x4

  if ( (byte_4C1ECFE & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, method);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v4);
    byte_4C1ECFE = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       StatusSp,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v8);
  if ( !StatusSp )
    goto LABEL_12;
  StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                           StatusSp,
                                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_12;
  v10 = (TimeSyncAlphaSwitcher_o *)StatusSp;
  StatusSp = (UnityEngine_GameObject_o *)mListViewObject->fields.manager;
  if ( !StatusSp )
    goto LABEL_12;
  v6 = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(StatusSp->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (QuestBoardListViewManager_c *)StatusSp->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewManager_TypeInfo )
  {
    if ( Component_object )
    {
      v12 = *(float *)&StatusSp[24].fields.m_CachedPtr;
      TimeSyncAlphaSwitcher__SetAlphaBlink((TimeSyncAlphaSwitcher_o *)Component_object, 2, 0, v12, 0LL);
      if ( v10 )
      {
        TimeSyncAlphaSwitcher__SetAlphaBlink(v10, 2, 1, v12, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C3B9C0(StatusSp, v6);
  }
  sub_1C3BC80(StatusSp);
  QuestBoardListViewItemDraw__SetAdvanceNoticeText(v13, v14, v15, v16, v17);
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
  if ( (byte_4C1ED14 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, questBoardItem);
    byte_4C1ED14 = 1;
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
      this = (QuestBoardListViewItemDraw_o *)sub_1C3B8A0(
                                               ExchangeSvtCoinBannerEntity,
                                               bannerEntList->obj.klass->_1.element_class);
      if ( !this )
      {
        v40 = sub_1C3B9E4();
        sub_1C3B88C(v40, 0LL);
      }
      if ( mBannerCount - 1 >= bannerEntList->max_length )
        goto LABEL_64;
      v24 = (char *)bannerEntList + 8 * mBannerCount - 8;
      *((_QWORD *)v24 + 4) = v17;
      sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 32), v17, v18, v19, v20, v21, v22, v23);
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
    sub_1C3B9C8(this, questBoardItem);
  this = (QuestBoardListViewItemDraw_o *)v25->m_Items[0];
  if ( !this )
    goto LABEL_60;
  TerminalBannerComponent__StartLoadAndDisp((TerminalBannerComponent_o *)this, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ED28 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, questBoardItem);
    byte_4C1ED28 = 1;
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
    sub_1C3B9C0(this, questBoardItem);
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
        sub_1C3B9C8(this, method);
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
    sub_1C3B9C0(this, method);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetupEntryBanner(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v9; // x20
  QuestBoardListViewItemDraw_o *v10; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v12; // x21
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  QuestBoardListViewItemDraw_c *v15; // x0

  v2 = this;
  if ( (byte_4C1ED16 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v6);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
    byte_4C1ED16 = 1;
  }
  mTerminalBanners = v2->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_35;
  if ( !mTerminalBanners->max_length )
    sub_1C3B9C8(this, method);
  v9 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v9 )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      if ( this )
      {
        v10 = this;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)Component_object, 0LL);
        }
        v12 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v10,
                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)v12, 0LL);
        }
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1ED28 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
          byte_4C1ED28 = 1;
        }
        v14 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v14 = TerminalPramsManager_TypeInfo;
        }
        if ( v14->static_fields->_IsPlayedEntryBanner_k__BackingField )
        {
          v2->fields._bannerState_k__BackingField = 2;
          return;
        }
        v2->fields._bannerState_k__BackingField = 1;
        v15 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v15 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(
          (UnityEngine_GameObject_o *)v10,
          v15->static_fields->BANNER_ENTORY_START_POS_X,
          0LL);
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v10,
                                                 (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
    sub_1C3B9C0(this, method);
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
  __int64 v18; // x1
  __int64 v19; // x1
  clsQuestCheck_o *Instance; // x0
  bool v21; // w23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  QuestBoardListViewItemDraw_c *v25; // x0
  int32_t phase; // w9
  System_String_o *QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x20
  Il2CppObject *v28; // x0
  System_String_o *v29; // x20
  int32_t v30; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C1ECF5 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&questId);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v18);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19);
    byte_4C1ECF5 = 1;
  }
  if ( afterClearType == 3 )
  {
    Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    v21 = !clsQuestCheck__IsQuestClear(Instance, questId, 0, 0LL);
    if ( !isContainPhasePresent )
    {
LABEL_6:
      Instance = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
      if ( !Instance )
        goto LABEL_37;
      Instance = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v21 && !isRepeatReward, 0LL);
      Instance = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
      if ( !Instance )
        goto LABEL_37;
      v31.fields.r = r;
      v31.fields.g = g;
      v31.fields.b = b;
      v31.fields.a = a;
      UIWidget__set_color((UIWidget_o *)Instance, v31, 0LL);
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
    v21 = 0;
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
          v32.fields.r = r;
          v32.fields.g = g;
          v32.fields.b = b;
          v32.fields.a = a;
          UIWidget__set_color((UIWidget_o *)Instance, v32, 0LL);
          v25 = QuestBoardListViewItemDraw_TypeInfo;
          if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v25 = QuestBoardListViewItemDraw_TypeInfo;
          }
          phase = phasePresentData->fields.phase;
          QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = v25->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
          v30 = phase;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v22, v23, v24);
          Instance = (clsQuestCheck_o *)System_String__Format(QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v28, 0LL);
          if ( this->fields.mRewardPhaseNumSP )
          {
            v29 = (System_String_o *)Instance;
            UISprite__set_atlas(this->fields.mRewardPhaseNumSP, this->fields.mTerminalAtlas, 0LL);
            Instance = (clsQuestCheck_o *)this->fields.mRewardPhaseNumSP;
            if ( Instance )
            {
              UISprite__set_spriteName((UISprite_o *)Instance, v29, 0LL);
              Instance = (clsQuestCheck_o *)this->fields.mRewardPhaseNumSP;
              if ( Instance )
              {
                v33.fields.r = r;
                v33.fields.g = g;
                v33.fields.b = b;
                v33.fields.a = a;
                UIWidget__set_color((UIWidget_o *)Instance, v33, 0LL);
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
    sub_1C3B9C0(Instance, *(_QWORD *)&questId);
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
  v34.fields.r = r;
  v34.fields.g = g;
  v34.fields.b = b;
  v34.fields.a = a;
  UIWidget__set_color((UIWidget_o *)Instance, v34, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t questId; // w22
  int32_t questPhase; // w27
  int32_t PhaseMax; // w8
  int32_t v20; // w24
  Il2CppObject *Master_object; // x25
  Il2CppObject *v22; // x21
  bool IsLimitCountSealQuest; // w21
  bool IsOpenQuestBehaviorCond; // w23
  bool v25; // w22
  UISprite_o *v26; // x20
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v11 = (QuestBoardListViewItemDraw_o **)this;
  if ( (byte_4C1ECF6 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, questInfo);
    sub_1C3B764(&CondType_TypeInfo, v12);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_1C3B764(&DataManager_TypeInfo, v15);
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&StringLiteral_20572/*"ivory"*/, v16);
    byte_4C1ECF6 = 1;
  }
  if ( !questInfo )
    goto LABEL_45;
  questId = questInfo->fields.questId;
  questPhase = questInfo->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(questInfo, 0LL);
  if ( questPhase + 1 < PhaseMax )
    v20 = questPhase + 1;
  else
    v20 = PhaseMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)CondType__IsQuestClear_39011304(questId, -1, 0, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_45;
    IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                              (ServantLimitImageMaster_o *)v22,
                              questId,
                              0LL);
    if ( Master_object )
    {
      IsOpenQuestBehaviorCond = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                  (QuestBehaviorMaster_o *)Master_object,
                                  questId,
                                  v20,
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
                                  v20,
                                  5,
                                  0LL);
LABEL_18:
      IsLimitCountSealQuest = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                (QuestBehaviorMaster_o *)Master_object,
                                questId,
                                v20,
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
  this = (QuestBoardListViewItemDraw_o *)CondType__IsQuestClear_39011304(questId, -1, 0, 0LL);
  v25 = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !userQuestEnt )
      goto LABEL_45;
    v25 = !UserQuestEntity__HasStatus(userQuestEnt, 4, 0LL) && !IsLimitCountSealQuest && !IsOpenQuestBehaviorCond;
  }
  this = v11[50];
  if ( !this )
    goto LABEL_45;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v25, 0LL);
  this = v11[50];
  if ( !this )
    goto LABEL_45;
  v27.fields.r = r;
  v27.fields.g = g;
  v27.fields.b = b;
  v27.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v27, 0LL);
  this = v11[52];
  if ( !this
    || (this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsOpenQuestBehaviorCond, 0LL),
        (this = v11[52]) == 0LL) )
  {
LABEL_45:
    sub_1C3B9C0(this, questInfo);
  }
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v28, 0LL);
  v26 = (UISprite_o *)v11[53];
  if ( IsLimitCountSealQuest )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v26, (System_String_o *)StringLiteral_20572/*"ivory"*/, 0LL);
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
            v29.fields.b = b;
            v29.fields.a = a;
            v29.fields.r = r;
            v29.fields.g = g;
            UIWidget__set_color((UIWidget_o *)this, v29, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_45;
  }
  if ( !v26 )
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
  __int64 giftIconId; // x1
  int64_t mRewardIcon; // x0
  int32_t *p_giftId; // x8
  int32_t v34; // w25
  bool v35; // w1
  GiftMaster_o *v36; // x24
  System_Collections_Generic_IEnumerable_TSource__o *GiftListById; // x23
  QuestBoardListViewItemDraw___c_c *v38; // x8
  System_Func_object__bool__o *_9__330_0; // x26
  Il2CppObject *v40; // x27
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  char v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Object_array *v49; // x23
  __int64 v50; // x25
  int64_t v51; // x2
  char v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Func_object__bool__o *v57; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  int giftId; // w1
  GiftEntity_array *v60; // x0
  QuestBoardListViewItemDraw___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x21
  System_Func_object__bool__o *_9__330_1; // x22
  Il2CppObject *v64; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v65; // x0
  int64_t v66; // x2
  char v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x10
  Il2CppObject *v75; // x8
  int monitor_high; // w9
  int32_t v77; // w2
  bool v78; // w1
  int32_t v79; // w3
  int64_t v80; // x2
  char v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C1ECF2 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_GiftMaster___, questEnt);
    sub_1C3B764(&Method_DataManager_GetMaster_GiftDetailMaster___, v17);
    sub_1C3B764(&DataManager_TypeInfo, v18);
    sub_1C3B764(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__, v19);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v20);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_GiftEntity___, v21);
    sub_1C3B764(&System_Func_GiftEntity__bool__TypeInfo, v22);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v23);
    sub_1C3B764(&QuestBoardListViewManager_TypeInfo, v24);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__330_0__, v26);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__330_1__, v27);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__DisplayClass330_0__SetupRewardIconDisp_b__2__, v28);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass330_0_TypeInfo, v29);
    sub_1C3B764(&QuestBoardListViewItemDraw___c_TypeInfo, v30);
    byte_4C1ECF2 = 1;
  }
  entity = 0LL;
  this->fields.mRewardIconInfs = 0LL;
  sub_1C3B708(
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
  v34 = *p_giftId;
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
    if ( v34 < 1 )
    {
      mRewardIcon = (int64_t)this->fields.mRewardObj;
      if ( !mRewardIcon )
        goto LABEL_84;
      v35 = 0;
      goto LABEL_23;
    }
    mRewardIcon = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mRewardIcon )
      goto LABEL_84;
    mRewardIcon = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)mRewardIcon,
                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !mRewardIcon )
      goto LABEL_84;
    v36 = (GiftMaster_o *)mRewardIcon;
    GiftListById = (System_Collections_Generic_IEnumerable_TSource__o *)GiftMaster__GetGiftListById(
                                                                          (GiftMaster_o *)mRewardIcon,
                                                                          v34,
                                                                          0LL);
    v38 = QuestBoardListViewItemDraw___c_TypeInfo;
    if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
      v38 = QuestBoardListViewItemDraw___c_TypeInfo;
    }
    _9__330_0 = (System_Func_object__bool__o *)v38->static_fields->__9__330_0;
    if ( !_9__330_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__330_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__330_0,
        v40,
        Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__330_0__,
        0LL);
      static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__330_0 = (struct System_Func_GiftEntity__bool__o *)_9__330_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__330_0,
        (int64_t)_9__330_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    v48 = System_Linq_Enumerable__Where_object_(
            GiftListById,
            (System_Func_TSource__bool__o *)_9__330_0,
            (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    v49 = System_Linq_Enumerable__ToArray_object_(
            v48,
            (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    mRewardIcon = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GiftDetailMaster___);
    if ( !mRewardIcon )
      goto LABEL_84;
    mRewardIcon = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)mRewardIcon,
                    &entity,
                    v34,
                    (const MethodInfo_329AE94 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    if ( v49 && (mRewardIcon & 1) != 0 )
    {
      v50 = sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass330_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass330_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass330_0_o *)v50,
        0LL);
      mRewardIcon = (int64_t)entity;
      if ( !entity )
        goto LABEL_84;
      mRewardIcon = (int64_t)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds((GiftDetailEntity_o *)entity, 0LL);
      if ( !v50 )
        goto LABEL_84;
      *(_QWORD *)(v50 + 16) = mRewardIcon;
      sub_1C3B708((PartyOrganizationUtility_o *)(v50 + 16), mRewardIcon, v51, v52, v53, v54, v55, v56);
      mRewardIcon = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v50 + 16), 0LL);
      if ( (mRewardIcon & 1) != 0 )
      {
LABEL_47:
        if ( !phasePresentData || *(_QWORD *)&v49->max_length )
          goto LABEL_89;
        if ( questEnt )
        {
          giftId = questEnt->fields.giftId;
          if ( giftId < 1 )
            goto LABEL_89;
          v60 = GiftMaster__GetGiftListById(v36, giftId, 0LL);
          v61 = QuestBoardListViewItemDraw___c_TypeInfo;
          v62 = (System_Collections_Generic_IEnumerable_TSource__o *)v60;
          if ( !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
            v61 = QuestBoardListViewItemDraw___c_TypeInfo;
          }
          _9__330_1 = (System_Func_object__bool__o *)v61->static_fields->__9__330_1;
          if ( !_9__330_1 )
          {
            if ( !v61->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v61);
              v61 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            v64 = (Il2CppObject *)v61->static_fields->__9;
            _9__330_1 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_GiftEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__330_1,
              v64,
              Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__330_1__,
              0LL);
            v65 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
            v65->__9__330_1 = (struct System_Func_GiftEntity__bool__o *)_9__330_1;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&v65->__9__330_1,
              (int64_t)_9__330_1,
              v66,
              v67,
              v68,
              v69,
              v70,
              v71);
          }
          v72 = System_Linq_Enumerable__Where_object_(
                  v62,
                  (System_Func_TSource__bool__o *)_9__330_1,
                  (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_GiftEntity___);
          mRewardIcon = (int64_t)System_Linq_Enumerable__ToArray_object_(
                                   v72,
                                   (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
          v49 = (System_Object_array *)mRewardIcon;
          if ( mRewardIcon )
          {
LABEL_89:
            giftIconId = *(_QWORD *)&v49->max_length;
            if ( !giftIconId )
            {
              mRewardIcon = (int64_t)this->fields.mRewardObj;
              if ( !mRewardIcon )
                goto LABEL_84;
              v78 = 0;
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
                  if ( (unsigned int)mRewardIcon < v49->max_length )
                  {
                    v75 = v49->m_Items[(int)mRewardIcon];
                    if ( !v75 )
                      goto LABEL_84;
                    giftIconId = HIDWORD(v75[2].monitor);
                    mRewardIcon = (int64_t)this->fields.mRewardIcon;
                    monitor_high = HIDWORD(v75[1].monitor);
                    if ( (int)giftIconId < 1 )
                    {
                      if ( !mRewardIcon )
                        goto LABEL_84;
                      if ( monitor_high <= 1 )
                        v79 = -1;
                      else
                        v79 = HIDWORD(v75[1].monitor);
                      ItemIconComponent__SetGift_39566180(
                        (ItemIconComponent_o *)mRewardIcon,
                        HIDWORD(v75[1].klass),
                        (int32_t)v75[1].monitor,
                        v79,
                        1,
                        0LL);
                    }
                    else
                    {
                      if ( !mRewardIcon )
                        goto LABEL_84;
                      if ( monitor_high <= 1 )
                        v77 = -1;
                      else
                        v77 = HIDWORD(v75[1].monitor);
                      ItemIconComponent__SetItemImage_39568612((ItemIconComponent_o *)mRewardIcon, giftIconId, v77, 0LL);
                    }
                    mRewardIcon = (int64_t)this->fields.mRewardIcon;
                    if ( mRewardIcon )
                    {
                      mRewardIcon = (int64_t)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)mRewardIcon,
                                               0LL);
                      if ( mRewardIcon )
                      {
                        v78 = 1;
LABEL_83:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, v78, 0LL);
                        this->fields.mRewardIconInfs = (struct GiftEntity_array *)v49;
                        sub_1C3B708(
                          (PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs,
                          (int64_t)v49,
                          v80,
                          v81,
                          v82,
                          v83,
                          v84,
                          v85);
                        goto LABEL_24;
                      }
                    }
                    goto LABEL_84;
                  }
                }
                else
                {
                  sub_1C3BC80(mRewardIcon);
                }
                sub_1C3B9C8(mRewardIcon, giftIconId);
              }
            }
          }
        }
LABEL_84:
        sub_1C3B9C0(mRewardIcon, giftIconId);
      }
      v57 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v57,
        (Il2CppObject *)v50,
        Method_QuestBoardListViewItemDraw___c__DisplayClass330_0__SetupRewardIconDisp_b__2__,
        0LL);
      v58 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v49,
              (System_Func_TSource__bool__o *)v57,
              (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      mRewardIcon = (int64_t)System_Linq_Enumerable__ToArray_object_(
                               v58,
                               (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v49 = (System_Object_array *)mRewardIcon;
    }
    if ( !v49 )
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
  v35 = 1;
LABEL_23:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, v35, 0LL);
LABEL_24:
  mRewardIcon = (int64_t)this->fields.mRewardObj;
  if ( !mRewardIcon )
    goto LABEL_84;
  mRewardIcon = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mRewardIcon,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !mRewardIcon )
    goto LABEL_84;
  v87.fields.r = r;
  v87.fields.g = g;
  v87.fields.b = b;
  v87.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardIcon, v87, 0LL);
  mRewardIcon = (int64_t)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_84;
  v88.fields.r = r;
  v88.fields.g = g;
  v88.fields.b = b;
  v88.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)mRewardIcon, v88, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__StartEntryBanner(
        QuestBoardListViewItemDraw_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v28; // x22
  struct ScrollArrowComponent_array *mBannerArrows; // x20
  __int64 v30; // x8
  unsigned __int64 v31; // x21
  UnityEngine_GameObject_o *v32; // x20
  Il2CppObject *v33; // x21
  int v34; // s0
  int v35; // s1
  int v36; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  QuestBoardListViewItemDraw_c *v39; // x0
  float BANNER_ENTORY_EFFECT_DURATION; // s0
  EventDelegate_Callback_o *v41; // x22
  float v42; // s0

  if ( (byte_4C1ED17 & 1) == 0 )
  {
    sub_1C3B764(&EventDelegate_Callback_TypeInfo, endCallback);
    sub_1C3B764(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v8);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v9);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__DisplayClass381_0__StartEntryBanner_b__0__, v10);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass381_0_TypeInfo, v11);
    byte_4C1ED17 = 1;
  }
  v12 = sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass381_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass381_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass381_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_32;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = endCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)endCallback, v21, v22, v23, v24, v25, v26);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ED28 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
    byte_4C1ED28 = 1;
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
  v28 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
LABEL_16:
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    return;
  }
  if ( !v28 )
    goto LABEL_32;
  TerminalBannerComponent__SetBannerTextureActive((TerminalBannerComponent_o *)v28, 1, 0LL);
  mBannerArrows = this->fields.mBannerArrows;
  if ( !mBannerArrows )
    goto LABEL_32;
  v30 = *(_QWORD *)&mBannerArrows->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( v31 < (unsigned int)v30 )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)mBannerArrows->m_Items[v31], 1, 0LL);
      LODWORD(v30) = mBannerArrows->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_23;
    }
LABEL_31:
    sub_1C3B9C8(gameObject, v14);
  }
LABEL_23:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v32 = gameObject;
  v33 = UnityEngine_GameObject__AddComponent_object_(
          gameObject,
          (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v34 = GameObjectExtensions__GetLocalPosition(v32, 0LL);
  if ( !v33 )
    goto LABEL_32;
  LODWORD(v33[8].klass) = v34;
  HIDWORD(v33[8].klass) = v35;
  LODWORD(v33[8].monitor) = v36;
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4C1C511 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(void **)((char *)&v33[8].monitor + 4) = *(void **)&static_fields->zeroVector.fields.x;
  *((float *)&v33[9].klass + 1) = z;
  v39 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v39 = QuestBoardListViewItemDraw_TypeInfo;
  }
  BANNER_ENTORY_EFFECT_DURATION = v39->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v33[2].klass) = 2;
  *(float *)&v33[3].monitor = BANNER_ENTORY_EFFECT_DURATION;
  v41 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v41,
    (Il2CppObject *)v12,
    Method_QuestBoardListViewItemDraw___c__DisplayClass381_0__StartEntryBanner_b__0__,
    0LL);
  UITweener__SetOnFinished((UITweener_o *)v33, v41, 0LL);
  UITweener__PlayForward((UITweener_o *)v33, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             v32,
                                             (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gameObject )
LABEL_32:
    sub_1C3B9C0(gameObject, v14);
  gameObject[5].monitor = (void *)0x3F80000000000000LL;
  v42 = QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(gameObject[1].monitor) = 3;
  *(float *)&gameObject[2].monitor = v42;
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
  if ( (byte_4C1ED19 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&index);
    byte_4C1ED19 = 1;
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
        sub_1C3B9C8(this, *(_QWORD *)&index);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v8 = mBannerPointSps->m_Items[v5];
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      if ( !v8 )
LABEL_15:
        sub_1C3B9C0(this, *(_QWORD *)&index);
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

  if ( (byte_4C1ECE2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, questBoardItem);
    byte_4C1ECE2 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0LL )
  {
    sub_1C3B9C0(mInfoTextList, questBoardItem);
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
      sub_1C3B9C0(this, questBoardItem);
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
  UnityEngine_Vector2_o ScreenPosition_48001872; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  v4 = this;
  if ( (byte_4C1ED1C & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_1C3B764(&CTouch_TypeInfo, questBoardManager);
    byte_4C1ED1C = 1;
  }
  if ( v4->fields.mIsPressedForDragX )
  {
    v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_1C3B9C0(this, questBoardManager);
    mUICamera = questBoardManager->fields.mUICamera;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_48001872 = CTouch__getScreenPosition_48001872(mUICamera, 0LL);
    mIsEnableDragX = v4->fields.mIsEnableDragX;
    v4->fields.mTouchPosNow = ScreenPosition_48001872;
    if ( mIsEnableDragX )
      v4->fields.mTouchPosDif = ScreenPosition_48001872.fields.x - v4->fields.mTouchPosOld.fields.x;
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
  if ( (byte_4C1ED25 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, message);
    byte_4C1ED25 = 1;
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
    sub_1C3B9C0(label, message);
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
    sub_1C3B9C0(0LL, onOff);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1ED63 & 1) == 0 )
  {
    sub_1C3B764(&QuestBoardListViewItemDraw___c_TypeInfo, v1);
    byte_4C1ED63 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(QuestBoardListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestBoardListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewItemDraw___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)QuestBoardListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall QuestBoardListViewItemDraw___c___ctor(QuestBoardListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c___IsValidSupportSelection_b__359_0(
        QuestBoardListViewItemDraw___c_o *this,
        RestrictionEntity_o *rest,
        const MethodInfo *method)
{
  if ( !rest )
    sub_1C3B9C0(this, 0LL);
  return rest->fields.type == 9;
}


int32_t __fastcall QuestBoardListViewItemDraw___c___SetItemOfQuest_b__318_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1C3B9C0(this, 0LL);
  return value->fields.enemyId;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__330_0(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C3B9C0(this, 0LL);
  return ent->fields.type != 15;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__330_1(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C3B9C0(this, 0LL);
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
  if ( (byte_4C1ED64 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)sub_1C3B764(&NetworkManager_TypeInfo, quest);
    byte_4C1ED64 = 1;
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
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, quest);
    byte_4C1C955 = 1;
  }
  this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)NetworkManager_TypeInfo;
  }
  if ( !userQuestMst )
LABEL_17:
    sub_1C3B9C0(this, quest);
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
      sub_1C3B9C0(this, quest);
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
      sub_1C3B9C0(this, method);
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
      sub_1C3B9C0(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Int32_array *itemIds; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_4C1ED65 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_int____77906328, info);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v5);
    sub_1C3B764(&Method_QuestBoardListViewItemDraw___c__DisplayClass330_1__SetupRewardIconDisp_b__3__, v6);
    sub_1C3B764(&QuestBoardListViewItemDraw___c__DisplayClass330_1_TypeInfo, v7);
    byte_4C1ED65 = 1;
  }
  v8 = sub_1C3B9B0(QuestBoardListViewItemDraw___c__DisplayClass330_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v9, v10);
  *(_QWORD *)(v8 + 16) = info;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)info, v11, v12, v13, v14, v15, v16);
  itemIds = this->fields.itemIds;
  v18 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_QuestBoardListViewItemDraw___c__DisplayClass330_1__SetupRewardIconDisp_b__3__,
    0LL);
  return !BasicHelper__Any_int__50178292(
            itemIds,
            (System_Func_T__bool__o *)v18,
            (const MethodInfo_2FDA8F4 *)Method_BasicHelper_Any_int____77906328);
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
    sub_1C3B9C0(this, x);
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
    sub_1C3B9C0(this, entity);
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
    sub_1C3B9C0(this, entity);
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
  const MethodInfo_37A8BAC *v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_Nullable_long__o v9; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v10; // 0:x0.16

  if ( (byte_4C1ED66 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Nullable_long___ctor__, x);
    byte_4C1ED66 = 1;
  }
  v10.fields.value = this->fields.checkTime;
  *(_QWORD *)&v10.fields.hasValue = &v9;
  *(_QWORD *)&v9.fields.hasValue = 0LL;
  v9.fields.value = 0LL;
  System_Nullable_long____ctor(v10, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_1C3B9C0(v6, v7);
  return !UserOwnItemInfo__IsExpired(x, v9, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass381_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass381_0___StartEntryBanner_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct QuestBoardListViewItemDraw_o *_4__this; // x8

  if ( (byte_4C1ED67 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1ED67 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EDF4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1EDF4 = 1;
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
    sub_1C3B9C0(v3, method);
  _4__this->fields._bannerState_k__BackingField = 2;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass393_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass393_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass393_0___LoadBoardIconTexture_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass393_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass393_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  QuestBoardListViewItemDraw_c *v19; // x0
  System_String_o *v20; // x19
  struct QuestBoardListViewItemDraw_o *v21; // x8
  UnityEngine_Shader_o *v22; // x21
  UnityEngine_Material_o *v23; // x20
  struct QuestBoardListViewItemDraw_o *v24; // x8
  struct QuestBoardListViewItemDraw_o *v25; // x8
  struct QuestBoardListViewItemDraw_o *v26; // x8
  AssetData_o *boardIconAssetData; // x21
  Il2CppObject *Object_object__50142412; // x0

  v4 = this;
  if ( (byte_4C1ED68 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_Texture2D____77902880, assetData);
    sub_1C3B764(&AssetManager_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Material_TypeInfo, v6);
    sub_1C3B764(&QuestBoardListViewItemDraw_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C3B764(&StringLiteral_16845/*"bit_battlefinish01"*/, v9);
    sub_1C3B764(&StringLiteral_5069/*"DataTable.MinimumCapacity"*/, v10);
    this = (QuestBoardListViewItemDraw___c__DisplayClass393_0_o *)sub_1C3B764(&StringLiteral_16584/*"assemblyName cannot have zero length."*/, v11);
    byte_4C1ED68 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (QuestBoardListViewItemDraw___c__DisplayClass393_0_o *)System_String__op_Inequality(
                                                                  v4->fields.loadBoardIconName,
                                                                  _4__this->fields.boardIconName,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v21 = v4->fields.__4__this;
    if ( v21 )
    {
      v21->fields.boardIconAssetData = assetData;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v21->fields.boardIconAssetData,
        (int64_t)assetData,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5069/*"DataTable.MinimumCapacity"*/, 0LL);
      v23 = (UnityEngine_Material_o *)sub_1C3B9B0(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v23, v22, 0LL);
      v24 = v4->fields.__4__this;
      if ( v24 )
      {
        this = (QuestBoardListViewItemDraw___c__DisplayClass393_0_o *)v24->fields.boardIconTexture;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass393_0_o *)((__int64 (__fastcall *)(QuestBoardListViewItemDraw___c__DisplayClass393_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                          this,
                                                                          v23,
                                                                          this->klass[1].vtable._3_ToString.methodPtr);
          v25 = v4->fields.__4__this;
          if ( v25 )
          {
            this = (QuestBoardListViewItemDraw___c__DisplayClass393_0_o *)v25->fields.boardIconAssetData;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw___c__DisplayClass393_0_o *)AssetData__GetObject_object__50142412(
                                                                              (AssetData_o *)this,
                                                                              v25->fields.boardIconName,
                                                                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
              if ( v23 )
              {
                UnityEngine_Material__set_mainTexture(v23, (UnityEngine_Texture_o *)this, 0LL);
                v26 = v4->fields.__4__this;
                if ( v26 )
                {
                  boardIconAssetData = v26->fields.boardIconAssetData;
                  this = (QuestBoardListViewItemDraw___c__DisplayClass393_0_o *)System_String__Concat_63368612(
                                                                                  v26->fields.boardIconName,
                                                                                  (System_String_o *)StringLiteral_16845/*"bit_battlefinish01"*/,
                                                                                  0LL);
                  if ( boardIconAssetData )
                  {
                    Object_object__50142412 = AssetData__GetObject_object__50142412(
                                                boardIconAssetData,
                                                (System_String_o *)this,
                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
                    UnityEngine_Material__SetTexture(
                      v23,
                      (System_String_o *)StringLiteral_16584/*"assemblyName cannot have zero length."*/,
                      (UnityEngine_Texture_o *)Object_object__50142412,
                      0LL);
                    this = (QuestBoardListViewItemDraw___c__DisplayClass393_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C3B9C0(this, assetData);
  }
  v19 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v19 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v20 = System_String__Concat_63368612(
          v19->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          v4->fields.loadBoardIconName,
          0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v20, 0LL);
}